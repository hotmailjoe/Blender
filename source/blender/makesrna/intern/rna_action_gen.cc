
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

#include "rna_action.cc"
#include "rna_action_api.cc"

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

RNA_EXTERN_C CollectionPropertyRNA rna_Action_fcurves;
RNA_EXTERN_C CollectionPropertyRNA rna_Action_groups;
RNA_EXTERN_C CollectionPropertyRNA rna_Action_pose_markers;
RNA_EXTERN_C BoolPropertyRNA rna_Action_use_frame_range;
RNA_EXTERN_C BoolPropertyRNA rna_Action_use_cyclic;
RNA_EXTERN_C FloatPropertyRNA rna_Action_frame_start;
RNA_EXTERN_C FloatPropertyRNA rna_Action_frame_end;
RNA_EXTERN_C FloatPropertyRNA rna_Action_frame_range;
RNA_EXTERN_C FloatPropertyRNA rna_Action_curve_frame_range;
RNA_EXTERN_C EnumPropertyRNA rna_Action_id_root;

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


extern FunctionRNA rna_Action_flip_with_pose_func;
extern PointerPropertyRNA rna_Action_flip_with_pose_object;



RNA_EXTERN_C CollectionPropertyRNA rna_ActionFCurves_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ActionFCurves_rna_type;

extern FunctionRNA rna_ActionFCurves_new_func;
extern StringPropertyRNA rna_ActionFCurves_new_data_path;
extern IntPropertyRNA rna_ActionFCurves_new_index;
extern StringPropertyRNA rna_ActionFCurves_new_action_group;
extern PointerPropertyRNA rna_ActionFCurves_new_fcurve;

extern FunctionRNA rna_ActionFCurves_find_func;
extern StringPropertyRNA rna_ActionFCurves_find_data_path;
extern IntPropertyRNA rna_ActionFCurves_find_index;
extern PointerPropertyRNA rna_ActionFCurves_find_fcurve;

extern FunctionRNA rna_ActionFCurves_remove_func;
extern PointerPropertyRNA rna_ActionFCurves_remove_fcurve;

extern FunctionRNA rna_ActionFCurves_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_ActionGroups_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ActionGroups_rna_type;

extern FunctionRNA rna_ActionGroups_new_func;
extern StringPropertyRNA rna_ActionGroups_new_name;
extern PointerPropertyRNA rna_ActionGroups_new_action_group;

extern FunctionRNA rna_ActionGroups_remove_func;
extern PointerPropertyRNA rna_ActionGroups_remove_action_group;



RNA_EXTERN_C CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ActionPoseMarkers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ActionPoseMarkers_active;
RNA_EXTERN_C IntPropertyRNA rna_ActionPoseMarkers_active_index;

extern FunctionRNA rna_ActionPoseMarkers_new_func;
extern StringPropertyRNA rna_ActionPoseMarkers_new_name;
extern PointerPropertyRNA rna_ActionPoseMarkers_new_marker;

extern FunctionRNA rna_ActionPoseMarkers_remove_func;
extern PointerPropertyRNA rna_ActionPoseMarkers_remove_marker;



RNA_EXTERN_C CollectionPropertyRNA rna_ActionGroup_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ActionGroup_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_ActionGroup_name;
RNA_EXTERN_C CollectionPropertyRNA rna_ActionGroup_channels;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_select;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_lock;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_mute;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_show_expanded;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_show_expanded_graph;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_use_pin;
RNA_EXTERN_C EnumPropertyRNA rna_ActionGroup_color_set;
RNA_EXTERN_C BoolPropertyRNA rna_ActionGroup_is_custom_color_set;
RNA_EXTERN_C PointerPropertyRNA rna_ActionGroup_colors;


RNA_EXTERN_C CollectionPropertyRNA rna_DopeSheet_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DopeSheet_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_DopeSheet_source;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_datablock_filters;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_only_selected;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_hidden;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_use_datablock_sort;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_use_filter_invert;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_only_errors;
RNA_EXTERN_C PointerPropertyRNA rna_DopeSheet_filter_collection;
RNA_EXTERN_C StringPropertyRNA rna_DopeSheet_filter_fcurve_name;
RNA_EXTERN_C StringPropertyRNA rna_DopeSheet_filter_text;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_use_multi_word_filter;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_missing_nla;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_summary;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_expanded_summary;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_transforms;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_shapekeys;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_modifiers;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_meshes;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_lattices;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_cameras;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_materials;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_lights;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_linestyles;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_textures;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_curves;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_worlds;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_scenes;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_particles;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_metaballs;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_armatures;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_nodes;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_speakers;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_cache_files;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_hair_curves;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_pointclouds;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_volumes;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_gpencil;
RNA_EXTERN_C BoolPropertyRNA rna_DopeSheet_show_movieclips;

static PointerRNA Action_fcurves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Action_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Action_fcurves;

    rna_iterator_listbase_begin(iter, &data->curves, nullptr);

    if (iter->valid) {
        iter->ptr = Action_fcurves_get(iter);
    }
}

RNA_EXTERN_C void Action_fcurves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Action_fcurves_get(iter);
    }
}

RNA_EXTERN_C void Action_fcurves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Action_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Action_fcurves_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_fcurves_get(&iter); }
    }

    Action_fcurves_end(&iter);

    return found;
}

static PointerRNA Action_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ActionGroup, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Action_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Action_groups;

    rna_iterator_listbase_begin(iter, &data->groups, nullptr);

    if (iter->valid) {
        iter->ptr = Action_groups_get(iter);
    }
}

RNA_EXTERN_C void Action_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Action_groups_get(iter);
    }
}

RNA_EXTERN_C void Action_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Action_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Action_groups_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_groups_get(&iter); }
    }

    Action_groups_end(&iter);

    return found;
}

RNA_EXTERN_C int ActionGroup_name_length(PointerRNA *);
RNA_EXTERN_C void ActionGroup_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Action_groups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Action_groups_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ActionGroup_name_length(&iter.ptr);
            if (namelen < 1024) {
                ActionGroup_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ActionGroup_name_get(&iter.ptr, name);
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
        Action_groups_next(&iter);
    }
    Action_groups_end(&iter);

    return found;
}

static PointerRNA Action_pose_markers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TimelineMarker, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Action_pose_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Action_pose_markers;

    rna_iterator_listbase_begin(iter, &data->markers, nullptr);

    if (iter->valid) {
        iter->ptr = Action_pose_markers_get(iter);
    }
}

RNA_EXTERN_C void Action_pose_markers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Action_pose_markers_get(iter);
    }
}

RNA_EXTERN_C void Action_pose_markers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Action_pose_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Action_pose_markers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_pose_markers_get(&iter); }
    }

    Action_pose_markers_end(&iter);

    return found;
}

RNA_EXTERN_C int TimelineMarker_name_length(PointerRNA *);
RNA_EXTERN_C void TimelineMarker_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Action_pose_markers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Action_pose_markers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = TimelineMarker_name_length(&iter.ptr);
            if (namelen < 1024) {
                TimelineMarker_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                TimelineMarker_name_get(&iter.ptr, name);
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
        Action_pose_markers_next(&iter);
    }
    Action_pose_markers_end(&iter);

    return found;
}

RNA_EXTERN_C bool Action_use_frame_range_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void Action_use_frame_range_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Action_use_frame_range_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Action_use_cyclic_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void Action_use_cyclic_set(PointerRNA *ptr, bool value)
{
    bAction *data = (bAction *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C float Action_frame_start_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (float)(data->frame_start);
}

RNA_EXTERN_C void Action_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Action_start_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Action_frame_end_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (float)(data->frame_end);
}

RNA_EXTERN_C void Action_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Action_end_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Action_frame_range_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Action_frame_range_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Action_frame_range_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_Action_frame_range_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Action_curve_frame_range_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Action_curve_frame_range_get;
    fn(ptr, values);
}

RNA_EXTERN_C int Action_id_root_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (int)(data->idroot);
}

RNA_EXTERN_C void Action_id_root_set(PointerRNA *ptr, int value)
{
    bAction *data = (bAction *)(ptr->data);
#ifdef __cplusplus
    data->idroot = (std::remove_reference_t<decltype(data->idroot)>)value;
#else
    data->idroot = value;
#endif
}

static PointerRNA ActionFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ActionFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionFCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionFCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionFCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ActionFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ActionFCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ActionGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ActionGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionGroups_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionGroups_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionGroups_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ActionGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ActionGroups_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ActionPoseMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ActionPoseMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionPoseMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionPoseMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ActionPoseMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ActionPoseMarkers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ActionPoseMarkers_active_get(PointerRNA *ptr)
{
    return rna_Action_active_pose_marker_get(ptr);
}

RNA_EXTERN_C void ActionPoseMarkers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Action_active_pose_marker_set(ptr, value, reports);
}

RNA_EXTERN_C int ActionPoseMarkers_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Action_active_pose_marker_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void ActionPoseMarkers_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Action_active_pose_marker_index_set;
    fn(ptr, value);
}

static PointerRNA ActionGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ActionGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ActionGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ActionGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ActionGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ActionGroup_name_get(PointerRNA *ptr, char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int ActionGroup_name_length(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void ActionGroup_name_set(PointerRNA *ptr, const char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA ActionGroup_channels_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void ActionGroup_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionGroup_channels;

    rna_iterator_listbase_begin(iter, &data->channels, nullptr);

    if (iter->valid) {
        iter->ptr = ActionGroup_channels_get(iter);
    }
}

RNA_EXTERN_C void ActionGroup_channels_next(CollectionPropertyIterator *iter)
{
    rna_ActionGroup_channels_next(iter);

    if (iter->valid) {
        iter->ptr = ActionGroup_channels_get(iter);
    }
}

RNA_EXTERN_C void ActionGroup_channels_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C bool ActionGroup_select_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ActionGroup_select_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool ActionGroup_lock_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void ActionGroup_lock_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool ActionGroup_mute_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void ActionGroup_mute_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool ActionGroup_show_expanded_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void ActionGroup_show_expanded_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool ActionGroup_show_expanded_graph_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void ActionGroup_show_expanded_graph_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool ActionGroup_use_pin_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void ActionGroup_use_pin_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

RNA_EXTERN_C int ActionGroup_color_set_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (int)(data->customCol);
}

RNA_EXTERN_C void ActionGroup_color_set_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ActionGroup_colorset_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool ActionGroup_is_custom_color_set_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ActionGroup_is_custom_colorset_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA ActionGroup_colors_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ThemeBoneColorSet, &data->cs);
}

static PointerRNA DopeSheet_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DopeSheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DopeSheet_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DopeSheet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DopeSheet_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DopeSheet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DopeSheet_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DopeSheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DopeSheet_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA DopeSheet_source_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->source);
}

RNA_EXTERN_C bool DopeSheet_show_datablock_filters_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void DopeSheet_show_datablock_filters_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool DopeSheet_show_only_selected_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 1) != 0);
}

RNA_EXTERN_C void DopeSheet_show_only_selected_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 1; }
    else { data->filterflag &= ~1; }
}

RNA_EXTERN_C bool DopeSheet_show_hidden_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 67108864) != 0);
}

RNA_EXTERN_C void DopeSheet_show_hidden_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 67108864; }
    else { data->filterflag &= ~67108864; }
}

RNA_EXTERN_C bool DopeSheet_use_datablock_sort_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->flag) & 8) != 0);
}

RNA_EXTERN_C void DopeSheet_use_datablock_sort_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool DopeSheet_use_filter_invert_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void DopeSheet_use_filter_invert_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool DopeSheet_show_only_errors_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 268435456) != 0);
}

RNA_EXTERN_C void DopeSheet_show_only_errors_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 268435456; }
    else { data->filterflag &= ~268435456; }
}

RNA_EXTERN_C PointerRNA DopeSheet_filter_collection_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->filter_grp);
}

RNA_EXTERN_C void DopeSheet_filter_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->filter_grp = value.data;
}

RNA_EXTERN_C void DopeSheet_filter_fcurve_name_get(PointerRNA *ptr, char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_assert(strlen(data->searchstr) < 64);
    strcpy(value, data->searchstr);
}

RNA_EXTERN_C int DopeSheet_filter_fcurve_name_length(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return strlen(data->searchstr);
}

RNA_EXTERN_C void DopeSheet_filter_fcurve_name_set(PointerRNA *ptr, const char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(data->searchstr, value, 64);
}

RNA_EXTERN_C void DopeSheet_filter_text_get(PointerRNA *ptr, char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_assert(strlen(data->searchstr) < 64);
    strcpy(value, data->searchstr);
}

RNA_EXTERN_C int DopeSheet_filter_text_length(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return strlen(data->searchstr);
}

RNA_EXTERN_C void DopeSheet_filter_text_set(PointerRNA *ptr, const char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(data->searchstr, value, 64);
}

RNA_EXTERN_C bool DopeSheet_use_multi_word_filter_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void DopeSheet_use_multi_word_filter_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool DopeSheet_show_missing_nla_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 33554432) != 0);
}

RNA_EXTERN_C void DopeSheet_show_missing_nla_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 33554432; }
    else { data->filterflag &= ~33554432; }
}

RNA_EXTERN_C bool DopeSheet_show_summary_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 16) != 0);
}

RNA_EXTERN_C void DopeSheet_show_summary_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 16; }
    else { data->filterflag &= ~16; }
}

RNA_EXTERN_C bool DopeSheet_show_expanded_summary_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void DopeSheet_show_expanded_summary_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool DopeSheet_show_transforms_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 256) != 0);
}

RNA_EXTERN_C void DopeSheet_show_transforms_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 256; }
    else { data->filterflag &= ~256; }
}

RNA_EXTERN_C bool DopeSheet_show_shapekeys_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 64) != 0);
}

RNA_EXTERN_C void DopeSheet_show_shapekeys_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 64; }
    else { data->filterflag &= ~64; }
}

RNA_EXTERN_C bool DopeSheet_show_modifiers_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 8388608) != 0);
}

RNA_EXTERN_C void DopeSheet_show_modifiers_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 8388608; }
    else { data->filterflag &= ~8388608; }
}

RNA_EXTERN_C bool DopeSheet_show_meshes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 128) != 0);
}

RNA_EXTERN_C void DopeSheet_show_meshes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 128; }
    else { data->filterflag &= ~128; }
}

RNA_EXTERN_C bool DopeSheet_show_lattices_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 512) != 0);
}

RNA_EXTERN_C void DopeSheet_show_lattices_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 512; }
    else { data->filterflag &= ~512; }
}

RNA_EXTERN_C bool DopeSheet_show_cameras_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 1024) != 0);
}

RNA_EXTERN_C void DopeSheet_show_cameras_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 1024; }
    else { data->filterflag &= ~1024; }
}

RNA_EXTERN_C bool DopeSheet_show_materials_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 2048) != 0);
}

RNA_EXTERN_C void DopeSheet_show_materials_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 2048; }
    else { data->filterflag &= ~2048; }
}

RNA_EXTERN_C bool DopeSheet_show_lights_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 4096) != 0);
}

RNA_EXTERN_C void DopeSheet_show_lights_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 4096; }
    else { data->filterflag &= ~4096; }
}

RNA_EXTERN_C bool DopeSheet_show_linestyles_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 4194304) != 0);
}

RNA_EXTERN_C void DopeSheet_show_linestyles_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 4194304; }
    else { data->filterflag &= ~4194304; }
}

RNA_EXTERN_C bool DopeSheet_show_textures_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 1048576) != 0);
}

RNA_EXTERN_C void DopeSheet_show_textures_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 1048576; }
    else { data->filterflag &= ~1048576; }
}

RNA_EXTERN_C bool DopeSheet_show_curves_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 8192) != 0);
}

RNA_EXTERN_C void DopeSheet_show_curves_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 8192; }
    else { data->filterflag &= ~8192; }
}

RNA_EXTERN_C bool DopeSheet_show_worlds_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 16384) != 0);
}

RNA_EXTERN_C void DopeSheet_show_worlds_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 16384; }
    else { data->filterflag &= ~16384; }
}

RNA_EXTERN_C bool DopeSheet_show_scenes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 32768) != 0);
}

RNA_EXTERN_C void DopeSheet_show_scenes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 32768; }
    else { data->filterflag &= ~32768; }
}

RNA_EXTERN_C bool DopeSheet_show_particles_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 65536) != 0);
}

RNA_EXTERN_C void DopeSheet_show_particles_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 65536; }
    else { data->filterflag &= ~65536; }
}

RNA_EXTERN_C bool DopeSheet_show_metaballs_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 131072) != 0);
}

RNA_EXTERN_C void DopeSheet_show_metaballs_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 131072; }
    else { data->filterflag &= ~131072; }
}

RNA_EXTERN_C bool DopeSheet_show_armatures_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 262144) != 0);
}

RNA_EXTERN_C void DopeSheet_show_armatures_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 262144; }
    else { data->filterflag &= ~262144; }
}

RNA_EXTERN_C bool DopeSheet_show_nodes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 524288) != 0);
}

RNA_EXTERN_C void DopeSheet_show_nodes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 524288; }
    else { data->filterflag &= ~524288; }
}

RNA_EXTERN_C bool DopeSheet_show_speakers_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 2097152) != 0);
}

RNA_EXTERN_C void DopeSheet_show_speakers_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 2097152; }
    else { data->filterflag &= ~2097152; }
}

RNA_EXTERN_C bool DopeSheet_show_cache_files_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 2) != 0);
}

RNA_EXTERN_C void DopeSheet_show_cache_files_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 2; }
    else { data->filterflag2 &= ~2; }
}

RNA_EXTERN_C bool DopeSheet_show_hair_curves_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 8) != 0);
}

RNA_EXTERN_C void DopeSheet_show_hair_curves_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 8; }
    else { data->filterflag2 &= ~8; }
}

RNA_EXTERN_C bool DopeSheet_show_pointclouds_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 16) != 0);
}

RNA_EXTERN_C void DopeSheet_show_pointclouds_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 16; }
    else { data->filterflag2 &= ~16; }
}

RNA_EXTERN_C bool DopeSheet_show_volumes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 32) != 0);
}

RNA_EXTERN_C void DopeSheet_show_volumes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 32; }
    else { data->filterflag2 &= ~32; }
}

RNA_EXTERN_C bool DopeSheet_show_gpencil_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 16777216) != 0);
}

RNA_EXTERN_C void DopeSheet_show_gpencil_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 16777216; }
    else { data->filterflag &= ~16777216; }
}

RNA_EXTERN_C bool DopeSheet_show_movieclips_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 4) != 0);
}

RNA_EXTERN_C void DopeSheet_show_movieclips_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 4; }
    else { data->filterflag2 &= ~4; }
}

RNA_EXTERN_C void Action_flip_with_pose_func(struct bAction *_self, ReportList *reports, struct Object *object)
{
	rna_Action_flip_with_pose(_self, reports, object);
}

static void Action_flip_with_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Action_flip_with_pose(_self, reports, object);
}

/* Repeated prototypes to detect errors */

void rna_Action_flip_with_pose(struct bAction *_self, ReportList *reports, struct Object *object);

RNA_EXTERN_C struct FCurve *ActionFCurves_new_func(struct bAction *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * action_group)
{
	return rna_Action_fcurve_new(_self, bmain, reports, data_path, index, action_group);
}

static void ActionFCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * data_path;
	int index;
	const char * action_group;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	action_group = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Action_fcurve_new(_self, CTX_data_main(C), reports, data_path, index, action_group);
	*((struct FCurve **)_retdata) = fcurve;
}

RNA_EXTERN_C struct FCurve *ActionFCurves_find_func(struct bAction *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_Action_fcurve_find(_self, reports, data_path, index);
}

static void ActionFCurves_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * data_path;
	int index;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Action_fcurve_find(_self, reports, data_path, index);
	*((struct FCurve **)_retdata) = fcurve;
}

RNA_EXTERN_C void ActionFCurves_remove_func(struct bAction *_self, ReportList *reports, struct PointerRNA *fcurve)
{
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

static void ActionFCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *fcurve;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	fcurve = *((struct PointerRNA **)_data);
	
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

RNA_EXTERN_C void ActionFCurves_clear_func(struct bAction *_self)
{
	rna_Action_fcurve_clear(_self);
}

static void ActionFCurves_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	_self = (struct bAction *)_ptr->data;
	
	rna_Action_fcurve_clear(_self);
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Action_fcurve_new(struct bAction *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * action_group);
struct FCurve *rna_Action_fcurve_find(struct bAction *_self, ReportList *reports, const char * data_path, int index);
void rna_Action_fcurve_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *fcurve);
void rna_Action_fcurve_clear(struct bAction *_self);

RNA_EXTERN_C struct bActionGroup *ActionGroups_new_func(struct bAction *_self, const char * name)
{
	return rna_Action_groups_new(_self, name);
}

static void ActionGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * name;
	struct bActionGroup *action_group;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	action_group = rna_Action_groups_new(_self, name);
	*((struct bActionGroup **)_retdata) = action_group;
}

RNA_EXTERN_C void ActionGroups_remove_func(struct bAction *_self, ReportList *reports, struct PointerRNA *action_group)
{
	rna_Action_groups_remove(_self, reports, action_group);
}

static void ActionGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *action_group;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	action_group = *((struct PointerRNA **)_data);
	
	rna_Action_groups_remove(_self, reports, action_group);
}

/* Repeated prototypes to detect errors */

struct bActionGroup *rna_Action_groups_new(struct bAction *_self, const char * name);
void rna_Action_groups_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *action_group);

RNA_EXTERN_C struct TimeMarker *ActionPoseMarkers_new_func(struct bAction *_self, const char * name)
{
	return rna_Action_pose_markers_new(_self, name);
}

static void ActionPoseMarkers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * name;
	struct TimeMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_Action_pose_markers_new(_self, name);
	*((struct TimeMarker **)_retdata) = marker;
}

RNA_EXTERN_C void ActionPoseMarkers_remove_func(struct bAction *_self, ReportList *reports, struct PointerRNA *marker)
{
	rna_Action_pose_markers_remove(_self, reports, marker);
}

static void ActionPoseMarkers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *marker;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	marker = *((struct PointerRNA **)_data);
	
	rna_Action_pose_markers_remove(_self, reports, marker);
}

/* Repeated prototypes to detect errors */

struct TimeMarker *rna_Action_pose_markers_new(struct bAction *_self, const char * name);
void rna_Action_pose_markers_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *marker);



/* Action */
CollectionPropertyRNA rna_Action_fcurves = {
	{(PropertyRNA *)&rna_Action_groups, nullptr,
	-1, "fcurves", 0, 0, 0, 0, 0, "F-Curves",
	"The individual F-Curves that make up the action",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ActionFCurves},
	Action_fcurves_begin, Action_fcurves_next, Action_fcurves_end, Action_fcurves_get, nullptr, Action_fcurves_lookup_int, nullptr, nullptr, &RNA_FCurve
};

CollectionPropertyRNA rna_Action_groups = {
	{(PropertyRNA *)&rna_Action_pose_markers, (PropertyRNA *)&rna_Action_fcurves,
	-1, "groups", 0, 0, 0, 0, 0, "Groups",
	"Convenient groupings of F-Curves",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ActionGroups},
	Action_groups_begin, Action_groups_next, Action_groups_end, Action_groups_get, nullptr, Action_groups_lookup_int, Action_groups_lookup_string, nullptr, &RNA_ActionGroup
};

CollectionPropertyRNA rna_Action_pose_markers = {
	{(PropertyRNA *)&rna_Action_use_frame_range, (PropertyRNA *)&rna_Action_groups,
	-1, "pose_markers", 65536, 0, 0, 0, 0, "Pose Markers",
	"Markers specific to this action, for labeling poses",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ActionPoseMarkers},
	Action_pose_markers_begin, Action_pose_markers_next, Action_pose_markers_end, Action_pose_markers_get, nullptr, Action_pose_markers_lookup_int, Action_pose_markers_lookup_string, nullptr, &RNA_TimelineMarker
};

BoolPropertyRNA rna_Action_use_frame_range = {
	{(PropertyRNA *)&rna_Action_use_cyclic, (PropertyRNA *)&rna_Action_pose_markers,
	-1, "use_frame_range", 1, 0, 0, 0, 0, "Manual Frame Range",
	"Manually specify the intended playback frame range for the action (this range is used by some tools, but does not affect animation evaluation)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Action_use_frame_range_get, Action_use_frame_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Action_use_cyclic = {
	{(PropertyRNA *)&rna_Action_frame_start, (PropertyRNA *)&rna_Action_use_frame_range,
	-1, "use_cyclic", 1, 0, 0, 0, 0, "Cyclic Animation",
	"The action is intended to be used as a cycle looping over its manually set playback frame range (enabling this doesn\'t automatically make it loop)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Action_use_cyclic_get, Action_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Action_frame_start = {
	{(PropertyRNA *)&rna_Action_frame_end, (PropertyRNA *)&rna_Action_use_cyclic,
	-1, "frame_start", 1, 0, 0, 0, 0, "Start Frame",
	"The start frame of the manually set intended playback range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Action_frame_start_get, Action_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Action_frame_end = {
	{(PropertyRNA *)&rna_Action_frame_range, (PropertyRNA *)&rna_Action_frame_start,
	-1, "frame_end", 1, 0, 0, 0, 0, "End Frame",
	"The end frame of the manually set intended playback range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Action_frame_end_get, Action_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_Action_frame_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Action_frame_range = {
	{(PropertyRNA *)&rna_Action_curve_frame_range, (PropertyRNA *)&rna_Action_frame_end,
	-1, "frame_range", 3, 0, 0, 0, 0, "Frame Range",
	"The intended playback frame range of this action, using the manually set range if available, or the combined frame range of all F-Curves within this action if not (assigning sets the manual frame range)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Action_frame_range_get, Action_frame_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Action_frame_range_default
};

static float rna_Action_curve_frame_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Action_curve_frame_range = {
	{(PropertyRNA *)&rna_Action_id_root, (PropertyRNA *)&rna_Action_frame_range,
	-1, "curve_frame_range", 2, 0, 0, 0, 0, "Curve Frame Range",
	"The combined frame range of all F-Curves within this action",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Action_curve_frame_range_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Action_curve_frame_range_default
};

EnumPropertyRNA rna_Action_id_root = {
	{nullptr, (PropertyRNA *)&rna_Action_curve_frame_range,
	-1, "id_root", 3, 0, 0, 4, 0, "ID Root Type",
	"Type of ID block that action can be used on - DO NOT CHANGE UNLESS YOU KNOW WHAT YOU ARE DOING",
	0, "ID",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAction, idroot), (RawPropertyType)0, nullptr},
	Action_id_root_get, Action_id_root_set, nullptr, nullptr, nullptr, rna_enum_id_type_items, 38, 17217
};

PointerPropertyRNA rna_Action_flip_with_pose_object = {
	{nullptr, nullptr,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"The reference armature object to use when flipping",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

FunctionRNA rna_Action_flip_with_pose_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Action_flip_with_pose_object, (PropertyRNA *)&rna_Action_flip_with_pose_object}},
	"flip_with_pose", 16, "Flip the action around the X axis using a pose",
	Action_flip_with_pose_call,
	nullptr
};

StructRNA RNA_Action = {
	{(ContainerRNA *)&RNA_ActionFCurves, (ContainerRNA *)&RNA_ColorMapping,
	nullptr,
	{(PropertyRNA *)&rna_Action_fcurves, (PropertyRNA *)&rna_Action_id_root}},
	"Action", nullptr, nullptr, 519, nullptr, "Action",
	"A collection of F-Curves for animation",
	"*", 115,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Action_flip_with_pose_func, (FunctionRNA *)&rna_Action_flip_with_pose_func}
};

/* Action F-Curves */
CollectionPropertyRNA rna_ActionFCurves_rna_properties = {
	{(PropertyRNA *)&rna_ActionFCurves_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionFCurves_rna_properties_begin, ActionFCurves_rna_properties_next, ActionFCurves_rna_properties_end, ActionFCurves_rna_properties_get, nullptr, nullptr, ActionFCurves_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ActionFCurves_rna_type = {
	{nullptr, (PropertyRNA *)&rna_ActionFCurves_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionFCurves_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ActionFCurves_new_data_path = {
	{(PropertyRNA *)&rna_ActionFCurves_new_index, nullptr,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path to use",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_ActionFCurves_new_index = {
	{(PropertyRNA *)&rna_ActionFCurves_new_action_group, (PropertyRNA *)&rna_ActionFCurves_new_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_ActionFCurves_new_action_group = {
	{(PropertyRNA *)&rna_ActionFCurves_new_fcurve, (PropertyRNA *)&rna_ActionFCurves_new_index,
	-1, "action_group", 262145, 0, 0, 0, 0, "Action Group",
	"Acton group to add this F-Curve into",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_ActionFCurves_new_fcurve = {
	{nullptr, (PropertyRNA *)&rna_ActionFCurves_new_action_group,
	-1, "fcurve", 8388608, 0, 2, 0, 0, "",
	"Newly created F-Curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_new_func = {
	{(FunctionRNA *)&rna_ActionFCurves_find_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ActionFCurves_new_data_path, (PropertyRNA *)&rna_ActionFCurves_new_fcurve}},
	"new", 20, "Add an F-Curve to the action",
	ActionFCurves_new_call,
	(PropertyRNA *)&rna_ActionFCurves_new_fcurve
};

StringPropertyRNA rna_ActionFCurves_find_data_path = {
	{(PropertyRNA *)&rna_ActionFCurves_find_index, nullptr,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_ActionFCurves_find_index = {
	{(PropertyRNA *)&rna_ActionFCurves_find_fcurve, (PropertyRNA *)&rna_ActionFCurves_find_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_ActionFCurves_find_fcurve = {
	{nullptr, (PropertyRNA *)&rna_ActionFCurves_find_index,
	-1, "fcurve", 8388608, 0, 2, 0, 0, "",
	"The found F-Curve, or None if it doesn\'t exist",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_find_func = {
	{(FunctionRNA *)&rna_ActionFCurves_remove_func, (FunctionRNA *)&rna_ActionFCurves_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ActionFCurves_find_data_path, (PropertyRNA *)&rna_ActionFCurves_find_fcurve}},
	"find", 16, "Find an F-Curve. Note that this function performs a linear scan of all F-Curves in the action.",
	ActionFCurves_find_call,
	(PropertyRNA *)&rna_ActionFCurves_find_fcurve
};

PointerPropertyRNA rna_ActionFCurves_remove_fcurve = {
	{nullptr, nullptr,
	-1, "fcurve", 262144, 0, 5, 0, 0, "",
	"F-Curve to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_remove_func = {
	{(FunctionRNA *)&rna_ActionFCurves_clear_func, (FunctionRNA *)&rna_ActionFCurves_find_func,
	nullptr,
	{(PropertyRNA *)&rna_ActionFCurves_remove_fcurve, (PropertyRNA *)&rna_ActionFCurves_remove_fcurve}},
	"remove", 16, "Remove F-Curve",
	ActionFCurves_remove_call,
	nullptr
};

FunctionRNA rna_ActionFCurves_clear_func = {
	{nullptr, (FunctionRNA *)&rna_ActionFCurves_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all F-Curves",
	ActionFCurves_clear_call,
	nullptr
};

StructRNA RNA_ActionFCurves = {
	{(ContainerRNA *)&RNA_ActionGroups, (ContainerRNA *)&RNA_Action,
	nullptr,
	{(PropertyRNA *)&rna_ActionFCurves_rna_properties, (PropertyRNA *)&rna_ActionFCurves_rna_type}},
	"ActionFCurves", nullptr, nullptr, 516, nullptr, "Action F-Curves",
	"Collection of action F-Curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ActionFCurves_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ActionFCurves_new_func, (FunctionRNA *)&rna_ActionFCurves_clear_func}
};

/* Action Groups */
CollectionPropertyRNA rna_ActionGroups_rna_properties = {
	{(PropertyRNA *)&rna_ActionGroups_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroups_rna_properties_begin, ActionGroups_rna_properties_next, ActionGroups_rna_properties_end, ActionGroups_rna_properties_get, nullptr, nullptr, ActionGroups_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ActionGroups_rna_type = {
	{nullptr, (PropertyRNA *)&rna_ActionGroups_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroups_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ActionGroups_new_name = {
	{(PropertyRNA *)&rna_ActionGroups_new_action_group, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the action group",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Group"
};

PointerPropertyRNA rna_ActionGroups_new_action_group = {
	{nullptr, (PropertyRNA *)&rna_ActionGroups_new_name,
	-1, "action_group", 8388608, 0, 2, 0, 0, "",
	"Newly created action group",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_new_func = {
	{(FunctionRNA *)&rna_ActionGroups_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ActionGroups_new_name, (PropertyRNA *)&rna_ActionGroups_new_action_group}},
	"new", 0, "Create a new action group and add it to the action",
	ActionGroups_new_call,
	(PropertyRNA *)&rna_ActionGroups_new_action_group
};

PointerPropertyRNA rna_ActionGroups_remove_action_group = {
	{nullptr, nullptr,
	-1, "action_group", 262144, 0, 5, 0, 0, "",
	"Action group to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_remove_func = {
	{nullptr, (FunctionRNA *)&rna_ActionGroups_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ActionGroups_remove_action_group, (PropertyRNA *)&rna_ActionGroups_remove_action_group}},
	"remove", 16, "Remove action group",
	ActionGroups_remove_call,
	nullptr
};

StructRNA RNA_ActionGroups = {
	{(ContainerRNA *)&RNA_ActionPoseMarkers, (ContainerRNA *)&RNA_ActionFCurves,
	nullptr,
	{(PropertyRNA *)&rna_ActionGroups_rna_properties, (PropertyRNA *)&rna_ActionGroups_rna_type}},
	"ActionGroups", nullptr, nullptr, 516, nullptr, "Action Groups",
	"Collection of action groups",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ActionGroups_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ActionGroups_new_func, (FunctionRNA *)&rna_ActionGroups_remove_func}
};

/* Action Pose Markers */
CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionPoseMarkers_rna_properties_begin, ActionPoseMarkers_rna_properties_next, ActionPoseMarkers_rna_properties_end, ActionPoseMarkers_rna_properties_get, nullptr, nullptr, ActionPoseMarkers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ActionPoseMarkers_rna_type = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_active, (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionPoseMarkers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ActionPoseMarkers_active = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_active_index, (PropertyRNA *)&rna_ActionPoseMarkers_rna_type,
	-1, "active", 8454145, 0, 0, 0, 0, "Active Pose Marker",
	"Active pose marker for this action",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionPoseMarkers_active_get, ActionPoseMarkers_active_set, nullptr, nullptr,&RNA_TimelineMarker
};

IntPropertyRNA rna_ActionPoseMarkers_active_index = {
	{nullptr, (PropertyRNA *)&rna_ActionPoseMarkers_active,
	-1, "active_index", 65539, 0, 0, 0, 0, "Active Pose Marker Index",
	"Index of active pose marker",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionPoseMarkers_active_index_get, ActionPoseMarkers_active_index_set, nullptr, nullptr, rna_Action_active_pose_marker_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_ActionPoseMarkers_new_name = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_new_marker, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, nullptr,
	"New name for the marker (not unique)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Marker"
};

PointerPropertyRNA rna_ActionPoseMarkers_new_marker = {
	{nullptr, (PropertyRNA *)&rna_ActionPoseMarkers_new_name,
	-1, "marker", 8388608, 0, 2, 0, 0, "",
	"Newly created marker",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_new_func = {
	{(FunctionRNA *)&rna_ActionPoseMarkers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ActionPoseMarkers_new_name, (PropertyRNA *)&rna_ActionPoseMarkers_new_marker}},
	"new", 0, "Add a pose marker to the action",
	ActionPoseMarkers_new_call,
	(PropertyRNA *)&rna_ActionPoseMarkers_new_marker
};

PointerPropertyRNA rna_ActionPoseMarkers_remove_marker = {
	{nullptr, nullptr,
	-1, "marker", 262144, 0, 5, 0, 0, "",
	"Timeline marker to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_remove_func = {
	{nullptr, (FunctionRNA *)&rna_ActionPoseMarkers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ActionPoseMarkers_remove_marker, (PropertyRNA *)&rna_ActionPoseMarkers_remove_marker}},
	"remove", 16, "Remove a timeline marker",
	ActionPoseMarkers_remove_call,
	nullptr
};

StructRNA RNA_ActionPoseMarkers = {
	{(ContainerRNA *)&RNA_ActionGroup, (ContainerRNA *)&RNA_ActionGroups,
	nullptr,
	{(PropertyRNA *)&rna_ActionPoseMarkers_rna_properties, (PropertyRNA *)&rna_ActionPoseMarkers_active_index}},
	"ActionPoseMarkers", nullptr, nullptr, 516, nullptr, "Action Pose Markers",
	"Collection of timeline markers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ActionPoseMarkers_new_func, (FunctionRNA *)&rna_ActionPoseMarkers_remove_func}
};

/* Action Group */
CollectionPropertyRNA rna_ActionGroup_rna_properties = {
	{(PropertyRNA *)&rna_ActionGroup_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_rna_properties_begin, ActionGroup_rna_properties_next, ActionGroup_rna_properties_end, ActionGroup_rna_properties_get, nullptr, nullptr, ActionGroup_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ActionGroup_rna_type = {
	{(PropertyRNA *)&rna_ActionGroup_name, (PropertyRNA *)&rna_ActionGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ActionGroup_name = {
	{(PropertyRNA *)&rna_ActionGroup_channels, (PropertyRNA *)&rna_ActionGroup_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_name_get, ActionGroup_name_length, ActionGroup_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

CollectionPropertyRNA rna_ActionGroup_channels = {
	{(PropertyRNA *)&rna_ActionGroup_select, (PropertyRNA *)&rna_ActionGroup_name,
	-1, "channels", 0, 0, 0, 0, 0, "Channels",
	"F-Curves in this group",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_channels_begin, ActionGroup_channels_next, ActionGroup_channels_end, ActionGroup_channels_get, nullptr, nullptr, nullptr, nullptr, &RNA_FCurve
};

BoolPropertyRNA rna_ActionGroup_select = {
	{(PropertyRNA *)&rna_ActionGroup_lock, (PropertyRNA *)&rna_ActionGroup_channels,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Action group is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376838, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_select_get, ActionGroup_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ActionGroup_lock = {
	{(PropertyRNA *)&rna_ActionGroup_mute, (PropertyRNA *)&rna_ActionGroup_select,
	-1, "lock", 3, 0, 0, 0, 0, "Lock",
	"Action group is locked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_lock_get, ActionGroup_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ActionGroup_mute = {
	{(PropertyRNA *)&rna_ActionGroup_show_expanded, (PropertyRNA *)&rna_ActionGroup_lock,
	-1, "mute", 3, 0, 0, 0, 0, "Mute",
	"Action group is muted",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_mute_get, ActionGroup_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ActionGroup_show_expanded = {
	{(PropertyRNA *)&rna_ActionGroup_show_expanded_graph, (PropertyRNA *)&rna_ActionGroup_mute,
	-1, "show_expanded", 1073741827, 0, 0, 0, 0, "Expanded",
	"Action group is expanded except in graph editor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_show_expanded_get, ActionGroup_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ActionGroup_show_expanded_graph = {
	{(PropertyRNA *)&rna_ActionGroup_use_pin, (PropertyRNA *)&rna_ActionGroup_show_expanded,
	-1, "show_expanded_graph", 1073741827, 0, 0, 0, 0, "Expanded in Graph Editor",
	"Action group is expanded in graph editor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_show_expanded_graph_get, ActionGroup_show_expanded_graph_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ActionGroup_use_pin = {
	{(PropertyRNA *)&rna_ActionGroup_color_set, (PropertyRNA *)&rna_ActionGroup_show_expanded_graph,
	-1, "use_pin", 1073741827, 0, 0, 0, 0, "Pin in Graph Editor",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_use_pin_get, ActionGroup_use_pin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_ActionGroup_color_set = {
	{(PropertyRNA *)&rna_ActionGroup_is_custom_color_set, (PropertyRNA *)&rna_ActionGroup_use_pin,
	-1, "color_set", 3, 0, 0, 0, 0, "Color Set",
	"Custom color set to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_color_set_get, ActionGroup_color_set_set, nullptr, nullptr, nullptr, rna_enum_color_sets_items, 22, 0
};

BoolPropertyRNA rna_ActionGroup_is_custom_color_set = {
	{(PropertyRNA *)&rna_ActionGroup_colors, (PropertyRNA *)&rna_ActionGroup_color_set,
	-1, "is_custom_color_set", 2, 0, 0, 0, 0, "Custom Color Set",
	"Color set is user-defined instead of a fixed theme color set",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_is_custom_color_set_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ActionGroup_colors = {
	{nullptr, (PropertyRNA *)&rna_ActionGroup_is_custom_color_set,
	-1, "colors", 8650752, 0, 0, 0, 0, "Colors",
	"Copy of the colors associated with the group\'s color set",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ActionGroup_colors_get, nullptr, nullptr, nullptr,&RNA_ThemeBoneColorSet
};

StructRNA RNA_ActionGroup = {
	{(ContainerRNA *)&RNA_DopeSheet, (ContainerRNA *)&RNA_ActionPoseMarkers,
	nullptr,
	{(PropertyRNA *)&rna_ActionGroup_rna_properties, (PropertyRNA *)&rna_ActionGroup_colors}},
	"ActionGroup", nullptr, nullptr, 516, nullptr, "Action Group",
	"Groups of F-Curves",
	"*", 17,
	(PropertyRNA *)&rna_ActionGroup_name, (PropertyRNA *)&rna_ActionGroup_rna_properties,
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

/* Dope Sheet */
CollectionPropertyRNA rna_DopeSheet_rna_properties = {
	{(PropertyRNA *)&rna_DopeSheet_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_rna_properties_begin, DopeSheet_rna_properties_next, DopeSheet_rna_properties_end, DopeSheet_rna_properties_get, nullptr, nullptr, DopeSheet_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DopeSheet_rna_type = {
	{(PropertyRNA *)&rna_DopeSheet_source, (PropertyRNA *)&rna_DopeSheet_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_DopeSheet_source = {
	{(PropertyRNA *)&rna_DopeSheet_show_datablock_filters, (PropertyRNA *)&rna_DopeSheet_rna_type,
	-1, "source", 8388800, 0, 0, 0, 0, "Source",
	"ID-Block representing source data, usually ID_SCE (i.e. Scene)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_source_get, nullptr, nullptr, nullptr,&RNA_ID
};

BoolPropertyRNA rna_DopeSheet_show_datablock_filters = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_selected, (PropertyRNA *)&rna_DopeSheet_source,
	-1, "show_datablock_filters", 4099, 0, 0, 0, 0, "Show Data-Block Filters",
	"Show options for whether channels related to certain types of data are included",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376832, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_datablock_filters_get, DopeSheet_show_datablock_filters_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_only_selected = {
	{(PropertyRNA *)&rna_DopeSheet_show_hidden, (PropertyRNA *)&rna_DopeSheet_show_datablock_filters,
	-1, "show_only_selected", 3, 0, 0, 0, 0, "Only Show Selected",
	"Only include channels relating to selected objects and data",
	256, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_only_selected_get, DopeSheet_show_only_selected_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_hidden = {
	{(PropertyRNA *)&rna_DopeSheet_use_datablock_sort, (PropertyRNA *)&rna_DopeSheet_show_only_selected,
	-1, "show_hidden", 3, 0, 0, 0, 0, "Show Hidden",
	"Include channels from objects/bone that are not visible",
	48, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_hidden_get, DopeSheet_show_hidden_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_use_datablock_sort = {
	{(PropertyRNA *)&rna_DopeSheet_use_filter_invert, (PropertyRNA *)&rna_DopeSheet_show_hidden,
	-1, "use_datablock_sort", 3, 0, 0, 0, 0, "Sort Data-Blocks",
	"Alphabetically sorts data-blocks - mainly objects in the scene (disable to increase viewport speed)",
	676, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_use_datablock_sort_get, DopeSheet_use_datablock_sort_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_use_filter_invert = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_errors, (PropertyRNA *)&rna_DopeSheet_use_datablock_sort,
	-1, "use_filter_invert", 3, 0, 0, 0, 0, "Invert",
	"Invert filter search",
	61, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_use_filter_invert_get, DopeSheet_use_filter_invert_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_only_errors = {
	{(PropertyRNA *)&rna_DopeSheet_filter_collection, (PropertyRNA *)&rna_DopeSheet_use_filter_invert,
	-1, "show_only_errors", 3, 0, 0, 0, 0, "Only Show Errors",
	"Only include F-Curves and drivers that are disabled or have errors",
	2, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_only_errors_get, DopeSheet_show_only_errors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_DopeSheet_filter_collection = {
	{(PropertyRNA *)&rna_DopeSheet_filter_fcurve_name, (PropertyRNA *)&rna_DopeSheet_show_only_errors,
	-1, "filter_collection", 8388737, 0, 0, 0, 0, "Filtering Collection",
	"Collection that included object should be a member of",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_filter_collection_get, DopeSheet_filter_collection_set, nullptr, nullptr,&RNA_Collection
};

StringPropertyRNA rna_DopeSheet_filter_fcurve_name = {
	{(PropertyRNA *)&rna_DopeSheet_filter_text, (PropertyRNA *)&rna_DopeSheet_filter_collection,
	-1, "filter_fcurve_name", -2147221503, 0, 0, 0, 0, "F-Curve Name Filter",
	"F-Curve live filtering string",
	30, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_filter_fcurve_name_get, DopeSheet_filter_fcurve_name_length, DopeSheet_filter_fcurve_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_DopeSheet_filter_text = {
	{(PropertyRNA *)&rna_DopeSheet_use_multi_word_filter, (PropertyRNA *)&rna_DopeSheet_filter_fcurve_name,
	-1, "filter_text", -2147221503, 0, 0, 0, 0, "Name Filter",
	"Live filtering string",
	30, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_filter_text_get, DopeSheet_filter_text_length, DopeSheet_filter_text_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_DopeSheet_use_multi_word_filter = {
	{(PropertyRNA *)&rna_DopeSheet_show_missing_nla, (PropertyRNA *)&rna_DopeSheet_filter_text,
	-1, "use_multi_word_filter", 3, 0, 0, 0, 0, "Multi-Word Fuzzy Filter",
	"Perform fuzzy/multi-word matching.\nWarning: May be slow",
	676, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_use_multi_word_filter_get, DopeSheet_use_multi_word_filter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_missing_nla = {
	{(PropertyRNA *)&rna_DopeSheet_show_summary, (PropertyRNA *)&rna_DopeSheet_use_multi_word_filter,
	-1, "show_missing_nla", 3, 0, 0, 0, 0, "Include Missing NLA",
	"Include animation data-blocks with no NLA data (NLA editor only)",
	115, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_missing_nla_get, DopeSheet_show_missing_nla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_summary = {
	{(PropertyRNA *)&rna_DopeSheet_show_expanded_summary, (PropertyRNA *)&rna_DopeSheet_show_missing_nla,
	-1, "show_summary", 3, 0, 0, 0, 0, "Display Summary",
	"Display an additional \'summary\' line (Dope Sheet editors only)",
	29, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_summary_get, DopeSheet_show_summary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_expanded_summary = {
	{(PropertyRNA *)&rna_DopeSheet_show_transforms, (PropertyRNA *)&rna_DopeSheet_show_summary,
	-1, "show_expanded_summary", 3, 0, 0, 0, 0, "Collapse Summary",
	"Collapse summary when shown, so all other channels get hidden (Dope Sheet editors only)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_expanded_summary_get, DopeSheet_show_expanded_summary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_transforms = {
	{(PropertyRNA *)&rna_DopeSheet_show_shapekeys, (PropertyRNA *)&rna_DopeSheet_show_expanded_summary,
	-1, "show_transforms", 3, 0, 0, 0, 0, "Display Transforms",
	"Include visualization of object-level animation data (mostly transforms)",
	593, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_transforms_get, DopeSheet_show_transforms_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_shapekeys = {
	{(PropertyRNA *)&rna_DopeSheet_show_modifiers, (PropertyRNA *)&rna_DopeSheet_show_transforms,
	-1, "show_shapekeys", 3, 0, 0, 0, 0, "Display Shape Keys",
	"Include visualization of shape key related animation data",
	176, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_shapekeys_get, DopeSheet_show_shapekeys_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_modifiers = {
	{(PropertyRNA *)&rna_DopeSheet_show_meshes, (PropertyRNA *)&rna_DopeSheet_show_shapekeys,
	-1, "show_modifiers", 3, 0, 0, 0, 0, "Display Modifier Data",
	"Include visualization of animation data related to data-blocks linked to modifiers",
	442, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_modifiers_get, DopeSheet_show_modifiers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_meshes = {
	{(PropertyRNA *)&rna_DopeSheet_show_lattices, (PropertyRNA *)&rna_DopeSheet_show_modifiers,
	-1, "show_meshes", 3, 0, 0, 0, 0, "Display Meshes",
	"Include visualization of mesh related animation data",
	235, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_meshes_get, DopeSheet_show_meshes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_lattices = {
	{(PropertyRNA *)&rna_DopeSheet_show_cameras, (PropertyRNA *)&rna_DopeSheet_show_meshes,
	-1, "show_lattices", 3, 0, 0, 0, 0, "Display Lattices",
	"Include visualization of lattice related animation data",
	237, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_lattices_get, DopeSheet_show_lattices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_cameras = {
	{(PropertyRNA *)&rna_DopeSheet_show_materials, (PropertyRNA *)&rna_DopeSheet_show_lattices,
	-1, "show_cameras", 3, 0, 0, 0, 0, "Display Camera",
	"Include visualization of camera related animation data",
	240, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_cameras_get, DopeSheet_show_cameras_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_materials = {
	{(PropertyRNA *)&rna_DopeSheet_show_lights, (PropertyRNA *)&rna_DopeSheet_show_cameras,
	-1, "show_materials", 3, 0, 0, 0, 0, "Display Material",
	"Include visualization of material related animation data",
	165, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_materials_get, DopeSheet_show_materials_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_lights = {
	{(PropertyRNA *)&rna_DopeSheet_show_linestyles, (PropertyRNA *)&rna_DopeSheet_show_materials,
	-1, "show_lights", 3, 0, 0, 0, 0, "Display Light",
	"Include visualization of light related animation data",
	239, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_lights_get, DopeSheet_show_lights_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_linestyles = {
	{(PropertyRNA *)&rna_DopeSheet_show_textures, (PropertyRNA *)&rna_DopeSheet_show_lights,
	-1, "show_linestyles", 3, 0, 0, 0, 0, "Display Line Style",
	"Include visualization of Line Style related Animation data",
	198, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_linestyles_get, DopeSheet_show_linestyles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_textures = {
	{(PropertyRNA *)&rna_DopeSheet_show_curves, (PropertyRNA *)&rna_DopeSheet_show_linestyles,
	-1, "show_textures", 3, 0, 0, 0, 0, "Display Texture",
	"Include visualization of texture related animation data",
	166, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_textures_get, DopeSheet_show_textures_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_curves = {
	{(PropertyRNA *)&rna_DopeSheet_show_worlds, (PropertyRNA *)&rna_DopeSheet_show_textures,
	-1, "show_curves", 3, 0, 0, 0, 0, "Display Curve",
	"Include visualization of curve related animation data",
	161, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_curves_get, DopeSheet_show_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_worlds = {
	{(PropertyRNA *)&rna_DopeSheet_show_scenes, (PropertyRNA *)&rna_DopeSheet_show_curves,
	-1, "show_worlds", 3, 0, 0, 0, 0, "Display World",
	"Include visualization of world related animation data",
	158, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_worlds_get, DopeSheet_show_worlds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_scenes = {
	{(PropertyRNA *)&rna_DopeSheet_show_particles, (PropertyRNA *)&rna_DopeSheet_show_worlds,
	-1, "show_scenes", 3, 0, 0, 0, 0, "Display Scene",
	"Include visualization of scene related animation data",
	156, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_scenes_get, DopeSheet_show_scenes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_particles = {
	{(PropertyRNA *)&rna_DopeSheet_show_metaballs, (PropertyRNA *)&rna_DopeSheet_show_scenes,
	-1, "show_particles", 3, 0, 0, 0, 0, "Display Particle",
	"Include visualization of particle related animation data",
	169, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_particles_get, DopeSheet_show_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_metaballs = {
	{(PropertyRNA *)&rna_DopeSheet_show_armatures, (PropertyRNA *)&rna_DopeSheet_show_particles,
	-1, "show_metaballs", 3, 0, 0, 0, 0, "Display Metaball",
	"Include visualization of metaball related animation data",
	238, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_metaballs_get, DopeSheet_show_metaballs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_armatures = {
	{(PropertyRNA *)&rna_DopeSheet_show_nodes, (PropertyRNA *)&rna_DopeSheet_show_metaballs,
	-1, "show_armatures", 3, 0, 0, 0, 0, "Display Armature",
	"Include visualization of armature related animation data",
	241, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_armatures_get, DopeSheet_show_armatures_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_nodes = {
	{(PropertyRNA *)&rna_DopeSheet_show_speakers, (PropertyRNA *)&rna_DopeSheet_show_armatures,
	-1, "show_nodes", 3, 0, 0, 0, 0, "Display Node",
	"Include visualization of node related animation data",
	119, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_nodes_get, DopeSheet_show_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_speakers = {
	{(PropertyRNA *)&rna_DopeSheet_show_cache_files, (PropertyRNA *)&rna_DopeSheet_show_nodes,
	-1, "show_speakers", 3, 0, 0, 0, 0, "Display Speaker",
	"Include visualization of speaker related animation data",
	244, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_speakers_get, DopeSheet_show_speakers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_cache_files = {
	{(PropertyRNA *)&rna_DopeSheet_show_hair_curves, (PropertyRNA *)&rna_DopeSheet_show_speakers,
	-1, "show_cache_files", 3, 0, 0, 0, 0, "Display Cache Files",
	"Include visualization of cache file related animation data",
	184, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_cache_files_get, DopeSheet_show_cache_files_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_hair_curves = {
	{(PropertyRNA *)&rna_DopeSheet_show_pointclouds, (PropertyRNA *)&rna_DopeSheet_show_cache_files,
	-1, "show_hair_curves", 3, 0, 0, 0, 0, "Display Hair",
	"Include visualization of hair related animation data",
	650, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_hair_curves_get, DopeSheet_show_hair_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_pointclouds = {
	{(PropertyRNA *)&rna_DopeSheet_show_volumes, (PropertyRNA *)&rna_DopeSheet_show_hair_curves,
	-1, "show_pointclouds", 3, 0, 0, 0, 0, "Display Point Cloud",
	"Include visualization of point cloud related animation data",
	653, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_pointclouds_get, DopeSheet_show_pointclouds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_volumes = {
	{(PropertyRNA *)&rna_DopeSheet_show_gpencil, (PropertyRNA *)&rna_DopeSheet_show_pointclouds,
	-1, "show_volumes", 3, 0, 0, 0, 0, "Display Volume",
	"Include visualization of volume related animation data",
	656, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_volumes_get, DopeSheet_show_volumes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_gpencil = {
	{(PropertyRNA *)&rna_DopeSheet_show_movieclips, (PropertyRNA *)&rna_DopeSheet_show_volumes,
	-1, "show_gpencil", 3, 0, 0, 0, 0, "Display Grease Pencil",
	"Include visualization of Grease Pencil related animation data and frames",
	247, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_gpencil_get, DopeSheet_show_gpencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_DopeSheet_show_movieclips = {
	{nullptr, (PropertyRNA *)&rna_DopeSheet_show_gpencil,
	-1, "show_movieclips", 3, 0, 0, 0, 0, "Display Movie Clips",
	"Include visualization of movie clip related animation data",
	123, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DopeSheet_show_movieclips_get, DopeSheet_show_movieclips_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_DopeSheet = {
	{(ContainerRNA *)&RNA_AnimData, (ContainerRNA *)&RNA_ActionGroup,
	nullptr,
	{(PropertyRNA *)&rna_DopeSheet_rna_properties, (PropertyRNA *)&rna_DopeSheet_show_movieclips}},
	"DopeSheet", nullptr, nullptr, 516, nullptr, "Dope Sheet",
	"Settings for filtering the channels shown in animation editors",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_DopeSheet_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_DopeSheet_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

