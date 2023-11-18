
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

#include "rna_color.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_CurveMapPoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveMapPoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapPoint_location;
RNA_EXTERN_C EnumPropertyRNA rna_CurveMapPoint_handle_type;
RNA_EXTERN_C BoolPropertyRNA rna_CurveMapPoint_select;


RNA_EXTERN_C CollectionPropertyRNA rna_CurveMap_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveMap_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_CurveMap_points;


RNA_EXTERN_C CollectionPropertyRNA rna_CurveMapPoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveMapPoints_rna_type;

extern FunctionRNA rna_CurveMapPoints_new_func;
extern FloatPropertyRNA rna_CurveMapPoints_new_position;
extern FloatPropertyRNA rna_CurveMapPoints_new_value;
extern PointerPropertyRNA rna_CurveMapPoints_new_point;

extern FunctionRNA rna_CurveMapPoints_remove_func;
extern PointerPropertyRNA rna_CurveMapPoints_remove_point;



RNA_EXTERN_C CollectionPropertyRNA rna_CurveMapping_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveMapping_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_CurveMapping_tone;
RNA_EXTERN_C BoolPropertyRNA rna_CurveMapping_use_clip;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapping_clip_min_x;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapping_clip_min_y;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapping_clip_max_x;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapping_clip_max_y;
RNA_EXTERN_C EnumPropertyRNA rna_CurveMapping_extend;
RNA_EXTERN_C CollectionPropertyRNA rna_CurveMapping_curves;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapping_black_level;
RNA_EXTERN_C FloatPropertyRNA rna_CurveMapping_white_level;

extern FunctionRNA rna_CurveMapping_update_func;
extern FunctionRNA rna_CurveMapping_reset_view_func;
extern FunctionRNA rna_CurveMapping_initialize_func;
extern FunctionRNA rna_CurveMapping_evaluate_func;
extern PointerPropertyRNA rna_CurveMapping_evaluate_curve;
extern FloatPropertyRNA rna_CurveMapping_evaluate_position;
extern FloatPropertyRNA rna_CurveMapping_evaluate_value;



RNA_EXTERN_C CollectionPropertyRNA rna_ColorRampElement_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorRampElement_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_ColorRampElement_color;
RNA_EXTERN_C FloatPropertyRNA rna_ColorRampElement_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_ColorRampElement_position;


RNA_EXTERN_C CollectionPropertyRNA rna_ColorRamp_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorRamp_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_ColorRamp_elements;
RNA_EXTERN_C EnumPropertyRNA rna_ColorRamp_interpolation;
RNA_EXTERN_C EnumPropertyRNA rna_ColorRamp_hue_interpolation;
RNA_EXTERN_C EnumPropertyRNA rna_ColorRamp_color_mode;

extern FunctionRNA rna_ColorRamp_evaluate_func;
extern FloatPropertyRNA rna_ColorRamp_evaluate_position;
extern FloatPropertyRNA rna_ColorRamp_evaluate_color;



RNA_EXTERN_C CollectionPropertyRNA rna_ColorRampElements_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorRampElements_rna_type;

extern FunctionRNA rna_ColorRampElements_new_func;
extern FloatPropertyRNA rna_ColorRampElements_new_position;
extern PointerPropertyRNA rna_ColorRampElements_new_element;

extern FunctionRNA rna_ColorRampElements_remove_func;
extern PointerPropertyRNA rna_ColorRampElements_remove_element;



RNA_EXTERN_C CollectionPropertyRNA rna_Histogram_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Histogram_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_Histogram_mode;
RNA_EXTERN_C BoolPropertyRNA rna_Histogram_show_line;


RNA_EXTERN_C CollectionPropertyRNA rna_Scopes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Scopes_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_Scopes_use_full_resolution;
RNA_EXTERN_C FloatPropertyRNA rna_Scopes_accuracy;
RNA_EXTERN_C PointerPropertyRNA rna_Scopes_histogram;
RNA_EXTERN_C EnumPropertyRNA rna_Scopes_waveform_mode;
RNA_EXTERN_C FloatPropertyRNA rna_Scopes_waveform_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_Scopes_vectorscope_alpha;


RNA_EXTERN_C CollectionPropertyRNA rna_ColorManagedDisplaySettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorManagedDisplaySettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ColorManagedDisplaySettings_display_device;


RNA_EXTERN_C CollectionPropertyRNA rna_ColorManagedViewSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorManagedViewSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ColorManagedViewSettings_look;
RNA_EXTERN_C EnumPropertyRNA rna_ColorManagedViewSettings_view_transform;
RNA_EXTERN_C FloatPropertyRNA rna_ColorManagedViewSettings_exposure;
RNA_EXTERN_C FloatPropertyRNA rna_ColorManagedViewSettings_gamma;
RNA_EXTERN_C PointerPropertyRNA rna_ColorManagedViewSettings_curve_mapping;
RNA_EXTERN_C BoolPropertyRNA rna_ColorManagedViewSettings_use_curve_mapping;
RNA_EXTERN_C BoolPropertyRNA rna_ColorManagedViewSettings_use_hdr_view;


RNA_EXTERN_C CollectionPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ColorManagedInputColorspaceSettings_name;
RNA_EXTERN_C BoolPropertyRNA rna_ColorManagedInputColorspaceSettings_is_data;


RNA_EXTERN_C CollectionPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ColorManagedSequencerColorspaceSettings_name;

static PointerRNA CurveMapPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveMapPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveMapPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMapPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveMapPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMapPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveMapPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveMapPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void CurveMapPoint_location_get(PointerRNA *ptr, float values[2])
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

RNA_EXTERN_C void CurveMapPoint_location_set(PointerRNA *ptr, const float values[2])
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

RNA_EXTERN_C int CurveMapPoint_handle_type_get(PointerRNA *ptr)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    return ((data->flag) & 6);
}

RNA_EXTERN_C void CurveMapPoint_handle_type_set(PointerRNA *ptr, int value)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    data->flag &= ~6;
    data->flag |= value;
}

RNA_EXTERN_C bool CurveMapPoint_select_get(PointerRNA *ptr)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CurveMapPoint_select_set(PointerRNA *ptr, bool value)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA CurveMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveMap_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMap_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveMap_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveMap_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int CurveMap_points_length(PointerRNA *ptr)
{
    CurveMap *data = (CurveMap *)(ptr->data);
    return (data->curve == nullptr) ? 0 : data->totpoint;
}

static PointerRNA CurveMap_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveMapPoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void CurveMap_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CurveMap *data = (CurveMap *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveMap_points;

    rna_iterator_array_begin(iter, data->curve, sizeof(data->curve[0]), data->totpoint, 0, nullptr);

    if (iter->valid) {
        iter->ptr = CurveMap_points_get(iter);
    }
}

RNA_EXTERN_C void CurveMap_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = CurveMap_points_get(iter);
    }
}

RNA_EXTERN_C void CurveMap_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int CurveMap_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    CurveMap_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = CurveMap_points_get(&iter); }
    }

    CurveMap_points_end(&iter);

    return found;
}

static PointerRNA CurveMapPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveMapPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveMapPoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapPoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMapPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveMapPoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMapPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveMapPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveMapPoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CurveMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveMapping_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapping_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveMapping_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveMapping_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int CurveMapping_tone_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (int)(data->tone);
}

RNA_EXTERN_C void CurveMapping_tone_set(PointerRNA *ptr, int value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
#ifdef __cplusplus
    data->tone = (std::remove_reference_t<decltype(data->tone)>)value;
#else
    data->tone = value;
#endif
}

RNA_EXTERN_C bool CurveMapping_use_clip_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CurveMapping_use_clip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveMapping_clip_set;
    fn(ptr, value);
}

RNA_EXTERN_C float CurveMapping_clip_min_x_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.xmin);
}

RNA_EXTERN_C void CurveMapping_clip_min_x_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipminx_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->clipr.xmin = (std::remove_reference_t<decltype(data->clipr.xmin)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->clipr.xmin = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C float CurveMapping_clip_min_y_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.ymin);
}

RNA_EXTERN_C void CurveMapping_clip_min_y_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipminy_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->clipr.ymin = (std::remove_reference_t<decltype(data->clipr.ymin)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->clipr.ymin = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C float CurveMapping_clip_max_x_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.xmax);
}

RNA_EXTERN_C void CurveMapping_clip_max_x_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipmaxx_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->clipr.xmax = (std::remove_reference_t<decltype(data->clipr.xmax)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->clipr.xmax = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C float CurveMapping_clip_max_y_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.ymax);
}

RNA_EXTERN_C void CurveMapping_clip_max_y_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipmaxy_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->clipr.ymax = (std::remove_reference_t<decltype(data->clipr.ymax)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->clipr.ymax = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C int CurveMapping_extend_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return ((data->flag) & 16);
}

RNA_EXTERN_C void CurveMapping_extend_set(PointerRNA *ptr, int value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    data->flag &= ~16;
    data->flag |= value;
}

RNA_EXTERN_C int CurveMapping_curves_length(PointerRNA *ptr)
{
    return rna_CurveMapping_curves_length(ptr);
}

static PointerRNA CurveMapping_curves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveMap, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void CurveMapping_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveMapping_curves;

    rna_CurveMapping_curves_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapping_curves_get(iter);
    }
}

RNA_EXTERN_C void CurveMapping_curves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = CurveMapping_curves_get(iter);
    }
}

RNA_EXTERN_C void CurveMapping_curves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C void CurveMapping_black_level_get(PointerRNA *ptr, float values[3])
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->black)[i]);
    }
}

RNA_EXTERN_C void CurveMapping_black_level_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_CurveMapping_black_level_set;
    fn(ptr, values);
}

RNA_EXTERN_C void CurveMapping_white_level_get(PointerRNA *ptr, float values[3])
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->white)[i]);
    }
}

RNA_EXTERN_C void CurveMapping_white_level_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_CurveMapping_white_level_set;
    fn(ptr, values);
}

static PointerRNA ColorRampElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorRampElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorRampElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorRampElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorRampElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorRampElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorRampElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorRampElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorRampElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ColorRampElement_color_get(PointerRNA *ptr, float values[4])
{
    CBData *data = (CBData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

RNA_EXTERN_C void ColorRampElement_color_set(PointerRNA *ptr, const float values[4])
{
    CBData *data = (CBData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float ColorRampElement_alpha_get(PointerRNA *ptr)
{
    CBData *data = (CBData *)(ptr->data);
    return (float)(data->a);
}

RNA_EXTERN_C void ColorRampElement_alpha_set(PointerRNA *ptr, float value)
{
    CBData *data = (CBData *)(ptr->data);
#ifdef __cplusplus
    data->a = (std::remove_reference_t<decltype(data->a)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->a = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float ColorRampElement_position_get(PointerRNA *ptr)
{
    CBData *data = (CBData *)(ptr->data);
    return (float)(data->pos);
}

RNA_EXTERN_C void ColorRampElement_position_set(PointerRNA *ptr, float value)
{
    CBData *data = (CBData *)(ptr->data);
#ifdef __cplusplus
    data->pos = (std::remove_reference_t<decltype(data->pos)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pos = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

static PointerRNA ColorRamp_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorRamp_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorRamp_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorRamp_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorRamp_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorRamp_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorRamp_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorRamp_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorRamp_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ColorRamp_elements_length(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return data->tot;
}

static PointerRNA ColorRamp_elements_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ColorRampElement, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void ColorRamp_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorRamp_elements;

    rna_iterator_array_begin(iter, data->data, sizeof(data->data[0]), data->tot, 0, nullptr);

    if (iter->valid) {
        iter->ptr = ColorRamp_elements_get(iter);
    }
}

RNA_EXTERN_C void ColorRamp_elements_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ColorRamp_elements_get(iter);
    }
}

RNA_EXTERN_C void ColorRamp_elements_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int ColorRamp_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ColorRamp_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = ColorRamp_elements_get(&iter); }
    }

    ColorRamp_elements_end(&iter);

    return found;
}

RNA_EXTERN_C int ColorRamp_interpolation_get(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return (int)(data->ipotype);
}

RNA_EXTERN_C void ColorRamp_interpolation_set(PointerRNA *ptr, int value)
{
    ColorBand *data = (ColorBand *)(ptr->data);
#ifdef __cplusplus
    data->ipotype = (std::remove_reference_t<decltype(data->ipotype)>)value;
#else
    data->ipotype = value;
#endif
}

RNA_EXTERN_C int ColorRamp_hue_interpolation_get(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return (int)(data->ipotype_hue);
}

RNA_EXTERN_C void ColorRamp_hue_interpolation_set(PointerRNA *ptr, int value)
{
    ColorBand *data = (ColorBand *)(ptr->data);
#ifdef __cplusplus
    data->ipotype_hue = (std::remove_reference_t<decltype(data->ipotype_hue)>)value;
#else
    data->ipotype_hue = value;
#endif
}

RNA_EXTERN_C int ColorRamp_color_mode_get(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return (int)(data->color_mode);
}

RNA_EXTERN_C void ColorRamp_color_mode_set(PointerRNA *ptr, int value)
{
    ColorBand *data = (ColorBand *)(ptr->data);
#ifdef __cplusplus
    data->color_mode = (std::remove_reference_t<decltype(data->color_mode)>)value;
#else
    data->color_mode = value;
#endif
}

static PointerRNA ColorRampElements_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorRampElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorRampElements_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorRampElements_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorRampElements_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorRampElements_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorRampElements_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorRampElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorRampElements_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Histogram_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Histogram_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Histogram_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Histogram_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Histogram_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Histogram_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Histogram_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Histogram_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Histogram_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int Histogram_mode_get(PointerRNA *ptr)
{
    Histogram *data = (Histogram *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void Histogram_mode_set(PointerRNA *ptr, int value)
{
    Histogram *data = (Histogram *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C bool Histogram_show_line_get(PointerRNA *ptr)
{
    Histogram *data = (Histogram *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Histogram_show_line_set(PointerRNA *ptr, bool value)
{
    Histogram *data = (Histogram *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA Scopes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Scopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Scopes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Scopes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Scopes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Scopes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Scopes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Scopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Scopes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool Scopes_use_full_resolution_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (((data->sample_full) & 1) != 0);
}

RNA_EXTERN_C void Scopes_use_full_resolution_set(PointerRNA *ptr, bool value)
{
    Scopes *data = (Scopes *)(ptr->data);
    if (value) { data->sample_full |= 1; }
    else { data->sample_full &= ~1; }
}

RNA_EXTERN_C float Scopes_accuracy_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (float)(data->accuracy);
}

RNA_EXTERN_C void Scopes_accuracy_set(PointerRNA *ptr, float value)
{
    Scopes *data = (Scopes *)(ptr->data);
#ifdef __cplusplus
    data->accuracy = (std::remove_reference_t<decltype(data->accuracy)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->accuracy = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C PointerRNA Scopes_histogram_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Histogram, &data->hist);
}

RNA_EXTERN_C int Scopes_waveform_mode_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (int)(data->wavefrm_mode);
}

RNA_EXTERN_C void Scopes_waveform_mode_set(PointerRNA *ptr, int value)
{
    Scopes *data = (Scopes *)(ptr->data);
#ifdef __cplusplus
    data->wavefrm_mode = (std::remove_reference_t<decltype(data->wavefrm_mode)>)value;
#else
    data->wavefrm_mode = value;
#endif
}

RNA_EXTERN_C float Scopes_waveform_alpha_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (float)(data->wavefrm_alpha);
}

RNA_EXTERN_C void Scopes_waveform_alpha_set(PointerRNA *ptr, float value)
{
    Scopes *data = (Scopes *)(ptr->data);
#ifdef __cplusplus
    data->wavefrm_alpha = (std::remove_reference_t<decltype(data->wavefrm_alpha)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wavefrm_alpha = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Scopes_vectorscope_alpha_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (float)(data->vecscope_alpha);
}

RNA_EXTERN_C void Scopes_vectorscope_alpha_set(PointerRNA *ptr, float value)
{
    Scopes *data = (Scopes *)(ptr->data);
#ifdef __cplusplus
    data->vecscope_alpha = (std::remove_reference_t<decltype(data->vecscope_alpha)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->vecscope_alpha = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

static PointerRNA ColorManagedDisplaySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorManagedDisplaySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedDisplaySettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedDisplaySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedDisplaySettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedDisplaySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorManagedDisplaySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorManagedDisplaySettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ColorManagedDisplaySettings_display_device_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedDisplaySettings_display_device_get;
    return fn(ptr);
}

RNA_EXTERN_C void ColorManagedDisplaySettings_display_device_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedDisplaySettings_display_device_set;
    fn(ptr, value);
}

static PointerRNA ColorManagedViewSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorManagedViewSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedViewSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedViewSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedViewSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedViewSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorManagedViewSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorManagedViewSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ColorManagedViewSettings_look_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedViewSettings_look_get;
    return fn(ptr);
}

RNA_EXTERN_C void ColorManagedViewSettings_look_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedViewSettings_look_set;
    fn(ptr, value);
}

RNA_EXTERN_C int ColorManagedViewSettings_view_transform_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedViewSettings_view_transform_get;
    return fn(ptr);
}

RNA_EXTERN_C void ColorManagedViewSettings_view_transform_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedViewSettings_view_transform_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ColorManagedViewSettings_exposure_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (float)(data->exposure);
}

RNA_EXTERN_C void ColorManagedViewSettings_exposure_set(PointerRNA *ptr, float value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
#ifdef __cplusplus
    data->exposure = (std::remove_reference_t<decltype(data->exposure)>)CLAMPIS(value, -32.0f, 32.0f);
#else
    data->exposure = CLAMPIS(value, -32.0f, 32.0f);
#endif
}

RNA_EXTERN_C float ColorManagedViewSettings_gamma_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (float)(data->gamma);
}

RNA_EXTERN_C void ColorManagedViewSettings_gamma_set(PointerRNA *ptr, float value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
#ifdef __cplusplus
    data->gamma = (std::remove_reference_t<decltype(data->gamma)>)CLAMPIS(value, 0.0f, 5.0f);
#else
    data->gamma = CLAMPIS(value, 0.0f, 5.0f);
#endif
}

RNA_EXTERN_C PointerRNA ColorManagedViewSettings_curve_mapping_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_mapping);
}

RNA_EXTERN_C bool ColorManagedViewSettings_use_curve_mapping_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ColorManagedViewSettings_use_curve_mapping_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ColorManagedViewSettings_use_curves_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool ColorManagedViewSettings_use_hdr_view_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void ColorManagedViewSettings_use_hdr_view_set(PointerRNA *ptr, bool value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA ColorManagedInputColorspaceSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorManagedInputColorspaceSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedInputColorspaceSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedInputColorspaceSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedInputColorspaceSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedInputColorspaceSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorManagedInputColorspaceSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorManagedInputColorspaceSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ColorManagedInputColorspaceSettings_name_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_get;
    return fn(ptr);
}

RNA_EXTERN_C void ColorManagedInputColorspaceSettings_name_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool ColorManagedInputColorspaceSettings_is_data_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ColorManagedColorspaceSettings_is_data_get;
    return fn(ptr);
}

RNA_EXTERN_C void ColorManagedInputColorspaceSettings_is_data_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ColorManagedColorspaceSettings_is_data_set;
    fn(ptr, value);
}

static PointerRNA ColorManagedSequencerColorspaceSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ColorManagedSequencerColorspaceSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedSequencerColorspaceSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedSequencerColorspaceSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedSequencerColorspaceSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ColorManagedSequencerColorspaceSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ColorManagedSequencerColorspaceSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ColorManagedSequencerColorspaceSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ColorManagedSequencerColorspaceSettings_name_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_get;
    return fn(ptr);
}

RNA_EXTERN_C void ColorManagedSequencerColorspaceSettings_name_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_set;
    fn(ptr, value);
}



RNA_EXTERN_C struct CurveMapPoint *CurveMapPoints_new_func(struct CurveMap *_self, float position, float value)
{
	return BKE_curvemap_insert(_self, position, value);
}

static void CurveMapPoints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMap *_self;
	float position;
	float value;
	struct CurveMapPoint *point;
	char *_data, *_retdata;
	
	_self = (struct CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 8;
	value = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = BKE_curvemap_insert(_self, position, value);
	*((struct CurveMapPoint **)_retdata) = point;
}

RNA_EXTERN_C void CurveMapPoints_remove_func(struct CurveMap *_self, ReportList *reports, struct PointerRNA *point)
{
	rna_CurveMap_remove_point(_self, reports, point);
}

static void CurveMapPoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMap *_self;
	struct PointerRNA *point;
	char *_data;
	
	_self = (struct CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((struct PointerRNA **)_data);
	
	rna_CurveMap_remove_point(_self, reports, point);
}

/* Repeated prototypes to detect errors */

struct CurveMapPoint *BKE_curvemap_insert(struct CurveMap *_self, float position, float value);
void rna_CurveMap_remove_point(struct CurveMap *_self, ReportList *reports, struct PointerRNA *point);

RNA_EXTERN_C void CurveMapping_update_func(struct CurveMapping *_self)
{
	BKE_curvemapping_changed_all(_self);
}

static void CurveMapping_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMapping *_self;
	_self = (struct CurveMapping *)_ptr->data;
	
	BKE_curvemapping_changed_all(_self);
}

RNA_EXTERN_C void CurveMapping_reset_view_func(struct CurveMapping *_self)
{
	BKE_curvemapping_reset_view(_self);
}

static void CurveMapping_reset_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMapping *_self;
	_self = (struct CurveMapping *)_ptr->data;
	
	BKE_curvemapping_reset_view(_self);
}

RNA_EXTERN_C void CurveMapping_initialize_func(struct CurveMapping *_self)
{
	rna_CurveMap_initialize(_self);
}

static void CurveMapping_initialize_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMapping *_self;
	_self = (struct CurveMapping *)_ptr->data;
	
	rna_CurveMap_initialize(_self);
}

RNA_EXTERN_C float CurveMapping_evaluate_func(struct CurveMapping *_self, ReportList *reports, struct CurveMap *curve, float position)
{
	return rna_CurveMapping_evaluateF(_self, reports, curve, position);
}

static void CurveMapping_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMapping *_self;
	struct CurveMap *curve;
	float position;
	float value;
	char *_data, *_retdata;
	
	_self = (struct CurveMapping *)_ptr->data;
	_data = (char *)_parms->data;
	curve = *((struct CurveMap **)_data);
	_data += 8;
	position = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	value = rna_CurveMapping_evaluateF(_self, reports, curve, position);
	*((float *)_retdata) = value;
}

/* Repeated prototypes to detect errors */

void BKE_curvemapping_changed_all(struct CurveMapping *_self);
void BKE_curvemapping_reset_view(struct CurveMapping *_self);
void rna_CurveMap_initialize(struct CurveMapping *_self);
float rna_CurveMapping_evaluateF(struct CurveMapping *_self, ReportList *reports, struct CurveMap *curve, float position);


RNA_EXTERN_C void ColorRamp_evaluate_func(struct ColorBand *_self, float position, float color[4])
{
	rna_ColorRamp_eval(_self, position, color);
}

static void ColorRamp_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	float position;
	float *color;
	char *_data;
	
	_self = (struct ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 8;
	color = ((float *)_data);
	
	rna_ColorRamp_eval(_self, position, color);
}

/* Repeated prototypes to detect errors */

void rna_ColorRamp_eval(struct ColorBand *_self, float position, float color[4]);

RNA_EXTERN_C struct CBData *ColorRampElements_new_func(struct ColorBand *_self, ReportList *reports, float position)
{
	return rna_ColorRampElement_new(_self, reports, position);
}

static void ColorRampElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	float position;
	struct CBData *element;
	char *_data, *_retdata;
	
	_self = (struct ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	element = rna_ColorRampElement_new(_self, reports, position);
	*((struct CBData **)_retdata) = element;
}

RNA_EXTERN_C void ColorRampElements_remove_func(struct ColorBand *_self, ReportList *reports, struct PointerRNA *element)
{
	rna_ColorRampElement_remove(_self, reports, element);
}

static void ColorRampElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	struct PointerRNA *element;
	char *_data;
	
	_self = (struct ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	element = *((struct PointerRNA **)_data);
	
	rna_ColorRampElement_remove(_self, reports, element);
}

/* Repeated prototypes to detect errors */

struct CBData *rna_ColorRampElement_new(struct ColorBand *_self, ReportList *reports, float position);
void rna_ColorRampElement_remove(struct ColorBand *_self, ReportList *reports, struct PointerRNA *element);







/* CurveMapPoint */
CollectionPropertyRNA rna_CurveMapPoint_rna_properties = {
	{(PropertyRNA *)&rna_CurveMapPoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapPoint_rna_properties_begin, CurveMapPoint_rna_properties_next, CurveMapPoint_rna_properties_end, CurveMapPoint_rna_properties_get, nullptr, nullptr, CurveMapPoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveMapPoint_rna_type = {
	{(PropertyRNA *)&rna_CurveMapPoint_location, (PropertyRNA *)&rna_CurveMapPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapPoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_CurveMapPoint_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapPoint_location = {
	{(PropertyRNA *)&rna_CurveMapPoint_handle_type, (PropertyRNA *)&rna_CurveMapPoint_rna_type,
	-1, "location", 3, 0, 0, 4, 0, "Location",
	"X/Y coordinates of the curve point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapPoint, x), (RawPropertyType)5, nullptr},
	nullptr, nullptr, CurveMapPoint_location_get, CurveMapPoint_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_CurveMapPoint_location_default
};

static const EnumPropertyItem rna_CurveMapPoint_handle_type_items[4] = {
	{0, "AUTO", 0, "Auto Handle", ""},
	{4, "AUTO_CLAMPED", 0, "Auto-Clamped Handle", ""},
	{2, "VECTOR", 0, "Vector Handle", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveMapPoint_handle_type = {
	{(PropertyRNA *)&rna_CurveMapPoint_select, (PropertyRNA *)&rna_CurveMapPoint_location,
	-1, "handle_type", 3, 0, 0, 4, 0, "Handle Type",
	"Curve interpolation at this point: Bezier or vector",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapPoint, flag), (RawPropertyType)1, nullptr},
	CurveMapPoint_handle_type_get, CurveMapPoint_handle_type_set, nullptr, nullptr, nullptr, rna_CurveMapPoint_handle_type_items, 3, 0
};

BoolPropertyRNA rna_CurveMapPoint_select = {
	{nullptr, (PropertyRNA *)&rna_CurveMapPoint_handle_type,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection state of the curve point",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapPoint_select_get, CurveMapPoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_CurveMapPoint = {
	{(ContainerRNA *)&RNA_CurveMap, (ContainerRNA *)&RNA_CollectionChild,
	nullptr,
	{(PropertyRNA *)&rna_CurveMapPoint_rna_properties, (PropertyRNA *)&rna_CurveMapPoint_select}},
	"CurveMapPoint", nullptr, nullptr, 516, nullptr, "CurveMapPoint",
	"Point of a curve used for a curve mapping",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveMapPoint_rna_properties,
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

/* CurveMap */
CollectionPropertyRNA rna_CurveMap_rna_properties = {
	{(PropertyRNA *)&rna_CurveMap_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMap_rna_properties_begin, CurveMap_rna_properties_next, CurveMap_rna_properties_end, CurveMap_rna_properties_get, nullptr, nullptr, CurveMap_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveMap_rna_type = {
	{(PropertyRNA *)&rna_CurveMap_points, (PropertyRNA *)&rna_CurveMap_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMap_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_CurveMap_points = {
	{nullptr, (PropertyRNA *)&rna_CurveMap_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_CurveMapPoints},
	CurveMap_points_begin, CurveMap_points_next, CurveMap_points_end, CurveMap_points_get, CurveMap_points_length, CurveMap_points_lookup_int, nullptr, nullptr, &RNA_CurveMapPoint
};

StructRNA RNA_CurveMap = {
	{(ContainerRNA *)&RNA_CurveMapPoints, (ContainerRNA *)&RNA_CurveMapPoint,
	nullptr,
	{(PropertyRNA *)&rna_CurveMap_rna_properties, (PropertyRNA *)&rna_CurveMap_points}},
	"CurveMap", nullptr, nullptr, 516, nullptr, "CurveMap",
	"Curve in a curve mapping",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveMap_rna_properties,
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

/* Curve Map Point */
CollectionPropertyRNA rna_CurveMapPoints_rna_properties = {
	{(PropertyRNA *)&rna_CurveMapPoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapPoints_rna_properties_begin, CurveMapPoints_rna_properties_next, CurveMapPoints_rna_properties_end, CurveMapPoints_rna_properties_get, nullptr, nullptr, CurveMapPoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveMapPoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_CurveMapPoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapPoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_CurveMapPoints_new_position = {
	{(PropertyRNA *)&rna_CurveMapPoints_new_value, nullptr,
	-1, "position", 3, 0, 1, 0, 0, "Position",
	"Position to add point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CurveMapPoints_new_value = {
	{(PropertyRNA *)&rna_CurveMapPoints_new_point, (PropertyRNA *)&rna_CurveMapPoints_new_position,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"Value of point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_CurveMapPoints_new_point = {
	{nullptr, (PropertyRNA *)&rna_CurveMapPoints_new_value,
	-1, "point", 8388608, 0, 2, 0, 0, "",
	"New point",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CurveMapPoint
};

FunctionRNA rna_CurveMapPoints_new_func = {
	{(FunctionRNA *)&rna_CurveMapPoints_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CurveMapPoints_new_position, (PropertyRNA *)&rna_CurveMapPoints_new_point}},
	"new", 0, "Add point to CurveMap",
	CurveMapPoints_new_call,
	(PropertyRNA *)&rna_CurveMapPoints_new_point
};

PointerPropertyRNA rna_CurveMapPoints_remove_point = {
	{nullptr, nullptr,
	-1, "point", 262144, 0, 5, 0, 0, "",
	"PointElement to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CurveMapPoint
};

FunctionRNA rna_CurveMapPoints_remove_func = {
	{nullptr, (FunctionRNA *)&rna_CurveMapPoints_new_func,
	nullptr,
	{(PropertyRNA *)&rna_CurveMapPoints_remove_point, (PropertyRNA *)&rna_CurveMapPoints_remove_point}},
	"remove", 16, "Delete point from CurveMap",
	CurveMapPoints_remove_call,
	nullptr
};

StructRNA RNA_CurveMapPoints = {
	{(ContainerRNA *)&RNA_CurveMapping, (ContainerRNA *)&RNA_CurveMap,
	nullptr,
	{(PropertyRNA *)&rna_CurveMapPoints_rna_properties, (PropertyRNA *)&rna_CurveMapPoints_rna_type}},
	"CurveMapPoints", nullptr, nullptr, 516, nullptr, "Curve Map Point",
	"Collection of Curve Map Points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveMapPoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CurveMapPoints_new_func, (FunctionRNA *)&rna_CurveMapPoints_remove_func}
};

/* CurveMapping */
CollectionPropertyRNA rna_CurveMapping_rna_properties = {
	{(PropertyRNA *)&rna_CurveMapping_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapping_rna_properties_begin, CurveMapping_rna_properties_next, CurveMapping_rna_properties_end, CurveMapping_rna_properties_get, nullptr, nullptr, CurveMapping_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveMapping_rna_type = {
	{(PropertyRNA *)&rna_CurveMapping_tone, (PropertyRNA *)&rna_CurveMapping_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapping_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_CurveMapping_tone_items[3] = {
	{0, "STANDARD", 0, "Standard", ""},
	{2, "FILMLIKE", 0, "Filmlike", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveMapping_tone = {
	{(PropertyRNA *)&rna_CurveMapping_use_clip, (PropertyRNA *)&rna_CurveMapping_rna_type,
	-1, "tone", 3, 0, 0, 4, 0, "Tone",
	"Tone of the curve",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CurveMapping_tone_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapping, tone), (RawPropertyType)1, nullptr},
	CurveMapping_tone_get, CurveMapping_tone_set, nullptr, nullptr, nullptr, rna_CurveMapping_tone_items, 2, 0
};

BoolPropertyRNA rna_CurveMapping_use_clip = {
	{(PropertyRNA *)&rna_CurveMapping_clip_min_x, (PropertyRNA *)&rna_CurveMapping_tone,
	-1, "use_clip", 3, 0, 0, 0, 0, "Clip",
	"Force the curve view to fit a defined boundary",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapping_use_clip_get, CurveMapping_use_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_CurveMapping_clip_min_x = {
	{(PropertyRNA *)&rna_CurveMapping_clip_min_y, (PropertyRNA *)&rna_CurveMapping_use_clip,
	-1, "clip_min_x", 3, 0, 0, 4, 0, "Clip Min X",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapping, clipr.xmin), (RawPropertyType)5, nullptr},
	CurveMapping_clip_min_x_get, CurveMapping_clip_min_x_set, nullptr, nullptr, rna_CurveMapping_clipminx_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CurveMapping_clip_min_y = {
	{(PropertyRNA *)&rna_CurveMapping_clip_max_x, (PropertyRNA *)&rna_CurveMapping_clip_min_x,
	-1, "clip_min_y", 3, 0, 0, 4, 0, "Clip Min Y",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapping, clipr.ymin), (RawPropertyType)5, nullptr},
	CurveMapping_clip_min_y_get, CurveMapping_clip_min_y_set, nullptr, nullptr, rna_CurveMapping_clipminy_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CurveMapping_clip_max_x = {
	{(PropertyRNA *)&rna_CurveMapping_clip_max_y, (PropertyRNA *)&rna_CurveMapping_clip_min_y,
	-1, "clip_max_x", 3, 0, 0, 4, 0, "Clip Max X",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapping, clipr.xmax), (RawPropertyType)5, nullptr},
	CurveMapping_clip_max_x_get, CurveMapping_clip_max_x_set, nullptr, nullptr, rna_CurveMapping_clipmaxx_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CurveMapping_clip_max_y = {
	{(PropertyRNA *)&rna_CurveMapping_extend, (PropertyRNA *)&rna_CurveMapping_clip_max_x,
	-1, "clip_max_y", 3, 0, 0, 4, 0, "Clip Max Y",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapping, clipr.ymax), (RawPropertyType)5, nullptr},
	CurveMapping_clip_max_y_get, CurveMapping_clip_max_y_set, nullptr, nullptr, rna_CurveMapping_clipmaxy_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_CurveMapping_extend_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{16, "EXTRAPOLATED", 0, "Extrapolated", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveMapping_extend = {
	{(PropertyRNA *)&rna_CurveMapping_curves, (PropertyRNA *)&rna_CurveMapping_clip_max_y,
	-1, "extend", 3, 0, 0, 4, 0, "Extend",
	"Extrapolate the curve or extend it horizontally",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CurveMapping_extend_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveMapping, flag), (RawPropertyType)0, nullptr},
	CurveMapping_extend_get, CurveMapping_extend_set, nullptr, nullptr, nullptr, rna_CurveMapping_extend_items, 2, 0
};

CollectionPropertyRNA rna_CurveMapping_curves = {
	{(PropertyRNA *)&rna_CurveMapping_black_level, (PropertyRNA *)&rna_CurveMapping_extend,
	-1, "curves", 0, 0, 0, 8, 0, "Curves",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveMapping_curves_begin, CurveMapping_curves_next, CurveMapping_curves_end, CurveMapping_curves_get, CurveMapping_curves_length, nullptr, nullptr, nullptr, &RNA_CurveMap
};

static float rna_CurveMapping_black_level_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapping_black_level = {
	{(PropertyRNA *)&rna_CurveMapping_white_level, (PropertyRNA *)&rna_CurveMapping_curves,
	-1, "black_level", 3, 0, 0, 0, 0, "Black Level",
	"For RGB curves, the color that black is mapped to",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, CurveMapping_black_level_get, CurveMapping_black_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_CurveMapping_black_level_default
};

static float rna_CurveMapping_white_level_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapping_white_level = {
	{nullptr, (PropertyRNA *)&rna_CurveMapping_black_level,
	-1, "white_level", 3, 0, 0, 0, 0, "White Level",
	"For RGB curves, the color that white is mapped to",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, CurveMapping_white_level_get, CurveMapping_white_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_CurveMapping_white_level_default
};

FunctionRNA rna_CurveMapping_update_func = {
	{(FunctionRNA *)&rna_CurveMapping_reset_view_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"update", 0, "Update curve mapping after making changes",
	CurveMapping_update_call,
	nullptr
};

FunctionRNA rna_CurveMapping_reset_view_func = {
	{(FunctionRNA *)&rna_CurveMapping_initialize_func, (FunctionRNA *)&rna_CurveMapping_update_func,
	nullptr,
	{nullptr, nullptr}},
	"reset_view", 0, "Reset the curve mapping grid to its clipping size",
	CurveMapping_reset_view_call,
	nullptr
};

FunctionRNA rna_CurveMapping_initialize_func = {
	{(FunctionRNA *)&rna_CurveMapping_evaluate_func, (FunctionRNA *)&rna_CurveMapping_reset_view_func,
	nullptr,
	{nullptr, nullptr}},
	"initialize", 0, "Initialize curve",
	CurveMapping_initialize_call,
	nullptr
};

PointerPropertyRNA rna_CurveMapping_evaluate_curve = {
	{(PropertyRNA *)&rna_CurveMapping_evaluate_position, nullptr,
	-1, "curve", 8650752, 0, 1, 0, 0, "curve",
	"Curve to evaluate",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CurveMap
};

FloatPropertyRNA rna_CurveMapping_evaluate_position = {
	{(PropertyRNA *)&rna_CurveMapping_evaluate_value, (PropertyRNA *)&rna_CurveMapping_evaluate_curve,
	-1, "position", 3, 0, 1, 0, 0, "Position",
	"Position to evaluate curve at",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CurveMapping_evaluate_value = {
	{nullptr, (PropertyRNA *)&rna_CurveMapping_evaluate_position,
	-1, "value", 3, 0, 2, 0, 0, "Value",
	"Value of curve at given location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_CurveMapping_evaluate_func = {
	{nullptr, (FunctionRNA *)&rna_CurveMapping_initialize_func,
	nullptr,
	{(PropertyRNA *)&rna_CurveMapping_evaluate_curve, (PropertyRNA *)&rna_CurveMapping_evaluate_value}},
	"evaluate", 16, "Evaluate curve at given location",
	CurveMapping_evaluate_call,
	(PropertyRNA *)&rna_CurveMapping_evaluate_value
};

StructRNA RNA_CurveMapping = {
	{(ContainerRNA *)&RNA_ColorRampElement, (ContainerRNA *)&RNA_CurveMapPoints,
	nullptr,
	{(PropertyRNA *)&rna_CurveMapping_rna_properties, (PropertyRNA *)&rna_CurveMapping_white_level}},
	"CurveMapping", nullptr, nullptr, 516, nullptr, "CurveMapping",
	"Curve mapping to map color, vector and scalar values to other values using a user defined curve",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveMapping_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CurveMapping_update_func, (FunctionRNA *)&rna_CurveMapping_evaluate_func}
};

/* Color Ramp Element */
CollectionPropertyRNA rna_ColorRampElement_rna_properties = {
	{(PropertyRNA *)&rna_ColorRampElement_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorRampElement_rna_properties_begin, ColorRampElement_rna_properties_next, ColorRampElement_rna_properties_end, ColorRampElement_rna_properties_get, nullptr, nullptr, ColorRampElement_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorRampElement_rna_type = {
	{(PropertyRNA *)&rna_ColorRampElement_color, (PropertyRNA *)&rna_ColorRampElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorRampElement_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_ColorRampElement_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorRampElement_color = {
	{(PropertyRNA *)&rna_ColorRampElement_alpha, (PropertyRNA *)&rna_ColorRampElement_rna_type,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Set color of selected color stop",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CBData, r), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ColorRampElement_color_get, ColorRampElement_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ColorRampElement_color_default
};

FloatPropertyRNA rna_ColorRampElement_alpha = {
	{(PropertyRNA *)&rna_ColorRampElement_position, (PropertyRNA *)&rna_ColorRampElement_color,
	-1, "alpha", 3, 0, 0, 4, 0, "Alpha",
	"Set alpha of selected color stop",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CBData, a), (RawPropertyType)5, nullptr},
	ColorRampElement_alpha_get, ColorRampElement_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ColorRampElement_position = {
	{nullptr, (PropertyRNA *)&rna_ColorRampElement_alpha,
	-1, "position", 3, 0, 0, 4, 0, "Position",
	"Set position of selected color stop",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CBData, pos), (RawPropertyType)5, nullptr},
	ColorRampElement_position_get, ColorRampElement_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, nullptr
};

StructRNA RNA_ColorRampElement = {
	{(ContainerRNA *)&RNA_ColorRamp, (ContainerRNA *)&RNA_CurveMapping,
	nullptr,
	{(PropertyRNA *)&rna_ColorRampElement_rna_properties, (PropertyRNA *)&rna_ColorRampElement_position}},
	"ColorRampElement", nullptr, nullptr, 516, nullptr, "Color Ramp Element",
	"Element defining a color at a position in the color ramp",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorRampElement_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorRampElement_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Color Ramp */
CollectionPropertyRNA rna_ColorRamp_rna_properties = {
	{(PropertyRNA *)&rna_ColorRamp_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorRamp_rna_properties_begin, ColorRamp_rna_properties_next, ColorRamp_rna_properties_end, ColorRamp_rna_properties_get, nullptr, nullptr, ColorRamp_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorRamp_rna_type = {
	{(PropertyRNA *)&rna_ColorRamp_elements, (PropertyRNA *)&rna_ColorRamp_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorRamp_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_ColorRamp_elements = {
	{(PropertyRNA *)&rna_ColorRamp_interpolation, (PropertyRNA *)&rna_ColorRamp_rna_type,
	-1, "elements", 0, 0, 0, 8, 0, "Elements",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {32, 0, 0}, 0,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ColorRampElements},
	ColorRamp_elements_begin, ColorRamp_elements_next, ColorRamp_elements_end, ColorRamp_elements_get, ColorRamp_elements_length, ColorRamp_elements_lookup_int, nullptr, nullptr, &RNA_ColorRampElement
};

static const EnumPropertyItem rna_ColorRamp_interpolation_items[6] = {
	{1, "EASE", 0, "Ease", ""},
	{3, "CARDINAL", 0, "Cardinal", ""},
	{0, "LINEAR", 0, "Linear", ""},
	{2, "B_SPLINE", 0, "B-Spline", ""},
	{4, "CONSTANT", 0, "Constant", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ColorRamp_interpolation = {
	{(PropertyRNA *)&rna_ColorRamp_hue_interpolation, (PropertyRNA *)&rna_ColorRamp_elements,
	-1, "interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Set interpolation between color stops",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorBand, ipotype), (RawPropertyType)2, nullptr},
	ColorRamp_interpolation_get, ColorRamp_interpolation_set, nullptr, nullptr, nullptr, rna_ColorRamp_interpolation_items, 5, 0
};

static const EnumPropertyItem rna_ColorRamp_hue_interpolation_items[5] = {
	{0, "NEAR", 0, "Near", ""},
	{1, "FAR", 0, "Far", ""},
	{2, "CW", 0, "Clockwise", ""},
	{3, "CCW", 0, "Counter-Clockwise", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ColorRamp_hue_interpolation = {
	{(PropertyRNA *)&rna_ColorRamp_color_mode, (PropertyRNA *)&rna_ColorRamp_interpolation,
	-1, "hue_interpolation", 3, 0, 0, 4, 0, "Color Interpolation",
	"Set color interpolation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorBand, ipotype_hue), (RawPropertyType)2, nullptr},
	ColorRamp_hue_interpolation_get, ColorRamp_hue_interpolation_set, nullptr, nullptr, nullptr, rna_ColorRamp_hue_interpolation_items, 4, 0
};

static const EnumPropertyItem rna_ColorRamp_color_mode_items[4] = {
	{0, "RGB", 0, "RGB", ""},
	{1, "HSV", 0, "HSV", ""},
	{2, "HSL", 0, "HSL", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ColorRamp_color_mode = {
	{nullptr, (PropertyRNA *)&rna_ColorRamp_hue_interpolation,
	-1, "color_mode", 3, 0, 0, 4, 0, "Color Mode",
	"Set color mode to use for interpolation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorBand, color_mode), (RawPropertyType)2, nullptr},
	ColorRamp_color_mode_get, ColorRamp_color_mode_set, nullptr, nullptr, nullptr, rna_ColorRamp_color_mode_items, 3, 0
};

FloatPropertyRNA rna_ColorRamp_evaluate_position = {
	{(PropertyRNA *)&rna_ColorRamp_evaluate_color, nullptr,
	-1, "position", 3, 0, 1, 0, 0, "Position",
	"Evaluate Color Ramp at position",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, nullptr
};

static float rna_ColorRamp_evaluate_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorRamp_evaluate_color = {
	{nullptr, (PropertyRNA *)&rna_ColorRamp_evaluate_position,
	-1, "color", 8388611, 0, 2, 0, 0, "Color",
	"Color at given position",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ColorRamp_evaluate_color_default
};

FunctionRNA rna_ColorRamp_evaluate_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ColorRamp_evaluate_position, (PropertyRNA *)&rna_ColorRamp_evaluate_color}},
	"evaluate", 0, "Evaluate Color Ramp",
	ColorRamp_evaluate_call,
	nullptr
};

StructRNA RNA_ColorRamp = {
	{(ContainerRNA *)&RNA_ColorRampElements, (ContainerRNA *)&RNA_ColorRampElement,
	nullptr,
	{(PropertyRNA *)&rna_ColorRamp_rna_properties, (PropertyRNA *)&rna_ColorRamp_color_mode}},
	"ColorRamp", nullptr, nullptr, 516, nullptr, "Color Ramp",
	"Color ramp mapping a scalar value to a color",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorRamp_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorRamp_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ColorRamp_evaluate_func, (FunctionRNA *)&rna_ColorRamp_evaluate_func}
};

/* Color Ramp Elements */
CollectionPropertyRNA rna_ColorRampElements_rna_properties = {
	{(PropertyRNA *)&rna_ColorRampElements_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorRampElements_rna_properties_begin, ColorRampElements_rna_properties_next, ColorRampElements_rna_properties_end, ColorRampElements_rna_properties_get, nullptr, nullptr, ColorRampElements_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorRampElements_rna_type = {
	{nullptr, (PropertyRNA *)&rna_ColorRampElements_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorRampElements_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_ColorRampElements_new_position = {
	{(PropertyRNA *)&rna_ColorRampElements_new_element, nullptr,
	-1, "position", 3, 0, 1, 0, 0, "Position",
	"Position to add element",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_ColorRampElements_new_element = {
	{nullptr, (PropertyRNA *)&rna_ColorRampElements_new_position,
	-1, "element", 8388608, 0, 2, 0, 0, "",
	"New element",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ColorRampElement
};

FunctionRNA rna_ColorRampElements_new_func = {
	{(FunctionRNA *)&rna_ColorRampElements_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ColorRampElements_new_position, (PropertyRNA *)&rna_ColorRampElements_new_element}},
	"new", 16, "Add element to Color Ramp",
	ColorRampElements_new_call,
	(PropertyRNA *)&rna_ColorRampElements_new_element
};

PointerPropertyRNA rna_ColorRampElements_remove_element = {
	{nullptr, nullptr,
	-1, "element", 262144, 0, 5, 0, 0, "",
	"Element to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ColorRampElement
};

FunctionRNA rna_ColorRampElements_remove_func = {
	{nullptr, (FunctionRNA *)&rna_ColorRampElements_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ColorRampElements_remove_element, (PropertyRNA *)&rna_ColorRampElements_remove_element}},
	"remove", 16, "Delete element from Color Ramp",
	ColorRampElements_remove_call,
	nullptr
};

StructRNA RNA_ColorRampElements = {
	{(ContainerRNA *)&RNA_Histogram, (ContainerRNA *)&RNA_ColorRamp,
	nullptr,
	{(PropertyRNA *)&rna_ColorRampElements_rna_properties, (PropertyRNA *)&rna_ColorRampElements_rna_type}},
	"ColorRampElements", nullptr, nullptr, 516, nullptr, "Color Ramp Elements",
	"Collection of Color Ramp Elements",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorRampElements_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorRampElement_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ColorRampElements_new_func, (FunctionRNA *)&rna_ColorRampElements_remove_func}
};

/* Histogram */
CollectionPropertyRNA rna_Histogram_rna_properties = {
	{(PropertyRNA *)&rna_Histogram_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Histogram_rna_properties_begin, Histogram_rna_properties_next, Histogram_rna_properties_end, Histogram_rna_properties_get, nullptr, nullptr, Histogram_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Histogram_rna_type = {
	{(PropertyRNA *)&rna_Histogram_mode, (PropertyRNA *)&rna_Histogram_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Histogram_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_Histogram_mode_items[7] = {
	{0, "LUMA", 0, "Luma", "Luma"},
	{1, "RGB", 0, "RGB", "Red Green Blue"},
	{2, "R", 0, "R", "Red"},
	{3, "G", 0, "G", "Green"},
	{4, "B", 0, "B", "Blue"},
	{5, "A", 0, "A", "Alpha"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Histogram_mode = {
	{(PropertyRNA *)&rna_Histogram_show_line, (PropertyRNA *)&rna_Histogram_rna_type,
	-1, "mode", 3, 0, 0, 4, 0, "Mode",
	"Channels to display in the histogram",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Histogram, mode), (RawPropertyType)1, nullptr},
	Histogram_mode_get, Histogram_mode_set, nullptr, nullptr, nullptr, rna_Histogram_mode_items, 6, 0
};

BoolPropertyRNA rna_Histogram_show_line = {
	{nullptr, (PropertyRNA *)&rna_Histogram_mode,
	-1, "show_line", 3, 0, 0, 0, 0, "Show Line",
	"Display lines rather than filled shapes",
	105, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Histogram_show_line_get, Histogram_show_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_Histogram = {
	{(ContainerRNA *)&RNA_Scopes, (ContainerRNA *)&RNA_ColorRampElements,
	nullptr,
	{(PropertyRNA *)&rna_Histogram_rna_properties, (PropertyRNA *)&rna_Histogram_show_line}},
	"Histogram", nullptr, nullptr, 516, nullptr, "Histogram",
	"Statistical view of the levels of color in an image",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Histogram_rna_properties,
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

/* Scopes */
CollectionPropertyRNA rna_Scopes_rna_properties = {
	{(PropertyRNA *)&rna_Scopes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Scopes_rna_properties_begin, Scopes_rna_properties_next, Scopes_rna_properties_end, Scopes_rna_properties_get, nullptr, nullptr, Scopes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Scopes_rna_type = {
	{(PropertyRNA *)&rna_Scopes_use_full_resolution, (PropertyRNA *)&rna_Scopes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Scopes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_Scopes_use_full_resolution = {
	{(PropertyRNA *)&rna_Scopes_accuracy, (PropertyRNA *)&rna_Scopes_rna_type,
	-1, "use_full_resolution", 3, 0, 0, 0, 0, "Full Sample",
	"Sample every pixel of the image",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Scopes_use_full_resolution_get, Scopes_use_full_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Scopes_accuracy = {
	{(PropertyRNA *)&rna_Scopes_histogram, (PropertyRNA *)&rna_Scopes_use_full_resolution,
	-1, "accuracy", 3, 0, 0, 4, 0, "Accuracy",
	"Proportion of original image source pixel lines to sample",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Scopes, accuracy), (RawPropertyType)5, nullptr},
	Scopes_accuracy_get, Scopes_accuracy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, nullptr
};

PointerPropertyRNA rna_Scopes_histogram = {
	{(PropertyRNA *)&rna_Scopes_waveform_mode, (PropertyRNA *)&rna_Scopes_accuracy,
	-1, "histogram", 8388608, 0, 0, 0, 0, "Histogram",
	"Histogram for viewing image statistics",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Scopes_histogram_get, nullptr, nullptr, nullptr,&RNA_Histogram
};

static const EnumPropertyItem rna_Scopes_waveform_mode_items[7] = {
	{0, "LUMA", 54, "Luma", ""},
	{1, "PARADE", 54, "Parade", ""},
	{2, "YCBCR601", 54, "YCbCr (ITU 601)", ""},
	{3, "YCBCR709", 54, "YCbCr (ITU 709)", ""},
	{4, "YCBCRJPG", 54, "YCbCr (JPEG)", ""},
	{5, "RGB", 54, "Red Green Blue", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Scopes_waveform_mode = {
	{(PropertyRNA *)&rna_Scopes_waveform_alpha, (PropertyRNA *)&rna_Scopes_histogram,
	-1, "waveform_mode", 3, 0, 0, 4, 0, "Waveform Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Scopes, wavefrm_mode), (RawPropertyType)0, nullptr},
	Scopes_waveform_mode_get, Scopes_waveform_mode_set, nullptr, nullptr, nullptr, rna_Scopes_waveform_mode_items, 6, 0
};

FloatPropertyRNA rna_Scopes_waveform_alpha = {
	{(PropertyRNA *)&rna_Scopes_vectorscope_alpha, (PropertyRNA *)&rna_Scopes_waveform_mode,
	-1, "waveform_alpha", 3, 0, 0, 4, 0, "Waveform Opacity",
	"Opacity of the points",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Scopes, wavefrm_alpha), (RawPropertyType)5, nullptr},
	Scopes_waveform_alpha_get, Scopes_waveform_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Scopes_vectorscope_alpha = {
	{nullptr, (PropertyRNA *)&rna_Scopes_waveform_alpha,
	-1, "vectorscope_alpha", 3, 0, 0, 4, 0, "Vectorscope Opacity",
	"Opacity of the points",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Scopes, vecscope_alpha), (RawPropertyType)5, nullptr},
	Scopes_vectorscope_alpha_get, Scopes_vectorscope_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_Scopes = {
	{(ContainerRNA *)&RNA_ColorManagedDisplaySettings, (ContainerRNA *)&RNA_Histogram,
	nullptr,
	{(PropertyRNA *)&rna_Scopes_rna_properties, (PropertyRNA *)&rna_Scopes_vectorscope_alpha}},
	"Scopes", nullptr, nullptr, 516, nullptr, "Scopes",
	"Scopes for statistical view of an image",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Scopes_rna_properties,
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

/* ColorManagedDisplaySettings */
CollectionPropertyRNA rna_ColorManagedDisplaySettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedDisplaySettings_rna_properties_begin, ColorManagedDisplaySettings_rna_properties_next, ColorManagedDisplaySettings_rna_properties_end, ColorManagedDisplaySettings_rna_properties_get, nullptr, nullptr, ColorManagedDisplaySettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedDisplaySettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedDisplaySettings_display_device, (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedDisplaySettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_ColorManagedDisplaySettings_display_device_items[2] = {
	{0, "NONE", 0, "None", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ColorManagedDisplaySettings_display_device = {
	{nullptr, (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_type,
	-1, "display_device", 3, 0, 0, 0, 0, "Display Device",
	"Display device name",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_ColorManagedDisplaySettings_display_device_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedDisplaySettings_display_device_get, ColorManagedDisplaySettings_display_device_set, rna_ColorManagedDisplaySettings_display_device_itemf, nullptr, nullptr, rna_ColorManagedDisplaySettings_display_device_items, 1, 0
};

StructRNA RNA_ColorManagedDisplaySettings = {
	{(ContainerRNA *)&RNA_ColorManagedViewSettings, (ContainerRNA *)&RNA_Scopes,
	nullptr,
	{(PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties, (PropertyRNA *)&rna_ColorManagedDisplaySettings_display_device}},
	"ColorManagedDisplaySettings", nullptr, nullptr, 516, nullptr, "ColorManagedDisplaySettings",
	"Color management specific to display device",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorManagedDisplaySettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* ColorManagedViewSettings */
CollectionPropertyRNA rna_ColorManagedViewSettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_rna_properties_begin, ColorManagedViewSettings_rna_properties_next, ColorManagedViewSettings_rna_properties_end, ColorManagedViewSettings_rna_properties_get, nullptr, nullptr, ColorManagedViewSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedViewSettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_look, (PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_ColorManagedViewSettings_look_items[2] = {
	{0, "NONE", 0, "None", "Do not modify image in an artistic manner"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ColorManagedViewSettings_look = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_view_transform, (PropertyRNA *)&rna_ColorManagedViewSettings_rna_type,
	-1, "look", 3, 0, 0, 0, 0, "Look",
	"Additional transform applied before view transform for artistic needs",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_look_get, ColorManagedViewSettings_look_set, rna_ColorManagedViewSettings_look_itemf, nullptr, nullptr, rna_ColorManagedViewSettings_look_items, 1, 0
};

static const EnumPropertyItem rna_ColorManagedViewSettings_view_transform_items[2] = {
	{0, "NONE", 0, "None", "Do not perform any color transform on display, use old non-color managed technique for display"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ColorManagedViewSettings_view_transform = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_exposure, (PropertyRNA *)&rna_ColorManagedViewSettings_look,
	-1, "view_transform", 3, 0, 0, 0, 0, "View Transform",
	"View used when converting image to a display space",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_view_transform_get, ColorManagedViewSettings_view_transform_set, rna_ColorManagedViewSettings_view_transform_itemf, nullptr, nullptr, rna_ColorManagedViewSettings_view_transform_items, 1, 0
};

FloatPropertyRNA rna_ColorManagedViewSettings_exposure = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_gamma, (PropertyRNA *)&rna_ColorManagedViewSettings_view_transform,
	-1, "exposure", 3, 0, 0, 4, 0, "Exposure",
	"Exposure (stops) applied before display transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorManagedViewSettings, exposure), (RawPropertyType)5, nullptr},
	ColorManagedViewSettings_exposure_get, ColorManagedViewSettings_exposure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -32.0f, 32.0f, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ColorManagedViewSettings_gamma = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_curve_mapping, (PropertyRNA *)&rna_ColorManagedViewSettings_exposure,
	-1, "gamma", 3, 0, 0, 4, 0, "Gamma",
	"Amount of gamma modification applied after display transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorManagedViewSettings, gamma), (RawPropertyType)5, nullptr},
	ColorManagedViewSettings_gamma_get, ColorManagedViewSettings_gamma_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 1.0f, nullptr
};

PointerPropertyRNA rna_ColorManagedViewSettings_curve_mapping = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_use_curve_mapping, (PropertyRNA *)&rna_ColorManagedViewSettings_gamma,
	-1, "curve_mapping", 8388608, 0, 0, 0, 0, "Curve",
	"Color curve mapping applied before display transform",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_curve_mapping_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

BoolPropertyRNA rna_ColorManagedViewSettings_use_curve_mapping = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_use_hdr_view, (PropertyRNA *)&rna_ColorManagedViewSettings_curve_mapping,
	-1, "use_curve_mapping", 3, 0, 0, 0, 0, "Use Curves",
	"Use RGB curved for pre-display transformation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_use_curve_mapping_get, ColorManagedViewSettings_use_curve_mapping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ColorManagedViewSettings_use_hdr_view = {
	{nullptr, (PropertyRNA *)&rna_ColorManagedViewSettings_use_curve_mapping,
	-1, "use_hdr_view", 3, 0, 0, 0, 0, "High Dynamic Range",
	"Enable high dynamic range display in rendered viewport, uncapping display brightness. This requires a monitor with HDR support and a view transform designed for HDR. \'Filmic\' and \'AgX\' do not generate HDR colors",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagedColorspaceSettings_reload_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedViewSettings_use_hdr_view_get, ColorManagedViewSettings_use_hdr_view_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ColorManagedViewSettings = {
	{(ContainerRNA *)&RNA_ColorManagedInputColorspaceSettings, (ContainerRNA *)&RNA_ColorManagedDisplaySettings,
	nullptr,
	{(PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties, (PropertyRNA *)&rna_ColorManagedViewSettings_use_hdr_view}},
	"ColorManagedViewSettings", nullptr, nullptr, 516, nullptr, "ColorManagedViewSettings",
	"Color management settings used for displaying images on the display",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorManagedViewSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* ColorManagedInputColorspaceSettings */
CollectionPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedInputColorspaceSettings_rna_properties_begin, ColorManagedInputColorspaceSettings_rna_properties_next, ColorManagedInputColorspaceSettings_rna_properties_end, ColorManagedInputColorspaceSettings_rna_properties_get, nullptr, nullptr, ColorManagedInputColorspaceSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_name, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedInputColorspaceSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_ColorManagedInputColorspaceSettings_name = {
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_is_data, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_type,
	-1, "name", 16777217, 0, 0, 0, 0, "Input Color Space",
	"Color space in the image file, to convert to and from when saving and loading the image",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagedColorspaceSettings_reload_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedInputColorspaceSettings_name_get, ColorManagedInputColorspaceSettings_name_set, rna_ColorManagedColorspaceSettings_colorspace_itemf, nullptr, nullptr, rna_enum_color_space_convert_default_items, 1, 0
};

BoolPropertyRNA rna_ColorManagedInputColorspaceSettings_is_data = {
	{nullptr, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_name,
	-1, "is_data", 1, 0, 0, 0, 0, "Is Data",
	"Treat image as non-color data without color management, like normal or displacement maps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedInputColorspaceSettings_is_data_get, ColorManagedInputColorspaceSettings_is_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ColorManagedInputColorspaceSettings = {
	{(ContainerRNA *)&RNA_ColorManagedSequencerColorspaceSettings, (ContainerRNA *)&RNA_ColorManagedViewSettings,
	nullptr,
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_is_data}},
	"ColorManagedInputColorspaceSettings", nullptr, nullptr, 516, nullptr, "ColorManagedInputColorspaceSettings",
	"Input color space settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorManagedInputColorspaceSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* ColorManagedSequencerColorspaceSettings */
CollectionPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedSequencerColorspaceSettings_rna_properties_begin, ColorManagedSequencerColorspaceSettings_rna_properties_next, ColorManagedSequencerColorspaceSettings_rna_properties_end, ColorManagedSequencerColorspaceSettings_rna_properties_get, nullptr, nullptr, ColorManagedSequencerColorspaceSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_name, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedSequencerColorspaceSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_ColorManagedSequencerColorspaceSettings_name = {
	{nullptr, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_type,
	-1, "name", 16777219, 0, 0, 0, 0, "Color Space",
	"Color space that the sequencer operates in",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ColorManagedColorspaceSettings_reload_update, 33554432, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ColorManagedSequencerColorspaceSettings_name_get, ColorManagedSequencerColorspaceSettings_name_set, rna_ColorManagedColorspaceSettings_colorspace_itemf, nullptr, nullptr, rna_enum_color_space_convert_default_items, 1, 0
};

StructRNA RNA_ColorManagedSequencerColorspaceSettings = {
	{(ContainerRNA *)&RNA_Constraint, (ContainerRNA *)&RNA_ColorManagedInputColorspaceSettings,
	nullptr,
	{(PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_name}},
	"ColorManagedSequencerColorspaceSettings", nullptr, nullptr, 516, nullptr, "ColorManagedSequencerColorspaceSettings",
	"Input color space settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ColorManagedSequencerColorspaceSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

