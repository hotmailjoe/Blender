
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

#include "rna_meta.cc"
#include "rna_meta_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_MetaElement_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MetaElement_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_MetaElement_type;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_co;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_radius;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_size_x;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_size_y;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_size_z;
RNA_EXTERN_C FloatPropertyRNA rna_MetaElement_stiffness;
RNA_EXTERN_C BoolPropertyRNA rna_MetaElement_use_negative;
RNA_EXTERN_C BoolPropertyRNA rna_MetaElement_use_scale_stiffness;
RNA_EXTERN_C BoolPropertyRNA rna_MetaElement_select;
RNA_EXTERN_C BoolPropertyRNA rna_MetaElement_hide;


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

RNA_EXTERN_C CollectionPropertyRNA rna_MetaBall_elements;
RNA_EXTERN_C EnumPropertyRNA rna_MetaBall_update_method;
RNA_EXTERN_C FloatPropertyRNA rna_MetaBall_resolution;
RNA_EXTERN_C FloatPropertyRNA rna_MetaBall_render_resolution;
RNA_EXTERN_C FloatPropertyRNA rna_MetaBall_threshold;
RNA_EXTERN_C BoolPropertyRNA rna_MetaBall_use_auto_texspace;
RNA_EXTERN_C FloatPropertyRNA rna_MetaBall_texspace_location;
RNA_EXTERN_C FloatPropertyRNA rna_MetaBall_texspace_size;
RNA_EXTERN_C CollectionPropertyRNA rna_MetaBall_materials;
RNA_EXTERN_C BoolPropertyRNA rna_MetaBall_is_editmode;
RNA_EXTERN_C PointerPropertyRNA rna_MetaBall_animation_data;

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


extern FunctionRNA rna_MetaBall_transform_func;
extern FloatPropertyRNA rna_MetaBall_transform_matrix;

extern FunctionRNA rna_MetaBall_update_gpu_tag_func;


RNA_EXTERN_C CollectionPropertyRNA rna_MetaBallElements_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MetaBallElements_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_MetaBallElements_active;

extern FunctionRNA rna_MetaBallElements_new_func;
extern EnumPropertyRNA rna_MetaBallElements_new_type;
extern PointerPropertyRNA rna_MetaBallElements_new_element;

extern FunctionRNA rna_MetaBallElements_remove_func;
extern PointerPropertyRNA rna_MetaBallElements_remove_element;

extern FunctionRNA rna_MetaBallElements_clear_func;

static PointerRNA MetaElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MetaElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MetaElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MetaElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MetaElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MetaElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MetaElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MetaElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MetaElement_type_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void MetaElement_type_set(PointerRNA *ptr, int value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C void MetaElement_co_get(PointerRNA *ptr, float values[3])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

RNA_EXTERN_C void MetaElement_co_set(PointerRNA *ptr, const float values[3])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

RNA_EXTERN_C void MetaElement_rotation_get(PointerRNA *ptr, float values[4])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

RNA_EXTERN_C void MetaElement_rotation_set(PointerRNA *ptr, const float values[4])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

RNA_EXTERN_C float MetaElement_radius_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->rad);
}

RNA_EXTERN_C void MetaElement_radius_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
#ifdef __cplusplus
    data->rad = (std::remove_reference_t<decltype(data->rad)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->rad = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float MetaElement_size_x_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expx);
}

RNA_EXTERN_C void MetaElement_size_x_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
#ifdef __cplusplus
    data->expx = (std::remove_reference_t<decltype(data->expx)>)CLAMPIS(value, 0.0f, 20.0f);
#else
    data->expx = CLAMPIS(value, 0.0f, 20.0f);
#endif
}

RNA_EXTERN_C float MetaElement_size_y_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expy);
}

RNA_EXTERN_C void MetaElement_size_y_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
#ifdef __cplusplus
    data->expy = (std::remove_reference_t<decltype(data->expy)>)CLAMPIS(value, 0.0f, 20.0f);
#else
    data->expy = CLAMPIS(value, 0.0f, 20.0f);
#endif
}

RNA_EXTERN_C float MetaElement_size_z_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expz);
}

RNA_EXTERN_C void MetaElement_size_z_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
#ifdef __cplusplus
    data->expz = (std::remove_reference_t<decltype(data->expz)>)CLAMPIS(value, 0.0f, 20.0f);
#else
    data->expz = CLAMPIS(value, 0.0f, 20.0f);
#endif
}

RNA_EXTERN_C float MetaElement_stiffness_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->s);
}

RNA_EXTERN_C void MetaElement_stiffness_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
#ifdef __cplusplus
    data->s = (std::remove_reference_t<decltype(data->s)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->s = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C bool MetaElement_use_negative_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MetaElement_use_negative_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool MetaElement_use_scale_stiffness_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return !(((data->flag) & 16) != 0);
}

RNA_EXTERN_C void MetaElement_use_scale_stiffness_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (!value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool MetaElement_select_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MetaElement_select_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool MetaElement_hide_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void MetaElement_hide_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA MetaBall_elements_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MetaElement, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void MetaBall_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaBall_elements;

    rna_iterator_listbase_begin(iter, &data->elems, nullptr);

    if (iter->valid) {
        iter->ptr = MetaBall_elements_get(iter);
    }
}

RNA_EXTERN_C void MetaBall_elements_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MetaBall_elements_get(iter);
    }
}

RNA_EXTERN_C void MetaBall_elements_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MetaBall_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MetaBall_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaBall_elements_get(&iter); }
    }

    MetaBall_elements_end(&iter);

    return found;
}

RNA_EXTERN_C int MetaBall_update_method_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (int)(data->flag);
}

RNA_EXTERN_C void MetaBall_update_method_set(PointerRNA *ptr, int value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
#ifdef __cplusplus
    data->flag = (std::remove_reference_t<decltype(data->flag)>)value;
#else
    data->flag = value;
#endif
}

RNA_EXTERN_C float MetaBall_resolution_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->wiresize);
}

RNA_EXTERN_C void MetaBall_resolution_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
#ifdef __cplusplus
    data->wiresize = (std::remove_reference_t<decltype(data->wiresize)>)CLAMPIS(value, 0.0049999999f, 10000.0f);
#else
    data->wiresize = CLAMPIS(value, 0.0049999999f, 10000.0f);
#endif
}

RNA_EXTERN_C float MetaBall_render_resolution_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->rendersize);
}

RNA_EXTERN_C void MetaBall_render_resolution_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
#ifdef __cplusplus
    data->rendersize = (std::remove_reference_t<decltype(data->rendersize)>)CLAMPIS(value, 0.0049999999f, 10000.0f);
#else
    data->rendersize = CLAMPIS(value, 0.0049999999f, 10000.0f);
#endif
}

RNA_EXTERN_C float MetaBall_threshold_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->thresh);
}

RNA_EXTERN_C void MetaBall_threshold_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
#ifdef __cplusplus
    data->thresh = (std::remove_reference_t<decltype(data->thresh)>)CLAMPIS(value, 0.0f, 5.0f);
#else
    data->thresh = CLAMPIS(value, 0.0f, 5.0f);
#endif
}

RNA_EXTERN_C bool MetaBall_use_auto_texspace_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (((data->texspace_flag) & 1) != 0);
}

RNA_EXTERN_C void MetaBall_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    if (value) { data->texspace_flag |= 1; }
    else { data->texspace_flag &= ~1; }
}

RNA_EXTERN_C void MetaBall_texspace_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Meta_texspace_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MetaBall_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Meta_texspace_location_set;
    fn(ptr, values);
}

RNA_EXTERN_C void MetaBall_texspace_size_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Meta_texspace_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MetaBall_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Meta_texspace_size_set;
    fn(ptr, values);
}

RNA_EXTERN_C int MetaBall_materials_length(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA MetaBall_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void MetaBall_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaBall_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MetaBall_materials_get(iter);
    }
}

RNA_EXTERN_C void MetaBall_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MetaBall_materials_get(iter);
    }
}

RNA_EXTERN_C void MetaBall_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MetaBall_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MetaBall_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaBall_materials_get(&iter); }
    }

    MetaBall_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int MetaBall_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MetaBall_materials_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ID_name_get(&iter.ptr, name);
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
        MetaBall_materials_next(&iter);
    }
    MetaBall_materials_end(&iter);

    return found;
}

RNA_EXTERN_C bool MetaBall_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Meta_is_editmode_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA MetaBall_animation_data_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MetaBallElements_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MetaBallElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaBallElements_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MetaBallElements_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MetaBallElements_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MetaBallElements_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MetaBallElements_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MetaBallElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MetaBallElements_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA MetaBallElements_active_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MetaElement, data->lastelem);
}


RNA_EXTERN_C void MetaBall_transform_func(struct MetaBall *_self, float matrix[16])
{
	rna_Meta_transform(_self, matrix);
}

static void MetaBall_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	const float *matrix;
	char *_data;
	
	_self = (struct MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	
	rna_Meta_transform(_self, matrix);
}

RNA_EXTERN_C void MetaBall_update_gpu_tag_func(struct MetaBall *_self)
{
	rna_Mball_update_gpu_tag(_self);
}

static void MetaBall_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	_self = (struct MetaBall *)_ptr->data;
	
	rna_Mball_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Meta_transform(struct MetaBall *_self, float matrix[16]);
void rna_Mball_update_gpu_tag(struct MetaBall *_self);

RNA_EXTERN_C struct MetaElem *MetaBallElements_new_func(struct MetaBall *_self, int type)
{
	return rna_MetaBall_elements_new(_self, type);
}

static void MetaBallElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	int type;
	struct MetaElem *element;
	char *_data, *_retdata;
	
	_self = (struct MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	element = rna_MetaBall_elements_new(_self, type);
	*((struct MetaElem **)_retdata) = element;
}

RNA_EXTERN_C void MetaBallElements_remove_func(struct MetaBall *_self, ReportList *reports, struct PointerRNA *element)
{
	rna_MetaBall_elements_remove(_self, reports, element);
}

static void MetaBallElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	struct PointerRNA *element;
	char *_data;
	
	_self = (struct MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	element = *((struct PointerRNA **)_data);
	
	rna_MetaBall_elements_remove(_self, reports, element);
}

RNA_EXTERN_C void MetaBallElements_clear_func(struct MetaBall *_self)
{
	rna_MetaBall_elements_clear(_self);
}

static void MetaBallElements_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	_self = (struct MetaBall *)_ptr->data;
	
	rna_MetaBall_elements_clear(_self);
}

/* Repeated prototypes to detect errors */

struct MetaElem *rna_MetaBall_elements_new(struct MetaBall *_self, int type);
void rna_MetaBall_elements_remove(struct MetaBall *_self, ReportList *reports, struct PointerRNA *element);
void rna_MetaBall_elements_clear(struct MetaBall *_self);

/* Metaball Element */
CollectionPropertyRNA rna_MetaElement_rna_properties = {
	{(PropertyRNA *)&rna_MetaElement_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaElement_rna_properties_begin, MetaElement_rna_properties_next, MetaElement_rna_properties_end, MetaElement_rna_properties_get, nullptr, nullptr, MetaElement_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MetaElement_rna_type = {
	{(PropertyRNA *)&rna_MetaElement_type, (PropertyRNA *)&rna_MetaElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaElement_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_MetaElement_type = {
	{(PropertyRNA *)&rna_MetaElement_co, (PropertyRNA *)&rna_MetaElement_rna_type,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Metaball type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, type), (RawPropertyType)1, nullptr},
	MetaElement_type_get, MetaElement_type_set, nullptr, nullptr, nullptr, rna_enum_metaelem_type_items, 5, 0
};

static float rna_MetaElement_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaElement_co = {
	{(PropertyRNA *)&rna_MetaElement_rotation, (PropertyRNA *)&rna_MetaElement_type,
	-1, "co", 3, 0, 0, 4, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, x), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MetaElement_co_get, MetaElement_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaElement_co_default
};

static float rna_MetaElement_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaElement_rotation = {
	{(PropertyRNA *)&rna_MetaElement_radius, (PropertyRNA *)&rna_MetaElement_co,
	-1, "rotation", 3, 0, 0, 4, 0, "Rotation",
	"Normalized quaternion rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_MetaBall_update_rotation, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, quat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MetaElement_rotation_get, MetaElement_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaElement_rotation_default
};

FloatPropertyRNA rna_MetaElement_radius = {
	{(PropertyRNA *)&rna_MetaElement_size_x, (PropertyRNA *)&rna_MetaElement_rotation,
	-1, "radius", 3, 0, 0, 4, 0, "Radius",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, rad), (RawPropertyType)5, nullptr},
	MetaElement_radius_get, MetaElement_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MetaElement_size_x = {
	{(PropertyRNA *)&rna_MetaElement_size_y, (PropertyRNA *)&rna_MetaElement_radius,
	-1, "size_x", 67108867, 0, 0, 4, 0, "Size X",
	"Size of element, use of components depends on element type",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, expx), (RawPropertyType)5, nullptr},
	MetaElement_size_x_get, MetaElement_size_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MetaElement_size_y = {
	{(PropertyRNA *)&rna_MetaElement_size_z, (PropertyRNA *)&rna_MetaElement_size_x,
	-1, "size_y", 67108867, 0, 0, 4, 0, "Size Y",
	"Size of element, use of components depends on element type",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, expy), (RawPropertyType)5, nullptr},
	MetaElement_size_y_get, MetaElement_size_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MetaElement_size_z = {
	{(PropertyRNA *)&rna_MetaElement_stiffness, (PropertyRNA *)&rna_MetaElement_size_y,
	-1, "size_z", 67108867, 0, 0, 4, 0, "Size Z",
	"Size of element, use of components depends on element type",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, expz), (RawPropertyType)5, nullptr},
	MetaElement_size_z_get, MetaElement_size_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MetaElement_stiffness = {
	{(PropertyRNA *)&rna_MetaElement_use_negative, (PropertyRNA *)&rna_MetaElement_size_z,
	-1, "stiffness", 3, 0, 0, 4, 0, "Stiffness",
	"Stiffness defines how much of the element to fill",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, s), (RawPropertyType)5, nullptr},
	MetaElement_stiffness_get, MetaElement_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_MetaElement_use_negative = {
	{(PropertyRNA *)&rna_MetaElement_use_scale_stiffness, (PropertyRNA *)&rna_MetaElement_stiffness,
	-1, "use_negative", 3, 0, 0, 0, 0, "Negative",
	"Set metaball as negative one",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaElement_use_negative_get, MetaElement_use_negative_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MetaElement_use_scale_stiffness = {
	{(PropertyRNA *)&rna_MetaElement_select, (PropertyRNA *)&rna_MetaElement_use_negative,
	-1, "use_scale_stiffness", 3, 0, 0, 0, 0, "Scale Stiffness",
	"Scale stiffness instead of radius",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaElement_use_scale_stiffness_get, MetaElement_use_scale_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MetaElement_select = {
	{(PropertyRNA *)&rna_MetaElement_hide, (PropertyRNA *)&rna_MetaElement_use_scale_stiffness,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Select element",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaElement_select_get, MetaElement_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MetaElement_hide = {
	{nullptr, (PropertyRNA *)&rna_MetaElement_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"Hide element",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaElement_hide_get, MetaElement_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MetaElement = {
	{(ContainerRNA *)&RNA_MetaBall, (ContainerRNA *)&RNA_MeshLoopColor,
	nullptr,
	{(PropertyRNA *)&rna_MetaElement_rna_properties, (PropertyRNA *)&rna_MetaElement_hide}},
	"MetaElement", nullptr, nullptr, 516, nullptr, "Metaball Element",
	"Blobby element in a metaball data-block",
	"*", 264,
	nullptr, (PropertyRNA *)&rna_MetaElement_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MetaElement_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* MetaBall */
CollectionPropertyRNA rna_MetaBall_elements = {
	{(PropertyRNA *)&rna_MetaBall_update_method, nullptr,
	-1, "elements", 0, 0, 0, 0, 0, "Elements",
	"Metaball elements",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MetaBallElements},
	MetaBall_elements_begin, MetaBall_elements_next, MetaBall_elements_end, MetaBall_elements_get, nullptr, MetaBall_elements_lookup_int, nullptr, nullptr, &RNA_MetaElement
};

static const EnumPropertyItem rna_MetaBall_update_method_items[5] = {
	{0, "UPDATE_ALWAYS", 0, "Always", "While editing, update metaball always"},
	{1, "HALFRES", 0, "Half", "While editing, update metaball in half resolution"},
	{2, "FAST", 0, "Fast", "While editing, update metaball without polygonization"},
	{3, "NEVER", 0, "Never", "While editing, don\'t update metaball at all"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MetaBall_update_method = {
	{(PropertyRNA *)&rna_MetaBall_resolution, (PropertyRNA *)&rna_MetaBall_elements,
	-1, "update_method", 3, 0, 0, 4, 0, "Update",
	"Metaball edit update behavior",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, flag), (RawPropertyType)2, nullptr},
	MetaBall_update_method_get, MetaBall_update_method_set, nullptr, nullptr, nullptr, rna_MetaBall_update_method_items, 4, 0
};

FloatPropertyRNA rna_MetaBall_resolution = {
	{(PropertyRNA *)&rna_MetaBall_render_resolution, (PropertyRNA *)&rna_MetaBall_update_method,
	-1, "resolution", 3, 0, 0, 4, 0, "Viewport Size",
	"Polygonization resolution in the 3D viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, wiresize), (RawPropertyType)5, nullptr},
	MetaBall_resolution_get, MetaBall_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0500000007f, 1000.0f, 0.0049999999f, 10000.0f, 2.5000000000f, 3, 0.4000000060f, nullptr
};

FloatPropertyRNA rna_MetaBall_render_resolution = {
	{(PropertyRNA *)&rna_MetaBall_threshold, (PropertyRNA *)&rna_MetaBall_resolution,
	-1, "render_resolution", 3, 0, 0, 4, 0, "Render Size",
	"Polygonization resolution in rendering",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, rendersize), (RawPropertyType)5, nullptr},
	MetaBall_render_resolution_get, MetaBall_render_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0250000004f, 1000.0f, 0.0049999999f, 10000.0f, 2.5000000000f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_MetaBall_threshold = {
	{(PropertyRNA *)&rna_MetaBall_use_auto_texspace, (PropertyRNA *)&rna_MetaBall_render_resolution,
	-1, "threshold", 3, 0, 0, 4, 0, "Threshold",
	"Influence of metaball elements",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, thresh), (RawPropertyType)5, nullptr},
	MetaBall_threshold_get, MetaBall_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.6000000238f, nullptr
};

BoolPropertyRNA rna_MetaBall_use_auto_texspace = {
	{(PropertyRNA *)&rna_MetaBall_texspace_location, (PropertyRNA *)&rna_MetaBall_threshold,
	-1, "use_auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaBall_use_auto_texspace_get, MetaBall_use_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static float rna_MetaBall_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaBall_texspace_location = {
	{(PropertyRNA *)&rna_MetaBall_texspace_size, (PropertyRNA *)&rna_MetaBall_use_auto_texspace,
	-1, "texspace_location", 3, 0, 0, 0, 0, "Texture Space Location",
	"Texture space location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MetaBall_texspace_location_get, MetaBall_texspace_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaBall_texspace_location_default
};

static float rna_MetaBall_texspace_size_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_MetaBall_texspace_size = {
	{(PropertyRNA *)&rna_MetaBall_materials, (PropertyRNA *)&rna_MetaBall_texspace_location,
	-1, "texspace_size", 67108867, 0, 0, 0, 0, "Texture Space Size",
	"Texture space size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MetaBall_texspace_size_get, MetaBall_texspace_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaBall_texspace_size_default
};

CollectionPropertyRNA rna_MetaBall_materials = {
	{(PropertyRNA *)&rna_MetaBall_is_editmode, (PropertyRNA *)&rna_MetaBall_texspace_size,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDMaterials},
	MetaBall_materials_begin, MetaBall_materials_next, MetaBall_materials_end, MetaBall_materials_get, MetaBall_materials_length, MetaBall_materials_lookup_int, MetaBall_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

BoolPropertyRNA rna_MetaBall_is_editmode = {
	{(PropertyRNA *)&rna_MetaBall_animation_data, (PropertyRNA *)&rna_MetaBall_materials,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaBall_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_MetaBall_animation_data = {
	{nullptr, (PropertyRNA *)&rna_MetaBall_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	MetaBall_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

static float rna_MetaBall_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_MetaBall_transform_matrix = {
	{nullptr, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_MetaBall_transform_matrix_default
};

FunctionRNA rna_MetaBall_transform_func = {
	{(FunctionRNA *)&rna_MetaBall_update_gpu_tag_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MetaBall_transform_matrix, (PropertyRNA *)&rna_MetaBall_transform_matrix}},
	"transform", 0, "Transform metaball elements by a matrix",
	MetaBall_transform_call,
	nullptr
};

FunctionRNA rna_MetaBall_update_gpu_tag_func = {
	{nullptr, (FunctionRNA *)&rna_MetaBall_transform_func,
	nullptr,
	{nullptr, nullptr}},
	"update_gpu_tag", 0, "update_gpu_tag",
	MetaBall_update_gpu_tag_call,
	nullptr
};

StructRNA RNA_MetaBall = {
	{(ContainerRNA *)&RNA_MetaBallElements, (ContainerRNA *)&RNA_MetaElement,
	nullptr,
	{(PropertyRNA *)&rna_MetaBall_elements, (PropertyRNA *)&rna_MetaBall_animation_data}},
	"MetaBall", nullptr, nullptr, 519, nullptr, "MetaBall",
	"Metaball data-block to define blobby surfaces",
	"*", 162,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_MetaBall_transform_func, (FunctionRNA *)&rna_MetaBall_update_gpu_tag_func}
};

/* Metaball Elements */
CollectionPropertyRNA rna_MetaBallElements_rna_properties = {
	{(PropertyRNA *)&rna_MetaBallElements_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaBallElements_rna_properties_begin, MetaBallElements_rna_properties_next, MetaBallElements_rna_properties_end, MetaBallElements_rna_properties_get, nullptr, nullptr, MetaBallElements_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MetaBallElements_rna_type = {
	{(PropertyRNA *)&rna_MetaBallElements_active, (PropertyRNA *)&rna_MetaBallElements_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaBallElements_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_MetaBallElements_active = {
	{nullptr, (PropertyRNA *)&rna_MetaBallElements_rna_type,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Element",
	"Last selected element",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MetaBallElements_active_get, nullptr, nullptr, nullptr,&RNA_MetaElement
};

EnumPropertyRNA rna_MetaBallElements_new_type = {
	{(PropertyRNA *)&rna_MetaBallElements_new_element, nullptr,
	-1, "type", 3, 0, 0, 0, 0, "",
	"Type for the new metaball element",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_metaelem_type_items, 5, 0
};

PointerPropertyRNA rna_MetaBallElements_new_element = {
	{nullptr, (PropertyRNA *)&rna_MetaBallElements_new_type,
	-1, "element", 8388608, 0, 2, 0, 0, "",
	"The newly created metaball element",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MetaElement
};

FunctionRNA rna_MetaBallElements_new_func = {
	{(FunctionRNA *)&rna_MetaBallElements_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MetaBallElements_new_type, (PropertyRNA *)&rna_MetaBallElements_new_element}},
	"new", 0, "Add a new element to the metaball",
	MetaBallElements_new_call,
	(PropertyRNA *)&rna_MetaBallElements_new_element
};

PointerPropertyRNA rna_MetaBallElements_remove_element = {
	{nullptr, nullptr,
	-1, "element", 262144, 0, 5, 0, 0, "",
	"The element to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MetaElement
};

FunctionRNA rna_MetaBallElements_remove_func = {
	{(FunctionRNA *)&rna_MetaBallElements_clear_func, (FunctionRNA *)&rna_MetaBallElements_new_func,
	nullptr,
	{(PropertyRNA *)&rna_MetaBallElements_remove_element, (PropertyRNA *)&rna_MetaBallElements_remove_element}},
	"remove", 16, "Remove an element from the metaball",
	MetaBallElements_remove_call,
	nullptr
};

FunctionRNA rna_MetaBallElements_clear_func = {
	{nullptr, (FunctionRNA *)&rna_MetaBallElements_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all elements from the metaball",
	MetaBallElements_clear_call,
	nullptr
};

StructRNA RNA_MetaBallElements = {
	{(ContainerRNA *)&RNA_Modifier, (ContainerRNA *)&RNA_MetaBall,
	nullptr,
	{(PropertyRNA *)&rna_MetaBallElements_rna_properties, (PropertyRNA *)&rna_MetaBallElements_active}},
	"MetaBallElements", nullptr, nullptr, 516, nullptr, "Metaball Elements",
	"Collection of metaball elements",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MetaBallElements_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MetaBallElements_new_func, (FunctionRNA *)&rna_MetaBallElements_clear_func}
};

