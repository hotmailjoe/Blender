
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

#include "rna_lightprobe.cc"

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

RNA_EXTERN_C EnumPropertyRNA rna_LightProbe_type;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_clip_end;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_show_clip;
RNA_EXTERN_C EnumPropertyRNA rna_LightProbe_influence_type;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_show_influence;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_influence_distance;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_falloff;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_use_custom_parallax;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_show_parallax;
RNA_EXTERN_C EnumPropertyRNA rna_LightProbe_parallax_type;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_parallax_distance;
RNA_EXTERN_C IntPropertyRNA rna_LightProbe_grid_resolution_x;
RNA_EXTERN_C IntPropertyRNA rna_LightProbe_grid_resolution_y;
RNA_EXTERN_C IntPropertyRNA rna_LightProbe_grid_resolution_z;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_normal_bias;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_view_bias;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_irradiance_smoothing;
RNA_EXTERN_C IntPropertyRNA rna_LightProbe_grid_bake_samples;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_surface_bias;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_escape_bias;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_surfel_density;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_validity_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_dilation_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_dilation_radius;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_grid_capture_world;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_grid_capture_indirect;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_grid_capture_emission;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_clamp_direct;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_grid_clamp_indirect;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_visibility_buffer_bias;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_visibility_bleed_bias;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_visibility_blur;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_intensity;
RNA_EXTERN_C PointerPropertyRNA rna_LightProbe_visibility_collection;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_invert_visibility_collection;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_show_data;
RNA_EXTERN_C BoolPropertyRNA rna_LightProbe_use_data_display;
RNA_EXTERN_C FloatPropertyRNA rna_LightProbe_data_display_size;
RNA_EXTERN_C PointerPropertyRNA rna_LightProbe_animation_data;

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


RNA_EXTERN_C int LightProbe_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C float LightProbe_clip_start_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipsta);
}

RNA_EXTERN_C void LightProbe_clip_start_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_clip_end_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipend);
}

RNA_EXTERN_C void LightProbe_clip_end_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->clipend = (std::remove_reference_t<decltype(data->clipend)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clipend = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool LightProbe_show_clip_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void LightProbe_show_clip_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C int LightProbe_influence_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->attenuation_type);
}

RNA_EXTERN_C void LightProbe_influence_type_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->attenuation_type = (std::remove_reference_t<decltype(data->attenuation_type)>)value;
#else
    data->attenuation_type = value;
#endif
}

RNA_EXTERN_C bool LightProbe_show_influence_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void LightProbe_show_influence_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C float LightProbe_influence_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distinf);
}

RNA_EXTERN_C void LightProbe_influence_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->distinf = (std::remove_reference_t<decltype(data->distinf)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->distinf = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_falloff_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->falloff);
}

RNA_EXTERN_C void LightProbe_falloff_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->falloff = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool LightProbe_use_custom_parallax_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void LightProbe_use_custom_parallax_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool LightProbe_show_parallax_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void LightProbe_show_parallax_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C int LightProbe_parallax_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->parallax_type);
}

RNA_EXTERN_C void LightProbe_parallax_type_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->parallax_type = (std::remove_reference_t<decltype(data->parallax_type)>)value;
#else
    data->parallax_type = value;
#endif
}

RNA_EXTERN_C float LightProbe_parallax_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distpar);
}

RNA_EXTERN_C void LightProbe_parallax_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->distpar = (std::remove_reference_t<decltype(data->distpar)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->distpar = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int LightProbe_grid_resolution_x_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_x);
}

RNA_EXTERN_C void LightProbe_grid_resolution_x_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_resolution_x = (std::remove_reference_t<decltype(data->grid_resolution_x)>)CLAMPIS(value, 1, 256);
#else
    data->grid_resolution_x = CLAMPIS(value, 1, 256);
#endif
}

RNA_EXTERN_C int LightProbe_grid_resolution_y_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_y);
}

RNA_EXTERN_C void LightProbe_grid_resolution_y_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_resolution_y = (std::remove_reference_t<decltype(data->grid_resolution_y)>)CLAMPIS(value, 1, 256);
#else
    data->grid_resolution_y = CLAMPIS(value, 1, 256);
#endif
}

RNA_EXTERN_C int LightProbe_grid_resolution_z_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_z);
}

RNA_EXTERN_C void LightProbe_grid_resolution_z_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_resolution_z = (std::remove_reference_t<decltype(data->grid_resolution_z)>)CLAMPIS(value, 1, 256);
#else
    data->grid_resolution_z = CLAMPIS(value, 1, 256);
#endif
}

RNA_EXTERN_C float LightProbe_grid_normal_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_normal_bias);
}

RNA_EXTERN_C void LightProbe_grid_normal_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_normal_bias = (std::remove_reference_t<decltype(data->grid_normal_bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->grid_normal_bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_grid_view_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_view_bias);
}

RNA_EXTERN_C void LightProbe_grid_view_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_view_bias = (std::remove_reference_t<decltype(data->grid_view_bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->grid_view_bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_grid_irradiance_smoothing_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_facing_bias);
}

RNA_EXTERN_C void LightProbe_grid_irradiance_smoothing_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_facing_bias = (std::remove_reference_t<decltype(data->grid_facing_bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->grid_facing_bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int LightProbe_grid_bake_samples_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_bake_samples);
}

RNA_EXTERN_C void LightProbe_grid_bake_samples_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_bake_samples = (std::remove_reference_t<decltype(data->grid_bake_samples)>)CLAMPIS(value, 1, INT_MAX);
#else
    data->grid_bake_samples = CLAMPIS(value, 1, INT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_grid_surface_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_surface_bias);
}

RNA_EXTERN_C void LightProbe_grid_surface_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_surface_bias = (std::remove_reference_t<decltype(data->grid_surface_bias)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->grid_surface_bias = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float LightProbe_grid_escape_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_escape_bias);
}

RNA_EXTERN_C void LightProbe_grid_escape_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_escape_bias = (std::remove_reference_t<decltype(data->grid_escape_bias)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->grid_escape_bias = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float LightProbe_surfel_density_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->surfel_density);
}

RNA_EXTERN_C void LightProbe_surfel_density_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->surfel_density = (std::remove_reference_t<decltype(data->surfel_density)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->surfel_density = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_grid_validity_threshold_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_validity_threshold);
}

RNA_EXTERN_C void LightProbe_grid_validity_threshold_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_validity_threshold = (std::remove_reference_t<decltype(data->grid_validity_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->grid_validity_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float LightProbe_grid_dilation_threshold_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_dilation_threshold);
}

RNA_EXTERN_C void LightProbe_grid_dilation_threshold_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_dilation_threshold = (std::remove_reference_t<decltype(data->grid_dilation_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->grid_dilation_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float LightProbe_grid_dilation_radius_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_dilation_radius);
}

RNA_EXTERN_C void LightProbe_grid_dilation_radius_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_dilation_radius = (std::remove_reference_t<decltype(data->grid_dilation_radius)>)CLAMPIS(value, 1.0f, 5.0f);
#else
    data->grid_dilation_radius = CLAMPIS(value, 1.0f, 5.0f);
#endif
}

RNA_EXTERN_C bool LightProbe_grid_capture_world_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->grid_flag) & 1) != 0);
}

RNA_EXTERN_C void LightProbe_grid_capture_world_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->grid_flag |= 1; }
    else { data->grid_flag &= ~1; }
}

RNA_EXTERN_C bool LightProbe_grid_capture_indirect_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->grid_flag) & 2) != 0);
}

RNA_EXTERN_C void LightProbe_grid_capture_indirect_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->grid_flag |= 2; }
    else { data->grid_flag &= ~2; }
}

RNA_EXTERN_C bool LightProbe_grid_capture_emission_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->grid_flag) & 4) != 0);
}

RNA_EXTERN_C void LightProbe_grid_capture_emission_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->grid_flag |= 4; }
    else { data->grid_flag &= ~4; }
}

RNA_EXTERN_C float LightProbe_grid_clamp_direct_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_clamp_direct);
}

RNA_EXTERN_C void LightProbe_grid_clamp_direct_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_clamp_direct = (std::remove_reference_t<decltype(data->grid_clamp_direct)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->grid_clamp_direct = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_grid_clamp_indirect_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->grid_clamp_indirect);
}

RNA_EXTERN_C void LightProbe_grid_clamp_indirect_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->grid_clamp_indirect = (std::remove_reference_t<decltype(data->grid_clamp_indirect)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->grid_clamp_indirect = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float LightProbe_visibility_buffer_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_bias);
}

RNA_EXTERN_C void LightProbe_visibility_buffer_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->vis_bias = (std::remove_reference_t<decltype(data->vis_bias)>)CLAMPIS(value, 0.0010000000f, 9999.0f);
#else
    data->vis_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
#endif
}

RNA_EXTERN_C float LightProbe_visibility_bleed_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_bleedbias);
}

RNA_EXTERN_C void LightProbe_visibility_bleed_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->vis_bleedbias = (std::remove_reference_t<decltype(data->vis_bleedbias)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->vis_bleedbias = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float LightProbe_visibility_blur_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_blur);
}

RNA_EXTERN_C void LightProbe_visibility_blur_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->vis_blur = (std::remove_reference_t<decltype(data->vis_blur)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->vis_blur = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float LightProbe_intensity_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->intensity);
}

RNA_EXTERN_C void LightProbe_intensity_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->intensity = (std::remove_reference_t<decltype(data->intensity)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->intensity = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C PointerRNA LightProbe_visibility_collection_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->visibility_grp);
}

RNA_EXTERN_C void LightProbe_visibility_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->visibility_grp = value.data;
}

RNA_EXTERN_C bool LightProbe_invert_visibility_collection_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void LightProbe_invert_visibility_collection_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool LightProbe_show_data_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void LightProbe_show_data_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool LightProbe_use_data_display_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void LightProbe_use_data_display_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C float LightProbe_data_display_size_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->data_display_size);
}

RNA_EXTERN_C void LightProbe_data_display_size_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
#ifdef __cplusplus
    data->data_display_size = (std::remove_reference_t<decltype(data->data_display_size)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->data_display_size = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C PointerRNA LightProbe_animation_data_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}


/* LightProbe */
static const EnumPropertyItem rna_LightProbe_type_items[4] = {
	{0, "SPHERE", 326, "Sphere", "Light probe that captures precise lighting from all directions at a single point in space"},
	{1, "PLANE", 327, "Plane", "Light probe that captures incoming light from a single direction on a plane"},
	{2, "VOLUME", 328, "Volume", "Light probe that captures low frequency lighting inside a volume"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_LightProbe_type = {
	{(PropertyRNA *)&rna_LightProbe_clip_start, nullptr,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"Type of light probe",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, type), (RawPropertyType)2, nullptr},
	LightProbe_type_get, nullptr, nullptr, nullptr, nullptr, rna_LightProbe_type_items, 3, 0
};

FloatPropertyRNA rna_LightProbe_clip_start = {
	{(PropertyRNA *)&rna_LightProbe_clip_end, (PropertyRNA *)&rna_LightProbe_type,
	-1, "clip_start", 3, 0, 0, 4, 0, "Clip Start",
	"Probe clip start, below which objects will not appear in reflections",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, clipsta), (RawPropertyType)5, nullptr},
	LightProbe_clip_start_get, LightProbe_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.8000000119f, nullptr
};

FloatPropertyRNA rna_LightProbe_clip_end = {
	{(PropertyRNA *)&rna_LightProbe_show_clip, (PropertyRNA *)&rna_LightProbe_clip_start,
	-1, "clip_end", 3, 0, 0, 4, 0, "Clip End",
	"Probe clip end, beyond which objects will not appear in reflections",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, clipend), (RawPropertyType)5, nullptr},
	LightProbe_clip_end_get, LightProbe_clip_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 40.0f, nullptr
};

BoolPropertyRNA rna_LightProbe_show_clip = {
	{(PropertyRNA *)&rna_LightProbe_influence_type, (PropertyRNA *)&rna_LightProbe_clip_end,
	-1, "show_clip", 3, 0, 0, 0, 0, "Clipping",
	"Show the clipping distances in the 3D view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_show_clip_get, LightProbe_show_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_LightProbe_influence_type_items[3] = {
	{0, "ELIPSOID", 0, "Sphere", ""},
	{1, "BOX", 0, "Box", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_LightProbe_influence_type = {
	{(PropertyRNA *)&rna_LightProbe_show_influence, (PropertyRNA *)&rna_LightProbe_show_clip,
	-1, "influence_type", 3, 0, 0, 4, 0, "Type",
	"Type of influence volume",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, attenuation_type), (RawPropertyType)2, nullptr},
	LightProbe_influence_type_get, LightProbe_influence_type_set, nullptr, nullptr, nullptr, rna_LightProbe_influence_type_items, 2, 0
};

BoolPropertyRNA rna_LightProbe_show_influence = {
	{(PropertyRNA *)&rna_LightProbe_influence_distance, (PropertyRNA *)&rna_LightProbe_influence_type,
	-1, "show_influence", 3, 0, 0, 0, 0, "Influence",
	"Show the influence volume in the 3D view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_show_influence_get, LightProbe_show_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_LightProbe_influence_distance = {
	{(PropertyRNA *)&rna_LightProbe_falloff, (PropertyRNA *)&rna_LightProbe_show_influence,
	-1, "influence_distance", 3, 0, 0, 4, 0, "Influence Distance",
	"Influence distance of the probe",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, distinf), (RawPropertyType)5, nullptr},
	LightProbe_influence_distance_get, LightProbe_influence_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 2.5000000000f, nullptr
};

FloatPropertyRNA rna_LightProbe_falloff = {
	{(PropertyRNA *)&rna_LightProbe_use_custom_parallax, (PropertyRNA *)&rna_LightProbe_influence_distance,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"Control how fast the probe influence decreases",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, falloff), (RawPropertyType)5, nullptr},
	LightProbe_falloff_get, LightProbe_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.2000000030f, nullptr
};

BoolPropertyRNA rna_LightProbe_use_custom_parallax = {
	{(PropertyRNA *)&rna_LightProbe_show_parallax, (PropertyRNA *)&rna_LightProbe_falloff,
	-1, "use_custom_parallax", 3, 0, 0, 0, 0, "Use Custom Parallax",
	"Enable custom settings for the parallax correction volume",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_use_custom_parallax_get, LightProbe_use_custom_parallax_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LightProbe_show_parallax = {
	{(PropertyRNA *)&rna_LightProbe_parallax_type, (PropertyRNA *)&rna_LightProbe_use_custom_parallax,
	-1, "show_parallax", 3, 0, 0, 0, 0, "Parallax",
	"Show the parallax correction volume in the 3D view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_show_parallax_get, LightProbe_show_parallax_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_LightProbe_parallax_type_items[3] = {
	{0, "ELIPSOID", 0, "Sphere", ""},
	{1, "BOX", 0, "Box", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_LightProbe_parallax_type = {
	{(PropertyRNA *)&rna_LightProbe_parallax_distance, (PropertyRNA *)&rna_LightProbe_show_parallax,
	-1, "parallax_type", 3, 0, 0, 4, 0, "Type",
	"Type of parallax volume",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, parallax_type), (RawPropertyType)2, nullptr},
	LightProbe_parallax_type_get, LightProbe_parallax_type_set, nullptr, nullptr, nullptr, rna_LightProbe_parallax_type_items, 2, 0
};

FloatPropertyRNA rna_LightProbe_parallax_distance = {
	{(PropertyRNA *)&rna_LightProbe_grid_resolution_x, (PropertyRNA *)&rna_LightProbe_parallax_type,
	-1, "parallax_distance", 3, 0, 0, 4, 0, "Parallax Radius",
	"Lowest corner of the parallax bounding box",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, distpar), (RawPropertyType)5, nullptr},
	LightProbe_parallax_distance_get, LightProbe_parallax_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 2.5000000000f, nullptr
};

IntPropertyRNA rna_LightProbe_grid_resolution_x = {
	{(PropertyRNA *)&rna_LightProbe_grid_resolution_y, (PropertyRNA *)&rna_LightProbe_parallax_distance,
	-1, "grid_resolution_x", 3, 0, 0, 4, 0, "Resolution X",
	"Number of samples along the x axis of the volume",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_resolution_x), (RawPropertyType)0, nullptr},
	LightProbe_grid_resolution_x_get, LightProbe_grid_resolution_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 256, 1, 256, 1, 4, nullptr
};

IntPropertyRNA rna_LightProbe_grid_resolution_y = {
	{(PropertyRNA *)&rna_LightProbe_grid_resolution_z, (PropertyRNA *)&rna_LightProbe_grid_resolution_x,
	-1, "grid_resolution_y", 3, 0, 0, 4, 0, "Resolution Y",
	"Number of samples along the y axis of the volume",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_resolution_y), (RawPropertyType)0, nullptr},
	LightProbe_grid_resolution_y_get, LightProbe_grid_resolution_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 256, 1, 256, 1, 4, nullptr
};

IntPropertyRNA rna_LightProbe_grid_resolution_z = {
	{(PropertyRNA *)&rna_LightProbe_grid_normal_bias, (PropertyRNA *)&rna_LightProbe_grid_resolution_y,
	-1, "grid_resolution_z", 3, 0, 0, 4, 0, "Resolution Z",
	"Number of samples along the z axis of the volume",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_resolution_z), (RawPropertyType)0, nullptr},
	LightProbe_grid_resolution_z_get, LightProbe_grid_resolution_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 256, 1, 256, 1, 4, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_normal_bias = {
	{(PropertyRNA *)&rna_LightProbe_grid_view_bias, (PropertyRNA *)&rna_LightProbe_grid_resolution_z,
	-1, "grid_normal_bias", 3, 0, 0, 4, 0, "Normal Bias",
	"Offset sampling of the irradiance grid in the surface normal direction to reduce light bleeding",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_normal_bias), (RawPropertyType)5, nullptr},
	LightProbe_grid_normal_bias_get, LightProbe_grid_normal_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.3000000119f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_view_bias = {
	{(PropertyRNA *)&rna_LightProbe_grid_irradiance_smoothing, (PropertyRNA *)&rna_LightProbe_grid_normal_bias,
	-1, "grid_view_bias", 3, 0, 0, 4, 0, "View Bias",
	"Offset sampling of the irradiance grid in the viewing direction to reduce light bleeding",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_view_bias), (RawPropertyType)5, nullptr},
	LightProbe_grid_view_bias_get, LightProbe_grid_view_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_irradiance_smoothing = {
	{(PropertyRNA *)&rna_LightProbe_grid_bake_samples, (PropertyRNA *)&rna_LightProbe_grid_view_bias,
	-1, "grid_irradiance_smoothing", 3, 0, 0, 4, 0, "Facing Bias",
	"Smoother irradiance interpolation but introduce light bleeding",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_facing_bias), (RawPropertyType)5, nullptr},
	LightProbe_grid_irradiance_smoothing_get, LightProbe_grid_irradiance_smoothing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.5000000000f, nullptr
};

IntPropertyRNA rna_LightProbe_grid_bake_samples = {
	{(PropertyRNA *)&rna_LightProbe_grid_surface_bias, (PropertyRNA *)&rna_LightProbe_grid_irradiance_smoothing,
	-1, "grid_bake_samples", 3, 0, 0, 4, 0, "Bake Samples",
	"Number of ray directions to evaluate when baking",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_bake_samples), (RawPropertyType)0, nullptr},
	LightProbe_grid_bake_samples_get, LightProbe_grid_bake_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, 2048, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_surface_bias = {
	{(PropertyRNA *)&rna_LightProbe_grid_escape_bias, (PropertyRNA *)&rna_LightProbe_grid_bake_samples,
	-1, "grid_surface_bias", 3, 0, 0, 4, 0, "Capture Surface Bias",
	"Moves capture points position away from surfaces to avoid artifacts",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_surface_bias), (RawPropertyType)5, nullptr},
	LightProbe_grid_surface_bias_get, LightProbe_grid_surface_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0500000007f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_escape_bias = {
	{(PropertyRNA *)&rna_LightProbe_surfel_density, (PropertyRNA *)&rna_LightProbe_grid_surface_bias,
	-1, "grid_escape_bias", 3, 0, 0, 4, 0, "Capture Escape Bias",
	"Moves capture points outside objects",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_escape_bias), (RawPropertyType)5, nullptr},
	LightProbe_grid_escape_bias_get, LightProbe_grid_escape_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_LightProbe_surfel_density = {
	{(PropertyRNA *)&rna_LightProbe_grid_validity_threshold, (PropertyRNA *)&rna_LightProbe_grid_escape_bias,
	-1, "surfel_density", 3, 0, 0, 4, 0, "Surfel Density",
	"Number of surfels per unit distance (higher values improve quality)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, surfel_density), (RawPropertyType)5, nullptr},
	LightProbe_surfel_density_get, LightProbe_surfel_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_validity_threshold = {
	{(PropertyRNA *)&rna_LightProbe_grid_dilation_threshold, (PropertyRNA *)&rna_LightProbe_surfel_density,
	-1, "grid_validity_threshold", 3, 0, 0, 4, 0, "Validity Threshold",
	"Ratio of front-facing surface hits under which a grid sample will not be considered for lighting",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_validity_threshold), (RawPropertyType)5, nullptr},
	LightProbe_grid_validity_threshold_get, LightProbe_grid_validity_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.4000000060f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_dilation_threshold = {
	{(PropertyRNA *)&rna_LightProbe_grid_dilation_radius, (PropertyRNA *)&rna_LightProbe_grid_validity_threshold,
	-1, "grid_dilation_threshold", 3, 0, 0, 4, 0, "Dilation Threshold",
	"Ratio of front-facing surface hits under which a grid sample will reuse neighbors grid sample lighting",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_dilation_threshold), (RawPropertyType)5, nullptr},
	LightProbe_grid_dilation_threshold_get, LightProbe_grid_dilation_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_dilation_radius = {
	{(PropertyRNA *)&rna_LightProbe_grid_capture_world, (PropertyRNA *)&rna_LightProbe_grid_dilation_threshold,
	-1, "grid_dilation_radius", 3, 0, 0, 4, 0, "Dilation Radius",
	"Radius in grid sample to search valid grid samples to copy into invalid grid samples",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_dilation_radius), (RawPropertyType)5, nullptr},
	LightProbe_grid_dilation_radius_get, LightProbe_grid_dilation_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5.0f, 1.0f, 5.0f, 10.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_LightProbe_grid_capture_world = {
	{(PropertyRNA *)&rna_LightProbe_grid_capture_indirect, (PropertyRNA *)&rna_LightProbe_grid_dilation_radius,
	-1, "grid_capture_world", 3, 0, 0, 0, 0, "Capture World",
	"Bake incoming light from the world, instead of just the visibility, for more accurate lighting, but lose correct blending to surrounding irradiance volumes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_grid_capture_world_get, LightProbe_grid_capture_world_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LightProbe_grid_capture_indirect = {
	{(PropertyRNA *)&rna_LightProbe_grid_capture_emission, (PropertyRNA *)&rna_LightProbe_grid_capture_world,
	-1, "grid_capture_indirect", 3, 0, 0, 0, 0, "Capture Indirect",
	"Bake light bounces from light sources for more accurate lighting",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_grid_capture_indirect_get, LightProbe_grid_capture_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_LightProbe_grid_capture_emission = {
	{(PropertyRNA *)&rna_LightProbe_grid_clamp_direct, (PropertyRNA *)&rna_LightProbe_grid_capture_indirect,
	-1, "grid_capture_emission", 3, 0, 0, 0, 0, "Capture Emission",
	"Bake emissive surfaces for more accurate lighting",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_grid_capture_emission_get, LightProbe_grid_capture_emission_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_clamp_direct = {
	{(PropertyRNA *)&rna_LightProbe_grid_clamp_indirect, (PropertyRNA *)&rna_LightProbe_grid_capture_emission,
	-1, "grid_clamp_direct", 3, 0, 0, 4, 0, "Clamp Direct",
	"Clamp the direct lighting intensity to reduce noise (0 to disable)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_clamp_direct), (RawPropertyType)5, nullptr},
	LightProbe_grid_clamp_direct_get, LightProbe_grid_clamp_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_LightProbe_grid_clamp_indirect = {
	{(PropertyRNA *)&rna_LightProbe_visibility_buffer_bias, (PropertyRNA *)&rna_LightProbe_grid_clamp_direct,
	-1, "grid_clamp_indirect", 3, 0, 0, 4, 0, "Clamp Indirect",
	"Clamp the indirect lighting intensity to reduce noise (0 to disable)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_clamp_indirect), (RawPropertyType)5, nullptr},
	LightProbe_grid_clamp_indirect_get, LightProbe_grid_clamp_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_LightProbe_visibility_buffer_bias = {
	{(PropertyRNA *)&rna_LightProbe_visibility_bleed_bias, (PropertyRNA *)&rna_LightProbe_grid_clamp_indirect,
	-1, "visibility_buffer_bias", 3, 0, 0, 4, 0, "Visibility Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, vis_bias), (RawPropertyType)5, nullptr},
	LightProbe_visibility_buffer_bias_get, LightProbe_visibility_buffer_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_LightProbe_visibility_bleed_bias = {
	{(PropertyRNA *)&rna_LightProbe_visibility_blur, (PropertyRNA *)&rna_LightProbe_visibility_buffer_bias,
	-1, "visibility_bleed_bias", 3, 0, 0, 4, 0, "Visibility Bleed Bias",
	"Bias for reducing light-bleed on variance shadow maps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, vis_bleedbias), (RawPropertyType)5, nullptr},
	LightProbe_visibility_bleed_bias_get, LightProbe_visibility_bleed_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_LightProbe_visibility_blur = {
	{(PropertyRNA *)&rna_LightProbe_intensity, (PropertyRNA *)&rna_LightProbe_visibility_bleed_bias,
	-1, "visibility_blur", 3, 0, 0, 4, 0, "Visibility Blur",
	"Filter size of the visibility blur",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, vis_blur), (RawPropertyType)5, nullptr},
	LightProbe_visibility_blur_get, LightProbe_visibility_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_LightProbe_intensity = {
	{(PropertyRNA *)&rna_LightProbe_visibility_collection, (PropertyRNA *)&rna_LightProbe_visibility_blur,
	-1, "intensity", 3, 0, 0, 4, 0, "Intensity",
	"Modify the intensity of the lighting captured by this probe",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, intensity), (RawPropertyType)5, nullptr},
	LightProbe_intensity_get, LightProbe_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

PointerPropertyRNA rna_LightProbe_visibility_collection = {
	{(PropertyRNA *)&rna_LightProbe_invert_visibility_collection, (PropertyRNA *)&rna_LightProbe_intensity,
	-1, "visibility_collection", 8388737, 1, 0, 0, 0, "Visibility Collection",
	"Restrict objects visible for this probe",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_visibility_collection_get, LightProbe_visibility_collection_set, nullptr, nullptr,&RNA_Collection
};

BoolPropertyRNA rna_LightProbe_invert_visibility_collection = {
	{(PropertyRNA *)&rna_LightProbe_show_data, (PropertyRNA *)&rna_LightProbe_visibility_collection,
	-1, "invert_visibility_collection", 3, 0, 0, 0, 0, "Invert Collection",
	"Invert visibility collection",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_invert_visibility_collection_get, LightProbe_invert_visibility_collection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LightProbe_show_data = {
	{(PropertyRNA *)&rna_LightProbe_use_data_display, (PropertyRNA *)&rna_LightProbe_invert_visibility_collection,
	-1, "show_data", 4099, 1, 0, 0, 0, "Display Data (Deprecated)",
	"Deprecated, use use_data_display instead",
	253, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_show_data_get, LightProbe_show_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LightProbe_use_data_display = {
	{(PropertyRNA *)&rna_LightProbe_data_display_size, (PropertyRNA *)&rna_LightProbe_show_data,
	-1, "use_data_display", 4099, 1, 0, 0, 0, "Display Data",
	"Display sampled data in the viewport to debug captured light",
	253, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_use_data_display_get, LightProbe_use_data_display_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_LightProbe_data_display_size = {
	{(PropertyRNA *)&rna_LightProbe_animation_data, (PropertyRNA *)&rna_LightProbe_use_data_display,
	-1, "data_display_size", 3, 0, 0, 4, 0, "Display Data Size",
	"Viewport display size of the sampled data",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119406592, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, data_display_size), (RawPropertyType)5, nullptr},
	LightProbe_data_display_size_get, LightProbe_data_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.1000000015f, nullptr
};

PointerPropertyRNA rna_LightProbe_animation_data = {
	{nullptr, (PropertyRNA *)&rna_LightProbe_data_display_size,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	LightProbe_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

StructRNA RNA_LightProbe = {
	{(ContainerRNA *)&RNA_RenderEngine, (ContainerRNA *)&RNA_CurveProfilePoints,
	nullptr,
	{(PropertyRNA *)&rna_LightProbe_type, (PropertyRNA *)&rna_LightProbe_animation_data}},
	"LightProbe", nullptr, nullptr, 519, nullptr, "LightProbe",
	"Light Probe data-block for lighting capture objects",
	"*", 271,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

