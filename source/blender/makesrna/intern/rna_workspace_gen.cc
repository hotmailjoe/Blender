
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

#include "rna_workspace.cc"
#include "rna_workspace_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_wmOwnerID_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_wmOwnerID_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_wmOwnerID_name;


RNA_EXTERN_C CollectionPropertyRNA rna_WorkSpaceTool_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_WorkSpaceTool_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_WorkSpaceTool_idname;
RNA_EXTERN_C StringPropertyRNA rna_WorkSpaceTool_idname_fallback;
RNA_EXTERN_C IntPropertyRNA rna_WorkSpaceTool_index;
RNA_EXTERN_C EnumPropertyRNA rna_WorkSpaceTool_space_type;
RNA_EXTERN_C EnumPropertyRNA rna_WorkSpaceTool_mode;
RNA_EXTERN_C BoolPropertyRNA rna_WorkSpaceTool_use_paint_canvas;
RNA_EXTERN_C BoolPropertyRNA rna_WorkSpaceTool_has_datablock;
RNA_EXTERN_C StringPropertyRNA rna_WorkSpaceTool_widget;

extern FunctionRNA rna_WorkSpaceTool_setup_func;
extern StringPropertyRNA rna_WorkSpaceTool_setup_idname;
extern EnumPropertyRNA rna_WorkSpaceTool_setup_cursor;
extern StringPropertyRNA rna_WorkSpaceTool_setup_keymap;
extern StringPropertyRNA rna_WorkSpaceTool_setup_gizmo_group;
extern StringPropertyRNA rna_WorkSpaceTool_setup_data_block;
extern StringPropertyRNA rna_WorkSpaceTool_setup_operator;
extern IntPropertyRNA rna_WorkSpaceTool_setup_index;
extern EnumPropertyRNA rna_WorkSpaceTool_setup_options;
extern StringPropertyRNA rna_WorkSpaceTool_setup_idname_fallback;
extern StringPropertyRNA rna_WorkSpaceTool_setup_keymap_fallback;

extern FunctionRNA rna_WorkSpaceTool_operator_properties_func;
extern StringPropertyRNA rna_WorkSpaceTool_operator_properties_operator;
extern PointerPropertyRNA rna_WorkSpaceTool_operator_properties_result;

extern FunctionRNA rna_WorkSpaceTool_gizmo_group_properties_func;
extern StringPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_group;
extern PointerPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_result;

extern FunctionRNA rna_WorkSpaceTool_refresh_from_context_func;


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

RNA_EXTERN_C CollectionPropertyRNA rna_WorkSpace_screens;
RNA_EXTERN_C CollectionPropertyRNA rna_WorkSpace_owner_ids;
RNA_EXTERN_C CollectionPropertyRNA rna_WorkSpace_tools;
RNA_EXTERN_C EnumPropertyRNA rna_WorkSpace_object_mode;
RNA_EXTERN_C BoolPropertyRNA rna_WorkSpace_use_pin_scene;
RNA_EXTERN_C BoolPropertyRNA rna_WorkSpace_use_filter_by_owner;
RNA_EXTERN_C EnumPropertyRNA rna_WorkSpace_asset_library_reference;

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


extern FunctionRNA rna_WorkSpace_status_text_set_internal_func;
extern StringPropertyRNA rna_WorkSpace_status_text_set_internal_text;



RNA_EXTERN_C CollectionPropertyRNA rna_wmOwnerIDs_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_wmOwnerIDs_rna_type;

extern FunctionRNA rna_wmOwnerIDs_new_func;
extern StringPropertyRNA rna_wmOwnerIDs_new_name;
extern PointerPropertyRNA rna_wmOwnerIDs_new_owner_id;

extern FunctionRNA rna_wmOwnerIDs_remove_func;
extern PointerPropertyRNA rna_wmOwnerIDs_remove_owner_id;

extern FunctionRNA rna_wmOwnerIDs_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_wmTools_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_wmTools_rna_type;

extern FunctionRNA rna_wmTools_from_space_view3d_mode_func;
extern EnumPropertyRNA rna_wmTools_from_space_view3d_mode_mode;
extern BoolPropertyRNA rna_wmTools_from_space_view3d_mode_create;
extern PointerPropertyRNA rna_wmTools_from_space_view3d_mode_result;

extern FunctionRNA rna_wmTools_from_space_image_mode_func;
extern EnumPropertyRNA rna_wmTools_from_space_image_mode_mode;
extern BoolPropertyRNA rna_wmTools_from_space_image_mode_create;
extern PointerPropertyRNA rna_wmTools_from_space_image_mode_result;

extern FunctionRNA rna_wmTools_from_space_node_func;
extern BoolPropertyRNA rna_wmTools_from_space_node_create;
extern PointerPropertyRNA rna_wmTools_from_space_node_result;

extern FunctionRNA rna_wmTools_from_space_sequencer_func;
extern EnumPropertyRNA rna_wmTools_from_space_sequencer_mode;
extern BoolPropertyRNA rna_wmTools_from_space_sequencer_create;
extern PointerPropertyRNA rna_wmTools_from_space_sequencer_result;


static PointerRNA wmOwnerID_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void wmOwnerID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_wmOwnerID_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmOwnerID_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void wmOwnerID_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = wmOwnerID_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void wmOwnerID_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int wmOwnerID_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA wmOwnerID_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void wmOwnerID_name_get(PointerRNA *ptr, char *value)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int wmOwnerID_name_length(PointerRNA *ptr)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void wmOwnerID_name_set(PointerRNA *ptr, const char *value)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA WorkSpaceTool_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void WorkSpaceTool_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpaceTool_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorkSpaceTool_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void WorkSpaceTool_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpaceTool_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void WorkSpaceTool_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WorkSpaceTool_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA WorkSpaceTool_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void WorkSpaceTool_idname_get(PointerRNA *ptr, char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

RNA_EXTERN_C int WorkSpaceTool_idname_length(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void WorkSpaceTool_idname_set(PointerRNA *ptr, const char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

RNA_EXTERN_C void WorkSpaceTool_idname_fallback_get(PointerRNA *ptr, char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_assert(strlen(data->idname_fallback) < 64);
    strcpy(value, data->idname_fallback);
}

RNA_EXTERN_C int WorkSpaceTool_idname_fallback_length(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return strlen(data->idname_fallback);
}

RNA_EXTERN_C void WorkSpaceTool_idname_fallback_set(PointerRNA *ptr, const char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(data->idname_fallback, value, 64);
}

RNA_EXTERN_C int WorkSpaceTool_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_WorkSpaceTool_index_get;
    return fn(ptr);
}

RNA_EXTERN_C int WorkSpaceTool_space_type_get(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return (int)(data->space_type);
}

RNA_EXTERN_C int WorkSpaceTool_mode_get(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C bool WorkSpaceTool_use_paint_canvas_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_WorkSpaceTool_use_paint_canvas_get;
    return fn(ptr);
}

RNA_EXTERN_C bool WorkSpaceTool_has_datablock_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_WorkSpaceTool_has_datablock_get;
    return fn(ptr);
}

RNA_EXTERN_C void WorkSpaceTool_widget_get(PointerRNA *ptr, char *value)
{
    rna_WorkSpaceTool_widget_get(ptr, value);
}

RNA_EXTERN_C int WorkSpaceTool_widget_length(PointerRNA *ptr)
{
    return rna_WorkSpaceTool_widget_length(ptr);
}

static PointerRNA WorkSpace_screens_get(CollectionPropertyIterator *iter)
{
    return rna_workspace_screens_item_get(iter);
}

RNA_EXTERN_C void WorkSpace_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpace_screens;

    rna_workspace_screens_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_screens_get(iter);
    }
}

RNA_EXTERN_C void WorkSpace_screens_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_screens_get(iter);
    }
}

RNA_EXTERN_C void WorkSpace_screens_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WorkSpace_screens_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WorkSpace_screens_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_screens_get(&iter); }
    }

    WorkSpace_screens_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int WorkSpace_screens_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_screens_begin(&iter, ptr);

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
        WorkSpace_screens_next(&iter);
    }
    WorkSpace_screens_end(&iter);

    return found;
}

static PointerRNA WorkSpace_owner_ids_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_wmOwnerID, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void WorkSpace_owner_ids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpace_owner_ids;

    rna_iterator_listbase_begin(iter, &data->owner_ids, nullptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_owner_ids_get(iter);
    }
}

RNA_EXTERN_C void WorkSpace_owner_ids_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_owner_ids_get(iter);
    }
}

RNA_EXTERN_C void WorkSpace_owner_ids_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WorkSpace_owner_ids_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WorkSpace_owner_ids_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_owner_ids_get(&iter); }
    }

    WorkSpace_owner_ids_end(&iter);

    return found;
}

RNA_EXTERN_C int wmOwnerID_name_length(PointerRNA *);
RNA_EXTERN_C void wmOwnerID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int WorkSpace_owner_ids_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_owner_ids_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = wmOwnerID_name_length(&iter.ptr);
            if (namelen < 1024) {
                wmOwnerID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                wmOwnerID_name_get(&iter.ptr, name);
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
        WorkSpace_owner_ids_next(&iter);
    }
    WorkSpace_owner_ids_end(&iter);

    return found;
}

static PointerRNA WorkSpace_tools_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_WorkSpaceTool, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void WorkSpace_tools_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpace_tools;

    rna_iterator_listbase_begin(iter, &data->tools, nullptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_tools_get(iter);
    }
}

RNA_EXTERN_C void WorkSpace_tools_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_tools_get(iter);
    }
}

RNA_EXTERN_C void WorkSpace_tools_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WorkSpace_tools_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WorkSpace_tools_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_tools_get(&iter); }
    }

    WorkSpace_tools_end(&iter);

    return found;
}

RNA_EXTERN_C int WorkSpaceTool_idname_length(PointerRNA *);
RNA_EXTERN_C void WorkSpaceTool_idname_get(PointerRNA *, char *);

RNA_EXTERN_C int WorkSpace_tools_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_tools_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = WorkSpaceTool_idname_length(&iter.ptr);
            if (namelen < 1024) {
                WorkSpaceTool_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                WorkSpaceTool_idname_get(&iter.ptr, name);
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
        WorkSpace_tools_next(&iter);
    }
    WorkSpace_tools_end(&iter);

    return found;
}

RNA_EXTERN_C int WorkSpace_object_mode_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (int)(data->object_mode);
}

RNA_EXTERN_C void WorkSpace_object_mode_set(PointerRNA *ptr, int value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
#ifdef __cplusplus
    data->object_mode = (std::remove_reference_t<decltype(data->object_mode)>)value;
#else
    data->object_mode = value;
#endif
}

RNA_EXTERN_C bool WorkSpace_use_pin_scene_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void WorkSpace_use_pin_scene_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C bool WorkSpace_use_filter_by_owner_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void WorkSpace_use_filter_by_owner_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C int WorkSpace_asset_library_reference_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_WorkSpace_asset_library_get;
    return fn(ptr);
}

RNA_EXTERN_C void WorkSpace_asset_library_reference_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_WorkSpace_asset_library_set;
    fn(ptr, value);
}

static PointerRNA wmOwnerIDs_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void wmOwnerIDs_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_wmOwnerIDs_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmOwnerIDs_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void wmOwnerIDs_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = wmOwnerIDs_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void wmOwnerIDs_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int wmOwnerIDs_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA wmOwnerIDs_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA wmTools_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void wmTools_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_wmTools_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmTools_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void wmTools_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = wmTools_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void wmTools_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int wmTools_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA wmTools_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


RNA_EXTERN_C void WorkSpaceTool_setup_func(struct ID *_selfid, struct bToolRef *_self, bContext *C, const char * idname, int cursor, const char * keymap, const char * gizmo_group, const char * data_block, const char * operator_value, int index, int options, const char * idname_fallback, const char * keymap_fallback)
{
	rna_WorkSpaceTool_setup(_selfid, _self, C, idname, cursor, keymap, gizmo_group, data_block, operator_value, index, options, idname_fallback, keymap_fallback);
}

static void WorkSpaceTool_setup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bToolRef *_self;
	const char * idname;
	int cursor;
	const char * keymap;
	const char * gizmo_group;
	const char * data_block;
	const char * operator_value;
	int index;
	int options;
	const char * idname_fallback;
	const char * keymap_fallback;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	cursor = *((int *)_data);
	_data += 8;
	keymap = *((const char * *)_data);
	_data += 8;
	gizmo_group = *((const char * *)_data);
	_data += 8;
	data_block = *((const char * *)_data);
	_data += 8;
	operator_value = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	options = *((int *)_data);
	_data += 8;
	idname_fallback = *((const char * *)_data);
	_data += 8;
	keymap_fallback = *((const char * *)_data);
	
	rna_WorkSpaceTool_setup(_selfid, _self, C, idname, cursor, keymap, gizmo_group, data_block, operator_value, index, options, idname_fallback, keymap_fallback);
}

RNA_EXTERN_C struct PointerRNA WorkSpaceTool_operator_properties_func(struct bToolRef *_self, ReportList *reports, const char * operator_value)
{
	return rna_WorkSpaceTool_operator_properties(_self, reports, operator_value);
}

static void WorkSpaceTool_operator_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bToolRef *_self;
	const char * operator_value;
	struct PointerRNA result;
	char *_data, *_retdata;
	
	_self = (struct bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	operator_value = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpaceTool_operator_properties(_self, reports, operator_value);
	*((struct PointerRNA *)_retdata) = result;
}

RNA_EXTERN_C struct PointerRNA WorkSpaceTool_gizmo_group_properties_func(struct bToolRef *_self, ReportList *reports, const char * group)
{
	return rna_WorkSpaceTool_gizmo_group_properties(_self, reports, group);
}

static void WorkSpaceTool_gizmo_group_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bToolRef *_self;
	const char * group;
	struct PointerRNA result;
	char *_data, *_retdata;
	
	_self = (struct bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpaceTool_gizmo_group_properties(_self, reports, group);
	*((struct PointerRNA *)_retdata) = result;
}

RNA_EXTERN_C void WorkSpaceTool_refresh_from_context_func(struct ID *_selfid, struct bToolRef *_self, Main *bmain)
{
	rna_WorkSpaceTool_refresh_from_context(_selfid, _self, bmain);
}

static void WorkSpaceTool_refresh_from_context_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bToolRef *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bToolRef *)_ptr->data;
	
	rna_WorkSpaceTool_refresh_from_context(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_WorkSpaceTool_setup(struct ID *_selfid, struct bToolRef *_self, bContext *C, const char * idname, int cursor, const char * keymap, const char * gizmo_group, const char * data_block, const char * operator_value, int index, int options, const char * idname_fallback, const char * keymap_fallback);
struct PointerRNA rna_WorkSpaceTool_operator_properties(struct bToolRef *_self, ReportList *reports, const char * operator_value);
struct PointerRNA rna_WorkSpaceTool_gizmo_group_properties(struct bToolRef *_self, ReportList *reports, const char * group);
void rna_WorkSpaceTool_refresh_from_context(struct ID *_selfid, struct bToolRef *_self, Main *bmain);

RNA_EXTERN_C void WorkSpace_status_text_set_internal_func(bContext *C, const char * text)
{
	ED_workspace_status_text(C, text);
}

static void WorkSpace_status_text_set_internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * text;
	char *_data;
	
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	ED_workspace_status_text(C, text);
}

/* Repeated prototypes to detect errors */

void ED_workspace_status_text(bContext *C, const char * text);

RNA_EXTERN_C struct wmOwnerID *wmOwnerIDs_new_func(struct WorkSpace *_self, const char * name)
{
	return rna_WorkSpace_owner_ids_new(_self, name);
}

static void wmOwnerIDs_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	const char * name;
	struct wmOwnerID *owner_id;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	owner_id = rna_WorkSpace_owner_ids_new(_self, name);
	*((struct wmOwnerID **)_retdata) = owner_id;
}

RNA_EXTERN_C void wmOwnerIDs_remove_func(struct WorkSpace *_self, ReportList *reports, struct PointerRNA *owner_id)
{
	rna_WorkSpace_owner_ids_remove(_self, reports, owner_id);
}

static void wmOwnerIDs_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	struct PointerRNA *owner_id;
	char *_data;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	owner_id = *((struct PointerRNA **)_data);
	
	rna_WorkSpace_owner_ids_remove(_self, reports, owner_id);
}

RNA_EXTERN_C void wmOwnerIDs_clear_func(struct WorkSpace *_self)
{
	rna_WorkSpace_owner_ids_clear(_self);
}

static void wmOwnerIDs_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	_self = (struct WorkSpace *)_ptr->data;
	
	rna_WorkSpace_owner_ids_clear(_self);
}

/* Repeated prototypes to detect errors */

struct wmOwnerID *rna_WorkSpace_owner_ids_new(struct WorkSpace *_self, const char * name);
void rna_WorkSpace_owner_ids_remove(struct WorkSpace *_self, ReportList *reports, struct PointerRNA *owner_id);
void rna_WorkSpace_owner_ids_clear(struct WorkSpace *_self);

RNA_EXTERN_C struct bToolRef *wmTools_from_space_view3d_mode_func(struct WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_view3d_mode(_self, mode, create);
}

static void wmTools_from_space_view3d_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	int mode;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_view3d_mode(_self, mode, create);
	*((struct bToolRef **)_retdata) = result;
}

RNA_EXTERN_C struct bToolRef *wmTools_from_space_image_mode_func(struct WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_image_mode(_self, mode, create);
}

static void wmTools_from_space_image_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	int mode;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_image_mode(_self, mode, create);
	*((struct bToolRef **)_retdata) = result;
}

RNA_EXTERN_C struct bToolRef *wmTools_from_space_node_func(struct WorkSpace *_self, bool create)
{
	return rna_WorkSpace_tools_from_space_node(_self, create);
}

static void wmTools_from_space_node_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_node(_self, create);
	*((struct bToolRef **)_retdata) = result;
}

RNA_EXTERN_C struct bToolRef *wmTools_from_space_sequencer_func(struct WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_sequencer(_self, mode, create);
}

static void wmTools_from_space_sequencer_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	int mode;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_sequencer(_self, mode, create);
	*((struct bToolRef **)_retdata) = result;
}

/* Repeated prototypes to detect errors */

struct bToolRef *rna_WorkSpace_tools_from_space_view3d_mode(struct WorkSpace *_self, int mode, bool create);
struct bToolRef *rna_WorkSpace_tools_from_space_image_mode(struct WorkSpace *_self, int mode, bool create);
struct bToolRef *rna_WorkSpace_tools_from_space_node(struct WorkSpace *_self, bool create);
struct bToolRef *rna_WorkSpace_tools_from_space_sequencer(struct WorkSpace *_self, int mode, bool create);

/* Work Space UI Tag */
CollectionPropertyRNA rna_wmOwnerID_rna_properties = {
	{(PropertyRNA *)&rna_wmOwnerID_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmOwnerID_rna_properties_begin, wmOwnerID_rna_properties_next, wmOwnerID_rna_properties_end, wmOwnerID_rna_properties_get, nullptr, nullptr, wmOwnerID_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_wmOwnerID_rna_type = {
	{(PropertyRNA *)&rna_wmOwnerID_name, (PropertyRNA *)&rna_wmOwnerID_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmOwnerID_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_wmOwnerID_name = {
	{nullptr, (PropertyRNA *)&rna_wmOwnerID_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmOwnerID_name_get, wmOwnerID_name_length, wmOwnerID_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StructRNA RNA_wmOwnerID = {
	{(ContainerRNA *)&RNA_WorkSpaceTool, (ContainerRNA *)&RNA_GizmoGroupProperties,
	nullptr,
	{(PropertyRNA *)&rna_wmOwnerID_rna_properties, (PropertyRNA *)&rna_wmOwnerID_name}},
	"wmOwnerID", nullptr, nullptr, 512, nullptr, "Work Space UI Tag",
	"",
	"*", 17,
	(PropertyRNA *)&rna_wmOwnerID_name, (PropertyRNA *)&rna_wmOwnerID_rna_properties,
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

/* Work Space Tool */
CollectionPropertyRNA rna_WorkSpaceTool_rna_properties = {
	{(PropertyRNA *)&rna_WorkSpaceTool_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_rna_properties_begin, WorkSpaceTool_rna_properties_next, WorkSpaceTool_rna_properties_end, WorkSpaceTool_rna_properties_get, nullptr, nullptr, WorkSpaceTool_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_WorkSpaceTool_rna_type = {
	{(PropertyRNA *)&rna_WorkSpaceTool_idname, (PropertyRNA *)&rna_WorkSpaceTool_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_WorkSpaceTool_idname = {
	{(PropertyRNA *)&rna_WorkSpaceTool_idname_fallback, (PropertyRNA *)&rna_WorkSpaceTool_rna_type,
	-1, "idname", 262145, 0, 0, 0, 0, "Identifier",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_idname_get, WorkSpaceTool_idname_length, WorkSpaceTool_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_idname_fallback = {
	{(PropertyRNA *)&rna_WorkSpaceTool_index, (PropertyRNA *)&rna_WorkSpaceTool_idname,
	-1, "idname_fallback", 262145, 0, 0, 0, 0, "Identifier Fallback",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_idname_fallback_get, WorkSpaceTool_idname_fallback_length, WorkSpaceTool_idname_fallback_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

IntPropertyRNA rna_WorkSpaceTool_index = {
	{(PropertyRNA *)&rna_WorkSpaceTool_space_type, (PropertyRNA *)&rna_WorkSpaceTool_idname_fallback,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

EnumPropertyRNA rna_WorkSpaceTool_space_type = {
	{(PropertyRNA *)&rna_WorkSpaceTool_mode, (PropertyRNA *)&rna_WorkSpaceTool_index,
	-1, "space_type", 2, 0, 0, 4, 0, "Space Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bToolRef, space_type), (RawPropertyType)1, nullptr},
	WorkSpaceTool_space_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_WorkSpaceTool_mode = {
	{(PropertyRNA *)&rna_WorkSpaceTool_use_paint_canvas, (PropertyRNA *)&rna_WorkSpaceTool_space_type,
	-1, "mode", 2, 0, 0, 4, 0, "Tool Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bToolRef, mode), (RawPropertyType)0, nullptr},
	WorkSpaceTool_mode_get, nullptr, rna_WorkSpace_tools_mode_itemf, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
};

BoolPropertyRNA rna_WorkSpaceTool_use_paint_canvas = {
	{(PropertyRNA *)&rna_WorkSpaceTool_has_datablock, (PropertyRNA *)&rna_WorkSpaceTool_mode,
	-1, "use_paint_canvas", 2, 0, 0, 0, 0, "Use Paint Canvas",
	"Does this tool use a painting canvas",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_use_paint_canvas_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_WorkSpaceTool_has_datablock = {
	{(PropertyRNA *)&rna_WorkSpaceTool_widget, (PropertyRNA *)&rna_WorkSpaceTool_use_paint_canvas,
	-1, "has_datablock", 2, 0, 0, 0, 0, "Has Data-Block",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_has_datablock_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_WorkSpaceTool_widget = {
	{nullptr, (PropertyRNA *)&rna_WorkSpaceTool_has_datablock,
	-1, "widget", 262144, 0, 0, 0, 0, "Widget",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpaceTool_widget_get, WorkSpaceTool_widget_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_idname = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_cursor, nullptr,
	-1, "idname", 262145, 0, 1, 0, 0, "Identifier",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_WorkSpaceTool_setup_cursor = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_keymap, (PropertyRNA *)&rna_WorkSpaceTool_setup_idname,
	-1, "cursor", 3, 0, 0, 0, 0, "cursor",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 24, 1
};

StringPropertyRNA rna_WorkSpaceTool_setup_keymap = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_gizmo_group, (PropertyRNA *)&rna_WorkSpaceTool_setup_cursor,
	-1, "keymap", 262145, 0, 0, 0, 0, "Key Map",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_gizmo_group = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_data_block, (PropertyRNA *)&rna_WorkSpaceTool_setup_keymap,
	-1, "gizmo_group", 262145, 0, 0, 0, 0, "Gizmo Group",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_data_block = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_operator, (PropertyRNA *)&rna_WorkSpaceTool_setup_gizmo_group,
	-1, "data_block", 262145, 0, 0, 0, 0, "Data Block",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_operator = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_index, (PropertyRNA *)&rna_WorkSpaceTool_setup_data_block,
	-1, "operator", 262145, 0, 0, 0, 0, "Operator",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

IntPropertyRNA rna_WorkSpaceTool_setup_index = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_options, (PropertyRNA *)&rna_WorkSpaceTool_setup_operator,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_WorkSpaceTool_setup_options_items[2] = {
	{1, "KEYMAP_FALLBACK", 0, "Fallback", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_WorkSpaceTool_setup_options = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_idname_fallback, (PropertyRNA *)&rna_WorkSpaceTool_setup_index,
	-1, "options", 2097155, 0, 0, 0, 0, "Tool Options",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_WorkSpaceTool_setup_options_items, 1, 0
};

StringPropertyRNA rna_WorkSpaceTool_setup_idname_fallback = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_keymap_fallback, (PropertyRNA *)&rna_WorkSpaceTool_setup_options,
	-1, "idname_fallback", 262145, 0, 0, 0, 0, "Fallback Identifier",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_keymap_fallback = {
	{nullptr, (PropertyRNA *)&rna_WorkSpaceTool_setup_idname_fallback,
	-1, "keymap_fallback", 262145, 0, 0, 0, 0, "Fallback Key Map",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FunctionRNA rna_WorkSpaceTool_setup_func = {
	{(FunctionRNA *)&rna_WorkSpaceTool_operator_properties_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_idname, (PropertyRNA *)&rna_WorkSpaceTool_setup_keymap_fallback}},
	"setup", 2056, "Set the tool settings",
	WorkSpaceTool_setup_call,
	nullptr
};

StringPropertyRNA rna_WorkSpaceTool_operator_properties_operator = {
	{(PropertyRNA *)&rna_WorkSpaceTool_operator_properties_result, nullptr,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_WorkSpaceTool_operator_properties_result = {
	{nullptr, (PropertyRNA *)&rna_WorkSpaceTool_operator_properties_operator,
	-1, "result", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

FunctionRNA rna_WorkSpaceTool_operator_properties_func = {
	{(FunctionRNA *)&rna_WorkSpaceTool_gizmo_group_properties_func, (FunctionRNA *)&rna_WorkSpaceTool_setup_func,
	nullptr,
	{(PropertyRNA *)&rna_WorkSpaceTool_operator_properties_operator, (PropertyRNA *)&rna_WorkSpaceTool_operator_properties_result}},
	"operator_properties", 16, "operator_properties",
	WorkSpaceTool_operator_properties_call,
	(PropertyRNA *)&rna_WorkSpaceTool_operator_properties_result
};

StringPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_group = {
	{(PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_result, nullptr,
	-1, "group", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_result = {
	{nullptr, (PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_group,
	-1, "result", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GizmoGroupProperties
};

FunctionRNA rna_WorkSpaceTool_gizmo_group_properties_func = {
	{(FunctionRNA *)&rna_WorkSpaceTool_refresh_from_context_func, (FunctionRNA *)&rna_WorkSpaceTool_operator_properties_func,
	nullptr,
	{(PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_group, (PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_result}},
	"gizmo_group_properties", 16, "gizmo_group_properties",
	WorkSpaceTool_gizmo_group_properties_call,
	(PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_result
};

FunctionRNA rna_WorkSpaceTool_refresh_from_context_func = {
	{nullptr, (FunctionRNA *)&rna_WorkSpaceTool_gizmo_group_properties_func,
	nullptr,
	{nullptr, nullptr}},
	"refresh_from_context", 2052, "refresh_from_context",
	WorkSpaceTool_refresh_from_context_call,
	nullptr
};

StructRNA RNA_WorkSpaceTool = {
	{(ContainerRNA *)&RNA_WorkSpace, (ContainerRNA *)&RNA_wmOwnerID,
	nullptr,
	{(PropertyRNA *)&rna_WorkSpaceTool_rna_properties, (PropertyRNA *)&rna_WorkSpaceTool_widget}},
	"WorkSpaceTool", nullptr, nullptr, 512, nullptr, "Work Space Tool",
	"",
	"*", 17,
	(PropertyRNA *)&rna_WorkSpaceTool_idname, (PropertyRNA *)&rna_WorkSpaceTool_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_WorkSpaceTool_setup_func, (FunctionRNA *)&rna_WorkSpaceTool_refresh_from_context_func}
};

/* Workspace */
CollectionPropertyRNA rna_WorkSpace_screens = {
	{(PropertyRNA *)&rna_WorkSpace_owner_ids, nullptr,
	-1, "screens", 128, 0, 0, 0, 0, "Screens",
	"Screen layouts of a workspace",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpace_screens_begin, WorkSpace_screens_next, WorkSpace_screens_end, WorkSpace_screens_get, nullptr, WorkSpace_screens_lookup_int, WorkSpace_screens_lookup_string, nullptr, &RNA_Screen
};

CollectionPropertyRNA rna_WorkSpace_owner_ids = {
	{(PropertyRNA *)&rna_WorkSpace_tools, (PropertyRNA *)&rna_WorkSpace_screens,
	-1, "owner_ids", 0, 0, 0, 0, 0, "UI Tags",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_wmOwnerIDs},
	WorkSpace_owner_ids_begin, WorkSpace_owner_ids_next, WorkSpace_owner_ids_end, WorkSpace_owner_ids_get, nullptr, WorkSpace_owner_ids_lookup_int, WorkSpace_owner_ids_lookup_string, nullptr, &RNA_wmOwnerID
};

CollectionPropertyRNA rna_WorkSpace_tools = {
	{(PropertyRNA *)&rna_WorkSpace_object_mode, (PropertyRNA *)&rna_WorkSpace_owner_ids,
	-1, "tools", 0, 0, 0, 0, 0, "Tools",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_wmTools},
	WorkSpace_tools_begin, WorkSpace_tools_next, WorkSpace_tools_end, WorkSpace_tools_get, nullptr, WorkSpace_tools_lookup_int, WorkSpace_tools_lookup_string, nullptr, &RNA_WorkSpaceTool
};

EnumPropertyRNA rna_WorkSpace_object_mode = {
	{(PropertyRNA *)&rna_WorkSpace_use_pin_scene, (PropertyRNA *)&rna_WorkSpace_tools,
	-1, "object_mode", 3, 0, 0, 4, 0, "Object Mode",
	"Switch to this object mode when activating the workspace",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WorkSpace, object_mode), (RawPropertyType)0, nullptr},
	WorkSpace_object_mode_get, WorkSpace_object_mode_set, nullptr, nullptr, nullptr, rna_enum_workspace_object_mode_items, 13, 0
};

BoolPropertyRNA rna_WorkSpace_use_pin_scene = {
	{(PropertyRNA *)&rna_WorkSpace_use_filter_by_owner, (PropertyRNA *)&rna_WorkSpace_object_mode,
	-1, "use_pin_scene", 3, 0, 0, 0, 0, "Pin Scene",
	"Remember the last used scene for the workspace and switch to it whenever this workspace is activated again",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 50331648, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpace_use_pin_scene_get, WorkSpace_use_pin_scene_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_WorkSpace_use_filter_by_owner = {
	{(PropertyRNA *)&rna_WorkSpace_asset_library_reference, (PropertyRNA *)&rna_WorkSpace_use_pin_scene,
	-1, "use_filter_by_owner", 1, 0, 0, 0, 0, "Use UI Tags",
	"Filter the UI by tags",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_window_update_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpace_use_filter_by_owner_get, WorkSpace_use_filter_by_owner_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_WorkSpace_asset_library_reference = {
	{nullptr, (PropertyRNA *)&rna_WorkSpace_use_filter_by_owner,
	-1, "asset_library_reference", 3, 0, 0, 0, 0, "Asset Library",
	"Active asset library to show in the UI, not used by the Asset Browser (which has its own active asset library)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 453181440, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorkSpace_asset_library_reference_get, WorkSpace_asset_library_reference_set, rna_asset_library_reference_itemf, nullptr, nullptr, rna_enum_dummy_NULL_items, 0, 0
};

StringPropertyRNA rna_WorkSpace_status_text_set_internal_text = {
	{nullptr, nullptr,
	-1, "text", 1, 0, 1, 0, 0, "Text",
	"New string for the status bar, None clears the text",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_WorkSpace_status_text_set_internal_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_WorkSpace_status_text_set_internal_text, (PropertyRNA *)&rna_WorkSpace_status_text_set_internal_text}},
	"status_text_set_internal", 9, "Set the status bar text, typically key shortcuts for modal operators",
	WorkSpace_status_text_set_internal_call,
	nullptr
};

StructRNA RNA_WorkSpace = {
	{(ContainerRNA *)&RNA_wmOwnerIDs, (ContainerRNA *)&RNA_WorkSpaceTool,
	nullptr,
	{(PropertyRNA *)&rna_WorkSpace_screens, (PropertyRNA *)&rna_WorkSpace_asset_library_reference}},
	"WorkSpace", nullptr, nullptr, 519, nullptr, "Workspace",
	"Workspace data-block, defining the working environment for the user",
	"*", 27,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_WorkSpace_status_text_set_internal_func, (FunctionRNA *)&rna_WorkSpace_status_text_set_internal_func}
};

/* WorkSpace UI Tags */
CollectionPropertyRNA rna_wmOwnerIDs_rna_properties = {
	{(PropertyRNA *)&rna_wmOwnerIDs_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmOwnerIDs_rna_properties_begin, wmOwnerIDs_rna_properties_next, wmOwnerIDs_rna_properties_end, wmOwnerIDs_rna_properties_get, nullptr, nullptr, wmOwnerIDs_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_wmOwnerIDs_rna_type = {
	{nullptr, (PropertyRNA *)&rna_wmOwnerIDs_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmOwnerIDs_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_wmOwnerIDs_new_name = {
	{(PropertyRNA *)&rna_wmOwnerIDs_new_owner_id, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the tag",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Name"
};

PointerPropertyRNA rna_wmOwnerIDs_new_owner_id = {
	{nullptr, (PropertyRNA *)&rna_wmOwnerIDs_new_name,
	-1, "owner_id", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_wmOwnerID
};

FunctionRNA rna_wmOwnerIDs_new_func = {
	{(FunctionRNA *)&rna_wmOwnerIDs_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_wmOwnerIDs_new_name, (PropertyRNA *)&rna_wmOwnerIDs_new_owner_id}},
	"new", 0, "Add ui tag",
	wmOwnerIDs_new_call,
	(PropertyRNA *)&rna_wmOwnerIDs_new_owner_id
};

PointerPropertyRNA rna_wmOwnerIDs_remove_owner_id = {
	{nullptr, nullptr,
	-1, "owner_id", 262144, 0, 5, 0, 0, "",
	"Tag to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_wmOwnerID
};

FunctionRNA rna_wmOwnerIDs_remove_func = {
	{(FunctionRNA *)&rna_wmOwnerIDs_clear_func, (FunctionRNA *)&rna_wmOwnerIDs_new_func,
	nullptr,
	{(PropertyRNA *)&rna_wmOwnerIDs_remove_owner_id, (PropertyRNA *)&rna_wmOwnerIDs_remove_owner_id}},
	"remove", 16, "Remove ui tag",
	wmOwnerIDs_remove_call,
	nullptr
};

FunctionRNA rna_wmOwnerIDs_clear_func = {
	{nullptr, (FunctionRNA *)&rna_wmOwnerIDs_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all tags",
	wmOwnerIDs_clear_call,
	nullptr
};

StructRNA RNA_wmOwnerIDs = {
	{(ContainerRNA *)&RNA_wmTools, (ContainerRNA *)&RNA_WorkSpace,
	nullptr,
	{(PropertyRNA *)&rna_wmOwnerIDs_rna_properties, (PropertyRNA *)&rna_wmOwnerIDs_rna_type}},
	"wmOwnerIDs", nullptr, nullptr, 516, nullptr, "WorkSpace UI Tags",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_wmOwnerIDs_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_wmOwnerIDs_new_func, (FunctionRNA *)&rna_wmOwnerIDs_clear_func}
};

/* WorkSpace UI Tags */
CollectionPropertyRNA rna_wmTools_rna_properties = {
	{(PropertyRNA *)&rna_wmTools_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmTools_rna_properties_begin, wmTools_rna_properties_next, wmTools_rna_properties_end, wmTools_rna_properties_get, nullptr, nullptr, wmTools_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_wmTools_rna_type = {
	{nullptr, (PropertyRNA *)&rna_wmTools_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	wmTools_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_wmTools_from_space_view3d_mode_mode = {
	{(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_create, nullptr,
	-1, "mode", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_context_mode_items, 24, 0
};

BoolPropertyRNA rna_wmTools_from_space_view3d_mode_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_result, (PropertyRNA *)&rna_wmTools_from_space_view3d_mode_mode,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_wmTools_from_space_view3d_mode_result = {
	{nullptr, (PropertyRNA *)&rna_wmTools_from_space_view3d_mode_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_view3d_mode_func = {
	{(FunctionRNA *)&rna_wmTools_from_space_image_mode_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_mode, (PropertyRNA *)&rna_wmTools_from_space_view3d_mode_result}},
	"from_space_view3d_mode", 0, "",
	wmTools_from_space_view3d_mode_call,
	(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_result
};

EnumPropertyRNA rna_wmTools_from_space_image_mode_mode = {
	{(PropertyRNA *)&rna_wmTools_from_space_image_mode_create, nullptr,
	-1, "mode", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_image_mode_all_items, 4, 0
};

BoolPropertyRNA rna_wmTools_from_space_image_mode_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_image_mode_result, (PropertyRNA *)&rna_wmTools_from_space_image_mode_mode,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_wmTools_from_space_image_mode_result = {
	{nullptr, (PropertyRNA *)&rna_wmTools_from_space_image_mode_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_image_mode_func = {
	{(FunctionRNA *)&rna_wmTools_from_space_node_func, (FunctionRNA *)&rna_wmTools_from_space_view3d_mode_func,
	nullptr,
	{(PropertyRNA *)&rna_wmTools_from_space_image_mode_mode, (PropertyRNA *)&rna_wmTools_from_space_image_mode_result}},
	"from_space_image_mode", 0, "",
	wmTools_from_space_image_mode_call,
	(PropertyRNA *)&rna_wmTools_from_space_image_mode_result
};

BoolPropertyRNA rna_wmTools_from_space_node_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_node_result, nullptr,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_wmTools_from_space_node_result = {
	{nullptr, (PropertyRNA *)&rna_wmTools_from_space_node_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_node_func = {
	{(FunctionRNA *)&rna_wmTools_from_space_sequencer_func, (FunctionRNA *)&rna_wmTools_from_space_image_mode_func,
	nullptr,
	{(PropertyRNA *)&rna_wmTools_from_space_node_create, (PropertyRNA *)&rna_wmTools_from_space_node_result}},
	"from_space_node", 0, "",
	wmTools_from_space_node_call,
	(PropertyRNA *)&rna_wmTools_from_space_node_result
};

EnumPropertyRNA rna_wmTools_from_space_sequencer_mode = {
	{(PropertyRNA *)&rna_wmTools_from_space_sequencer_create, nullptr,
	-1, "mode", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_sequencer_view_type_items, 3, 1
};

BoolPropertyRNA rna_wmTools_from_space_sequencer_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_sequencer_result, (PropertyRNA *)&rna_wmTools_from_space_sequencer_mode,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_wmTools_from_space_sequencer_result = {
	{nullptr, (PropertyRNA *)&rna_wmTools_from_space_sequencer_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_sequencer_func = {
	{nullptr, (FunctionRNA *)&rna_wmTools_from_space_node_func,
	nullptr,
	{(PropertyRNA *)&rna_wmTools_from_space_sequencer_mode, (PropertyRNA *)&rna_wmTools_from_space_sequencer_result}},
	"from_space_sequencer", 0, "",
	wmTools_from_space_sequencer_call,
	(PropertyRNA *)&rna_wmTools_from_space_sequencer_result
};

StructRNA RNA_wmTools = {
	{(ContainerRNA *)&RNA_World, (ContainerRNA *)&RNA_wmOwnerIDs,
	nullptr,
	{(PropertyRNA *)&rna_wmTools_rna_properties, (PropertyRNA *)&rna_wmTools_rna_type}},
	"wmTools", nullptr, nullptr, 516, nullptr, "WorkSpace UI Tags",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_wmTools_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_wmTools_from_space_view3d_mode_func, (FunctionRNA *)&rna_wmTools_from_space_sequencer_func}
};

