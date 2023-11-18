
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

#include "rna_xr.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMap_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMap_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMap_name;
RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMap_actionmap_items;
RNA_EXTERN_C IntPropertyRNA rna_XrActionMap_selected_item;


RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapItems_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMapItems_rna_type;

extern FunctionRNA rna_XrActionMapItems_new_func;
extern StringPropertyRNA rna_XrActionMapItems_new_name;
extern BoolPropertyRNA rna_XrActionMapItems_new_replace_existing;
extern PointerPropertyRNA rna_XrActionMapItems_new_item;

extern FunctionRNA rna_XrActionMapItems_new_from_item_func;
extern PointerPropertyRNA rna_XrActionMapItems_new_from_item_item;
extern PointerPropertyRNA rna_XrActionMapItems_new_from_item_result;

extern FunctionRNA rna_XrActionMapItems_remove_func;
extern PointerPropertyRNA rna_XrActionMapItems_remove_item;

extern FunctionRNA rna_XrActionMapItems_find_func;
extern StringPropertyRNA rna_XrActionMapItems_find_name;
extern PointerPropertyRNA rna_XrActionMapItems_find_item;



RNA_EXTERN_C CollectionPropertyRNA rna_XrUserPath_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrUserPath_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_XrUserPath_path;


RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapItem_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMapItem_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMapItem_name;
RNA_EXTERN_C EnumPropertyRNA rna_XrActionMapItem_type;
RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapItem_user_paths;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMapItem_op;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMapItem_op_name;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMapItem_op_properties;
RNA_EXTERN_C EnumPropertyRNA rna_XrActionMapItem_op_mode;
RNA_EXTERN_C BoolPropertyRNA rna_XrActionMapItem_bimanual;
RNA_EXTERN_C BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_grip;
RNA_EXTERN_C BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_aim;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMapItem_haptic_name;
RNA_EXTERN_C BoolPropertyRNA rna_XrActionMapItem_haptic_match_user_paths;
RNA_EXTERN_C FloatPropertyRNA rna_XrActionMapItem_haptic_duration;
RNA_EXTERN_C FloatPropertyRNA rna_XrActionMapItem_haptic_frequency;
RNA_EXTERN_C FloatPropertyRNA rna_XrActionMapItem_haptic_amplitude;
RNA_EXTERN_C EnumPropertyRNA rna_XrActionMapItem_haptic_mode;
RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapItem_bindings;
RNA_EXTERN_C IntPropertyRNA rna_XrActionMapItem_selected_binding;


RNA_EXTERN_C CollectionPropertyRNA rna_XrUserPaths_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrUserPaths_rna_type;

extern FunctionRNA rna_XrUserPaths_new_func;
extern StringPropertyRNA rna_XrUserPaths_new_path;
extern PointerPropertyRNA rna_XrUserPaths_new_user_path;

extern FunctionRNA rna_XrUserPaths_remove_func;
extern PointerPropertyRNA rna_XrUserPaths_remove_user_path;

extern FunctionRNA rna_XrUserPaths_find_func;
extern StringPropertyRNA rna_XrUserPaths_find_path;
extern PointerPropertyRNA rna_XrUserPaths_find_user_path;



RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapBindings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMapBindings_rna_type;

extern FunctionRNA rna_XrActionMapBindings_new_func;
extern StringPropertyRNA rna_XrActionMapBindings_new_name;
extern BoolPropertyRNA rna_XrActionMapBindings_new_replace_existing;
extern PointerPropertyRNA rna_XrActionMapBindings_new_binding;

extern FunctionRNA rna_XrActionMapBindings_new_from_binding_func;
extern PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_binding;
extern PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_result;

extern FunctionRNA rna_XrActionMapBindings_remove_func;
extern PointerPropertyRNA rna_XrActionMapBindings_remove_binding;

extern FunctionRNA rna_XrActionMapBindings_find_func;
extern StringPropertyRNA rna_XrActionMapBindings_find_name;
extern PointerPropertyRNA rna_XrActionMapBindings_find_binding;



RNA_EXTERN_C CollectionPropertyRNA rna_XrComponentPath_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrComponentPath_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_XrComponentPath_path;


RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapBinding_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMapBinding_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMapBinding_name;
RNA_EXTERN_C StringPropertyRNA rna_XrActionMapBinding_profile;
RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMapBinding_component_paths;
RNA_EXTERN_C FloatPropertyRNA rna_XrActionMapBinding_threshold;
RNA_EXTERN_C EnumPropertyRNA rna_XrActionMapBinding_axis0_region;
RNA_EXTERN_C EnumPropertyRNA rna_XrActionMapBinding_axis1_region;
RNA_EXTERN_C FloatPropertyRNA rna_XrActionMapBinding_pose_location;
RNA_EXTERN_C FloatPropertyRNA rna_XrActionMapBinding_pose_rotation;


RNA_EXTERN_C CollectionPropertyRNA rna_XrComponentPaths_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrComponentPaths_rna_type;

extern FunctionRNA rna_XrComponentPaths_new_func;
extern StringPropertyRNA rna_XrComponentPaths_new_path;
extern PointerPropertyRNA rna_XrComponentPaths_new_component_path;

extern FunctionRNA rna_XrComponentPaths_remove_func;
extern PointerPropertyRNA rna_XrComponentPaths_remove_component_path;

extern FunctionRNA rna_XrComponentPaths_find_func;
extern StringPropertyRNA rna_XrComponentPaths_find_path;
extern PointerPropertyRNA rna_XrComponentPaths_find_component_path;



RNA_EXTERN_C CollectionPropertyRNA rna_XrSessionSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrSessionSettings_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_XrSessionSettings_shading;
RNA_EXTERN_C EnumPropertyRNA rna_XrSessionSettings_base_pose_type;
RNA_EXTERN_C PointerPropertyRNA rna_XrSessionSettings_base_pose_object;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionSettings_base_pose_location;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionSettings_base_pose_angle;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionSettings_base_scale;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_floor;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_annotation;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_selection;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_controllers;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_custom_overlays;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_extras;
RNA_EXTERN_C EnumPropertyRNA rna_XrSessionSettings_controller_draw_style;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionSettings_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionSettings_clip_end;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_use_positional_tracking;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_use_absolute_tracking;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_mesh;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curve;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_surf;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_meta;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_font;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curves;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_pointcloud;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_volume;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_armature;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_lattice;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_empty;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_grease_pencil;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_camera;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_speaker;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light_probe;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_mesh;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_curve;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_surf;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_meta;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_font;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_curves;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_pointcloud;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_volume;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_armature;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_lattice;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_empty;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_grease_pencil;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_camera;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_light;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_speaker;
RNA_EXTERN_C BoolPropertyRNA rna_XrSessionSettings_show_object_select_light_probe;
RNA_EXTERN_C IntPropertyRNA rna_XrSessionSettings_icon_from_show_object_viewport;


RNA_EXTERN_C CollectionPropertyRNA rna_XrSessionState_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrSessionState_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionState_viewer_pose_location;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionState_viewer_pose_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionState_navigation_location;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionState_navigation_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_XrSessionState_navigation_scale;
RNA_EXTERN_C CollectionPropertyRNA rna_XrSessionState_actionmaps;
RNA_EXTERN_C IntPropertyRNA rna_XrSessionState_active_actionmap;
RNA_EXTERN_C IntPropertyRNA rna_XrSessionState_selected_actionmap;

extern FunctionRNA rna_XrSessionState_is_running_func;
extern PointerPropertyRNA rna_XrSessionState_is_running_context;
extern BoolPropertyRNA rna_XrSessionState_is_running_result;

extern FunctionRNA rna_XrSessionState_reset_to_base_pose_func;
extern PointerPropertyRNA rna_XrSessionState_reset_to_base_pose_context;

extern FunctionRNA rna_XrSessionState_action_set_create_func;
extern PointerPropertyRNA rna_XrSessionState_action_set_create_context;
extern PointerPropertyRNA rna_XrSessionState_action_set_create_actionmap;
extern BoolPropertyRNA rna_XrSessionState_action_set_create_result;

extern FunctionRNA rna_XrSessionState_action_create_func;
extern PointerPropertyRNA rna_XrSessionState_action_create_context;
extern PointerPropertyRNA rna_XrSessionState_action_create_actionmap;
extern PointerPropertyRNA rna_XrSessionState_action_create_actionmap_item;
extern BoolPropertyRNA rna_XrSessionState_action_create_result;

extern FunctionRNA rna_XrSessionState_action_binding_create_func;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_context;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_item;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_binding;
extern BoolPropertyRNA rna_XrSessionState_action_binding_create_result;

extern FunctionRNA rna_XrSessionState_active_action_set_set_func;
extern PointerPropertyRNA rna_XrSessionState_active_action_set_set_context;
extern StringPropertyRNA rna_XrSessionState_active_action_set_set_action_set;
extern BoolPropertyRNA rna_XrSessionState_active_action_set_set_result;

extern FunctionRNA rna_XrSessionState_controller_pose_actions_set_func;
extern PointerPropertyRNA rna_XrSessionState_controller_pose_actions_set_context;
extern StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_action_set;
extern StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_grip_action;
extern StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_aim_action;
extern BoolPropertyRNA rna_XrSessionState_controller_pose_actions_set_result;

extern FunctionRNA rna_XrSessionState_action_state_get_func;
extern PointerPropertyRNA rna_XrSessionState_action_state_get_context;
extern StringPropertyRNA rna_XrSessionState_action_state_get_action_set_name;
extern StringPropertyRNA rna_XrSessionState_action_state_get_action_name;
extern StringPropertyRNA rna_XrSessionState_action_state_get_user_path;
extern FloatPropertyRNA rna_XrSessionState_action_state_get_state;

extern FunctionRNA rna_XrSessionState_haptic_action_apply_func;
extern PointerPropertyRNA rna_XrSessionState_haptic_action_apply_context;
extern StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_set_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_apply_user_path;
extern FloatPropertyRNA rna_XrSessionState_haptic_action_apply_duration;
extern FloatPropertyRNA rna_XrSessionState_haptic_action_apply_frequency;
extern FloatPropertyRNA rna_XrSessionState_haptic_action_apply_amplitude;
extern BoolPropertyRNA rna_XrSessionState_haptic_action_apply_result;

extern FunctionRNA rna_XrSessionState_haptic_action_stop_func;
extern PointerPropertyRNA rna_XrSessionState_haptic_action_stop_context;
extern StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_set_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_stop_user_path;

extern FunctionRNA rna_XrSessionState_controller_grip_location_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_grip_location_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_grip_location_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_grip_location_get_location;

extern FunctionRNA rna_XrSessionState_controller_grip_rotation_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_grip_rotation_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_grip_rotation_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_grip_rotation_get_rotation;

extern FunctionRNA rna_XrSessionState_controller_aim_location_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_aim_location_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_aim_location_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_aim_location_get_location;

extern FunctionRNA rna_XrSessionState_controller_aim_rotation_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_aim_rotation_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_aim_rotation_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_aim_rotation_get_rotation;



RNA_EXTERN_C CollectionPropertyRNA rna_XrActionMaps_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrActionMaps_rna_type;

extern FunctionRNA rna_XrActionMaps_new_func;
extern PointerPropertyRNA rna_XrActionMaps_new_xr_session_state;
extern StringPropertyRNA rna_XrActionMaps_new_name;
extern BoolPropertyRNA rna_XrActionMaps_new_replace_existing;
extern PointerPropertyRNA rna_XrActionMaps_new_actionmap;

extern FunctionRNA rna_XrActionMaps_new_from_actionmap_func;
extern PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_xr_session_state;
extern PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_actionmap;
extern PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_result;

extern FunctionRNA rna_XrActionMaps_remove_func;
extern PointerPropertyRNA rna_XrActionMaps_remove_xr_session_state;
extern PointerPropertyRNA rna_XrActionMaps_remove_actionmap;

extern FunctionRNA rna_XrActionMaps_find_func;
extern PointerPropertyRNA rna_XrActionMaps_find_xr_session_state;
extern StringPropertyRNA rna_XrActionMaps_find_name;
extern PointerPropertyRNA rna_XrActionMaps_find_actionmap;



RNA_EXTERN_C CollectionPropertyRNA rna_XrEventData_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_XrEventData_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_XrEventData_action_set;
RNA_EXTERN_C StringPropertyRNA rna_XrEventData_action;
RNA_EXTERN_C StringPropertyRNA rna_XrEventData_user_path;
RNA_EXTERN_C StringPropertyRNA rna_XrEventData_user_path_other;
RNA_EXTERN_C EnumPropertyRNA rna_XrEventData_type;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_state;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_state_other;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_float_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_controller_location;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_controller_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_controller_location_other;
RNA_EXTERN_C FloatPropertyRNA rna_XrEventData_controller_rotation_other;
RNA_EXTERN_C BoolPropertyRNA rna_XrEventData_bimanual;

static PointerRNA XrActionMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrActionMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMap_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMap_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMap_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrActionMap_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrActionMap_name_get(PointerRNA *ptr, char *value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int XrActionMap_name_length(PointerRNA *ptr)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void XrActionMap_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C int XrActionMap_actionmap_items_length(PointerRNA *ptr)
{
    return rna_XrActionMap_items_length(ptr);
}

static PointerRNA XrActionMap_actionmap_items_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrActionMapItem, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void XrActionMap_actionmap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMap_actionmap_items;

    rna_XrActionMap_items_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMap_actionmap_items_get(iter);
    }
}

RNA_EXTERN_C void XrActionMap_actionmap_items_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMap_actionmap_items_get(iter);
    }
}

RNA_EXTERN_C void XrActionMap_actionmap_items_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMap_actionmap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMap_actionmap_items_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMap_actionmap_items_get(&iter); }
    }

    XrActionMap_actionmap_items_end(&iter);

    return found;
}

RNA_EXTERN_C int XrActionMapItem_name_length(PointerRNA *);
RNA_EXTERN_C void XrActionMapItem_name_get(PointerRNA *, char *);

RNA_EXTERN_C int XrActionMap_actionmap_items_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    XrActionMap_actionmap_items_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = XrActionMapItem_name_length(&iter.ptr);
            if (namelen < 1024) {
                XrActionMapItem_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                XrActionMapItem_name_get(&iter.ptr, name);
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
        XrActionMap_actionmap_items_next(&iter);
    }
    XrActionMap_actionmap_items_end(&iter);

    return found;
}

RNA_EXTERN_C int XrActionMap_selected_item_get(PointerRNA *ptr)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    return (int)(data->selitem);
}

RNA_EXTERN_C void XrActionMap_selected_item_set(PointerRNA *ptr, int value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
#ifdef __cplusplus
    data->selitem = (std::remove_reference_t<decltype(data->selitem)>)CLAMPIS(value, -32768, 32767);
#else
    data->selitem = CLAMPIS(value, -32768, 32767);
#endif
}

static PointerRNA XrActionMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrActionMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItems_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItems_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItems_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrActionMapItems_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrUserPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrUserPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrUserPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrUserPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrUserPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrUserPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrUserPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrUserPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrUserPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrUserPath_path_get(PointerRNA *ptr, char *value)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    BLI_assert(strlen(data->path) < 64);
    strcpy(value, data->path);
}

RNA_EXTERN_C int XrUserPath_path_length(PointerRNA *ptr)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    return strlen(data->path);
}

RNA_EXTERN_C void XrUserPath_path_set(PointerRNA *ptr, const char *value)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 64);
}

static PointerRNA XrActionMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrActionMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrActionMapItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrActionMapItem_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int XrActionMapItem_name_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void XrActionMapItem_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C int XrActionMapItem_type_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void XrActionMapItem_type_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C int XrActionMapItem_user_paths_length(PointerRNA *ptr)
{
    return rna_XrActionMapItem_user_paths_length(ptr);
}

static PointerRNA XrActionMapItem_user_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrUserPath, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void XrActionMapItem_user_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItem_user_paths;

    rna_XrActionMapItem_user_paths_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_user_paths_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItem_user_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_user_paths_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItem_user_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapItem_user_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMapItem_user_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapItem_user_paths_get(&iter); }
    }

    XrActionMapItem_user_paths_end(&iter);

    return found;
}

RNA_EXTERN_C void XrActionMapItem_op_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_assert(strlen(data->op) < 64);
    strcpy(value, data->op);
}

RNA_EXTERN_C int XrActionMapItem_op_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->op);
}

RNA_EXTERN_C void XrActionMapItem_op_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->op, value, 64);
}

RNA_EXTERN_C void XrActionMapItem_op_name_get(PointerRNA *ptr, char *value)
{
    rna_XrActionMapItem_op_name_get(ptr, value);
}

RNA_EXTERN_C int XrActionMapItem_op_name_length(PointerRNA *ptr)
{
    return rna_XrActionMapItem_op_name_length(ptr);
}

RNA_EXTERN_C PointerRNA XrActionMapItem_op_properties_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_op_properties_get(ptr);
}

RNA_EXTERN_C int XrActionMapItem_op_mode_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->op_flag);
}

RNA_EXTERN_C void XrActionMapItem_op_mode_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
#ifdef __cplusplus
    data->op_flag = (std::remove_reference_t<decltype(data->op_flag)>)value;
#else
    data->op_flag = value;
#endif
}

RNA_EXTERN_C bool XrActionMapItem_bimanual_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_bimanual_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapItem_bimanual_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_bimanual_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool XrActionMapItem_pose_is_controller_grip_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_pose_is_controller_grip_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapItem_pose_is_controller_grip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_pose_is_controller_grip_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool XrActionMapItem_pose_is_controller_aim_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_pose_is_controller_aim_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapItem_pose_is_controller_aim_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_pose_is_controller_aim_set;
    fn(ptr, value);
}

RNA_EXTERN_C void XrActionMapItem_haptic_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_assert(strlen(data->haptic_name) < 64);
    strcpy(value, data->haptic_name);
}

RNA_EXTERN_C int XrActionMapItem_haptic_name_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->haptic_name);
}

RNA_EXTERN_C void XrActionMapItem_haptic_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->haptic_name, value, 64);
}

RNA_EXTERN_C bool XrActionMapItem_haptic_match_user_paths_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrActionMapItem_haptic_match_user_paths_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapItem_haptic_match_user_paths_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrActionMapItem_haptic_match_user_paths_set;
    fn(ptr, value);
}

RNA_EXTERN_C float XrActionMapItem_haptic_duration_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_duration);
}

RNA_EXTERN_C void XrActionMapItem_haptic_duration_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
#ifdef __cplusplus
    data->haptic_duration = (std::remove_reference_t<decltype(data->haptic_duration)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->haptic_duration = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float XrActionMapItem_haptic_frequency_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_frequency);
}

RNA_EXTERN_C void XrActionMapItem_haptic_frequency_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
#ifdef __cplusplus
    data->haptic_frequency = (std::remove_reference_t<decltype(data->haptic_frequency)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->haptic_frequency = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float XrActionMapItem_haptic_amplitude_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_amplitude);
}

RNA_EXTERN_C void XrActionMapItem_haptic_amplitude_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
#ifdef __cplusplus
    data->haptic_amplitude = (std::remove_reference_t<decltype(data->haptic_amplitude)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->haptic_amplitude = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int XrActionMapItem_haptic_mode_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrActionMapItem_haptic_mode_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapItem_haptic_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrActionMapItem_haptic_mode_set;
    fn(ptr, value);
}

RNA_EXTERN_C int XrActionMapItem_bindings_length(PointerRNA *ptr)
{
    return rna_XrActionMapItem_bindings_length(ptr);
}

static PointerRNA XrActionMapItem_bindings_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrActionMapBinding, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void XrActionMapItem_bindings_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItem_bindings;

    rna_XrActionMapItem_bindings_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_bindings_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItem_bindings_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_bindings_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapItem_bindings_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapItem_bindings_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMapItem_bindings_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapItem_bindings_get(&iter); }
    }

    XrActionMapItem_bindings_end(&iter);

    return found;
}

RNA_EXTERN_C int XrActionMapBinding_name_length(PointerRNA *);
RNA_EXTERN_C void XrActionMapBinding_name_get(PointerRNA *, char *);

RNA_EXTERN_C int XrActionMapItem_bindings_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    XrActionMapItem_bindings_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = XrActionMapBinding_name_length(&iter.ptr);
            if (namelen < 1024) {
                XrActionMapBinding_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                XrActionMapBinding_name_get(&iter.ptr, name);
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
        XrActionMapItem_bindings_next(&iter);
    }
    XrActionMapItem_bindings_end(&iter);

    return found;
}

RNA_EXTERN_C int XrActionMapItem_selected_binding_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->selbinding);
}

RNA_EXTERN_C void XrActionMapItem_selected_binding_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
#ifdef __cplusplus
    data->selbinding = (std::remove_reference_t<decltype(data->selbinding)>)CLAMPIS(value, -32768, 32767);
#else
    data->selbinding = CLAMPIS(value, -32768, 32767);
#endif
}

static PointerRNA XrUserPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrUserPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrUserPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrUserPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrUserPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrUserPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrUserPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrUserPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrUserPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrActionMapBindings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrActionMapBindings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapBindings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBindings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapBindings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBindings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapBindings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapBindings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrActionMapBindings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrComponentPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrComponentPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrComponentPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrComponentPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrComponentPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrComponentPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrComponentPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrComponentPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrComponentPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrComponentPath_path_get(PointerRNA *ptr, char *value)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    BLI_assert(strlen(data->path) < 192);
    strcpy(value, data->path);
}

RNA_EXTERN_C int XrComponentPath_path_length(PointerRNA *ptr)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    return strlen(data->path);
}

RNA_EXTERN_C void XrComponentPath_path_set(PointerRNA *ptr, const char *value)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 192);
}

static PointerRNA XrActionMapBinding_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrActionMapBinding_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapBinding_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapBinding_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapBinding_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapBinding_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrActionMapBinding_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrActionMapBinding_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int XrActionMapBinding_name_length(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void XrActionMapBinding_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C void XrActionMapBinding_profile_get(PointerRNA *ptr, char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_assert(strlen(data->profile) < 256);
    strcpy(value, data->profile);
}

RNA_EXTERN_C int XrActionMapBinding_profile_length(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return strlen(data->profile);
}

RNA_EXTERN_C void XrActionMapBinding_profile_set(PointerRNA *ptr, const char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(data->profile, value, 256);
}

RNA_EXTERN_C int XrActionMapBinding_component_paths_length(PointerRNA *ptr)
{
    return rna_XrActionMapBinding_component_paths_length(ptr);
}

static PointerRNA XrActionMapBinding_component_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrComponentPath, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void XrActionMapBinding_component_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapBinding_component_paths;

    rna_XrActionMapBinding_component_paths_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_component_paths_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapBinding_component_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_component_paths_get(iter);
    }
}

RNA_EXTERN_C void XrActionMapBinding_component_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMapBinding_component_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMapBinding_component_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapBinding_component_paths_get(&iter); }
    }

    XrActionMapBinding_component_paths_end(&iter);

    return found;
}

RNA_EXTERN_C float XrActionMapBinding_threshold_get(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return (float)(data->float_threshold);
}

RNA_EXTERN_C void XrActionMapBinding_threshold_set(PointerRNA *ptr, float value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
#ifdef __cplusplus
    data->float_threshold = (std::remove_reference_t<decltype(data->float_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->float_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int XrActionMapBinding_axis0_region_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrActionMapBinding_axis0_region_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapBinding_axis0_region_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrActionMapBinding_axis0_region_set;
    fn(ptr, value);
}

RNA_EXTERN_C int XrActionMapBinding_axis1_region_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrActionMapBinding_axis1_region_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrActionMapBinding_axis1_region_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_XrActionMapBinding_axis1_region_set;
    fn(ptr, value);
}

RNA_EXTERN_C void XrActionMapBinding_pose_location_get(PointerRNA *ptr, float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_location)[i]);
    }
}

RNA_EXTERN_C void XrActionMapBinding_pose_location_set(PointerRNA *ptr, const float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->pose_location)[i] = values[i];
    }
}

RNA_EXTERN_C void XrActionMapBinding_pose_rotation_get(PointerRNA *ptr, float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_rotation)[i]);
    }
}

RNA_EXTERN_C void XrActionMapBinding_pose_rotation_set(PointerRNA *ptr, const float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->pose_rotation)[i] = values[i];
    }
}

static PointerRNA XrComponentPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrComponentPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrComponentPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrComponentPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrComponentPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrComponentPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrComponentPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrComponentPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrComponentPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrSessionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrSessionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrSessionSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrSessionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrSessionSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrSessionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrSessionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrSessionSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA XrSessionSettings_shading_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_View3DShading, &data->shading);
}

RNA_EXTERN_C int XrSessionSettings_base_pose_type_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->base_pose_type);
}

RNA_EXTERN_C void XrSessionSettings_base_pose_type_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
#ifdef __cplusplus
    data->base_pose_type = (std::remove_reference_t<decltype(data->base_pose_type)>)value;
#else
    data->base_pose_type = value;
#endif
}

RNA_EXTERN_C PointerRNA XrSessionSettings_base_pose_object_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->base_pose_object);
}

RNA_EXTERN_C void XrSessionSettings_base_pose_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->base_pose_object = value.data;
}

RNA_EXTERN_C void XrSessionSettings_base_pose_location_get(PointerRNA *ptr, float values[3])
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->base_pose_location)[i]);
    }
}

RNA_EXTERN_C void XrSessionSettings_base_pose_location_set(PointerRNA *ptr, const float values[3])
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->base_pose_location)[i] = values[i];
    }
}

RNA_EXTERN_C float XrSessionSettings_base_pose_angle_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->base_pose_angle);
}

RNA_EXTERN_C void XrSessionSettings_base_pose_angle_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
#ifdef __cplusplus
    data->base_pose_angle = (std::remove_reference_t<decltype(data->base_pose_angle)>)value;
#else
    data->base_pose_angle = value;
#endif
}

RNA_EXTERN_C float XrSessionSettings_base_scale_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->base_scale);
}

RNA_EXTERN_C void XrSessionSettings_base_scale_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
#ifdef __cplusplus
    data->base_scale = (std::remove_reference_t<decltype(data->base_scale)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->base_scale = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool XrSessionSettings_show_floor_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 4) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_floor_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 4; }
    else { data->draw_flags &= ~4; }
}

RNA_EXTERN_C bool XrSessionSettings_show_annotation_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 1) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_annotation_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 1; }
    else { data->draw_flags &= ~1; }
}

RNA_EXTERN_C bool XrSessionSettings_show_selection_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 8) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_selection_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 8; }
    else { data->draw_flags &= ~8; }
}

RNA_EXTERN_C bool XrSessionSettings_show_controllers_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 16) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_controllers_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 16; }
    else { data->draw_flags &= ~16; }
}

RNA_EXTERN_C bool XrSessionSettings_show_custom_overlays_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 32) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_custom_overlays_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 32; }
    else { data->draw_flags &= ~32; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_extras_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 64) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_extras_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 64; }
    else { data->draw_flags &= ~64; }
}

RNA_EXTERN_C int XrSessionSettings_controller_draw_style_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->controller_draw_style);
}

RNA_EXTERN_C void XrSessionSettings_controller_draw_style_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
#ifdef __cplusplus
    data->controller_draw_style = (std::remove_reference_t<decltype(data->controller_draw_style)>)value;
#else
    data->controller_draw_style = value;
#endif
}

RNA_EXTERN_C float XrSessionSettings_clip_start_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->clip_start);
}

RNA_EXTERN_C void XrSessionSettings_clip_start_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
#ifdef __cplusplus
    data->clip_start = (std::remove_reference_t<decltype(data->clip_start)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clip_start = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float XrSessionSettings_clip_end_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->clip_end);
}

RNA_EXTERN_C void XrSessionSettings_clip_end_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
#ifdef __cplusplus
    data->clip_end = (std::remove_reference_t<decltype(data->clip_end)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clip_end = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool XrSessionSettings_use_positional_tracking_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrSessionSettings_use_positional_tracking_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrSessionSettings_use_positional_tracking_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrSessionSettings_use_positional_tracking_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool XrSessionSettings_use_absolute_tracking_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrSessionSettings_use_absolute_tracking_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrSessionSettings_use_absolute_tracking_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_XrSessionSettings_use_absolute_tracking_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_mesh_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 2) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_mesh_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 2; }
    else { data->object_type_exclude_viewport &= ~2; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_curve_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 4) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_curve_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 4; }
    else { data->object_type_exclude_viewport &= ~4; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_surf_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 8) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_surf_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 8; }
    else { data->object_type_exclude_viewport &= ~8; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_meta_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 32) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_meta_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 32; }
    else { data->object_type_exclude_viewport &= ~32; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_font_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 16) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_font_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 16; }
    else { data->object_type_exclude_viewport &= ~16; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_curves_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 134217728) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_curves_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 134217728; }
    else { data->object_type_exclude_viewport &= ~134217728; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_pointcloud_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 268435456) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_pointcloud_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 268435456; }
    else { data->object_type_exclude_viewport &= ~268435456; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_volume_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 536870912) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_volume_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 536870912; }
    else { data->object_type_exclude_viewport &= ~536870912; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_armature_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 33554432) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_armature_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 33554432; }
    else { data->object_type_exclude_viewport &= ~33554432; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_lattice_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 4194304) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_lattice_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 4194304; }
    else { data->object_type_exclude_viewport &= ~4194304; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_empty_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 1) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_empty_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 1; }
    else { data->object_type_exclude_viewport &= ~1; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_grease_pencil_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 67108864) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_grease_pencil_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 67108864; }
    else { data->object_type_exclude_viewport &= ~67108864; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_camera_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 2048) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_camera_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 2048; }
    else { data->object_type_exclude_viewport &= ~2048; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_light_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 1024) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_light_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 1024; }
    else { data->object_type_exclude_viewport &= ~1024; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_speaker_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 4096) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_speaker_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 4096; }
    else { data->object_type_exclude_viewport &= ~4096; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_viewport_light_probe_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 8192) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_viewport_light_probe_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 8192; }
    else { data->object_type_exclude_viewport &= ~8192; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_mesh_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 2) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_mesh_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 2; }
    else { data->object_type_exclude_select &= ~2; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_curve_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 4) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_curve_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 4; }
    else { data->object_type_exclude_select &= ~4; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_surf_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 8) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_surf_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 8; }
    else { data->object_type_exclude_select &= ~8; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_meta_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 32) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_meta_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 32; }
    else { data->object_type_exclude_select &= ~32; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_font_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 16) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_font_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 16; }
    else { data->object_type_exclude_select &= ~16; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_curves_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 134217728) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_curves_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 134217728; }
    else { data->object_type_exclude_select &= ~134217728; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_pointcloud_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 268435456) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_pointcloud_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 268435456; }
    else { data->object_type_exclude_select &= ~268435456; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_volume_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 536870912) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_volume_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 536870912; }
    else { data->object_type_exclude_select &= ~536870912; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_armature_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 33554432) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_armature_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 33554432; }
    else { data->object_type_exclude_select &= ~33554432; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_lattice_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 4194304) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_lattice_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 4194304; }
    else { data->object_type_exclude_select &= ~4194304; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_empty_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 1) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_empty_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 1; }
    else { data->object_type_exclude_select &= ~1; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_grease_pencil_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 67108864) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_grease_pencil_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 67108864; }
    else { data->object_type_exclude_select &= ~67108864; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_camera_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 2048) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_camera_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 2048; }
    else { data->object_type_exclude_select &= ~2048; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_light_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 1024) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_light_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 1024; }
    else { data->object_type_exclude_select &= ~1024; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_speaker_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 4096) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_speaker_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 4096; }
    else { data->object_type_exclude_select &= ~4096; }
}

RNA_EXTERN_C bool XrSessionSettings_show_object_select_light_probe_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 8192) != 0);
}

RNA_EXTERN_C void XrSessionSettings_show_object_select_light_probe_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 8192; }
    else { data->object_type_exclude_select &= ~8192; }
}

RNA_EXTERN_C int XrSessionSettings_icon_from_show_object_viewport_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_XrSessionSettings_icon_from_show_object_viewport_get;
    return fn(ptr);
}

static PointerRNA XrSessionState_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrSessionState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrSessionState_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionState_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrSessionState_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrSessionState_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrSessionState_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrSessionState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrSessionState_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrSessionState_viewer_pose_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_viewer_pose_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrSessionState_viewer_pose_rotation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_viewer_pose_rotation_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrSessionState_navigation_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_nav_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrSessionState_navigation_location_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_XrSessionState_nav_location_set;
    fn(ptr, values);
}

RNA_EXTERN_C void XrSessionState_navigation_rotation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrSessionState_nav_rotation_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrSessionState_navigation_rotation_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_XrSessionState_nav_rotation_set;
    fn(ptr, values);
}

RNA_EXTERN_C float XrSessionState_navigation_scale_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrSessionState_nav_scale_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrSessionState_navigation_scale_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_XrSessionState_nav_scale_set;
    fn(ptr, value);
}

RNA_EXTERN_C int XrSessionState_actionmaps_length(PointerRNA *ptr)
{
    return rna_XrSessionState_actionmaps_length(ptr);
}

static PointerRNA XrSessionState_actionmaps_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrActionMap, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void XrSessionState_actionmaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrSessionState_actionmaps;

    rna_XrSessionState_actionmaps_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionState_actionmaps_get(iter);
    }
}

RNA_EXTERN_C void XrSessionState_actionmaps_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrSessionState_actionmaps_get(iter);
    }
}

RNA_EXTERN_C void XrSessionState_actionmaps_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrSessionState_active_actionmap_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_XrSessionState_active_actionmap_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrSessionState_active_actionmap_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_XrSessionState_active_actionmap_set;
    fn(ptr, value);
}

RNA_EXTERN_C int XrSessionState_selected_actionmap_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_XrSessionState_selected_actionmap_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrSessionState_selected_actionmap_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_XrSessionState_selected_actionmap_set;
    fn(ptr, value);
}

static PointerRNA XrActionMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrActionMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMaps_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMaps_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMaps_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrActionMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrActionMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrActionMaps_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrEventData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void XrEventData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrEventData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrEventData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrEventData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrEventData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void XrEventData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int XrEventData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA XrEventData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void XrEventData_action_set_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_action_set_get(ptr, value);
}

RNA_EXTERN_C int XrEventData_action_set_length(PointerRNA *ptr)
{
    return rna_XrEventData_action_set_length(ptr);
}

RNA_EXTERN_C void XrEventData_action_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_action_get(ptr, value);
}

RNA_EXTERN_C int XrEventData_action_length(PointerRNA *ptr)
{
    return rna_XrEventData_action_length(ptr);
}

RNA_EXTERN_C void XrEventData_user_path_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_user_path_get(ptr, value);
}

RNA_EXTERN_C int XrEventData_user_path_length(PointerRNA *ptr)
{
    return rna_XrEventData_user_path_length(ptr);
}

RNA_EXTERN_C void XrEventData_user_path_other_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_user_path_other_get(ptr, value);
}

RNA_EXTERN_C int XrEventData_user_path_other_length(PointerRNA *ptr)
{
    return rna_XrEventData_user_path_other_length(ptr);
}

RNA_EXTERN_C int XrEventData_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_XrEventData_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrEventData_state_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_state_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrEventData_state_other_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_state_other_get;
    fn(ptr, values);
}

RNA_EXTERN_C float XrEventData_float_threshold_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_XrEventData_float_threshold_get;
    return fn(ptr);
}

RNA_EXTERN_C void XrEventData_controller_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrEventData_controller_rotation_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_rotation_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrEventData_controller_location_other_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_location_other_get;
    fn(ptr, values);
}

RNA_EXTERN_C void XrEventData_controller_rotation_other_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_XrEventData_controller_rotation_other_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool XrEventData_bimanual_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_XrEventData_bimanual_get;
    return fn(ptr);
}


RNA_EXTERN_C struct XrActionMapItem *XrActionMapItems_new_func(struct XrActionMap *_self, const char * name, bool replace_existing)
{
	return rna_XrActionMapItem_new(_self, name, replace_existing);
}

static void XrActionMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	const char * name;
	bool replace_existing;
	struct XrActionMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_XrActionMapItem_new(_self, name, replace_existing);
	*((struct XrActionMapItem **)_retdata) = item;
}

RNA_EXTERN_C struct XrActionMapItem *XrActionMapItems_new_from_item_func(struct XrActionMap *_self, struct XrActionMapItem *item)
{
	return rna_XrActionMapItem_new_from_item(_self, item);
}

static void XrActionMapItems_new_from_item_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	struct XrActionMapItem *item;
	struct XrActionMapItem *result;
	char *_data, *_retdata;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct XrActionMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMapItem_new_from_item(_self, item);
	*((struct XrActionMapItem **)_retdata) = result;
}

RNA_EXTERN_C void XrActionMapItems_remove_func(struct XrActionMap *_self, ReportList *reports, struct PointerRNA *item)
{
	rna_XrActionMapItem_remove(_self, reports, item);
}

static void XrActionMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	struct PointerRNA *item;
	char *_data;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct PointerRNA **)_data);
	
	rna_XrActionMapItem_remove(_self, reports, item);
}

RNA_EXTERN_C struct XrActionMapItem *XrActionMapItems_find_func(struct XrActionMap *_self, const char * name)
{
	return rna_XrActionMapItem_find(_self, name);
}

static void XrActionMapItems_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	const char * name;
	struct XrActionMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_XrActionMapItem_find(_self, name);
	*((struct XrActionMapItem **)_retdata) = item;
}

/* Repeated prototypes to detect errors */

struct XrActionMapItem *rna_XrActionMapItem_new(struct XrActionMap *_self, const char * name, bool replace_existing);
struct XrActionMapItem *rna_XrActionMapItem_new_from_item(struct XrActionMap *_self, struct XrActionMapItem *item);
void rna_XrActionMapItem_remove(struct XrActionMap *_self, ReportList *reports, struct PointerRNA *item);
struct XrActionMapItem *rna_XrActionMapItem_find(struct XrActionMap *_self, const char * name);



RNA_EXTERN_C struct XrUserPath *XrUserPaths_new_func(struct XrActionMapItem *_self, const char * path)
{
	return rna_XrUserPath_new(_self, path);
}

static void XrUserPaths_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * path;
	struct XrUserPath *user_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	user_path = rna_XrUserPath_new(_self, path);
	*((struct XrUserPath **)_retdata) = user_path;
}

RNA_EXTERN_C void XrUserPaths_remove_func(struct XrActionMapItem *_self, struct PointerRNA *user_path)
{
	rna_XrUserPath_remove(_self, user_path);
}

static void XrUserPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	struct PointerRNA *user_path;
	char *_data;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	user_path = *((struct PointerRNA **)_data);
	
	rna_XrUserPath_remove(_self, user_path);
}

RNA_EXTERN_C struct XrUserPath *XrUserPaths_find_func(struct XrActionMapItem *_self, const char * path)
{
	return rna_XrUserPath_find(_self, path);
}

static void XrUserPaths_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * path;
	struct XrUserPath *user_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	user_path = rna_XrUserPath_find(_self, path);
	*((struct XrUserPath **)_retdata) = user_path;
}

/* Repeated prototypes to detect errors */

struct XrUserPath *rna_XrUserPath_new(struct XrActionMapItem *_self, const char * path);
void rna_XrUserPath_remove(struct XrActionMapItem *_self, struct PointerRNA *user_path);
struct XrUserPath *rna_XrUserPath_find(struct XrActionMapItem *_self, const char * path);

RNA_EXTERN_C struct XrActionMapBinding *XrActionMapBindings_new_func(struct XrActionMapItem *_self, const char * name, bool replace_existing)
{
	return rna_XrActionMapBinding_new(_self, name, replace_existing);
}

static void XrActionMapBindings_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * name;
	bool replace_existing;
	struct XrActionMapBinding *binding;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	binding = rna_XrActionMapBinding_new(_self, name, replace_existing);
	*((struct XrActionMapBinding **)_retdata) = binding;
}

RNA_EXTERN_C struct XrActionMapBinding *XrActionMapBindings_new_from_binding_func(struct XrActionMapItem *_self, struct XrActionMapBinding *binding)
{
	return rna_XrActionMapBinding_new_from_binding(_self, binding);
}

static void XrActionMapBindings_new_from_binding_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	struct XrActionMapBinding *binding;
	struct XrActionMapBinding *result;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	binding = *((struct XrActionMapBinding **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMapBinding_new_from_binding(_self, binding);
	*((struct XrActionMapBinding **)_retdata) = result;
}

RNA_EXTERN_C void XrActionMapBindings_remove_func(struct XrActionMapItem *_self, ReportList *reports, struct PointerRNA *binding)
{
	rna_XrActionMapBinding_remove(_self, reports, binding);
}

static void XrActionMapBindings_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	struct PointerRNA *binding;
	char *_data;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	binding = *((struct PointerRNA **)_data);
	
	rna_XrActionMapBinding_remove(_self, reports, binding);
}

RNA_EXTERN_C struct XrActionMapBinding *XrActionMapBindings_find_func(struct XrActionMapItem *_self, const char * name)
{
	return rna_XrActionMapBinding_find(_self, name);
}

static void XrActionMapBindings_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * name;
	struct XrActionMapBinding *binding;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	binding = rna_XrActionMapBinding_find(_self, name);
	*((struct XrActionMapBinding **)_retdata) = binding;
}

/* Repeated prototypes to detect errors */

struct XrActionMapBinding *rna_XrActionMapBinding_new(struct XrActionMapItem *_self, const char * name, bool replace_existing);
struct XrActionMapBinding *rna_XrActionMapBinding_new_from_binding(struct XrActionMapItem *_self, struct XrActionMapBinding *binding);
void rna_XrActionMapBinding_remove(struct XrActionMapItem *_self, ReportList *reports, struct PointerRNA *binding);
struct XrActionMapBinding *rna_XrActionMapBinding_find(struct XrActionMapItem *_self, const char * name);



RNA_EXTERN_C struct XrComponentPath *XrComponentPaths_new_func(struct XrActionMapBinding *_self, const char * path)
{
	return rna_XrComponentPath_new(_self, path);
}

static void XrComponentPaths_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapBinding *_self;
	const char * path;
	struct XrComponentPath *component_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	component_path = rna_XrComponentPath_new(_self, path);
	*((struct XrComponentPath **)_retdata) = component_path;
}

RNA_EXTERN_C void XrComponentPaths_remove_func(struct XrActionMapBinding *_self, struct PointerRNA *component_path)
{
	rna_XrComponentPath_remove(_self, component_path);
}

static void XrComponentPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapBinding *_self;
	struct PointerRNA *component_path;
	char *_data;
	
	_self = (struct XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	component_path = *((struct PointerRNA **)_data);
	
	rna_XrComponentPath_remove(_self, component_path);
}

RNA_EXTERN_C struct XrComponentPath *XrComponentPaths_find_func(struct XrActionMapBinding *_self, const char * path)
{
	return rna_XrComponentPath_find(_self, path);
}

static void XrComponentPaths_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapBinding *_self;
	const char * path;
	struct XrComponentPath *component_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	component_path = rna_XrComponentPath_find(_self, path);
	*((struct XrComponentPath **)_retdata) = component_path;
}

/* Repeated prototypes to detect errors */

struct XrComponentPath *rna_XrComponentPath_new(struct XrActionMapBinding *_self, const char * path);
void rna_XrComponentPath_remove(struct XrActionMapBinding *_self, struct PointerRNA *component_path);
struct XrComponentPath *rna_XrComponentPath_find(struct XrActionMapBinding *_self, const char * path);


RNA_EXTERN_C bool XrSessionState_is_running_func(struct bContext *context)
{
	return rna_XrSessionState_is_running(context);
}

static void XrSessionState_is_running_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_is_running(context);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void XrSessionState_reset_to_base_pose_func(struct bContext *context)
{
	rna_XrSessionState_reset_to_base_pose(context);
}

static void XrSessionState_reset_to_base_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	
	rna_XrSessionState_reset_to_base_pose(context);
}

RNA_EXTERN_C bool XrSessionState_action_set_create_func(struct bContext *context, struct XrActionMap *actionmap)
{
	return rna_XrSessionState_action_set_create(context, actionmap);
}

static void XrSessionState_action_set_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	struct XrActionMap *actionmap;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_set_create(context, actionmap);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool XrSessionState_action_create_func(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item)
{
	return rna_XrSessionState_action_create(context, actionmap, actionmap_item);
}

static void XrSessionState_action_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	struct XrActionMap *actionmap;
	struct XrActionMapItem *actionmap_item;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	actionmap_item = *((struct XrActionMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_create(context, actionmap, actionmap_item);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool XrSessionState_action_binding_create_func(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item, struct XrActionMapBinding *actionmap_binding)
{
	return rna_XrSessionState_action_binding_create(context, actionmap, actionmap_item, actionmap_binding);
}

static void XrSessionState_action_binding_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	struct XrActionMap *actionmap;
	struct XrActionMapItem *actionmap_item;
	struct XrActionMapBinding *actionmap_binding;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	actionmap_item = *((struct XrActionMapItem **)_data);
	_data += 8;
	actionmap_binding = *((struct XrActionMapBinding **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_binding_create(context, actionmap, actionmap_item, actionmap_binding);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool XrSessionState_active_action_set_set_func(struct bContext *context, const char * action_set)
{
	return rna_XrSessionState_active_action_set_set(context, action_set);
}

static void XrSessionState_active_action_set_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_active_action_set_set(context, action_set);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool XrSessionState_controller_pose_actions_set_func(struct bContext *context, const char * action_set, const char * grip_action, const char * aim_action)
{
	return rna_XrSessionState_controller_pose_actions_set(context, action_set, grip_action, aim_action);
}

static void XrSessionState_controller_pose_actions_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set;
	const char * grip_action;
	const char * aim_action;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set = *((const char * *)_data);
	_data += 8;
	grip_action = *((const char * *)_data);
	_data += 8;
	aim_action = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_controller_pose_actions_set(context, action_set, grip_action, aim_action);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void XrSessionState_action_state_get_func(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float state[2])
{
	rna_XrSessionState_action_state_get(context, action_set_name, action_name, user_path, state);
}

static void XrSessionState_action_state_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	float *state;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	_data += 8;
	state = ((float *)_data);
	
	rna_XrSessionState_action_state_get(context, action_set_name, action_name, user_path, state);
}

RNA_EXTERN_C bool XrSessionState_haptic_action_apply_func(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float duration, float frequency, float amplitude)
{
	return rna_XrSessionState_haptic_action_apply(context, action_set_name, action_name, user_path, duration, frequency, amplitude);
}

static void XrSessionState_haptic_action_apply_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	float duration;
	float frequency;
	float amplitude;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	_data += 8;
	duration = *((float *)_data);
	_data += 8;
	frequency = *((float *)_data);
	_data += 8;
	amplitude = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_haptic_action_apply(context, action_set_name, action_name, user_path, duration, frequency, amplitude);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void XrSessionState_haptic_action_stop_func(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path)
{
	rna_XrSessionState_haptic_action_stop(context, action_set_name, action_name, user_path);
}

static void XrSessionState_haptic_action_stop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	
	rna_XrSessionState_haptic_action_stop(context, action_set_name, action_name, user_path);
}

RNA_EXTERN_C void XrSessionState_controller_grip_location_get_func(struct bContext *context, int index, float location[3])
{
	rna_XrSessionState_controller_grip_location_get(context, index, location);
}

static void XrSessionState_controller_grip_location_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *location;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_XrSessionState_controller_grip_location_get(context, index, location);
}

RNA_EXTERN_C void XrSessionState_controller_grip_rotation_get_func(struct bContext *context, int index, float rotation[4])
{
	rna_XrSessionState_controller_grip_rotation_get(context, index, rotation);
}

static void XrSessionState_controller_grip_rotation_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *rotation;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	rotation = ((float *)_data);
	
	rna_XrSessionState_controller_grip_rotation_get(context, index, rotation);
}

RNA_EXTERN_C void XrSessionState_controller_aim_location_get_func(struct bContext *context, int index, float location[3])
{
	rna_XrSessionState_controller_aim_location_get(context, index, location);
}

static void XrSessionState_controller_aim_location_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *location;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_XrSessionState_controller_aim_location_get(context, index, location);
}

RNA_EXTERN_C void XrSessionState_controller_aim_rotation_get_func(struct bContext *context, int index, float rotation[4])
{
	rna_XrSessionState_controller_aim_rotation_get(context, index, rotation);
}

static void XrSessionState_controller_aim_rotation_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *rotation;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	rotation = ((float *)_data);
	
	rna_XrSessionState_controller_aim_rotation_get(context, index, rotation);
}

/* Repeated prototypes to detect errors */

bool rna_XrSessionState_is_running(struct bContext *context);
void rna_XrSessionState_reset_to_base_pose(struct bContext *context);
bool rna_XrSessionState_action_set_create(struct bContext *context, struct XrActionMap *actionmap);
bool rna_XrSessionState_action_create(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item);
bool rna_XrSessionState_action_binding_create(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item, struct XrActionMapBinding *actionmap_binding);
bool rna_XrSessionState_active_action_set_set(struct bContext *context, const char * action_set);
bool rna_XrSessionState_controller_pose_actions_set(struct bContext *context, const char * action_set, const char * grip_action, const char * aim_action);
void rna_XrSessionState_action_state_get(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float state[2]);
bool rna_XrSessionState_haptic_action_apply(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float duration, float frequency, float amplitude);
void rna_XrSessionState_haptic_action_stop(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path);
void rna_XrSessionState_controller_grip_location_get(struct bContext *context, int index, float location[3]);
void rna_XrSessionState_controller_grip_rotation_get(struct bContext *context, int index, float rotation[4]);
void rna_XrSessionState_controller_aim_location_get(struct bContext *context, int index, float location[3]);
void rna_XrSessionState_controller_aim_rotation_get(struct bContext *context, int index, float rotation[4]);

RNA_EXTERN_C struct XrActionMap *XrActionMaps_new_func(struct PointerRNA *xr_session_state, const char * name, bool replace_existing)
{
	return rna_XrActionMap_new(xr_session_state, name, replace_existing);
}

static void XrActionMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	const char * name;
	bool replace_existing;
	struct XrActionMap *actionmap;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	actionmap = rna_XrActionMap_new(xr_session_state, name, replace_existing);
	*((struct XrActionMap **)_retdata) = actionmap;
}

RNA_EXTERN_C struct XrActionMap *XrActionMaps_new_from_actionmap_func(struct PointerRNA *xr_session_state, struct XrActionMap *actionmap)
{
	return rna_XrActionMap_new_from_actionmap(xr_session_state, actionmap);
}

static void XrActionMaps_new_from_actionmap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	struct XrActionMap *actionmap;
	struct XrActionMap *result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMap_new_from_actionmap(xr_session_state, actionmap);
	*((struct XrActionMap **)_retdata) = result;
}

RNA_EXTERN_C void XrActionMaps_remove_func(ReportList *reports, struct PointerRNA *xr_session_state, struct PointerRNA *actionmap)
{
	rna_XrActionMap_remove(reports, xr_session_state, actionmap);
}

static void XrActionMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	struct PointerRNA *actionmap;
	char *_data;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	actionmap = *((struct PointerRNA **)_data);
	
	rna_XrActionMap_remove(reports, xr_session_state, actionmap);
}

RNA_EXTERN_C struct XrActionMap *XrActionMaps_find_func(struct PointerRNA *xr_session_state, const char * name)
{
	return rna_XrActionMap_find(xr_session_state, name);
}

static void XrActionMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	const char * name;
	struct XrActionMap *actionmap;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	actionmap = rna_XrActionMap_find(xr_session_state, name);
	*((struct XrActionMap **)_retdata) = actionmap;
}

/* Repeated prototypes to detect errors */

struct XrActionMap *rna_XrActionMap_new(struct PointerRNA *xr_session_state, const char * name, bool replace_existing);
struct XrActionMap *rna_XrActionMap_new_from_actionmap(struct PointerRNA *xr_session_state, struct XrActionMap *actionmap);
void rna_XrActionMap_remove(ReportList *reports, struct PointerRNA *xr_session_state, struct PointerRNA *actionmap);
struct XrActionMap *rna_XrActionMap_find(struct PointerRNA *xr_session_state, const char * name);


/* XR Action Map */
CollectionPropertyRNA rna_XrActionMap_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMap_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMap_rna_properties_begin, XrActionMap_rna_properties_next, XrActionMap_rna_properties_end, XrActionMap_rna_properties_get, nullptr, nullptr, XrActionMap_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrActionMap_rna_type = {
	{(PropertyRNA *)&rna_XrActionMap_name, (PropertyRNA *)&rna_XrActionMap_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMap_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrActionMap_name = {
	{(PropertyRNA *)&rna_XrActionMap_actionmap_items, (PropertyRNA *)&rna_XrActionMap_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the action map",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_XrActionMap_name_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMap_name_get, XrActionMap_name_length, XrActionMap_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

CollectionPropertyRNA rna_XrActionMap_actionmap_items = {
	{(PropertyRNA *)&rna_XrActionMap_selected_item, (PropertyRNA *)&rna_XrActionMap_name,
	-1, "actionmap_items", 0, 0, 0, 0, 0, "Items",
	"Items in the action map, mapping an XR event to an operator, pose, or haptic output",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_XrActionMapItems},
	XrActionMap_actionmap_items_begin, XrActionMap_actionmap_items_next, XrActionMap_actionmap_items_end, XrActionMap_actionmap_items_get, XrActionMap_actionmap_items_length, XrActionMap_actionmap_items_lookup_int, XrActionMap_actionmap_items_lookup_string, nullptr, &RNA_XrActionMapItem
};

IntPropertyRNA rna_XrActionMap_selected_item = {
	{nullptr, (PropertyRNA *)&rna_XrActionMap_actionmap_items,
	-1, "selected_item", 1, 0, 0, 4, 0, "Selected Item",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMap, selitem), (RawPropertyType)1, nullptr},
	XrActionMap_selected_item_get, XrActionMap_selected_item_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

StructRNA RNA_XrActionMap = {
	{(ContainerRNA *)&RNA_XrActionMapItems, (ContainerRNA *)&RNA_MaskLayers,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMap_rna_properties, (PropertyRNA *)&rna_XrActionMap_selected_item}},
	"XrActionMap", nullptr, nullptr, 516, nullptr, "XR Action Map",
	"",
	"*", 17,
	(PropertyRNA *)&rna_XrActionMap_name, (PropertyRNA *)&rna_XrActionMap_rna_properties,
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

/* XR Action Map Items */
CollectionPropertyRNA rna_XrActionMapItems_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapItems_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItems_rna_properties_begin, XrActionMapItems_rna_properties_next, XrActionMapItems_rna_properties_end, XrActionMapItems_rna_properties_get, nullptr, nullptr, XrActionMapItems_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapItems_rna_type = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapItems_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItems_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapItems_new_name = {
	{(PropertyRNA *)&rna_XrActionMapItems_new_replace_existing, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name of the action map item",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_XrActionMapItems_new_replace_existing = {
	{(PropertyRNA *)&rna_XrActionMapItems_new_item, (PropertyRNA *)&rna_XrActionMapItems_new_name,
	-1, "replace_existing", 1, 0, 1, 0, 0, "Replace Existing",
	"Replace any existing item with the same name",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_XrActionMapItems_new_item = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapItems_new_replace_existing,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"Added action map item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_new_func = {
	{(FunctionRNA *)&rna_XrActionMapItems_new_from_item_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapItems_new_name, (PropertyRNA *)&rna_XrActionMapItems_new_item}},
	"new", 0, "new",
	XrActionMapItems_new_call,
	(PropertyRNA *)&rna_XrActionMapItems_new_item
};

PointerPropertyRNA rna_XrActionMapItems_new_from_item_item = {
	{(PropertyRNA *)&rna_XrActionMapItems_new_from_item_result, nullptr,
	-1, "item", 8650752, 0, 1, 0, 0, "Item",
	"Item to use as a reference",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

PointerPropertyRNA rna_XrActionMapItems_new_from_item_result = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapItems_new_from_item_item,
	-1, "result", 8388608, 0, 2, 0, 0, "Item",
	"Added action map item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_new_from_item_func = {
	{(FunctionRNA *)&rna_XrActionMapItems_remove_func, (FunctionRNA *)&rna_XrActionMapItems_new_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapItems_new_from_item_item, (PropertyRNA *)&rna_XrActionMapItems_new_from_item_result}},
	"new_from_item", 0, "new_from_item",
	XrActionMapItems_new_from_item_call,
	(PropertyRNA *)&rna_XrActionMapItems_new_from_item_result
};

PointerPropertyRNA rna_XrActionMapItems_remove_item = {
	{nullptr, nullptr,
	-1, "item", 262144, 0, 5, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_remove_func = {
	{(FunctionRNA *)&rna_XrActionMapItems_find_func, (FunctionRNA *)&rna_XrActionMapItems_new_from_item_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapItems_remove_item, (PropertyRNA *)&rna_XrActionMapItems_remove_item}},
	"remove", 16, "remove",
	XrActionMapItems_remove_call,
	nullptr
};

StringPropertyRNA rna_XrActionMapItems_find_name = {
	{(PropertyRNA *)&rna_XrActionMapItems_find_item, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_XrActionMapItems_find_item = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapItems_find_name,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"The action map item with the given name",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_find_func = {
	{nullptr, (FunctionRNA *)&rna_XrActionMapItems_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapItems_find_name, (PropertyRNA *)&rna_XrActionMapItems_find_item}},
	"find", 0, "find",
	XrActionMapItems_find_call,
	(PropertyRNA *)&rna_XrActionMapItems_find_item
};

StructRNA RNA_XrActionMapItems = {
	{(ContainerRNA *)&RNA_XrUserPath, (ContainerRNA *)&RNA_XrActionMap,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapItems_rna_properties, (PropertyRNA *)&rna_XrActionMapItems_rna_type}},
	"XrActionMapItems", nullptr, nullptr, 516, nullptr, "XR Action Map Items",
	"Collection of XR action map items",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrActionMapItems_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_XrActionMapItems_new_func, (FunctionRNA *)&rna_XrActionMapItems_find_func}
};

/* XR User Path */
CollectionPropertyRNA rna_XrUserPath_rna_properties = {
	{(PropertyRNA *)&rna_XrUserPath_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrUserPath_rna_properties_begin, XrUserPath_rna_properties_next, XrUserPath_rna_properties_end, XrUserPath_rna_properties_get, nullptr, nullptr, XrUserPath_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrUserPath_rna_type = {
	{(PropertyRNA *)&rna_XrUserPath_path, (PropertyRNA *)&rna_XrUserPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrUserPath_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrUserPath_path = {
	{nullptr, (PropertyRNA *)&rna_XrUserPath_rna_type,
	-1, "path", 262145, 0, 0, 0, 0, "Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrUserPath_path_get, XrUserPath_path_length, XrUserPath_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StructRNA RNA_XrUserPath = {
	{(ContainerRNA *)&RNA_XrActionMapItem, (ContainerRNA *)&RNA_XrActionMapItems,
	nullptr,
	{(PropertyRNA *)&rna_XrUserPath_rna_properties, (PropertyRNA *)&rna_XrUserPath_path}},
	"XrUserPath", nullptr, nullptr, 516, nullptr, "XR User Path",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrUserPath_rna_properties,
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

/* XR Action Map Item */
CollectionPropertyRNA rna_XrActionMapItem_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapItem_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_rna_properties_begin, XrActionMapItem_rna_properties_next, XrActionMapItem_rna_properties_end, XrActionMapItem_rna_properties_get, nullptr, nullptr, XrActionMapItem_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapItem_rna_type = {
	{(PropertyRNA *)&rna_XrActionMapItem_name, (PropertyRNA *)&rna_XrActionMapItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapItem_name = {
	{(PropertyRNA *)&rna_XrActionMapItem_type, (PropertyRNA *)&rna_XrActionMapItem_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the action map item",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_XrActionMapItem_name_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_name_get, XrActionMapItem_name_length, XrActionMapItem_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static const EnumPropertyItem rna_XrActionMapItem_type_items[5] = {
	{2, "FLOAT", 0, "Float", "Float action, representing either a digital or analog button"},
	{3, "VECTOR2D", 0, "Vector2D", "2D float vector action, representing a thumbstick or trackpad"},
	{4, "POSE", 0, "Pose", "3D pose action, representing a controller\'s location and rotation"},
	{100, "VIBRATION", 0, "Vibration", "Haptic vibration output action, to be applied with a duration, frequency, and amplitude"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrActionMapItem_type = {
	{(PropertyRNA *)&rna_XrActionMapItem_user_paths, (PropertyRNA *)&rna_XrActionMapItem_name,
	-1, "type", 1, 0, 0, 4, 0, "Type",
	"Action type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_XrActionMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, type), (RawPropertyType)2, nullptr},
	XrActionMapItem_type_get, XrActionMapItem_type_set, nullptr, nullptr, nullptr, rna_XrActionMapItem_type_items, 4, 2
};

CollectionPropertyRNA rna_XrActionMapItem_user_paths = {
	{(PropertyRNA *)&rna_XrActionMapItem_op, (PropertyRNA *)&rna_XrActionMapItem_type,
	-1, "user_paths", 0, 0, 0, 0, 0, "User Paths",
	"OpenXR user paths",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_XrUserPaths},
	XrActionMapItem_user_paths_begin, XrActionMapItem_user_paths_next, XrActionMapItem_user_paths_end, XrActionMapItem_user_paths_get, XrActionMapItem_user_paths_length, XrActionMapItem_user_paths_lookup_int, nullptr, nullptr, &RNA_XrUserPath
};

StringPropertyRNA rna_XrActionMapItem_op = {
	{(PropertyRNA *)&rna_XrActionMapItem_op_name, (PropertyRNA *)&rna_XrActionMapItem_user_paths,
	-1, "op", 262145, 0, 0, 0, 0, "Operator",
	"Identifier of operator to call on action event",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_XrActionMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_op_get, XrActionMapItem_op_length, XrActionMapItem_op_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrActionMapItem_op_name = {
	{(PropertyRNA *)&rna_XrActionMapItem_op_properties, (PropertyRNA *)&rna_XrActionMapItem_op,
	-1, "op_name", 262144, 0, 0, 0, 0, "Operator Name",
	"Name of operator (translated) to call on action event",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_op_name_get, XrActionMapItem_op_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_XrActionMapItem_op_properties = {
	{(PropertyRNA *)&rna_XrActionMapItem_op_mode, (PropertyRNA *)&rna_XrActionMapItem_op_name,
	-1, "op_properties", 8388608, 0, 0, 0, 0, "Operator Properties",
	"Properties to set when the operator is called",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_XrActionMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_op_properties_get, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

static const EnumPropertyItem rna_XrActionMapItem_op_mode_items[4] = {
	{0, "PRESS", 0, "Press", "Execute operator on button press (non-modal operators only)"},
	{1, "RELEASE", 0, "Release", "Execute operator on button release (non-modal operators only)"},
	{2, "MODAL", 0, "Modal", "Use modal execution (modal operators only)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrActionMapItem_op_mode = {
	{(PropertyRNA *)&rna_XrActionMapItem_bimanual, (PropertyRNA *)&rna_XrActionMapItem_op_properties,
	-1, "op_mode", 1, 0, 0, 4, 0, "Operator Mode",
	"Operator execution mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, op_flag), (RawPropertyType)1, nullptr},
	XrActionMapItem_op_mode_get, XrActionMapItem_op_mode_set, nullptr, nullptr, nullptr, rna_XrActionMapItem_op_mode_items, 3, 0
};

BoolPropertyRNA rna_XrActionMapItem_bimanual = {
	{(PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_grip, (PropertyRNA *)&rna_XrActionMapItem_op_mode,
	-1, "bimanual", 1, 0, 0, 0, 0, "Bimanual",
	"The action depends on the states/poses of both user paths",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_bimanual_get, XrActionMapItem_bimanual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_grip = {
	{(PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_aim, (PropertyRNA *)&rna_XrActionMapItem_bimanual,
	-1, "pose_is_controller_grip", 1, 0, 0, 0, 0, "Is Controller Grip",
	"The action poses will be used for the VR controller grips",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_pose_is_controller_grip_get, XrActionMapItem_pose_is_controller_grip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_aim = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_name, (PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_grip,
	-1, "pose_is_controller_aim", 1, 0, 0, 0, 0, "Is Controller Aim",
	"The action poses will be used for the VR controller aims",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_pose_is_controller_aim_get, XrActionMapItem_pose_is_controller_aim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_XrActionMapItem_haptic_name = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_match_user_paths, (PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_aim,
	-1, "haptic_name", 262145, 0, 0, 0, 0, "Haptic Name",
	"Name of the haptic action to apply when executing this action",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_haptic_name_get, XrActionMapItem_haptic_name_length, XrActionMapItem_haptic_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_XrActionMapItem_haptic_match_user_paths = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_duration, (PropertyRNA *)&rna_XrActionMapItem_haptic_name,
	-1, "haptic_match_user_paths", 1, 0, 0, 0, 0, "Haptic Match User Paths",
	"Apply haptics to the same user paths for the haptic action and this action",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_haptic_match_user_paths_get, XrActionMapItem_haptic_match_user_paths_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_XrActionMapItem_haptic_duration = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_frequency, (PropertyRNA *)&rna_XrActionMapItem_haptic_match_user_paths,
	-1, "haptic_duration", 1, 0, 0, 4, 0, "Haptic Duration",
	"Haptic duration in seconds. 0.0 is the minimum supported duration",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, haptic_duration), (RawPropertyType)5, nullptr},
	XrActionMapItem_haptic_duration_get, XrActionMapItem_haptic_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_XrActionMapItem_haptic_frequency = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_amplitude, (PropertyRNA *)&rna_XrActionMapItem_haptic_duration,
	-1, "haptic_frequency", 1, 0, 0, 4, 0, "Haptic Frequency",
	"Frequency of the haptic vibration in hertz. 0.0 specifies the OpenXR runtime\'s default frequency",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, haptic_frequency), (RawPropertyType)5, nullptr},
	XrActionMapItem_haptic_frequency_get, XrActionMapItem_haptic_frequency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_XrActionMapItem_haptic_amplitude = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_mode, (PropertyRNA *)&rna_XrActionMapItem_haptic_frequency,
	-1, "haptic_amplitude", 1, 0, 0, 4, 0, "Haptic Amplitude",
	"Intensity of the haptic vibration, ranging from 0.0 to 1.0",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, haptic_amplitude), (RawPropertyType)5, nullptr},
	XrActionMapItem_haptic_amplitude_get, XrActionMapItem_haptic_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_XrActionMapItem_haptic_mode_items[5] = {
	{2, "PRESS", 0, "Press", "Apply haptics on button press"},
	{4, "RELEASE", 0, "Release", "Apply haptics on button release"},
	{6, "PRESS_RELEASE", 0, "Press Release", "Apply haptics on button press and release"},
	{8, "REPEAT", 0, "Repeat", "Apply haptics repeatedly for the duration of the button press"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrActionMapItem_haptic_mode = {
	{(PropertyRNA *)&rna_XrActionMapItem_bindings, (PropertyRNA *)&rna_XrActionMapItem_haptic_amplitude,
	-1, "haptic_mode", 1, 0, 0, 0, 0, "Haptic mode",
	"Haptic application mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapItem_haptic_mode_get, XrActionMapItem_haptic_mode_set, nullptr, nullptr, nullptr, rna_XrActionMapItem_haptic_mode_items, 4, 2
};

CollectionPropertyRNA rna_XrActionMapItem_bindings = {
	{(PropertyRNA *)&rna_XrActionMapItem_selected_binding, (PropertyRNA *)&rna_XrActionMapItem_haptic_mode,
	-1, "bindings", 0, 0, 0, 0, 0, "Bindings",
	"Bindings for the action map item, mapping the action to an XR input",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_XrActionMapBindings},
	XrActionMapItem_bindings_begin, XrActionMapItem_bindings_next, XrActionMapItem_bindings_end, XrActionMapItem_bindings_get, XrActionMapItem_bindings_length, XrActionMapItem_bindings_lookup_int, XrActionMapItem_bindings_lookup_string, nullptr, &RNA_XrActionMapBinding
};

IntPropertyRNA rna_XrActionMapItem_selected_binding = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapItem_bindings,
	-1, "selected_binding", 1, 0, 0, 4, 0, "Selected Binding",
	"Currently selected binding",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, selbinding), (RawPropertyType)1, nullptr},
	XrActionMapItem_selected_binding_get, XrActionMapItem_selected_binding_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

StructRNA RNA_XrActionMapItem = {
	{(ContainerRNA *)&RNA_XrUserPaths, (ContainerRNA *)&RNA_XrUserPath,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapItem_rna_properties, (PropertyRNA *)&rna_XrActionMapItem_selected_binding}},
	"XrActionMapItem", nullptr, nullptr, 516, nullptr, "XR Action Map Item",
	"",
	"*", 17,
	(PropertyRNA *)&rna_XrActionMapItem_name, (PropertyRNA *)&rna_XrActionMapItem_rna_properties,
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

/* XR User Paths */
CollectionPropertyRNA rna_XrUserPaths_rna_properties = {
	{(PropertyRNA *)&rna_XrUserPaths_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrUserPaths_rna_properties_begin, XrUserPaths_rna_properties_next, XrUserPaths_rna_properties_end, XrUserPaths_rna_properties_get, nullptr, nullptr, XrUserPaths_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrUserPaths_rna_type = {
	{nullptr, (PropertyRNA *)&rna_XrUserPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrUserPaths_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrUserPaths_new_path = {
	{(PropertyRNA *)&rna_XrUserPaths_new_user_path, nullptr,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_XrUserPaths_new_user_path = {
	{nullptr, (PropertyRNA *)&rna_XrUserPaths_new_path,
	-1, "user_path", 8388608, 0, 2, 0, 0, "User Path",
	"Added user path",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrUserPath
};

FunctionRNA rna_XrUserPaths_new_func = {
	{(FunctionRNA *)&rna_XrUserPaths_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_XrUserPaths_new_path, (PropertyRNA *)&rna_XrUserPaths_new_user_path}},
	"new", 0, "new",
	XrUserPaths_new_call,
	(PropertyRNA *)&rna_XrUserPaths_new_user_path
};

PointerPropertyRNA rna_XrUserPaths_remove_user_path = {
	{nullptr, nullptr,
	-1, "user_path", 262144, 0, 5, 0, 0, "User Path",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrUserPath
};

FunctionRNA rna_XrUserPaths_remove_func = {
	{(FunctionRNA *)&rna_XrUserPaths_find_func, (FunctionRNA *)&rna_XrUserPaths_new_func,
	nullptr,
	{(PropertyRNA *)&rna_XrUserPaths_remove_user_path, (PropertyRNA *)&rna_XrUserPaths_remove_user_path}},
	"remove", 0, "remove",
	XrUserPaths_remove_call,
	nullptr
};

StringPropertyRNA rna_XrUserPaths_find_path = {
	{(PropertyRNA *)&rna_XrUserPaths_find_user_path, nullptr,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_XrUserPaths_find_user_path = {
	{nullptr, (PropertyRNA *)&rna_XrUserPaths_find_path,
	-1, "user_path", 8388608, 0, 2, 0, 0, "User Path",
	"The user path with the given path",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrUserPath
};

FunctionRNA rna_XrUserPaths_find_func = {
	{nullptr, (FunctionRNA *)&rna_XrUserPaths_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_XrUserPaths_find_path, (PropertyRNA *)&rna_XrUserPaths_find_user_path}},
	"find", 0, "find",
	XrUserPaths_find_call,
	(PropertyRNA *)&rna_XrUserPaths_find_user_path
};

StructRNA RNA_XrUserPaths = {
	{(ContainerRNA *)&RNA_XrActionMapBindings, (ContainerRNA *)&RNA_XrActionMapItem,
	nullptr,
	{(PropertyRNA *)&rna_XrUserPaths_rna_properties, (PropertyRNA *)&rna_XrUserPaths_rna_type}},
	"XrUserPaths", nullptr, nullptr, 516, nullptr, "XR User Paths",
	"Collection of OpenXR user paths",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrUserPaths_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_XrUserPaths_new_func, (FunctionRNA *)&rna_XrUserPaths_find_func}
};

/* XR Action Map Bindings */
CollectionPropertyRNA rna_XrActionMapBindings_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapBindings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBindings_rna_properties_begin, XrActionMapBindings_rna_properties_next, XrActionMapBindings_rna_properties_end, XrActionMapBindings_rna_properties_get, nullptr, nullptr, XrActionMapBindings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapBindings_rna_type = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapBindings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBindings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapBindings_new_name = {
	{(PropertyRNA *)&rna_XrActionMapBindings_new_replace_existing, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name of the action map binding",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_XrActionMapBindings_new_replace_existing = {
	{(PropertyRNA *)&rna_XrActionMapBindings_new_binding, (PropertyRNA *)&rna_XrActionMapBindings_new_name,
	-1, "replace_existing", 1, 0, 1, 0, 0, "Replace Existing",
	"Replace any existing binding with the same name",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_XrActionMapBindings_new_binding = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapBindings_new_replace_existing,
	-1, "binding", 8388608, 0, 2, 0, 0, "Binding",
	"Added action map binding",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_new_func = {
	{(FunctionRNA *)&rna_XrActionMapBindings_new_from_binding_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapBindings_new_name, (PropertyRNA *)&rna_XrActionMapBindings_new_binding}},
	"new", 0, "new",
	XrActionMapBindings_new_call,
	(PropertyRNA *)&rna_XrActionMapBindings_new_binding
};

PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_binding = {
	{(PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_result, nullptr,
	-1, "binding", 8650752, 0, 1, 0, 0, "Binding",
	"Binding to use as a reference",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapBinding
};

PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_result = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_binding,
	-1, "result", 8388608, 0, 2, 0, 0, "Binding",
	"Added action map binding",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_new_from_binding_func = {
	{(FunctionRNA *)&rna_XrActionMapBindings_remove_func, (FunctionRNA *)&rna_XrActionMapBindings_new_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_binding, (PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_result}},
	"new_from_binding", 0, "new_from_binding",
	XrActionMapBindings_new_from_binding_call,
	(PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_result
};

PointerPropertyRNA rna_XrActionMapBindings_remove_binding = {
	{nullptr, nullptr,
	-1, "binding", 262144, 0, 5, 0, 0, "Binding",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_remove_func = {
	{(FunctionRNA *)&rna_XrActionMapBindings_find_func, (FunctionRNA *)&rna_XrActionMapBindings_new_from_binding_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapBindings_remove_binding, (PropertyRNA *)&rna_XrActionMapBindings_remove_binding}},
	"remove", 16, "remove",
	XrActionMapBindings_remove_call,
	nullptr
};

StringPropertyRNA rna_XrActionMapBindings_find_name = {
	{(PropertyRNA *)&rna_XrActionMapBindings_find_binding, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_XrActionMapBindings_find_binding = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapBindings_find_name,
	-1, "binding", 8388608, 0, 2, 0, 0, "Binding",
	"The action map binding with the given name",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_find_func = {
	{nullptr, (FunctionRNA *)&rna_XrActionMapBindings_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapBindings_find_name, (PropertyRNA *)&rna_XrActionMapBindings_find_binding}},
	"find", 0, "find",
	XrActionMapBindings_find_call,
	(PropertyRNA *)&rna_XrActionMapBindings_find_binding
};

StructRNA RNA_XrActionMapBindings = {
	{(ContainerRNA *)&RNA_XrComponentPath, (ContainerRNA *)&RNA_XrUserPaths,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapBindings_rna_properties, (PropertyRNA *)&rna_XrActionMapBindings_rna_type}},
	"XrActionMapBindings", nullptr, nullptr, 516, nullptr, "XR Action Map Bindings",
	"Collection of XR action map bindings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrActionMapBindings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_XrActionMapBindings_new_func, (FunctionRNA *)&rna_XrActionMapBindings_find_func}
};

/* XR Component Path */
CollectionPropertyRNA rna_XrComponentPath_rna_properties = {
	{(PropertyRNA *)&rna_XrComponentPath_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrComponentPath_rna_properties_begin, XrComponentPath_rna_properties_next, XrComponentPath_rna_properties_end, XrComponentPath_rna_properties_get, nullptr, nullptr, XrComponentPath_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrComponentPath_rna_type = {
	{(PropertyRNA *)&rna_XrComponentPath_path, (PropertyRNA *)&rna_XrComponentPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrComponentPath_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrComponentPath_path = {
	{nullptr, (PropertyRNA *)&rna_XrComponentPath_rna_type,
	-1, "path", 262145, 0, 0, 0, 0, "Path",
	"OpenXR component path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {192, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrComponentPath_path_get, XrComponentPath_path_length, XrComponentPath_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 192, ""
};

StructRNA RNA_XrComponentPath = {
	{(ContainerRNA *)&RNA_XrActionMapBinding, (ContainerRNA *)&RNA_XrActionMapBindings,
	nullptr,
	{(PropertyRNA *)&rna_XrComponentPath_rna_properties, (PropertyRNA *)&rna_XrComponentPath_path}},
	"XrComponentPath", nullptr, nullptr, 516, nullptr, "XR Component Path",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrComponentPath_rna_properties,
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

/* XR Action Map Binding */
CollectionPropertyRNA rna_XrActionMapBinding_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapBinding_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBinding_rna_properties_begin, XrActionMapBinding_rna_properties_next, XrActionMapBinding_rna_properties_end, XrActionMapBinding_rna_properties_get, nullptr, nullptr, XrActionMapBinding_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapBinding_rna_type = {
	{(PropertyRNA *)&rna_XrActionMapBinding_name, (PropertyRNA *)&rna_XrActionMapBinding_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBinding_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapBinding_name = {
	{(PropertyRNA *)&rna_XrActionMapBinding_profile, (PropertyRNA *)&rna_XrActionMapBinding_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the action map binding",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_XrActionMapBinding_name_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBinding_name_get, XrActionMapBinding_name_length, XrActionMapBinding_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrActionMapBinding_profile = {
	{(PropertyRNA *)&rna_XrActionMapBinding_component_paths, (PropertyRNA *)&rna_XrActionMapBinding_name,
	-1, "profile", 262145, 0, 0, 0, 0, "Profile",
	"OpenXR interaction profile path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {256, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBinding_profile_get, XrActionMapBinding_profile_length, XrActionMapBinding_profile_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 256, ""
};

CollectionPropertyRNA rna_XrActionMapBinding_component_paths = {
	{(PropertyRNA *)&rna_XrActionMapBinding_threshold, (PropertyRNA *)&rna_XrActionMapBinding_profile,
	-1, "component_paths", 0, 0, 0, 0, 0, "Component Paths",
	"OpenXR component paths",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_XrComponentPaths},
	XrActionMapBinding_component_paths_begin, XrActionMapBinding_component_paths_next, XrActionMapBinding_component_paths_end, XrActionMapBinding_component_paths_get, XrActionMapBinding_component_paths_length, XrActionMapBinding_component_paths_lookup_int, nullptr, nullptr, &RNA_XrComponentPath
};

FloatPropertyRNA rna_XrActionMapBinding_threshold = {
	{(PropertyRNA *)&rna_XrActionMapBinding_axis0_region, (PropertyRNA *)&rna_XrActionMapBinding_component_paths,
	-1, "threshold", 1, 0, 0, 4, 0, "Threshold",
	"Input threshold for button/axis actions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapBinding, float_threshold), (RawPropertyType)5, nullptr},
	XrActionMapBinding_threshold_get, XrActionMapBinding_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_XrActionMapBinding_axis0_region_items[4] = {
	{0, "ANY", 0, "Any", "Use any axis region for operator execution"},
	{1, "POSITIVE", 0, "Positive", "Use positive axis region only for operator execution"},
	{2, "NEGATIVE", 0, "Negative", "Use negative axis region only for operator execution"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrActionMapBinding_axis0_region = {
	{(PropertyRNA *)&rna_XrActionMapBinding_axis1_region, (PropertyRNA *)&rna_XrActionMapBinding_threshold,
	-1, "axis0_region", 1, 0, 0, 0, 0, "Axis 0 Region",
	"Action execution region for the first input axis",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBinding_axis0_region_get, XrActionMapBinding_axis0_region_set, nullptr, nullptr, nullptr, rna_XrActionMapBinding_axis0_region_items, 3, 0
};

static const EnumPropertyItem rna_XrActionMapBinding_axis1_region_items[4] = {
	{0, "ANY", 0, "Any", "Use any axis region for operator execution"},
	{4, "POSITIVE", 0, "Positive", "Use positive axis region only for operator execution"},
	{8, "NEGATIVE", 0, "Negative", "Use negative axis region only for operator execution"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrActionMapBinding_axis1_region = {
	{(PropertyRNA *)&rna_XrActionMapBinding_pose_location, (PropertyRNA *)&rna_XrActionMapBinding_axis0_region,
	-1, "axis1_region", 1, 0, 0, 0, 0, "Axis 1 Region",
	"Action execution region for the second input axis",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMapBinding_axis1_region_get, XrActionMapBinding_axis1_region_set, nullptr, nullptr, nullptr, rna_XrActionMapBinding_axis1_region_items, 3, 0
};

static float rna_XrActionMapBinding_pose_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrActionMapBinding_pose_location = {
	{(PropertyRNA *)&rna_XrActionMapBinding_pose_rotation, (PropertyRNA *)&rna_XrActionMapBinding_axis1_region,
	-1, "pose_location", 1, 0, 0, 4, 0, "Pose Location Offset",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapBinding, pose_location), (RawPropertyType)5, nullptr},
	nullptr, nullptr, XrActionMapBinding_pose_location_get, XrActionMapBinding_pose_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrActionMapBinding_pose_location_default
};

static float rna_XrActionMapBinding_pose_rotation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrActionMapBinding_pose_rotation = {
	{nullptr, (PropertyRNA *)&rna_XrActionMapBinding_pose_location,
	-1, "pose_rotation", 1, 0, 0, 4, 0, "Pose Rotation Offset",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_EULER | (int)PROP_UNIT_ROTATION), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapBinding, pose_rotation), (RawPropertyType)5, nullptr},
	nullptr, nullptr, XrActionMapBinding_pose_rotation_get, XrActionMapBinding_pose_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrActionMapBinding_pose_rotation_default
};

StructRNA RNA_XrActionMapBinding = {
	{(ContainerRNA *)&RNA_XrComponentPaths, (ContainerRNA *)&RNA_XrComponentPath,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMapBinding_rna_properties, (PropertyRNA *)&rna_XrActionMapBinding_pose_rotation}},
	"XrActionMapBinding", nullptr, nullptr, 516, nullptr, "XR Action Map Binding",
	"Binding in an XR action map item",
	"*", 17,
	(PropertyRNA *)&rna_XrActionMapBinding_name, (PropertyRNA *)&rna_XrActionMapBinding_rna_properties,
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

/* XR Component Paths */
CollectionPropertyRNA rna_XrComponentPaths_rna_properties = {
	{(PropertyRNA *)&rna_XrComponentPaths_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrComponentPaths_rna_properties_begin, XrComponentPaths_rna_properties_next, XrComponentPaths_rna_properties_end, XrComponentPaths_rna_properties_get, nullptr, nullptr, XrComponentPaths_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrComponentPaths_rna_type = {
	{nullptr, (PropertyRNA *)&rna_XrComponentPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrComponentPaths_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrComponentPaths_new_path = {
	{(PropertyRNA *)&rna_XrComponentPaths_new_component_path, nullptr,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR component path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 192, ""
};

PointerPropertyRNA rna_XrComponentPaths_new_component_path = {
	{nullptr, (PropertyRNA *)&rna_XrComponentPaths_new_path,
	-1, "component_path", 8388608, 0, 2, 0, 0, "Component Path",
	"Added component path",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrComponentPath
};

FunctionRNA rna_XrComponentPaths_new_func = {
	{(FunctionRNA *)&rna_XrComponentPaths_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_XrComponentPaths_new_path, (PropertyRNA *)&rna_XrComponentPaths_new_component_path}},
	"new", 0, "new",
	XrComponentPaths_new_call,
	(PropertyRNA *)&rna_XrComponentPaths_new_component_path
};

PointerPropertyRNA rna_XrComponentPaths_remove_component_path = {
	{nullptr, nullptr,
	-1, "component_path", 262144, 0, 5, 0, 0, "Component Path",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrComponentPath
};

FunctionRNA rna_XrComponentPaths_remove_func = {
	{(FunctionRNA *)&rna_XrComponentPaths_find_func, (FunctionRNA *)&rna_XrComponentPaths_new_func,
	nullptr,
	{(PropertyRNA *)&rna_XrComponentPaths_remove_component_path, (PropertyRNA *)&rna_XrComponentPaths_remove_component_path}},
	"remove", 0, "remove",
	XrComponentPaths_remove_call,
	nullptr
};

StringPropertyRNA rna_XrComponentPaths_find_path = {
	{(PropertyRNA *)&rna_XrComponentPaths_find_component_path, nullptr,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR component path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 192, ""
};

PointerPropertyRNA rna_XrComponentPaths_find_component_path = {
	{nullptr, (PropertyRNA *)&rna_XrComponentPaths_find_path,
	-1, "component_path", 8388608, 0, 2, 0, 0, "Component Path",
	"The component path with the given path",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrComponentPath
};

FunctionRNA rna_XrComponentPaths_find_func = {
	{nullptr, (FunctionRNA *)&rna_XrComponentPaths_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_XrComponentPaths_find_path, (PropertyRNA *)&rna_XrComponentPaths_find_component_path}},
	"find", 0, "find",
	XrComponentPaths_find_call,
	(PropertyRNA *)&rna_XrComponentPaths_find_component_path
};

StructRNA RNA_XrComponentPaths = {
	{(ContainerRNA *)&RNA_XrSessionSettings, (ContainerRNA *)&RNA_XrActionMapBinding,
	nullptr,
	{(PropertyRNA *)&rna_XrComponentPaths_rna_properties, (PropertyRNA *)&rna_XrComponentPaths_rna_type}},
	"XrComponentPaths", nullptr, nullptr, 516, nullptr, "XR Component Paths",
	"Collection of OpenXR component paths",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrComponentPaths_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_XrComponentPaths_new_func, (FunctionRNA *)&rna_XrComponentPaths_find_func}
};

/* XR Session Settings */
CollectionPropertyRNA rna_XrSessionSettings_rna_properties = {
	{(PropertyRNA *)&rna_XrSessionSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_rna_properties_begin, XrSessionSettings_rna_properties_next, XrSessionSettings_rna_properties_end, XrSessionSettings_rna_properties_get, nullptr, nullptr, XrSessionSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrSessionSettings_rna_type = {
	{(PropertyRNA *)&rna_XrSessionSettings_shading, (PropertyRNA *)&rna_XrSessionSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_XrSessionSettings_shading = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_type, (PropertyRNA *)&rna_XrSessionSettings_rna_type,
	-1, "shading", 8650752, 0, 0, 0, 0, "Shading Settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_shading_get, nullptr, nullptr, nullptr,&RNA_View3DShading
};

static const EnumPropertyItem rna_XrSessionSettings_base_pose_type_items[4] = {
	{0, "SCENE_CAMERA", 0, "Scene Camera", "Follow the active scene camera to define the VR view\'s base pose"},
	{1, "OBJECT", 0, "Object", "Follow the transformation of an object to define the VR view\'s base pose"},
	{2, "CUSTOM", 0, "Custom", "Follow a custom transformation to define the VR view\'s base pose"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrSessionSettings_base_pose_type = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_object, (PropertyRNA *)&rna_XrSessionSettings_shading,
	-1, "base_pose_type", 1, 0, 0, 4, 0, "Base Pose Type",
	"Define where the location and rotation for the VR view come from, to which translation and rotation deltas from the VR headset will be applied to",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_pose_type), (RawPropertyType)2, nullptr},
	XrSessionSettings_base_pose_type_get, XrSessionSettings_base_pose_type_set, nullptr, nullptr, nullptr, rna_XrSessionSettings_base_pose_type_items, 3, 0
};

PointerPropertyRNA rna_XrSessionSettings_base_pose_object = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_location, (PropertyRNA *)&rna_XrSessionSettings_base_pose_type,
	-1, "base_pose_object", 8388737, 0, 0, 0, 0, "Base Pose Object",
	"Object to take the location and rotation to which translation and rotation deltas from the VR headset will be applied to",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_base_pose_object_get, XrSessionSettings_base_pose_object_set, nullptr, nullptr,&RNA_Object
};

static float rna_XrSessionSettings_base_pose_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionSettings_base_pose_location = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_angle, (PropertyRNA *)&rna_XrSessionSettings_base_pose_object,
	-1, "base_pose_location", 1, 0, 0, 4, 0, "Base Pose Location",
	"Coordinates to apply translation deltas from the VR headset to",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_pose_location), (RawPropertyType)5, nullptr},
	nullptr, nullptr, XrSessionSettings_base_pose_location_get, XrSessionSettings_base_pose_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionSettings_base_pose_location_default
};

FloatPropertyRNA rna_XrSessionSettings_base_pose_angle = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_scale, (PropertyRNA *)&rna_XrSessionSettings_base_pose_location,
	-1, "base_pose_angle", 1, 0, 0, 4, 0, "Base Pose Angle",
	"Rotation angle around the Z-Axis to apply the rotation deltas from the VR headset to",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_AXISANGLE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_pose_angle), (RawPropertyType)5, nullptr},
	XrSessionSettings_base_pose_angle_get, XrSessionSettings_base_pose_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_XrSessionSettings_base_scale = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_floor, (PropertyRNA *)&rna_XrSessionSettings_base_pose_angle,
	-1, "base_scale", 1, 0, 0, 4, 0, "Base Scale",
	"Uniform scale to apply to VR view",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_scale), (RawPropertyType)5, nullptr},
	XrSessionSettings_base_scale_get, XrSessionSettings_base_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_floor = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_annotation, (PropertyRNA *)&rna_XrSessionSettings_base_scale,
	-1, "show_floor", 1, 0, 0, 0, 0, "Display Grid Floor",
	"Show the ground plane grid",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_floor_get, XrSessionSettings_show_floor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_annotation = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_selection, (PropertyRNA *)&rna_XrSessionSettings_show_floor,
	-1, "show_annotation", 1, 0, 0, 0, 0, "Show Annotation",
	"Show annotations for this view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_annotation_get, XrSessionSettings_show_annotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_selection = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_controllers, (PropertyRNA *)&rna_XrSessionSettings_show_annotation,
	-1, "show_selection", 1, 0, 0, 0, 0, "Show Selection",
	"Show selection outlines",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_selection_get, XrSessionSettings_show_selection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_controllers = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_custom_overlays, (PropertyRNA *)&rna_XrSessionSettings_show_selection,
	-1, "show_controllers", 1, 0, 0, 0, 0, "Show Controllers",
	"Show VR controllers (requires VR actions for controller poses)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_controllers_get, XrSessionSettings_show_controllers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_custom_overlays = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_extras, (PropertyRNA *)&rna_XrSessionSettings_show_controllers,
	-1, "show_custom_overlays", 1, 0, 0, 0, 0, "Show Custom Overlays",
	"Show custom VR overlays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_custom_overlays_get, XrSessionSettings_show_custom_overlays_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_extras = {
	{(PropertyRNA *)&rna_XrSessionSettings_controller_draw_style, (PropertyRNA *)&rna_XrSessionSettings_show_custom_overlays,
	-1, "show_object_extras", 1, 0, 0, 0, 0, "Show Object Extras",
	"Show object extras, including empties, lights, and cameras",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_extras_get, XrSessionSettings_show_object_extras_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_XrSessionSettings_controller_draw_style_items[5] = {
	{0, "DARK", 0, "Dark", "Draw dark controller"},
	{1, "LIGHT", 0, "Light", "Draw light controller"},
	{2, "DARK_RAY", 0, "Dark + Ray", "Draw dark controller with aiming axis ray"},
	{3, "LIGHT_RAY", 0, "Light + Ray", "Draw light controller with aiming axis ray"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrSessionSettings_controller_draw_style = {
	{(PropertyRNA *)&rna_XrSessionSettings_clip_start, (PropertyRNA *)&rna_XrSessionSettings_show_object_extras,
	-1, "controller_draw_style", 1, 0, 0, 4, 0, "Controller Draw Style",
	"Style to use when drawing VR controllers",
	0, "Color",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, controller_draw_style), (RawPropertyType)2, nullptr},
	XrSessionSettings_controller_draw_style_get, XrSessionSettings_controller_draw_style_set, nullptr, nullptr, nullptr, rna_XrSessionSettings_controller_draw_style_items, 4, 0
};

FloatPropertyRNA rna_XrSessionSettings_clip_start = {
	{(PropertyRNA *)&rna_XrSessionSettings_clip_end, (PropertyRNA *)&rna_XrSessionSettings_controller_draw_style,
	-1, "clip_start", 1, 0, 0, 4, 0, "Clip Start",
	"VR viewport near clipping distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, clip_start), (RawPropertyType)5, nullptr},
	XrSessionSettings_clip_start_get, XrSessionSettings_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_XrSessionSettings_clip_end = {
	{(PropertyRNA *)&rna_XrSessionSettings_use_positional_tracking, (PropertyRNA *)&rna_XrSessionSettings_clip_start,
	-1, "clip_end", 1, 0, 0, 4, 0, "Clip End",
	"VR viewport far clipping distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, clip_end), (RawPropertyType)5, nullptr},
	XrSessionSettings_clip_end_get, XrSessionSettings_clip_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_use_positional_tracking = {
	{(PropertyRNA *)&rna_XrSessionSettings_use_absolute_tracking, (PropertyRNA *)&rna_XrSessionSettings_clip_end,
	-1, "use_positional_tracking", 1, 0, 0, 0, 0, "Positional Tracking",
	"Allow VR headsets to affect the location in virtual space, in addition to the rotation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_use_positional_tracking_get, XrSessionSettings_use_positional_tracking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_use_absolute_tracking = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_mesh, (PropertyRNA *)&rna_XrSessionSettings_use_positional_tracking,
	-1, "use_absolute_tracking", 1, 0, 0, 0, 0, "Absolute Tracking",
	"Allow the VR tracking origin to be defined independently of the headset location",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_use_absolute_tracking_get, XrSessionSettings_use_absolute_tracking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_mesh = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curve, (PropertyRNA *)&rna_XrSessionSettings_use_absolute_tracking,
	-1, "show_object_viewport_mesh", 1, 0, 0, 0, 0, "Mesh",
	"Show mesh objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_mesh_get, XrSessionSettings_show_object_viewport_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curve = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_surf, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_mesh,
	-1, "show_object_viewport_curve", 1, 0, 0, 0, 0, "Curve",
	"Show curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_curve_get, XrSessionSettings_show_object_viewport_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_surf = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_meta, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curve,
	-1, "show_object_viewport_surf", 1, 0, 0, 0, 0, "Surface",
	"Show surfaces",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_surf_get, XrSessionSettings_show_object_viewport_surf_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_meta = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_font, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_surf,
	-1, "show_object_viewport_meta", 1, 0, 0, 0, 0, "Meta",
	"Show metaballs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_meta_get, XrSessionSettings_show_object_viewport_meta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_font = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curves, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_meta,
	-1, "show_object_viewport_font", 1, 0, 0, 0, 0, "Font",
	"Show text objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_font_get, XrSessionSettings_show_object_viewport_font_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curves = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_pointcloud, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_font,
	-1, "show_object_viewport_curves", 1, 0, 0, 0, 0, "Hair Curves",
	"Show hair curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_curves_get, XrSessionSettings_show_object_viewport_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_pointcloud = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_volume, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curves,
	-1, "show_object_viewport_pointcloud", 1, 0, 0, 0, 0, "Point Cloud",
	"Show point clouds",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_pointcloud_get, XrSessionSettings_show_object_viewport_pointcloud_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_volume = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_armature, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_pointcloud,
	-1, "show_object_viewport_volume", 1, 0, 0, 0, 0, "Volume",
	"Show volumes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_volume_get, XrSessionSettings_show_object_viewport_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_armature = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_lattice, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_volume,
	-1, "show_object_viewport_armature", 1, 0, 0, 0, 0, "Armature",
	"Show armatures",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_armature_get, XrSessionSettings_show_object_viewport_armature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_lattice = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_empty, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_armature,
	-1, "show_object_viewport_lattice", 1, 0, 0, 0, 0, "Lattice",
	"Show lattices",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_lattice_get, XrSessionSettings_show_object_viewport_lattice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_empty = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_grease_pencil, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_lattice,
	-1, "show_object_viewport_empty", 1, 0, 0, 0, 0, "Empty",
	"Show empties",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_empty_get, XrSessionSettings_show_object_viewport_empty_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_grease_pencil = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_camera, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_empty,
	-1, "show_object_viewport_grease_pencil", 1, 0, 0, 0, 0, "Grease Pencil",
	"Show grease pencil objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_grease_pencil_get, XrSessionSettings_show_object_viewport_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_camera = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_grease_pencil,
	-1, "show_object_viewport_camera", 1, 0, 0, 0, 0, "Camera",
	"Show cameras",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_camera_get, XrSessionSettings_show_object_viewport_camera_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_speaker, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_camera,
	-1, "show_object_viewport_light", 1, 0, 0, 0, 0, "Light",
	"Show lights",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_light_get, XrSessionSettings_show_object_viewport_light_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_speaker = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light_probe, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light,
	-1, "show_object_viewport_speaker", 1, 0, 0, 0, 0, "Speaker",
	"Show speakers",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_speaker_get, XrSessionSettings_show_object_viewport_speaker_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light_probe = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_mesh, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_speaker,
	-1, "show_object_viewport_light_probe", 1, 0, 0, 0, 0, "Light Probe",
	"Show light probes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_viewport_light_probe_get, XrSessionSettings_show_object_viewport_light_probe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_mesh = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_curve, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light_probe,
	-1, "show_object_select_mesh", 1, 0, 0, 0, 0, "Mesh",
	"Allow selection of mesh objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_mesh_get, XrSessionSettings_show_object_select_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_curve = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_surf, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_mesh,
	-1, "show_object_select_curve", 1, 0, 0, 0, 0, "Curve",
	"Allow selection of curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_curve_get, XrSessionSettings_show_object_select_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_surf = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_meta, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_curve,
	-1, "show_object_select_surf", 1, 0, 0, 0, 0, "Surface",
	"Allow selection of surfaces",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_surf_get, XrSessionSettings_show_object_select_surf_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_meta = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_font, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_surf,
	-1, "show_object_select_meta", 1, 0, 0, 0, 0, "Meta",
	"Allow selection of metaballs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_meta_get, XrSessionSettings_show_object_select_meta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_font = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_curves, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_meta,
	-1, "show_object_select_font", 1, 0, 0, 0, 0, "Font",
	"Allow selection of text objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_font_get, XrSessionSettings_show_object_select_font_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_curves = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_pointcloud, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_font,
	-1, "show_object_select_curves", 1, 0, 0, 0, 0, "Hair Curves",
	"Allow selection of hair curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_curves_get, XrSessionSettings_show_object_select_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_pointcloud = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_volume, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_curves,
	-1, "show_object_select_pointcloud", 1, 0, 0, 0, 0, "Point Cloud",
	"Allow selection of point clouds",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_pointcloud_get, XrSessionSettings_show_object_select_pointcloud_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_volume = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_armature, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_pointcloud,
	-1, "show_object_select_volume", 1, 0, 0, 0, 0, "Volume",
	"Allow selection of volumes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_volume_get, XrSessionSettings_show_object_select_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_armature = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_lattice, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_volume,
	-1, "show_object_select_armature", 1, 0, 0, 0, 0, "Armature",
	"Allow selection of armatures",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_armature_get, XrSessionSettings_show_object_select_armature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_lattice = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_empty, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_armature,
	-1, "show_object_select_lattice", 1, 0, 0, 0, 0, "Lattice",
	"Allow selection of lattices",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_lattice_get, XrSessionSettings_show_object_select_lattice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_empty = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_grease_pencil, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_lattice,
	-1, "show_object_select_empty", 1, 0, 0, 0, 0, "Empty",
	"Allow selection of empties",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_empty_get, XrSessionSettings_show_object_select_empty_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_grease_pencil = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_camera, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_empty,
	-1, "show_object_select_grease_pencil", 1, 0, 0, 0, 0, "Grease Pencil",
	"Allow selection of grease pencil objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_grease_pencil_get, XrSessionSettings_show_object_select_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_camera = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_light, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_grease_pencil,
	-1, "show_object_select_camera", 1, 0, 0, 0, 0, "Camera",
	"Allow selection of cameras",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_camera_get, XrSessionSettings_show_object_select_camera_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_light = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_speaker, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_camera,
	-1, "show_object_select_light", 1, 0, 0, 0, 0, "Light",
	"Allow selection of lights",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_light_get, XrSessionSettings_show_object_select_light_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_speaker = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_light_probe, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_light,
	-1, "show_object_select_speaker", 1, 0, 0, 0, 0, "Speaker",
	"Allow selection of speakers",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_speaker_get, XrSessionSettings_show_object_select_speaker_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_light_probe = {
	{(PropertyRNA *)&rna_XrSessionSettings_icon_from_show_object_viewport, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_speaker,
	-1, "show_object_select_light_probe", 1, 0, 0, 0, 0, "Light Probe",
	"Allow selection of light probes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17235968, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_show_object_select_light_probe_get, XrSessionSettings_show_object_select_light_probe_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_XrSessionSettings_icon_from_show_object_viewport = {
	{nullptr, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_light_probe,
	-1, "icon_from_show_object_viewport", 0, 0, 0, 0, 0, "Visibility Icon",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionSettings_icon_from_show_object_viewport_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_XrSessionSettings = {
	{(ContainerRNA *)&RNA_XrSessionState, (ContainerRNA *)&RNA_XrComponentPaths,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionSettings_rna_properties, (PropertyRNA *)&rna_XrSessionSettings_icon_from_show_object_viewport}},
	"XrSessionSettings", nullptr, nullptr, 516, nullptr, "XR Session Settings",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrSessionSettings_rna_properties,
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

/* Session State */
CollectionPropertyRNA rna_XrSessionState_rna_properties = {
	{(PropertyRNA *)&rna_XrSessionState_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionState_rna_properties_begin, XrSessionState_rna_properties_next, XrSessionState_rna_properties_end, XrSessionState_rna_properties_get, nullptr, nullptr, XrSessionState_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrSessionState_rna_type = {
	{(PropertyRNA *)&rna_XrSessionState_viewer_pose_location, (PropertyRNA *)&rna_XrSessionState_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionState_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_XrSessionState_viewer_pose_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_viewer_pose_location = {
	{(PropertyRNA *)&rna_XrSessionState_viewer_pose_rotation, (PropertyRNA *)&rna_XrSessionState_rna_type,
	-1, "viewer_pose_location", 0, 0, 0, 0, 0, "Viewer Pose Location",
	"Last known location of the viewer pose (center between the eyes) in world space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrSessionState_viewer_pose_location_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_viewer_pose_location_default
};

static float rna_XrSessionState_viewer_pose_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_viewer_pose_rotation = {
	{(PropertyRNA *)&rna_XrSessionState_navigation_location, (PropertyRNA *)&rna_XrSessionState_viewer_pose_location,
	-1, "viewer_pose_rotation", 0, 0, 0, 0, 0, "Viewer Pose Rotation",
	"Last known rotation of the viewer pose (center between the eyes) in world space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrSessionState_viewer_pose_rotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_viewer_pose_rotation_default
};

static float rna_XrSessionState_navigation_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_navigation_location = {
	{(PropertyRNA *)&rna_XrSessionState_navigation_rotation, (PropertyRNA *)&rna_XrSessionState_viewer_pose_rotation,
	-1, "navigation_location", 1, 0, 0, 0, 0, "Navigation Location",
	"Location offset to apply to base pose when determining viewer location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrSessionState_navigation_location_get, XrSessionState_navigation_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_navigation_location_default
};

static float rna_XrSessionState_navigation_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_navigation_rotation = {
	{(PropertyRNA *)&rna_XrSessionState_navigation_scale, (PropertyRNA *)&rna_XrSessionState_navigation_location,
	-1, "navigation_rotation", 1, 0, 0, 0, 0, "Navigation Rotation",
	"Rotation offset to apply to base pose when determining viewer rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrSessionState_navigation_rotation_get, XrSessionState_navigation_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_navigation_rotation_default
};

FloatPropertyRNA rna_XrSessionState_navigation_scale = {
	{(PropertyRNA *)&rna_XrSessionState_actionmaps, (PropertyRNA *)&rna_XrSessionState_navigation_rotation,
	-1, "navigation_scale", 1, 0, 0, 0, 0, "Navigation Scale",
	"Additional scale multiplier to apply to base scale when determining viewer scale",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionState_navigation_scale_get, XrSessionState_navigation_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

CollectionPropertyRNA rna_XrSessionState_actionmaps = {
	{(PropertyRNA *)&rna_XrSessionState_active_actionmap, (PropertyRNA *)&rna_XrSessionState_navigation_scale,
	-1, "actionmaps", 0, 0, 0, 0, 0, "XR Action Maps",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_XrActionMaps},
	XrSessionState_actionmaps_begin, XrSessionState_actionmaps_next, XrSessionState_actionmaps_end, XrSessionState_actionmaps_get, XrSessionState_actionmaps_length, nullptr, nullptr, nullptr, &RNA_XrActionMap
};

IntPropertyRNA rna_XrSessionState_active_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_selected_actionmap, (PropertyRNA *)&rna_XrSessionState_actionmaps,
	-1, "active_actionmap", 1, 0, 0, 0, 0, "Active Action Map",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionState_active_actionmap_get, XrSessionState_active_actionmap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_XrSessionState_selected_actionmap = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_active_actionmap,
	-1, "selected_actionmap", 1, 0, 0, 0, 0, "Selected Action Map",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrSessionState_selected_actionmap_get, XrSessionState_selected_actionmap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_XrSessionState_is_running_context = {
	{(PropertyRNA *)&rna_XrSessionState_is_running_result, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

BoolPropertyRNA rna_XrSessionState_is_running_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_is_running_context,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_is_running_func = {
	{(FunctionRNA *)&rna_XrSessionState_reset_to_base_pose_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_is_running_context, (PropertyRNA *)&rna_XrSessionState_is_running_result}},
	"is_running", 1, "Query if the VR session is currently running",
	XrSessionState_is_running_call,
	(PropertyRNA *)&rna_XrSessionState_is_running_result
};

PointerPropertyRNA rna_XrSessionState_reset_to_base_pose_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_XrSessionState_reset_to_base_pose_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_set_create_func, (FunctionRNA *)&rna_XrSessionState_is_running_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_reset_to_base_pose_context, (PropertyRNA *)&rna_XrSessionState_reset_to_base_pose_context}},
	"reset_to_base_pose", 1, "Force resetting of position and rotation deltas",
	XrSessionState_reset_to_base_pose_call,
	nullptr
};

PointerPropertyRNA rna_XrSessionState_action_set_create_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_set_create_actionmap, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_XrSessionState_action_set_create_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_action_set_create_result, (PropertyRNA *)&rna_XrSessionState_action_set_create_context,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

BoolPropertyRNA rna_XrSessionState_action_set_create_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_action_set_create_actionmap,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_action_set_create_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_create_func, (FunctionRNA *)&rna_XrSessionState_reset_to_base_pose_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_action_set_create_context, (PropertyRNA *)&rna_XrSessionState_action_set_create_result}},
	"action_set_create", 1, "Create a VR action set",
	XrSessionState_action_set_create_call,
	(PropertyRNA *)&rna_XrSessionState_action_set_create_result
};

PointerPropertyRNA rna_XrSessionState_action_create_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_create_actionmap, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_XrSessionState_action_create_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_action_create_actionmap_item, (PropertyRNA *)&rna_XrSessionState_action_create_context,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

PointerPropertyRNA rna_XrSessionState_action_create_actionmap_item = {
	{(PropertyRNA *)&rna_XrSessionState_action_create_result, (PropertyRNA *)&rna_XrSessionState_action_create_actionmap,
	-1, "actionmap_item", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

BoolPropertyRNA rna_XrSessionState_action_create_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_action_create_actionmap_item,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_action_create_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_binding_create_func, (FunctionRNA *)&rna_XrSessionState_action_set_create_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_action_create_context, (PropertyRNA *)&rna_XrSessionState_action_create_result}},
	"action_create", 1, "Create a VR action",
	XrSessionState_action_create_call,
	(PropertyRNA *)&rna_XrSessionState_action_create_result
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_item, (PropertyRNA *)&rna_XrSessionState_action_binding_create_context,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_item = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_binding, (PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap,
	-1, "actionmap_item", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapItem
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_binding = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_result, (PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_item,
	-1, "actionmap_binding", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMapBinding
};

BoolPropertyRNA rna_XrSessionState_action_binding_create_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_binding,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_action_binding_create_func = {
	{(FunctionRNA *)&rna_XrSessionState_active_action_set_set_func, (FunctionRNA *)&rna_XrSessionState_action_create_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_context, (PropertyRNA *)&rna_XrSessionState_action_binding_create_result}},
	"action_binding_create", 1, "Create a VR action binding",
	XrSessionState_action_binding_create_call,
	(PropertyRNA *)&rna_XrSessionState_action_binding_create_result
};

PointerPropertyRNA rna_XrSessionState_active_action_set_set_context = {
	{(PropertyRNA *)&rna_XrSessionState_active_action_set_set_action_set, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_active_action_set_set_action_set = {
	{(PropertyRNA *)&rna_XrSessionState_active_action_set_set_result, (PropertyRNA *)&rna_XrSessionState_active_action_set_set_context,
	-1, "action_set", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_XrSessionState_active_action_set_set_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_active_action_set_set_action_set,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_active_action_set_set_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_pose_actions_set_func, (FunctionRNA *)&rna_XrSessionState_action_binding_create_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_active_action_set_set_context, (PropertyRNA *)&rna_XrSessionState_active_action_set_set_result}},
	"active_action_set_set", 1, "Set the active VR action set",
	XrSessionState_active_action_set_set_call,
	(PropertyRNA *)&rna_XrSessionState_active_action_set_set_result
};

PointerPropertyRNA rna_XrSessionState_controller_pose_actions_set_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_action_set, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_action_set = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_grip_action, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_context,
	-1, "action_set", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_grip_action = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_aim_action, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_action_set,
	-1, "grip_action", 262145, 0, 1, 0, 0, "Grip Action",
	"Name of the action representing the controller grips",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_aim_action = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_result, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_grip_action,
	-1, "aim_action", 262145, 0, 1, 0, 0, "Aim Action",
	"Name of the action representing the controller aims",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_XrSessionState_controller_pose_actions_set_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_aim_action,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_controller_pose_actions_set_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_state_get_func, (FunctionRNA *)&rna_XrSessionState_active_action_set_set_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_context, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_result}},
	"controller_pose_actions_set", 1, "Set the actions that determine the VR controller poses",
	XrSessionState_controller_pose_actions_set_call,
	(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_result
};

PointerPropertyRNA rna_XrSessionState_action_state_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_action_set_name, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_action_state_get_action_set_name = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_action_name, (PropertyRNA *)&rna_XrSessionState_action_state_get_context,
	-1, "action_set_name", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_action_state_get_action_name = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_user_path, (PropertyRNA *)&rna_XrSessionState_action_state_get_action_set_name,
	-1, "action_name", 262145, 0, 1, 0, 0, "Action",
	"Action name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_action_state_get_user_path = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_state, (PropertyRNA *)&rna_XrSessionState_action_state_get_action_name,
	-1, "user_path", 262145, 0, 1, 0, 0, "User Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static float rna_XrSessionState_action_state_get_state_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_action_state_get_state = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_action_state_get_user_path,
	-1, "state", 262145, 0, 2, 0, 0, "Action State",
	"Current state of the VR action. Second float value is only set for 2D vector type actions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_XrSessionState_action_state_get_state_default
};

FunctionRNA rna_XrSessionState_action_state_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_haptic_action_apply_func, (FunctionRNA *)&rna_XrSessionState_controller_pose_actions_set_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_context, (PropertyRNA *)&rna_XrSessionState_action_state_get_state}},
	"action_state_get", 1, "Get the current state of a VR action",
	XrSessionState_action_state_get_call,
	nullptr
};

PointerPropertyRNA rna_XrSessionState_haptic_action_apply_context = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_set_name, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_set_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_name, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_context,
	-1, "action_set_name", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_user_path, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_set_name,
	-1, "action_name", 262145, 0, 1, 0, 0, "Action",
	"Action name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_apply_user_path = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_duration, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_name,
	-1, "user_path", 262145, 0, 1, 0, 0, "User Path",
	"Optional OpenXR user path. If not set, the action will be applied to all paths",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FloatPropertyRNA rna_XrSessionState_haptic_action_apply_duration = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_frequency, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_user_path,
	-1, "duration", 1, 0, 1, 0, 0, "Duration",
	"Haptic duration in seconds. 0.0 is the minimum supported duration",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_XrSessionState_haptic_action_apply_frequency = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_amplitude, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_duration,
	-1, "frequency", 1, 0, 1, 0, 0, "Frequency",
	"Frequency of the haptic vibration in hertz. 0.0 specifies the OpenXR runtime\'s default frequency",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_XrSessionState_haptic_action_apply_amplitude = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_result, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_frequency,
	-1, "amplitude", 1, 0, 1, 0, 0, "Amplitude",
	"Haptic amplitude, ranging from 0.0 to 1.0",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_XrSessionState_haptic_action_apply_result = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_amplitude,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_XrSessionState_haptic_action_apply_func = {
	{(FunctionRNA *)&rna_XrSessionState_haptic_action_stop_func, (FunctionRNA *)&rna_XrSessionState_action_state_get_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_context, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_result}},
	"haptic_action_apply", 1, "Apply a VR haptic action",
	XrSessionState_haptic_action_apply_call,
	(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_result
};

PointerPropertyRNA rna_XrSessionState_haptic_action_stop_context = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_set_name, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_set_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_name, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_context,
	-1, "action_set_name", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_user_path, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_set_name,
	-1, "action_name", 262145, 0, 1, 0, 0, "Action",
	"Action name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_stop_user_path = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_name,
	-1, "user_path", 262145, 0, 1, 0, 0, "User Path",
	"Optional OpenXR user path. If not set, the action will be stopped for all paths",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FunctionRNA rna_XrSessionState_haptic_action_stop_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_grip_location_get_func, (FunctionRNA *)&rna_XrSessionState_haptic_action_apply_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_context, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_user_path}},
	"haptic_action_stop", 1, "Stop a VR haptic action",
	XrSessionState_haptic_action_stop_call,
	nullptr
};

PointerPropertyRNA rna_XrSessionState_controller_grip_location_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_index, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_grip_location_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_location, (PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

static float rna_XrSessionState_controller_grip_location_get_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_grip_location_get_location = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_index,
	-1, "location", 262145, 0, 2, 0, 0, "Location",
	"Controller grip location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_grip_location_get_location_default
};

FunctionRNA rna_XrSessionState_controller_grip_location_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_grip_rotation_get_func, (FunctionRNA *)&rna_XrSessionState_haptic_action_stop_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_context, (PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_location}},
	"controller_grip_location_get", 1, "Get the last known controller grip location in world space",
	XrSessionState_controller_grip_location_get_call,
	nullptr
};

PointerPropertyRNA rna_XrSessionState_controller_grip_rotation_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_index, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_grip_rotation_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_rotation, (PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

static float rna_XrSessionState_controller_grip_rotation_get_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_grip_rotation_get_rotation = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_index,
	-1, "rotation", 262145, 0, 2, 0, 0, "Rotation",
	"Controller grip quaternion rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_grip_rotation_get_rotation_default
};

FunctionRNA rna_XrSessionState_controller_grip_rotation_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_aim_location_get_func, (FunctionRNA *)&rna_XrSessionState_controller_grip_location_get_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_context, (PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_rotation}},
	"controller_grip_rotation_get", 1, "Get the last known controller grip rotation (quaternion) in world space",
	XrSessionState_controller_grip_rotation_get_call,
	nullptr
};

PointerPropertyRNA rna_XrSessionState_controller_aim_location_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_index, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_aim_location_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_location, (PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

static float rna_XrSessionState_controller_aim_location_get_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_aim_location_get_location = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_index,
	-1, "location", 262145, 0, 2, 0, 0, "Location",
	"Controller aim location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_aim_location_get_location_default
};

FunctionRNA rna_XrSessionState_controller_aim_location_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_aim_rotation_get_func, (FunctionRNA *)&rna_XrSessionState_controller_grip_rotation_get_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_context, (PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_location}},
	"controller_aim_location_get", 1, "Get the last known controller aim location in world space",
	XrSessionState_controller_aim_location_get_call,
	nullptr
};

PointerPropertyRNA rna_XrSessionState_controller_aim_rotation_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_index, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_aim_rotation_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_rotation, (PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

static float rna_XrSessionState_controller_aim_rotation_get_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_aim_rotation_get_rotation = {
	{nullptr, (PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_index,
	-1, "rotation", 262145, 0, 2, 0, 0, "Rotation",
	"Controller aim quaternion rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_aim_rotation_get_rotation_default
};

FunctionRNA rna_XrSessionState_controller_aim_rotation_get_func = {
	{nullptr, (FunctionRNA *)&rna_XrSessionState_controller_aim_location_get_func,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_context, (PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_rotation}},
	"controller_aim_rotation_get", 1, "Get the last known controller aim rotation (quaternion) in world space",
	XrSessionState_controller_aim_rotation_get_call,
	nullptr
};

StructRNA RNA_XrSessionState = {
	{(ContainerRNA *)&RNA_XrActionMaps, (ContainerRNA *)&RNA_XrSessionSettings,
	nullptr,
	{(PropertyRNA *)&rna_XrSessionState_rna_properties, (PropertyRNA *)&rna_XrSessionState_selected_actionmap}},
	"XrSessionState", nullptr, nullptr, 512, nullptr, "Session State",
	"Runtime state information about the VR session",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrSessionState_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_XrSessionState_is_running_func, (FunctionRNA *)&rna_XrSessionState_controller_aim_rotation_get_func}
};

/* XR Action Maps */
CollectionPropertyRNA rna_XrActionMaps_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMaps_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMaps_rna_properties_begin, XrActionMaps_rna_properties_next, XrActionMaps_rna_properties_end, XrActionMaps_rna_properties_get, nullptr, nullptr, XrActionMaps_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrActionMaps_rna_type = {
	{nullptr, (PropertyRNA *)&rna_XrActionMaps_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrActionMaps_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_XrActionMaps_new_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_new_name, nullptr,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrSessionState
};

StringPropertyRNA rna_XrActionMaps_new_name = {
	{(PropertyRNA *)&rna_XrActionMaps_new_replace_existing, (PropertyRNA *)&rna_XrActionMaps_new_xr_session_state,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_XrActionMaps_new_replace_existing = {
	{(PropertyRNA *)&rna_XrActionMaps_new_actionmap, (PropertyRNA *)&rna_XrActionMaps_new_name,
	-1, "replace_existing", 1, 0, 1, 0, 0, "Replace Existing",
	"Replace any existing actionmap with the same name",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_XrActionMaps_new_actionmap = {
	{nullptr, (PropertyRNA *)&rna_XrActionMaps_new_replace_existing,
	-1, "actionmap", 8388608, 0, 2, 0, 0, "Action Map",
	"Added action map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_new_func = {
	{(FunctionRNA *)&rna_XrActionMaps_new_from_actionmap_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMaps_new_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_new_actionmap}},
	"new", 1, "new",
	XrActionMaps_new_call,
	(PropertyRNA *)&rna_XrActionMaps_new_actionmap
};

PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_actionmap, nullptr,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrSessionState
};

PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_actionmap = {
	{(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_result, (PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_xr_session_state,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "Action Map",
	"Action map to use as a reference",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_result = {
	{nullptr, (PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_actionmap,
	-1, "result", 8388608, 0, 2, 0, 0, "Action Map",
	"Added action map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_new_from_actionmap_func = {
	{(FunctionRNA *)&rna_XrActionMaps_remove_func, (FunctionRNA *)&rna_XrActionMaps_new_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_result}},
	"new_from_actionmap", 1, "new_from_actionmap",
	XrActionMaps_new_from_actionmap_call,
	(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_result
};

PointerPropertyRNA rna_XrActionMaps_remove_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_remove_actionmap, nullptr,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrSessionState
};

PointerPropertyRNA rna_XrActionMaps_remove_actionmap = {
	{nullptr, (PropertyRNA *)&rna_XrActionMaps_remove_xr_session_state,
	-1, "actionmap", 262144, 0, 5, 0, 0, "Action Map",
	"Removed action map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_remove_func = {
	{(FunctionRNA *)&rna_XrActionMaps_find_func, (FunctionRNA *)&rna_XrActionMaps_new_from_actionmap_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMaps_remove_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_remove_actionmap}},
	"remove", 17, "remove",
	XrActionMaps_remove_call,
	nullptr
};

PointerPropertyRNA rna_XrActionMaps_find_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_find_name, nullptr,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrSessionState
};

StringPropertyRNA rna_XrActionMaps_find_name = {
	{(PropertyRNA *)&rna_XrActionMaps_find_actionmap, (PropertyRNA *)&rna_XrActionMaps_find_xr_session_state,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_XrActionMaps_find_actionmap = {
	{nullptr, (PropertyRNA *)&rna_XrActionMaps_find_name,
	-1, "actionmap", 8388608, 0, 2, 0, 0, "Action Map",
	"The action map with the given name",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_find_func = {
	{nullptr, (FunctionRNA *)&rna_XrActionMaps_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMaps_find_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_find_actionmap}},
	"find", 1, "find",
	XrActionMaps_find_call,
	(PropertyRNA *)&rna_XrActionMaps_find_actionmap
};

StructRNA RNA_XrActionMaps = {
	{(ContainerRNA *)&RNA_XrEventData, (ContainerRNA *)&RNA_XrSessionState,
	nullptr,
	{(PropertyRNA *)&rna_XrActionMaps_rna_properties, (PropertyRNA *)&rna_XrActionMaps_rna_type}},
	"XrActionMaps", nullptr, nullptr, 516, nullptr, "XR Action Maps",
	"Collection of XR action maps",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrActionMaps_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_XrActionMaps_new_func, (FunctionRNA *)&rna_XrActionMaps_find_func}
};

/* XrEventData */
CollectionPropertyRNA rna_XrEventData_rna_properties = {
	{(PropertyRNA *)&rna_XrEventData_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_rna_properties_begin, XrEventData_rna_properties_next, XrEventData_rna_properties_end, XrEventData_rna_properties_get, nullptr, nullptr, XrEventData_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_XrEventData_rna_type = {
	{(PropertyRNA *)&rna_XrEventData_action_set, (PropertyRNA *)&rna_XrEventData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_XrEventData_action_set = {
	{(PropertyRNA *)&rna_XrEventData_action, (PropertyRNA *)&rna_XrEventData_rna_type,
	-1, "action_set", 262144, 0, 0, 0, 0, "Action Set",
	"XR action set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_action_set_get, XrEventData_action_set_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_XrEventData_action = {
	{(PropertyRNA *)&rna_XrEventData_user_path, (PropertyRNA *)&rna_XrEventData_action_set,
	-1, "action", 262144, 0, 0, 0, 0, "Action",
	"XR action name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_action_get, XrEventData_action_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_XrEventData_user_path = {
	{(PropertyRNA *)&rna_XrEventData_user_path_other, (PropertyRNA *)&rna_XrEventData_action,
	-1, "user_path", 262144, 0, 0, 0, 0, "User Path",
	"User path of the action. E.g. \"/user/hand/left\"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_user_path_get, XrEventData_user_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_XrEventData_user_path_other = {
	{(PropertyRNA *)&rna_XrEventData_type, (PropertyRNA *)&rna_XrEventData_user_path,
	-1, "user_path_other", 262144, 0, 0, 0, 0, "User Path Other",
	"Other user path, for bimanual actions. E.g. \"/user/hand/right\"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_user_path_other_get, XrEventData_user_path_other_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

static const EnumPropertyItem rna_XrEventData_type_items[5] = {
	{2, "FLOAT", 0, "Float", "Float action, representing either a digital or analog button"},
	{3, "VECTOR2D", 0, "Vector2D", "2D float vector action, representing a thumbstick or trackpad"},
	{4, "POSE", 0, "Pose", "3D pose action, representing a controller\'s location and rotation"},
	{100, "VIBRATION", 0, "Vibration", "Haptic vibration output action, to be applied with a duration, frequency, and amplitude"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_XrEventData_type = {
	{(PropertyRNA *)&rna_XrEventData_state, (PropertyRNA *)&rna_XrEventData_user_path_other,
	-1, "type", 0, 0, 0, 0, 0, "Type",
	"XR action type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_type_get, nullptr, nullptr, nullptr, nullptr, rna_XrEventData_type_items, 4, 2
};

static float rna_XrEventData_state_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_state = {
	{(PropertyRNA *)&rna_XrEventData_state_other, (PropertyRNA *)&rna_XrEventData_type,
	-1, "state", 0, 0, 0, 0, 0, "State",
	"XR action values corresponding to type",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrEventData_state_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_state_default
};

static float rna_XrEventData_state_other_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_state_other = {
	{(PropertyRNA *)&rna_XrEventData_float_threshold, (PropertyRNA *)&rna_XrEventData_state,
	-1, "state_other", 0, 0, 0, 0, 0, "State Other",
	"State of the other user path for bimanual actions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrEventData_state_other_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_state_other_default
};

FloatPropertyRNA rna_XrEventData_float_threshold = {
	{(PropertyRNA *)&rna_XrEventData_controller_location, (PropertyRNA *)&rna_XrEventData_state_other,
	-1, "float_threshold", 0, 0, 0, 0, 0, "Float Threshold",
	"Input threshold for float/2D vector actions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_float_threshold_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_XrEventData_controller_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_location = {
	{(PropertyRNA *)&rna_XrEventData_controller_rotation, (PropertyRNA *)&rna_XrEventData_float_threshold,
	-1, "controller_location", 0, 0, 0, 0, 0, "Controller Location",
	"Location of the action\'s corresponding controller aim in world space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrEventData_controller_location_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_location_default
};

static float rna_XrEventData_controller_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_rotation = {
	{(PropertyRNA *)&rna_XrEventData_controller_location_other, (PropertyRNA *)&rna_XrEventData_controller_location,
	-1, "controller_rotation", 0, 0, 0, 0, 0, "Controller Rotation",
	"Rotation of the action\'s corresponding controller aim in world space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrEventData_controller_rotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_rotation_default
};

static float rna_XrEventData_controller_location_other_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_location_other = {
	{(PropertyRNA *)&rna_XrEventData_controller_rotation_other, (PropertyRNA *)&rna_XrEventData_controller_rotation,
	-1, "controller_location_other", 0, 0, 0, 0, 0, "Controller Location Other",
	"Controller aim location of the other user path for bimanual actions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrEventData_controller_location_other_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_location_other_default
};

static float rna_XrEventData_controller_rotation_other_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_rotation_other = {
	{(PropertyRNA *)&rna_XrEventData_bimanual, (PropertyRNA *)&rna_XrEventData_controller_location_other,
	-1, "controller_rotation_other", 0, 0, 0, 0, 0, "Controller Rotation Other",
	"Controller aim rotation of the other user path for bimanual actions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, XrEventData_controller_rotation_other_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_rotation_other_default
};

BoolPropertyRNA rna_XrEventData_bimanual = {
	{nullptr, (PropertyRNA *)&rna_XrEventData_controller_rotation_other,
	-1, "bimanual", 0, 0, 0, 0, 0, "Bimanual",
	"Whether bimanual interaction is occurring",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	XrEventData_bimanual_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_XrEventData = {
	{nullptr, (ContainerRNA *)&RNA_XrActionMaps,
	nullptr,
	{(PropertyRNA *)&rna_XrEventData_rna_properties, (PropertyRNA *)&rna_XrEventData_bimanual}},
	"XrEventData", nullptr, nullptr, 516, nullptr, "XrEventData",
	"XR Data for Window Manager Event",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_XrEventData_rna_properties,
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

