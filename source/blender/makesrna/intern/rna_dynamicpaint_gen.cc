
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

#include "rna_dynamicpaint.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces;


RNA_EXTERN_C CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurfaces_active_index;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurfaces_active;


RNA_EXTERN_C CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp;


RNA_EXTERN_C CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurface_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintSurface_surface_format;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintSurface_surface_type;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_is_active;
RNA_EXTERN_C StringPropertyRNA rna_DynamicPaintSurface_name;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurface_brush_collection;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_drying;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurface_dry_speed;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurface_image_resolution;
RNA_EXTERN_C StringPropertyRNA rna_DynamicPaintSurface_uv_layer;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurface_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurface_frame_end;
RNA_EXTERN_C IntPropertyRNA rna_DynamicPaintSurface_frame_substeps;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintSurface_init_color_type;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_init_color;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurface_init_texture;
RNA_EXTERN_C StringPropertyRNA rna_DynamicPaintSurface_init_layername;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintSurface_effect_ui;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_spread;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_spread_speed;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_drip;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_shrink;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurface_effector_weights;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply;
RNA_EXTERN_C StringPropertyRNA rna_DynamicPaintSurface_image_output_path;
RNA_EXTERN_C StringPropertyRNA rna_DynamicPaintSurface_output_name_a;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_output_a;
RNA_EXTERN_C StringPropertyRNA rna_DynamicPaintSurface_output_name_b;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_output_b;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_displace_factor;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat;
RNA_EXTERN_C EnumPropertyRNA rna_DynamicPaintSurface_displace_type;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_wave_damping;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_wave_speed;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_wave_spring;
RNA_EXTERN_C FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border;
RNA_EXTERN_C PointerPropertyRNA rna_DynamicPaintSurface_point_cache;
RNA_EXTERN_C BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user;

extern FunctionRNA rna_DynamicPaintSurface_output_exists_func;
extern PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object;
extern IntPropertyRNA rna_DynamicPaintSurface_output_exists_index;
extern BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists;


static PointerRNA DynamicPaintCanvasSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DynamicPaintCanvasSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintCanvasSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintCanvasSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DynamicPaintCanvasSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DynamicPaintCanvasSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA DynamicPaintCanvasSettings_canvas_surfaces_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_DynamicPaintSurface, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void DynamicPaintCanvasSettings_canvas_surfaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces;

    rna_DynamicPaint_surfaces_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintCanvasSettings_canvas_surfaces_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintCanvasSettings_canvas_surfaces_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA DynamicPaintSurfaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DynamicPaintSurfaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintSurfaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintSurfaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DynamicPaintSurfaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DynamicPaintSurfaces_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int DynamicPaintSurfaces_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Surface_active_point_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void DynamicPaintSurfaces_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Surface_active_point_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA DynamicPaintSurfaces_active_get(PointerRNA *ptr)
{
    return rna_PaintSurface_active_get(ptr);
}

static PointerRNA DynamicPaintBrushSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintBrushSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintBrushSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DynamicPaintBrushSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DynamicPaintBrushSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_paint_color_get(PointerRNA *ptr, float values[3])
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

RNA_EXTERN_C void DynamicPaintBrushSettings_paint_color_set(PointerRNA *ptr, const float values[3])
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float DynamicPaintBrushSettings_paint_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->alpha);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_paint_alpha_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->alpha = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_absolute_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_absolute_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C float DynamicPaintBrushSettings_paint_wetness_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wetness);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_paint_wetness_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->wetness = (std::remove_reference_t<decltype(data->wetness)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wetness = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_paint_erase_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_paint_erase_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C int DynamicPaintBrushSettings_wave_type_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->wave_type);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_wave_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->wave_type = (std::remove_reference_t<decltype(data->wave_type)>)value;
#else
    data->wave_type = value;
#endif
}

RNA_EXTERN_C float DynamicPaintBrushSettings_wave_factor_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wave_factor);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_wave_factor_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->wave_factor = (std::remove_reference_t<decltype(data->wave_factor)>)CLAMPIS(value, -2.0f, 2.0f);
#else
    data->wave_factor = CLAMPIS(value, -2.0f, 2.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintBrushSettings_wave_clamp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wave_clamp);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_wave_clamp_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->wave_clamp = (std::remove_reference_t<decltype(data->wave_clamp)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->wave_clamp = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_smudge_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_smudge_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

RNA_EXTERN_C float DynamicPaintBrushSettings_smudge_strength_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->smudge_strength);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_smudge_strength_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->smudge_strength = (std::remove_reference_t<decltype(data->smudge_strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->smudge_strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintBrushSettings_velocity_max_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->max_velocity);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_velocity_max_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->max_velocity = (std::remove_reference_t<decltype(data->max_velocity)>)CLAMPIS(value, 0.0001000000f, 10.0f);
#else
    data->max_velocity = CLAMPIS(value, 0.0001000000f, 10.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_velocity_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_velocity_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_velocity_depth_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 2048) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_velocity_depth_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 2048; }
    else { data->flags &= ~2048; }
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_velocity_color_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_velocity_color_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

RNA_EXTERN_C int DynamicPaintBrushSettings_paint_source_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->collision);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_paint_source_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->collision = (std::remove_reference_t<decltype(data->collision)>)value;
#else
    data->collision = value;
#endif
}

RNA_EXTERN_C float DynamicPaintBrushSettings_paint_distance_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->paint_distance);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_paint_distance_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->paint_distance = (std::remove_reference_t<decltype(data->paint_distance)>)CLAMPIS(value, 0.0f, 500.0f);
#else
    data->paint_distance = CLAMPIS(value, 0.0f, 500.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_proximity_ramp_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_proximity_ramp_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C int DynamicPaintBrushSettings_proximity_falloff_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->proximity_falloff);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_proximity_falloff_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->proximity_falloff = (std::remove_reference_t<decltype(data->proximity_falloff)>)value;
#else
    data->proximity_falloff = value;
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_proximity_project_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_proximity_project_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C int DynamicPaintBrushSettings_ray_direction_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->ray_dir);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_ray_direction_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->ray_dir = (std::remove_reference_t<decltype(data->ray_dir)>)value;
#else
    data->ray_dir = value;
#endif
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_invert_proximity_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 64) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_invert_proximity_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 64; }
    else { data->flags &= ~64; }
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_negative_volume_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_negative_volume_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

RNA_EXTERN_C PointerRNA DynamicPaintBrushSettings_particle_system_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_particle_system_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    *(void **)&data->psys = value.data;
}

RNA_EXTERN_C bool DynamicPaintBrushSettings_use_particle_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_use_particle_radius_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C float DynamicPaintBrushSettings_solid_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->particle_radius);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_solid_radius_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_radius = (std::remove_reference_t<decltype(data->particle_radius)>)CLAMPIS(value, 0.0099999998f, 10.0f);
#else
    data->particle_radius = CLAMPIS(value, 0.0099999998f, 10.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintBrushSettings_smooth_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->particle_smooth);
}

RNA_EXTERN_C void DynamicPaintBrushSettings_smooth_radius_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_smooth = (std::remove_reference_t<decltype(data->particle_smooth)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->particle_smooth = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C PointerRNA DynamicPaintBrushSettings_paint_ramp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->paint_ramp);
}

RNA_EXTERN_C PointerRNA DynamicPaintBrushSettings_velocity_ramp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->vel_ramp);
}

static PointerRNA DynamicPaintSurface_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DynamicPaintSurface_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintSurface_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DynamicPaintSurface_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DynamicPaintSurface_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DynamicPaintSurface_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int DynamicPaintSurface_surface_format_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->format);
}

RNA_EXTERN_C void DynamicPaintSurface_surface_format_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->format = (std::remove_reference_t<decltype(data->format)>)value;
#else
    data->format = value;
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_surface_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void DynamicPaintSurface_surface_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_is_active_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_is_active_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C void DynamicPaintSurface_name_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int DynamicPaintSurface_name_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void DynamicPaintSurface_name_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C PointerRNA DynamicPaintSurface_brush_collection_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->brush_group);
}

RNA_EXTERN_C void DynamicPaintSurface_brush_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->brush_group = value.data;
}

RNA_EXTERN_C bool DynamicPaintSurface_use_dissolve_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_dissolve_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C int DynamicPaintSurface_dissolve_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->diss_speed);
}

RNA_EXTERN_C void DynamicPaintSurface_dissolve_speed_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->diss_speed = (std::remove_reference_t<decltype(data->diss_speed)>)CLAMPIS(value, 1, 10000);
#else
    data->diss_speed = CLAMPIS(value, 1, 10000);
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_drying_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_drying_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

RNA_EXTERN_C int DynamicPaintSurface_dry_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->dry_speed);
}

RNA_EXTERN_C void DynamicPaintSurface_dry_speed_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->dry_speed = (std::remove_reference_t<decltype(data->dry_speed)>)CLAMPIS(value, 1, 10000);
#else
    data->dry_speed = CLAMPIS(value, 1, 10000);
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_image_resolution_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->image_resolution);
}

RNA_EXTERN_C void DynamicPaintSurface_image_resolution_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->image_resolution = (std::remove_reference_t<decltype(data->image_resolution)>)CLAMPIS(value, 16, 4096);
#else
    data->image_resolution = CLAMPIS(value, 16, 4096);
#endif
}

RNA_EXTERN_C void DynamicPaintSurface_uv_layer_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->uvlayer_name) < 68);
    strcpy(value, data->uvlayer_name);
}

RNA_EXTERN_C int DynamicPaintSurface_uv_layer_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->uvlayer_name);
}

RNA_EXTERN_C void DynamicPaintSurface_uv_layer_set(PointerRNA *ptr, const char *value)
{
    rna_DynamicPaint_uvlayer_set(ptr, value);
}

RNA_EXTERN_C int DynamicPaintSurface_frame_start_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->start_frame);
}

RNA_EXTERN_C void DynamicPaintSurface_frame_start_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->start_frame = (std::remove_reference_t<decltype(data->start_frame)>)CLAMPIS(value, 1, 1048574);
#else
    data->start_frame = CLAMPIS(value, 1, 1048574);
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_frame_end_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->end_frame);
}

RNA_EXTERN_C void DynamicPaintSurface_frame_end_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->end_frame = (std::remove_reference_t<decltype(data->end_frame)>)CLAMPIS(value, 1, 1048574);
#else
    data->end_frame = CLAMPIS(value, 1, 1048574);
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_frame_substeps_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->substeps);
}

RNA_EXTERN_C void DynamicPaintSurface_frame_substeps_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->substeps = (std::remove_reference_t<decltype(data->substeps)>)CLAMPIS(value, 0, 20);
#else
    data->substeps = CLAMPIS(value, 0, 20);
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_antialiasing_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_antialiasing_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C float DynamicPaintSurface_brush_influence_scale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->influence_scale);
}

RNA_EXTERN_C void DynamicPaintSurface_brush_influence_scale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->influence_scale = (std::remove_reference_t<decltype(data->influence_scale)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->influence_scale = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_brush_radius_scale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->radius_scale);
}

RNA_EXTERN_C void DynamicPaintSurface_brush_radius_scale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->radius_scale = (std::remove_reference_t<decltype(data->radius_scale)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->radius_scale = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_init_color_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->init_color_type);
}

RNA_EXTERN_C void DynamicPaintSurface_init_color_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->init_color_type = (std::remove_reference_t<decltype(data->init_color_type)>)value;
#else
    data->init_color_type = value;
#endif
}

RNA_EXTERN_C void DynamicPaintSurface_init_color_get(PointerRNA *ptr, float values[4])
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->init_color)[i]);
    }
}

RNA_EXTERN_C void DynamicPaintSurface_init_color_set(PointerRNA *ptr, const float values[4])
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->init_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C PointerRNA DynamicPaintSurface_init_texture_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->init_texture);
}

RNA_EXTERN_C void DynamicPaintSurface_init_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);

    if (data->init_texture) {
        id_us_min((ID *)data->init_texture);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->init_texture = value.data;
}

RNA_EXTERN_C void DynamicPaintSurface_init_layername_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->init_layername) < 68);
    strcpy(value, data->init_layername);
}

RNA_EXTERN_C int DynamicPaintSurface_init_layername_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->init_layername);
}

RNA_EXTERN_C void DynamicPaintSurface_init_layername_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->init_layername, value, 68);
}

RNA_EXTERN_C int DynamicPaintSurface_effect_ui_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->effect_ui);
}

RNA_EXTERN_C void DynamicPaintSurface_effect_ui_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->effect_ui = (std::remove_reference_t<decltype(data->effect_ui)>)value;
#else
    data->effect_ui = value;
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_dry_log_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_dry_log_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C bool DynamicPaintSurface_use_dissolve_log_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_dissolve_log_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C bool DynamicPaintSurface_use_spread_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->effect) & 1) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_spread_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect |= 1; }
    else { data->effect &= ~1; }
}

RNA_EXTERN_C float DynamicPaintSurface_spread_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->spread_speed);
}

RNA_EXTERN_C void DynamicPaintSurface_spread_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->spread_speed = (std::remove_reference_t<decltype(data->spread_speed)>)CLAMPIS(value, 0.0010000000f, 10.0f);
#else
    data->spread_speed = CLAMPIS(value, 0.0010000000f, 10.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_color_dry_threshold_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->color_dry_threshold);
}

RNA_EXTERN_C void DynamicPaintSurface_color_dry_threshold_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->color_dry_threshold = (std::remove_reference_t<decltype(data->color_dry_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->color_dry_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_color_spread_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->color_spread_speed);
}

RNA_EXTERN_C void DynamicPaintSurface_color_spread_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->color_spread_speed = (std::remove_reference_t<decltype(data->color_spread_speed)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->color_spread_speed = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_drip_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->effect) & 2) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_drip_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect |= 2; }
    else { data->effect &= ~2; }
}

RNA_EXTERN_C bool DynamicPaintSurface_use_shrink_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->effect) & 4) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_shrink_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect |= 4; }
    else { data->effect &= ~4; }
}

RNA_EXTERN_C float DynamicPaintSurface_shrink_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->shrink_speed);
}

RNA_EXTERN_C void DynamicPaintSurface_shrink_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->shrink_speed = (std::remove_reference_t<decltype(data->shrink_speed)>)CLAMPIS(value, 0.0010000000f, 10.0f);
#else
    data->shrink_speed = CLAMPIS(value, 0.0010000000f, 10.0f);
#endif
}

RNA_EXTERN_C PointerRNA DynamicPaintSurface_effector_weights_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

RNA_EXTERN_C float DynamicPaintSurface_drip_velocity_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->drip_vel);
}

RNA_EXTERN_C void DynamicPaintSurface_drip_velocity_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->drip_vel = (std::remove_reference_t<decltype(data->drip_vel)>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->drip_vel = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_drip_acceleration_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->drip_acc);
}

RNA_EXTERN_C void DynamicPaintSurface_drip_acceleration_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->drip_acc = (std::remove_reference_t<decltype(data->drip_acc)>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->drip_acc = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_premultiply_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_premultiply_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C void DynamicPaintSurface_image_output_path_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->image_output_path) < 1024);
    strcpy(value, data->image_output_path);
}

RNA_EXTERN_C int DynamicPaintSurface_image_output_path_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->image_output_path);
}

RNA_EXTERN_C void DynamicPaintSurface_image_output_path_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy(data->image_output_path, value, 1024);
}

RNA_EXTERN_C void DynamicPaintSurface_output_name_a_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->output_name) < 68);
    strcpy(value, data->output_name);
}

RNA_EXTERN_C int DynamicPaintSurface_output_name_a_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->output_name);
}

RNA_EXTERN_C void DynamicPaintSurface_output_name_a_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->output_name, value, 68);
}

RNA_EXTERN_C bool DynamicPaintSurface_use_output_a_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_output_a_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

RNA_EXTERN_C void DynamicPaintSurface_output_name_b_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->output_name2) < 68);
    strcpy(value, data->output_name2);
}

RNA_EXTERN_C int DynamicPaintSurface_output_name_b_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->output_name2);
}

RNA_EXTERN_C void DynamicPaintSurface_output_name_b_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->output_name2, value, 68);
}

RNA_EXTERN_C bool DynamicPaintSurface_use_output_b_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 2048) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_output_b_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 2048; }
    else { data->flags &= ~2048; }
}

RNA_EXTERN_C float DynamicPaintSurface_depth_clamp_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->depth_clamp);
}

RNA_EXTERN_C void DynamicPaintSurface_depth_clamp_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->depth_clamp = (std::remove_reference_t<decltype(data->depth_clamp)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->depth_clamp = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_displace_factor_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->disp_factor);
}

RNA_EXTERN_C void DynamicPaintSurface_displace_factor_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->disp_factor = (std::remove_reference_t<decltype(data->disp_factor)>)CLAMPIS(value, -50.0f, 50.0f);
#else
    data->disp_factor = CLAMPIS(value, -50.0f, 50.0f);
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_image_fileformat_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->image_fileformat);
}

RNA_EXTERN_C void DynamicPaintSurface_image_fileformat_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->image_fileformat = (std::remove_reference_t<decltype(data->image_fileformat)>)value;
#else
    data->image_fileformat = value;
#endif
}

RNA_EXTERN_C int DynamicPaintSurface_displace_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->disp_type);
}

RNA_EXTERN_C void DynamicPaintSurface_displace_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->disp_type = (std::remove_reference_t<decltype(data->disp_type)>)value;
#else
    data->disp_type = value;
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_incremental_displace_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_incremental_displace_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

RNA_EXTERN_C float DynamicPaintSurface_wave_damping_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_damping);
}

RNA_EXTERN_C void DynamicPaintSurface_wave_damping_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->wave_damping = (std::remove_reference_t<decltype(data->wave_damping)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wave_damping = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_wave_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_speed);
}

RNA_EXTERN_C void DynamicPaintSurface_wave_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->wave_speed = (std::remove_reference_t<decltype(data->wave_speed)>)CLAMPIS(value, 0.0099999998f, 5.0f);
#else
    data->wave_speed = CLAMPIS(value, 0.0099999998f, 5.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_wave_timescale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_timescale);
}

RNA_EXTERN_C void DynamicPaintSurface_wave_timescale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->wave_timescale = (std::remove_reference_t<decltype(data->wave_timescale)>)CLAMPIS(value, 0.0099999998f, 3.0f);
#else
    data->wave_timescale = CLAMPIS(value, 0.0099999998f, 3.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_wave_spring_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_spring);
}

RNA_EXTERN_C void DynamicPaintSurface_wave_spring_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->wave_spring = (std::remove_reference_t<decltype(data->wave_spring)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wave_spring = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float DynamicPaintSurface_wave_smoothness_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_smoothness);
}

RNA_EXTERN_C void DynamicPaintSurface_wave_smoothness_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
#ifdef __cplusplus
    data->wave_smoothness = (std::remove_reference_t<decltype(data->wave_smoothness)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->wave_smoothness = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C bool DynamicPaintSurface_use_wave_open_border_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

RNA_EXTERN_C void DynamicPaintSurface_use_wave_open_border_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

RNA_EXTERN_C PointerRNA DynamicPaintSurface_point_cache_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->pointcache);
}

RNA_EXTERN_C bool DynamicPaintSurface_is_cache_user_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DynamicPaint_is_cache_user_get;
    return fn(ptr);
}




RNA_EXTERN_C bool DynamicPaintSurface_output_exists_func(struct DynamicPaintSurface *_self, struct Object *object, int index)
{
	return rna_DynamicPaint_is_output_exists(_self, object, index);
}

static void DynamicPaintSurface_output_exists_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct DynamicPaintSurface *_self;
	struct Object *object;
	int index;
	bool exists;
	char *_data, *_retdata;
	
	_self = (struct DynamicPaintSurface *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	exists = rna_DynamicPaint_is_output_exists(_self, object, index);
	*((bool *)_retdata) = exists;
}

/* Repeated prototypes to detect errors */

bool rna_DynamicPaint_is_output_exists(struct DynamicPaintSurface *_self, struct Object *object, int index);

/* Canvas Settings */
CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintCanvasSettings_rna_properties_begin, DynamicPaintCanvasSettings_rna_properties_next, DynamicPaintCanvasSettings_rna_properties_end, DynamicPaintCanvasSettings_rna_properties_get, nullptr, nullptr, DynamicPaintCanvasSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintCanvasSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces = {
	{nullptr, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_type,
	-1, "canvas_surfaces", 0, 0, 0, 0, 0, "Paint Surface List",
	"Paint surface list",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_DynamicPaintSurfaces},
	DynamicPaintCanvasSettings_canvas_surfaces_begin, DynamicPaintCanvasSettings_canvas_surfaces_next, DynamicPaintCanvasSettings_canvas_surfaces_end, DynamicPaintCanvasSettings_canvas_surfaces_get, nullptr, nullptr, nullptr, nullptr, &RNA_DynamicPaintSurface
};

StructRNA RNA_DynamicPaintCanvasSettings = {
	{(ContainerRNA *)&RNA_DynamicPaintSurfaces, (ContainerRNA *)&RNA_SplineBezierPoints,
	nullptr,
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces}},
	"DynamicPaintCanvasSettings", nullptr, nullptr, 516, nullptr, "Canvas Settings",
	"Dynamic Paint canvas settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_DynamicPaintCanvasSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Canvas Surfaces */
CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurfaces_rna_properties_begin, DynamicPaintSurfaces_rna_properties_next, DynamicPaintSurfaces_rna_properties_end, DynamicPaintSurfaces_rna_properties_get, nullptr, nullptr, DynamicPaintSurfaces_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_active_index, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurfaces_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_DynamicPaintSurfaces_active_index = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_active, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_type,
	-1, "active_index", 1, 0, 0, 0, 0, "Active Point Cache Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurfaces_active_index_get, DynamicPaintSurfaces_active_index_set, nullptr, nullptr, rna_Surface_active_point_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_DynamicPaintSurfaces_active = {
	{nullptr, (PropertyRNA *)&rna_DynamicPaintSurfaces_active_index,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Surface",
	"Active Dynamic Paint surface being displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurfaces_active_get, nullptr, nullptr, nullptr,&RNA_DynamicPaintSurface
};

StructRNA RNA_DynamicPaintSurfaces = {
	{(ContainerRNA *)&RNA_DynamicPaintBrushSettings, (ContainerRNA *)&RNA_DynamicPaintCanvasSettings,
	nullptr,
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties, (PropertyRNA *)&rna_DynamicPaintSurfaces_active}},
	"DynamicPaintSurfaces", nullptr, nullptr, 516, nullptr, "Canvas Surfaces",
	"Collection of Dynamic Paint Canvas surfaces",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties,
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

/* Brush Settings */
CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_rna_properties_begin, DynamicPaintBrushSettings_rna_properties_next, DynamicPaintBrushSettings_rna_properties_end, DynamicPaintBrushSettings_rna_properties_get, nullptr, nullptr, DynamicPaintBrushSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_color, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_DynamicPaintBrushSettings_paint_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_type,
	-1, "paint_color", 3, 0, 0, 4, 0, "Paint Color",
	"Color of the paint",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, r), (RawPropertyType)5, nullptr},
	nullptr, nullptr, DynamicPaintBrushSettings_paint_color_get, DynamicPaintBrushSettings_paint_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_DynamicPaintBrushSettings_paint_color_default
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_absolute_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_color,
	-1, "paint_alpha", 3, 0, 0, 4, 0, "Paint Alpha",
	"Paint alpha",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, alpha), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_paint_alpha_get, DynamicPaintBrushSettings_paint_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_wetness, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_alpha,
	-1, "use_absolute_alpha", 3, 0, 0, 0, 0, "Absolute Alpha",
	"Only increase alpha value if paint alpha is higher than existing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_absolute_alpha_get, DynamicPaintBrushSettings_use_absolute_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_paint_erase, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_absolute_alpha,
	-1, "paint_wetness", 3, 0, 0, 4, 0, "Paint Wetness",
	"Paint wetness, visible in wetmap (some effects only affect wet paint)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wetness), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_paint_wetness_get, DynamicPaintBrushSettings_paint_wetness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_type, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_wetness,
	-1, "use_paint_erase", 3, 0, 0, 0, 0, "Erase Paint",
	"Erase / remove paint instead of adding it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_paint_erase_get, DynamicPaintBrushSettings_use_paint_erase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_wave_type_items[5] = {
	{3, "CHANGE", 0, "Depth Change", ""},
	{0, "DEPTH", 0, "Obstacle", ""},
	{1, "FORCE", 0, "Force", ""},
	{2, "REFLECT", 0, "Reflect Only", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_factor, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_paint_erase,
	-1, "wave_type", 1, 0, 0, 4, 0, "Wave Type",
	"",
	0, "Simulation",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wave_type), (RawPropertyType)1, nullptr},
	DynamicPaintBrushSettings_wave_type_get, DynamicPaintBrushSettings_wave_type_set, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_wave_type_items, 4, 0
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_clamp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_type,
	-1, "wave_factor", 3, 0, 0, 4, 0, "Factor",
	"Multiplier for wave influence of this brush",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wave_factor), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_wave_factor_get, DynamicPaintBrushSettings_wave_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -2.0f, 2.0f, 5.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_smudge, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_factor,
	-1, "wave_clamp", 3, 0, 0, 4, 0, "Clamp Waves",
	"Maximum level of surface intersection used to influence waves (use 0.0 to disable)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wave_clamp), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_wave_clamp_get, DynamicPaintBrushSettings_wave_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_smudge_strength, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_clamp,
	-1, "use_smudge", 3, 0, 0, 0, 0, "Do Smudge",
	"Make this brush to smudge existing paint as it moves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_smudge_get, DynamicPaintBrushSettings_use_smudge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_max, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_smudge,
	-1, "smudge_strength", 3, 0, 0, 4, 0, "Smudge Strength",
	"Smudge effect strength",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, smudge_strength), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_smudge_strength_get, DynamicPaintBrushSettings_smudge_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_smudge_strength,
	-1, "velocity_max", 3, 0, 0, 4, 0, "Max Velocity",
	"Velocity considered as maximum influence (Blender units per frame)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, max_velocity), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_velocity_max_get, DynamicPaintBrushSettings_velocity_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 2.0f, 0.0001000000f, 10.0f, 5.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_depth, (PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_max,
	-1, "use_velocity_alpha", 3, 0, 0, 0, 0, "Multiply Alpha",
	"Multiply brush influence by velocity color ramp alpha",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_velocity_alpha_get, DynamicPaintBrushSettings_use_velocity_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_color, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_alpha,
	-1, "use_velocity_depth", 3, 0, 0, 0, 0, "Multiply Depth",
	"Multiply brush intersection depth (displace, waves) by velocity ramp alpha",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_velocity_depth_get, DynamicPaintBrushSettings_use_velocity_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_source, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_depth,
	-1, "use_velocity_color", 3, 0, 0, 0, 0, "Replace Color",
	"Replace brush color by velocity color ramp",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_velocity_color_get, DynamicPaintBrushSettings_use_velocity_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_paint_source_items[6] = {
	{3, "PARTICLE_SYSTEM", 88, "Particle System", ""},
	{4, "POINT", 318, "Object Center", ""},
	{1, "DISTANCE", 63, "Proximity", ""},
	{2, "VOLUME_DISTANCE", 307, "Mesh Volume + Proximity", ""},
	{0, "VOLUME", 287, "Mesh Volume", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_distance, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_color,
	-1, "paint_source", 1, 0, 0, 4, 0, "Paint Source",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, collision), (RawPropertyType)0, nullptr},
	DynamicPaintBrushSettings_paint_source_get, DynamicPaintBrushSettings_paint_source_set, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_paint_source_items, 5, 0
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_source,
	-1, "paint_distance", 3, 0, 0, 4, 0, "Proximity Distance",
	"Maximum distance from brush to mesh surface to affect paint",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, paint_distance), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_paint_distance_get, DynamicPaintBrushSettings_paint_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_proximity_falloff, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_distance,
	-1, "use_proximity_ramp_alpha", 3, 0, 0, 0, 0, "Only Use Alpha",
	"Only read color ramp alpha",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_proximity_ramp_alpha_get, DynamicPaintBrushSettings_use_proximity_ramp_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_proximity_falloff_items[4] = {
	{1, "SMOOTH", 559, "Smooth", ""},
	{0, "CONSTANT", 563, "Constant", ""},
	{2, "RAMP", 54, "Color Ramp", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_project, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha,
	-1, "proximity_falloff", 1, 0, 0, 4, 0, "Falloff",
	"Proximity falloff type",
	0, "Brush",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, proximity_falloff), (RawPropertyType)1, nullptr},
	DynamicPaintBrushSettings_proximity_falloff_get, DynamicPaintBrushSettings_proximity_falloff_set, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_proximity_falloff_items, 3, 0
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_ray_direction, (PropertyRNA *)&rna_DynamicPaintBrushSettings_proximity_falloff,
	-1, "use_proximity_project", 3, 0, 0, 0, 0, "Project",
	"Brush is projected to canvas from defined direction within brush proximity",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_proximity_project_get, DynamicPaintBrushSettings_use_proximity_project_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_ray_direction_items[4] = {
	{0, "CANVAS", 0, "Canvas Normal", ""},
	{1, "BRUSH", 0, "Brush Normal", ""},
	{2, "Z_AXIS", 0, "Z-Axis", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_invert_proximity, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_project,
	-1, "ray_direction", 3, 0, 0, 4, 0, "Ray Direction",
	"Ray direction to use for projection (if brush object is located in that direction it\'s painted)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, ray_dir), (RawPropertyType)1, nullptr},
	DynamicPaintBrushSettings_ray_direction_get, DynamicPaintBrushSettings_ray_direction_set, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_ray_direction_items, 3, 0
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_negative_volume, (PropertyRNA *)&rna_DynamicPaintBrushSettings_ray_direction,
	-1, "invert_proximity", 3, 0, 0, 0, 0, "Inner Proximity",
	"Proximity falloff is applied inside the volume",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_invert_proximity_get, DynamicPaintBrushSettings_invert_proximity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_particle_system, (PropertyRNA *)&rna_DynamicPaintBrushSettings_invert_proximity,
	-1, "use_negative_volume", 3, 0, 0, 0, 0, "Negate Volume",
	"Negate influence inside the volume",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_negative_volume_get, DynamicPaintBrushSettings_use_negative_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_particle_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_negative_volume,
	-1, "particle_system", 8388609, 0, 0, 0, 0, "Particle Systems",
	"The particle system to paint with",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_reset_dependency, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_particle_system_get, DynamicPaintBrushSettings_particle_system_set, nullptr, nullptr,&RNA_ParticleSystem
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_solid_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_particle_system,
	-1, "use_particle_radius", 3, 0, 0, 0, 0, "Use Particle Radius",
	"Use radius from particle settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_use_particle_radius_get, DynamicPaintBrushSettings_use_particle_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_smooth_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_particle_radius,
	-1, "solid_radius", 3, 0, 0, 4, 0, "Solid Radius",
	"Radius that will be painted solid",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, particle_radius), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_solid_radius_get, DynamicPaintBrushSettings_solid_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, 10.0f, 5.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_ramp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_solid_radius,
	-1, "smooth_radius", 3, 0, 0, 4, 0, "Smooth Radius",
	"Smooth falloff added after solid radius",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, particle_smooth), (RawPropertyType)5, nullptr},
	DynamicPaintBrushSettings_smooth_radius_get, DynamicPaintBrushSettings_smooth_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 5.0f, -1, 0.0f, nullptr
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_ramp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_smooth_radius,
	-1, "paint_ramp", 8388608, 0, 0, 0, 0, "Paint Color Ramp",
	"Color ramp used to define proximity falloff",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_paint_ramp_get, nullptr, nullptr, nullptr,&RNA_ColorRamp
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp = {
	{nullptr, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_ramp,
	-1, "velocity_ramp", 8388608, 0, 0, 0, 0, "Velocity Color Ramp",
	"Color ramp used to define brush velocity effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintBrushSettings_velocity_ramp_get, nullptr, nullptr, nullptr,&RNA_ColorRamp
};

StructRNA RNA_DynamicPaintBrushSettings = {
	{(ContainerRNA *)&RNA_DynamicPaintSurface, (ContainerRNA *)&RNA_DynamicPaintSurfaces,
	nullptr,
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties, (PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_ramp}},
	"DynamicPaintBrushSettings", nullptr, nullptr, 516, nullptr, "Brush Settings",
	"Brush settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_DynamicPaintBrushSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Paint Surface */
CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_rna_properties_begin, DynamicPaintSurface_rna_properties_next, DynamicPaintSurface_rna_properties_end, DynamicPaintSurface_rna_properties_get, nullptr, nullptr, DynamicPaintSurface_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintSurface_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_surface_format, (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_DynamicPaintSurface_surface_format_items[3] = {
	{1, "VERTEX", 261, "Vertex", ""},
	{2, "IMAGE", 696, "Image Sequence", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintSurface_surface_format = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_surface_type, (PropertyRNA *)&rna_DynamicPaintSurface_rna_type,
	-1, "surface_format", 1, 0, 0, 4, 0, "Format",
	"Surface Format",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_changeFormat, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, format), (RawPropertyType)1, nullptr},
	DynamicPaintSurface_surface_format_get, DynamicPaintSurface_surface_format_set, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_surface_format_items, 2, 1
};

static const EnumPropertyItem rna_DynamicPaintSurface_surface_type_items[2] = {
	{0, "PAINT", 0, "Paint", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintSurface_surface_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_is_active, (PropertyRNA *)&rna_DynamicPaintSurface_surface_format,
	-1, "surface_type", 1, 0, 0, 4, 0, "Surface Type",
	"Surface Type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_changeType, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, type), (RawPropertyType)1, nullptr},
	DynamicPaintSurface_surface_type_get, DynamicPaintSurface_surface_type_set, rna_DynamicPaint_surface_type_itemf, nullptr, nullptr, rna_DynamicPaintSurface_surface_type_items, 1, 0
};

BoolPropertyRNA rna_DynamicPaintSurface_is_active = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_name, (PropertyRNA *)&rna_DynamicPaintSurface_surface_type,
	-1, "is_active", 3, 0, 0, 0, 0, "Is Active",
	"Toggle whether surface is processed or ignored",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_is_active_get, DynamicPaintSurface_is_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_DynamicPaintSurface_name = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_collection, (PropertyRNA *)&rna_DynamicPaintSurface_is_active,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Surface name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_DynamicPaintSurface_uniqueName, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_name_get, DynamicPaintSurface_name_length, DynamicPaintSurface_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_DynamicPaintSurface_brush_collection = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve, (PropertyRNA *)&rna_DynamicPaintSurface_name,
	-1, "brush_collection", 8388737, 0, 0, 0, 0, "Brush Collection",
	"Only use brush objects from this collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset_dependency, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_brush_collection_get, DynamicPaintSurface_brush_collection_set, nullptr, nullptr,&RNA_Collection
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_dissolve_speed, (PropertyRNA *)&rna_DynamicPaintSurface_brush_collection,
	-1, "use_dissolve", 3, 0, 0, 0, 0, "Dissolve",
	"Enable to make surface changes disappear over time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_dissolve_get, DynamicPaintSurface_use_dissolve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_drying, (PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve,
	-1, "dissolve_speed", 3, 0, 0, 4, 0, "Dissolve Time",
	"Approximately in how many frames should dissolve happen",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, diss_speed), (RawPropertyType)0, nullptr},
	DynamicPaintSurface_dissolve_speed_get, DynamicPaintSurface_dissolve_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_drying = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_dry_speed, (PropertyRNA *)&rna_DynamicPaintSurface_dissolve_speed,
	-1, "use_drying", 3, 0, 0, 0, 0, "Dry",
	"Enable to make surface wetness dry over time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_drying_get, DynamicPaintSurface_use_drying_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_DynamicPaintSurface_dry_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_resolution, (PropertyRNA *)&rna_DynamicPaintSurface_use_drying,
	-1, "dry_speed", 3, 0, 0, 4, 0, "Dry Time",
	"Approximately in how many frames should drying happen",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, dry_speed), (RawPropertyType)0, nullptr},
	DynamicPaintSurface_dry_speed_get, DynamicPaintSurface_dry_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, 0, nullptr
};

IntPropertyRNA rna_DynamicPaintSurface_image_resolution = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_uv_layer, (PropertyRNA *)&rna_DynamicPaintSurface_dry_speed,
	-1, "image_resolution", 1, 0, 0, 4, 0, "Resolution",
	"Output image resolution",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, image_resolution), (RawPropertyType)0, nullptr},
	DynamicPaintSurface_image_resolution_get, DynamicPaintSurface_image_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 16, 4096, 16, 4096, 1, 0, nullptr
};

StringPropertyRNA rna_DynamicPaintSurface_uv_layer = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_start, (PropertyRNA *)&rna_DynamicPaintSurface_image_resolution,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_uv_layer_get, DynamicPaintSurface_uv_layer_length, DynamicPaintSurface_uv_layer_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 68, ""
};

IntPropertyRNA rna_DynamicPaintSurface_frame_start = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_end, (PropertyRNA *)&rna_DynamicPaintSurface_uv_layer,
	-1, "frame_start", 1, 0, 0, 4, 0, "Start Frame",
	"Simulation start frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_updateFrames, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, start_frame), (RawPropertyType)0, nullptr},
	DynamicPaintSurface_frame_start_get, DynamicPaintSurface_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 9999, 1, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_DynamicPaintSurface_frame_end = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_substeps, (PropertyRNA *)&rna_DynamicPaintSurface_frame_start,
	-1, "frame_end", 1, 0, 0, 4, 0, "End Frame",
	"Simulation end frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_updateFrames, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, end_frame), (RawPropertyType)0, nullptr},
	DynamicPaintSurface_frame_end_get, DynamicPaintSurface_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 9999, 1, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_DynamicPaintSurface_frame_substeps = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_antialiasing, (PropertyRNA *)&rna_DynamicPaintSurface_frame_end,
	-1, "frame_substeps", 3, 0, 0, 4, 0, "Sub-Steps",
	"Do extra frames between scene frames to ensure smooth motion",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, substeps), (RawPropertyType)0, nullptr},
	DynamicPaintSurface_frame_substeps_get, DynamicPaintSurface_frame_substeps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 20, 1, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_influence_scale, (PropertyRNA *)&rna_DynamicPaintSurface_frame_substeps,
	-1, "use_antialiasing", 1, 0, 0, 0, 0, "Anti-Aliasing",
	"Use 5× multisampling to smooth paint edges",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_antialiasing_get, DynamicPaintSurface_use_antialiasing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_radius_scale, (PropertyRNA *)&rna_DynamicPaintSurface_use_antialiasing,
	-1, "brush_influence_scale", 3, 0, 0, 4, 0, "Influence Scale",
	"Adjust influence brush objects have on this surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, influence_scale), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_brush_influence_scale_get, DynamicPaintSurface_brush_influence_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_color_type, (PropertyRNA *)&rna_DynamicPaintSurface_brush_influence_scale,
	-1, "brush_radius_scale", 3, 0, 0, 4, 0, "Radius Scale",
	"Adjust radius of proximity brushes or particles for this surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, radius_scale), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_brush_radius_scale_get, DynamicPaintSurface_brush_radius_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, nullptr
};

static const EnumPropertyItem rna_DynamicPaintSurface_init_color_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "COLOR", 54, "Color", ""},
	{2, "TEXTURE", 80, "UV Texture", ""},
	{3, "VERTEX_COLOR", 202, "Vertex Color", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintSurface_init_color_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_color, (PropertyRNA *)&rna_DynamicPaintSurface_brush_radius_scale,
	-1, "init_color_type", 1, 0, 0, 4, 0, "Initial Color",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_initialcolortype, 119472128, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, init_color_type), (RawPropertyType)1, nullptr},
	DynamicPaintSurface_init_color_type_get, DynamicPaintSurface_init_color_type_set, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_init_color_type_items, 4, 0
};

static float rna_DynamicPaintSurface_init_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DynamicPaintSurface_init_color = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_texture, (PropertyRNA *)&rna_DynamicPaintSurface_init_color_type,
	-1, "init_color", 1, 0, 0, 4, 0, "Color",
	"Initial color of the surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_DynamicPaintSurface_reset, 119472128, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, init_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, DynamicPaintSurface_init_color_get, DynamicPaintSurface_init_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_DynamicPaintSurface_init_color_default
};

PointerPropertyRNA rna_DynamicPaintSurface_init_texture = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_layername, (PropertyRNA *)&rna_DynamicPaintSurface_init_color,
	-1, "init_texture", 8388801, 0, 0, 0, 0, "Texture",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 119472128, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_init_texture_get, DynamicPaintSurface_init_texture_set, nullptr, nullptr,&RNA_Texture
};

StringPropertyRNA rna_DynamicPaintSurface_init_layername = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_effect_ui, (PropertyRNA *)&rna_DynamicPaintSurface_init_texture,
	-1, "init_layername", 262145, 0, 0, 0, 0, "Data Layer",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 119472128, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_init_layername_get, DynamicPaintSurface_init_layername_length, DynamicPaintSurface_init_layername_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 68, ""
};

static const EnumPropertyItem rna_DynamicPaintSurface_effect_ui_items[4] = {
	{1, "SPREAD", 0, "Spread", ""},
	{2, "DRIP", 0, "Drip", ""},
	{3, "SHRINK", 0, "Shrink", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintSurface_effect_ui = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dry_log, (PropertyRNA *)&rna_DynamicPaintSurface_init_layername,
	-1, "effect_ui", 1, 0, 0, 4, 0, "Effect Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, effect_ui), (RawPropertyType)1, nullptr},
	DynamicPaintSurface_effect_ui_get, DynamicPaintSurface_effect_ui_set, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_effect_ui_items, 3, 1
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve_log, (PropertyRNA *)&rna_DynamicPaintSurface_effect_ui,
	-1, "use_dry_log", 3, 0, 0, 0, 0, "Slow",
	"Use logarithmic drying (makes high values to dry faster than low values)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_dry_log_get, DynamicPaintSurface_use_dry_log_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_spread, (PropertyRNA *)&rna_DynamicPaintSurface_use_dry_log,
	-1, "use_dissolve_log", 3, 0, 0, 0, 0, "Slow",
	"Use logarithmic dissolve (makes high values to fade faster than low values)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_dissolve_log_get, DynamicPaintSurface_use_dissolve_log_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_spread = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_spread_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve_log,
	-1, "use_spread", 1, 0, 0, 0, 0, "Use Spread",
	"Process spread effect (spread wet paint around surface)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_spread_get, DynamicPaintSurface_use_spread_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_spread_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_color_dry_threshold, (PropertyRNA *)&rna_DynamicPaintSurface_use_spread,
	-1, "spread_speed", 3, 0, 0, 4, 0, "Spread Speed",
	"How fast spread effect moves on the canvas surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, spread_speed), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_spread_speed_get, DynamicPaintSurface_spread_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_color_spread_speed, (PropertyRNA *)&rna_DynamicPaintSurface_spread_speed,
	-1, "color_dry_threshold", 3, 0, 0, 4, 0, "Color Dry",
	"The wetness level when colors start to shift to the background",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, color_dry_threshold), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_color_dry_threshold_get, DynamicPaintSurface_color_dry_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_drip, (PropertyRNA *)&rna_DynamicPaintSurface_color_dry_threshold,
	-1, "color_spread_speed", 3, 0, 0, 4, 0, "Color Spread",
	"How fast colors get mixed within wet paint",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, color_spread_speed), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_color_spread_speed_get, DynamicPaintSurface_color_spread_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_drip = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_shrink, (PropertyRNA *)&rna_DynamicPaintSurface_color_spread_speed,
	-1, "use_drip", 1, 0, 0, 0, 0, "Use Drip",
	"Process drip effect (drip wet paint to gravity direction)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_drip_get, DynamicPaintSurface_use_drip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_shrink = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_shrink_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_drip,
	-1, "use_shrink", 1, 0, 0, 0, 0, "Use Shrink",
	"Process shrink effect (shrink paint areas)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_shrink_get, DynamicPaintSurface_use_shrink_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_effector_weights, (PropertyRNA *)&rna_DynamicPaintSurface_use_shrink,
	-1, "shrink_speed", 3, 0, 0, 4, 0, "Shrink Speed",
	"How fast shrink effect moves on the canvas surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, shrink_speed), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_shrink_speed_get, DynamicPaintSurface_shrink_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, 0.0f, nullptr
};

PointerPropertyRNA rna_DynamicPaintSurface_effector_weights = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_drip_velocity, (PropertyRNA *)&rna_DynamicPaintSurface_shrink_speed,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_effector_weights_get, nullptr, nullptr, nullptr,&RNA_EffectorWeights
};

FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_drip_acceleration, (PropertyRNA *)&rna_DynamicPaintSurface_effector_weights,
	-1, "drip_velocity", 3, 0, 0, 4, 0, "Velocity",
	"How much surface velocity affects dripping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, drip_vel), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_drip_velocity_get, DynamicPaintSurface_drip_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_premultiply, (PropertyRNA *)&rna_DynamicPaintSurface_drip_velocity,
	-1, "drip_acceleration", 3, 0, 0, 4, 0, "Acceleration",
	"How much surface acceleration affects dripping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, drip_acc), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_drip_acceleration_get, DynamicPaintSurface_drip_acceleration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_output_path, (PropertyRNA *)&rna_DynamicPaintSurface_drip_acceleration,
	-1, "use_premultiply", 1, 0, 0, 0, 0, "Premultiply Alpha",
	"Multiply color by alpha (recommended for Blender input)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_premultiply_get, DynamicPaintSurface_use_premultiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_DynamicPaintSurface_image_output_path = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_name_a, (PropertyRNA *)&rna_DynamicPaintSurface_use_premultiply,
	-1, "image_output_path", 262145, 0, 0, 0, 0, "Output Path",
	"Directory to save the textures",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_DIRPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_image_output_path_get, DynamicPaintSurface_image_output_path_length, DynamicPaintSurface_image_output_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_DynamicPaintSurface_output_name_a = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_output_a, (PropertyRNA *)&rna_DynamicPaintSurface_image_output_path,
	-1, "output_name_a", 262145, 0, 0, 0, 0, "Output Name",
	"Name used to save output from this surface",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_output_name_a_get, DynamicPaintSurface_output_name_a_length, DynamicPaintSurface_output_name_a_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 68, ""
};

BoolPropertyRNA rna_DynamicPaintSurface_use_output_a = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_name_b, (PropertyRNA *)&rna_DynamicPaintSurface_output_name_a,
	-1, "use_output_a", 3, 0, 0, 0, 0, "Use Output",
	"Save this output layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_output_a_get, DynamicPaintSurface_use_output_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_DynamicPaintSurface_output_name_b = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_output_b, (PropertyRNA *)&rna_DynamicPaintSurface_use_output_a,
	-1, "output_name_b", 262145, 0, 0, 0, 0, "Output Name",
	"Name used to save output from this surface",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_output_name_b_get, DynamicPaintSurface_output_name_b_length, DynamicPaintSurface_output_name_b_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 68, ""
};

BoolPropertyRNA rna_DynamicPaintSurface_use_output_b = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_depth_clamp, (PropertyRNA *)&rna_DynamicPaintSurface_output_name_b,
	-1, "use_output_b", 3, 0, 0, 0, 0, "Use Output",
	"Save this output layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_output_b_get, DynamicPaintSurface_use_output_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_displace_factor, (PropertyRNA *)&rna_DynamicPaintSurface_use_output_b,
	-1, "depth_clamp", 1, 0, 0, 4, 0, "Max Displace",
	"Maximum level of depth intersection in object space (use 0.0 to disable)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, depth_clamp), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_depth_clamp_get, DynamicPaintSurface_depth_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_displace_factor = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_fileformat, (PropertyRNA *)&rna_DynamicPaintSurface_depth_clamp,
	-1, "displace_factor", 1, 0, 0, 4, 0, "Displace Factor",
	"Strength of displace when applied to the mesh",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, disp_factor), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_displace_factor_get, DynamicPaintSurface_displace_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -50.0f, 50.0f, 1.0f, 2, 0.0f, nullptr
};

static const EnumPropertyItem rna_DynamicPaintSurface_image_fileformat_items[3] = {
	{0, "PNG", 0, "PNG", ""},
	{1, "OPENEXR", 0, "OpenEXR", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_displace_type, (PropertyRNA *)&rna_DynamicPaintSurface_displace_factor,
	-1, "image_fileformat", 1, 0, 0, 4, 0, "File Format",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, image_fileformat), (RawPropertyType)1, nullptr},
	DynamicPaintSurface_image_fileformat_get, DynamicPaintSurface_image_fileformat_set, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_image_fileformat_items, 2, 0
};

static const EnumPropertyItem rna_DynamicPaintSurface_displace_type_items[3] = {
	{0, "DISPLACE", 0, "Displacement", ""},
	{1, "DEPTH", 0, "Depth", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DynamicPaintSurface_displace_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_incremental_displace, (PropertyRNA *)&rna_DynamicPaintSurface_image_fileformat,
	-1, "displace_type", 1, 0, 0, 4, 0, "Data Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, disp_type), (RawPropertyType)1, nullptr},
	DynamicPaintSurface_displace_type_get, DynamicPaintSurface_displace_type_set, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_displace_type_items, 2, 0
};

BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_damping, (PropertyRNA *)&rna_DynamicPaintSurface_displace_type,
	-1, "use_incremental_displace", 1, 0, 0, 0, 0, "Incremental",
	"New displace is added cumulatively on top of existing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_incremental_displace_get, DynamicPaintSurface_use_incremental_displace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_damping = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_incremental_displace,
	-1, "wave_damping", 3, 0, 0, 4, 0, "Damping",
	"Wave damping factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_damping), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_wave_damping_get, DynamicPaintSurface_wave_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_timescale, (PropertyRNA *)&rna_DynamicPaintSurface_wave_damping,
	-1, "wave_speed", 3, 0, 0, 4, 0, "Speed",
	"Wave propagation speed",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_speed), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_wave_speed_get, DynamicPaintSurface_wave_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.2000000030f, 4.0f, 0.0099999998f, 5.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_spring, (PropertyRNA *)&rna_DynamicPaintSurface_wave_speed,
	-1, "wave_timescale", 3, 0, 0, 4, 0, "Timescale",
	"Wave time scaling factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_timescale), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_wave_timescale_get, DynamicPaintSurface_wave_timescale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.5000000000f, 0.0099999998f, 3.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_spring = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_smoothness, (PropertyRNA *)&rna_DynamicPaintSurface_wave_timescale,
	-1, "wave_spring", 3, 0, 0, 4, 0, "Spring",
	"Spring force that pulls water level back to zero",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_spring), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_wave_spring_get, DynamicPaintSurface_wave_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_wave_open_border, (PropertyRNA *)&rna_DynamicPaintSurface_wave_spring,
	-1, "wave_smoothness", 3, 0, 0, 4, 0, "Smoothness",
	"Limit maximum steepness of wave slope between simulation points (use higher values for smoother waves at expense of reduced detail)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_smoothness), (RawPropertyType)5, nullptr},
	DynamicPaintSurface_wave_smoothness_get, DynamicPaintSurface_wave_smoothness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_point_cache, (PropertyRNA *)&rna_DynamicPaintSurface_wave_smoothness,
	-1, "use_wave_open_border", 3, 0, 0, 0, 0, "Open Borders",
	"Pass waves through mesh edges",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_use_wave_open_border_get, DynamicPaintSurface_use_wave_open_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_DynamicPaintSurface_point_cache = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_is_cache_user, (PropertyRNA *)&rna_DynamicPaintSurface_use_wave_open_border,
	-1, "point_cache", 8650752, 0, 0, 0, 0, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_point_cache_get, nullptr, nullptr, nullptr,&RNA_PointCache
};

BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user = {
	{nullptr, (PropertyRNA *)&rna_DynamicPaintSurface_point_cache,
	-1, "is_cache_user", 0, 0, 0, 0, 0, "Use Cache",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DynamicPaintSurface_is_cache_user_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_index, nullptr,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

IntPropertyRNA rna_DynamicPaintSurface_output_exists_index = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_object,
	-1, "index", 3, 0, 1, 0, 0, "Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1, 0, 1, 1, 0, nullptr
};

BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists = {
	{nullptr, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_index,
	-1, "exists", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_DynamicPaintSurface_output_exists_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_object, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists}},
	"output_exists", 0, "Checks if surface output layer of given name exists",
	DynamicPaintSurface_output_exists_call,
	(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists
};

StructRNA RNA_DynamicPaintSurface = {
	{(ContainerRNA *)&RNA_FCurve, (ContainerRNA *)&RNA_DynamicPaintBrushSettings,
	nullptr,
	{(PropertyRNA *)&rna_DynamicPaintSurface_rna_properties, (PropertyRNA *)&rna_DynamicPaintSurface_is_cache_user}},
	"DynamicPaintSurface", nullptr, nullptr, 516, nullptr, "Paint Surface",
	"A canvas surface layer",
	"*", 17,
	(PropertyRNA *)&rna_DynamicPaintSurface_name, (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_DynamicPaintSurface_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_DynamicPaintSurface_output_exists_func, (FunctionRNA *)&rna_DynamicPaintSurface_output_exists_func}
};

