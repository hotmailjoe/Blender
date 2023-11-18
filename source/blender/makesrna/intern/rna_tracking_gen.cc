
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <limits>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "DNA_node_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.hh"
#include "BKE_lib_id.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.hh"
#include "RNA_types.hh"
#include "rna_internal.h"

#include "rna_prototypes_gen.h"

#include "rna_tracking.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingSettings_speed;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_keyframe_selection;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_focal_length;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_principal_point;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_radial_distortion;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingSettings_distance;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingSettings_clean_frames;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingSettings_clean_error;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingSettings_clean_action;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_tripod_solver;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingSettings_default_frames_limit;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingSettings_default_pattern_match;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingSettings_default_margin;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingSettings_default_motion_model;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_default_brute;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_default_mask;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_default_normalization;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingSettings_default_correlation_min;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingSettings_default_pattern_size;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingSettings_default_search_size;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_default_red_channel;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_default_green_channel;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingSettings_use_default_blue_channel;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingSettings_default_weight;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingSettings_object_distance;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingCamera_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingCamera_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingCamera_distortion_model;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_sensor_width;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_focal_length;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_focal_length_pixels;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingCamera_units;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_principal_point;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_principal_point_pixels;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_k1;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_k2;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_k3;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_division_k1;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_division_k2;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_nuke_k1;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_nuke_k2;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_brown_k1;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_brown_k2;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_brown_k3;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_brown_k4;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_brown_p1;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_brown_p2;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingCamera_pixel_aspect;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingMarker_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingMarker_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingMarker_co;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingMarker_frame;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingMarker_mute;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingMarker_pattern_corners;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingMarker_pattern_bound_box;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingMarker_search_min;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingMarker_search_max;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingMarker_is_keyed;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingTrack_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingTrack_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_MovieTrackingTrack_name;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingTrack_frames_limit;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingTrack_pattern_match;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingTrack_margin;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingTrack_motion_model;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_correlation_min;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_brute;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_mask;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_normalization;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingTrack_markers;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_red_channel;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_green_channel;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_blue_channel;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_grayscale_preview;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_alpha_preview;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_has_bundle;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_bundle;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_hide;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_select;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_select_anchor;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_select_pattern;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_select_search;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_lock;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingTrack_use_custom_color;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_color;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_average_error;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingTrack_grease_pencil;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_weight;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_weight_stab;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingTrack_offset;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingMarkers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingMarkers_rna_type;

extern FunctionRNA rna_MovieTrackingMarkers_find_frame_func;
extern IntPropertyRNA rna_MovieTrackingMarkers_find_frame_frame;
extern BoolPropertyRNA rna_MovieTrackingMarkers_find_frame_exact;
extern PointerPropertyRNA rna_MovieTrackingMarkers_find_frame_marker;

extern FunctionRNA rna_MovieTrackingMarkers_insert_frame_func;
extern IntPropertyRNA rna_MovieTrackingMarkers_insert_frame_frame;
extern FloatPropertyRNA rna_MovieTrackingMarkers_insert_frame_co;
extern PointerPropertyRNA rna_MovieTrackingMarkers_insert_frame_marker;

extern FunctionRNA rna_MovieTrackingMarkers_delete_frame_func;
extern IntPropertyRNA rna_MovieTrackingMarkers_delete_frame_frame;



RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingPlaneMarker_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingPlaneMarker_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingPlaneMarker_frame;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingPlaneMarker_corners;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingPlaneMarker_mute;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingPlaneTrack_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingPlaneTrack_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_MovieTrackingPlaneTrack_name;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingPlaneTrack_markers;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingPlaneTrack_select;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingPlaneTrack_use_auto_keying;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingPlaneTrack_image;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingPlaneTrack_image_opacity;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingPlaneMarkers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingPlaneMarkers_rna_type;

extern FunctionRNA rna_MovieTrackingPlaneMarkers_find_frame_func;
extern IntPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_frame;
extern BoolPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_exact;
extern PointerPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_plane_marker;

extern FunctionRNA rna_MovieTrackingPlaneMarkers_insert_frame_func;
extern IntPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_frame;
extern PointerPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker;

extern FunctionRNA rna_MovieTrackingPlaneMarkers_delete_frame_func;
extern IntPropertyRNA rna_MovieTrackingPlaneMarkers_delete_frame_frame;



RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingTracks_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingTracks_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingTracks_active;

extern FunctionRNA rna_MovieTrackingTracks_new_func;
extern StringPropertyRNA rna_MovieTrackingTracks_new_name;
extern IntPropertyRNA rna_MovieTrackingTracks_new_frame;
extern PointerPropertyRNA rna_MovieTrackingTracks_new_track;



RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingPlaneTracks_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingPlaneTracks_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingPlaneTracks_active;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingObjectTracks_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObjectTracks_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObjectTracks_active;

extern FunctionRNA rna_MovieTrackingObjectTracks_new_func;
extern StringPropertyRNA rna_MovieTrackingObjectTracks_new_name;
extern IntPropertyRNA rna_MovieTrackingObjectTracks_new_frame;
extern PointerPropertyRNA rna_MovieTrackingObjectTracks_new_track;



RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_active;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingStabilization_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingStabilization_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingStabilization_use_2d_stabilization;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_scale;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingStabilization_tracks;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingStabilization_active_track_index;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingStabilization_rotation_tracks;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingStabilization_active_rotation_track_index;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingStabilization_anchor_frame;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_target_position;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_target_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_target_scale;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingStabilization_use_autoscale;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_scale_max;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_influence_location;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_influence_scale;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingStabilization_influence_rotation;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingStabilization_filter_type;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingStabilization_show_tracks_expanded;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingReconstructedCameras_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingReconstructedCameras_rna_type;

extern FunctionRNA rna_MovieTrackingReconstructedCameras_find_frame_func;
extern IntPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_frame;
extern PointerPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_camera;

extern FunctionRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_func;
extern IntPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame;
extern FloatPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix;



RNA_EXTERN_C CollectionPropertyRNA rna_MovieReconstructedCamera_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieReconstructedCamera_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MovieReconstructedCamera_frame;
RNA_EXTERN_C FloatPropertyRNA rna_MovieReconstructedCamera_matrix;
RNA_EXTERN_C FloatPropertyRNA rna_MovieReconstructedCamera_average_error;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingReconstruction_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingReconstruction_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingReconstruction_is_valid;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingReconstruction_average_error;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingReconstruction_cameras;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingObject_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObject_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_MovieTrackingObject_name;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingObject_is_camera;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingObject_tracks;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingObject_plane_tracks;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObject_reconstruction;
RNA_EXTERN_C FloatPropertyRNA rna_MovieTrackingObject_scale;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingObject_keyframe_a;
RNA_EXTERN_C IntPropertyRNA rna_MovieTrackingObject_keyframe_b;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingDopesheet_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingDopesheet_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_MovieTrackingDopesheet_sort_method;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingDopesheet_use_invert_sort;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingDopesheet_show_only_selected;
RNA_EXTERN_C BoolPropertyRNA rna_MovieTrackingDopesheet_show_hidden;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTracking_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTracking_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTracking_settings;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTracking_camera;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTracking_tracks;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTracking_plane_tracks;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTracking_stabilization;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTracking_reconstruction;
RNA_EXTERN_C CollectionPropertyRNA rna_MovieTracking_objects;
RNA_EXTERN_C IntPropertyRNA rna_MovieTracking_active_object_index;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTracking_dopesheet;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieTrackingObjects_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObjects_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MovieTrackingObjects_active;

extern FunctionRNA rna_MovieTrackingObjects_new_func;
extern StringPropertyRNA rna_MovieTrackingObjects_new_name;
extern PointerPropertyRNA rna_MovieTrackingObjects_new_object;

extern FunctionRNA rna_MovieTrackingObjects_remove_func;
extern PointerPropertyRNA rna_MovieTrackingObjects_remove_object;


static PointerRNA MovieTrackingSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MovieTrackingSettings_speed_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->speed);
}

RNA_EXTERN_C void MovieTrackingSettings_speed_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->speed = (std::remove_reference_t<decltype(data->speed)>)value;
#else
    data->speed = value;
#endif
}

RNA_EXTERN_C bool MovieTrackingSettings_use_keyframe_selection_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->reconstruction_flag) & 2) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_keyframe_selection_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->reconstruction_flag |= 2; }
    else { data->reconstruction_flag &= ~2; }
}

RNA_EXTERN_C bool MovieTrackingSettings_refine_intrinsics_focal_length_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->refine_camera_intrinsics) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_refine_intrinsics_focal_length_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics |= 1; }
    else { data->refine_camera_intrinsics &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingSettings_refine_intrinsics_principal_point_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->refine_camera_intrinsics) & 2) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_refine_intrinsics_principal_point_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics |= 2; }
    else { data->refine_camera_intrinsics &= ~2; }
}

RNA_EXTERN_C bool MovieTrackingSettings_refine_intrinsics_radial_distortion_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->refine_camera_intrinsics) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_refine_intrinsics_radial_distortion_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics |= 4; }
    else { data->refine_camera_intrinsics &= ~4; }
}

RNA_EXTERN_C bool MovieTrackingSettings_refine_intrinsics_tangential_distortion_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->refine_camera_intrinsics) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_refine_intrinsics_tangential_distortion_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->refine_camera_intrinsics |= 8; }
    else { data->refine_camera_intrinsics &= ~8; }
}

RNA_EXTERN_C float MovieTrackingSettings_distance_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->dist);
}

RNA_EXTERN_C void MovieTrackingSettings_distance_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->dist = (std::remove_reference_t<decltype(data->dist)>)value;
#else
    data->dist = value;
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_clean_frames_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->clean_frames);
}

RNA_EXTERN_C void MovieTrackingSettings_clean_frames_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->clean_frames = (std::remove_reference_t<decltype(data->clean_frames)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->clean_frames = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C float MovieTrackingSettings_clean_error_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->clean_error);
}

RNA_EXTERN_C void MovieTrackingSettings_clean_error_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->clean_error = (std::remove_reference_t<decltype(data->clean_error)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->clean_error = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_clean_action_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->clean_action);
}

RNA_EXTERN_C void MovieTrackingSettings_clean_action_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->clean_action = (std::remove_reference_t<decltype(data->clean_action)>)value;
#else
    data->clean_action = value;
#endif
}

RNA_EXTERN_C bool MovieTrackingSettings_use_tripod_solver_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->motion_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_tripod_solver_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->motion_flag |= 1; }
    else { data->motion_flag &= ~1; }
}

RNA_EXTERN_C int MovieTrackingSettings_default_frames_limit_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_frames_limit);
}

RNA_EXTERN_C void MovieTrackingSettings_default_frames_limit_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_frames_limit = (std::remove_reference_t<decltype(data->default_frames_limit)>)CLAMPIS(value, 0, 32767);
#else
    data->default_frames_limit = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_default_pattern_match_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_pattern_match);
}

RNA_EXTERN_C void MovieTrackingSettings_default_pattern_match_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_pattern_match = (std::remove_reference_t<decltype(data->default_pattern_match)>)value;
#else
    data->default_pattern_match = value;
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_default_margin_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_margin);
}

RNA_EXTERN_C void MovieTrackingSettings_default_margin_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_margin = (std::remove_reference_t<decltype(data->default_margin)>)CLAMPIS(value, 0, 300);
#else
    data->default_margin = CLAMPIS(value, 0, 300);
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_default_motion_model_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_motion_model);
}

RNA_EXTERN_C void MovieTrackingSettings_default_motion_model_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_motion_model = (std::remove_reference_t<decltype(data->default_motion_model)>)value;
#else
    data->default_motion_model = value;
#endif
}

RNA_EXTERN_C bool MovieTrackingSettings_use_default_brute_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->default_algorithm_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_default_brute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->default_algorithm_flag |= 1; }
    else { data->default_algorithm_flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingSettings_use_default_mask_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->default_algorithm_flag) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_default_mask_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->default_algorithm_flag |= 8; }
    else { data->default_algorithm_flag &= ~8; }
}

RNA_EXTERN_C bool MovieTrackingSettings_use_default_normalization_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (((data->default_algorithm_flag) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_default_normalization_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (value) { data->default_algorithm_flag |= 4; }
    else { data->default_algorithm_flag &= ~4; }
}

RNA_EXTERN_C float MovieTrackingSettings_default_correlation_min_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->default_minimum_correlation);
}

RNA_EXTERN_C void MovieTrackingSettings_default_correlation_min_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_minimum_correlation = (std::remove_reference_t<decltype(data->default_minimum_correlation)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->default_minimum_correlation = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_default_pattern_size_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_pattern_size);
}

RNA_EXTERN_C void MovieTrackingSettings_default_pattern_size_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_pattern_size = (std::remove_reference_t<decltype(data->default_pattern_size)>)CLAMPIS(value, 5, 1000);
#else
    data->default_pattern_size = CLAMPIS(value, 5, 1000);
#endif
}

RNA_EXTERN_C int MovieTrackingSettings_default_search_size_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (int)(data->default_search_size);
}

RNA_EXTERN_C void MovieTrackingSettings_default_search_size_set(PointerRNA *ptr, int value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_search_size = (std::remove_reference_t<decltype(data->default_search_size)>)CLAMPIS(value, 5, 1000);
#else
    data->default_search_size = CLAMPIS(value, 5, 1000);
#endif
}

RNA_EXTERN_C bool MovieTrackingSettings_use_default_red_channel_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return !(((data->default_flag) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_default_red_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (!value) { data->default_flag |= 4; }
    else { data->default_flag &= ~4; }
}

RNA_EXTERN_C bool MovieTrackingSettings_use_default_green_channel_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return !(((data->default_flag) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_default_green_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (!value) { data->default_flag |= 8; }
    else { data->default_flag &= ~8; }
}

RNA_EXTERN_C bool MovieTrackingSettings_use_default_blue_channel_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return !(((data->default_flag) & 16) != 0);
}

RNA_EXTERN_C void MovieTrackingSettings_use_default_blue_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    if (!value) { data->default_flag |= 16; }
    else { data->default_flag &= ~16; }
}

RNA_EXTERN_C float MovieTrackingSettings_default_weight_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->default_weight);
}

RNA_EXTERN_C void MovieTrackingSettings_default_weight_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->default_weight = (std::remove_reference_t<decltype(data->default_weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->default_weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MovieTrackingSettings_object_distance_get(PointerRNA *ptr)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
    return (float)(data->object_distance);
}

RNA_EXTERN_C void MovieTrackingSettings_object_distance_set(PointerRNA *ptr, float value)
{
    MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
#ifdef __cplusplus
    data->object_distance = (std::remove_reference_t<decltype(data->object_distance)>)CLAMPIS(value, 0.0010000000f, 10000.0f);
#else
    data->object_distance = CLAMPIS(value, 0.0010000000f, 10000.0f);
#endif
}

static PointerRNA MovieTrackingCamera_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingCamera_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingCamera_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingCamera_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingCamera_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingCamera_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingCamera_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingCamera_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingCamera_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MovieTrackingCamera_distortion_model_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (int)(data->distortion_model);
}

RNA_EXTERN_C void MovieTrackingCamera_distortion_model_set(PointerRNA *ptr, int value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->distortion_model = (std::remove_reference_t<decltype(data->distortion_model)>)value;
#else
    data->distortion_model = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_sensor_width_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->sensor_width);
}

RNA_EXTERN_C void MovieTrackingCamera_sensor_width_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->sensor_width = (std::remove_reference_t<decltype(data->sensor_width)>)CLAMPIS(value, 0.0f, 500.0f);
#else
    data->sensor_width = CLAMPIS(value, 0.0f, 500.0f);
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_focal_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_trackingCamera_focal_mm_get;
    return fn(ptr);
}

RNA_EXTERN_C void MovieTrackingCamera_focal_length_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_trackingCamera_focal_mm_set;
    fn(ptr, value);
}

RNA_EXTERN_C float MovieTrackingCamera_focal_length_pixels_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->focal);
}

RNA_EXTERN_C void MovieTrackingCamera_focal_length_pixels_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->focal = (std::remove_reference_t<decltype(data->focal)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->focal = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int MovieTrackingCamera_units_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (int)(data->units);
}

RNA_EXTERN_C void MovieTrackingCamera_units_set(PointerRNA *ptr, int value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->units = (std::remove_reference_t<decltype(data->units)>)value;
#else
    data->units = value;
#endif
}

RNA_EXTERN_C void MovieTrackingCamera_principal_point_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->principal_point)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingCamera_principal_point_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->principal_point)[i] = CLAMPIS(values[i], -1.0f, 1.0f);
    }
}

RNA_EXTERN_C void MovieTrackingCamera_principal_point_pixels_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_trackingCamera_principal_point_pixels_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MovieTrackingCamera_principal_point_pixels_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_trackingCamera_principal_point_pixels_set;
    fn(ptr, values);
}

RNA_EXTERN_C float MovieTrackingCamera_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->k1);
}

RNA_EXTERN_C void MovieTrackingCamera_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->k1 = (std::remove_reference_t<decltype(data->k1)>)value;
#else
    data->k1 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->k2);
}

RNA_EXTERN_C void MovieTrackingCamera_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->k2 = (std::remove_reference_t<decltype(data->k2)>)value;
#else
    data->k2 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_k3_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->k3);
}

RNA_EXTERN_C void MovieTrackingCamera_k3_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->k3 = (std::remove_reference_t<decltype(data->k3)>)value;
#else
    data->k3 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_division_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->division_k1);
}

RNA_EXTERN_C void MovieTrackingCamera_division_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->division_k1 = (std::remove_reference_t<decltype(data->division_k1)>)value;
#else
    data->division_k1 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_division_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->division_k2);
}

RNA_EXTERN_C void MovieTrackingCamera_division_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->division_k2 = (std::remove_reference_t<decltype(data->division_k2)>)value;
#else
    data->division_k2 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_nuke_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->nuke_k1);
}

RNA_EXTERN_C void MovieTrackingCamera_nuke_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->nuke_k1 = (std::remove_reference_t<decltype(data->nuke_k1)>)value;
#else
    data->nuke_k1 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_nuke_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->nuke_k2);
}

RNA_EXTERN_C void MovieTrackingCamera_nuke_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->nuke_k2 = (std::remove_reference_t<decltype(data->nuke_k2)>)value;
#else
    data->nuke_k2 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_brown_k1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k1);
}

RNA_EXTERN_C void MovieTrackingCamera_brown_k1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->brown_k1 = (std::remove_reference_t<decltype(data->brown_k1)>)value;
#else
    data->brown_k1 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_brown_k2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k2);
}

RNA_EXTERN_C void MovieTrackingCamera_brown_k2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->brown_k2 = (std::remove_reference_t<decltype(data->brown_k2)>)value;
#else
    data->brown_k2 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_brown_k3_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k3);
}

RNA_EXTERN_C void MovieTrackingCamera_brown_k3_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->brown_k3 = (std::remove_reference_t<decltype(data->brown_k3)>)value;
#else
    data->brown_k3 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_brown_k4_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_k4);
}

RNA_EXTERN_C void MovieTrackingCamera_brown_k4_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->brown_k4 = (std::remove_reference_t<decltype(data->brown_k4)>)value;
#else
    data->brown_k4 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_brown_p1_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_p1);
}

RNA_EXTERN_C void MovieTrackingCamera_brown_p1_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->brown_p1 = (std::remove_reference_t<decltype(data->brown_p1)>)value;
#else
    data->brown_p1 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_brown_p2_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->brown_p2);
}

RNA_EXTERN_C void MovieTrackingCamera_brown_p2_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->brown_p2 = (std::remove_reference_t<decltype(data->brown_p2)>)value;
#else
    data->brown_p2 = value;
#endif
}

RNA_EXTERN_C float MovieTrackingCamera_pixel_aspect_get(PointerRNA *ptr)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
    return (float)(data->pixel_aspect);
}

RNA_EXTERN_C void MovieTrackingCamera_pixel_aspect_set(PointerRNA *ptr, float value)
{
    MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
#ifdef __cplusplus
    data->pixel_aspect = (std::remove_reference_t<decltype(data->pixel_aspect)>)CLAMPIS(value, 0.1000000015f, FLT_MAX);
#else
    data->pixel_aspect = CLAMPIS(value, 0.1000000015f, FLT_MAX);
#endif
}

static PointerRNA MovieTrackingMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingMarker_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarker_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarker_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingMarker_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MovieTrackingMarker_co_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->pos)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingMarker_co_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->pos)[i] = values[i];
    }
}

RNA_EXTERN_C int MovieTrackingMarker_frame_get(PointerRNA *ptr)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    return (int)(data->framenr);
}

RNA_EXTERN_C void MovieTrackingMarker_frame_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_trackingMarker_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MovieTrackingMarker_mute_get(PointerRNA *ptr)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingMarker_mute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C void MovieTrackingMarker_pattern_corners_get(PointerRNA *ptr, float values[8])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        values[i] = (float)(((float *)data->pattern_corners)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingMarker_pattern_corners_set(PointerRNA *ptr, const float values[8])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        ((float *)data->pattern_corners)[i] = values[i];
    }
}

RNA_EXTERN_C void MovieTrackingMarker_pattern_bound_box_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_tracking_markerPattern_boundbox_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MovieTrackingMarker_search_min_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->search_min)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingMarker_search_min_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->search_min)[i] = values[i];
    }
}

RNA_EXTERN_C void MovieTrackingMarker_search_max_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->search_max)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingMarker_search_max_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->search_max)[i] = values[i];
    }
}

RNA_EXTERN_C bool MovieTrackingMarker_is_keyed_get(PointerRNA *ptr)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MovieTrackingMarker_is_keyed_set(PointerRNA *ptr, bool value)
{
    MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
    if (!value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA MovieTrackingTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingTrack_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingTrack_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MovieTrackingTrack_name_get(PointerRNA *ptr, char *value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MovieTrackingTrack_name_length(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MovieTrackingTrack_name_set(PointerRNA *ptr, const char *value)
{
    rna_trackingTrack_name_set(ptr, value);
}

RNA_EXTERN_C int MovieTrackingTrack_frames_limit_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->frames_limit);
}

RNA_EXTERN_C void MovieTrackingTrack_frames_limit_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->frames_limit = (std::remove_reference_t<decltype(data->frames_limit)>)CLAMPIS(value, 0, 32767);
#else
    data->frames_limit = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C int MovieTrackingTrack_pattern_match_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->pattern_match);
}

RNA_EXTERN_C void MovieTrackingTrack_pattern_match_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->pattern_match = (std::remove_reference_t<decltype(data->pattern_match)>)value;
#else
    data->pattern_match = value;
#endif
}

RNA_EXTERN_C int MovieTrackingTrack_margin_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->margin);
}

RNA_EXTERN_C void MovieTrackingTrack_margin_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->margin = (std::remove_reference_t<decltype(data->margin)>)CLAMPIS(value, 0, 300);
#else
    data->margin = CLAMPIS(value, 0, 300);
#endif
}

RNA_EXTERN_C int MovieTrackingTrack_motion_model_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (int)(data->motion_model);
}

RNA_EXTERN_C void MovieTrackingTrack_motion_model_set(PointerRNA *ptr, int value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->motion_model = (std::remove_reference_t<decltype(data->motion_model)>)value;
#else
    data->motion_model = value;
#endif
}

RNA_EXTERN_C float MovieTrackingTrack_correlation_min_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->minimum_correlation);
}

RNA_EXTERN_C void MovieTrackingTrack_correlation_min_set(PointerRNA *ptr, float value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->minimum_correlation = (std::remove_reference_t<decltype(data->minimum_correlation)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->minimum_correlation = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool MovieTrackingTrack_use_brute_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->algorithm_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_brute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->algorithm_flag |= 1; }
    else { data->algorithm_flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_mask_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->algorithm_flag) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_mask_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->algorithm_flag |= 8; }
    else { data->algorithm_flag &= ~8; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_normalization_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->algorithm_flag) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_normalization_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->algorithm_flag |= 4; }
    else { data->algorithm_flag &= ~4; }
}

RNA_EXTERN_C int MovieTrackingTrack_markers_length(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (data->markers == nullptr) ? 0 : data->markersnr;
}

static PointerRNA MovieTrackingTrack_markers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingMarker, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MovieTrackingTrack_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingTrack_markers;

    rna_iterator_array_begin(iter, data->markers, sizeof(data->markers[0]), data->markersnr, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_markers_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingTrack_markers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingTrack_markers_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingTrack_markers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MovieTrackingTrack_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MovieTrackingTrack_markers_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = MovieTrackingTrack_markers_get(&iter); }
    }

    MovieTrackingTrack_markers_end(&iter);

    return found;
}

RNA_EXTERN_C bool MovieTrackingTrack_use_red_channel_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return !(((data->flag) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_red_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (!value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_green_channel_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return !(((data->flag) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_green_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (!value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_blue_channel_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return !(((data->flag) & 16) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_blue_channel_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (!value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_grayscale_preview_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_grayscale_preview_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_alpha_preview_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_alpha_preview_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool MovieTrackingTrack_has_bundle_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_bundle_get(PointerRNA *ptr, float values[3])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->bundle_pos)[i]);
    }
}

RNA_EXTERN_C bool MovieTrackingTrack_hide_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_hide_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool MovieTrackingTrack_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_trackingTrack_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void MovieTrackingTrack_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_trackingTrack_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MovieTrackingTrack_select_anchor_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_select_anchor_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingTrack_select_pattern_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->pat_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_select_pattern_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->pat_flag |= 1; }
    else { data->pat_flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingTrack_select_search_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->search_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_select_search_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->search_flag |= 1; }
    else { data->search_flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingTrack_lock_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_lock_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool MovieTrackingTrack_use_custom_color_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void MovieTrackingTrack_use_custom_color_set(PointerRNA *ptr, bool value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C void MovieTrackingTrack_color_get(PointerRNA *ptr, float values[3])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingTrack_color_set(PointerRNA *ptr, const float values[3])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float MovieTrackingTrack_average_error_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->error);
}

RNA_EXTERN_C PointerRNA MovieTrackingTrack_grease_pencil_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

RNA_EXTERN_C void MovieTrackingTrack_grease_pencil_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);

    if (data->gpd) {
        id_us_min((ID *)data->gpd);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->gpd = value.data;
}

RNA_EXTERN_C float MovieTrackingTrack_weight_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void MovieTrackingTrack_weight_set(PointerRNA *ptr, float value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MovieTrackingTrack_weight_stab_get(PointerRNA *ptr)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    return (float)(data->weight_stab);
}

RNA_EXTERN_C void MovieTrackingTrack_weight_stab_set(PointerRNA *ptr, float value)
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
#ifdef __cplusplus
    data->weight_stab = (std::remove_reference_t<decltype(data->weight_stab)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->weight_stab = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void MovieTrackingTrack_offset_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingTrack_offset_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

static PointerRNA MovieTrackingMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarkers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingMarkers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingMarkers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MovieTrackingPlaneMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarker_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarker_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingPlaneMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingPlaneMarker_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MovieTrackingPlaneMarker_frame_get(PointerRNA *ptr)
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    return (int)(data->framenr);
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_frame_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_trackingPlaneMarker_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_corners_get(PointerRNA *ptr, float values[8])
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        values[i] = (float)(((float *)data->corners)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_corners_set(PointerRNA *ptr, const float values[8])
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        ((float *)data->corners)[i] = values[i];
    }
}

RNA_EXTERN_C bool MovieTrackingPlaneMarker_mute_get(PointerRNA *ptr)
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingPlaneMarker_mute_set(PointerRNA *ptr, bool value)
{
    MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA MovieTrackingPlaneTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingPlaneTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingPlaneTrack_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_name_get(PointerRNA *ptr, char *value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MovieTrackingPlaneTrack_name_length(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_name_set(PointerRNA *ptr, const char *value)
{
    rna_trackingPlaneTrack_name_set(ptr, value);
}

RNA_EXTERN_C int MovieTrackingPlaneTrack_markers_length(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return (data->markers == nullptr) ? 0 : data->markersnr;
}

static PointerRNA MovieTrackingPlaneTrack_markers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingPlaneMarker, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneTrack_markers;

    rna_iterator_array_begin(iter, data->markers, sizeof(data->markers[0]), data->markersnr, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_markers_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_markers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTrack_markers_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_markers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MovieTrackingPlaneTrack_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MovieTrackingPlaneTrack_markers_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = MovieTrackingPlaneTrack_markers_get(&iter); }
    }

    MovieTrackingPlaneTrack_markers_end(&iter);

    return found;
}

RNA_EXTERN_C bool MovieTrackingPlaneTrack_select_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_select_set(PointerRNA *ptr, bool value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingPlaneTrack_use_auto_keying_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_use_auto_keying_set(PointerRNA *ptr, bool value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C PointerRNA MovieTrackingPlaneTrack_image_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->image);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);

    if (data->image) {
        id_us_min((ID *)data->image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->image = value.data;
}

RNA_EXTERN_C float MovieTrackingPlaneTrack_image_opacity_get(PointerRNA *ptr)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
    return (float)(data->image_opacity);
}

RNA_EXTERN_C void MovieTrackingPlaneTrack_image_opacity_set(PointerRNA *ptr, float value)
{
    MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
#ifdef __cplusplus
    data->image_opacity = (std::remove_reference_t<decltype(data->image_opacity)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->image_opacity = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

static PointerRNA MovieTrackingPlaneMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingPlaneMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarkers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneMarkers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingPlaneMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingPlaneMarkers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MovieTrackingTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingTracks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingTracks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingTracks_active_get(PointerRNA *ptr)
{
    return rna_tracking_active_track_get(ptr);
}

RNA_EXTERN_C void MovieTrackingTracks_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_tracking_active_track_set(ptr, value, reports);
}

static PointerRNA MovieTrackingPlaneTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingPlaneTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingPlaneTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingPlaneTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingPlaneTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingPlaneTracks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingPlaneTracks_active_get(PointerRNA *ptr)
{
    return rna_tracking_active_plane_track_get(ptr);
}

RNA_EXTERN_C void MovieTrackingPlaneTracks_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_tracking_active_plane_track_set(ptr, value, reports);
}

static PointerRNA MovieTrackingObjectTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingObjectTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObjectTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObjectTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingObjectTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObjectTracks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObjectTracks_active_get(PointerRNA *ptr)
{
    return rna_tracking_object_active_track_get(ptr);
}

RNA_EXTERN_C void MovieTrackingObjectTracks_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_tracking_object_active_track_set(ptr, value, reports);
}

static PointerRNA MovieTrackingObjectPlaneTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingObjectPlaneTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectPlaneTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObjectPlaneTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjectPlaneTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObjectPlaneTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingObjectPlaneTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObjectPlaneTracks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObjectPlaneTracks_active_get(PointerRNA *ptr)
{
    return rna_tracking_object_active_plane_track_get(ptr);
}

RNA_EXTERN_C void MovieTrackingObjectPlaneTracks_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_tracking_object_active_plane_track_set(ptr, value, reports);
}

static PointerRNA MovieTrackingStabilization_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingStabilization_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingStabilization_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingStabilization_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool MovieTrackingStabilization_use_2d_stabilization_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingStabilization_use_2d_stabilization_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingStabilization_use_stabilize_rotation_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingStabilization_use_stabilize_rotation_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool MovieTrackingStabilization_use_stabilize_scale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void MovieTrackingStabilization_use_stabilize_scale_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA MovieTrackingStabilization_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTrackingStabilization_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingStabilization_tracks;

    rna_tracking_stabTracks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingStabilization_active_track_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_tracking_stabTracks_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MovieTrackingStabilization_active_track_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_tracking_stabTracks_active_index_set;
    fn(ptr, value);
}

static PointerRNA MovieTrackingStabilization_rotation_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTrackingStabilization_rotation_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingStabilization_rotation_tracks;

    rna_tracking_stabRotTracks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rotation_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_rotation_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingStabilization_rotation_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_rotation_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingStabilization_active_rotation_track_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_tracking_stabRotTracks_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MovieTrackingStabilization_active_rotation_track_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_tracking_stabRotTracks_active_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MovieTrackingStabilization_anchor_frame_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (int)(data->anchor_frame);
}

RNA_EXTERN_C void MovieTrackingStabilization_anchor_frame_set(PointerRNA *ptr, int value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->anchor_frame = (std::remove_reference_t<decltype(data->anchor_frame)>)CLAMPIS(value, 0, 1048574);
#else
    data->anchor_frame = CLAMPIS(value, 0, 1048574);
#endif
}

RNA_EXTERN_C void MovieTrackingStabilization_target_position_get(PointerRNA *ptr, float values[2])
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->target_pos)[i]);
    }
}

RNA_EXTERN_C void MovieTrackingStabilization_target_position_set(PointerRNA *ptr, const float values[2])
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->target_pos)[i] = values[i];
    }
}

RNA_EXTERN_C float MovieTrackingStabilization_target_rotation_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->target_rot);
}

RNA_EXTERN_C void MovieTrackingStabilization_target_rotation_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->target_rot = (std::remove_reference_t<decltype(data->target_rot)>)value;
#else
    data->target_rot = value;
#endif
}

RNA_EXTERN_C float MovieTrackingStabilization_target_scale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->scale);
}

RNA_EXTERN_C void MovieTrackingStabilization_target_scale_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->scale = (std::remove_reference_t<decltype(data->scale)>)CLAMPIS(value, 0.0000001192f, FLT_MAX);
#else
    data->scale = CLAMPIS(value, 0.0000001192f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool MovieTrackingStabilization_use_autoscale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MovieTrackingStabilization_use_autoscale_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C float MovieTrackingStabilization_scale_max_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->maxscale);
}

RNA_EXTERN_C void MovieTrackingStabilization_scale_max_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->maxscale = (std::remove_reference_t<decltype(data->maxscale)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->maxscale = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float MovieTrackingStabilization_influence_location_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->locinf);
}

RNA_EXTERN_C void MovieTrackingStabilization_influence_location_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->locinf = (std::remove_reference_t<decltype(data->locinf)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->locinf = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MovieTrackingStabilization_influence_scale_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->scaleinf);
}

RNA_EXTERN_C void MovieTrackingStabilization_influence_scale_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->scaleinf = (std::remove_reference_t<decltype(data->scaleinf)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->scaleinf = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MovieTrackingStabilization_influence_rotation_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (float)(data->rotinf);
}

RNA_EXTERN_C void MovieTrackingStabilization_influence_rotation_set(PointerRNA *ptr, float value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->rotinf = (std::remove_reference_t<decltype(data->rotinf)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->rotinf = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int MovieTrackingStabilization_filter_type_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (int)(data->filter);
}

RNA_EXTERN_C void MovieTrackingStabilization_filter_type_set(PointerRNA *ptr, int value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
#ifdef __cplusplus
    data->filter = (std::remove_reference_t<decltype(data->filter)>)value;
#else
    data->filter = value;
#endif
}

RNA_EXTERN_C bool MovieTrackingStabilization_show_tracks_expanded_get(PointerRNA *ptr)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void MovieTrackingStabilization_show_tracks_expanded_set(PointerRNA *ptr, bool value)
{
    MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

static PointerRNA MovieTrackingReconstructedCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingReconstructedCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstructedCameras_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingReconstructedCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstructedCameras_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingReconstructedCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingReconstructedCameras_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingReconstructedCameras_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MovieReconstructedCamera_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieReconstructedCamera_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieReconstructedCamera_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieReconstructedCamera_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieReconstructedCamera_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieReconstructedCamera_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieReconstructedCamera_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieReconstructedCamera_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MovieReconstructedCamera_frame_get(PointerRNA *ptr)
{
    MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
    return (int)(data->framenr);
}

RNA_EXTERN_C void MovieReconstructedCamera_matrix_get(PointerRNA *ptr, float values[16])
{
    MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->mat)[i]);
    }
}

RNA_EXTERN_C float MovieReconstructedCamera_average_error_get(PointerRNA *ptr)
{
    MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
    return (float)(data->error);
}

static PointerRNA MovieTrackingReconstruction_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingReconstruction_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingReconstruction_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingReconstruction_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingReconstruction_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingReconstruction_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool MovieTrackingReconstruction_is_valid_get(PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C float MovieTrackingReconstruction_average_error_get(PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
    return (float)(data->error);
}

RNA_EXTERN_C int MovieTrackingReconstruction_cameras_length(PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
    return (data->cameras == nullptr) ? 0 : data->camnr;
}

static PointerRNA MovieTrackingReconstruction_cameras_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieReconstructedCamera, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MovieTrackingReconstruction_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingReconstruction_cameras;

    rna_iterator_array_begin(iter, data->cameras, sizeof(data->cameras[0]), data->camnr, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_cameras_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingReconstruction_cameras_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingReconstruction_cameras_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingReconstruction_cameras_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MovieTrackingReconstruction_cameras_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MovieTrackingReconstruction_cameras_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = MovieTrackingReconstruction_cameras_get(&iter); }
    }

    MovieTrackingReconstruction_cameras_end(&iter);

    return found;
}

static PointerRNA MovieTrackingObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingObject_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObject_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MovieTrackingObject_name_get(PointerRNA *ptr, char *value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MovieTrackingObject_name_length(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MovieTrackingObject_name_set(PointerRNA *ptr, const char *value)
{
    rna_trackingObject_name_set(ptr, value);
}

RNA_EXTERN_C bool MovieTrackingObject_is_camera_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

static PointerRNA MovieTrackingObject_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTrackingObject_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingObject_tracks;

    rna_trackingObject_tracks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObject_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObject_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingObject_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MovieTrackingObject_tracks_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = MovieTrackingObject_tracks_get(&iter); }
    }

    MovieTrackingObject_tracks_end(&iter);

    return found;
}

RNA_EXTERN_C int MovieTrackingTrack_name_length(PointerRNA *);
RNA_EXTERN_C void MovieTrackingTrack_name_get(PointerRNA *, char *);

RNA_EXTERN_C int MovieTrackingObject_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MovieTrackingObject_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MovieTrackingTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                MovieTrackingTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                MovieTrackingTrack_name_get(&iter.ptr, name);
                if (strcmp(name, key) == 0) {
                    MEM_freeN(name);

                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
                else {
                    MEM_freeN(name);
                }
            }
        }
        MovieTrackingObject_tracks_next(&iter);
    }
    MovieTrackingObject_tracks_end(&iter);

    return found;
}

static PointerRNA MovieTrackingObject_plane_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingPlaneTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTrackingObject_plane_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingObject_plane_tracks;

    rna_trackingObject_plane_tracks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_plane_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObject_plane_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObject_plane_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObject_plane_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingObject_plane_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MovieTrackingObject_plane_tracks_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = MovieTrackingObject_plane_tracks_get(&iter); }
    }

    MovieTrackingObject_plane_tracks_end(&iter);

    return found;
}

RNA_EXTERN_C int MovieTrackingPlaneTrack_name_length(PointerRNA *);
RNA_EXTERN_C void MovieTrackingPlaneTrack_name_get(PointerRNA *, char *);

RNA_EXTERN_C int MovieTrackingObject_plane_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MovieTrackingObject_plane_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MovieTrackingPlaneTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                MovieTrackingPlaneTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                MovieTrackingPlaneTrack_name_get(&iter.ptr, name);
                if (strcmp(name, key) == 0) {
                    MEM_freeN(name);

                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
                else {
                    MEM_freeN(name);
                }
            }
        }
        MovieTrackingObject_plane_tracks_next(&iter);
    }
    MovieTrackingObject_plane_tracks_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA MovieTrackingObject_reconstruction_get(PointerRNA *ptr)
{
    return rna_trackingObject_reconstruction_get(ptr);
}

RNA_EXTERN_C float MovieTrackingObject_scale_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (float)(data->scale);
}

RNA_EXTERN_C void MovieTrackingObject_scale_set(PointerRNA *ptr, float value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
#ifdef __cplusplus
    data->scale = (std::remove_reference_t<decltype(data->scale)>)CLAMPIS(value, 0.0001000000f, 10000.0f);
#else
    data->scale = CLAMPIS(value, 0.0001000000f, 10000.0f);
#endif
}

RNA_EXTERN_C int MovieTrackingObject_keyframe_a_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (int)(data->keyframe1);
}

RNA_EXTERN_C void MovieTrackingObject_keyframe_a_set(PointerRNA *ptr, int value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
#ifdef __cplusplus
    data->keyframe1 = (std::remove_reference_t<decltype(data->keyframe1)>)value;
#else
    data->keyframe1 = value;
#endif
}

RNA_EXTERN_C int MovieTrackingObject_keyframe_b_get(PointerRNA *ptr)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
    return (int)(data->keyframe2);
}

RNA_EXTERN_C void MovieTrackingObject_keyframe_b_set(PointerRNA *ptr, int value)
{
    MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
#ifdef __cplusplus
    data->keyframe2 = (std::remove_reference_t<decltype(data->keyframe2)>)value;
#else
    data->keyframe2 = value;
#endif
}

static PointerRNA MovieTrackingDopesheet_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingDopesheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingDopesheet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingDopesheet_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingDopesheet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingDopesheet_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingDopesheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingDopesheet_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MovieTrackingDopesheet_sort_method_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return (int)(data->sort_method);
}

RNA_EXTERN_C void MovieTrackingDopesheet_sort_method_set(PointerRNA *ptr, int value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
#ifdef __cplusplus
    data->sort_method = (std::remove_reference_t<decltype(data->sort_method)>)value;
#else
    data->sort_method = value;
#endif
}

RNA_EXTERN_C bool MovieTrackingDopesheet_use_invert_sort_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieTrackingDopesheet_use_invert_sort_set(PointerRNA *ptr, bool value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool MovieTrackingDopesheet_show_only_selected_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MovieTrackingDopesheet_show_only_selected_set(PointerRNA *ptr, bool value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool MovieTrackingDopesheet_show_hidden_get(PointerRNA *ptr)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void MovieTrackingDopesheet_show_hidden_set(PointerRNA *ptr, bool value)
{
    MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

static PointerRNA MovieTracking_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTracking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTracking_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTracking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTracking_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MovieTracking_settings_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingSettings, &data->settings);
}

RNA_EXTERN_C PointerRNA MovieTracking_camera_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingCamera, &data->camera);
}

static PointerRNA MovieTracking_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTracking_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTracking_tracks;

    rna_trackingTracks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA MovieTracking_plane_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingPlaneTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTracking_plane_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTracking_plane_tracks;

    rna_trackingPlaneTracks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_plane_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_plane_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_plane_tracks_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_plane_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C PointerRNA MovieTracking_stabilization_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingStabilization, &data->stabilization);
}

RNA_EXTERN_C PointerRNA MovieTracking_reconstruction_get(PointerRNA *ptr)
{
    return rna_trackingReconstruction_get(ptr);
}

static PointerRNA MovieTracking_objects_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingObject, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MovieTracking_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTracking_objects;

    rna_trackingObjects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTracking_objects_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTracking_objects_get(iter);
    }
}

RNA_EXTERN_C void MovieTracking_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTracking_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MovieTracking_objects_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = MovieTracking_objects_get(&iter); }
    }

    MovieTracking_objects_end(&iter);

    return found;
}

RNA_EXTERN_C int MovieTrackingObject_name_length(PointerRNA *);
RNA_EXTERN_C void MovieTrackingObject_name_get(PointerRNA *, char *);

RNA_EXTERN_C int MovieTracking_objects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MovieTracking_objects_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MovieTrackingObject_name_length(&iter.ptr);
            if (namelen < 1024) {
                MovieTrackingObject_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                MovieTrackingObject_name_get(&iter.ptr, name);
                if (strcmp(name, key) == 0) {
                    MEM_freeN(name);

                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
                else {
                    MEM_freeN(name);
                }
            }
        }
        MovieTracking_objects_next(&iter);
    }
    MovieTracking_objects_end(&iter);

    return found;
}

RNA_EXTERN_C int MovieTracking_active_object_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_tracking_active_object_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MovieTracking_active_object_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_tracking_active_object_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA MovieTracking_dopesheet_get(PointerRNA *ptr)
{
    MovieTracking *data = (MovieTracking *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingDopesheet, &data->dopesheet);
}

static PointerRNA MovieTrackingObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieTrackingObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieTrackingObjects_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieTrackingObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieTrackingObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieTrackingObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObjects_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MovieTrackingObjects_active_get(PointerRNA *ptr)
{
    return rna_tracking_active_object_get(ptr);
}

RNA_EXTERN_C void MovieTrackingObjects_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_tracking_active_object_set(ptr, value, reports);
}





RNA_EXTERN_C struct MovieTrackingMarker *MovieTrackingMarkers_find_frame_func(struct MovieTrackingTrack *_self, int frame, bool exact)
{
	return rna_trackingMarkers_find_frame(_self, frame, exact);
}

static void MovieTrackingMarkers_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingTrack *_self;
	int frame;
	bool exact;
	struct MovieTrackingMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	exact = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_trackingMarkers_find_frame(_self, frame, exact);
	*((struct MovieTrackingMarker **)_retdata) = marker;
}

RNA_EXTERN_C struct MovieTrackingMarker *MovieTrackingMarkers_insert_frame_func(struct MovieTrackingTrack *_self, int frame, float co[2])
{
	return rna_trackingMarkers_insert_frame(_self, frame, co);
}

static void MovieTrackingMarkers_insert_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingTrack *_self;
	int frame;
	const float *co;
	struct MovieTrackingMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	co = ((const float *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_trackingMarkers_insert_frame(_self, frame, co);
	*((struct MovieTrackingMarker **)_retdata) = marker;
}

RNA_EXTERN_C void MovieTrackingMarkers_delete_frame_func(struct MovieTrackingTrack *_self, int frame)
{
	rna_trackingMarkers_delete_frame(_self, frame);
}

static void MovieTrackingMarkers_delete_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingTrack *_self;
	int frame;
	char *_data;
	
	_self = (struct MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	
	rna_trackingMarkers_delete_frame(_self, frame);
}

/* Repeated prototypes to detect errors */

struct MovieTrackingMarker *rna_trackingMarkers_find_frame(struct MovieTrackingTrack *_self, int frame, bool exact);
struct MovieTrackingMarker *rna_trackingMarkers_insert_frame(struct MovieTrackingTrack *_self, int frame, float co[2]);
void rna_trackingMarkers_delete_frame(struct MovieTrackingTrack *_self, int frame);



RNA_EXTERN_C struct MovieTrackingPlaneMarker *MovieTrackingPlaneMarkers_find_frame_func(struct MovieTrackingPlaneTrack *_self, int frame, bool exact)
{
	return rna_trackingPlaneMarkers_find_frame(_self, frame, exact);
}

static void MovieTrackingPlaneMarkers_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingPlaneTrack *_self;
	int frame;
	bool exact;
	struct MovieTrackingPlaneMarker *plane_marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	exact = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	plane_marker = rna_trackingPlaneMarkers_find_frame(_self, frame, exact);
	*((struct MovieTrackingPlaneMarker **)_retdata) = plane_marker;
}

RNA_EXTERN_C struct MovieTrackingPlaneMarker *MovieTrackingPlaneMarkers_insert_frame_func(struct MovieTrackingPlaneTrack *_self, int frame)
{
	return rna_trackingPlaneMarkers_insert_frame(_self, frame);
}

static void MovieTrackingPlaneMarkers_insert_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingPlaneTrack *_self;
	int frame;
	struct MovieTrackingPlaneMarker *plane_marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	plane_marker = rna_trackingPlaneMarkers_insert_frame(_self, frame);
	*((struct MovieTrackingPlaneMarker **)_retdata) = plane_marker;
}

RNA_EXTERN_C void MovieTrackingPlaneMarkers_delete_frame_func(struct MovieTrackingPlaneTrack *_self, int frame)
{
	rna_trackingPlaneMarkers_delete_frame(_self, frame);
}

static void MovieTrackingPlaneMarkers_delete_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingPlaneTrack *_self;
	int frame;
	char *_data;
	
	_self = (struct MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	
	rna_trackingPlaneMarkers_delete_frame(_self, frame);
}

/* Repeated prototypes to detect errors */

struct MovieTrackingPlaneMarker *rna_trackingPlaneMarkers_find_frame(struct MovieTrackingPlaneTrack *_self, int frame, bool exact);
struct MovieTrackingPlaneMarker *rna_trackingPlaneMarkers_insert_frame(struct MovieTrackingPlaneTrack *_self, int frame);
void rna_trackingPlaneMarkers_delete_frame(struct MovieTrackingPlaneTrack *_self, int frame);

RNA_EXTERN_C struct MovieTrackingTrack *MovieTrackingTracks_new_func(struct ID *_selfid, struct MovieTracking *_self, const char * name, int frame)
{
	return rna_trackingTracks_new(_selfid, _self, name, frame);
}

static void MovieTrackingTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTracking *_self;
	const char * name;
	int frame;
	struct MovieTrackingTrack *track;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_trackingTracks_new(_selfid, _self, name, frame);
	*((struct MovieTrackingTrack **)_retdata) = track;
}

/* Repeated prototypes to detect errors */

struct MovieTrackingTrack *rna_trackingTracks_new(struct ID *_selfid, struct MovieTracking *_self, const char * name, int frame);


RNA_EXTERN_C struct MovieTrackingTrack *MovieTrackingObjectTracks_new_func(struct ID *_selfid, struct MovieTrackingObject *_self, const char * name, int frame)
{
	return rna_trackingObject_tracks_new(_selfid, _self, name, frame);
}

static void MovieTrackingObjectTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTrackingObject *_self;
	const char * name;
	int frame;
	struct MovieTrackingTrack *track;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MovieTrackingObject *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_trackingObject_tracks_new(_selfid, _self, name, frame);
	*((struct MovieTrackingTrack **)_retdata) = track;
}

/* Repeated prototypes to detect errors */

struct MovieTrackingTrack *rna_trackingObject_tracks_new(struct ID *_selfid, struct MovieTrackingObject *_self, const char * name, int frame);



RNA_EXTERN_C struct MovieReconstructedCamera *MovieTrackingReconstructedCameras_find_frame_func(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame)
{
	return rna_trackingCameras_find_frame(_selfid, _self, frame);
}

static void MovieTrackingReconstructedCameras_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTrackingReconstruction *_self;
	int frame;
	struct MovieReconstructedCamera *camera;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MovieTrackingReconstruction *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	camera = rna_trackingCameras_find_frame(_selfid, _self, frame);
	*((struct MovieReconstructedCamera **)_retdata) = camera;
}

RNA_EXTERN_C void MovieTrackingReconstructedCameras_matrix_from_frame_func(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame, float matrix[16])
{
	rna_trackingCameras_matrix_from_frame(_selfid, _self, frame, matrix);
}

static void MovieTrackingReconstructedCameras_matrix_from_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTrackingReconstruction *_self;
	int frame;
	float *matrix;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MovieTrackingReconstruction *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	matrix = ((float *)_data);
	
	rna_trackingCameras_matrix_from_frame(_selfid, _self, frame, matrix);
}

/* Repeated prototypes to detect errors */

struct MovieReconstructedCamera *rna_trackingCameras_find_frame(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame);
void rna_trackingCameras_matrix_from_frame(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame, float matrix[16]);






RNA_EXTERN_C struct MovieTrackingObject *MovieTrackingObjects_new_func(struct MovieTracking *_self, const char * name)
{
	return rna_trackingObject_new(_self, name);
}

static void MovieTrackingObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTracking *_self;
	const char * name;
	struct MovieTrackingObject *object;
	char *_data, *_retdata;
	
	_self = (struct MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	object = rna_trackingObject_new(_self, name);
	*((struct MovieTrackingObject **)_retdata) = object;
}

RNA_EXTERN_C void MovieTrackingObjects_remove_func(struct MovieTracking *_self, ReportList *reports, struct PointerRNA *object)
{
	rna_trackingObject_remove(_self, reports, object);
}

static void MovieTrackingObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTracking *_self;
	struct PointerRNA *object;
	char *_data;
	
	_self = (struct MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct PointerRNA **)_data);
	
	rna_trackingObject_remove(_self, reports, object);
}

/* Repeated prototypes to detect errors */

struct MovieTrackingObject *rna_trackingObject_new(struct MovieTracking *_self, const char * name);
void rna_trackingObject_remove(struct MovieTracking *_self, ReportList *reports, struct PointerRNA *object);

/* Movie tracking settings */
CollectionPropertyRNA rna_MovieTrackingSettings_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_rna_properties_begin, MovieTrackingSettings_rna_properties_next, MovieTrackingSettings_rna_properties_end, MovieTrackingSettings_rna_properties_get, nullptr, nullptr, MovieTrackingSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingSettings_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_speed, (PropertyRNA *)&rna_MovieTrackingSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_MovieTrackingSettings_speed_items[6] = {
	{0, "FASTEST", 0, "Fastest", "Track as fast as possible"},
	{5, "DOUBLE", 0, "Double", "Track with double speed"},
	{1, "REALTIME", 0, "Realtime", "Track with realtime speed"},
	{2, "HALF", 0, "Half", "Track with half of realtime speed"},
	{4, "QUARTER", 0, "Quarter", "Track with quarter of realtime speed"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingSettings_speed = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_keyframe_selection, (PropertyRNA *)&rna_MovieTrackingSettings_rna_type,
	-1, "speed", 1, 0, 0, 4, 0, "Speed",
	"Limit speed of tracking to make visual feedback easier (this does not affect the tracking quality)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, speed), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_speed_get, MovieTrackingSettings_speed_set, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_speed_items, 5, 0
};

BoolPropertyRNA rna_MovieTrackingSettings_use_keyframe_selection = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_focal_length, (PropertyRNA *)&rna_MovieTrackingSettings_speed,
	-1, "use_keyframe_selection", 1, 0, 0, 0, 0, "Keyframe Selection",
	"Automatically select keyframes when solving camera/object motion",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_keyframe_selection_get, MovieTrackingSettings_use_keyframe_selection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_focal_length = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_principal_point, (PropertyRNA *)&rna_MovieTrackingSettings_use_keyframe_selection,
	-1, "refine_intrinsics_focal_length", 1, 0, 0, 0, 0, "Refine Focal Length",
	"Refine focal length during camera solving",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_refine_intrinsics_focal_length_get, MovieTrackingSettings_refine_intrinsics_focal_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_principal_point = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_radial_distortion, (PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_focal_length,
	-1, "refine_intrinsics_principal_point", 1, 0, 0, 0, 0, "Refine Principal Point",
	"Refine principal point during camera solving",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_refine_intrinsics_principal_point_get, MovieTrackingSettings_refine_intrinsics_principal_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_radial_distortion = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion, (PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_principal_point,
	-1, "refine_intrinsics_radial_distortion", 1, 0, 0, 0, 0, "Refine Radial",
	"Refine radial coefficients of distortion model during camera solving",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_refine_intrinsics_radial_distortion_get, MovieTrackingSettings_refine_intrinsics_radial_distortion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_distance, (PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_radial_distortion,
	-1, "refine_intrinsics_tangential_distortion", 1, 0, 0, 0, 0, "Refine Tangential",
	"Refine tangential coefficients of distortion model during camera solving",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_refine_intrinsics_tangential_distortion_get, MovieTrackingSettings_refine_intrinsics_tangential_distortion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_MovieTrackingSettings_distance = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_clean_frames, (PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics_tangential_distortion,
	-1, "distance", 1, 0, 0, 4, 0, "Distance",
	"Distance between two bundles used for scene scaling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, dist), (RawPropertyType)5, nullptr},
	MovieTrackingSettings_distance_get, MovieTrackingSettings_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_MovieTrackingSettings_clean_frames = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_clean_error, (PropertyRNA *)&rna_MovieTrackingSettings_distance,
	-1, "clean_frames", 1, 0, 0, 4, 0, "Tracked Frames",
	"Effect on tracks which are tracked less than the specified amount of frames",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, clean_frames), (RawPropertyType)0, nullptr},
	MovieTrackingSettings_clean_frames_get, MovieTrackingSettings_clean_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_MovieTrackingSettings_clean_error = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_clean_action, (PropertyRNA *)&rna_MovieTrackingSettings_clean_frames,
	-1, "clean_error", 1, 0, 0, 4, 0, "Reprojection Error",
	"Effect on tracks which have a larger re-projection error",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, clean_error), (RawPropertyType)5, nullptr},
	MovieTrackingSettings_clean_error_get, MovieTrackingSettings_clean_error_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_MovieTrackingSettings_clean_action_items[4] = {
	{0, "SELECT", 0, "Select", "Select unclean tracks"},
	{1, "DELETE_TRACK", 0, "Delete Track", "Delete unclean tracks"},
	{2, "DELETE_SEGMENTS", 0, "Delete Segments", "Delete unclean segments of tracks"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingSettings_clean_action = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_tripod_solver, (PropertyRNA *)&rna_MovieTrackingSettings_clean_error,
	-1, "clean_action", 1, 0, 0, 4, 0, "Action",
	"Cleanup action to execute",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, clean_action), (RawPropertyType)0, nullptr},
	MovieTrackingSettings_clean_action_get, MovieTrackingSettings_clean_action_set, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_clean_action_items, 3, 0
};

BoolPropertyRNA rna_MovieTrackingSettings_use_tripod_solver = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_frames_limit, (PropertyRNA *)&rna_MovieTrackingSettings_clean_action,
	-1, "use_tripod_solver", 1, 0, 0, 0, 0, "Tripod Motion",
	"Use special solver to track a stable camera position, such as a tripod",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_tripod_solver_get, MovieTrackingSettings_use_tripod_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_MovieTrackingSettings_default_frames_limit = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_match, (PropertyRNA *)&rna_MovieTrackingSettings_use_tripod_solver,
	-1, "default_frames_limit", 1, 0, 0, 4, 0, "Frames Limit",
	"Every tracking cycle, this number of frames are tracked",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_frames_limit), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_default_frames_limit_get, MovieTrackingSettings_default_frames_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

static const EnumPropertyItem rna_MovieTrackingSettings_default_pattern_match_items[3] = {
	{0, "KEYFRAME", 0, "Keyframe", "Track pattern from keyframe to next frame"},
	{1, "PREV_FRAME", 0, "Previous frame", "Track pattern from current frame to next frame"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingSettings_default_pattern_match = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_margin, (PropertyRNA *)&rna_MovieTrackingSettings_default_frames_limit,
	-1, "default_pattern_match", 1, 0, 0, 4, 0, "Pattern Match",
	"Track pattern from given frame when tracking marker to next frame",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_pattern_match), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_default_pattern_match_get, MovieTrackingSettings_default_pattern_match_set, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_default_pattern_match_items, 2, 0
};

IntPropertyRNA rna_MovieTrackingSettings_default_margin = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_motion_model, (PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_match,
	-1, "default_margin", 1, 0, 0, 4, 0, "Margin",
	"Default distance from image boundary at which marker stops tracking",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_margin), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_default_margin_get, MovieTrackingSettings_default_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 300, 0, 300, 1, 0, nullptr
};

static const EnumPropertyItem rna_MovieTrackingSettings_default_motion_model_items[7] = {
	{5, "Perspective", 0, "Perspective", "Search for markers that are perspectively deformed (homography) between frames"},
	{4, "Affine", 0, "Affine", "Search for markers that are affine-deformed (t, r, k, and skew) between frames"},
	{3, "LocRotScale", 0, "Location, Rotation & Scale", "Search for markers that are translated, rotated, and scaled between frames"},
	{2, "LocScale", 0, "Location & Scale", "Search for markers that are translated and scaled between frames"},
	{1, "LocRot", 0, "Location & Rotation", "Search for markers that are translated and rotated between frames"},
	{0, "Loc", 0, "Location", "Search for markers that are translated between frames"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingSettings_default_motion_model = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_brute, (PropertyRNA *)&rna_MovieTrackingSettings_default_margin,
	-1, "default_motion_model", 1, 0, 0, 4, 0, "Motion Model",
	"Default motion model to use for tracking",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_motion_model), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_default_motion_model_get, MovieTrackingSettings_default_motion_model_set, nullptr, nullptr, nullptr, rna_MovieTrackingSettings_default_motion_model_items, 6, 0
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_brute = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_mask, (PropertyRNA *)&rna_MovieTrackingSettings_default_motion_model,
	-1, "use_default_brute", 3, 0, 0, 0, 0, "Prepass",
	"Use a brute-force translation-only initialization when tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_default_brute_get, MovieTrackingSettings_use_default_brute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_mask = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_normalization, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_brute,
	-1, "use_default_mask", 3, 0, 0, 0, 0, "Use Mask",
	"Use a grease pencil data-block as a mask to use only specified areas of pattern when tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_default_mask_get, MovieTrackingSettings_use_default_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_normalization = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_correlation_min, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_mask,
	-1, "use_default_normalization", 3, 0, 0, 0, 0, "Normalize",
	"Normalize light intensities while tracking (slower)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_default_normalization_get, MovieTrackingSettings_use_default_normalization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_MovieTrackingSettings_default_correlation_min = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_size, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_normalization,
	-1, "default_correlation_min", 1, 0, 0, 4, 0, "Correlation",
	"Default minimum value of correlation between matched pattern and reference that is still treated as successful tracking",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_minimum_correlation), (RawPropertyType)5, nullptr},
	MovieTrackingSettings_default_correlation_min_get, MovieTrackingSettings_default_correlation_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_MovieTrackingSettings_default_pattern_size = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_search_size, (PropertyRNA *)&rna_MovieTrackingSettings_default_correlation_min,
	-1, "default_pattern_size", 1, 0, 0, 4, 0, "Pattern Size",
	"Size of pattern area for newly created tracks",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_defaultSettings_patternUpdate, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_pattern_size), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_default_pattern_size_get, MovieTrackingSettings_default_pattern_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 5, 1000, 5, 1000, 1, 0, nullptr
};

IntPropertyRNA rna_MovieTrackingSettings_default_search_size = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_red_channel, (PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_size,
	-1, "default_search_size", 1, 0, 0, 4, 0, "Search Size",
	"Size of search area for newly created tracks",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_defaultSettings_searchUpdate, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_search_size), (RawPropertyType)1, nullptr},
	MovieTrackingSettings_default_search_size_get, MovieTrackingSettings_default_search_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 5, 1000, 5, 1000, 1, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_red_channel = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_green_channel, (PropertyRNA *)&rna_MovieTrackingSettings_default_search_size,
	-1, "use_default_red_channel", 3, 0, 0, 0, 0, "Use Red Channel",
	"Use red channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_default_red_channel_get, MovieTrackingSettings_use_default_red_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_green_channel = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_blue_channel, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_red_channel,
	-1, "use_default_green_channel", 3, 0, 0, 0, 0, "Use Green Channel",
	"Use green channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_default_green_channel_get, MovieTrackingSettings_use_default_green_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_blue_channel = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_weight, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_green_channel,
	-1, "use_default_blue_channel", 3, 0, 0, 0, 0, "Use Blue Channel",
	"Use blue channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingSettings_use_default_blue_channel_get, MovieTrackingSettings_use_default_blue_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_MovieTrackingSettings_default_weight = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_object_distance, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_blue_channel,
	-1, "default_weight", 3, 0, 0, 4, 0, "Weight",
	"Influence of newly created track on a final solution",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, default_weight), (RawPropertyType)5, nullptr},
	MovieTrackingSettings_default_weight_get, MovieTrackingSettings_default_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingSettings_object_distance = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingSettings_default_weight,
	-1, "object_distance", 1, 0, 0, 4, 0, "Distance",
	"Distance between two bundles used for object scaling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingSettings, object_distance), (RawPropertyType)5, nullptr},
	MovieTrackingSettings_object_distance_get, MovieTrackingSettings_object_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 1.0f, 3, 1.0f, nullptr
};

StructRNA RNA_MovieTrackingSettings = {
	{(ContainerRNA *)&RNA_MovieTrackingCamera, (ContainerRNA *)&RNA_MovieClipScopes,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingSettings_rna_properties, (PropertyRNA *)&rna_MovieTrackingSettings_object_distance}},
	"MovieTrackingSettings", nullptr, nullptr, 516, nullptr, "Movie tracking settings",
	"Match moving settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking camera data */
CollectionPropertyRNA rna_MovieTrackingCamera_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingCamera_rna_properties_begin, MovieTrackingCamera_rna_properties_next, MovieTrackingCamera_rna_properties_end, MovieTrackingCamera_rna_properties_get, nullptr, nullptr, MovieTrackingCamera_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingCamera_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_distortion_model, (PropertyRNA *)&rna_MovieTrackingCamera_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingCamera_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_MovieTrackingCamera_distortion_model_items[5] = {
	{0, "POLYNOMIAL", 0, "Polynomial", "Radial distortion model which fits common cameras"},
	{1, "DIVISION", 0, "Divisions", "Division distortion model which better represents wide-angle cameras"},
	{2, "NUKE", 0, "Nuke", "Nuke distortion model"},
	{3, "BROWN", 0, "Brown", "Brown-Conrady distortion model"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingCamera_distortion_model = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_sensor_width, (PropertyRNA *)&rna_MovieTrackingCamera_rna_type,
	-1, "distortion_model", 1, 0, 0, 4, 0, "Distortion Model",
	"Distortion model used for camera lenses",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_resetIntrinsics, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, distortion_model), (RawPropertyType)1, nullptr},
	MovieTrackingCamera_distortion_model_get, MovieTrackingCamera_distortion_model_set, nullptr, nullptr, nullptr, rna_MovieTrackingCamera_distortion_model_items, 4, 0
};

FloatPropertyRNA rna_MovieTrackingCamera_sensor_width = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_focal_length, (PropertyRNA *)&rna_MovieTrackingCamera_distortion_model,
	-1, "sensor_width", 1, 0, 0, 4, 0, "Sensor",
	"Width of CCD sensor in millimeters",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, sensor_width), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_sensor_width_get, MovieTrackingCamera_sensor_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_focal_length = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_focal_length_pixels, (PropertyRNA *)&rna_MovieTrackingCamera_sensor_width,
	-1, "focal_length", 1, 0, 0, 0, 0, "Focal Length",
	"Camera\'s focal length",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingCamera_focal_length_get, MovieTrackingCamera_focal_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 5000.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_focal_length_pixels = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_units, (PropertyRNA *)&rna_MovieTrackingCamera_focal_length,
	-1, "focal_length_pixels", 1, 0, 0, 4, 0, "Focal Length",
	"Camera\'s focal length",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, focal), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_focal_length_pixels_get, MovieTrackingCamera_focal_length_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5000.0f, 0.0f, FLT_MAX, 1.0f, 2, 0.0f, nullptr
};

static const EnumPropertyItem rna_MovieTrackingCamera_units_items[3] = {
	{0, "PIXELS", 0, "px", "Use pixels for units of focal length"},
	{1, "MILLIMETERS", 0, "mm", "Use millimeters for units of focal length"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingCamera_units = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_principal_point, (PropertyRNA *)&rna_MovieTrackingCamera_focal_length_pixels,
	-1, "units", 1, 0, 0, 4, 0, "Units",
	"Units used for camera focal length",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, units), (RawPropertyType)1, nullptr},
	MovieTrackingCamera_units_get, MovieTrackingCamera_units_set, nullptr, nullptr, nullptr, rna_MovieTrackingCamera_units_items, 2, 0
};

static float rna_MovieTrackingCamera_principal_point_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingCamera_principal_point = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_principal_point_pixels, (PropertyRNA *)&rna_MovieTrackingCamera_units,
	-1, "principal_point", 1, 0, 0, 4, 0, "Principal Point",
	"Optical center of lens",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, principal_point), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingCamera_principal_point_get, MovieTrackingCamera_principal_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 0.1000000015f, 3, 0.0f, rna_MovieTrackingCamera_principal_point_default
};

static float rna_MovieTrackingCamera_principal_point_pixels_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingCamera_principal_point_pixels = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_k1, (PropertyRNA *)&rna_MovieTrackingCamera_principal_point,
	-1, "principal_point_pixels", 1, 0, 0, 0, 0, "Principal Point",
	"Optical center of lens in pixels",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MovieTrackingCamera_principal_point_pixels_get, MovieTrackingCamera_principal_point_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MovieTrackingCamera_principal_point_pixels_default
};

FloatPropertyRNA rna_MovieTrackingCamera_k1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_k2, (PropertyRNA *)&rna_MovieTrackingCamera_principal_point_pixels,
	-1, "k1", 1, 0, 0, 4, 0, "K1",
	"First coefficient of third order polynomial radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, k1), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_k1_get, MovieTrackingCamera_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_k2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_k3, (PropertyRNA *)&rna_MovieTrackingCamera_k1,
	-1, "k2", 1, 0, 0, 4, 0, "K2",
	"Second coefficient of third order polynomial radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, k2), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_k2_get, MovieTrackingCamera_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_k3 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_division_k1, (PropertyRNA *)&rna_MovieTrackingCamera_k2,
	-1, "k3", 1, 0, 0, 4, 0, "K3",
	"Third coefficient of third order polynomial radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, k3), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_k3_get, MovieTrackingCamera_k3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_division_k1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_division_k2, (PropertyRNA *)&rna_MovieTrackingCamera_k3,
	-1, "division_k1", 1, 0, 0, 4, 0, "K1",
	"First coefficient of second order division distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, division_k1), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_division_k1_get, MovieTrackingCamera_division_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_division_k2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_nuke_k1, (PropertyRNA *)&rna_MovieTrackingCamera_division_k1,
	-1, "division_k2", 1, 0, 0, 4, 0, "K2",
	"Second coefficient of second order division distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, division_k2), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_division_k2_get, MovieTrackingCamera_division_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_nuke_k1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_nuke_k2, (PropertyRNA *)&rna_MovieTrackingCamera_division_k2,
	-1, "nuke_k1", 1, 0, 0, 4, 0, "K1",
	"First coefficient of second order Nuke distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, nuke_k1), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_nuke_k1_get, MovieTrackingCamera_nuke_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_nuke_k2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_brown_k1, (PropertyRNA *)&rna_MovieTrackingCamera_nuke_k1,
	-1, "nuke_k2", 1, 0, 0, 4, 0, "K2",
	"Second coefficient of second order Nuke distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, nuke_k2), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_nuke_k2_get, MovieTrackingCamera_nuke_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_brown_k1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_brown_k2, (PropertyRNA *)&rna_MovieTrackingCamera_nuke_k2,
	-1, "brown_k1", 1, 0, 0, 4, 0, "K1",
	"First coefficient of fourth order Brown-Conrady radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, brown_k1), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_brown_k1_get, MovieTrackingCamera_brown_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_brown_k2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_brown_k3, (PropertyRNA *)&rna_MovieTrackingCamera_brown_k1,
	-1, "brown_k2", 1, 0, 0, 4, 0, "K2",
	"Second coefficient of fourth order Brown-Conrady radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, brown_k2), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_brown_k2_get, MovieTrackingCamera_brown_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_brown_k3 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_brown_k4, (PropertyRNA *)&rna_MovieTrackingCamera_brown_k2,
	-1, "brown_k3", 1, 0, 0, 4, 0, "K3",
	"Third coefficient of fourth order Brown-Conrady radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, brown_k3), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_brown_k3_get, MovieTrackingCamera_brown_k3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_brown_k4 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_brown_p1, (PropertyRNA *)&rna_MovieTrackingCamera_brown_k3,
	-1, "brown_k4", 1, 0, 0, 4, 0, "K4",
	"Fourth coefficient of fourth order Brown-Conrady radial distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, brown_k4), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_brown_k4_get, MovieTrackingCamera_brown_k4_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_brown_p1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_brown_p2, (PropertyRNA *)&rna_MovieTrackingCamera_brown_k4,
	-1, "brown_p1", 1, 0, 0, 4, 0, "P1",
	"First coefficient of second order Brown-Conrady tangential distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, brown_p1), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_brown_p1_get, MovieTrackingCamera_brown_p1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_brown_p2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_pixel_aspect, (PropertyRNA *)&rna_MovieTrackingCamera_brown_p1,
	-1, "brown_p2", 1, 0, 0, 4, 0, "P2",
	"Second coefficient of second order Brown-Conrady tangential distortion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, brown_p2), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_brown_p2_get, MovieTrackingCamera_brown_p2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingCamera_pixel_aspect = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingCamera_brown_p2,
	-1, "pixel_aspect", 1, 0, 0, 4, 0, "Pixel Aspect Ratio",
	"Pixel aspect ratio",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingCamera, pixel_aspect), (RawPropertyType)5, nullptr},
	MovieTrackingCamera_pixel_aspect_get, MovieTrackingCamera_pixel_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 1.0f, nullptr
};

StructRNA RNA_MovieTrackingCamera = {
	{(ContainerRNA *)&RNA_MovieTrackingMarker, (ContainerRNA *)&RNA_MovieTrackingSettings,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingCamera_rna_properties, (PropertyRNA *)&rna_MovieTrackingCamera_pixel_aspect}},
	"MovieTrackingCamera", nullptr, nullptr, 516, nullptr, "Movie tracking camera data",
	"Match-moving camera data for tracking",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingCamera_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_trackingCamera_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking marker data */
CollectionPropertyRNA rna_MovieTrackingMarker_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarker_rna_properties_begin, MovieTrackingMarker_rna_properties_next, MovieTrackingMarker_rna_properties_end, MovieTrackingMarker_rna_properties_get, nullptr, nullptr, MovieTrackingMarker_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingMarker_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_co, (PropertyRNA *)&rna_MovieTrackingMarker_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarker_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MovieTrackingMarker_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_co = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_frame, (PropertyRNA *)&rna_MovieTrackingMarker_rna_type,
	-1, "co", 3, 0, 0, 4, 0, "Position",
	"Marker position at frame in normalized coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingMarker, pos), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingMarker_co_get, MovieTrackingMarker_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_co_default
};

IntPropertyRNA rna_MovieTrackingMarker_frame = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_mute, (PropertyRNA *)&rna_MovieTrackingMarker_co,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame number marker is keyframed on",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarker_frame_get, MovieTrackingMarker_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingMarker_mute = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_pattern_corners, (PropertyRNA *)&rna_MovieTrackingMarker_frame,
	-1, "mute", 3, 0, 0, 0, 0, "Mode",
	"Is marker muted for current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarker_mute_get, MovieTrackingMarker_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_MovieTrackingMarker_pattern_corners_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_pattern_corners = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_pattern_bound_box, (PropertyRNA *)&rna_MovieTrackingMarker_mute,
	-1, "pattern_corners", 1, 0, 0, 4, 0, "Pattern Corners",
	"Array of coordinates which represents pattern\'s corners in normalized coordinates relative to marker position",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 2, 0}, 8,
	rna_tracking_markerPattern_update, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingMarker, pattern_corners), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingMarker_pattern_corners_get, MovieTrackingMarker_pattern_corners_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_pattern_corners_default
};

static float rna_MovieTrackingMarker_pattern_bound_box_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_pattern_bound_box = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_search_min, (PropertyRNA *)&rna_MovieTrackingMarker_pattern_corners,
	-1, "pattern_bound_box", 2, 0, 0, 0, 0, "Pattern Bounding Box",
	"Pattern area bounding box in normalized coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 2, {2, 2, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MovieTrackingMarker_pattern_bound_box_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MovieTrackingMarker_pattern_bound_box_default
};

static float rna_MovieTrackingMarker_search_min_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_search_min = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_search_max, (PropertyRNA *)&rna_MovieTrackingMarker_pattern_bound_box,
	-1, "search_min", 1, 0, 0, 4, 0, "Search Min",
	"Left-bottom corner of search area in normalized coordinates relative to marker position",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	rna_tracking_markerSearch_update, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingMarker, search_min), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingMarker_search_min_get, MovieTrackingMarker_search_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_search_min_default
};

static float rna_MovieTrackingMarker_search_max_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_search_max = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_is_keyed, (PropertyRNA *)&rna_MovieTrackingMarker_search_min,
	-1, "search_max", 1, 0, 0, 4, 0, "Search Max",
	"Right-bottom corner of search area in normalized coordinates relative to marker position",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	rna_tracking_markerSearch_update, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingMarker, search_max), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingMarker_search_max_get, MovieTrackingMarker_search_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_search_max_default
};

BoolPropertyRNA rna_MovieTrackingMarker_is_keyed = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingMarker_search_max,
	-1, "is_keyed", 1, 0, 0, 0, 0, "Keyframed",
	"Whether the position of the marker is keyframed or tracked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarker_is_keyed_get, MovieTrackingMarker_is_keyed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MovieTrackingMarker = {
	{(ContainerRNA *)&RNA_MovieTrackingTrack, (ContainerRNA *)&RNA_MovieTrackingCamera,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingMarker_rna_properties, (PropertyRNA *)&rna_MovieTrackingMarker_is_keyed}},
	"MovieTrackingMarker", nullptr, nullptr, 516, nullptr, "Movie tracking marker data",
	"Match-moving marker data for tracking",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingMarker_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking track data */
CollectionPropertyRNA rna_MovieTrackingTrack_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_rna_properties_begin, MovieTrackingTrack_rna_properties_next, MovieTrackingTrack_rna_properties_end, MovieTrackingTrack_rna_properties_get, nullptr, nullptr, MovieTrackingTrack_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingTrack_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_name, (PropertyRNA *)&rna_MovieTrackingTrack_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_MovieTrackingTrack_name = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_frames_limit, (PropertyRNA *)&rna_MovieTrackingTrack_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Unique name of track",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_name_get, MovieTrackingTrack_name_length, MovieTrackingTrack_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

IntPropertyRNA rna_MovieTrackingTrack_frames_limit = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_pattern_match, (PropertyRNA *)&rna_MovieTrackingTrack_name,
	-1, "frames_limit", 1, 0, 0, 4, 0, "Frames Limit",
	"Every tracking cycle, this number of frames are tracked",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, frames_limit), (RawPropertyType)1, nullptr},
	MovieTrackingTrack_frames_limit_get, MovieTrackingTrack_frames_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

static const EnumPropertyItem rna_MovieTrackingTrack_pattern_match_items[3] = {
	{0, "KEYFRAME", 0, "Keyframe", "Track pattern from keyframe to next frame"},
	{1, "PREV_FRAME", 0, "Previous frame", "Track pattern from current frame to next frame"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingTrack_pattern_match = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_margin, (PropertyRNA *)&rna_MovieTrackingTrack_frames_limit,
	-1, "pattern_match", 1, 0, 0, 4, 0, "Pattern Match",
	"Track pattern from given frame when tracking marker to next frame",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, pattern_match), (RawPropertyType)1, nullptr},
	MovieTrackingTrack_pattern_match_get, MovieTrackingTrack_pattern_match_set, nullptr, nullptr, nullptr, rna_MovieTrackingTrack_pattern_match_items, 2, 0
};

IntPropertyRNA rna_MovieTrackingTrack_margin = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_motion_model, (PropertyRNA *)&rna_MovieTrackingTrack_pattern_match,
	-1, "margin", 1, 0, 0, 4, 0, "Margin",
	"Distance from image boundary at which marker stops tracking",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, margin), (RawPropertyType)1, nullptr},
	MovieTrackingTrack_margin_get, MovieTrackingTrack_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 300, 0, 300, 1, 0, nullptr
};

static const EnumPropertyItem rna_MovieTrackingTrack_motion_model_items[7] = {
	{5, "Perspective", 0, "Perspective", "Search for markers that are perspectively deformed (homography) between frames"},
	{4, "Affine", 0, "Affine", "Search for markers that are affine-deformed (t, r, k, and skew) between frames"},
	{3, "LocRotScale", 0, "Location, Rotation & Scale", "Search for markers that are translated, rotated, and scaled between frames"},
	{2, "LocScale", 0, "Location & Scale", "Search for markers that are translated and scaled between frames"},
	{1, "LocRot", 0, "Location & Rotation", "Search for markers that are translated and rotated between frames"},
	{0, "Loc", 0, "Location", "Search for markers that are translated between frames"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingTrack_motion_model = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_correlation_min, (PropertyRNA *)&rna_MovieTrackingTrack_margin,
	-1, "motion_model", 1, 0, 0, 4, 0, "Motion Model",
	"Default motion model to use for tracking",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, motion_model), (RawPropertyType)1, nullptr},
	MovieTrackingTrack_motion_model_get, MovieTrackingTrack_motion_model_set, nullptr, nullptr, nullptr, rna_MovieTrackingTrack_motion_model_items, 6, 0
};

FloatPropertyRNA rna_MovieTrackingTrack_correlation_min = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_brute, (PropertyRNA *)&rna_MovieTrackingTrack_motion_model,
	-1, "correlation_min", 1, 0, 0, 4, 0, "Correlation",
	"Minimal value of correlation between matched pattern and reference that is still treated as successful tracking",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, minimum_correlation), (RawPropertyType)5, nullptr},
	MovieTrackingTrack_correlation_min_get, MovieTrackingTrack_correlation_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_brute = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_mask, (PropertyRNA *)&rna_MovieTrackingTrack_correlation_min,
	-1, "use_brute", 1, 0, 0, 0, 0, "Prepass",
	"Use a brute-force translation only pre-track before refinement",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_brute_get, MovieTrackingTrack_use_brute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_mask = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_normalization, (PropertyRNA *)&rna_MovieTrackingTrack_use_brute,
	-1, "use_mask", 3, 0, 0, 0, 0, "Use Mask",
	"Use a grease pencil data-block as a mask to use only specified areas of pattern when tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_mask_get, MovieTrackingTrack_use_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_normalization = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_markers, (PropertyRNA *)&rna_MovieTrackingTrack_use_mask,
	-1, "use_normalization", 1, 0, 0, 0, 0, "Normalize",
	"Normalize light intensities while tracking. Slower",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_normalization_get, MovieTrackingTrack_use_normalization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MovieTrackingTrack_markers = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_red_channel, (PropertyRNA *)&rna_MovieTrackingTrack_use_normalization,
	-1, "markers", 0, 0, 0, 8, 0, "Markers",
	"Collection of markers in track",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingMarkers},
	MovieTrackingTrack_markers_begin, MovieTrackingTrack_markers_next, MovieTrackingTrack_markers_end, MovieTrackingTrack_markers_get, MovieTrackingTrack_markers_length, MovieTrackingTrack_markers_lookup_int, nullptr, nullptr, &RNA_MovieTrackingMarker
};

BoolPropertyRNA rna_MovieTrackingTrack_use_red_channel = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_green_channel, (PropertyRNA *)&rna_MovieTrackingTrack_markers,
	-1, "use_red_channel", 1, 0, 0, 0, 0, "Use Red Channel",
	"Use red channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_red_channel_get, MovieTrackingTrack_use_red_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_green_channel = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_blue_channel, (PropertyRNA *)&rna_MovieTrackingTrack_use_red_channel,
	-1, "use_green_channel", 1, 0, 0, 0, 0, "Use Green Channel",
	"Use green channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_green_channel_get, MovieTrackingTrack_use_green_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_blue_channel = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_grayscale_preview, (PropertyRNA *)&rna_MovieTrackingTrack_use_green_channel,
	-1, "use_blue_channel", 1, 0, 0, 0, 0, "Use Blue Channel",
	"Use blue channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_blue_channel_get, MovieTrackingTrack_use_blue_channel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_grayscale_preview = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_alpha_preview, (PropertyRNA *)&rna_MovieTrackingTrack_use_blue_channel,
	-1, "use_grayscale_preview", 1, 0, 0, 0, 0, "Grayscale",
	"Display what the tracking algorithm sees in the preview",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_grayscale_preview_get, MovieTrackingTrack_use_grayscale_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_alpha_preview = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_has_bundle, (PropertyRNA *)&rna_MovieTrackingTrack_use_grayscale_preview,
	-1, "use_alpha_preview", 1, 0, 0, 0, 0, "Alpha",
	"Apply track\'s mask on displaying preview",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_alpha_preview_get, MovieTrackingTrack_use_alpha_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_has_bundle = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_bundle, (PropertyRNA *)&rna_MovieTrackingTrack_use_alpha_preview,
	-1, "has_bundle", 2, 0, 0, 0, 0, "Has Bundle",
	"True if track has a valid bundle",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_has_bundle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_MovieTrackingTrack_bundle_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingTrack_bundle = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_hide, (PropertyRNA *)&rna_MovieTrackingTrack_has_bundle,
	-1, "bundle", 2, 0, 0, 4, 0, "Bundle",
	"Position of bundle reconstructed from this track",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, bundle_pos), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingTrack_bundle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingTrack_bundle_default
};

BoolPropertyRNA rna_MovieTrackingTrack_hide = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select, (PropertyRNA *)&rna_MovieTrackingTrack_bundle,
	-1, "hide", 1, 0, 0, 0, 0, "Hide",
	"Track is hidden",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_hide_get, MovieTrackingTrack_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_select = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select_anchor, (PropertyRNA *)&rna_MovieTrackingTrack_hide,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Track is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_select_get, MovieTrackingTrack_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_select_anchor = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select_pattern, (PropertyRNA *)&rna_MovieTrackingTrack_select,
	-1, "select_anchor", 3, 0, 0, 0, 0, "Select Anchor",
	"Track\'s anchor point is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_select_anchor_get, MovieTrackingTrack_select_anchor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_select_pattern = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select_search, (PropertyRNA *)&rna_MovieTrackingTrack_select_anchor,
	-1, "select_pattern", 3, 0, 0, 0, 0, "Select Pattern",
	"Track\'s pattern area is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_select_pattern_get, MovieTrackingTrack_select_pattern_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_select_search = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_lock, (PropertyRNA *)&rna_MovieTrackingTrack_select_pattern,
	-1, "select_search", 3, 0, 0, 0, 0, "Select Search",
	"Track\'s search area is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_select_search_get, MovieTrackingTrack_select_search_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_lock = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_custom_color, (PropertyRNA *)&rna_MovieTrackingTrack_select_search,
	-1, "lock", 1, 0, 0, 0, 0, "Lock",
	"Track is locked and all changes to it are disabled",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_lock_get, MovieTrackingTrack_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingTrack_use_custom_color = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_color, (PropertyRNA *)&rna_MovieTrackingTrack_lock,
	-1, "use_custom_color", 1, 0, 0, 0, 0, "Custom Color",
	"Use custom color instead of theme-defined",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_use_custom_color_get, MovieTrackingTrack_use_custom_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_MovieTrackingTrack_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingTrack_color = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_average_error, (PropertyRNA *)&rna_MovieTrackingTrack_use_custom_color,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Color of the track in the Movie Clip Editor and the 3D viewport after a solve",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingTrack_color_get, MovieTrackingTrack_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MovieTrackingTrack_color_default
};

FloatPropertyRNA rna_MovieTrackingTrack_average_error = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_grease_pencil, (PropertyRNA *)&rna_MovieTrackingTrack_color,
	-1, "average_error", 2, 0, 0, 4, 0, "Average Error",
	"Average error of re-projection",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, error), (RawPropertyType)5, nullptr},
	MovieTrackingTrack_average_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_MovieTrackingTrack_grease_pencil = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_weight, (PropertyRNA *)&rna_MovieTrackingTrack_average_error,
	-1, "grease_pencil", 8388801, 0, 0, 0, 0, "Grease Pencil",
	"Grease pencil data for this track",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTrack_grease_pencil_get, MovieTrackingTrack_grease_pencil_set, nullptr, rna_GPencil_datablocks_annotations_poll,&RNA_GreasePencil
};

FloatPropertyRNA rna_MovieTrackingTrack_weight = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_weight_stab, (PropertyRNA *)&rna_MovieTrackingTrack_grease_pencil,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Influence of this track on a final solution",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, weight), (RawPropertyType)5, nullptr},
	MovieTrackingTrack_weight_get, MovieTrackingTrack_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingTrack_weight_stab = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_offset, (PropertyRNA *)&rna_MovieTrackingTrack_weight,
	-1, "weight_stab", 3, 0, 0, 4, 0, "Stab Weight",
	"Influence of this track on 2D stabilization",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, weight_stab), (RawPropertyType)5, nullptr},
	MovieTrackingTrack_weight_stab_get, MovieTrackingTrack_weight_stab_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_MovieTrackingTrack_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingTrack_offset = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingTrack_weight_stab,
	-1, "offset", 3, 0, 0, 4, 0, "Offset",
	"Offset of track from the parenting point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingTrack, offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingTrack_offset_get, MovieTrackingTrack_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingTrack_offset_default
};

StructRNA RNA_MovieTrackingTrack = {
	{(ContainerRNA *)&RNA_MovieTrackingMarkers, (ContainerRNA *)&RNA_MovieTrackingMarker,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingTrack_rna_properties, (PropertyRNA *)&rna_MovieTrackingTrack_offset}},
	"MovieTrackingTrack", nullptr, nullptr, 516, nullptr, "Movie tracking track data",
	"Match-moving track data for tracking",
	"*", 167,
	(PropertyRNA *)&rna_MovieTrackingTrack_name, (PropertyRNA *)&rna_MovieTrackingTrack_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_trackingTrack_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie Tracking Markers */
CollectionPropertyRNA rna_MovieTrackingMarkers_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarkers_rna_properties_begin, MovieTrackingMarkers_rna_properties_next, MovieTrackingMarkers_rna_properties_end, MovieTrackingMarkers_rna_properties_get, nullptr, nullptr, MovieTrackingMarkers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingMarkers_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingMarkers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingMarkers_find_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_exact, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Frame number to find marker for",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

BoolPropertyRNA rna_MovieTrackingMarkers_find_frame_exact = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_marker, (PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_frame,
	-1, "exact", 3, 0, 0, 0, 0, "Exact",
	"Get marker at exact frame number rather than get estimated marker",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_MovieTrackingMarkers_find_frame_marker = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_exact,
	-1, "marker", 8388608, 0, 2, 0, 0, "",
	"Marker for specified frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingMarker
};

FunctionRNA rna_MovieTrackingMarkers_find_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingMarkers_insert_frame_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_frame, (PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_marker}},
	"find_frame", 0, "Get marker for specified frame",
	MovieTrackingMarkers_find_frame_call,
	(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_marker
};

IntPropertyRNA rna_MovieTrackingMarkers_insert_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_co, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Frame number to insert marker to",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

static float rna_MovieTrackingMarkers_insert_frame_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarkers_insert_frame_co = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_marker, (PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_frame,
	-1, "co", 3, 0, 0, 0, 0, "Coordinate",
	"Place new marker at the given frame using specified in normalized space coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 3, 0.0f, rna_MovieTrackingMarkers_insert_frame_co_default
};

PointerPropertyRNA rna_MovieTrackingMarkers_insert_frame_marker = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_co,
	-1, "marker", 8388608, 0, 2, 0, 0, "",
	"Newly created marker",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingMarker
};

FunctionRNA rna_MovieTrackingMarkers_insert_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingMarkers_delete_frame_func, (FunctionRNA *)&rna_MovieTrackingMarkers_find_frame_func,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_frame, (PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_marker}},
	"insert_frame", 0, "Insert a new marker at the specified frame",
	MovieTrackingMarkers_insert_frame_call,
	(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_marker
};

IntPropertyRNA rna_MovieTrackingMarkers_delete_frame_frame = {
	{nullptr, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Frame number to delete marker from",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

FunctionRNA rna_MovieTrackingMarkers_delete_frame_func = {
	{nullptr, (FunctionRNA *)&rna_MovieTrackingMarkers_insert_frame_func,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_delete_frame_frame, (PropertyRNA *)&rna_MovieTrackingMarkers_delete_frame_frame}},
	"delete_frame", 0, "Delete marker at specified frame",
	MovieTrackingMarkers_delete_frame_call,
	nullptr
};

StructRNA RNA_MovieTrackingMarkers = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneMarker, (ContainerRNA *)&RNA_MovieTrackingTrack,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties, (PropertyRNA *)&rna_MovieTrackingMarkers_rna_type}},
	"MovieTrackingMarkers", nullptr, nullptr, 516, nullptr, "Movie Tracking Markers",
	"Collection of markers for movie tracking track",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MovieTrackingMarkers_find_frame_func, (FunctionRNA *)&rna_MovieTrackingMarkers_delete_frame_func}
};

/* Movie Tracking Plane Marker Data */
CollectionPropertyRNA rna_MovieTrackingPlaneMarker_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneMarker_rna_properties_begin, MovieTrackingPlaneMarker_rna_properties_next, MovieTrackingPlaneMarker_rna_properties_end, MovieTrackingPlaneMarker_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneMarker_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneMarker_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneMarker_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingPlaneMarker_frame = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_corners, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_type,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame number marker is keyframed on",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneMarker_frame_get, MovieTrackingPlaneMarker_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static float rna_MovieTrackingPlaneMarker_corners_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingPlaneMarker_corners = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_mute, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_frame,
	-1, "corners", 1, 0, 0, 4, 0, "Corners",
	"Array of coordinates which represents UI rectangle corners in frame normalized coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 2, 0}, 8,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingPlaneMarker, corners), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingPlaneMarker_corners_get, MovieTrackingPlaneMarker_corners_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingPlaneMarker_corners_default
};

BoolPropertyRNA rna_MovieTrackingPlaneMarker_mute = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_corners,
	-1, "mute", 3, 0, 0, 0, 0, "Mode",
	"Is marker muted for current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneMarker_mute_get, MovieTrackingPlaneMarker_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MovieTrackingPlaneMarker = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneTrack, (ContainerRNA *)&RNA_MovieTrackingMarkers,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_mute}},
	"MovieTrackingPlaneMarker", nullptr, nullptr, 516, nullptr, "Movie Tracking Plane Marker Data",
	"Match-moving plane marker data for tracking",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking plane track data */
CollectionPropertyRNA rna_MovieTrackingPlaneTrack_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTrack_rna_properties_begin, MovieTrackingPlaneTrack_rna_properties_next, MovieTrackingPlaneTrack_rna_properties_end, MovieTrackingPlaneTrack_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneTrack_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneTrack_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_name, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTrack_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_MovieTrackingPlaneTrack_name = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_markers, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Unique name of track",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTrack_name_get, MovieTrackingPlaneTrack_name_length, MovieTrackingPlaneTrack_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

CollectionPropertyRNA rna_MovieTrackingPlaneTrack_markers = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_select, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_name,
	-1, "markers", 0, 0, 0, 8, 0, "Markers",
	"Collection of markers in track",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingPlaneMarkers},
	MovieTrackingPlaneTrack_markers_begin, MovieTrackingPlaneTrack_markers_next, MovieTrackingPlaneTrack_markers_end, MovieTrackingPlaneTrack_markers_get, MovieTrackingPlaneTrack_markers_length, MovieTrackingPlaneTrack_markers_lookup_int, nullptr, nullptr, &RNA_MovieTrackingPlaneMarker
};

BoolPropertyRNA rna_MovieTrackingPlaneTrack_select = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_use_auto_keying, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_markers,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Plane track is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTrack_select_get, MovieTrackingPlaneTrack_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingPlaneTrack_use_auto_keying = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_image, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_select,
	-1, "use_auto_keying", 1, 0, 0, 0, 0, "Auto Keyframe",
	"Automatic keyframe insertion when moving plane corners",
	494, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTrack_use_auto_keying_get, MovieTrackingPlaneTrack_use_auto_keying_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_MovieTrackingPlaneTrack_image = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_image_opacity, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_use_auto_keying,
	-1, "image", 8388801, 0, 0, 0, 0, "Image",
	"Image displayed in the track during editing in clip editor",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTrack_image_get, MovieTrackingPlaneTrack_image_set, nullptr, nullptr,&RNA_Image
};

FloatPropertyRNA rna_MovieTrackingPlaneTrack_image_opacity = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_image,
	-1, "image_opacity", 1, 0, 0, 4, 0, "Image Opacity",
	"Opacity of the image",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingPlaneTrack, image_opacity), (RawPropertyType)5, nullptr},
	MovieTrackingPlaneTrack_image_opacity_get, MovieTrackingPlaneTrack_image_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_MovieTrackingPlaneTrack = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneMarkers, (ContainerRNA *)&RNA_MovieTrackingPlaneMarker,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_image_opacity}},
	"MovieTrackingPlaneTrack", nullptr, nullptr, 516, nullptr, "Movie tracking plane track data",
	"Match-moving plane track data for tracking",
	"*", 167,
	(PropertyRNA *)&rna_MovieTrackingPlaneTrack_name, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_trackingPlaneTrack_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie Tracking Plane Markers */
CollectionPropertyRNA rna_MovieTrackingPlaneMarkers_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneMarkers_rna_properties_begin, MovieTrackingPlaneMarkers_rna_properties_next, MovieTrackingPlaneMarkers_rna_properties_end, MovieTrackingPlaneMarkers_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneMarkers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneMarkers_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneMarkers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_exact, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Frame number to find marker for",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

BoolPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_exact = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_frame,
	-1, "exact", 3, 0, 0, 0, 0, "Exact",
	"Get plane marker at exact frame number rather than get estimated marker",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_plane_marker = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_exact,
	-1, "plane_marker", 8388608, 0, 2, 0, 0, "",
	"Plane marker for specified frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingPlaneMarker
};

FunctionRNA rna_MovieTrackingPlaneMarkers_find_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker}},
	"find_frame", 0, "Get plane marker for specified frame",
	MovieTrackingPlaneMarkers_find_frame_call,
	(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker
};

IntPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Frame number to insert marker to",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

PointerPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_frame,
	-1, "plane_marker", 8388608, 0, 2, 0, 0, "",
	"Newly created plane marker",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingPlaneMarker
};

FunctionRNA rna_MovieTrackingPlaneMarkers_insert_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_func, (FunctionRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_func,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker}},
	"insert_frame", 0, "Insert a new plane marker at the specified frame",
	MovieTrackingPlaneMarkers_insert_frame_call,
	(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker
};

IntPropertyRNA rna_MovieTrackingPlaneMarkers_delete_frame_frame = {
	{nullptr, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Frame number to delete plane marker from",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

FunctionRNA rna_MovieTrackingPlaneMarkers_delete_frame_func = {
	{nullptr, (FunctionRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_func,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_frame}},
	"delete_frame", 0, "Delete plane marker at specified frame",
	MovieTrackingPlaneMarkers_delete_frame_call,
	nullptr
};

StructRNA RNA_MovieTrackingPlaneMarkers = {
	{(ContainerRNA *)&RNA_MovieTrackingTracks, (ContainerRNA *)&RNA_MovieTrackingPlaneTrack,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_type}},
	"MovieTrackingPlaneMarkers", nullptr, nullptr, 516, nullptr, "Movie Tracking Plane Markers",
	"Collection of markers for movie tracking plane track",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_func, (FunctionRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_func}
};

/* Movie Tracks */
CollectionPropertyRNA rna_MovieTrackingTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTracks_rna_properties_begin, MovieTrackingTracks_rna_properties_next, MovieTrackingTracks_rna_properties_end, MovieTrackingTracks_rna_properties_get, nullptr, nullptr, MovieTrackingTracks_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_active, (PropertyRNA *)&rna_MovieTrackingTracks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTracks_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingTracks_active = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingTracks_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Track",
	"Active track in this tracking data object. Deprecated, use objects[name].tracks.active",
	0, "MovieClip",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 358219776, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingTracks_active_get, MovieTrackingTracks_active_set, nullptr, nullptr,&RNA_MovieTrackingTrack
};

StringPropertyRNA rna_MovieTrackingTracks_new_name = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_new_frame, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Name of new track",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_MovieTrackingTracks_new_frame = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_new_track, (PropertyRNA *)&rna_MovieTrackingTracks_new_name,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame number to add track on",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

PointerPropertyRNA rna_MovieTrackingTracks_new_track = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingTracks_new_frame,
	-1, "track", 8388608, 0, 2, 0, 0, "",
	"Newly created track",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingTrack
};

FunctionRNA rna_MovieTrackingTracks_new_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingTracks_new_name, (PropertyRNA *)&rna_MovieTrackingTracks_new_track}},
	"new", 2048, "Create new motion track in this movie clip",
	MovieTrackingTracks_new_call,
	(PropertyRNA *)&rna_MovieTrackingTracks_new_track
};

StructRNA RNA_MovieTrackingTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneTracks, (ContainerRNA *)&RNA_MovieTrackingPlaneMarkers,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingTracks_active}},
	"MovieTrackingTracks", nullptr, nullptr, 516, nullptr, "Movie Tracks",
	"Collection of movie tracking tracks",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingTracks_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MovieTrackingTracks_new_func, (FunctionRNA *)&rna_MovieTrackingTracks_new_func}
};

/* Movie Plane Tracks */
CollectionPropertyRNA rna_MovieTrackingPlaneTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTracks_rna_properties_begin, MovieTrackingPlaneTracks_rna_properties_next, MovieTrackingPlaneTracks_rna_properties_end, MovieTrackingPlaneTracks_rna_properties_get, nullptr, nullptr, MovieTrackingPlaneTracks_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTracks_active, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTracks_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingPlaneTracks_active = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Plane Track",
	"Active plane track in this tracking data object. Deprecated, use objects[name].plane_tracks.active",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 358219776, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingPlaneTracks_active_get, MovieTrackingPlaneTracks_active_set, nullptr, nullptr,&RNA_MovieTrackingPlaneTrack
};

StructRNA RNA_MovieTrackingPlaneTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingObjectTracks, (ContainerRNA *)&RNA_MovieTrackingTracks,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_active}},
	"MovieTrackingPlaneTracks", nullptr, nullptr, 516, nullptr, "Movie Plane Tracks",
	"Collection of movie tracking plane tracks",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie Tracks */
CollectionPropertyRNA rna_MovieTrackingObjectTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjectTracks_rna_properties_begin, MovieTrackingObjectTracks_rna_properties_next, MovieTrackingObjectTracks_rna_properties_end, MovieTrackingObjectTracks_rna_properties_get, nullptr, nullptr, MovieTrackingObjectTracks_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObjectTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_active, (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjectTracks_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingObjectTracks_active = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Track",
	"Active track in this tracking data object",
	0, "MovieClip",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 358219776, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjectTracks_active_get, MovieTrackingObjectTracks_active_set, nullptr, nullptr,&RNA_MovieTrackingTrack
};

StringPropertyRNA rna_MovieTrackingObjectTracks_new_name = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_frame, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Name of new track",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_MovieTrackingObjectTracks_new_frame = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_track, (PropertyRNA *)&rna_MovieTrackingObjectTracks_new_name,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame number to add tracks on",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

PointerPropertyRNA rna_MovieTrackingObjectTracks_new_track = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingObjectTracks_new_frame,
	-1, "track", 8388608, 0, 2, 0, 0, "",
	"Newly created track",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingTrack
};

FunctionRNA rna_MovieTrackingObjectTracks_new_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_name, (PropertyRNA *)&rna_MovieTrackingObjectTracks_new_track}},
	"new", 2048, "create new motion track in this movie clip",
	MovieTrackingObjectTracks_new_call,
	(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_track
};

StructRNA RNA_MovieTrackingObjectTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingObjectPlaneTracks, (ContainerRNA *)&RNA_MovieTrackingPlaneTracks,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingObjectTracks_active}},
	"MovieTrackingObjectTracks", nullptr, nullptr, 516, nullptr, "Movie Tracks",
	"Collection of movie tracking tracks",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MovieTrackingObjectTracks_new_func, (FunctionRNA *)&rna_MovieTrackingObjectTracks_new_func}
};

/* Plane Tracks */
CollectionPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjectPlaneTracks_rna_properties_begin, MovieTrackingObjectPlaneTracks_rna_properties_next, MovieTrackingObjectPlaneTracks_rna_properties_end, MovieTrackingObjectPlaneTracks_rna_properties_get, nullptr, nullptr, MovieTrackingObjectPlaneTracks_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_active, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjectPlaneTracks_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_active = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Track",
	"Active track in this tracking data object",
	0, "MovieClip",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 358219776, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjectPlaneTracks_active_get, MovieTrackingObjectPlaneTracks_active_set, nullptr, nullptr,&RNA_MovieTrackingTrack
};

StructRNA RNA_MovieTrackingObjectPlaneTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingStabilization, (ContainerRNA *)&RNA_MovieTrackingObjectTracks,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_active}},
	"MovieTrackingObjectPlaneTracks", nullptr, nullptr, 516, nullptr, "Plane Tracks",
	"Collection of tracking plane tracks",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking stabilization data */
CollectionPropertyRNA rna_MovieTrackingStabilization_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_rna_properties_begin, MovieTrackingStabilization_rna_properties_next, MovieTrackingStabilization_rna_properties_end, MovieTrackingStabilization_rna_properties_get, nullptr, nullptr, MovieTrackingStabilization_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingStabilization_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_2d_stabilization, (PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_2d_stabilization = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_stabilize_rotation, (PropertyRNA *)&rna_MovieTrackingStabilization_rna_type,
	-1, "use_2d_stabilization", 1, 0, 0, 0, 0, "Use 2D Stabilization",
	"Use 2D stabilization for footage",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_use_2d_stabilization_get, MovieTrackingStabilization_use_2d_stabilization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_rotation = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_stabilize_scale, (PropertyRNA *)&rna_MovieTrackingStabilization_use_2d_stabilization,
	-1, "use_stabilize_rotation", 1, 0, 0, 0, 0, "Stabilize Rotation",
	"Stabilize detected rotation around center of frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_use_stabilize_rotation_get, MovieTrackingStabilization_use_stabilize_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_scale = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_tracks, (PropertyRNA *)&rna_MovieTrackingStabilization_use_stabilize_rotation,
	-1, "use_stabilize_scale", 1, 0, 0, 0, 0, "Stabilize Scale",
	"Compensate any scale changes relative to center of rotation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_use_stabilize_scale_get, MovieTrackingStabilization_use_stabilize_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MovieTrackingStabilization_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_active_track_index, (PropertyRNA *)&rna_MovieTrackingStabilization_use_stabilize_scale,
	-1, "tracks", 0, 0, 0, 0, 0, "Translation Tracks",
	"Collection of tracks used for 2D stabilization (translation)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_tracks_begin, MovieTrackingStabilization_tracks_next, MovieTrackingStabilization_tracks_end, MovieTrackingStabilization_tracks_get, nullptr, nullptr, nullptr, nullptr, &RNA_MovieTrackingTrack
};

IntPropertyRNA rna_MovieTrackingStabilization_active_track_index = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_rotation_tracks, (PropertyRNA *)&rna_MovieTrackingStabilization_tracks,
	-1, "active_track_index", 1, 0, 0, 0, 0, "Active Track Index",
	"Index of active track in translation stabilization tracks list",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_active_track_index_get, MovieTrackingStabilization_active_track_index_set, nullptr, nullptr, rna_tracking_stabTracks_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

CollectionPropertyRNA rna_MovieTrackingStabilization_rotation_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_active_rotation_track_index, (PropertyRNA *)&rna_MovieTrackingStabilization_active_track_index,
	-1, "rotation_tracks", 0, 0, 0, 0, 0, "Rotation Tracks",
	"Collection of tracks used for 2D stabilization (translation)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_rotation_tracks_begin, MovieTrackingStabilization_rotation_tracks_next, MovieTrackingStabilization_rotation_tracks_end, MovieTrackingStabilization_rotation_tracks_get, nullptr, nullptr, nullptr, nullptr, &RNA_MovieTrackingTrack
};

IntPropertyRNA rna_MovieTrackingStabilization_active_rotation_track_index = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_anchor_frame, (PropertyRNA *)&rna_MovieTrackingStabilization_rotation_tracks,
	-1, "active_rotation_track_index", 1, 0, 0, 0, 0, "Active Rotation Track Index",
	"Index of active track in rotation stabilization tracks list",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_active_rotation_track_index_get, MovieTrackingStabilization_active_rotation_track_index_set, nullptr, nullptr, rna_tracking_stabRotTracks_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MovieTrackingStabilization_anchor_frame = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_target_position, (PropertyRNA *)&rna_MovieTrackingStabilization_active_rotation_track_index,
	-1, "anchor_frame", 1, 0, 0, 4, 0, "Anchor Frame",
	"Reference point to anchor stabilization (other frames will be adjusted relative to this frame\'s position)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, anchor_frame), (RawPropertyType)0, nullptr},
	MovieTrackingStabilization_anchor_frame_get, MovieTrackingStabilization_anchor_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 0, nullptr
};

static float rna_MovieTrackingStabilization_target_position_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingStabilization_target_position = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_target_rotation, (PropertyRNA *)&rna_MovieTrackingStabilization_anchor_frame,
	-1, "target_position", 3, 0, 0, 4, 0, "Expected Position",
	"Known relative offset of original shot, will be subtracted (e.g. for panning shot, can be animated)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, target_pos), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieTrackingStabilization_target_position_get, MovieTrackingStabilization_target_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_MovieTrackingStabilization_target_position_default
};

FloatPropertyRNA rna_MovieTrackingStabilization_target_rotation = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_target_scale, (PropertyRNA *)&rna_MovieTrackingStabilization_target_position,
	-1, "target_rotation", 3, 0, 0, 4, 0, "Expected Rotation",
	"Rotation present on original shot, will be compensated (e.g. for deliberate tilting)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, target_rot), (RawPropertyType)5, nullptr},
	MovieTrackingStabilization_target_rotation_get, MovieTrackingStabilization_target_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingStabilization_target_scale = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_autoscale, (PropertyRNA *)&rna_MovieTrackingStabilization_target_rotation,
	-1, "target_scale", 3, 0, 0, 4, 0, "Expected Scale",
	"Explicitly scale resulting frame to compensate zoom of original shot",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, scale), (RawPropertyType)5, nullptr},
	MovieTrackingStabilization_target_scale_get, MovieTrackingStabilization_target_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0000001192f, FLT_MAX, 0.0010000000f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_autoscale = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_scale_max, (PropertyRNA *)&rna_MovieTrackingStabilization_target_scale,
	-1, "use_autoscale", 1, 0, 0, 0, 0, "Autoscale",
	"Automatically scale footage to cover unfilled areas when stabilizing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_use_autoscale_get, MovieTrackingStabilization_use_autoscale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_MovieTrackingStabilization_scale_max = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_influence_location, (PropertyRNA *)&rna_MovieTrackingStabilization_use_autoscale,
	-1, "scale_max", 3, 0, 0, 4, 0, "Maximal Scale",
	"Limit the amount of automatic scaling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, maxscale), (RawPropertyType)5, nullptr},
	MovieTrackingStabilization_scale_max_get, MovieTrackingStabilization_scale_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingStabilization_influence_location = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_influence_scale, (PropertyRNA *)&rna_MovieTrackingStabilization_scale_max,
	-1, "influence_location", 3, 0, 0, 4, 0, "Location Influence",
	"Influence of stabilization algorithm on footage location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, locinf), (RawPropertyType)5, nullptr},
	MovieTrackingStabilization_influence_location_get, MovieTrackingStabilization_influence_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingStabilization_influence_scale = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_influence_rotation, (PropertyRNA *)&rna_MovieTrackingStabilization_influence_location,
	-1, "influence_scale", 3, 0, 0, 4, 0, "Scale Influence",
	"Influence of stabilization algorithm on footage scale",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, scaleinf), (RawPropertyType)5, nullptr},
	MovieTrackingStabilization_influence_scale_get, MovieTrackingStabilization_influence_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MovieTrackingStabilization_influence_rotation = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_filter_type, (PropertyRNA *)&rna_MovieTrackingStabilization_influence_scale,
	-1, "influence_rotation", 3, 0, 0, 4, 0, "Rotation Influence",
	"Influence of stabilization algorithm on footage rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, rotinf), (RawPropertyType)5, nullptr},
	MovieTrackingStabilization_influence_rotation_get, MovieTrackingStabilization_influence_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_MovieTrackingStabilization_filter_type_items[4] = {
	{0, "NEAREST", 0, "Nearest", "No interpolation, use nearest neighbor pixel"},
	{1, "BILINEAR", 0, "Bilinear", "Simple interpolation between adjacent pixels"},
	{2, "BICUBIC", 0, "Bicubic", "High quality pixel interpolation"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingStabilization_filter_type = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_show_tracks_expanded, (PropertyRNA *)&rna_MovieTrackingStabilization_influence_rotation,
	-1, "filter_type", 3, 0, 0, 4, 0, "Interpolate",
	"Interpolation to use for sub-pixel shifts and rotations due to stabilization",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingStabilization, filter), (RawPropertyType)0, nullptr},
	MovieTrackingStabilization_filter_type_get, MovieTrackingStabilization_filter_type_set, nullptr, nullptr, nullptr, rna_MovieTrackingStabilization_filter_type_items, 3, 0
};

BoolPropertyRNA rna_MovieTrackingStabilization_show_tracks_expanded = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingStabilization_filter_type,
	-1, "show_tracks_expanded", 4097, 0, 0, 0, 0, "Show Tracks",
	"Show UI list of tracks participating in stabilization",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingStabilization_show_tracks_expanded_get, MovieTrackingStabilization_show_tracks_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MovieTrackingStabilization = {
	{(ContainerRNA *)&RNA_MovieTrackingReconstructedCameras, (ContainerRNA *)&RNA_MovieTrackingObjectPlaneTracks,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties, (PropertyRNA *)&rna_MovieTrackingStabilization_show_tracks_expanded}},
	"MovieTrackingStabilization", nullptr, nullptr, 516, nullptr, "Movie tracking stabilization data",
	"2D stabilization based on tracking markers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_trackingStabilization_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Reconstructed Cameras */
CollectionPropertyRNA rna_MovieTrackingReconstructedCameras_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingReconstructedCameras_rna_properties_begin, MovieTrackingReconstructedCameras_rna_properties_next, MovieTrackingReconstructedCameras_rna_properties_end, MovieTrackingReconstructedCameras_rna_properties_get, nullptr, nullptr, MovieTrackingReconstructedCameras_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingReconstructedCameras_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingReconstructedCameras_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_camera, nullptr,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame number to find camera for",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

PointerPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_camera = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_frame,
	-1, "camera", 8388608, 0, 2, 0, 0, "",
	"Camera for a given frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieReconstructedCamera
};

FunctionRNA rna_MovieTrackingReconstructedCameras_find_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_frame, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_camera}},
	"find_frame", 2048, "Find a reconstructed camera for a give frame number",
	MovieTrackingReconstructedCameras_find_frame_call,
	(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_camera
};

IntPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix, nullptr,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame number to find camera for",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 1, nullptr
};

static float rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_default[16] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame,
	-1, "matrix", 8388611, 0, 2, 0, 0, "Matrix",
	"Interpolated camera matrix for a given frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_default
};

FunctionRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_func = {
	{nullptr, (FunctionRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_func,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix}},
	"matrix_from_frame", 2048, "Return interpolated camera matrix for a given frame",
	MovieTrackingReconstructedCameras_matrix_from_frame_call,
	nullptr
};

StructRNA RNA_MovieTrackingReconstructedCameras = {
	{(ContainerRNA *)&RNA_MovieReconstructedCamera, (ContainerRNA *)&RNA_MovieTrackingStabilization,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_type}},
	"MovieTrackingReconstructedCameras", nullptr, nullptr, 516, nullptr, "Reconstructed Cameras",
	"Collection of solved cameras",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_func, (FunctionRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_func}
};

/* Movie tracking reconstructed camera data */
CollectionPropertyRNA rna_MovieReconstructedCamera_rna_properties = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieReconstructedCamera_rna_properties_begin, MovieReconstructedCamera_rna_properties_next, MovieReconstructedCamera_rna_properties_end, MovieReconstructedCamera_rna_properties_get, nullptr, nullptr, MovieReconstructedCamera_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieReconstructedCamera_rna_type = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_frame, (PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieReconstructedCamera_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MovieReconstructedCamera_frame = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_matrix, (PropertyRNA *)&rna_MovieReconstructedCamera_rna_type,
	-1, "frame", 2, 0, 0, 4, 0, "Frame",
	"Frame number marker is keyframed on",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieReconstructedCamera, framenr), (RawPropertyType)0, nullptr},
	MovieReconstructedCamera_frame_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static float rna_MovieReconstructedCamera_matrix_default[16] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieReconstructedCamera_matrix = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_average_error, (PropertyRNA *)&rna_MovieReconstructedCamera_frame,
	-1, "matrix", 2, 0, 0, 4, 0, "Matrix",
	"Worldspace transformation matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieReconstructedCamera, mat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieReconstructedCamera_matrix_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MovieReconstructedCamera_matrix_default
};

FloatPropertyRNA rna_MovieReconstructedCamera_average_error = {
	{nullptr, (PropertyRNA *)&rna_MovieReconstructedCamera_matrix,
	-1, "average_error", 2, 0, 0, 4, 0, "Average Error",
	"Average error of reconstruction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieReconstructedCamera, error), (RawPropertyType)5, nullptr},
	MovieReconstructedCamera_average_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_MovieReconstructedCamera = {
	{(ContainerRNA *)&RNA_MovieTrackingReconstruction, (ContainerRNA *)&RNA_MovieTrackingReconstructedCameras,
	nullptr,
	{(PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties, (PropertyRNA *)&rna_MovieReconstructedCamera_average_error}},
	"MovieReconstructedCamera", nullptr, nullptr, 516, nullptr, "Movie tracking reconstructed camera data",
	"Match-moving reconstructed camera data from tracker",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking reconstruction data */
CollectionPropertyRNA rna_MovieTrackingReconstruction_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingReconstruction_rna_properties_begin, MovieTrackingReconstruction_rna_properties_next, MovieTrackingReconstruction_rna_properties_end, MovieTrackingReconstruction_rna_properties_get, nullptr, nullptr, MovieTrackingReconstruction_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingReconstruction_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_is_valid, (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingReconstruction_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_MovieTrackingReconstruction_is_valid = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_average_error, (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_type,
	-1, "is_valid", 2, 0, 0, 0, 0, "Reconstructed",
	"Is tracking data contains valid reconstruction information",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingReconstruction_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_MovieTrackingReconstruction_average_error = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_cameras, (PropertyRNA *)&rna_MovieTrackingReconstruction_is_valid,
	-1, "average_error", 2, 0, 0, 4, 0, "Average Error",
	"Average error of reconstruction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingReconstruction, error), (RawPropertyType)5, nullptr},
	MovieTrackingReconstruction_average_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

CollectionPropertyRNA rna_MovieTrackingReconstruction_cameras = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingReconstruction_average_error,
	-1, "cameras", 0, 0, 0, 8, 0, "Cameras",
	"Collection of solved cameras",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingReconstructedCameras},
	MovieTrackingReconstruction_cameras_begin, MovieTrackingReconstruction_cameras_next, MovieTrackingReconstruction_cameras_end, MovieTrackingReconstruction_cameras_get, MovieTrackingReconstruction_cameras_length, MovieTrackingReconstruction_cameras_lookup_int, nullptr, nullptr, &RNA_MovieReconstructedCamera
};

StructRNA RNA_MovieTrackingReconstruction = {
	{(ContainerRNA *)&RNA_MovieTrackingObject, (ContainerRNA *)&RNA_MovieReconstructedCamera,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties, (PropertyRNA *)&rna_MovieTrackingReconstruction_cameras}},
	"MovieTrackingReconstruction", nullptr, nullptr, 516, nullptr, "Movie tracking reconstruction data",
	"Match-moving reconstruction data from tracker",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking object data */
CollectionPropertyRNA rna_MovieTrackingObject_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObject_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObject_rna_properties_begin, MovieTrackingObject_rna_properties_next, MovieTrackingObject_rna_properties_end, MovieTrackingObject_rna_properties_get, nullptr, nullptr, MovieTrackingObject_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObject_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObject_name, (PropertyRNA *)&rna_MovieTrackingObject_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObject_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_MovieTrackingObject_name = {
	{(PropertyRNA *)&rna_MovieTrackingObject_is_camera, (PropertyRNA *)&rna_MovieTrackingObject_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Unique name of object",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObject_name_get, MovieTrackingObject_name_length, MovieTrackingObject_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_MovieTrackingObject_is_camera = {
	{(PropertyRNA *)&rna_MovieTrackingObject_tracks, (PropertyRNA *)&rna_MovieTrackingObject_name,
	-1, "is_camera", 2, 0, 0, 0, 0, "Camera",
	"Object is used for camera tracking",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObject_is_camera_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MovieTrackingObject_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingObject_plane_tracks, (PropertyRNA *)&rna_MovieTrackingObject_is_camera,
	-1, "tracks", 0, 0, 0, 0, 0, "Tracks",
	"Collection of tracks in this tracking data object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingObjectTracks},
	MovieTrackingObject_tracks_begin, MovieTrackingObject_tracks_next, MovieTrackingObject_tracks_end, MovieTrackingObject_tracks_get, nullptr, MovieTrackingObject_tracks_lookup_int, MovieTrackingObject_tracks_lookup_string, nullptr, &RNA_MovieTrackingTrack
};

CollectionPropertyRNA rna_MovieTrackingObject_plane_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingObject_reconstruction, (PropertyRNA *)&rna_MovieTrackingObject_tracks,
	-1, "plane_tracks", 0, 0, 0, 0, 0, "Plane Tracks",
	"Collection of plane tracks in this tracking data object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingObjectPlaneTracks},
	MovieTrackingObject_plane_tracks_begin, MovieTrackingObject_plane_tracks_next, MovieTrackingObject_plane_tracks_end, MovieTrackingObject_plane_tracks_get, nullptr, MovieTrackingObject_plane_tracks_lookup_int, MovieTrackingObject_plane_tracks_lookup_string, nullptr, &RNA_MovieTrackingPlaneTrack
};

PointerPropertyRNA rna_MovieTrackingObject_reconstruction = {
	{(PropertyRNA *)&rna_MovieTrackingObject_scale, (PropertyRNA *)&rna_MovieTrackingObject_plane_tracks,
	-1, "reconstruction", 8388608, 0, 0, 0, 0, "reconstruction",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObject_reconstruction_get, nullptr, nullptr, nullptr,&RNA_MovieTrackingReconstruction
};

FloatPropertyRNA rna_MovieTrackingObject_scale = {
	{(PropertyRNA *)&rna_MovieTrackingObject_keyframe_a, (PropertyRNA *)&rna_MovieTrackingObject_reconstruction,
	-1, "scale", 1, 0, 0, 4, 0, "Scale",
	"Scale of object solution in camera space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_trackingObject_flushUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingObject, scale), (RawPropertyType)5, nullptr},
	MovieTrackingObject_scale_get, MovieTrackingObject_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10000.0f, 0.0001000000f, 10000.0f, 1.0f, 4, 1.0f, nullptr
};

IntPropertyRNA rna_MovieTrackingObject_keyframe_a = {
	{(PropertyRNA *)&rna_MovieTrackingObject_keyframe_b, (PropertyRNA *)&rna_MovieTrackingObject_scale,
	-1, "keyframe_a", 1, 0, 0, 4, 0, "Keyframe A",
	"First keyframe used for reconstruction initialization",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingObject, keyframe1), (RawPropertyType)0, nullptr},
	MovieTrackingObject_keyframe_a_get, MovieTrackingObject_keyframe_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MovieTrackingObject_keyframe_b = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingObject_keyframe_a,
	-1, "keyframe_b", 1, 0, 0, 4, 0, "Keyframe B",
	"Second keyframe used for reconstruction initialization",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingObject, keyframe2), (RawPropertyType)0, nullptr},
	MovieTrackingObject_keyframe_b_get, MovieTrackingObject_keyframe_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_MovieTrackingObject = {
	{(ContainerRNA *)&RNA_MovieTrackingDopesheet, (ContainerRNA *)&RNA_MovieTrackingReconstruction,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObject_rna_properties, (PropertyRNA *)&rna_MovieTrackingObject_keyframe_b}},
	"MovieTrackingObject", nullptr, nullptr, 516, nullptr, "Movie tracking object data",
	"Match-moving object tracking and reconstruction data",
	"*", 17,
	(PropertyRNA *)&rna_MovieTrackingObject_name, (PropertyRNA *)&rna_MovieTrackingObject_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie Tracking Dopesheet */
CollectionPropertyRNA rna_MovieTrackingDopesheet_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingDopesheet_rna_properties_begin, MovieTrackingDopesheet_rna_properties_next, MovieTrackingDopesheet_rna_properties_end, MovieTrackingDopesheet_rna_properties_get, nullptr, nullptr, MovieTrackingDopesheet_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingDopesheet_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_sort_method, (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingDopesheet_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_MovieTrackingDopesheet_sort_method_items[7] = {
	{0, "NAME", 0, "Name", "Sort channels by their names"},
	{1, "LONGEST", 0, "Longest", "Sort channels by longest tracked segment"},
	{2, "TOTAL", 0, "Total", "Sort channels by overall amount of tracked segments"},
	{3, "AVERAGE_ERROR", 0, "Average Error", "Sort channels by average reprojection error of tracks after solve"},
	{4, "START", 0, "Start Frame", "Sort channels by first frame number"},
	{5, "END", 0, "End Frame", "Sort channels by last frame number"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieTrackingDopesheet_sort_method = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_use_invert_sort, (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_type,
	-1, "sort_method", 3, 0, 0, 4, 0, "Dopesheet Sort Field",
	"Method to be used to sort channels in dopesheet view",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieTrackingDopesheet, sort_method), (RawPropertyType)1, nullptr},
	MovieTrackingDopesheet_sort_method_get, MovieTrackingDopesheet_sort_method_set, nullptr, nullptr, nullptr, rna_MovieTrackingDopesheet_sort_method_items, 6, 0
};

BoolPropertyRNA rna_MovieTrackingDopesheet_use_invert_sort = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_show_only_selected, (PropertyRNA *)&rna_MovieTrackingDopesheet_sort_method,
	-1, "use_invert_sort", 3, 0, 0, 0, 0, "Invert Dopesheet Sort",
	"Invert sort order of dopesheet channels",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingDopesheet_use_invert_sort_get, MovieTrackingDopesheet_use_invert_sort_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingDopesheet_show_only_selected = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_show_hidden, (PropertyRNA *)&rna_MovieTrackingDopesheet_use_invert_sort,
	-1, "show_only_selected", 3, 0, 0, 0, 0, "Only Show Selected",
	"Only include channels relating to selected objects and data",
	256, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingDopesheet_show_only_selected_get, MovieTrackingDopesheet_show_only_selected_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieTrackingDopesheet_show_hidden = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingDopesheet_show_only_selected,
	-1, "show_hidden", 3, 0, 0, 0, 0, "Display Hidden",
	"Include channels from objects/bone that are not visible",
	53, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 352321537, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingDopesheet_show_hidden_get, MovieTrackingDopesheet_show_hidden_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MovieTrackingDopesheet = {
	{(ContainerRNA *)&RNA_MovieTracking, (ContainerRNA *)&RNA_MovieTrackingObject,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties, (PropertyRNA *)&rna_MovieTrackingDopesheet_show_hidden}},
	"MovieTrackingDopesheet", nullptr, nullptr, 516, nullptr, "Movie Tracking Dopesheet",
	"Match-moving dopesheet data",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie tracking data */
CollectionPropertyRNA rna_MovieTracking_rna_properties = {
	{(PropertyRNA *)&rna_MovieTracking_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_rna_properties_begin, MovieTracking_rna_properties_next, MovieTracking_rna_properties_end, MovieTracking_rna_properties_get, nullptr, nullptr, MovieTracking_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTracking_rna_type = {
	{(PropertyRNA *)&rna_MovieTracking_settings, (PropertyRNA *)&rna_MovieTracking_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MovieTracking_settings = {
	{(PropertyRNA *)&rna_MovieTracking_camera, (PropertyRNA *)&rna_MovieTracking_rna_type,
	-1, "settings", 8388608, 0, 0, 0, 0, "settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_settings_get, nullptr, nullptr, nullptr,&RNA_MovieTrackingSettings
};

PointerPropertyRNA rna_MovieTracking_camera = {
	{(PropertyRNA *)&rna_MovieTracking_tracks, (PropertyRNA *)&rna_MovieTracking_settings,
	-1, "camera", 8388608, 0, 0, 0, 0, "camera",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_camera_get, nullptr, nullptr, nullptr,&RNA_MovieTrackingCamera
};

CollectionPropertyRNA rna_MovieTracking_tracks = {
	{(PropertyRNA *)&rna_MovieTracking_plane_tracks, (PropertyRNA *)&rna_MovieTracking_camera,
	-1, "tracks", 0, 0, 0, 0, 0, "Tracks",
	"Collection of tracks in this tracking data object. Deprecated, use objects[name].tracks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingTracks},
	MovieTracking_tracks_begin, MovieTracking_tracks_next, MovieTracking_tracks_end, MovieTracking_tracks_get, nullptr, nullptr, nullptr, nullptr, &RNA_MovieTrackingTrack
};

CollectionPropertyRNA rna_MovieTracking_plane_tracks = {
	{(PropertyRNA *)&rna_MovieTracking_stabilization, (PropertyRNA *)&rna_MovieTracking_tracks,
	-1, "plane_tracks", 0, 0, 0, 0, 0, "Plane Tracks",
	"Collection of plane tracks in this tracking data object. Deprecated, use objects[name].plane_tracks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingPlaneTracks},
	MovieTracking_plane_tracks_begin, MovieTracking_plane_tracks_next, MovieTracking_plane_tracks_end, MovieTracking_plane_tracks_get, nullptr, nullptr, nullptr, nullptr, &RNA_MovieTrackingPlaneTrack
};

PointerPropertyRNA rna_MovieTracking_stabilization = {
	{(PropertyRNA *)&rna_MovieTracking_reconstruction, (PropertyRNA *)&rna_MovieTracking_plane_tracks,
	-1, "stabilization", 8388608, 0, 0, 0, 0, "stabilization",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_stabilization_get, nullptr, nullptr, nullptr,&RNA_MovieTrackingStabilization
};

PointerPropertyRNA rna_MovieTracking_reconstruction = {
	{(PropertyRNA *)&rna_MovieTracking_objects, (PropertyRNA *)&rna_MovieTracking_stabilization,
	-1, "reconstruction", 8388608, 0, 0, 0, 0, "reconstruction",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_reconstruction_get, nullptr, nullptr, nullptr,&RNA_MovieTrackingReconstruction
};

CollectionPropertyRNA rna_MovieTracking_objects = {
	{(PropertyRNA *)&rna_MovieTracking_active_object_index, (PropertyRNA *)&rna_MovieTracking_reconstruction,
	-1, "objects", 0, 0, 0, 0, 0, "Objects",
	"Collection of objects in this tracking data object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MovieTrackingObjects},
	MovieTracking_objects_begin, MovieTracking_objects_next, MovieTracking_objects_end, MovieTracking_objects_get, nullptr, MovieTracking_objects_lookup_int, MovieTracking_objects_lookup_string, nullptr, &RNA_MovieTrackingObject
};

IntPropertyRNA rna_MovieTracking_active_object_index = {
	{(PropertyRNA *)&rna_MovieTracking_dopesheet, (PropertyRNA *)&rna_MovieTracking_objects,
	-1, "active_object_index", 1, 0, 0, 0, 0, "Active Object Index",
	"Index of active object",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_active_object_index_get, MovieTracking_active_object_index_set, nullptr, nullptr, rna_tracking_active_object_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_MovieTracking_dopesheet = {
	{nullptr, (PropertyRNA *)&rna_MovieTracking_active_object_index,
	-1, "dopesheet", 8388608, 0, 0, 0, 0, "dopesheet",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTracking_dopesheet_get, nullptr, nullptr, nullptr,&RNA_MovieTrackingDopesheet
};

StructRNA RNA_MovieTracking = {
	{(ContainerRNA *)&RNA_MovieTrackingObjects, (ContainerRNA *)&RNA_MovieTrackingDopesheet,
	nullptr,
	{(PropertyRNA *)&rna_MovieTracking_rna_properties, (PropertyRNA *)&rna_MovieTracking_dopesheet}},
	"MovieTracking", nullptr, nullptr, 516, nullptr, "Movie tracking data",
	"Match-moving data for tracking",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTracking_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_tracking_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Movie Objects */
CollectionPropertyRNA rna_MovieTrackingObjects_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObjects_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjects_rna_properties_begin, MovieTrackingObjects_rna_properties_next, MovieTrackingObjects_rna_properties_end, MovieTrackingObjects_rna_properties_get, nullptr, nullptr, MovieTrackingObjects_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObjects_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObjects_active, (PropertyRNA *)&rna_MovieTrackingObjects_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjects_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingObjects_active = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingObjects_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Object",
	"Active object in this tracking data object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieTrackingObjects_active_get, MovieTrackingObjects_active_set, nullptr, nullptr,&RNA_MovieTrackingObject
};

StringPropertyRNA rna_MovieTrackingObjects_new_name = {
	{(PropertyRNA *)&rna_MovieTrackingObjects_new_object, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"Name of new object",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_MovieTrackingObjects_new_object = {
	{nullptr, (PropertyRNA *)&rna_MovieTrackingObjects_new_name,
	-1, "object", 8388608, 0, 2, 0, 0, "",
	"New motion tracking object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingObject
};

FunctionRNA rna_MovieTrackingObjects_new_func = {
	{(FunctionRNA *)&rna_MovieTrackingObjects_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObjects_new_name, (PropertyRNA *)&rna_MovieTrackingObjects_new_object}},
	"new", 0, "Add tracking object to this movie clip",
	MovieTrackingObjects_new_call,
	(PropertyRNA *)&rna_MovieTrackingObjects_new_object
};

PointerPropertyRNA rna_MovieTrackingObjects_remove_object = {
	{nullptr, nullptr,
	-1, "object", 262144, 0, 5, 0, 0, "",
	"Motion tracking object to be removed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieTrackingObject
};

FunctionRNA rna_MovieTrackingObjects_remove_func = {
	{nullptr, (FunctionRNA *)&rna_MovieTrackingObjects_new_func,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObjects_remove_object, (PropertyRNA *)&rna_MovieTrackingObjects_remove_object}},
	"remove", 16, "Remove tracking object from this movie clip",
	MovieTrackingObjects_remove_call,
	nullptr
};

StructRNA RNA_MovieTrackingObjects = {
	{(ContainerRNA *)&RNA_MaskParent, (ContainerRNA *)&RNA_MovieTracking,
	nullptr,
	{(PropertyRNA *)&rna_MovieTrackingObjects_rna_properties, (PropertyRNA *)&rna_MovieTrackingObjects_active}},
	"MovieTrackingObjects", nullptr, nullptr, 516, nullptr, "Movie Objects",
	"Collection of movie tracking objects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieTrackingObjects_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MovieTrackingObjects_new_func, (FunctionRNA *)&rna_MovieTrackingObjects_remove_func}
};

