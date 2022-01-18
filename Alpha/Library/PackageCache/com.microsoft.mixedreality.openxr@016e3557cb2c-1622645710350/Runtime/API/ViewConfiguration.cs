// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Scripting;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR
{
    public enum ReprojectionMode
    {
        Depth = 1,
        PlanarFromDepth = 2,
        PlanarManual = 3,
        OrientationOnly = 4,
        NoReprojection = -1
    }

    public struct ReprojectionSettings
    {
        /// <summary>       
        /// The reprojection mode to be used with this view configuration. Overrides any reprojection mode 
        /// set in XRDisplaySubsystem. Setting this override only affects the current frame, and must be 
        /// set for each frame to maintain the effect. The default value is ReprojectionMode.Depth.
        /// </summary>
        public ReprojectionMode ReprojectionMode {
            get => m_reprojectionMode ?? ReprojectionMode.Depth;
            set => m_reprojectionMode = value;
        }
        private ReprojectionMode? m_reprojectionMode;

        /// <summary>
        /// When the application is confident that overriding the reprojection plane can benefit hologram
        /// stability, it can provide this override to further help the runtime fine tune the reprojection
        /// details. This Vector3 describes the position of the focus plane represented in the Unity scene.
        /// The override only affects the current frame, and must be set for each frame to maintain the effect.
        /// </summary>
        public Vector3? ReprojectionPlaneOverridePosition;

        /// <summary>
        /// When the application is confident that overriding the reprojection plane can benefit hologram
        /// stability, it can provide this override to further help the runtime fine tune the reprojection
        /// details. This Vector3 is a unit vector describing the focus plane normal represented in the 
        /// Unity scene. The override only affects the current frame, and must be set for each frame to 
        /// maintain the effect.
        /// </summary>
        public Vector3? ReprojectionPlaneOverrideNormal;

        /// <summary>
        /// When the application is confident that overriding the reprojection plane can benefit hologram
        /// stability, it can provide this override to further help the runtime fine tune the reprojection
        /// details. This Vector3 is a velocity of the position in the Unity scene, measured in meters per
        /// second. The override only affects the current frame, and must be set for each frame to maintain
        /// the effect. 
        /// </summary>
        public Vector3? ReprojectionPlaneOverrideVelocity;
    }

    public enum ViewConfigurationType
    {
        PrimaryStereo = 1,
        SecondaryMonoFirstPersonObserver = 2
    }

    public struct ViewConfiguration
    {
        /// <summary>
        /// The active and inactive view configurations in this OpenXR session.
        /// </summary>
        public static IReadOnlyList<ViewConfiguration> EnabledViewConfigurations { get => OpenXRViewConfigurationSettings.ViewConfigurations; }

        internal readonly OpenXRViewConfiguration m_openxrViewConfiguration;

        internal ViewConfiguration(OpenXRViewConfiguration openxrViewConfiguration) : this()
        {
            this.m_openxrViewConfiguration = openxrViewConfiguration;
        }
        
        /// <summary>
        /// The type of this view configuration.
        /// </summary>
        public ViewConfigurationType ViewConfigurationType { get => m_openxrViewConfiguration.ViewConfigurationType; }

        /// <summary>
        /// Represents whether or not this view configuration is active for this next upcoming frame.
        /// </summary>
        public bool IsActive { get => m_openxrViewConfiguration.IsActive; }

        /// <summary>
        /// Lists the supported reprojection modes for use with this view configuration.
        /// </summary>
        public IReadOnlyList<ReprojectionMode> SupportedReprojectionModes { get => m_openxrViewConfiguration.SupportedReprojectionModes; }

        /// <summary>
        /// Set reprojection settings for OpenXR to use for this view configuration for the current frame.
        /// </summary>
        public void SetReprojectionSettings(ReprojectionSettings settings) => m_openxrViewConfiguration.SetReprojectionSettings(settings);
    }
}