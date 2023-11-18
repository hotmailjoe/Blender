
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

#include "rna_key.cc"

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

RNA_EXTERN_C PointerPropertyRNA rna_Key_reference_key;
RNA_EXTERN_C CollectionPropertyRNA rna_Key_key_blocks;
RNA_EXTERN_C PointerPropertyRNA rna_Key_animation_data;
RNA_EXTERN_C PointerPropertyRNA rna_Key_user;
RNA_EXTERN_C BoolPropertyRNA rna_Key_use_relative;
RNA_EXTERN_C FloatPropertyRNA rna_Key_eval_time;

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



RNA_EXTERN_C CollectionPropertyRNA rna_ShapeKey_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ShapeKey_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_ShapeKey_name;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKey_frame;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKey_value;
RNA_EXTERN_C EnumPropertyRNA rna_ShapeKey_interpolation;
RNA_EXTERN_C StringPropertyRNA rna_ShapeKey_vertex_group;
RNA_EXTERN_C PointerPropertyRNA rna_ShapeKey_relative_key;
RNA_EXTERN_C BoolPropertyRNA rna_ShapeKey_mute;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKey_slider_min;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKey_slider_max;
RNA_EXTERN_C CollectionPropertyRNA rna_ShapeKey_data;

extern FunctionRNA rna_ShapeKey_normals_vertex_get_func;
extern FloatPropertyRNA rna_ShapeKey_normals_vertex_get_normals;

extern FunctionRNA rna_ShapeKey_normals_polygon_get_func;
extern FloatPropertyRNA rna_ShapeKey_normals_polygon_get_normals;

extern FunctionRNA rna_ShapeKey_normals_split_get_func;
extern FloatPropertyRNA rna_ShapeKey_normals_split_get_normals;



RNA_EXTERN_C CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ShapeKeyPoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyPoint_co;


RNA_EXTERN_C CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyCurvePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyCurvePoint_radius;


RNA_EXTERN_C CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyBezierPoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyBezierPoint_tilt;
RNA_EXTERN_C FloatPropertyRNA rna_ShapeKeyBezierPoint_radius;

RNA_EXTERN_C PointerRNA Key_reference_key_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ShapeKey, data->refkey);
}

static PointerRNA Key_key_blocks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ShapeKey, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Key_key_blocks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Key_key_blocks;

    rna_iterator_listbase_begin(iter, &data->block, nullptr);

    if (iter->valid) {
        iter->ptr = Key_key_blocks_get(iter);
    }
}

RNA_EXTERN_C void Key_key_blocks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Key_key_blocks_get(iter);
    }
}

RNA_EXTERN_C void Key_key_blocks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Key_key_blocks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Key_key_blocks_begin(&iter, ptr);

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
        if (found) { *r_ptr = Key_key_blocks_get(&iter); }
    }

    Key_key_blocks_end(&iter);

    return found;
}

RNA_EXTERN_C int ShapeKey_name_length(PointerRNA *);
RNA_EXTERN_C void ShapeKey_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Key_key_blocks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Key_key_blocks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ShapeKey_name_length(&iter.ptr);
            if (namelen < 1024) {
                ShapeKey_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ShapeKey_name_get(&iter.ptr, name);
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
        Key_key_blocks_next(&iter);
    }
    Key_key_blocks_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Key_animation_data_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C PointerRNA Key_user_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->from);
}

RNA_EXTERN_C bool Key_use_relative_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return (((data->type) & 1) != 0);
}

RNA_EXTERN_C void Key_use_relative_set(PointerRNA *ptr, bool value)
{
    Key *data = (Key *)(ptr->data);
    if (value) { data->type |= 1; }
    else { data->type &= ~1; }
}

RNA_EXTERN_C float Key_eval_time_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return (float)(data->ctime);
}

RNA_EXTERN_C void Key_eval_time_set(PointerRNA *ptr, float value)
{
    Key *data = (Key *)(ptr->data);
#ifdef __cplusplus
    data->ctime = (std::remove_reference_t<decltype(data->ctime)>)CLAMPIS(value, 0.0f, 1048574.0f);
#else
    data->ctime = CLAMPIS(value, 0.0f, 1048574.0f);
#endif
}

static PointerRNA ShapeKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ShapeKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKey_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ShapeKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ShapeKey_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ShapeKey_name_get(PointerRNA *ptr, char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int ShapeKey_name_length(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void ShapeKey_name_set(PointerRNA *ptr, const char *value)
{
    rna_ShapeKey_name_set(ptr, value);
}

RNA_EXTERN_C float ShapeKey_frame_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKey_frame_get;
    return fn(ptr);
}

RNA_EXTERN_C float ShapeKey_value_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->curval);
}

RNA_EXTERN_C void ShapeKey_value_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKey_value_set;
    fn(ptr, value);
}

RNA_EXTERN_C int ShapeKey_interpolation_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void ShapeKey_interpolation_set(PointerRNA *ptr, int value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C void ShapeKey_vertex_group_get(PointerRNA *ptr, char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_assert(strlen(data->vgroup) < 64);
    strcpy(value, data->vgroup);
}

RNA_EXTERN_C int ShapeKey_vertex_group_length(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return strlen(data->vgroup);
}

RNA_EXTERN_C void ShapeKey_vertex_group_set(PointerRNA *ptr, const char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_strncpy_utf8(data->vgroup, value, 64);
}

RNA_EXTERN_C PointerRNA ShapeKey_relative_key_get(PointerRNA *ptr)
{
    return rna_ShapeKey_relative_key_get(ptr);
}

RNA_EXTERN_C void ShapeKey_relative_key_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ShapeKey_relative_key_set(ptr, value, reports);
}

RNA_EXTERN_C bool ShapeKey_mute_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShapeKey_mute_set(PointerRNA *ptr, bool value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C float ShapeKey_slider_min_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->slidermin);
}

RNA_EXTERN_C void ShapeKey_slider_min_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKey_slider_min_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ShapeKey_slider_max_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->slidermax);
}

RNA_EXTERN_C void ShapeKey_slider_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKey_slider_max_set;
    fn(ptr, value);
}

RNA_EXTERN_C int ShapeKey_data_length(PointerRNA *ptr)
{
    return rna_ShapeKey_data_length(ptr);
}

static PointerRNA ShapeKey_data_get(CollectionPropertyIterator *iter)
{
    return rna_ShapeKey_data_get(iter);
}

RNA_EXTERN_C void ShapeKey_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKey_data;

    rna_ShapeKey_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_data_get(iter);
    }
}

RNA_EXTERN_C void ShapeKey_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_data_get(iter);
    }
}

RNA_EXTERN_C void ShapeKey_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int ShapeKey_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_ShapeKey_data_lookup_int(ptr, index, r_ptr);
}

static PointerRNA ShapeKeyPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ShapeKeyPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKeyPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKeyPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKeyPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ShapeKeyPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ShapeKeyPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ShapeKeyPoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyPoint_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyPoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyPoint_co_set;
    fn(ptr, values);
}

static PointerRNA ShapeKeyCurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ShapeKeyCurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyCurvePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKeyCurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyCurvePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKeyCurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ShapeKeyCurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ShapeKeyCurvePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ShapeKeyCurvePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyPoint_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyCurvePoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyPoint_co_set;
    fn(ptr, values);
}

RNA_EXTERN_C float ShapeKeyCurvePoint_tilt_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyCurvePoint_tilt_get;
    return fn(ptr);
}

RNA_EXTERN_C void ShapeKeyCurvePoint_tilt_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyCurvePoint_tilt_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ShapeKeyCurvePoint_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyCurvePoint_radius_get;
    return fn(ptr);
}

RNA_EXTERN_C void ShapeKeyCurvePoint_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyCurvePoint_radius_set;
    fn(ptr, value);
}

static PointerRNA ShapeKeyBezierPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyBezierPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKeyBezierPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyBezierPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShapeKeyBezierPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ShapeKeyBezierPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ShapeKeyBezierPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyBezierPoint_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyBezierPoint_co_set;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyBezierPoint_handle_1_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyBezierPoint_handle_1_co_set;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ShapeKeyBezierPoint_handle_2_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ShapeKeyBezierPoint_handle_2_co_set;
    fn(ptr, values);
}

RNA_EXTERN_C float ShapeKeyBezierPoint_tilt_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyBezierPoint_tilt_get;
    return fn(ptr);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_tilt_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyBezierPoint_tilt_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ShapeKeyBezierPoint_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_ShapeKeyBezierPoint_radius_get;
    return fn(ptr);
}

RNA_EXTERN_C void ShapeKeyBezierPoint_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ShapeKeyBezierPoint_radius_set;
    fn(ptr, value);
}


RNA_EXTERN_C void ShapeKey_normals_vertex_get_func(struct ID *_selfid, struct KeyBlock *_self, int *normals_num, float **normals)
{
	rna_KeyBlock_normals_vert_calc(_selfid, _self, normals, normals_num);
}

static void ShapeKey_normals_vertex_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct KeyBlock *_self;
	int *normals_num;
	float **normals;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_vert_calc(_selfid, _self, normals, normals_num);
}

RNA_EXTERN_C void ShapeKey_normals_polygon_get_func(struct ID *_selfid, struct KeyBlock *_self, int *normals_num, float **normals)
{
	rna_KeyBlock_normals_poly_calc(_selfid, _self, normals, normals_num);
}

static void ShapeKey_normals_polygon_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct KeyBlock *_self;
	int *normals_num;
	float **normals;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_poly_calc(_selfid, _self, normals, normals_num);
}

RNA_EXTERN_C void ShapeKey_normals_split_get_func(struct ID *_selfid, struct KeyBlock *_self, int *normals_num, float **normals)
{
	rna_KeyBlock_normals_loop_calc(_selfid, _self, normals, normals_num);
}

static void ShapeKey_normals_split_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct KeyBlock *_self;
	int *normals_num;
	float **normals;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_loop_calc(_selfid, _self, normals, normals_num);
}

/* Repeated prototypes to detect errors */

void rna_KeyBlock_normals_vert_calc(struct ID *_selfid, struct KeyBlock *_self, int *normals_num, float **normals);
void rna_KeyBlock_normals_poly_calc(struct ID *_selfid, struct KeyBlock *_self, int *normals_num, float **normals);
void rna_KeyBlock_normals_loop_calc(struct ID *_selfid, struct KeyBlock *_self, int *normals_num, float **normals);




/* Key */
PointerPropertyRNA rna_Key_reference_key = {
	{(PropertyRNA *)&rna_Key_key_blocks, nullptr,
	-1, "reference_key", 8650752, 0, 0, 0, 0, "Reference Key",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Key_reference_key_get, nullptr, nullptr, nullptr,&RNA_ShapeKey
};

CollectionPropertyRNA rna_Key_key_blocks = {
	{(PropertyRNA *)&rna_Key_animation_data, (PropertyRNA *)&rna_Key_reference_key,
	-1, "key_blocks", 0, 1, 0, 0, 0, "Key Blocks",
	"Shape keys",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Key_key_blocks_begin, Key_key_blocks_next, Key_key_blocks_end, Key_key_blocks_get, nullptr, Key_key_blocks_lookup_int, Key_key_blocks_lookup_string, nullptr, &RNA_ShapeKey
};

PointerPropertyRNA rna_Key_animation_data = {
	{(PropertyRNA *)&rna_Key_user, (PropertyRNA *)&rna_Key_key_blocks,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Key_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

PointerPropertyRNA rna_Key_user = {
	{(PropertyRNA *)&rna_Key_use_relative, (PropertyRNA *)&rna_Key_animation_data,
	-1, "user", 8650944, 2, 0, 0, 0, "User",
	"Data-block using these shape keys",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Key_user_get, nullptr, nullptr, nullptr,&RNA_ID
};

BoolPropertyRNA rna_Key_use_relative = {
	{(PropertyRNA *)&rna_Key_eval_time, (PropertyRNA *)&rna_Key_user,
	-1, "use_relative", 3, 0, 0, 0, 0, "Relative",
	"Make shape keys relative, otherwise play through shapes as a sequence using the evaluation time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Key_use_relative_get, Key_use_relative_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Key_eval_time = {
	{nullptr, (PropertyRNA *)&rna_Key_use_relative,
	-1, "eval_time", 3, 1, 0, 4, 0, "Evaluation Time",
	"Evaluation time for absolute shape keys",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Key, ctime), (RawPropertyType)5, nullptr},
	Key_eval_time_get, Key_eval_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_Key = {
	{(ContainerRNA *)&RNA_ShapeKey, (ContainerRNA *)&RNA_ImagePackedFile,
	nullptr,
	{(PropertyRNA *)&rna_Key_reference_key, (PropertyRNA *)&rna_Key_eval_time}},
	"Key", nullptr, nullptr, 519, nullptr, "Key",
	"Shape keys data-block containing different shapes of geometric data-blocks",
	"*", 176,
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

/* Shape Key */
CollectionPropertyRNA rna_ShapeKey_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKey_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_rna_properties_begin, ShapeKey_rna_properties_next, ShapeKey_rna_properties_end, ShapeKey_rna_properties_get, nullptr, nullptr, ShapeKey_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ShapeKey_rna_type = {
	{(PropertyRNA *)&rna_ShapeKey_name, (PropertyRNA *)&rna_ShapeKey_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ShapeKey_name = {
	{(PropertyRNA *)&rna_ShapeKey_frame, (PropertyRNA *)&rna_ShapeKey_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of Shape Key",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_name_get, ShapeKey_name_length, ShapeKey_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FloatPropertyRNA rna_ShapeKey_frame = {
	{(PropertyRNA *)&rna_ShapeKey_value, (PropertyRNA *)&rna_ShapeKey_name,
	-1, "frame", 2, 0, 0, 0, 0, "Frame",
	"Frame for absolute keys",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_frame_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShapeKey_value = {
	{(PropertyRNA *)&rna_ShapeKey_interpolation, (PropertyRNA *)&rna_ShapeKey_frame,
	-1, "value", 3, 1, 0, 0, 0, "Value",
	"Value of shape key at the current frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_value_get, ShapeKey_value_set, nullptr, nullptr, rna_ShapeKey_value_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_ShapeKey_interpolation_items[5] = {
	{0, "KEY_LINEAR", 0, "Linear", ""},
	{1, "KEY_CARDINAL", 0, "Cardinal", ""},
	{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""},
	{2, "KEY_BSPLINE", 0, "BSpline", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShapeKey_interpolation = {
	{(PropertyRNA *)&rna_ShapeKey_vertex_group, (PropertyRNA *)&rna_ShapeKey_value,
	-1, "interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation type for absolute shape keys",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(KeyBlock, type), (RawPropertyType)1, nullptr},
	ShapeKey_interpolation_get, ShapeKey_interpolation_set, nullptr, nullptr, nullptr, rna_ShapeKey_interpolation_items, 4, 0
};

StringPropertyRNA rna_ShapeKey_vertex_group = {
	{(PropertyRNA *)&rna_ShapeKey_relative_key, (PropertyRNA *)&rna_ShapeKey_interpolation,
	-1, "vertex_group", 262145, 0, 0, 0, 0, "Vertex Group",
	"Vertex weight group, to blend with basis shape",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_vertex_group_get, ShapeKey_vertex_group_length, ShapeKey_vertex_group_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_ShapeKey_relative_key = {
	{(PropertyRNA *)&rna_ShapeKey_mute, (PropertyRNA *)&rna_ShapeKey_vertex_group,
	-1, "relative_key", 8650881, 0, 0, 0, 0, "Relative Key",
	"Shape used as a relative key",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_relative_key_get, ShapeKey_relative_key_set, nullptr, nullptr,&RNA_ShapeKey
};

BoolPropertyRNA rna_ShapeKey_mute = {
	{(PropertyRNA *)&rna_ShapeKey_slider_min, (PropertyRNA *)&rna_ShapeKey_relative_key,
	-1, "mute", 4355, 1, 0, 0, 0, "Mute",
	"Toggle this shape key",
	39, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_mute_get, ShapeKey_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_ShapeKey_slider_min = {
	{(PropertyRNA *)&rna_ShapeKey_slider_max, (PropertyRNA *)&rna_ShapeKey_mute,
	-1, "slider_min", 3, 0, 0, 0, 0, "Slider Min",
	"Minimum for slider",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShapeKey_update_minmax, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_slider_min_get, ShapeKey_slider_min_set, nullptr, nullptr, rna_ShapeKey_slider_min_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShapeKey_slider_max = {
	{(PropertyRNA *)&rna_ShapeKey_data, (PropertyRNA *)&rna_ShapeKey_slider_min,
	-1, "slider_max", 3, 0, 0, 0, 0, "Slider Max",
	"Maximum for slider",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShapeKey_update_minmax, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_slider_max_get, ShapeKey_slider_max_set, nullptr, nullptr, rna_ShapeKey_slider_max_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

CollectionPropertyRNA rna_ShapeKey_data = {
	{nullptr, (PropertyRNA *)&rna_ShapeKey_slider_max,
	-1, "data", 0, 4, 0, 0, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKey_data_begin, ShapeKey_data_next, ShapeKey_data_end, ShapeKey_data_get, ShapeKey_data_length, ShapeKey_data_lookup_int, nullptr, nullptr, &RNA_UnknownType
};

FloatPropertyRNA rna_ShapeKey_normals_vertex_get_normals = {
	{nullptr, nullptr,
	-1, "normals", 131075, 0, 2, 0, 0, "normals",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_KeyBlock_normals_vert_len, 2, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_ShapeKey_normals_vertex_get_func = {
	{(FunctionRNA *)&rna_ShapeKey_normals_polygon_get_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKey_normals_vertex_get_normals, (PropertyRNA *)&rna_ShapeKey_normals_vertex_get_normals}},
	"normals_vertex_get", 2048, "Compute local space vertices\' normals for this shape key",
	ShapeKey_normals_vertex_get_call,
	nullptr
};

FloatPropertyRNA rna_ShapeKey_normals_polygon_get_normals = {
	{nullptr, nullptr,
	-1, "normals", 131075, 0, 2, 0, 0, "normals",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_KeyBlock_normals_poly_len, 2, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_ShapeKey_normals_polygon_get_func = {
	{(FunctionRNA *)&rna_ShapeKey_normals_split_get_func, (FunctionRNA *)&rna_ShapeKey_normals_vertex_get_func,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKey_normals_polygon_get_normals, (PropertyRNA *)&rna_ShapeKey_normals_polygon_get_normals}},
	"normals_polygon_get", 2048, "Compute local space faces\' normals for this shape key",
	ShapeKey_normals_polygon_get_call,
	nullptr
};

FloatPropertyRNA rna_ShapeKey_normals_split_get_normals = {
	{nullptr, nullptr,
	-1, "normals", 131075, 0, 2, 0, 0, "normals",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_KeyBlock_normals_loop_len, 2, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_ShapeKey_normals_split_get_func = {
	{nullptr, (FunctionRNA *)&rna_ShapeKey_normals_polygon_get_func,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKey_normals_split_get_normals, (PropertyRNA *)&rna_ShapeKey_normals_split_get_normals}},
	"normals_split_get", 2048, "Compute local space face corners\' normals for this shape key",
	ShapeKey_normals_split_get_call,
	nullptr
};

StructRNA RNA_ShapeKey = {
	{(ContainerRNA *)&RNA_ShapeKeyPoint, (ContainerRNA *)&RNA_Key,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKey_rna_properties, (PropertyRNA *)&rna_ShapeKey_data}},
	"ShapeKey", nullptr, nullptr, 516, nullptr, "Shape Key",
	"Shape key in a shape keys data-block",
	"*", 176,
	(PropertyRNA *)&rna_ShapeKey_name, (PropertyRNA *)&rna_ShapeKey_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ShapeKey_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ShapeKey_normals_vertex_get_func, (FunctionRNA *)&rna_ShapeKey_normals_split_get_func}
};

/* Shape Key Point */
CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKeyPoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyPoint_rna_properties_begin, ShapeKeyPoint_rna_properties_next, ShapeKeyPoint_rna_properties_end, ShapeKeyPoint_rna_properties_get, nullptr, nullptr, ShapeKeyPoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ShapeKeyPoint_rna_type = {
	{(PropertyRNA *)&rna_ShapeKeyPoint_co, (PropertyRNA *)&rna_ShapeKeyPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyPoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_ShapeKeyPoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyPoint_co = {
	{nullptr, (PropertyRNA *)&rna_ShapeKeyPoint_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ShapeKeyPoint_co_get, ShapeKeyPoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyPoint_co_default
};

StructRNA RNA_ShapeKeyPoint = {
	{(ContainerRNA *)&RNA_ShapeKeyCurvePoint, (ContainerRNA *)&RNA_ShapeKey,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKeyPoint_rna_properties, (PropertyRNA *)&rna_ShapeKeyPoint_co}},
	"ShapeKeyPoint", nullptr, nullptr, 516, nullptr, "Shape Key Point",
	"Point in a shape key",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ShapeKeyPoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ShapeKeyPoint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Shape Key Curve Point */
CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyCurvePoint_rna_properties_begin, ShapeKeyCurvePoint_rna_properties_next, ShapeKeyCurvePoint_rna_properties_end, ShapeKeyCurvePoint_rna_properties_get, nullptr, nullptr, ShapeKeyCurvePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_co, (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyCurvePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_ShapeKeyCurvePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_co = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_tilt, (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ShapeKeyCurvePoint_co_get, ShapeKeyCurvePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyCurvePoint_co_default
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_radius, (PropertyRNA *)&rna_ShapeKeyCurvePoint_co,
	-1, "tilt", 3, 0, 0, 0, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyCurvePoint_tilt_get, ShapeKeyCurvePoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_radius = {
	{nullptr, (PropertyRNA *)&rna_ShapeKeyCurvePoint_tilt,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyCurvePoint_radius_get, ShapeKeyCurvePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_ShapeKeyCurvePoint = {
	{(ContainerRNA *)&RNA_ShapeKeyBezierPoint, (ContainerRNA *)&RNA_ShapeKeyPoint,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties, (PropertyRNA *)&rna_ShapeKeyCurvePoint_radius}},
	"ShapeKeyCurvePoint", nullptr, nullptr, 516, nullptr, "Shape Key Curve Point",
	"Point in a shape key for curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ShapeKeyPoint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Shape Key Bezier Point */
CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyBezierPoint_rna_properties_begin, ShapeKeyBezierPoint_rna_properties_next, ShapeKeyBezierPoint_rna_properties_end, ShapeKeyBezierPoint_rna_properties_get, nullptr, nullptr, ShapeKeyBezierPoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_co, (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyBezierPoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_ShapeKeyBezierPoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_co = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_left, (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ShapeKeyBezierPoint_co_get, ShapeKeyBezierPoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_co_default
};

static float rna_ShapeKeyBezierPoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_right, (PropertyRNA *)&rna_ShapeKeyBezierPoint_co,
	-1, "handle_left", 3, 0, 0, 0, 0, "Handle 1 Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ShapeKeyBezierPoint_handle_left_get, ShapeKeyBezierPoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_handle_left_default
};

static float rna_ShapeKeyBezierPoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_tilt, (PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_left,
	-1, "handle_right", 3, 0, 0, 0, 0, "Handle 2 Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ShapeKeyBezierPoint_handle_right_get, ShapeKeyBezierPoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_handle_right_default
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_tilt = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_radius, (PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_right,
	-1, "tilt", 3, 0, 0, 0, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyBezierPoint_tilt_get, ShapeKeyBezierPoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_radius = {
	{nullptr, (PropertyRNA *)&rna_ShapeKeyBezierPoint_tilt,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShapeKeyBezierPoint_radius_get, ShapeKeyBezierPoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_ShapeKeyBezierPoint = {
	{(ContainerRNA *)&RNA_Light, (ContainerRNA *)&RNA_ShapeKeyCurvePoint,
	nullptr,
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties, (PropertyRNA *)&rna_ShapeKeyBezierPoint_radius}},
	"ShapeKeyBezierPoint", nullptr, nullptr, 516, nullptr, "Shape Key Bezier Point",
	"Point in a shape key for Bezier curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ShapeKeyPoint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

