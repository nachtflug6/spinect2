// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.OpenXR.Remoting;
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
using UnityEngine;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR.Editor
{
    /// <summary>
    /// Represents a standalone window for accessing editor remoting settings.
    /// </summary>
    internal class EditorRemotingWindow : EditorWindow
    {
        private const string ConnectionInfo = "Remoting will automatically connect to the above IP address on play.";

        private static readonly GUIContent FeatureEnabledLabel = EditorGUIUtility.TrTextContent("Disable Editor Remoting");
        private static readonly GUIContent FeatureDisabledLabel = EditorGUIUtility.TrTextContent("Enable Editor Remoting");
        private static readonly GUIContent EnableDependenciesLabel = EditorGUIUtility.TrTextContent("Enable Missing Dependencies");

        private UnityEditor.Editor editorRemotingPluginEditor;
        private EditorRemotingPlugin feature;
        private Vector2 scrollPos;

        /// <summary>
        /// Initializes the Remoting Window class
        /// </summary>
        [MenuItem(EditorRemotingValidator.EditorRemotingMenuPath)]
        private static void Init()
        {
            GetWindow<EditorRemotingWindow>("OpenXR Editor Remoting");
        }

        private void OnGUI()
        {
            using (var scroll = new EditorGUILayout.ScrollViewScope(scrollPos))
            {
                scrollPos = scroll.scrollPosition;

                if (feature == null)
                {
                    FeatureHelpers.RefreshFeatures(BuildTargetGroup.Standalone);
                    feature = OpenXRSettings.Instance.GetFeature<EditorRemotingPlugin>();
                }

                if (editorRemotingPluginEditor == null)
                {
                    if (feature != null)
                    {
                        editorRemotingPluginEditor = UnityEditor.Editor.CreateEditor(feature);
                    }
                }

                editorRemotingPluginEditor.DrawDefaultInspector();

                if (feature != null)
                {
                    EditorGUILayout.Space();

                    if (feature.enabled)
                    {
                        bool hasValidSettings = feature.HasValidSettings();
                        bool areDependenciesEnabled = EditorRemotingValidator.AreDependenciesEnabled();

                        if (hasValidSettings && areDependenciesEnabled)
                        {
                            EditorGUILayout.HelpBox(ConnectionInfo, MessageType.Info);
                        }
                        else
                        {
                            if (!hasValidSettings)
                            {
                                EditorGUILayout.HelpBox(EditorRemotingValidator.RemotingNotConfigured, MessageType.Error);
                            }

                            if (!areDependenciesEnabled)
                            {
                                EditorGUILayout.HelpBox(EditorRemotingValidator.DependenciesNotEnabled, MessageType.Error);
                                if (GUILayout.Button(EnableDependenciesLabel))
                                {
                                    EditorRemotingValidator.EnableDependencies();
                                }
                            }
                        }
                    }
                }

                EditorGUILayout.Space();
                if (GUILayout.Button(feature.enabled ? FeatureEnabledLabel : FeatureDisabledLabel))
                {
                    feature.enabled = !feature.enabled;
                }
            }
        }
    }
}
