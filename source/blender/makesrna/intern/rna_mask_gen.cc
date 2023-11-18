
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

#include "rna_mask.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_MaskParent_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskParent_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MaskParent_id;
RNA_EXTERN_C EnumPropertyRNA rna_MaskParent_id_type;
RNA_EXTERN_C EnumPropertyRNA rna_MaskParent_type;
RNA_EXTERN_C StringPropertyRNA rna_MaskParent_parent;
RNA_EXTERN_C StringPropertyRNA rna_MaskParent_sub_parent;


RNA_EXTERN_C CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplinePointUW_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MaskSplinePointUW_u;
RNA_EXTERN_C FloatPropertyRNA rna_MaskSplinePointUW_weight;
RNA_EXTERN_C BoolPropertyRNA rna_MaskSplinePointUW_select;


RNA_EXTERN_C CollectionPropertyRNA rna_MaskSplinePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplinePoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MaskSplinePoint_handle_left;
RNA_EXTERN_C FloatPropertyRNA rna_MaskSplinePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_MaskSplinePoint_handle_right;
RNA_EXTERN_C EnumPropertyRNA rna_MaskSplinePoint_handle_type;
RNA_EXTERN_C EnumPropertyRNA rna_MaskSplinePoint_handle_left_type;
RNA_EXTERN_C EnumPropertyRNA rna_MaskSplinePoint_handle_right_type;
RNA_EXTERN_C FloatPropertyRNA rna_MaskSplinePoint_weight;
RNA_EXTERN_C BoolPropertyRNA rna_MaskSplinePoint_select;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplinePoint_parent;
RNA_EXTERN_C CollectionPropertyRNA rna_MaskSplinePoint_feather_points;


RNA_EXTERN_C CollectionPropertyRNA rna_MaskSpline_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSpline_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_MaskSpline_offset_mode;
RNA_EXTERN_C EnumPropertyRNA rna_MaskSpline_weight_interpolation;
RNA_EXTERN_C BoolPropertyRNA rna_MaskSpline_use_cyclic;
RNA_EXTERN_C BoolPropertyRNA rna_MaskSpline_use_fill;
RNA_EXTERN_C BoolPropertyRNA rna_MaskSpline_use_self_intersection_check;
RNA_EXTERN_C CollectionPropertyRNA rna_MaskSpline_points;


RNA_EXTERN_C CollectionPropertyRNA rna_MaskSplines_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplines_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplines_active;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplines_active_point;

extern FunctionRNA rna_MaskSplines_new_func;
extern PointerPropertyRNA rna_MaskSplines_new_spline;

extern FunctionRNA rna_MaskSplines_remove_func;
extern PointerPropertyRNA rna_MaskSplines_remove_spline;



RNA_EXTERN_C CollectionPropertyRNA rna_MaskSplinePoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskSplinePoints_rna_type;

extern FunctionRNA rna_MaskSplinePoints_add_func;
extern IntPropertyRNA rna_MaskSplinePoints_add_count;

extern FunctionRNA rna_MaskSplinePoints_remove_func;
extern PointerPropertyRNA rna_MaskSplinePoints_remove_point;



RNA_EXTERN_C CollectionPropertyRNA rna_MaskLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_MaskLayer_name;
RNA_EXTERN_C CollectionPropertyRNA rna_MaskLayer_splines;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_hide;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_hide_select;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_hide_render;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_select;
RNA_EXTERN_C FloatPropertyRNA rna_MaskLayer_alpha;
RNA_EXTERN_C EnumPropertyRNA rna_MaskLayer_blend;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_invert;
RNA_EXTERN_C EnumPropertyRNA rna_MaskLayer_falloff;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_use_fill_holes;
RNA_EXTERN_C BoolPropertyRNA rna_MaskLayer_use_fill_overlap;


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

RNA_EXTERN_C CollectionPropertyRNA rna_Mask_layers;
RNA_EXTERN_C IntPropertyRNA rna_Mask_active_layer_index;
RNA_EXTERN_C IntPropertyRNA rna_Mask_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_Mask_frame_end;
RNA_EXTERN_C PointerPropertyRNA rna_Mask_animation_data;

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



RNA_EXTERN_C CollectionPropertyRNA rna_MaskLayers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaskLayers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MaskLayers_active;

extern FunctionRNA rna_MaskLayers_new_func;
extern StringPropertyRNA rna_MaskLayers_new_name;
extern PointerPropertyRNA rna_MaskLayers_new_layer;

extern FunctionRNA rna_MaskLayers_remove_func;
extern PointerPropertyRNA rna_MaskLayers_remove_layer;

extern FunctionRNA rna_MaskLayers_clear_func;

static PointerRNA MaskParent_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskParent_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskParent_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskParent_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskParent_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskParent_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskParent_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskParent_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskParent_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MaskParent_id_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

RNA_EXTERN_C void MaskParent_id_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaskParent_id_set(ptr, value, reports);
}

RNA_EXTERN_C int MaskParent_id_type_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return (int)(data->id_type);
}

RNA_EXTERN_C void MaskParent_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskParent_id_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MaskParent_type_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void MaskParent_type_set(PointerRNA *ptr, int value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C void MaskParent_parent_get(PointerRNA *ptr, char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_assert(strlen(data->parent) < 64);
    strcpy(value, data->parent);
}

RNA_EXTERN_C int MaskParent_parent_length(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return strlen(data->parent);
}

RNA_EXTERN_C void MaskParent_parent_set(PointerRNA *ptr, const char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(data->parent, value, 64);
}

RNA_EXTERN_C void MaskParent_sub_parent_get(PointerRNA *ptr, char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_assert(strlen(data->sub_parent) < 64);
    strcpy(value, data->sub_parent);
}

RNA_EXTERN_C int MaskParent_sub_parent_length(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return strlen(data->sub_parent);
}

RNA_EXTERN_C void MaskParent_sub_parent_set(PointerRNA *ptr, const char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(data->sub_parent, value, 64);
}

static PointerRNA MaskSplinePointUW_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskSplinePointUW_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePointUW_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePointUW_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskSplinePointUW_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskSplinePointUW_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float MaskSplinePointUW_u_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (float)(data->u);
}

RNA_EXTERN_C void MaskSplinePointUW_u_set(PointerRNA *ptr, float value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
#ifdef __cplusplus
    data->u = (std::remove_reference_t<decltype(data->u)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->u = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MaskSplinePointUW_weight_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (float)(data->w);
}

RNA_EXTERN_C void MaskSplinePointUW_weight_set(PointerRNA *ptr, float value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
#ifdef __cplusplus
    data->w = (std::remove_reference_t<decltype(data->w)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->w = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool MaskSplinePointUW_select_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MaskSplinePointUW_select_set(PointerRNA *ptr, bool value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA MaskSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskSplinePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MaskSplinePoint_handle_left_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MaskSplinePoint_handle1_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MaskSplinePoint_handle_left_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MaskSplinePoint_handle1_set;
    fn(ptr, values);
}

RNA_EXTERN_C void MaskSplinePoint_co_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MaskSplinePoint_ctrlpoint_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MaskSplinePoint_co_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MaskSplinePoint_ctrlpoint_set;
    fn(ptr, values);
}

RNA_EXTERN_C void MaskSplinePoint_handle_right_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MaskSplinePoint_handle2_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MaskSplinePoint_handle_right_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MaskSplinePoint_handle2_set;
    fn(ptr, values);
}

RNA_EXTERN_C int MaskSplinePoint_handle_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaskSplinePoint_handle_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void MaskSplinePoint_handle_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskSplinePoint_handle_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MaskSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaskSplinePoint_handle_left_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void MaskSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskSplinePoint_handle_left_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MaskSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaskSplinePoint_handle_right_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void MaskSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaskSplinePoint_handle_right_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C float MaskSplinePoint_weight_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (float)(data->bezt.weight);
}

RNA_EXTERN_C void MaskSplinePoint_weight_set(PointerRNA *ptr, float value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
#ifdef __cplusplus
    data->bezt.weight = (std::remove_reference_t<decltype(data->bezt.weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->bezt.weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool MaskSplinePoint_select_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (((data->bezt.f1) & 1) != 0);
}

RNA_EXTERN_C void MaskSplinePoint_select_set(PointerRNA *ptr, bool value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    if (value) { data->bezt.f1 |= 1; }
    else { data->bezt.f1 &= ~1; }
}

RNA_EXTERN_C PointerRNA MaskSplinePoint_parent_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MaskParent, &data->parent);
}

RNA_EXTERN_C int MaskSplinePoint_feather_points_length(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (data->uw == nullptr) ? 0 : data->tot_uw;
}

static PointerRNA MaskSplinePoint_feather_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSplinePointUW, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MaskSplinePoint_feather_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePoint_feather_points;

    rna_iterator_array_begin(iter, data->uw, sizeof(data->uw[0]), data->tot_uw, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_feather_points_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePoint_feather_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_feather_points_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePoint_feather_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MaskSplinePoint_feather_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MaskSplinePoint_feather_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = MaskSplinePoint_feather_points_get(&iter); }
    }

    MaskSplinePoint_feather_points_end(&iter);

    return found;
}

static PointerRNA MaskSpline_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskSpline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSpline_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSpline_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSpline_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSpline_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSpline_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskSpline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskSpline_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MaskSpline_offset_mode_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (int)(data->offset_mode);
}

RNA_EXTERN_C void MaskSpline_offset_mode_set(PointerRNA *ptr, int value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
#ifdef __cplusplus
    data->offset_mode = (std::remove_reference_t<decltype(data->offset_mode)>)value;
#else
    data->offset_mode = value;
#endif
}

RNA_EXTERN_C int MaskSpline_weight_interpolation_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (int)(data->weight_interp);
}

RNA_EXTERN_C void MaskSpline_weight_interpolation_set(PointerRNA *ptr, int value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
#ifdef __cplusplus
    data->weight_interp = (std::remove_reference_t<decltype(data->weight_interp)>)value;
#else
    data->weight_interp = value;
#endif
}

RNA_EXTERN_C bool MaskSpline_use_cyclic_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MaskSpline_use_cyclic_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool MaskSpline_use_fill_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return !(((data->flag) & 4) != 0);
}

RNA_EXTERN_C void MaskSpline_use_fill_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (!value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool MaskSpline_use_self_intersection_check_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void MaskSpline_use_self_intersection_check_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C int MaskSpline_points_length(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (data->points == nullptr) ? 0 : data->tot_point;
}

static PointerRNA MaskSpline_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSplinePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MaskSpline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSpline_points;

    rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->tot_point, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MaskSpline_points_get(iter);
    }
}

RNA_EXTERN_C void MaskSpline_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSpline_points_get(iter);
    }
}

RNA_EXTERN_C void MaskSpline_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MaskSpline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MaskSpline_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = MaskSpline_points_get(&iter); }
    }

    MaskSpline_points_end(&iter);

    return found;
}

static PointerRNA MaskSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplines_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplines_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplines_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskSplines_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MaskSplines_active_get(PointerRNA *ptr)
{
    return rna_MaskLayer_active_spline_get(ptr);
}

RNA_EXTERN_C void MaskSplines_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaskLayer_active_spline_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA MaskSplines_active_point_get(PointerRNA *ptr)
{
    return rna_MaskLayer_active_spline_point_get(ptr);
}

RNA_EXTERN_C void MaskSplines_active_point_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaskLayer_active_spline_point_set(ptr, value, reports);
}

static PointerRNA MaskSplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskSplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskSplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskSplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskSplinePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MaskLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MaskLayer_name_get(PointerRNA *ptr, char *value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MaskLayer_name_length(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MaskLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MaskLayer_name_set(ptr, value);
}

static PointerRNA MaskLayer_splines_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSpline, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MaskLayer_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskLayer_splines;

    rna_MaskLayer_splines_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayer_splines_get(iter);
    }
}

RNA_EXTERN_C void MaskLayer_splines_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MaskLayer_splines_get(iter);
    }
}

RNA_EXTERN_C void MaskLayer_splines_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskLayer_splines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MaskLayer_splines_begin(&iter, ptr);

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
        if (found) { *r_ptr = MaskLayer_splines_get(&iter); }
    }

    MaskLayer_splines_end(&iter);

    return found;
}

RNA_EXTERN_C bool MaskLayer_hide_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->visibility_flag) & 1) != 0);
}

RNA_EXTERN_C void MaskLayer_hide_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag |= 1; }
    else { data->visibility_flag &= ~1; }
}

RNA_EXTERN_C bool MaskLayer_hide_select_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->visibility_flag) & 2) != 0);
}

RNA_EXTERN_C void MaskLayer_hide_select_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag |= 2; }
    else { data->visibility_flag &= ~2; }
}

RNA_EXTERN_C bool MaskLayer_hide_render_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->visibility_flag) & 4) != 0);
}

RNA_EXTERN_C void MaskLayer_hide_render_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag |= 4; }
    else { data->visibility_flag &= ~4; }
}

RNA_EXTERN_C bool MaskLayer_select_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void MaskLayer_select_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C float MaskLayer_alpha_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (float)(data->alpha);
}

RNA_EXTERN_C void MaskLayer_alpha_set(PointerRNA *ptr, float value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
#ifdef __cplusplus
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)value;
#else
    data->alpha = value;
#endif
}

RNA_EXTERN_C int MaskLayer_blend_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->blend);
}

RNA_EXTERN_C void MaskLayer_blend_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
#ifdef __cplusplus
    data->blend = (std::remove_reference_t<decltype(data->blend)>)value;
#else
    data->blend = value;
#endif
}

RNA_EXTERN_C bool MaskLayer_invert_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->blend_flag) & 1) != 0);
}

RNA_EXTERN_C void MaskLayer_invert_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->blend_flag |= 1; }
    else { data->blend_flag &= ~1; }
}

RNA_EXTERN_C int MaskLayer_falloff_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->falloff);
}

RNA_EXTERN_C void MaskLayer_falloff_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
#ifdef __cplusplus
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)value;
#else
    data->falloff = value;
#endif
}

RNA_EXTERN_C bool MaskLayer_use_fill_holes_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

RNA_EXTERN_C void MaskLayer_use_fill_holes_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool MaskLayer_use_fill_overlap_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void MaskLayer_use_fill_overlap_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

static PointerRNA Mask_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskLayer, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mask_layers;

    rna_Mask_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mask_layers_get(iter);
    }
}

RNA_EXTERN_C void Mask_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Mask_layers_get(iter);
    }
}

RNA_EXTERN_C void Mask_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Mask_active_layer_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mask_layer_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Mask_active_layer_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mask_layer_active_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Mask_frame_start_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return (int)(data->sfra);
}

RNA_EXTERN_C void Mask_frame_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mask_start_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Mask_frame_end_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return (int)(data->efra);
}

RNA_EXTERN_C void Mask_frame_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mask_end_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA Mask_animation_data_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MaskLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaskLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaskLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaskLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaskLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MaskLayers_active_get(PointerRNA *ptr)
{
    return rna_Mask_layer_active_get(ptr);
}

RNA_EXTERN_C void MaskLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mask_layer_active_set(ptr, value, reports);
}





RNA_EXTERN_C struct MaskSpline *MaskSplines_new_func(struct ID *_selfid, struct MaskLayer *_self)
{
	return rna_MaskLayer_spline_new(_selfid, _self);
}

static void MaskSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskLayer *_self;
	struct MaskSpline *spline;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	spline = rna_MaskLayer_spline_new(_selfid, _self);
	*((struct MaskSpline **)_retdata) = spline;
}

RNA_EXTERN_C void MaskSplines_remove_func(struct ID *_selfid, struct MaskLayer *_self, ReportList *reports, struct PointerRNA *spline)
{
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

static void MaskSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskLayer *_self;
	struct PointerRNA *spline;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((struct PointerRNA **)_data);
	
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

/* Repeated prototypes to detect errors */

struct MaskSpline *rna_MaskLayer_spline_new(struct ID *_selfid, struct MaskLayer *_self);
void rna_MaskLayer_spline_remove(struct ID *_selfid, struct MaskLayer *_self, ReportList *reports, struct PointerRNA *spline);

RNA_EXTERN_C void MaskSplinePoints_add_func(struct ID *_selfid, struct MaskSpline *_self, int count)
{
	rna_MaskSpline_points_add(_selfid, _self, count);
}

static void MaskSplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskSpline *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_MaskSpline_points_add(_selfid, _self, count);
}

RNA_EXTERN_C void MaskSplinePoints_remove_func(struct ID *_selfid, struct MaskSpline *_self, ReportList *reports, struct PointerRNA *point)
{
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

static void MaskSplinePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskSpline *_self;
	struct PointerRNA *point;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((struct PointerRNA **)_data);
	
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

/* Repeated prototypes to detect errors */

void rna_MaskSpline_points_add(struct ID *_selfid, struct MaskSpline *_self, int count);
void rna_MaskSpline_point_remove(struct ID *_selfid, struct MaskSpline *_self, ReportList *reports, struct PointerRNA *point);



RNA_EXTERN_C struct MaskLayer *MaskLayers_new_func(struct Mask *_self, const char * name)
{
	return rna_Mask_layers_new(_self, name);
}

static void MaskLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	const char * name;
	struct MaskLayer *layer;
	char *_data, *_retdata;
	
	_self = (struct Mask *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mask_layers_new(_self, name);
	*((struct MaskLayer **)_retdata) = layer;
}

RNA_EXTERN_C void MaskLayers_remove_func(struct Mask *_self, ReportList *reports, struct PointerRNA *layer)
{
	rna_Mask_layers_remove(_self, reports, layer);
}

static void MaskLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct Mask *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_Mask_layers_remove(_self, reports, layer);
}

RNA_EXTERN_C void MaskLayers_clear_func(struct Mask *_self)
{
	rna_Mask_layers_clear(_self);
}

static void MaskLayers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	_self = (struct Mask *)_ptr->data;
	
	rna_Mask_layers_clear(_self);
}

/* Repeated prototypes to detect errors */

struct MaskLayer *rna_Mask_layers_new(struct Mask *_self, const char * name);
void rna_Mask_layers_remove(struct Mask *_self, ReportList *reports, struct PointerRNA *layer);
void rna_Mask_layers_clear(struct Mask *_self);

/* Mask Parent */
CollectionPropertyRNA rna_MaskParent_rna_properties = {
	{(PropertyRNA *)&rna_MaskParent_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskParent_rna_properties_begin, MaskParent_rna_properties_next, MaskParent_rna_properties_end, MaskParent_rna_properties_get, nullptr, nullptr, MaskParent_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskParent_rna_type = {
	{(PropertyRNA *)&rna_MaskParent_id, (PropertyRNA *)&rna_MaskParent_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskParent_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MaskParent_id = {
	{(PropertyRNA *)&rna_MaskParent_id_type, (PropertyRNA *)&rna_MaskParent_rna_type,
	-1, "id", 8388801, 0, 0, 0, 0, "ID",
	"ID-block to which masking element would be parented to or to its property",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskParent_id_get, MaskParent_id_set, rna_MaskParent_id_typef, nullptr,&RNA_ID
};

static const EnumPropertyItem rna_MaskParent_id_type_items[2] = {
	{17229, "MOVIECLIP", 111, "Movie Clip", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskParent_id_type = {
	{(PropertyRNA *)&rna_MaskParent_type, (PropertyRNA *)&rna_MaskParent_id,
	-1, "id_type", 3, 0, 0, 0, 0, "ID Type",
	"Type of ID-block that can be used",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskParent_id_type_get, MaskParent_id_type_set, nullptr, nullptr, nullptr, rna_MaskParent_id_type_items, 1, 17229
};

static const EnumPropertyItem rna_MaskParent_type_items[3] = {
	{0, "POINT_TRACK", 0, "Point Track", ""},
	{1, "PLANE_TRACK", 0, "Plane Track", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskParent_type = {
	{(PropertyRNA *)&rna_MaskParent_parent, (PropertyRNA *)&rna_MaskParent_id_type,
	-1, "type", 3, 0, 0, 4, 0, "Parent Type",
	"Parent Type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskParent, type), (RawPropertyType)0, nullptr},
	MaskParent_type_get, MaskParent_type_set, nullptr, nullptr, nullptr, rna_MaskParent_type_items, 2, 0
};

StringPropertyRNA rna_MaskParent_parent = {
	{(PropertyRNA *)&rna_MaskParent_sub_parent, (PropertyRNA *)&rna_MaskParent_type,
	-1, "parent", 262145, 0, 0, 0, 0, "Parent",
	"Name of parent object in specified data-block to which parenting happens",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Mask_update_parent, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskParent_parent_get, MaskParent_parent_length, MaskParent_parent_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_MaskParent_sub_parent = {
	{nullptr, (PropertyRNA *)&rna_MaskParent_parent,
	-1, "sub_parent", 262145, 0, 0, 0, 0, "Sub Parent",
	"Name of parent sub-object in specified data-block to which parenting happens",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Mask_update_parent, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskParent_sub_parent_get, MaskParent_sub_parent_length, MaskParent_sub_parent_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StructRNA RNA_MaskParent = {
	{(ContainerRNA *)&RNA_MaskSplinePointUW, (ContainerRNA *)&RNA_MovieTrackingObjects,
	nullptr,
	{(PropertyRNA *)&rna_MaskParent_rna_properties, (PropertyRNA *)&rna_MaskParent_sub_parent}},
	"MaskParent", nullptr, nullptr, 516, nullptr, "Mask Parent",
	"Parenting settings for masking element",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskParent_rna_properties,
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

/* Mask Spline UW Point */
CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePointUW_rna_properties_begin, MaskSplinePointUW_rna_properties_next, MaskSplinePointUW_rna_properties_end, MaskSplinePointUW_rna_properties_get, nullptr, nullptr, MaskSplinePointUW_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePointUW_rna_type = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_u, (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePointUW_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_MaskSplinePointUW_u = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_weight, (PropertyRNA *)&rna_MaskSplinePointUW_rna_type,
	-1, "u", 3, 0, 0, 4, 0, "U",
	"U coordinate of point along spline segment",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSplinePointUW, u), (RawPropertyType)5, nullptr},
	MaskSplinePointUW_u_get, MaskSplinePointUW_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MaskSplinePointUW_weight = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_select, (PropertyRNA *)&rna_MaskSplinePointUW_u,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Weight of feather point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSplinePointUW, w), (RawPropertyType)5, nullptr},
	MaskSplinePointUW_weight_get, MaskSplinePointUW_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_MaskSplinePointUW_select = {
	{nullptr, (PropertyRNA *)&rna_MaskSplinePointUW_weight,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePointUW_select_get, MaskSplinePointUW_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MaskSplinePointUW = {
	{(ContainerRNA *)&RNA_MaskSplinePoint, (ContainerRNA *)&RNA_MaskParent,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplinePointUW_rna_properties, (PropertyRNA *)&rna_MaskSplinePointUW_select}},
	"MaskSplinePointUW", nullptr, nullptr, 516, nullptr, "Mask Spline UW Point",
	"Single point in spline segment defining feather",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties,
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

/* Mask Spline Point */
CollectionPropertyRNA rna_MaskSplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_rna_properties_begin, MaskSplinePoint_rna_properties_next, MaskSplinePoint_rna_properties_end, MaskSplinePoint_rna_properties_get, nullptr, nullptr, MaskSplinePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePoint_rna_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_left, (PropertyRNA *)&rna_MaskSplinePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MaskSplinePoint_handle_left_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_handle_left = {
	{(PropertyRNA *)&rna_MaskSplinePoint_co, (PropertyRNA *)&rna_MaskSplinePoint_rna_type,
	-1, "handle_left", 3, 0, 0, 0, 0, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MaskSplinePoint_handle_left_get, MaskSplinePoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_handle_left_default
};

static float rna_MaskSplinePoint_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_co = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_right, (PropertyRNA *)&rna_MaskSplinePoint_handle_left,
	-1, "co", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MaskSplinePoint_co_get, MaskSplinePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_co_default
};

static float rna_MaskSplinePoint_handle_right_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_handle_right = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_type, (PropertyRNA *)&rna_MaskSplinePoint_co,
	-1, "handle_right", 3, 0, 0, 0, 0, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MaskSplinePoint_handle_right_get, MaskSplinePoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_handle_right_default
};

static const EnumPropertyItem rna_MaskSplinePoint_handle_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_left_type, (PropertyRNA *)&rna_MaskSplinePoint_handle_right,
	-1, "handle_type", 3, 0, 0, 0, 0, "Handle Type",
	"Handle type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_handle_type_get, MaskSplinePoint_handle_type_set, nullptr, nullptr, nullptr, rna_MaskSplinePoint_handle_type_items, 5, 0
};

static const EnumPropertyItem rna_MaskSplinePoint_handle_left_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_left_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_right_type, (PropertyRNA *)&rna_MaskSplinePoint_handle_type,
	-1, "handle_left_type", 3, 0, 0, 0, 0, "Handle 1 Type",
	"Handle type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_handle_left_type_get, MaskSplinePoint_handle_left_type_set, nullptr, nullptr, nullptr, rna_MaskSplinePoint_handle_left_type_items, 5, 0
};

static const EnumPropertyItem rna_MaskSplinePoint_handle_right_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_right_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_weight, (PropertyRNA *)&rna_MaskSplinePoint_handle_left_type,
	-1, "handle_right_type", 3, 0, 0, 0, 0, "Handle 2 Type",
	"Handle type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_handle_right_type_get, MaskSplinePoint_handle_right_type_set, nullptr, nullptr, nullptr, rna_MaskSplinePoint_handle_right_type_items, 5, 0
};

FloatPropertyRNA rna_MaskSplinePoint_weight = {
	{(PropertyRNA *)&rna_MaskSplinePoint_select, (PropertyRNA *)&rna_MaskSplinePoint_handle_right_type,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Weight of the point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSplinePoint, bezt.weight), (RawPropertyType)5, nullptr},
	MaskSplinePoint_weight_get, MaskSplinePoint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_MaskSplinePoint_select = {
	{(PropertyRNA *)&rna_MaskSplinePoint_parent, (PropertyRNA *)&rna_MaskSplinePoint_weight,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_select_get, MaskSplinePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_MaskSplinePoint_parent = {
	{(PropertyRNA *)&rna_MaskSplinePoint_feather_points, (PropertyRNA *)&rna_MaskSplinePoint_select,
	-1, "parent", 8388608, 0, 0, 0, 0, "parent",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_parent_get, nullptr, nullptr, nullptr,&RNA_MaskParent
};

CollectionPropertyRNA rna_MaskSplinePoint_feather_points = {
	{nullptr, (PropertyRNA *)&rna_MaskSplinePoint_parent,
	-1, "feather_points", 0, 0, 0, 8, 0, "Feather Points",
	"Points defining feather",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoint_feather_points_begin, MaskSplinePoint_feather_points_next, MaskSplinePoint_feather_points_end, MaskSplinePoint_feather_points_get, MaskSplinePoint_feather_points_length, MaskSplinePoint_feather_points_lookup_int, nullptr, nullptr, &RNA_MaskSplinePointUW
};

StructRNA RNA_MaskSplinePoint = {
	{(ContainerRNA *)&RNA_MaskSpline, (ContainerRNA *)&RNA_MaskSplinePointUW,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplinePoint_rna_properties, (PropertyRNA *)&rna_MaskSplinePoint_feather_points}},
	"MaskSplinePoint", nullptr, nullptr, 516, nullptr, "Mask Spline Point",
	"Single point in spline used for defining mask",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskSplinePoint_rna_properties,
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

/* Mask spline */
CollectionPropertyRNA rna_MaskSpline_rna_properties = {
	{(PropertyRNA *)&rna_MaskSpline_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSpline_rna_properties_begin, MaskSpline_rna_properties_next, MaskSpline_rna_properties_end, MaskSpline_rna_properties_get, nullptr, nullptr, MaskSpline_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskSpline_rna_type = {
	{(PropertyRNA *)&rna_MaskSpline_offset_mode, (PropertyRNA *)&rna_MaskSpline_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSpline_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_MaskSpline_offset_mode_items[3] = {
	{0, "EVEN", 0, "Even", "Calculate even feather offset"},
	{1, "SMOOTH", 0, "Smooth", "Calculate feather offset as a second curve"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskSpline_offset_mode = {
	{(PropertyRNA *)&rna_MaskSpline_weight_interpolation, (PropertyRNA *)&rna_MaskSpline_rna_type,
	-1, "offset_mode", 3, 0, 0, 4, 0, "Feather Offset",
	"The method used for calculating the feather offset",
	0, "Mask",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSpline, offset_mode), (RawPropertyType)2, nullptr},
	MaskSpline_offset_mode_get, MaskSpline_offset_mode_set, nullptr, nullptr, nullptr, rna_MaskSpline_offset_mode_items, 2, 0
};

static const EnumPropertyItem rna_MaskSpline_weight_interpolation_items[3] = {
	{1, "LINEAR", 0, "Linear", ""},
	{2, "EASE", 0, "Ease", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskSpline_weight_interpolation = {
	{(PropertyRNA *)&rna_MaskSpline_use_cyclic, (PropertyRNA *)&rna_MaskSpline_offset_mode,
	-1, "weight_interpolation", 3, 0, 0, 4, 0, "Weight Interpolation",
	"The type of weight interpolation for spline",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSpline, weight_interp), (RawPropertyType)2, nullptr},
	MaskSpline_weight_interpolation_get, MaskSpline_weight_interpolation_set, nullptr, nullptr, nullptr, rna_MaskSpline_weight_interpolation_items, 2, 1
};

BoolPropertyRNA rna_MaskSpline_use_cyclic = {
	{(PropertyRNA *)&rna_MaskSpline_use_fill, (PropertyRNA *)&rna_MaskSpline_weight_interpolation,
	-1, "use_cyclic", 1, 0, 0, 0, 0, "Cyclic",
	"Make this spline a closed loop",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSpline_use_cyclic_get, MaskSpline_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaskSpline_use_fill = {
	{(PropertyRNA *)&rna_MaskSpline_use_self_intersection_check, (PropertyRNA *)&rna_MaskSpline_use_cyclic,
	-1, "use_fill", 1, 0, 0, 0, 0, "Fill",
	"Make this spline filled",
	0, "Mask",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSpline_use_fill_get, MaskSpline_use_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaskSpline_use_self_intersection_check = {
	{(PropertyRNA *)&rna_MaskSpline_points, (PropertyRNA *)&rna_MaskSpline_use_fill,
	-1, "use_self_intersection_check", 1, 0, 0, 0, 0, "Self Intersection Check",
	"Prevent feather from self-intersections",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSpline_use_self_intersection_check_get, MaskSpline_use_self_intersection_check_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MaskSpline_points = {
	{nullptr, (PropertyRNA *)&rna_MaskSpline_use_self_intersection_check,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Collection of points",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MaskSplinePoints},
	MaskSpline_points_begin, MaskSpline_points_next, MaskSpline_points_end, MaskSpline_points_get, MaskSpline_points_length, MaskSpline_points_lookup_int, nullptr, nullptr, &RNA_MaskSplinePoint
};

StructRNA RNA_MaskSpline = {
	{(ContainerRNA *)&RNA_MaskSplines, (ContainerRNA *)&RNA_MaskSplinePoint,
	nullptr,
	{(PropertyRNA *)&rna_MaskSpline_rna_properties, (PropertyRNA *)&rna_MaskSpline_points}},
	"MaskSpline", nullptr, nullptr, 516, nullptr, "Mask spline",
	"Single spline used for defining mask shape",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskSpline_rna_properties,
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

/* Mask Splines */
CollectionPropertyRNA rna_MaskSplines_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplines_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplines_rna_properties_begin, MaskSplines_rna_properties_next, MaskSplines_rna_properties_end, MaskSplines_rna_properties_get, nullptr, nullptr, MaskSplines_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskSplines_rna_type = {
	{(PropertyRNA *)&rna_MaskSplines_active, (PropertyRNA *)&rna_MaskSplines_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplines_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MaskSplines_active = {
	{(PropertyRNA *)&rna_MaskSplines_active_point, (PropertyRNA *)&rna_MaskSplines_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Spline",
	"Active spline of masking layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplines_active_get, MaskSplines_active_set, nullptr, nullptr,&RNA_MaskSpline
};

PointerPropertyRNA rna_MaskSplines_active_point = {
	{nullptr, (PropertyRNA *)&rna_MaskSplines_active,
	-1, "active_point", 41943041, 0, 0, 0, 0, "Active Point",
	"Active point of masking layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplines_active_point_get, MaskSplines_active_point_set, nullptr, nullptr,&RNA_MaskSplinePoint
};

PointerPropertyRNA rna_MaskSplines_new_spline = {
	{nullptr, nullptr,
	-1, "spline", 8388608, 0, 2, 0, 0, "",
	"The newly created spline",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MaskSpline
};

FunctionRNA rna_MaskSplines_new_func = {
	{(FunctionRNA *)&rna_MaskSplines_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplines_new_spline, (PropertyRNA *)&rna_MaskSplines_new_spline}},
	"new", 2048, "Add a new spline to the layer",
	MaskSplines_new_call,
	(PropertyRNA *)&rna_MaskSplines_new_spline
};

PointerPropertyRNA rna_MaskSplines_remove_spline = {
	{nullptr, nullptr,
	-1, "spline", 262144, 0, 5, 0, 0, "",
	"The spline to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MaskSpline
};

FunctionRNA rna_MaskSplines_remove_func = {
	{nullptr, (FunctionRNA *)&rna_MaskSplines_new_func,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplines_remove_spline, (PropertyRNA *)&rna_MaskSplines_remove_spline}},
	"remove", 2064, "Remove a spline from a layer",
	MaskSplines_remove_call,
	nullptr
};

StructRNA RNA_MaskSplines = {
	{(ContainerRNA *)&RNA_MaskSplinePoints, (ContainerRNA *)&RNA_MaskSpline,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplines_rna_properties, (PropertyRNA *)&rna_MaskSplines_active_point}},
	"MaskSplines", nullptr, nullptr, 516, nullptr, "Mask Splines",
	"Collection of masking splines",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskSplines_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MaskSplines_new_func, (FunctionRNA *)&rna_MaskSplines_remove_func}
};

/* Mask Spline Points */
CollectionPropertyRNA rna_MaskSplinePoints_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoints_rna_properties_begin, MaskSplinePoints_rna_properties_next, MaskSplinePoints_rna_properties_end, MaskSplinePoints_rna_properties_get, nullptr, nullptr, MaskSplinePoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MaskSplinePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskSplinePoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MaskSplinePoints_add_count = {
	{nullptr, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the spline",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 1, nullptr
};

FunctionRNA rna_MaskSplinePoints_add_func = {
	{(FunctionRNA *)&rna_MaskSplinePoints_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplinePoints_add_count, (PropertyRNA *)&rna_MaskSplinePoints_add_count}},
	"add", 2048, "Add a number of point to this spline",
	MaskSplinePoints_add_call,
	nullptr
};

PointerPropertyRNA rna_MaskSplinePoints_remove_point = {
	{nullptr, nullptr,
	-1, "point", 262144, 0, 5, 0, 0, "",
	"The point to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MaskSplinePoint
};

FunctionRNA rna_MaskSplinePoints_remove_func = {
	{nullptr, (FunctionRNA *)&rna_MaskSplinePoints_add_func,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplinePoints_remove_point, (PropertyRNA *)&rna_MaskSplinePoints_remove_point}},
	"remove", 2064, "Remove a point from a spline",
	MaskSplinePoints_remove_call,
	nullptr
};

StructRNA RNA_MaskSplinePoints = {
	{(ContainerRNA *)&RNA_MaskLayer, (ContainerRNA *)&RNA_MaskSplines,
	nullptr,
	{(PropertyRNA *)&rna_MaskSplinePoints_rna_properties, (PropertyRNA *)&rna_MaskSplinePoints_rna_type}},
	"MaskSplinePoints", nullptr, nullptr, 516, nullptr, "Mask Spline Points",
	"Collection of masking spline points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskSplinePoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MaskSplinePoints_add_func, (FunctionRNA *)&rna_MaskSplinePoints_remove_func}
};

/* Mask Layer */
CollectionPropertyRNA rna_MaskLayer_rna_properties = {
	{(PropertyRNA *)&rna_MaskLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_rna_properties_begin, MaskLayer_rna_properties_next, MaskLayer_rna_properties_end, MaskLayer_rna_properties_get, nullptr, nullptr, MaskLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskLayer_rna_type = {
	{(PropertyRNA *)&rna_MaskLayer_name, (PropertyRNA *)&rna_MaskLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_MaskLayer_name = {
	{(PropertyRNA *)&rna_MaskLayer_splines, (PropertyRNA *)&rna_MaskLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Unique name of layer",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Mask_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_name_get, MaskLayer_name_length, MaskLayer_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

CollectionPropertyRNA rna_MaskLayer_splines = {
	{(PropertyRNA *)&rna_MaskLayer_hide, (PropertyRNA *)&rna_MaskLayer_name,
	-1, "splines", 0, 0, 0, 0, 0, "Splines",
	"Collection of splines which defines this layer",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MaskSplines},
	MaskLayer_splines_begin, MaskLayer_splines_next, MaskLayer_splines_end, MaskLayer_splines_get, nullptr, MaskLayer_splines_lookup_int, nullptr, nullptr, &RNA_MaskSpline
};

BoolPropertyRNA rna_MaskLayer_hide = {
	{(PropertyRNA *)&rna_MaskLayer_hide_select, (PropertyRNA *)&rna_MaskLayer_splines,
	-1, "hide", 4355, 0, 0, 0, 0, "Restrict View",
	"Restrict visibility in the viewport",
	284, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 370606080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_hide_get, MaskLayer_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaskLayer_hide_select = {
	{(PropertyRNA *)&rna_MaskLayer_hide_render, (PropertyRNA *)&rna_MaskLayer_hide,
	-1, "hide_select", 4355, 0, 0, 0, 0, "Restrict Select",
	"Restrict selection in the viewport",
	256, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 370606080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_hide_select_get, MaskLayer_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaskLayer_hide_render = {
	{(PropertyRNA *)&rna_MaskLayer_select, (PropertyRNA *)&rna_MaskLayer_hide_select,
	-1, "hide_render", 4355, 0, 0, 0, 0, "Restrict Render",
	"Restrict renderability",
	258, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_hide_render_get, MaskLayer_hide_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaskLayer_select = {
	{(PropertyRNA *)&rna_MaskLayer_alpha, (PropertyRNA *)&rna_MaskLayer_hide_render,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Layer is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_select_get, MaskLayer_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_MaskLayer_alpha = {
	{(PropertyRNA *)&rna_MaskLayer_blend, (PropertyRNA *)&rna_MaskLayer_select,
	-1, "alpha", 3, 0, 0, 4, 0, "Opacity",
	"Render Opacity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskLayer, alpha), (RawPropertyType)5, nullptr},
	MaskLayer_alpha_get, MaskLayer_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_MaskLayer_blend_items[10] = {
	{7, "MERGE_ADD", 0, "Merge Add", ""},
	{8, "MERGE_SUBTRACT", 0, "Merge Subtract", ""},
	{0, "ADD", 0, "Add", ""},
	{1, "SUBTRACT", 0, "Subtract", ""},
	{2, "LIGHTEN", 0, "Lighten", ""},
	{3, "DARKEN", 0, "Darken", ""},
	{4, "MUL", 0, "Multiply", ""},
	{5, "REPLACE", 0, "Replace", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaskLayer_blend = {
	{(PropertyRNA *)&rna_MaskLayer_invert, (PropertyRNA *)&rna_MaskLayer_alpha,
	-1, "blend", 3, 0, 0, 4, 0, "Blend",
	"Method of blending mask layers",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskLayer, blend), (RawPropertyType)2, nullptr},
	MaskLayer_blend_get, MaskLayer_blend_set, nullptr, nullptr, nullptr, rna_MaskLayer_blend_items, 9, 0
};

BoolPropertyRNA rna_MaskLayer_invert = {
	{(PropertyRNA *)&rna_MaskLayer_falloff, (PropertyRNA *)&rna_MaskLayer_blend,
	-1, "invert", 3, 0, 0, 0, 0, "Restrict View",
	"Invert the mask black/white",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_invert_get, MaskLayer_invert_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_MaskLayer_falloff = {
	{(PropertyRNA *)&rna_MaskLayer_use_fill_holes, (PropertyRNA *)&rna_MaskLayer_invert,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"Falloff type the feather",
	0, "Curve",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskLayer, falloff), (RawPropertyType)2, nullptr},
	MaskLayer_falloff_get, MaskLayer_falloff_set, nullptr, nullptr, nullptr, rna_enum_proportional_falloff_curve_only_items, 6, 0
};

BoolPropertyRNA rna_MaskLayer_use_fill_holes = {
	{(PropertyRNA *)&rna_MaskLayer_use_fill_overlap, (PropertyRNA *)&rna_MaskLayer_falloff,
	-1, "use_fill_holes", 3, 0, 0, 0, 0, "Calculate Holes",
	"Calculate holes when filling overlapping curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_use_fill_holes_get, MaskLayer_use_fill_holes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaskLayer_use_fill_overlap = {
	{nullptr, (PropertyRNA *)&rna_MaskLayer_use_fill_holes,
	-1, "use_fill_overlap", 3, 0, 0, 0, 0, "Calculate Overlap",
	"Calculate self intersections and overlap before filling",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 369098753, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayer_use_fill_overlap_get, MaskLayer_use_fill_overlap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MaskLayer = {
	{(ContainerRNA *)&RNA_Mask, (ContainerRNA *)&RNA_MaskSplinePoints,
	nullptr,
	{(PropertyRNA *)&rna_MaskLayer_rna_properties, (PropertyRNA *)&rna_MaskLayer_use_fill_overlap}},
	"MaskLayer", nullptr, nullptr, 516, nullptr, "Mask Layer",
	"Single layer used for masking pixels",
	"*", 17,
	(PropertyRNA *)&rna_MaskLayer_name, (PropertyRNA *)&rna_MaskLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MaskLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mask */
CollectionPropertyRNA rna_Mask_layers = {
	{(PropertyRNA *)&rna_Mask_active_layer_index, nullptr,
	-1, "layers", 0, 0, 0, 0, 0, "Layers",
	"Collection of layers which defines this mask",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MaskLayers},
	Mask_layers_begin, Mask_layers_next, Mask_layers_end, Mask_layers_get, nullptr, nullptr, nullptr, nullptr, &RNA_MaskLayer
};

IntPropertyRNA rna_Mask_active_layer_index = {
	{(PropertyRNA *)&rna_Mask_frame_start, (PropertyRNA *)&rna_Mask_layers,
	-1, "active_layer_index", 1, 0, 0, 0, 0, "Active Shape Index",
	"Index of active layer in list of all mask\'s layers",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 370606080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mask_active_layer_index_get, Mask_active_layer_index_set, nullptr, nullptr, rna_Mask_layer_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Mask_frame_start = {
	{(PropertyRNA *)&rna_Mask_frame_end, (PropertyRNA *)&rna_Mask_active_layer_index,
	-1, "frame_start", 1, 0, 0, 0, 0, "Start Frame",
	"First frame of the mask (used for sequencer)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 370606080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mask_frame_start_get, Mask_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_Mask_frame_end = {
	{(PropertyRNA *)&rna_Mask_animation_data, (PropertyRNA *)&rna_Mask_frame_start,
	-1, "frame_end", 1, 0, 0, 0, 0, "End Frame",
	"Final frame of the mask (used for sequencer)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 370606080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mask_frame_end_get, Mask_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 0, nullptr
};

PointerPropertyRNA rna_Mask_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Mask_frame_end,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Mask_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

StructRNA RNA_Mask = {
	{(ContainerRNA *)&RNA_MaskLayers, (ContainerRNA *)&RNA_MaskLayer,
	nullptr,
	{(PropertyRNA *)&rna_Mask_layers, (PropertyRNA *)&rna_Mask_animation_data}},
	"Mask", nullptr, nullptr, 519, nullptr, "Mask",
	"Mask data-block defining mask for compositing",
	"*", 467,
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

/* Mask Layers */
CollectionPropertyRNA rna_MaskLayers_rna_properties = {
	{(PropertyRNA *)&rna_MaskLayers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayers_rna_properties_begin, MaskLayers_rna_properties_next, MaskLayers_rna_properties_end, MaskLayers_rna_properties_get, nullptr, nullptr, MaskLayers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaskLayers_rna_type = {
	{(PropertyRNA *)&rna_MaskLayers_active, (PropertyRNA *)&rna_MaskLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MaskLayers_active = {
	{nullptr, (PropertyRNA *)&rna_MaskLayers_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Shape",
	"Active layer in this mask",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaskLayers_active_get, MaskLayers_active_set, nullptr, nullptr,&RNA_MaskLayer
};

StringPropertyRNA rna_MaskLayers_new_name = {
	{(PropertyRNA *)&rna_MaskLayers_new_layer, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of new layer",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_MaskLayers_new_layer = {
	{nullptr, (PropertyRNA *)&rna_MaskLayers_new_name,
	-1, "layer", 8388608, 0, 2, 0, 0, "",
	"New mask layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MaskLayer
};

FunctionRNA rna_MaskLayers_new_func = {
	{(FunctionRNA *)&rna_MaskLayers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MaskLayers_new_name, (PropertyRNA *)&rna_MaskLayers_new_layer}},
	"new", 0, "Add layer to this mask",
	MaskLayers_new_call,
	(PropertyRNA *)&rna_MaskLayers_new_layer
};

PointerPropertyRNA rna_MaskLayers_remove_layer = {
	{nullptr, nullptr,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"Shape to be removed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MaskLayer
};

FunctionRNA rna_MaskLayers_remove_func = {
	{(FunctionRNA *)&rna_MaskLayers_clear_func, (FunctionRNA *)&rna_MaskLayers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_MaskLayers_remove_layer, (PropertyRNA *)&rna_MaskLayers_remove_layer}},
	"remove", 16, "Remove layer from this mask",
	MaskLayers_remove_call,
	nullptr
};

FunctionRNA rna_MaskLayers_clear_func = {
	{nullptr, (FunctionRNA *)&rna_MaskLayers_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all mask layers",
	MaskLayers_clear_call,
	nullptr
};

StructRNA RNA_MaskLayers = {
	{(ContainerRNA *)&RNA_XrActionMap, (ContainerRNA *)&RNA_Mask,
	nullptr,
	{(PropertyRNA *)&rna_MaskLayers_rna_properties, (PropertyRNA *)&rna_MaskLayers_active}},
	"MaskLayers", nullptr, nullptr, 516, nullptr, "Mask Layers",
	"Collection of layers used by mask",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaskLayers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MaskLayers_new_func, (FunctionRNA *)&rna_MaskLayers_clear_func}
};

