// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#if UNITY_EDITOR

using System.Collections.Generic;
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
using UnityEngine.XR.OpenXR.Features.Interactions;
using static UnityEngine.XR.OpenXR.Features.OpenXRFeature;

namespace Microsoft.MixedReality.OpenXR
{
    internal class EditorRemotingValidator
    {
        internal const string RemotingNotConfigured = "Using editor remoting requires the Remote Host Name in settings " +
            "to match the IP address displayed in the Holographic Remoting Player running on your HoloLens 2 device.";

        internal static readonly string DependenciesNotEnabled = "Using editor remoting requires the following HoloLens features " +
            "to be enabled in the `Standalone settings` tab, because the Unity editor runs as a standalone application. " +
            "\n  - Eye Gaze Interaction Profile" +
            $"\n  - {HandTrackingFeaturePlugin.featureName}" +
            $"\n  - {HoloLensFeaturePlugin.featureName}" +
            "\n  - Microsoft Hand Interaction Profile";

        internal const string EditorRemotingMenuPath = "Window/XR/OpenXR Editor Remoting";

        internal static void GetValidationChecks(OpenXRFeature feature, List<ValidationRule> results, BuildTargetGroup targetGroup)
        {
            results.Add(new ValidationRule(feature)
            {
                message = DependenciesNotEnabled,
                error = true,
                checkPredicate = () =>
                {
                    return AreDependenciesEnabled();
                },
                fixIt = () =>
                {
                    EnableDependencies();
                }
            });

            results.Add(new ValidationRule(feature)
            {
                message = RemotingNotConfigured,
                error = true,
                fixItAutomatic = false,
                helpText = "To open this feature's settings, click the \"Edit\" button here or click the settings icon to the right of the \"Holographic Editor Remoting\" feature in the XR Plug-in Management settings.",
                checkPredicate = () =>
                {
                    FeatureHelpers.RefreshFeatures(BuildTargetGroup.Standalone);
                    Remoting.EditorRemotingPlugin remotingFeature = OpenXRSettings.Instance.GetFeature<Remoting.EditorRemotingPlugin>();
                    return remotingFeature != null && remotingFeature.HasValidSettings();
                },
                fixIt = () =>
                {
                    EditorApplication.ExecuteMenuItem(EditorRemotingMenuPath);
                }
            });
        }

        internal static bool AreDependenciesEnabled()
        {
            FeatureHelpers.RefreshFeatures(BuildTargetGroup.Standalone);
            OpenXRSettings openxrSettings = OpenXRSettings.Instance;
            return openxrSettings != null &&
                IsFeatureEnabled<HoloLensFeaturePlugin>(openxrSettings) &&
                IsFeatureEnabled<HandTrackingFeaturePlugin>(openxrSettings) &&
                IsFeatureEnabled<EyeGazeInteraction>(openxrSettings) &&
                IsFeatureEnabled<MicrosoftHandInteraction>(openxrSettings);
        }

        internal static void EnableDependencies()
        {
            FeatureHelpers.RefreshFeatures(BuildTargetGroup.Standalone);
            OpenXRSettings openxrSettings = OpenXRSettings.Instance;
            if (openxrSettings != null)
            {
                EnableFeature<HoloLensFeaturePlugin>(openxrSettings);
                EnableFeature<HandTrackingFeaturePlugin>(openxrSettings);
                EnableFeature<EyeGazeInteraction>(openxrSettings);
                EnableFeature<MicrosoftHandInteraction>(openxrSettings);
            }
        }

        private static bool IsFeatureEnabled<T>(OpenXRSettings openxrSettings) where T : OpenXRFeature
        {
            var feature = openxrSettings.GetFeature<T>();
            return feature != null && feature.enabled;
        }

        private static void EnableFeature<T>(OpenXRSettings openxrSettings) where T : OpenXRFeature
        {
            var feature = openxrSettings.GetFeature<T>();
            if (feature != null)
            {
                feature.enabled = true;
            }
        }
    }
}
#endif
