
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

#include "rna_collection.cc"

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

RNA_EXTERN_C FloatPropertyRNA rna_Collection_instance_offset;
RNA_EXTERN_C CollectionPropertyRNA rna_Collection_objects;
RNA_EXTERN_C CollectionPropertyRNA rna_Collection_all_objects;
RNA_EXTERN_C CollectionPropertyRNA rna_Collection_children;
RNA_EXTERN_C CollectionPropertyRNA rna_Collection_collection_objects;
RNA_EXTERN_C CollectionPropertyRNA rna_Collection_collection_children;
RNA_EXTERN_C BoolPropertyRNA rna_Collection_hide_select;
RNA_EXTERN_C BoolPropertyRNA rna_Collection_hide_viewport;
RNA_EXTERN_C BoolPropertyRNA rna_Collection_hide_render;
RNA_EXTERN_C EnumPropertyRNA rna_Collection_lineart_usage;
RNA_EXTERN_C BoolPropertyRNA rna_Collection_lineart_use_intersection_mask;
RNA_EXTERN_C BoolPropertyRNA rna_Collection_lineart_intersection_mask;
RNA_EXTERN_C IntPropertyRNA rna_Collection_lineart_intersection_priority;
RNA_EXTERN_C BoolPropertyRNA rna_Collection_use_lineart_intersection_priority;
RNA_EXTERN_C EnumPropertyRNA rna_Collection_color_tag;

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



RNA_EXTERN_C CollectionPropertyRNA rna_CollectionObjects_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionObjects_rna_type;

extern FunctionRNA rna_CollectionObjects_link_func;
extern PointerPropertyRNA rna_CollectionObjects_link_object;

extern FunctionRNA rna_CollectionObjects_unlink_func;
extern PointerPropertyRNA rna_CollectionObjects_unlink_object;



RNA_EXTERN_C CollectionPropertyRNA rna_CollectionChildren_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionChildren_rna_type;

extern FunctionRNA rna_CollectionChildren_link_func;
extern PointerPropertyRNA rna_CollectionChildren_link_child;

extern FunctionRNA rna_CollectionChildren_unlink_func;
extern PointerPropertyRNA rna_CollectionChildren_unlink_child;



RNA_EXTERN_C CollectionPropertyRNA rna_CollectionLightLinking_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionLightLinking_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_CollectionLightLinking_link_state;


RNA_EXTERN_C CollectionPropertyRNA rna_CollectionObject_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionObject_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionObject_light_linking;


RNA_EXTERN_C CollectionPropertyRNA rna_CollectionChild_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionChild_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_CollectionChild_light_linking;

RNA_EXTERN_C void Collection_instance_offset_get(PointerRNA *ptr, float values[3])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->instance_offset)[i]);
    }
}

RNA_EXTERN_C void Collection_instance_offset_set(PointerRNA *ptr, const float values[3])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->instance_offset)[i] = values[i];
    }
}

static PointerRNA Collection_objects_get(CollectionPropertyIterator *iter)
{
    return rna_Collection_objects_get(iter);
}

RNA_EXTERN_C void Collection_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_objects;

    rna_Collection_objects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_objects_get(iter);
    }
}

RNA_EXTERN_C void Collection_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_objects_get(iter);
    }
}

RNA_EXTERN_C void Collection_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Collection_all_objects_get(CollectionPropertyIterator *iter)
{
    return rna_Collection_all_objects_get(iter);
}

RNA_EXTERN_C void Collection_all_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_all_objects;

    rna_Collection_all_objects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_all_objects_get(iter);
    }
}

RNA_EXTERN_C void Collection_all_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_all_objects_get(iter);
    }
}

RNA_EXTERN_C void Collection_all_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Collection_children_get(CollectionPropertyIterator *iter)
{
    return rna_Collection_children_get(iter);
}

RNA_EXTERN_C void Collection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_children;

    rna_Collection_children_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_children_get(iter);
    }
}

RNA_EXTERN_C void Collection_children_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_children_get(iter);
    }
}

RNA_EXTERN_C void Collection_children_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Collection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Collection_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_children_get(&iter); }
    }

    Collection_children_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Collection_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Collection_children_begin(&iter, ptr);

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
        Collection_children_next(&iter);
    }
    Collection_children_end(&iter);

    return found;
}

static PointerRNA Collection_collection_objects_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CollectionObject, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Collection_collection_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_collection_objects;

    rna_iterator_listbase_begin(iter, &data->gobject, nullptr);

    if (iter->valid) {
        iter->ptr = Collection_collection_objects_get(iter);
    }
}

RNA_EXTERN_C void Collection_collection_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_collection_objects_get(iter);
    }
}

RNA_EXTERN_C void Collection_collection_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Collection_collection_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Collection_collection_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_collection_objects_get(&iter); }
    }

    Collection_collection_objects_end(&iter);

    return found;
}

static PointerRNA Collection_collection_children_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CollectionChild, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Collection_collection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_collection_children;

    rna_iterator_listbase_begin(iter, &data->children, nullptr);

    if (iter->valid) {
        iter->ptr = Collection_collection_children_get(iter);
    }
}

RNA_EXTERN_C void Collection_collection_children_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_collection_children_get(iter);
    }
}

RNA_EXTERN_C void Collection_collection_children_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Collection_collection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Collection_collection_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_collection_children_get(&iter); }
    }

    Collection_collection_children_end(&iter);

    return found;
}

RNA_EXTERN_C bool Collection_hide_select_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Collection_hide_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Collection_hide_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Collection_hide_viewport_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Collection_hide_viewport_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Collection_hide_viewport_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Collection_hide_render_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void Collection_hide_render_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Collection_hide_render_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Collection_lineart_usage_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->lineart_usage);
}

RNA_EXTERN_C void Collection_lineart_usage_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
#ifdef __cplusplus
    data->lineart_usage = (std::remove_reference_t<decltype(data->lineart_usage)>)value;
#else
    data->lineart_usage = value;
#endif
}

RNA_EXTERN_C bool Collection_lineart_use_intersection_mask_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->lineart_flags) & 1) != 0);
}

RNA_EXTERN_C void Collection_lineart_use_intersection_mask_set(PointerRNA *ptr, bool value)
{
    Collection *data = (Collection *)(ptr->data);
    if (value) { data->lineart_flags |= 1; }
    else { data->lineart_flags &= ~1; }
}

RNA_EXTERN_C void Collection_lineart_intersection_mask_get(PointerRNA *ptr, bool values[8])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        values[i] = ((data->lineart_intersection_mask & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void Collection_lineart_intersection_mask_set(PointerRNA *ptr, const bool values[8])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (values[i]) { data->lineart_intersection_mask |= (1 << i); }
        else { data->lineart_intersection_mask &= ~(1 << i); }
    }
}

RNA_EXTERN_C int Collection_lineart_intersection_priority_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->lineart_intersection_priority);
}

RNA_EXTERN_C void Collection_lineart_intersection_priority_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
#ifdef __cplusplus
    data->lineart_intersection_priority = (std::remove_reference_t<decltype(data->lineart_intersection_priority)>)CLAMPIS(value, 0, 255);
#else
    data->lineart_intersection_priority = CLAMPIS(value, 0, 255);
#endif
}

RNA_EXTERN_C bool Collection_use_lineart_intersection_priority_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->lineart_flags) & 2) != 0);
}

RNA_EXTERN_C void Collection_use_lineart_intersection_priority_set(PointerRNA *ptr, bool value)
{
    Collection *data = (Collection *)(ptr->data);
    if (value) { data->lineart_flags |= 2; }
    else { data->lineart_flags &= ~2; }
}

RNA_EXTERN_C int Collection_color_tag_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Collection_color_tag_get;
    return fn(ptr);
}

RNA_EXTERN_C void Collection_color_tag_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Collection_color_tag_set;
    fn(ptr, value);
}

static PointerRNA CollectionObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CollectionObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionObjects_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CollectionObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CollectionObjects_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CollectionChildren_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CollectionChildren_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionChildren_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionChildren_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionChildren_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionChildren_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionChildren_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CollectionChildren_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CollectionChildren_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CollectionLightLinking_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CollectionLightLinking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionLightLinking_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionLightLinking_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionLightLinking_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionLightLinking_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionLightLinking_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CollectionLightLinking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CollectionLightLinking_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int CollectionLightLinking_link_state_get(PointerRNA *ptr)
{
    CollectionLightLinking *data = (CollectionLightLinking *)(ptr->data);
    return (int)(data->link_state);
}

RNA_EXTERN_C void CollectionLightLinking_link_state_set(PointerRNA *ptr, int value)
{
    CollectionLightLinking *data = (CollectionLightLinking *)(ptr->data);
#ifdef __cplusplus
    data->link_state = (std::remove_reference_t<decltype(data->link_state)>)value;
#else
    data->link_state = value;
#endif
}

static PointerRNA CollectionObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CollectionObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionObject_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionObject_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionObject_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CollectionObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CollectionObject_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA CollectionObject_light_linking_get(PointerRNA *ptr)
{
    CollectionObject *data = (CollectionObject *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CollectionLightLinking, &data->light_linking);
}

static PointerRNA CollectionChild_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CollectionChild_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionChild_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionChild_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionChild_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionChild_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollectionChild_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CollectionChild_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CollectionChild_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA CollectionChild_light_linking_get(PointerRNA *ptr)
{
    CollectionChild *data = (CollectionChild *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CollectionLightLinking, &data->light_linking);
}


RNA_EXTERN_C void CollectionObjects_link_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object)
{
	rna_Collection_objects_link(_self, bmain, reports, object);
}

static void CollectionObjects_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Collection_objects_link(_self, CTX_data_main(C), reports, object);
}

RNA_EXTERN_C void CollectionObjects_unlink_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object)
{
	rna_Collection_objects_unlink(_self, bmain, reports, object);
}

static void CollectionObjects_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Collection_objects_unlink(_self, CTX_data_main(C), reports, object);
}

/* Repeated prototypes to detect errors */

void rna_Collection_objects_link(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object);
void rna_Collection_objects_unlink(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object);

RNA_EXTERN_C void CollectionChildren_link_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child)
{
	rna_Collection_children_link(_self, bmain, reports, child);
}

static void CollectionChildren_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Collection *child;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	child = *((struct Collection **)_data);
	
	rna_Collection_children_link(_self, CTX_data_main(C), reports, child);
}

RNA_EXTERN_C void CollectionChildren_unlink_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child)
{
	rna_Collection_children_unlink(_self, bmain, reports, child);
}

static void CollectionChildren_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Collection *child;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	child = *((struct Collection **)_data);
	
	rna_Collection_children_unlink(_self, CTX_data_main(C), reports, child);
}

/* Repeated prototypes to detect errors */

void rna_Collection_children_link(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child);
void rna_Collection_children_unlink(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child);




/* Collection */
static float rna_Collection_instance_offset_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Collection_instance_offset = {
	{(PropertyRNA *)&rna_Collection_objects, nullptr,
	-1, "instance_offset", 3, 1, 0, 4, 0, "Instance Offset",
	"Offset from the origin to use when instancing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Collection_instance_offset_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Collection, instance_offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Collection_instance_offset_get, Collection_instance_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_Collection_instance_offset_default
};

CollectionPropertyRNA rna_Collection_objects = {
	{(PropertyRNA *)&rna_Collection_all_objects, (PropertyRNA *)&rna_Collection_instance_offset,
	-1, "objects", 128, 1, 0, 0, 0, "Objects",
	"Objects that are directly in this collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Collection_objects_override_apply,
	0, PROP_RAW_UNSET, &RNA_CollectionObjects},
	Collection_objects_begin, Collection_objects_next, Collection_objects_end, Collection_objects_get, nullptr, nullptr, nullptr, nullptr, &RNA_Object
};

CollectionPropertyRNA rna_Collection_all_objects = {
	{(PropertyRNA *)&rna_Collection_children, (PropertyRNA *)&rna_Collection_objects,
	-1, "all_objects", 128, 2, 0, 0, 0, "All Objects",
	"Objects that are in this collection and its child collections",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_all_objects_begin, Collection_all_objects_next, Collection_all_objects_end, Collection_all_objects_get, nullptr, nullptr, nullptr, nullptr, &RNA_Object
};

CollectionPropertyRNA rna_Collection_children = {
	{(PropertyRNA *)&rna_Collection_collection_objects, (PropertyRNA *)&rna_Collection_all_objects,
	-1, "children", 128, 1, 0, 0, 0, "Children",
	"Collections that are immediate children of this collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Collection_children_override_apply,
	0, PROP_RAW_UNSET, &RNA_CollectionChildren},
	Collection_children_begin, Collection_children_next, Collection_children_end, Collection_children_get, nullptr, Collection_children_lookup_int, Collection_children_lookup_string, nullptr, &RNA_Collection
};

CollectionPropertyRNA rna_Collection_collection_objects = {
	{(PropertyRNA *)&rna_Collection_collection_children, (PropertyRNA *)&rna_Collection_children,
	-1, "collection_objects", 0, 1, 0, 0, 0, "Collection Objects",
	"Objects of the collection with their parent-collection-specific settings",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_collection_objects_begin, Collection_collection_objects_next, Collection_collection_objects_end, Collection_collection_objects_get, nullptr, Collection_collection_objects_lookup_int, nullptr, nullptr, &RNA_CollectionObject
};

CollectionPropertyRNA rna_Collection_collection_children = {
	{(PropertyRNA *)&rna_Collection_hide_select, (PropertyRNA *)&rna_Collection_collection_objects,
	-1, "collection_children", 0, 1, 0, 0, 0, "Collection Children",
	"Children collections their parent-collection-specific settings",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_collection_children_begin, Collection_collection_children_next, Collection_collection_children_end, Collection_collection_children_get, nullptr, Collection_collection_children_lookup_int, nullptr, nullptr, &RNA_CollectionChild
};

BoolPropertyRNA rna_Collection_hide_select = {
	{(PropertyRNA *)&rna_Collection_hide_viewport, (PropertyRNA *)&rna_Collection_collection_children,
	-1, "hide_select", 4353, 1, 0, 0, 0, "Disable Selection",
	"Disable selection in viewport",
	256, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Collection_flag_update, 90505216, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_hide_select_get, Collection_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Collection_hide_viewport = {
	{(PropertyRNA *)&rna_Collection_hide_render, (PropertyRNA *)&rna_Collection_hide_select,
	-1, "hide_viewport", 4353, 1, 0, 0, 0, "Disable in Viewports",
	"Globally disable in viewports",
	284, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Collection_flag_update, 90505216, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_hide_viewport_get, Collection_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Collection_hide_render = {
	{(PropertyRNA *)&rna_Collection_lineart_usage, (PropertyRNA *)&rna_Collection_hide_viewport,
	-1, "hide_render", 4353, 1, 0, 0, 0, "Disable in Renders",
	"Globally disable in renders",
	258, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Collection_flag_update, 90505216, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_hide_render_get, Collection_hide_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Collection_lineart_usage_items[7] = {
	{0, "INCLUDE", 0, "Include", "Generate feature lines for this collection"},
	{1, "OCCLUSION_ONLY", 0, "Occlusion Only", "Only use the collection to produce occlusion"},
	{2, "EXCLUDE", 0, "Exclude", "Don\'t use this collection in line art"},
	{4, "INTERSECTION_ONLY", 0, "Intersection Only", "Only generate intersection lines for this collection"},
	{8, "NO_INTERSECTION", 0, "No Intersection", "Include this collection but do not generate intersection lines"},
	{16, "FORCE_INTERSECTION", 0, "Force Intersection", "Generate intersection lines even with objects that disabled intersection"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Collection_lineart_usage = {
	{(PropertyRNA *)&rna_Collection_lineart_use_intersection_mask, (PropertyRNA *)&rna_Collection_hide_render,
	-1, "lineart_usage", 3, 1, 0, 0, 0, "Usage",
	"How to use this collection in line art",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_lineart_usage_get, Collection_lineart_usage_set, nullptr, nullptr, nullptr, rna_Collection_lineart_usage_items, 6, 0
};

BoolPropertyRNA rna_Collection_lineart_use_intersection_mask = {
	{(PropertyRNA *)&rna_Collection_lineart_intersection_mask, (PropertyRNA *)&rna_Collection_lineart_usage,
	-1, "lineart_use_intersection_mask", 3, 1, 0, 0, 0, "Use Intersection Masks",
	"Use custom intersection mask for faces in this collection",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_lineart_use_intersection_mask_get, Collection_lineart_use_intersection_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static bool rna_Collection_lineart_intersection_mask_default[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_Collection_lineart_intersection_mask = {
	{(PropertyRNA *)&rna_Collection_lineart_intersection_priority, (PropertyRNA *)&rna_Collection_lineart_use_intersection_mask,
	-1, "lineart_intersection_mask", 3, 1, 0, 0, 0, "Masks",
	"Intersection generated by this collection will have this mask value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {8, 0, 0}, 8,
	nullptr, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Collection_lineart_intersection_mask_get, Collection_lineart_intersection_mask_set, nullptr, nullptr, nullptr, nullptr, 0, rna_Collection_lineart_intersection_mask_default
};

IntPropertyRNA rna_Collection_lineart_intersection_priority = {
	{(PropertyRNA *)&rna_Collection_use_lineart_intersection_priority, (PropertyRNA *)&rna_Collection_lineart_intersection_mask,
	-1, "lineart_intersection_priority", 3, 1, 0, 0, 0, "Intersection Priority",
	"The intersection line will be included into the object with the higher intersection priority value",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_lineart_intersection_priority_get, Collection_lineart_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

BoolPropertyRNA rna_Collection_use_lineart_intersection_priority = {
	{(PropertyRNA *)&rna_Collection_color_tag, (PropertyRNA *)&rna_Collection_lineart_intersection_priority,
	-1, "use_lineart_intersection_priority", 3, 1, 0, 0, 0, "Use Intersection Priority",
	"Assign intersection priority value for this collection",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_use_lineart_intersection_priority_get, Collection_use_lineart_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_Collection_color_tag = {
	{nullptr, (PropertyRNA *)&rna_Collection_use_lineart_intersection_priority,
	-1, "color_tag", 3, 1, 0, 0, 0, "Collection Color",
	"Color tag for a collection",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Collection_color_tag_update, 90505216, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Collection_color_tag_get, Collection_color_tag_set, nullptr, nullptr, nullptr, rna_enum_collection_color_items, 9, 0
};

StructRNA RNA_Collection = {
	{(ContainerRNA *)&RNA_CollectionObjects, (ContainerRNA *)&RNA_ClothCollisionSettings,
	nullptr,
	{(PropertyRNA *)&rna_Collection_instance_offset, (PropertyRNA *)&rna_Collection_color_tag}},
	"Collection", nullptr, nullptr, 517, nullptr, "Collection",
	"Collection of Object data-blocks",
	"*", 250,
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

/* Collection Objects */
CollectionPropertyRNA rna_CollectionObjects_rna_properties = {
	{(PropertyRNA *)&rna_CollectionObjects_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionObjects_rna_properties_begin, CollectionObjects_rna_properties_next, CollectionObjects_rna_properties_end, CollectionObjects_rna_properties_get, nullptr, nullptr, CollectionObjects_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CollectionObjects_rna_type = {
	{nullptr, (PropertyRNA *)&rna_CollectionObjects_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionObjects_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CollectionObjects_link_object = {
	{nullptr, nullptr,
	-1, "object", 8650880, 1, 1, 0, 0, "",
	"Object to add",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

FunctionRNA rna_CollectionObjects_link_func = {
	{(FunctionRNA *)&rna_CollectionObjects_unlink_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CollectionObjects_link_object, (PropertyRNA *)&rna_CollectionObjects_link_object}},
	"link", 20, "Add this object to a collection",
	CollectionObjects_link_call,
	nullptr
};

PointerPropertyRNA rna_CollectionObjects_unlink_object = {
	{nullptr, nullptr,
	-1, "object", 8388736, 1, 1, 0, 0, "",
	"Object to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

FunctionRNA rna_CollectionObjects_unlink_func = {
	{nullptr, (FunctionRNA *)&rna_CollectionObjects_link_func,
	nullptr,
	{(PropertyRNA *)&rna_CollectionObjects_unlink_object, (PropertyRNA *)&rna_CollectionObjects_unlink_object}},
	"unlink", 20, "Remove this object from a collection",
	CollectionObjects_unlink_call,
	nullptr
};

StructRNA RNA_CollectionObjects = {
	{(ContainerRNA *)&RNA_CollectionChildren, (ContainerRNA *)&RNA_Collection,
	nullptr,
	{(PropertyRNA *)&rna_CollectionObjects_rna_properties, (PropertyRNA *)&rna_CollectionObjects_rna_type}},
	"CollectionObjects", nullptr, nullptr, 516, nullptr, "Collection Objects",
	"Collection of collection objects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CollectionObjects_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CollectionObjects_link_func, (FunctionRNA *)&rna_CollectionObjects_unlink_func}
};

/* Collection Children */
CollectionPropertyRNA rna_CollectionChildren_rna_properties = {
	{(PropertyRNA *)&rna_CollectionChildren_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionChildren_rna_properties_begin, CollectionChildren_rna_properties_next, CollectionChildren_rna_properties_end, CollectionChildren_rna_properties_get, nullptr, nullptr, CollectionChildren_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CollectionChildren_rna_type = {
	{nullptr, (PropertyRNA *)&rna_CollectionChildren_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionChildren_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CollectionChildren_link_child = {
	{nullptr, nullptr,
	-1, "child", 8650880, 1, 1, 0, 0, "",
	"Collection to add",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Collection
};

FunctionRNA rna_CollectionChildren_link_func = {
	{(FunctionRNA *)&rna_CollectionChildren_unlink_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CollectionChildren_link_child, (PropertyRNA *)&rna_CollectionChildren_link_child}},
	"link", 20, "Add this collection as child of this collection",
	CollectionChildren_link_call,
	nullptr
};

PointerPropertyRNA rna_CollectionChildren_unlink_child = {
	{nullptr, nullptr,
	-1, "child", 8388736, 1, 1, 0, 0, "",
	"Collection to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Collection
};

FunctionRNA rna_CollectionChildren_unlink_func = {
	{nullptr, (FunctionRNA *)&rna_CollectionChildren_link_func,
	nullptr,
	{(PropertyRNA *)&rna_CollectionChildren_unlink_child, (PropertyRNA *)&rna_CollectionChildren_unlink_child}},
	"unlink", 20, "Remove this child collection from a collection",
	CollectionChildren_unlink_call,
	nullptr
};

StructRNA RNA_CollectionChildren = {
	{(ContainerRNA *)&RNA_CollectionLightLinking, (ContainerRNA *)&RNA_CollectionObjects,
	nullptr,
	{(PropertyRNA *)&rna_CollectionChildren_rna_properties, (PropertyRNA *)&rna_CollectionChildren_rna_type}},
	"CollectionChildren", nullptr, nullptr, 516, nullptr, "Collection Children",
	"Collection of child collections",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CollectionChildren_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CollectionChildren_link_func, (FunctionRNA *)&rna_CollectionChildren_unlink_func}
};

/* Collection Light Linking */
CollectionPropertyRNA rna_CollectionLightLinking_rna_properties = {
	{(PropertyRNA *)&rna_CollectionLightLinking_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionLightLinking_rna_properties_begin, CollectionLightLinking_rna_properties_next, CollectionLightLinking_rna_properties_end, CollectionLightLinking_rna_properties_get, nullptr, nullptr, CollectionLightLinking_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CollectionLightLinking_rna_type = {
	{(PropertyRNA *)&rna_CollectionLightLinking_link_state, (PropertyRNA *)&rna_CollectionLightLinking_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionLightLinking_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_CollectionLightLinking_link_state_items[3] = {
	{0, "INCLUDE", 239, "Include", ""},
	{1, "EXCLUDE", 78, "Exclude", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CollectionLightLinking_link_state = {
	{nullptr, (PropertyRNA *)&rna_CollectionLightLinking_rna_type,
	-1, "link_state", 1, 0, 0, 0, 0, "Link State",
	"Light or shadow receiving state of the object or collection",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollectionLightLinking_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionLightLinking_link_state_get, CollectionLightLinking_link_state_set, nullptr, nullptr, nullptr, rna_CollectionLightLinking_link_state_items, 2, 0
};

StructRNA RNA_CollectionLightLinking = {
	{(ContainerRNA *)&RNA_CollectionObject, (ContainerRNA *)&RNA_CollectionChildren,
	nullptr,
	{(PropertyRNA *)&rna_CollectionLightLinking_rna_properties, (PropertyRNA *)&rna_CollectionLightLinking_link_state}},
	"CollectionLightLinking", nullptr, nullptr, 516, nullptr, "Collection Light Linking",
	"Light linking settings of objects and children collections of a collection",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CollectionLightLinking_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_CollectionLightLinking_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Collection Object */
CollectionPropertyRNA rna_CollectionObject_rna_properties = {
	{(PropertyRNA *)&rna_CollectionObject_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionObject_rna_properties_begin, CollectionObject_rna_properties_next, CollectionObject_rna_properties_end, CollectionObject_rna_properties_get, nullptr, nullptr, CollectionObject_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CollectionObject_rna_type = {
	{(PropertyRNA *)&rna_CollectionObject_light_linking, (PropertyRNA *)&rna_CollectionObject_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionObject_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CollectionObject_light_linking = {
	{nullptr, (PropertyRNA *)&rna_CollectionObject_rna_type,
	-1, "light_linking", 8650752, 0, 0, 0, 0, "Light Linking",
	"Light linking settings of the collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionObject_light_linking_get, nullptr, nullptr, nullptr,&RNA_CollectionLightLinking
};

StructRNA RNA_CollectionObject = {
	{(ContainerRNA *)&RNA_CollectionChild, (ContainerRNA *)&RNA_CollectionLightLinking,
	nullptr,
	{(PropertyRNA *)&rna_CollectionObject_rna_properties, (PropertyRNA *)&rna_CollectionObject_light_linking}},
	"CollectionObject", nullptr, nullptr, 516, nullptr, "Collection Object",
	"Object of a collection with its collection related settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CollectionObject_rna_properties,
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

/* Collection Child */
CollectionPropertyRNA rna_CollectionChild_rna_properties = {
	{(PropertyRNA *)&rna_CollectionChild_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionChild_rna_properties_begin, CollectionChild_rna_properties_next, CollectionChild_rna_properties_end, CollectionChild_rna_properties_get, nullptr, nullptr, CollectionChild_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CollectionChild_rna_type = {
	{(PropertyRNA *)&rna_CollectionChild_light_linking, (PropertyRNA *)&rna_CollectionChild_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionChild_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CollectionChild_light_linking = {
	{nullptr, (PropertyRNA *)&rna_CollectionChild_rna_type,
	-1, "light_linking", 8650752, 0, 0, 0, 0, "Light Linking",
	"Light linking settings of the collection object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionChild_light_linking_get, nullptr, nullptr, nullptr,&RNA_CollectionLightLinking
};

StructRNA RNA_CollectionChild = {
	{(ContainerRNA *)&RNA_CurveMapPoint, (ContainerRNA *)&RNA_CollectionObject,
	nullptr,
	{(PropertyRNA *)&rna_CollectionChild_rna_properties, (PropertyRNA *)&rna_CollectionChild_light_linking}},
	"CollectionChild", nullptr, nullptr, 516, nullptr, "Collection Child",
	"Child collection with its collection related settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CollectionChild_rna_properties,
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

