
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

#include "rna_camera.cc"
#include "rna_camera_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ID_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ID_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ID_name_full;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_is_evaluated;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_original;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_ID_users;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_use_fake_user;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_use_extra_user;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_is_embedded_data;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_is_missing;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_is_runtime_data;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_tag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ID_is_library_indirect;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_library;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_library_weak_reference;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_asset_data;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_override_library;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ID_preview;

RNA_EXTERN_C EnumPropertyRNA rna_Camera_type;
RNA_EXTERN_C EnumPropertyRNA rna_Camera_sensor_fit;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_passepartout_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_angle_x;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_angle_y;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_angle;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_clip_end;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_lens;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_sensor_width;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_sensor_height;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_ortho_scale;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_display_size;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_shift_x;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_shift_y;
RNA_EXTERN_C PointerPropertyRNA rna_Camera_stereo;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_limits;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_mist;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_passepartout;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_safe_areas;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_safe_center;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_name;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_sensor;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_background_images;
RNA_EXTERN_C EnumPropertyRNA rna_Camera_lens_unit;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_center;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_center_diagonal;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_thirds;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_golden;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_golden_tria_a;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_golden_tria_b;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_harmony_tri_a;
RNA_EXTERN_C BoolPropertyRNA rna_Camera_show_composition_harmony_tri_b;
RNA_EXTERN_C EnumPropertyRNA rna_Camera_panorama_type;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_fov;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_lens;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_latitude_min;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_latitude_max;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_longitude_min;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_longitude_max;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_polynomial_k0;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_polynomial_k1;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_polynomial_k2;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_polynomial_k3;
RNA_EXTERN_C FloatPropertyRNA rna_Camera_fisheye_polynomial_k4;
RNA_EXTERN_C PointerPropertyRNA rna_Camera_dof;
RNA_EXTERN_C CollectionPropertyRNA rna_Camera_background_images;
RNA_EXTERN_C PointerPropertyRNA rna_Camera_animation_data;

extern FunctionRNA rna_ID_evaluated_get_func;
extern PointerPropertyRNA rna_ID_evaluated_get_depsgraph;
extern PointerPropertyRNA rna_ID_evaluated_get_id;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_asset_mark_func;
extern FunctionRNA rna_ID_asset_clear_func;
extern FunctionRNA rna_ID_asset_generate_preview_func;
extern FunctionRNA rna_ID_override_create_func;
extern PointerPropertyRNA rna_ID_override_create_id;
extern BoolPropertyRNA rna_ID_override_create_remap_local_usages;

extern FunctionRNA rna_ID_override_hierarchy_create_func;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_id;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_scene;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_view_layer;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_reference;
extern BoolPropertyRNA rna_ID_override_hierarchy_create_do_fully_editable;

extern FunctionRNA rna_ID_override_template_create_func;
extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_user_remap_func;
extern PointerPropertyRNA rna_ID_user_remap_new_id;

extern FunctionRNA rna_ID_make_local_func;
extern BoolPropertyRNA rna_ID_make_local_clear_proxy;
extern PointerPropertyRNA rna_ID_make_local_id;

extern FunctionRNA rna_ID_user_of_id_func;
extern PointerPropertyRNA rna_ID_user_of_id_id;
extern IntPropertyRNA rna_ID_user_of_id_count;

extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;

extern FunctionRNA rna_ID_preview_ensure_func;
extern PointerPropertyRNA rna_ID_preview_ensure_preview_image;


extern FunctionRNA rna_Camera_view_frame_func;
extern PointerPropertyRNA rna_Camera_view_frame_scene;
extern FloatPropertyRNA rna_Camera_view_frame_result_1;
extern FloatPropertyRNA rna_Camera_view_frame_result_2;
extern FloatPropertyRNA rna_Camera_view_frame_result_3;
extern FloatPropertyRNA rna_Camera_view_frame_result_4;



RNA_EXTERN_C CollectionPropertyRNA rna_CameraBackgroundImage_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CameraBackgroundImage_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_is_override_data;
RNA_EXTERN_C EnumPropertyRNA rna_CameraBackgroundImage_source;
RNA_EXTERN_C PointerPropertyRNA rna_CameraBackgroundImage_image;
RNA_EXTERN_C PointerPropertyRNA rna_CameraBackgroundImage_clip;
RNA_EXTERN_C PointerPropertyRNA rna_CameraBackgroundImage_image_user;
RNA_EXTERN_C PointerPropertyRNA rna_CameraBackgroundImage_clip_user;
RNA_EXTERN_C FloatPropertyRNA rna_CameraBackgroundImage_offset;
RNA_EXTERN_C FloatPropertyRNA rna_CameraBackgroundImage_scale;
RNA_EXTERN_C FloatPropertyRNA rna_CameraBackgroundImage_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_use_flip_x;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_use_flip_y;
RNA_EXTERN_C FloatPropertyRNA rna_CameraBackgroundImage_alpha;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_show_expanded;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_use_camera_clip;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_show_background_image;
RNA_EXTERN_C BoolPropertyRNA rna_CameraBackgroundImage_show_on_foreground;
RNA_EXTERN_C EnumPropertyRNA rna_CameraBackgroundImage_display_depth;
RNA_EXTERN_C EnumPropertyRNA rna_CameraBackgroundImage_frame_method;


RNA_EXTERN_C CollectionPropertyRNA rna_CameraBackgroundImages_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CameraBackgroundImages_rna_type;

extern FunctionRNA rna_CameraBackgroundImages_new_func;
extern PointerPropertyRNA rna_CameraBackgroundImages_new_image;

extern FunctionRNA rna_CameraBackgroundImages_remove_func;
extern PointerPropertyRNA rna_CameraBackgroundImages_remove_image;

extern FunctionRNA rna_CameraBackgroundImages_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_CameraStereoData_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CameraStereoData_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_CameraStereoData_convergence_mode;
RNA_EXTERN_C EnumPropertyRNA rna_CameraStereoData_pivot;
RNA_EXTERN_C FloatPropertyRNA rna_CameraStereoData_interocular_distance;
RNA_EXTERN_C FloatPropertyRNA rna_CameraStereoData_convergence_distance;
RNA_EXTERN_C BoolPropertyRNA rna_CameraStereoData_use_spherical_stereo;
RNA_EXTERN_C BoolPropertyRNA rna_CameraStereoData_use_pole_merge;
RNA_EXTERN_C FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_from;
RNA_EXTERN_C FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_to;


RNA_EXTERN_C CollectionPropertyRNA rna_CameraDOFSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CameraDOFSettings_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_CameraDOFSettings_use_dof;
RNA_EXTERN_C PointerPropertyRNA rna_CameraDOFSettings_focus_object;
RNA_EXTERN_C StringPropertyRNA rna_CameraDOFSettings_focus_subtarget;
RNA_EXTERN_C FloatPropertyRNA rna_CameraDOFSettings_focus_distance;
RNA_EXTERN_C FloatPropertyRNA rna_CameraDOFSettings_aperture_fstop;
RNA_EXTERN_C IntPropertyRNA rna_CameraDOFSettings_aperture_blades;
RNA_EXTERN_C FloatPropertyRNA rna_CameraDOFSettings_aperture_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_CameraDOFSettings_aperture_ratio;

RNA_EXTERN_C int Camera_type_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void Camera_type_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C int Camera_sensor_fit_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->sensor_fit);
}

RNA_EXTERN_C void Camera_sensor_fit_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->sensor_fit = (std::remove_reference_t<decltype(data->sensor_fit)>)value;
#else
    data->sensor_fit = value;
#endif
}

RNA_EXTERN_C float Camera_passepartout_alpha_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->passepartalpha);
}

RNA_EXTERN_C void Camera_passepartout_alpha_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->passepartalpha = (std::remove_reference_t<decltype(data->passepartalpha)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->passepartalpha = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Camera_angle_x_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Camera_angle_x_get;
    return fn(ptr);
}

RNA_EXTERN_C void Camera_angle_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Camera_angle_x_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Camera_angle_y_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Camera_angle_y_get;
    return fn(ptr);
}

RNA_EXTERN_C void Camera_angle_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Camera_angle_y_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Camera_angle_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Camera_angle_get;
    return fn(ptr);
}

RNA_EXTERN_C void Camera_angle_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Camera_angle_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Camera_clip_start_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->clip_start);
}

RNA_EXTERN_C void Camera_clip_start_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->clip_start = (std::remove_reference_t<decltype(data->clip_start)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clip_start = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Camera_clip_end_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->clip_end);
}

RNA_EXTERN_C void Camera_clip_end_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->clip_end = (std::remove_reference_t<decltype(data->clip_end)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clip_end = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Camera_lens_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->lens);
}

RNA_EXTERN_C void Camera_lens_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->lens = (std::remove_reference_t<decltype(data->lens)>)CLAMPIS(value, 1.0f, FLT_MAX);
#else
    data->lens = CLAMPIS(value, 1.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Camera_sensor_width_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->sensor_x);
}

RNA_EXTERN_C void Camera_sensor_width_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->sensor_x = (std::remove_reference_t<decltype(data->sensor_x)>)CLAMPIS(value, 1.0f, FLT_MAX);
#else
    data->sensor_x = CLAMPIS(value, 1.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Camera_sensor_height_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->sensor_y);
}

RNA_EXTERN_C void Camera_sensor_height_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->sensor_y = (std::remove_reference_t<decltype(data->sensor_y)>)CLAMPIS(value, 1.0f, FLT_MAX);
#else
    data->sensor_y = CLAMPIS(value, 1.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Camera_ortho_scale_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->ortho_scale);
}

RNA_EXTERN_C void Camera_ortho_scale_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->ortho_scale = (std::remove_reference_t<decltype(data->ortho_scale)>)CLAMPIS(value, 0.0000000000f, FLT_MAX);
#else
    data->ortho_scale = CLAMPIS(value, 0.0000000000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Camera_display_size_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->drawsize);
}

RNA_EXTERN_C void Camera_display_size_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->drawsize = (std::remove_reference_t<decltype(data->drawsize)>)CLAMPIS(value, 0.0099999998f, 1000.0f);
#else
    data->drawsize = CLAMPIS(value, 0.0099999998f, 1000.0f);
#endif
}

RNA_EXTERN_C float Camera_shift_x_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->shiftx);
}

RNA_EXTERN_C void Camera_shift_x_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->shiftx = (std::remove_reference_t<decltype(data->shiftx)>)value;
#else
    data->shiftx = value;
#endif
}

RNA_EXTERN_C float Camera_shift_y_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->shifty);
}

RNA_EXTERN_C void Camera_shift_y_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->shifty = (std::remove_reference_t<decltype(data->shifty)>)value;
#else
    data->shifty = value;
#endif
}

RNA_EXTERN_C PointerRNA Camera_stereo_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CameraStereoData, &data->stereo);
}

RNA_EXTERN_C bool Camera_show_limits_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Camera_show_limits_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool Camera_show_mist_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Camera_show_mist_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool Camera_show_passepartout_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void Camera_show_passepartout_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool Camera_show_safe_areas_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void Camera_show_safe_areas_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool Camera_show_safe_center_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void Camera_show_safe_center_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool Camera_show_name_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void Camera_show_name_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool Camera_show_sensor_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void Camera_show_sensor_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool Camera_show_background_images_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void Camera_show_background_images_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C int Camera_lens_unit_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((data->flag) & 32);
}

RNA_EXTERN_C void Camera_lens_unit_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->flag &= ~32;
    data->flag |= value;
}

RNA_EXTERN_C bool Camera_show_composition_center_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 1) != 0);
}

RNA_EXTERN_C void Camera_show_composition_center_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 1; }
    else { data->dtx &= ~1; }
}

RNA_EXTERN_C bool Camera_show_composition_center_diagonal_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 2) != 0);
}

RNA_EXTERN_C void Camera_show_composition_center_diagonal_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 2; }
    else { data->dtx &= ~2; }
}

RNA_EXTERN_C bool Camera_show_composition_thirds_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 4) != 0);
}

RNA_EXTERN_C void Camera_show_composition_thirds_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 4; }
    else { data->dtx &= ~4; }
}

RNA_EXTERN_C bool Camera_show_composition_golden_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 8) != 0);
}

RNA_EXTERN_C void Camera_show_composition_golden_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 8; }
    else { data->dtx &= ~8; }
}

RNA_EXTERN_C bool Camera_show_composition_golden_tria_a_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 16) != 0);
}

RNA_EXTERN_C void Camera_show_composition_golden_tria_a_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 16; }
    else { data->dtx &= ~16; }
}

RNA_EXTERN_C bool Camera_show_composition_golden_tria_b_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 32) != 0);
}

RNA_EXTERN_C void Camera_show_composition_golden_tria_b_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 32; }
    else { data->dtx &= ~32; }
}

RNA_EXTERN_C bool Camera_show_composition_harmony_tri_a_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 64) != 0);
}

RNA_EXTERN_C void Camera_show_composition_harmony_tri_a_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 64; }
    else { data->dtx &= ~64; }
}

RNA_EXTERN_C bool Camera_show_composition_harmony_tri_b_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 128) != 0);
}

RNA_EXTERN_C void Camera_show_composition_harmony_tri_b_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 128; }
    else { data->dtx &= ~128; }
}

RNA_EXTERN_C int Camera_panorama_type_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->panorama_type);
}

RNA_EXTERN_C void Camera_panorama_type_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->panorama_type = (std::remove_reference_t<decltype(data->panorama_type)>)value;
#else
    data->panorama_type = value;
#endif
}

RNA_EXTERN_C float Camera_fisheye_fov_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_fov);
}

RNA_EXTERN_C void Camera_fisheye_fov_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_fov = (std::remove_reference_t<decltype(data->fisheye_fov)>)CLAMPIS(value, 0.1745000035f, 31.4159259796f);
#else
    data->fisheye_fov = CLAMPIS(value, 0.1745000035f, 31.4159259796f);
#endif
}

RNA_EXTERN_C float Camera_fisheye_lens_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_lens);
}

RNA_EXTERN_C void Camera_fisheye_lens_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_lens = (std::remove_reference_t<decltype(data->fisheye_lens)>)CLAMPIS(value, 0.0099999998f, 100.0f);
#else
    data->fisheye_lens = CLAMPIS(value, 0.0099999998f, 100.0f);
#endif
}

RNA_EXTERN_C float Camera_latitude_min_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->latitude_min);
}

RNA_EXTERN_C void Camera_latitude_min_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->latitude_min = (std::remove_reference_t<decltype(data->latitude_min)>)CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#else
    data->latitude_min = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#endif
}

RNA_EXTERN_C float Camera_latitude_max_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->latitude_max);
}

RNA_EXTERN_C void Camera_latitude_max_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->latitude_max = (std::remove_reference_t<decltype(data->latitude_max)>)CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#else
    data->latitude_max = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#endif
}

RNA_EXTERN_C float Camera_longitude_min_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->longitude_min);
}

RNA_EXTERN_C void Camera_longitude_min_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->longitude_min = (std::remove_reference_t<decltype(data->longitude_min)>)value;
#else
    data->longitude_min = value;
#endif
}

RNA_EXTERN_C float Camera_longitude_max_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->longitude_max);
}

RNA_EXTERN_C void Camera_longitude_max_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->longitude_max = (std::remove_reference_t<decltype(data->longitude_max)>)value;
#else
    data->longitude_max = value;
#endif
}

RNA_EXTERN_C float Camera_fisheye_polynomial_k0_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k0);
}

RNA_EXTERN_C void Camera_fisheye_polynomial_k0_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_polynomial_k0 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k0)>)value;
#else
    data->fisheye_polynomial_k0 = value;
#endif
}

RNA_EXTERN_C float Camera_fisheye_polynomial_k1_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k1);
}

RNA_EXTERN_C void Camera_fisheye_polynomial_k1_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_polynomial_k1 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k1)>)value;
#else
    data->fisheye_polynomial_k1 = value;
#endif
}

RNA_EXTERN_C float Camera_fisheye_polynomial_k2_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k2);
}

RNA_EXTERN_C void Camera_fisheye_polynomial_k2_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_polynomial_k2 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k2)>)value;
#else
    data->fisheye_polynomial_k2 = value;
#endif
}

RNA_EXTERN_C float Camera_fisheye_polynomial_k3_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k3);
}

RNA_EXTERN_C void Camera_fisheye_polynomial_k3_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_polynomial_k3 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k3)>)value;
#else
    data->fisheye_polynomial_k3 = value;
#endif
}

RNA_EXTERN_C float Camera_fisheye_polynomial_k4_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->fisheye_polynomial_k4);
}

RNA_EXTERN_C void Camera_fisheye_polynomial_k4_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
#ifdef __cplusplus
    data->fisheye_polynomial_k4 = (std::remove_reference_t<decltype(data->fisheye_polynomial_k4)>)value;
#else
    data->fisheye_polynomial_k4 = value;
#endif
}

RNA_EXTERN_C PointerRNA Camera_dof_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CameraDOFSettings, &data->dof);
}

static PointerRNA Camera_background_images_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CameraBackgroundImage, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Camera_background_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Camera_background_images;

    rna_iterator_listbase_begin(iter, &data->bg_images, nullptr);

    if (iter->valid) {
        iter->ptr = Camera_background_images_get(iter);
    }
}

RNA_EXTERN_C void Camera_background_images_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Camera_background_images_get(iter);
    }
}

RNA_EXTERN_C void Camera_background_images_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Camera_background_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Camera_background_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = Camera_background_images_get(&iter); }
    }

    Camera_background_images_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Camera_animation_data_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA CameraBackgroundImage_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CameraBackgroundImage_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraBackgroundImage_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImage_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraBackgroundImage_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImage_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraBackgroundImage_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CameraBackgroundImage_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CameraBackgroundImage_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool CameraBackgroundImage_is_override_data_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return !(((data->flag) & 512) != 0);
}

RNA_EXTERN_C int CameraBackgroundImage_source_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (int)(data->source);
}

RNA_EXTERN_C void CameraBackgroundImage_source_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
#ifdef __cplusplus
    data->source = (std::remove_reference_t<decltype(data->source)>)value;
#else
    data->source = value;
#endif
}

RNA_EXTERN_C PointerRNA CameraBackgroundImage_image_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

RNA_EXTERN_C void CameraBackgroundImage_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);

    if (data->ima) {
        id_us_min((ID *)data->ima);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->ima = value.data;
}

RNA_EXTERN_C PointerRNA CameraBackgroundImage_clip_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

RNA_EXTERN_C void CameraBackgroundImage_clip_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);

    if (data->clip) {
        id_us_min((ID *)data->clip);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->clip = value.data;
}

RNA_EXTERN_C PointerRNA CameraBackgroundImage_image_user_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

RNA_EXTERN_C PointerRNA CameraBackgroundImage_clip_user_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieClipUser, &data->cuser);
}

RNA_EXTERN_C void CameraBackgroundImage_offset_get(PointerRNA *ptr, float values[2])
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

RNA_EXTERN_C void CameraBackgroundImage_offset_set(PointerRNA *ptr, const float values[2])
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

RNA_EXTERN_C float CameraBackgroundImage_scale_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->scale);
}

RNA_EXTERN_C void CameraBackgroundImage_scale_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
#ifdef __cplusplus
    data->scale = (std::remove_reference_t<decltype(data->scale)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->scale = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float CameraBackgroundImage_rotation_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->rotation);
}

RNA_EXTERN_C void CameraBackgroundImage_rotation_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
#ifdef __cplusplus
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
#else
    data->rotation = value;
#endif
}

RNA_EXTERN_C bool CameraBackgroundImage_use_flip_x_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void CameraBackgroundImage_use_flip_x_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool CameraBackgroundImage_use_flip_y_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void CameraBackgroundImage_use_flip_y_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C float CameraBackgroundImage_alpha_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->alpha);
}

RNA_EXTERN_C void CameraBackgroundImage_alpha_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
#ifdef __cplusplus
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->alpha = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool CameraBackgroundImage_show_expanded_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void CameraBackgroundImage_show_expanded_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool CameraBackgroundImage_use_camera_clip_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void CameraBackgroundImage_use_camera_clip_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool CameraBackgroundImage_show_background_image_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return !(((data->flag) & 8) != 0);
}

RNA_EXTERN_C void CameraBackgroundImage_show_background_image_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (!value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool CameraBackgroundImage_show_on_foreground_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void CameraBackgroundImage_show_on_foreground_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C int CameraBackgroundImage_display_depth_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((data->flag) & 16);
}

RNA_EXTERN_C void CameraBackgroundImage_display_depth_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->flag &= ~16;
    data->flag |= value;
}

RNA_EXTERN_C int CameraBackgroundImage_frame_method_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((data->flag) & 96);
}

RNA_EXTERN_C void CameraBackgroundImage_frame_method_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->flag &= ~96;
    data->flag |= value;
}

static PointerRNA CameraBackgroundImages_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CameraBackgroundImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraBackgroundImages_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImages_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraBackgroundImages_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImages_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraBackgroundImages_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CameraBackgroundImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CameraBackgroundImages_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CameraStereoData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CameraStereoData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraStereoData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraStereoData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraStereoData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraStereoData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraStereoData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CameraStereoData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CameraStereoData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int CameraStereoData_convergence_mode_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (int)(data->convergence_mode);
}

RNA_EXTERN_C void CameraStereoData_convergence_mode_set(PointerRNA *ptr, int value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
#ifdef __cplusplus
    data->convergence_mode = (std::remove_reference_t<decltype(data->convergence_mode)>)value;
#else
    data->convergence_mode = value;
#endif
}

RNA_EXTERN_C int CameraStereoData_pivot_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (int)(data->pivot);
}

RNA_EXTERN_C void CameraStereoData_pivot_set(PointerRNA *ptr, int value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
#ifdef __cplusplus
    data->pivot = (std::remove_reference_t<decltype(data->pivot)>)value;
#else
    data->pivot = value;
#endif
}

RNA_EXTERN_C float CameraStereoData_interocular_distance_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->interocular_distance);
}

RNA_EXTERN_C void CameraStereoData_interocular_distance_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
#ifdef __cplusplus
    data->interocular_distance = (std::remove_reference_t<decltype(data->interocular_distance)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->interocular_distance = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float CameraStereoData_convergence_distance_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->convergence_distance);
}

RNA_EXTERN_C void CameraStereoData_convergence_distance_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
#ifdef __cplusplus
    data->convergence_distance = (std::remove_reference_t<decltype(data->convergence_distance)>)CLAMPIS(value, 0.0000100000f, FLT_MAX);
#else
    data->convergence_distance = CLAMPIS(value, 0.0000100000f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool CameraStereoData_use_spherical_stereo_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CameraStereoData_use_spherical_stereo_set(PointerRNA *ptr, bool value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool CameraStereoData_use_pole_merge_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void CameraStereoData_use_pole_merge_set(PointerRNA *ptr, bool value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C float CameraStereoData_pole_merge_angle_from_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->pole_merge_angle_from);
}

RNA_EXTERN_C void CameraStereoData_pole_merge_angle_from_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
#ifdef __cplusplus
    data->pole_merge_angle_from = (std::remove_reference_t<decltype(data->pole_merge_angle_from)>)CLAMPIS(value, 0.0f, 1.5707963705f);
#else
    data->pole_merge_angle_from = CLAMPIS(value, 0.0f, 1.5707963705f);
#endif
}

RNA_EXTERN_C float CameraStereoData_pole_merge_angle_to_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->pole_merge_angle_to);
}

RNA_EXTERN_C void CameraStereoData_pole_merge_angle_to_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
#ifdef __cplusplus
    data->pole_merge_angle_to = (std::remove_reference_t<decltype(data->pole_merge_angle_to)>)CLAMPIS(value, 0.0f, 1.5707963705f);
#else
    data->pole_merge_angle_to = CLAMPIS(value, 0.0f, 1.5707963705f);
#endif
}

static PointerRNA CameraDOFSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CameraDOFSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraDOFSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraDOFSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraDOFSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraDOFSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CameraDOFSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CameraDOFSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CameraDOFSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool CameraDOFSettings_use_dof_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CameraDOFSettings_use_dof_set(PointerRNA *ptr, bool value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C PointerRNA CameraDOFSettings_focus_object_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->focus_object);
}

RNA_EXTERN_C void CameraDOFSettings_focus_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->focus_object = value.data;
}

RNA_EXTERN_C void CameraDOFSettings_focus_subtarget_get(PointerRNA *ptr, char *value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    BLI_assert(strlen(data->focus_subtarget) < 64);
    strcpy(value, data->focus_subtarget);
}

RNA_EXTERN_C int CameraDOFSettings_focus_subtarget_length(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return strlen(data->focus_subtarget);
}

RNA_EXTERN_C void CameraDOFSettings_focus_subtarget_set(PointerRNA *ptr, const char *value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    BLI_strncpy_utf8(data->focus_subtarget, value, 64);
}

RNA_EXTERN_C float CameraDOFSettings_focus_distance_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->focus_distance);
}

RNA_EXTERN_C void CameraDOFSettings_focus_distance_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
#ifdef __cplusplus
    data->focus_distance = (std::remove_reference_t<decltype(data->focus_distance)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->focus_distance = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float CameraDOFSettings_aperture_fstop_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_fstop);
}

RNA_EXTERN_C void CameraDOFSettings_aperture_fstop_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
#ifdef __cplusplus
    data->aperture_fstop = (std::remove_reference_t<decltype(data->aperture_fstop)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->aperture_fstop = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int CameraDOFSettings_aperture_blades_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (int)(data->aperture_blades);
}

RNA_EXTERN_C void CameraDOFSettings_aperture_blades_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_CameraDOFSettings_aperture_blades_set;
    fn(ptr, value);
}

RNA_EXTERN_C float CameraDOFSettings_aperture_rotation_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_rotation);
}

RNA_EXTERN_C void CameraDOFSettings_aperture_rotation_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
#ifdef __cplusplus
    data->aperture_rotation = (std::remove_reference_t<decltype(data->aperture_rotation)>)CLAMPIS(value, -3.1415927410f, 3.1415927410f);
#else
    data->aperture_rotation = CLAMPIS(value, -3.1415927410f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float CameraDOFSettings_aperture_ratio_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_ratio);
}

RNA_EXTERN_C void CameraDOFSettings_aperture_ratio_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
#ifdef __cplusplus
    data->aperture_ratio = (std::remove_reference_t<decltype(data->aperture_ratio)>)CLAMPIS(value, 0.0099999998f, FLT_MAX);
#else
    data->aperture_ratio = CLAMPIS(value, 0.0099999998f, FLT_MAX);
#endif
}

RNA_EXTERN_C void Camera_view_frame_func(struct Camera *_self, struct Scene *scene, float result_1[3], float result_2[3], float result_3[3], float result_4[3])
{
	rna_camera_view_frame(_self, scene, result_1, result_2, result_3, result_4);
}

static void Camera_view_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	struct Scene *scene;
	float *result_1;
	float *result_2;
	float *result_3;
	float *result_4;
	char *_data;
	
	_self = (struct Camera *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	result_1 = ((float *)_data);
	_data += 16;
	result_2 = ((float *)_data);
	_data += 16;
	result_3 = ((float *)_data);
	_data += 16;
	result_4 = ((float *)_data);
	
	rna_camera_view_frame(_self, scene, result_1, result_2, result_3, result_4);
}

/* Repeated prototypes to detect errors */

void rna_camera_view_frame(struct Camera *_self, struct Scene *scene, float result_1[3], float result_2[3], float result_3[3], float result_4[3]);


RNA_EXTERN_C struct CameraBGImage *CameraBackgroundImages_new_func(struct Camera *_self)
{
	return rna_Camera_background_images_new(_self);
}

static void CameraBackgroundImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	struct CameraBGImage *image;
	char *_data, *_retdata;
	
	_self = (struct Camera *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	image = rna_Camera_background_images_new(_self);
	*((struct CameraBGImage **)_retdata) = image;
}

RNA_EXTERN_C void CameraBackgroundImages_remove_func(struct Camera *_self, ReportList *reports, struct PointerRNA *image)
{
	rna_Camera_background_images_remove(_self, reports, image);
}

static void CameraBackgroundImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	struct PointerRNA *image;
	char *_data;
	
	_self = (struct Camera *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct PointerRNA **)_data);
	
	rna_Camera_background_images_remove(_self, reports, image);
}

RNA_EXTERN_C void CameraBackgroundImages_clear_func(struct Camera *_self)
{
	rna_Camera_background_images_clear(_self);
}

static void CameraBackgroundImages_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	_self = (struct Camera *)_ptr->data;
	
	rna_Camera_background_images_clear(_self);
}

/* Repeated prototypes to detect errors */

struct CameraBGImage *rna_Camera_background_images_new(struct Camera *_self);
void rna_Camera_background_images_remove(struct Camera *_self, ReportList *reports, struct PointerRNA *image);
void rna_Camera_background_images_clear(struct Camera *_self);



/* Camera */
static const EnumPropertyItem rna_Camera_type_items[4] = {
	{0, "PERSP", 0, "Perspective", ""},
	{1, "ORTHO", 0, "Orthographic", ""},
	{2, "PANO", 0, "Panoramic", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Camera_type = {
	{(PropertyRNA *)&rna_Camera_sensor_fit, nullptr,
	-1, "type", 3, 1, 0, 4, 0, "Type",
	"Camera types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, type), (RawPropertyType)2, nullptr},
	Camera_type_get, Camera_type_set, nullptr, nullptr, nullptr, rna_Camera_type_items, 3, 0
};

static const EnumPropertyItem rna_Camera_sensor_fit_items[4] = {
	{0, "AUTO", 0, "Auto", "Fit to the sensor width or height depending on image resolution"},
	{1, "HORIZONTAL", 0, "Horizontal", "Fit to the sensor width"},
	{2, "VERTICAL", 0, "Vertical", "Fit to the sensor height"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Camera_sensor_fit = {
	{(PropertyRNA *)&rna_Camera_passepartout_alpha, (PropertyRNA *)&rna_Camera_type,
	-1, "sensor_fit", 3, 1, 0, 4, 0, "Sensor Fit",
	"Method to fit image and field of view angle inside the sensor",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, sensor_fit), (RawPropertyType)2, nullptr},
	Camera_sensor_fit_get, Camera_sensor_fit_set, nullptr, nullptr, nullptr, rna_Camera_sensor_fit_items, 3, 0
};

FloatPropertyRNA rna_Camera_passepartout_alpha = {
	{(PropertyRNA *)&rna_Camera_angle_x, (PropertyRNA *)&rna_Camera_sensor_fit,
	-1, "passepartout_alpha", 3, 1, 0, 4, 0, "Passepartout Alpha",
	"Opacity (alpha) of the darkened overlay in Camera view",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, passepartalpha), (RawPropertyType)5, nullptr},
	Camera_passepartout_alpha_get, Camera_passepartout_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Camera_angle_x = {
	{(PropertyRNA *)&rna_Camera_angle_y, (PropertyRNA *)&rna_Camera_passepartout_alpha,
	-1, "angle_x", 1, 1, 0, 0, 0, "Horizontal FOV",
	"Camera lens horizontal field of view",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_angle_x_get, Camera_angle_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Camera_angle_y = {
	{(PropertyRNA *)&rna_Camera_angle, (PropertyRNA *)&rna_Camera_angle_x,
	-1, "angle_y", 1, 1, 0, 0, 0, "Vertical FOV",
	"Camera lens vertical field of view",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_angle_y_get, Camera_angle_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Camera_angle = {
	{(PropertyRNA *)&rna_Camera_clip_start, (PropertyRNA *)&rna_Camera_angle_y,
	-1, "angle", 1, 1, 0, 0, 0, "Field of View",
	"Camera lens field of view",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_angle_get, Camera_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Camera_clip_start = {
	{(PropertyRNA *)&rna_Camera_clip_end, (PropertyRNA *)&rna_Camera_angle,
	-1, "clip_start", 3, 1, 0, 4, 0, "Clip Start",
	"Camera near clipping distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, clip_start), (RawPropertyType)5, nullptr},
	Camera_clip_start_get, Camera_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_Camera_clip_end = {
	{(PropertyRNA *)&rna_Camera_lens, (PropertyRNA *)&rna_Camera_clip_start,
	-1, "clip_end", 3, 1, 0, 4, 0, "Clip End",
	"Camera far clipping distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, clip_end), (RawPropertyType)5, nullptr},
	Camera_clip_end_get, Camera_clip_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 1000.0f, nullptr
};

FloatPropertyRNA rna_Camera_lens = {
	{(PropertyRNA *)&rna_Camera_sensor_width, (PropertyRNA *)&rna_Camera_clip_end,
	-1, "lens", 3, 1, 0, 4, 0, "Focal Length",
	"Perspective Camera focal length value in millimeters",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE_CAMERA | (int)PROP_UNIT_CAMERA), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, lens), (RawPropertyType)5, nullptr},
	Camera_lens_get, Camera_lens_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5000.0f, 1.0f, FLT_MAX, 100.0f, 4, 50.0f, nullptr
};

FloatPropertyRNA rna_Camera_sensor_width = {
	{(PropertyRNA *)&rna_Camera_sensor_height, (PropertyRNA *)&rna_Camera_lens,
	-1, "sensor_width", 3, 1, 0, 4, 0, "Sensor Width",
	"Horizontal size of the image sensor area in millimeters",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE_CAMERA | (int)PROP_UNIT_CAMERA), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, sensor_x), (RawPropertyType)5, nullptr},
	Camera_sensor_width_get, Camera_sensor_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, FLT_MAX, 100.0f, 4, 36.0f, nullptr
};

FloatPropertyRNA rna_Camera_sensor_height = {
	{(PropertyRNA *)&rna_Camera_ortho_scale, (PropertyRNA *)&rna_Camera_sensor_width,
	-1, "sensor_height", 3, 1, 0, 4, 0, "Sensor Height",
	"Vertical size of the image sensor area in millimeters",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE_CAMERA | (int)PROP_UNIT_CAMERA), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, sensor_y), (RawPropertyType)5, nullptr},
	Camera_sensor_height_get, Camera_sensor_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, FLT_MAX, 100.0f, 4, 24.0f, nullptr
};

FloatPropertyRNA rna_Camera_ortho_scale = {
	{(PropertyRNA *)&rna_Camera_display_size, (PropertyRNA *)&rna_Camera_sensor_height,
	-1, "ortho_scale", 3, 1, 0, 4, 0, "Orthographic Scale",
	"Orthographic Camera scale (similar to zoom)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, ortho_scale), (RawPropertyType)5, nullptr},
	Camera_ortho_scale_get, Camera_ortho_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10000.0f, 0.0000000000f, FLT_MAX, 10.0f, 3, 6.0f, nullptr
};

FloatPropertyRNA rna_Camera_display_size = {
	{(PropertyRNA *)&rna_Camera_shift_x, (PropertyRNA *)&rna_Camera_ortho_scale,
	-1, "display_size", 3, 1, 0, 4, 0, "Display Size",
	"Apparent size of the Camera object in the 3D View",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, drawsize), (RawPropertyType)5, nullptr},
	Camera_display_size_get, Camera_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 1000.0f, 1.0f, 2, 1.0f, nullptr
};

FloatPropertyRNA rna_Camera_shift_x = {
	{(PropertyRNA *)&rna_Camera_shift_y, (PropertyRNA *)&rna_Camera_display_size,
	-1, "shift_x", 3, 1, 0, 4, 0, "Shift X",
	"Camera horizontal shift",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, shiftx), (RawPropertyType)5, nullptr},
	Camera_shift_x_get, Camera_shift_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Camera_shift_y = {
	{(PropertyRNA *)&rna_Camera_stereo, (PropertyRNA *)&rna_Camera_shift_x,
	-1, "shift_y", 3, 1, 0, 4, 0, "Shift Y",
	"Camera vertical shift",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, shifty), (RawPropertyType)5, nullptr},
	Camera_shift_y_get, Camera_shift_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_Camera_stereo = {
	{(PropertyRNA *)&rna_Camera_show_limits, (PropertyRNA *)&rna_Camera_shift_y,
	-1, "stereo", 8650752, 1, 0, 0, 0, "Stereo",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_stereo_get, nullptr, nullptr, nullptr,&RNA_CameraStereoData
};

BoolPropertyRNA rna_Camera_show_limits = {
	{(PropertyRNA *)&rna_Camera_show_mist, (PropertyRNA *)&rna_Camera_stereo,
	-1, "show_limits", 3, 1, 0, 0, 0, "Show Limits",
	"Display the clipping range and focus point on the camera",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_limits_get, Camera_show_limits_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_mist = {
	{(PropertyRNA *)&rna_Camera_show_passepartout, (PropertyRNA *)&rna_Camera_show_limits,
	-1, "show_mist", 3, 1, 0, 0, 0, "Show Mist",
	"Display a line from the Camera to indicate the mist area",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_mist_get, Camera_show_mist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_passepartout = {
	{(PropertyRNA *)&rna_Camera_show_safe_areas, (PropertyRNA *)&rna_Camera_show_mist,
	-1, "show_passepartout", 3, 1, 0, 0, 0, "Show Passepartout",
	"Show a darkened overlay outside the image area in Camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_passepartout_get, Camera_show_passepartout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Camera_show_safe_areas = {
	{(PropertyRNA *)&rna_Camera_show_safe_center, (PropertyRNA *)&rna_Camera_show_passepartout,
	-1, "show_safe_areas", 3, 1, 0, 0, 0, "Show Safe Areas",
	"Show TV title safe and action safe areas in Camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_safe_areas_get, Camera_show_safe_areas_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_safe_center = {
	{(PropertyRNA *)&rna_Camera_show_name, (PropertyRNA *)&rna_Camera_show_safe_areas,
	-1, "show_safe_center", 3, 1, 0, 0, 0, "Show Center-Cut Safe Areas",
	"Show safe areas to fit content in a different aspect ratio",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_safe_center_get, Camera_show_safe_center_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_name = {
	{(PropertyRNA *)&rna_Camera_show_sensor, (PropertyRNA *)&rna_Camera_show_safe_center,
	-1, "show_name", 3, 1, 0, 0, 0, "Show Name",
	"Show the active Camera\'s name in Camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_name_get, Camera_show_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_sensor = {
	{(PropertyRNA *)&rna_Camera_show_background_images, (PropertyRNA *)&rna_Camera_show_name,
	-1, "show_sensor", 3, 1, 0, 0, 0, "Show Sensor Size",
	"Show sensor size (film gate) in Camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_sensor_get, Camera_show_sensor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_background_images = {
	{(PropertyRNA *)&rna_Camera_lens_unit, (PropertyRNA *)&rna_Camera_show_sensor,
	-1, "show_background_images", 3, 1, 0, 0, 0, "Display Background Images",
	"Display reference images behind objects in the 3D View",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_background_images_get, Camera_show_background_images_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Camera_lens_unit_items[3] = {
	{0, "MILLIMETERS", 0, "Millimeters", "Specify focal length of the lens in millimeters"},
	{32, "FOV", 0, "Field of View", "Specify the lens as the field of view\'s angle"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Camera_lens_unit = {
	{(PropertyRNA *)&rna_Camera_show_composition_center, (PropertyRNA *)&rna_Camera_show_background_images,
	-1, "lens_unit", 3, 1, 0, 4, 0, "Lens Unit",
	"Unit to edit lens in for the user interface",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, flag), (RawPropertyType)1, nullptr},
	Camera_lens_unit_get, Camera_lens_unit_set, nullptr, nullptr, nullptr, rna_Camera_lens_unit_items, 2, 0
};

BoolPropertyRNA rna_Camera_show_composition_center = {
	{(PropertyRNA *)&rna_Camera_show_composition_center_diagonal, (PropertyRNA *)&rna_Camera_lens_unit,
	-1, "show_composition_center", 3, 1, 0, 0, 0, "Center",
	"Display center composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_center_get, Camera_show_composition_center_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_center_diagonal = {
	{(PropertyRNA *)&rna_Camera_show_composition_thirds, (PropertyRNA *)&rna_Camera_show_composition_center,
	-1, "show_composition_center_diagonal", 3, 1, 0, 0, 0, "Center Diagonal",
	"Display diagonal center composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_center_diagonal_get, Camera_show_composition_center_diagonal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_thirds = {
	{(PropertyRNA *)&rna_Camera_show_composition_golden, (PropertyRNA *)&rna_Camera_show_composition_center_diagonal,
	-1, "show_composition_thirds", 3, 1, 0, 0, 0, "Thirds",
	"Display rule of thirds composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_thirds_get, Camera_show_composition_thirds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_golden = {
	{(PropertyRNA *)&rna_Camera_show_composition_golden_tria_a, (PropertyRNA *)&rna_Camera_show_composition_thirds,
	-1, "show_composition_golden", 3, 1, 0, 0, 0, "Golden Ratio",
	"Display golden ratio composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_golden_get, Camera_show_composition_golden_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_golden_tria_a = {
	{(PropertyRNA *)&rna_Camera_show_composition_golden_tria_b, (PropertyRNA *)&rna_Camera_show_composition_golden,
	-1, "show_composition_golden_tria_a", 3, 1, 0, 0, 0, "Golden Triangle A",
	"Display golden triangle A composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_golden_tria_a_get, Camera_show_composition_golden_tria_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_golden_tria_b = {
	{(PropertyRNA *)&rna_Camera_show_composition_harmony_tri_a, (PropertyRNA *)&rna_Camera_show_composition_golden_tria_a,
	-1, "show_composition_golden_tria_b", 3, 1, 0, 0, 0, "Golden Triangle B",
	"Display golden triangle B composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_golden_tria_b_get, Camera_show_composition_golden_tria_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_harmony_tri_a = {
	{(PropertyRNA *)&rna_Camera_show_composition_harmony_tri_b, (PropertyRNA *)&rna_Camera_show_composition_golden_tria_b,
	-1, "show_composition_harmony_tri_a", 3, 1, 0, 0, 0, "Harmonious Triangle A",
	"Display harmony A composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_harmony_tri_a_get, Camera_show_composition_harmony_tri_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Camera_show_composition_harmony_tri_b = {
	{(PropertyRNA *)&rna_Camera_panorama_type, (PropertyRNA *)&rna_Camera_show_composition_harmony_tri_a,
	-1, "show_composition_harmony_tri_b", 3, 1, 0, 0, 0, "Harmonious Triangle B",
	"Display harmony B composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_show_composition_harmony_tri_b_get, Camera_show_composition_harmony_tri_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Camera_panorama_type_items[7] = {
	{0, "EQUIRECTANGULAR", 0, "Equirectangular", "Spherical camera for environment maps, also known as Lat Long panorama"},
	{5, "EQUIANGULAR_CUBEMAP_FACE", 0, "Equiangular Cubemap Face", "Single face of an equiangular cubemap"},
	{3, "MIRRORBALL", 0, "Mirror Ball", "Mirror ball mapping for environment maps"},
	{1, "FISHEYE_EQUIDISTANT", 0, "Fisheye Equidistant", "Ideal for fulldomes, ignore the sensor dimensions"},
	{2, "FISHEYE_EQUISOLID", 0, "Fisheye Equisolid", "Similar to most fisheye modern lens, takes sensor dimensions into consideration"},
	{4, "FISHEYE_LENS_POLYNOMIAL", 0, "Fisheye Lens Polynomial", "Defines the lens projection as polynomial to allow real world camera lenses to be mimicked"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Camera_panorama_type = {
	{(PropertyRNA *)&rna_Camera_fisheye_fov, (PropertyRNA *)&rna_Camera_show_composition_harmony_tri_b,
	-1, "panorama_type", 3, 1, 0, 4, 0, "Panorama Type",
	"Distortion to use for the calculation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, panorama_type), (RawPropertyType)2, nullptr},
	Camera_panorama_type_get, Camera_panorama_type_set, nullptr, nullptr, nullptr, rna_Camera_panorama_type_items, 6, 2
};

FloatPropertyRNA rna_Camera_fisheye_fov = {
	{(PropertyRNA *)&rna_Camera_fisheye_lens, (PropertyRNA *)&rna_Camera_panorama_type,
	-1, "fisheye_fov", 3, 1, 0, 4, 0, "Field of View",
	"Field of view for the fisheye lens",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_fov), (RawPropertyType)5, nullptr},
	Camera_fisheye_fov_get, Camera_fisheye_fov_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1745000035f, 6.2831854820f, 0.1745000035f, 31.4159259796f, 3.0f, 2, 3.1415927410f, nullptr
};

FloatPropertyRNA rna_Camera_fisheye_lens = {
	{(PropertyRNA *)&rna_Camera_latitude_min, (PropertyRNA *)&rna_Camera_fisheye_fov,
	-1, "fisheye_lens", 3, 1, 0, 4, 0, "Fisheye Lens",
	"Lens focal length (mm)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_lens), (RawPropertyType)5, nullptr},
	Camera_fisheye_lens_get, Camera_fisheye_lens_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 15.0f, 0.0099999998f, 100.0f, 3.0f, 2, 10.5000000000f, nullptr
};

FloatPropertyRNA rna_Camera_latitude_min = {
	{(PropertyRNA *)&rna_Camera_latitude_max, (PropertyRNA *)&rna_Camera_fisheye_lens,
	-1, "latitude_min", 3, 1, 0, 4, 0, "Min Latitude",
	"Minimum latitude (vertical angle) for the equirectangular lens",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, latitude_min), (RawPropertyType)5, nullptr},
	Camera_latitude_min_get, Camera_latitude_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 3.0f, 2, -1.5707963705f, nullptr
};

FloatPropertyRNA rna_Camera_latitude_max = {
	{(PropertyRNA *)&rna_Camera_longitude_min, (PropertyRNA *)&rna_Camera_latitude_min,
	-1, "latitude_max", 3, 1, 0, 4, 0, "Max Latitude",
	"Maximum latitude (vertical angle) for the equirectangular lens",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, latitude_max), (RawPropertyType)5, nullptr},
	Camera_latitude_max_get, Camera_latitude_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 3.0f, 2, 1.5707963705f, nullptr
};

FloatPropertyRNA rna_Camera_longitude_min = {
	{(PropertyRNA *)&rna_Camera_longitude_max, (PropertyRNA *)&rna_Camera_latitude_max,
	-1, "longitude_min", 3, 1, 0, 4, 0, "Min Longitude",
	"Minimum longitude (horizontal angle) for the equirectangular lens",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, longitude_min), (RawPropertyType)5, nullptr},
	Camera_longitude_min_get, Camera_longitude_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 3.0f, 2, -3.1415927410f, nullptr
};

FloatPropertyRNA rna_Camera_longitude_max = {
	{(PropertyRNA *)&rna_Camera_fisheye_polynomial_k0, (PropertyRNA *)&rna_Camera_longitude_min,
	-1, "longitude_max", 3, 1, 0, 4, 0, "Max Longitude",
	"Maximum longitude (horizontal angle) for the equirectangular lens",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, longitude_max), (RawPropertyType)5, nullptr},
	Camera_longitude_max_get, Camera_longitude_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 3.0f, 2, 3.1415927410f, nullptr
};

FloatPropertyRNA rna_Camera_fisheye_polynomial_k0 = {
	{(PropertyRNA *)&rna_Camera_fisheye_polynomial_k1, (PropertyRNA *)&rna_Camera_longitude_max,
	-1, "fisheye_polynomial_k0", 3, 1, 0, 4, 0, "Fisheye Polynomial K0",
	"Coefficient K0 of the lens polynomial",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_polynomial_k0), (RawPropertyType)5, nullptr},
	Camera_fisheye_polynomial_k0_get, Camera_fisheye_polynomial_k0_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, -0.0000117351f, nullptr
};

FloatPropertyRNA rna_Camera_fisheye_polynomial_k1 = {
	{(PropertyRNA *)&rna_Camera_fisheye_polynomial_k2, (PropertyRNA *)&rna_Camera_fisheye_polynomial_k0,
	-1, "fisheye_polynomial_k1", 3, 1, 0, 4, 0, "Fisheye Polynomial K1",
	"Coefficient K1 of the lens polynomial",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_polynomial_k1), (RawPropertyType)5, nullptr},
	Camera_fisheye_polynomial_k1_get, Camera_fisheye_polynomial_k1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, -0.0199887361f, nullptr
};

FloatPropertyRNA rna_Camera_fisheye_polynomial_k2 = {
	{(PropertyRNA *)&rna_Camera_fisheye_polynomial_k3, (PropertyRNA *)&rna_Camera_fisheye_polynomial_k1,
	-1, "fisheye_polynomial_k2", 3, 1, 0, 4, 0, "Fisheye Polynomial K2",
	"Coefficient K2 of the lens polynomial",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_polynomial_k2), (RawPropertyType)5, nullptr},
	Camera_fisheye_polynomial_k2_get, Camera_fisheye_polynomial_k2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, -0.0000033525f, nullptr
};

FloatPropertyRNA rna_Camera_fisheye_polynomial_k3 = {
	{(PropertyRNA *)&rna_Camera_fisheye_polynomial_k4, (PropertyRNA *)&rna_Camera_fisheye_polynomial_k2,
	-1, "fisheye_polynomial_k3", 3, 1, 0, 4, 0, "Fisheye Polynomial K3",
	"Coefficient K3 of the lens polynomial",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_polynomial_k3), (RawPropertyType)5, nullptr},
	Camera_fisheye_polynomial_k3_get, Camera_fisheye_polynomial_k3_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, 0.0000030993f, nullptr
};

FloatPropertyRNA rna_Camera_fisheye_polynomial_k4 = {
	{(PropertyRNA *)&rna_Camera_dof, (PropertyRNA *)&rna_Camera_fisheye_polynomial_k3,
	-1, "fisheye_polynomial_k4", 3, 1, 0, 4, 0, "Fisheye Polynomial K4",
	"Coefficient K4 of the lens polynomial",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, fisheye_polynomial_k4), (RawPropertyType)5, nullptr},
	Camera_fisheye_polynomial_k4_get, Camera_fisheye_polynomial_k4_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, -0.0000000261f, nullptr
};

PointerPropertyRNA rna_Camera_dof = {
	{(PropertyRNA *)&rna_Camera_background_images, (PropertyRNA *)&rna_Camera_fisheye_polynomial_k4,
	-1, "dof", 8388608, 1, 0, 0, 0, "Depth Of Field",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Camera_dof_get, nullptr, nullptr, nullptr,&RNA_CameraDOFSettings
};

CollectionPropertyRNA rna_Camera_background_images = {
	{(PropertyRNA *)&rna_Camera_animation_data, (PropertyRNA *)&rna_Camera_dof,
	-1, "background_images", 0, 3073, 0, 0, 0, "Background Images",
	"List of background images",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Camera_background_images_override_apply,
	0, PROP_RAW_UNSET, &RNA_CameraBackgroundImages},
	Camera_background_images_begin, Camera_background_images_next, Camera_background_images_end, Camera_background_images_get, nullptr, Camera_background_images_lookup_int, nullptr, nullptr, &RNA_CameraBackgroundImage
};

PointerPropertyRNA rna_Camera_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Camera_background_images,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Camera_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

PointerPropertyRNA rna_Camera_view_frame_scene = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_1, nullptr,
	-1, "scene", 8388736, 0, 0, 0, 0, "",
	"Scene to use for aspect calculation, when omitted 1:1 aspect is used",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

static float rna_Camera_view_frame_result_1_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_1 = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_2, (PropertyRNA *)&rna_Camera_view_frame_scene,
	-1, "result_1", 8388611, 0, 2, 0, 0, "Result",
	nullptr,
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_1_default
};

static float rna_Camera_view_frame_result_2_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_2 = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_3, (PropertyRNA *)&rna_Camera_view_frame_result_1,
	-1, "result_2", 8388611, 0, 2, 0, 0, "Result",
	nullptr,
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_2_default
};

static float rna_Camera_view_frame_result_3_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_3 = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_4, (PropertyRNA *)&rna_Camera_view_frame_result_2,
	-1, "result_3", 8388611, 0, 2, 0, 0, "Result",
	nullptr,
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_3_default
};

static float rna_Camera_view_frame_result_4_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_4 = {
	{nullptr, (PropertyRNA *)&rna_Camera_view_frame_result_3,
	-1, "result_4", 8388611, 0, 2, 0, 0, "Result",
	nullptr,
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_4_default
};

FunctionRNA rna_Camera_view_frame_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Camera_view_frame_scene, (PropertyRNA *)&rna_Camera_view_frame_result_4}},
	"view_frame", 0, "Return 4 points for the cameras frame (before object transformation)",
	Camera_view_frame_call,
	nullptr
};

StructRNA RNA_Camera = {
	{(ContainerRNA *)&RNA_CameraBackgroundImage, (ContainerRNA *)&RNA_CacheFileLayer,
	nullptr,
	{(PropertyRNA *)&rna_Camera_type, (PropertyRNA *)&rna_Camera_animation_data}},
	"Camera", nullptr, nullptr, 519, nullptr, "Camera",
	"Camera data-block for storing camera settings",
	"*", 168,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Camera_view_frame_func, (FunctionRNA *)&rna_Camera_view_frame_func}
};

/* Background Image */
CollectionPropertyRNA rna_CameraBackgroundImage_rna_properties = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_rna_properties_begin, CameraBackgroundImage_rna_properties_next, CameraBackgroundImage_rna_properties_end, CameraBackgroundImage_rna_properties_get, nullptr, nullptr, CameraBackgroundImage_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CameraBackgroundImage_rna_type = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_is_override_data, (PropertyRNA *)&rna_CameraBackgroundImage_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_CameraBackgroundImage_is_override_data = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_source, (PropertyRNA *)&rna_CameraBackgroundImage_rna_type,
	-1, "is_override_data", 2, 0, 0, 0, 0, "Override Background Image",
	"In a local override camera, whether this background image comes from the linked reference camera, or is local to the override",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_is_override_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_CameraBackgroundImage_source_items[3] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "MOVIE_CLIP", 0, "Movie Clip", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CameraBackgroundImage_source = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_image, (PropertyRNA *)&rna_CameraBackgroundImage_is_override_data,
	-1, "source", 3, 1, 0, 4, 0, "Background Source",
	"Data source used for background",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, source), (RawPropertyType)1, nullptr},
	CameraBackgroundImage_source_get, CameraBackgroundImage_source_set, nullptr, nullptr, nullptr, rna_CameraBackgroundImage_source_items, 2, 0
};

PointerPropertyRNA rna_CameraBackgroundImage_image = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_clip, (PropertyRNA *)&rna_CameraBackgroundImage_source,
	-1, "image", 8388801, 1, 0, 0, 0, "Image",
	"Image displayed and edited in this space",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_image_get, CameraBackgroundImage_image_set, nullptr, nullptr,&RNA_Image
};

PointerPropertyRNA rna_CameraBackgroundImage_clip = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_image_user, (PropertyRNA *)&rna_CameraBackgroundImage_image,
	-1, "clip", 8388801, 1, 0, 0, 0, "MovieClip",
	"Movie clip displayed and edited in this space",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_clip_get, CameraBackgroundImage_clip_set, nullptr, nullptr,&RNA_MovieClip
};

PointerPropertyRNA rna_CameraBackgroundImage_image_user = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_clip_user, (PropertyRNA *)&rna_CameraBackgroundImage_clip,
	-1, "image_user", 8650752, 1, 0, 0, 0, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_image_user_get, nullptr, nullptr, nullptr,&RNA_ImageUser
};

PointerPropertyRNA rna_CameraBackgroundImage_clip_user = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_offset, (PropertyRNA *)&rna_CameraBackgroundImage_image_user,
	-1, "clip_user", 8650752, 1, 0, 0, 0, "Clip User",
	"Parameters defining which frame of the movie clip is displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_clip_user_get, nullptr, nullptr, nullptr,&RNA_MovieClipUser
};

static float rna_CameraBackgroundImage_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CameraBackgroundImage_offset = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_scale, (PropertyRNA *)&rna_CameraBackgroundImage_clip_user,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, CameraBackgroundImage_offset_get, CameraBackgroundImage_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 5, 0.0f, rna_CameraBackgroundImage_offset_default
};

FloatPropertyRNA rna_CameraBackgroundImage_scale = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_rotation, (PropertyRNA *)&rna_CameraBackgroundImage_offset,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Scale the background image",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, scale), (RawPropertyType)5, nullptr},
	CameraBackgroundImage_scale_get, CameraBackgroundImage_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_CameraBackgroundImage_rotation = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_use_flip_x, (PropertyRNA *)&rna_CameraBackgroundImage_scale,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation for the background image (ortho view only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, rotation), (RawPropertyType)5, nullptr},
	CameraBackgroundImage_rotation_get, CameraBackgroundImage_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_CameraBackgroundImage_use_flip_x = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_use_flip_y, (PropertyRNA *)&rna_CameraBackgroundImage_rotation,
	-1, "use_flip_x", 3, 1, 0, 0, 0, "Flip Horizontally",
	"Flip the background image horizontally",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_use_flip_x_get, CameraBackgroundImage_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CameraBackgroundImage_use_flip_y = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_alpha, (PropertyRNA *)&rna_CameraBackgroundImage_use_flip_x,
	-1, "use_flip_y", 3, 1, 0, 0, 0, "Flip Vertically",
	"Flip the background image vertically",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_use_flip_y_get, CameraBackgroundImage_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_CameraBackgroundImage_alpha = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_show_expanded, (PropertyRNA *)&rna_CameraBackgroundImage_use_flip_y,
	-1, "alpha", 3, 1, 0, 4, 0, "Opacity",
	"Image opacity to blend the image against the background color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, alpha), (RawPropertyType)5, nullptr},
	CameraBackgroundImage_alpha_get, CameraBackgroundImage_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_CameraBackgroundImage_show_expanded = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_use_camera_clip, (PropertyRNA *)&rna_CameraBackgroundImage_alpha,
	-1, "show_expanded", 1073745923, 1, 0, 0, 0, "Show Expanded",
	"Show the details in the user interface",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_show_expanded_get, CameraBackgroundImage_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CameraBackgroundImage_use_camera_clip = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_show_background_image, (PropertyRNA *)&rna_CameraBackgroundImage_show_expanded,
	-1, "use_camera_clip", 3, 1, 0, 0, 0, "Camera Clip",
	"Use movie clip from active scene camera",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_use_camera_clip_get, CameraBackgroundImage_use_camera_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CameraBackgroundImage_show_background_image = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_show_on_foreground, (PropertyRNA *)&rna_CameraBackgroundImage_use_camera_clip,
	-1, "show_background_image", 3, 1, 0, 0, 0, "Show Background Image",
	"Show this image as background",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_show_background_image_get, CameraBackgroundImage_show_background_image_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CameraBackgroundImage_show_on_foreground = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_display_depth, (PropertyRNA *)&rna_CameraBackgroundImage_show_background_image,
	-1, "show_on_foreground", 3, 1, 0, 0, 0, "Show On Foreground",
	"Show this image in front of objects in viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImage_show_on_foreground_get, CameraBackgroundImage_show_on_foreground_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_CameraBackgroundImage_display_depth_items[3] = {
	{0, "BACK", 0, "Back", ""},
	{16, "FRONT", 0, "Front", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CameraBackgroundImage_display_depth = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_frame_method, (PropertyRNA *)&rna_CameraBackgroundImage_show_on_foreground,
	-1, "display_depth", 3, 1, 0, 4, 0, "Depth",
	"Display under or over everything",
	0, "Camera",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, flag), (RawPropertyType)1, nullptr},
	CameraBackgroundImage_display_depth_get, CameraBackgroundImage_display_depth_set, nullptr, nullptr, nullptr, rna_CameraBackgroundImage_display_depth_items, 2, 0
};

static const EnumPropertyItem rna_CameraBackgroundImage_frame_method_items[4] = {
	{0, "STRETCH", 0, "Stretch", ""},
	{32, "FIT", 0, "Fit", ""},
	{96, "CROP", 0, "Crop", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CameraBackgroundImage_frame_method = {
	{nullptr, (PropertyRNA *)&rna_CameraBackgroundImage_display_depth,
	-1, "frame_method", 3, 1, 0, 4, 0, "Frame Method",
	"How the image fits in the camera frame",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 421462016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, flag), (RawPropertyType)1, nullptr},
	CameraBackgroundImage_frame_method_get, CameraBackgroundImage_frame_method_set, nullptr, nullptr, nullptr, rna_CameraBackgroundImage_frame_method_items, 3, 0
};

StructRNA RNA_CameraBackgroundImage = {
	{(ContainerRNA *)&RNA_CameraBackgroundImages, (ContainerRNA *)&RNA_Camera,
	nullptr,
	{(PropertyRNA *)&rna_CameraBackgroundImage_rna_properties, (PropertyRNA *)&rna_CameraBackgroundImage_frame_method}},
	"CameraBackgroundImage", nullptr, nullptr, 516, nullptr, "Background Image",
	"Image and settings for display in the 3D View background",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CameraBackgroundImage_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_Camera_background_image_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Background Images */
CollectionPropertyRNA rna_CameraBackgroundImages_rna_properties = {
	{(PropertyRNA *)&rna_CameraBackgroundImages_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImages_rna_properties_begin, CameraBackgroundImages_rna_properties_next, CameraBackgroundImages_rna_properties_end, CameraBackgroundImages_rna_properties_get, nullptr, nullptr, CameraBackgroundImages_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CameraBackgroundImages_rna_type = {
	{nullptr, (PropertyRNA *)&rna_CameraBackgroundImages_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraBackgroundImages_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CameraBackgroundImages_new_image = {
	{nullptr, nullptr,
	-1, "image", 8388608, 0, 2, 0, 0, "",
	"Image displayed as viewport background",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CameraBackgroundImage
};

FunctionRNA rna_CameraBackgroundImages_new_func = {
	{(FunctionRNA *)&rna_CameraBackgroundImages_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CameraBackgroundImages_new_image, (PropertyRNA *)&rna_CameraBackgroundImages_new_image}},
	"new", 0, "Add new background image",
	CameraBackgroundImages_new_call,
	(PropertyRNA *)&rna_CameraBackgroundImages_new_image
};

PointerPropertyRNA rna_CameraBackgroundImages_remove_image = {
	{nullptr, nullptr,
	-1, "image", 262144, 0, 5, 0, 0, "",
	"Image displayed as viewport background",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CameraBackgroundImage
};

FunctionRNA rna_CameraBackgroundImages_remove_func = {
	{(FunctionRNA *)&rna_CameraBackgroundImages_clear_func, (FunctionRNA *)&rna_CameraBackgroundImages_new_func,
	nullptr,
	{(PropertyRNA *)&rna_CameraBackgroundImages_remove_image, (PropertyRNA *)&rna_CameraBackgroundImages_remove_image}},
	"remove", 16, "Remove background image",
	CameraBackgroundImages_remove_call,
	nullptr
};

FunctionRNA rna_CameraBackgroundImages_clear_func = {
	{nullptr, (FunctionRNA *)&rna_CameraBackgroundImages_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all background images",
	CameraBackgroundImages_clear_call,
	nullptr
};

StructRNA RNA_CameraBackgroundImages = {
	{(ContainerRNA *)&RNA_CameraStereoData, (ContainerRNA *)&RNA_CameraBackgroundImage,
	nullptr,
	{(PropertyRNA *)&rna_CameraBackgroundImages_rna_properties, (PropertyRNA *)&rna_CameraBackgroundImages_rna_type}},
	"CameraBackgroundImages", nullptr, nullptr, 516, nullptr, "Background Images",
	"Collection of background images",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CameraBackgroundImages_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CameraBackgroundImages_new_func, (FunctionRNA *)&rna_CameraBackgroundImages_clear_func}
};

/* Stereo */
CollectionPropertyRNA rna_CameraStereoData_rna_properties = {
	{(PropertyRNA *)&rna_CameraStereoData_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraStereoData_rna_properties_begin, CameraStereoData_rna_properties_next, CameraStereoData_rna_properties_end, CameraStereoData_rna_properties_get, nullptr, nullptr, CameraStereoData_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CameraStereoData_rna_type = {
	{(PropertyRNA *)&rna_CameraStereoData_convergence_mode, (PropertyRNA *)&rna_CameraStereoData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraStereoData_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_CameraStereoData_convergence_mode_items[4] = {
	{0, "OFFAXIS", 0, "Off-Axis", "Off-axis frustums converging in a plane"},
	{1, "PARALLEL", 0, "Parallel", "Parallel cameras with no convergence"},
	{2, "TOE", 0, "Toe-in", "Rotated cameras, looking at the convergence distance"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CameraStereoData_convergence_mode = {
	{(PropertyRNA *)&rna_CameraStereoData_pivot, (PropertyRNA *)&rna_CameraStereoData_rna_type,
	-1, "convergence_mode", 3, 1, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, convergence_mode), (RawPropertyType)1, nullptr},
	CameraStereoData_convergence_mode_get, CameraStereoData_convergence_mode_set, nullptr, nullptr, nullptr, rna_CameraStereoData_convergence_mode_items, 3, 0
};

static const EnumPropertyItem rna_CameraStereoData_pivot_items[4] = {
	{0, "LEFT", 0, "Left", ""},
	{1, "RIGHT", 0, "Right", ""},
	{2, "CENTER", 0, "Center", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CameraStereoData_pivot = {
	{(PropertyRNA *)&rna_CameraStereoData_interocular_distance, (PropertyRNA *)&rna_CameraStereoData_convergence_mode,
	-1, "pivot", 3, 1, 0, 4, 0, "Pivot",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, pivot), (RawPropertyType)1, nullptr},
	CameraStereoData_pivot_get, CameraStereoData_pivot_set, nullptr, nullptr, nullptr, rna_CameraStereoData_pivot_items, 3, 0
};

FloatPropertyRNA rna_CameraStereoData_interocular_distance = {
	{(PropertyRNA *)&rna_CameraStereoData_convergence_distance, (PropertyRNA *)&rna_CameraStereoData_pivot,
	-1, "interocular_distance", 3, 1, 0, 4, 0, "Interocular Distance",
	"Set the distance between the eyes - the stereo plane distance / 30 should be fine",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, interocular_distance), (RawPropertyType)5, nullptr},
	CameraStereoData_interocular_distance_get, CameraStereoData_interocular_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0649999976f, nullptr
};

FloatPropertyRNA rna_CameraStereoData_convergence_distance = {
	{(PropertyRNA *)&rna_CameraStereoData_use_spherical_stereo, (PropertyRNA *)&rna_CameraStereoData_interocular_distance,
	-1, "convergence_distance", 3, 1, 0, 4, 0, "Convergence Plane Distance",
	"The converge point for the stereo cameras (often the distance between a projector and the projection screen)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, convergence_distance), (RawPropertyType)5, nullptr},
	CameraStereoData_convergence_distance_get, CameraStereoData_convergence_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000100000f, 15.0f, 0.0000100000f, FLT_MAX, 1.0f, 3, 1.9499999285f, nullptr
};

BoolPropertyRNA rna_CameraStereoData_use_spherical_stereo = {
	{(PropertyRNA *)&rna_CameraStereoData_use_pole_merge, (PropertyRNA *)&rna_CameraStereoData_convergence_distance,
	-1, "use_spherical_stereo", 3, 1, 0, 0, 0, "Spherical Stereo",
	"Render every pixel rotating the camera around the middle of the interocular distance",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraStereoData_use_spherical_stereo_get, CameraStereoData_use_spherical_stereo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CameraStereoData_use_pole_merge = {
	{(PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_from, (PropertyRNA *)&rna_CameraStereoData_use_spherical_stereo,
	-1, "use_pole_merge", 3, 1, 0, 0, 0, "Use Pole Merge",
	"Fade interocular distance to 0 after the given cutoff angle",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraStereoData_use_pole_merge_get, CameraStereoData_use_pole_merge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_from = {
	{(PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_to, (PropertyRNA *)&rna_CameraStereoData_use_pole_merge,
	-1, "pole_merge_angle_from", 3, 1, 0, 4, 0, "Pole Merge Start Angle",
	"Angle at which interocular distance starts to fade to 0",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, pole_merge_angle_from), (RawPropertyType)5, nullptr},
	CameraStereoData_pole_merge_angle_from_get, CameraStereoData_pole_merge_angle_from_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 1.0471975803f, nullptr
};

FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_to = {
	{nullptr, (PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_from,
	-1, "pole_merge_angle_to", 3, 1, 0, 4, 0, "Pole Merge End Angle",
	"Angle at which interocular distance is 0",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, pole_merge_angle_to), (RawPropertyType)5, nullptr},
	CameraStereoData_pole_merge_angle_to_get, CameraStereoData_pole_merge_angle_to_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 1.3089969158f, nullptr
};

StructRNA RNA_CameraStereoData = {
	{(ContainerRNA *)&RNA_CameraDOFSettings, (ContainerRNA *)&RNA_CameraBackgroundImages,
	nullptr,
	{(PropertyRNA *)&rna_CameraStereoData_rna_properties, (PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_to}},
	"CameraStereoData", nullptr, nullptr, 516, nullptr, "Stereo",
	"Stereoscopy settings for a Camera data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CameraStereoData_rna_properties,
	nullptr,
	&RNA_Camera,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Depth of Field */
CollectionPropertyRNA rna_CameraDOFSettings_rna_properties = {
	{(PropertyRNA *)&rna_CameraDOFSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraDOFSettings_rna_properties_begin, CameraDOFSettings_rna_properties_next, CameraDOFSettings_rna_properties_end, CameraDOFSettings_rna_properties_get, nullptr, nullptr, CameraDOFSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CameraDOFSettings_rna_type = {
	{(PropertyRNA *)&rna_CameraDOFSettings_use_dof, (PropertyRNA *)&rna_CameraDOFSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraDOFSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_CameraDOFSettings_use_dof = {
	{(PropertyRNA *)&rna_CameraDOFSettings_focus_object, (PropertyRNA *)&rna_CameraDOFSettings_rna_type,
	-1, "use_dof", 3, 1, 0, 0, 0, "Depth of Field",
	"Use Depth of Field",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraDOFSettings_use_dof_get, CameraDOFSettings_use_dof_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_CameraDOFSettings_focus_object = {
	{(PropertyRNA *)&rna_CameraDOFSettings_focus_subtarget, (PropertyRNA *)&rna_CameraDOFSettings_use_dof,
	-1, "focus_object", 8388737, 1, 0, 0, 0, "Focus Object",
	"Use this object to define the depth of field focal point",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraDOFSettings_focus_object_get, CameraDOFSettings_focus_object_set, nullptr, nullptr,&RNA_Object
};

StringPropertyRNA rna_CameraDOFSettings_focus_subtarget = {
	{(PropertyRNA *)&rna_CameraDOFSettings_focus_distance, (PropertyRNA *)&rna_CameraDOFSettings_focus_object,
	-1, "focus_subtarget", 262145, 1, 0, 0, 0, "Focus Bone",
	"Use this armature bone to define the depth of field focal point",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Camera_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraDOFSettings_focus_subtarget_get, CameraDOFSettings_focus_subtarget_length, CameraDOFSettings_focus_subtarget_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FloatPropertyRNA rna_CameraDOFSettings_focus_distance = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_fstop, (PropertyRNA *)&rna_CameraDOFSettings_focus_subtarget,
	-1, "focus_distance", 3, 1, 0, 4, 0, "Focus Distance",
	"Distance to the focus point for depth of field",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, focus_distance), (RawPropertyType)5, nullptr},
	CameraDOFSettings_focus_distance_get, CameraDOFSettings_focus_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5000.0f, 0.0f, FLT_MAX, 1.0f, 2, 10.0f, nullptr
};

FloatPropertyRNA rna_CameraDOFSettings_aperture_fstop = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_blades, (PropertyRNA *)&rna_CameraDOFSettings_focus_distance,
	-1, "aperture_fstop", 3, 1, 0, 4, 0, "F-Stop",
	"F-Stop ratio (lower numbers give more defocus, higher numbers give a sharper image)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, aperture_fstop), (RawPropertyType)5, nullptr},
	CameraDOFSettings_aperture_fstop_get, CameraDOFSettings_aperture_fstop_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 128.0f, 0.0f, FLT_MAX, 10.0f, 1, 2.7999999523f, nullptr
};

IntPropertyRNA rna_CameraDOFSettings_aperture_blades = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_rotation, (PropertyRNA *)&rna_CameraDOFSettings_aperture_fstop,
	-1, "aperture_blades", 3, 1, 0, 0, 0, "Blades",
	"Number of blades in aperture for polygonal bokeh (at least 3)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CameraDOFSettings_aperture_blades_get, CameraDOFSettings_aperture_blades_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 16, 0, 16, 1, 0, nullptr
};

FloatPropertyRNA rna_CameraDOFSettings_aperture_rotation = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_ratio, (PropertyRNA *)&rna_CameraDOFSettings_aperture_blades,
	-1, "aperture_rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation of blades in aperture",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, aperture_rotation), (RawPropertyType)5, nullptr},
	CameraDOFSettings_aperture_rotation_get, CameraDOFSettings_aperture_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CameraDOFSettings_aperture_ratio = {
	{nullptr, (PropertyRNA *)&rna_CameraDOFSettings_aperture_rotation,
	-1, "aperture_ratio", 3, 1, 0, 4, 0, "Ratio",
	"Distortion to simulate anamorphic lens bokeh",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, aperture_ratio), (RawPropertyType)5, nullptr},
	CameraDOFSettings_aperture_ratio_get, CameraDOFSettings_aperture_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 2.0f, 0.0099999998f, FLT_MAX, 0.1000000015f, 3, 1.0f, nullptr
};

StructRNA RNA_CameraDOFSettings = {
	{(ContainerRNA *)&RNA_ClothSolverResult, (ContainerRNA *)&RNA_CameraStereoData,
	nullptr,
	{(PropertyRNA *)&rna_CameraDOFSettings_rna_properties, (PropertyRNA *)&rna_CameraDOFSettings_aperture_ratio}},
	"CameraDOFSettings", nullptr, nullptr, 516, nullptr, "Depth of Field",
	"Depth of Field settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CameraDOFSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_CameraDOFSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

