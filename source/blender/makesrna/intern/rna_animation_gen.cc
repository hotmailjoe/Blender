
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

#include "rna_animation.cc"
#include "rna_animation_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_AnimData_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AnimData_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_AnimData_nla_tracks;
RNA_EXTERN_C PointerPropertyRNA rna_AnimData_action;
RNA_EXTERN_C EnumPropertyRNA rna_AnimData_action_extrapolation;
RNA_EXTERN_C EnumPropertyRNA rna_AnimData_action_blend_type;
RNA_EXTERN_C FloatPropertyRNA rna_AnimData_action_influence;
RNA_EXTERN_C PointerPropertyRNA rna_AnimData_action_tweak_storage;
RNA_EXTERN_C CollectionPropertyRNA rna_AnimData_drivers;
RNA_EXTERN_C BoolPropertyRNA rna_AnimData_use_nla;
RNA_EXTERN_C BoolPropertyRNA rna_AnimData_use_tweak_mode;
RNA_EXTERN_C BoolPropertyRNA rna_AnimData_use_pin;

extern FunctionRNA rna_AnimData_nla_tweak_strip_time_to_scene_func;
extern FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_frame;
extern BoolPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_invert;
extern FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_result;



RNA_EXTERN_C CollectionPropertyRNA rna_NlaTracks_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_NlaTracks_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_NlaTracks_active;

extern FunctionRNA rna_NlaTracks_new_func;
extern PointerPropertyRNA rna_NlaTracks_new_prev;
extern PointerPropertyRNA rna_NlaTracks_new_track;

extern FunctionRNA rna_NlaTracks_remove_func;
extern PointerPropertyRNA rna_NlaTracks_remove_track;



RNA_EXTERN_C CollectionPropertyRNA rna_AnimDataDrivers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AnimDataDrivers_rna_type;

extern FunctionRNA rna_AnimDataDrivers_new_func;
extern StringPropertyRNA rna_AnimDataDrivers_new_data_path;
extern IntPropertyRNA rna_AnimDataDrivers_new_index;
extern PointerPropertyRNA rna_AnimDataDrivers_new_driver;

extern FunctionRNA rna_AnimDataDrivers_remove_func;
extern PointerPropertyRNA rna_AnimDataDrivers_remove_driver;

extern FunctionRNA rna_AnimDataDrivers_from_existing_func;
extern PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver;
extern PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver;

extern FunctionRNA rna_AnimDataDrivers_find_func;
extern StringPropertyRNA rna_AnimDataDrivers_find_data_path;
extern IntPropertyRNA rna_AnimDataDrivers_find_index;
extern PointerPropertyRNA rna_AnimDataDrivers_find_fcurve;



RNA_EXTERN_C CollectionPropertyRNA rna_KeyingSet_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSet_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSet_bl_idname;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSet_bl_label;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSet_bl_description;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSet_type_info;
RNA_EXTERN_C CollectionPropertyRNA rna_KeyingSet_paths;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_is_path_absolute;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_use_insertkey_override_needed;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_use_insertkey_override_visual;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_use_insertkey_override_xyz_to_rgb;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_use_insertkey_needed;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_use_insertkey_visual;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSet_use_insertkey_xyz_to_rgb;

extern FunctionRNA rna_KeyingSet_refresh_func;


RNA_EXTERN_C CollectionPropertyRNA rna_KeyingSetPaths_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSetPaths_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSetPaths_active;
RNA_EXTERN_C IntPropertyRNA rna_KeyingSetPaths_active_index;

extern FunctionRNA rna_KeyingSetPaths_add_func;
extern PointerPropertyRNA rna_KeyingSetPaths_add_ksp;
extern PointerPropertyRNA rna_KeyingSetPaths_add_target_id;
extern StringPropertyRNA rna_KeyingSetPaths_add_data_path;
extern IntPropertyRNA rna_KeyingSetPaths_add_index;
extern EnumPropertyRNA rna_KeyingSetPaths_add_group_method;
extern StringPropertyRNA rna_KeyingSetPaths_add_group_name;

extern FunctionRNA rna_KeyingSetPaths_remove_func;
extern PointerPropertyRNA rna_KeyingSetPaths_remove_path;

extern FunctionRNA rna_KeyingSetPaths_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_KeyingSetPath_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSetPath_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSetPath_id;
RNA_EXTERN_C EnumPropertyRNA rna_KeyingSetPath_id_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSetPath_group;
RNA_EXTERN_C EnumPropertyRNA rna_KeyingSetPath_group_method;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSetPath_data_path;
RNA_EXTERN_C IntPropertyRNA rna_KeyingSetPath_array_index;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_entire_array;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_needed;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_visual;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_insertkey_needed;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_insertkey_visual;
RNA_EXTERN_C BoolPropertyRNA rna_KeyingSetPath_use_insertkey_xyz_to_rgb;


RNA_EXTERN_C CollectionPropertyRNA rna_KeyingSetInfo_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyingSetInfo_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSetInfo_bl_idname;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSetInfo_bl_label;
RNA_EXTERN_C StringPropertyRNA rna_KeyingSetInfo_bl_description;
RNA_EXTERN_C EnumPropertyRNA rna_KeyingSetInfo_bl_options;

extern FunctionRNA rna_KeyingSetInfo_poll_func;
extern BoolPropertyRNA rna_KeyingSetInfo_poll_ok;
extern PointerPropertyRNA rna_KeyingSetInfo_poll_context;

extern FunctionRNA rna_KeyingSetInfo_iterator_func;
extern PointerPropertyRNA rna_KeyingSetInfo_iterator_context;
extern PointerPropertyRNA rna_KeyingSetInfo_iterator_ks;

extern FunctionRNA rna_KeyingSetInfo_generate_func;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_context;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_ks;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_data;


static PointerRNA AnimData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AnimData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AnimData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnimData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AnimData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AnimData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AnimData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA AnimData_nla_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaTrack, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void AnimData_nla_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimData_nla_tracks;

    rna_iterator_listbase_begin(iter, &data->nla_tracks, nullptr);

    if (iter->valid) {
        iter->ptr = AnimData_nla_tracks_get(iter);
    }
}

RNA_EXTERN_C void AnimData_nla_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = AnimData_nla_tracks_get(iter);
    }
}

RNA_EXTERN_C void AnimData_nla_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AnimData_nla_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    AnimData_nla_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_nla_tracks_get(&iter); }
    }

    AnimData_nla_tracks_end(&iter);

    return found;
}

RNA_EXTERN_C int NlaTrack_name_length(PointerRNA *);
RNA_EXTERN_C void NlaTrack_name_get(PointerRNA *, char *);

RNA_EXTERN_C int AnimData_nla_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    AnimData_nla_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                NlaTrack_name_get(&iter.ptr, name);
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
        AnimData_nla_tracks_next(&iter);
    }
    AnimData_nla_tracks_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA AnimData_action_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Action, data->action);
}

RNA_EXTERN_C void AnimData_action_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AnimData_action_set(ptr, value, reports);
}

RNA_EXTERN_C int AnimData_action_extrapolation_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->act_extendmode);
}

RNA_EXTERN_C void AnimData_action_extrapolation_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
#ifdef __cplusplus
    data->act_extendmode = (std::remove_reference_t<decltype(data->act_extendmode)>)value;
#else
    data->act_extendmode = value;
#endif
}

RNA_EXTERN_C int AnimData_action_blend_type_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->act_blendmode);
}

RNA_EXTERN_C void AnimData_action_blend_type_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
#ifdef __cplusplus
    data->act_blendmode = (std::remove_reference_t<decltype(data->act_blendmode)>)value;
#else
    data->act_blendmode = value;
#endif
}

RNA_EXTERN_C float AnimData_action_influence_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (float)(data->act_influence);
}

RNA_EXTERN_C void AnimData_action_influence_set(PointerRNA *ptr, float value)
{
    AnimData *data = (AnimData *)(ptr->data);
#ifdef __cplusplus
    data->act_influence = (std::remove_reference_t<decltype(data->act_influence)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->act_influence = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C PointerRNA AnimData_action_tweak_storage_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Action, data->tmpact);
}

RNA_EXTERN_C void AnimData_action_tweak_storage_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AnimData_tmpact_set(ptr, value, reports);
}

static PointerRNA AnimData_drivers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void AnimData_drivers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimData_drivers;

    rna_iterator_listbase_begin(iter, &data->drivers, nullptr);

    if (iter->valid) {
        iter->ptr = AnimData_drivers_get(iter);
    }
}

RNA_EXTERN_C void AnimData_drivers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = AnimData_drivers_get(iter);
    }
}

RNA_EXTERN_C void AnimData_drivers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AnimData_drivers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    AnimData_drivers_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_drivers_get(&iter); }
    }

    AnimData_drivers_end(&iter);

    return found;
}

RNA_EXTERN_C bool AnimData_use_nla_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

RNA_EXTERN_C void AnimData_use_nla_set(PointerRNA *ptr, bool value)
{
    AnimData *data = (AnimData *)(ptr->data);
    if (!value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool AnimData_use_tweak_mode_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void AnimData_use_tweak_mode_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_AnimData_tweakmode_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool AnimData_use_pin_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void AnimData_use_pin_set(PointerRNA *ptr, bool value)
{
    AnimData *data = (AnimData *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

static PointerRNA NlaTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void NlaTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaTracks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaTracks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA NlaTracks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA NlaTracks_active_get(PointerRNA *ptr)
{
    return rna_NlaTrack_active_get(ptr);
}

RNA_EXTERN_C void NlaTracks_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_NlaTrack_active_set(ptr, value, reports);
}

static PointerRNA AnimDataDrivers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AnimDataDrivers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimDataDrivers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimDataDrivers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AnimDataDrivers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnimDataDrivers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AnimDataDrivers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AnimDataDrivers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AnimDataDrivers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA KeyingSet_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyingSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSet_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSet_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSet_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyingSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyingSet_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void KeyingSet_bl_idname_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

RNA_EXTERN_C int KeyingSet_bl_idname_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void KeyingSet_bl_idname_set(PointerRNA *ptr, const char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

RNA_EXTERN_C void KeyingSet_bl_label_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int KeyingSet_bl_label_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void KeyingSet_bl_label_set(PointerRNA *ptr, const char *value)
{
    rna_KeyingSet_name_set(ptr, value);
}

RNA_EXTERN_C void KeyingSet_bl_description_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_assert(strlen(data->description) < 1024);
    strcpy(value, data->description);
}

RNA_EXTERN_C int KeyingSet_bl_description_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->description);
}

RNA_EXTERN_C void KeyingSet_bl_description_set(PointerRNA *ptr, const char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 1024);
}

RNA_EXTERN_C PointerRNA KeyingSet_type_info_get(PointerRNA *ptr)
{
    return rna_KeyingSet_typeinfo_get(ptr);
}

static PointerRNA KeyingSet_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyingSetPath, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void KeyingSet_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSet_paths;

    rna_iterator_listbase_begin(iter, &data->paths, nullptr);

    if (iter->valid) {
        iter->ptr = KeyingSet_paths_get(iter);
    }
}

RNA_EXTERN_C void KeyingSet_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSet_paths_get(iter);
    }
}

RNA_EXTERN_C void KeyingSet_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyingSet_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    KeyingSet_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyingSet_paths_get(&iter); }
    }

    KeyingSet_paths_end(&iter);

    return found;
}

RNA_EXTERN_C int KeyingSetPath_data_path_length(PointerRNA *);
RNA_EXTERN_C void KeyingSetPath_data_path_get(PointerRNA *, char *);

RNA_EXTERN_C int KeyingSet_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyingSet_paths_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyingSetPath_data_path_length(&iter.ptr);
            if (namelen < 1024) {
                KeyingSetPath_data_path_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                KeyingSetPath_data_path_get(&iter.ptr, name);
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
        KeyingSet_paths_next(&iter);
    }
    KeyingSet_paths_end(&iter);

    return found;
}

RNA_EXTERN_C bool KeyingSet_is_path_absolute_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C bool KeyingSet_use_insertkey_override_needed_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingoverride) & 1) != 0);
}

RNA_EXTERN_C void KeyingSet_use_insertkey_override_needed_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride |= 1; }
    else { data->keyingoverride &= ~1; }
}

RNA_EXTERN_C bool KeyingSet_use_insertkey_override_visual_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingoverride) & 2) != 0);
}

RNA_EXTERN_C void KeyingSet_use_insertkey_override_visual_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride |= 2; }
    else { data->keyingoverride &= ~2; }
}

RNA_EXTERN_C bool KeyingSet_use_insertkey_override_xyz_to_rgb_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingoverride) & 32) != 0);
}

RNA_EXTERN_C void KeyingSet_use_insertkey_override_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride |= 32; }
    else { data->keyingoverride &= ~32; }
}

RNA_EXTERN_C bool KeyingSet_use_insertkey_needed_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingflag) & 1) != 0);
}

RNA_EXTERN_C void KeyingSet_use_insertkey_needed_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag |= 1; }
    else { data->keyingflag &= ~1; }
}

RNA_EXTERN_C bool KeyingSet_use_insertkey_visual_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingflag) & 2) != 0);
}

RNA_EXTERN_C void KeyingSet_use_insertkey_visual_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag |= 2; }
    else { data->keyingflag &= ~2; }
}

RNA_EXTERN_C bool KeyingSet_use_insertkey_xyz_to_rgb_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingflag) & 32) != 0);
}

RNA_EXTERN_C void KeyingSet_use_insertkey_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag |= 32; }
    else { data->keyingflag &= ~32; }
}

static PointerRNA KeyingSetPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyingSetPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSetPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSetPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSetPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyingSetPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyingSetPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA KeyingSetPaths_active_get(PointerRNA *ptr)
{
    return rna_KeyingSet_active_ksPath_get(ptr);
}

RNA_EXTERN_C void KeyingSetPaths_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_KeyingSet_active_ksPath_set(ptr, value, reports);
}

RNA_EXTERN_C int KeyingSetPaths_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_KeyingSet_active_ksPath_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyingSetPaths_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_KeyingSet_active_ksPath_index_set;
    fn(ptr, value);
}

static PointerRNA KeyingSetPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyingSetPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSetPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSetPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSetPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyingSetPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyingSetPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA KeyingSetPath_id_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

RNA_EXTERN_C void KeyingSetPath_id_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    KS_Path *data = (KS_Path *)(ptr->data);

    if (data->id) {
        id_us_min((ID *)data->id);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->id = value.data;
}

RNA_EXTERN_C int KeyingSetPath_id_type_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->idtype);
}

RNA_EXTERN_C void KeyingSetPath_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ksPath_id_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C void KeyingSetPath_group_get(PointerRNA *ptr, char *value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    BLI_assert(strlen(data->group) < 64);
    strcpy(value, data->group);
}

RNA_EXTERN_C int KeyingSetPath_group_length(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return strlen(data->group);
}

RNA_EXTERN_C void KeyingSetPath_group_set(PointerRNA *ptr, const char *value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    BLI_strncpy_utf8(data->group, value, 64);
}

RNA_EXTERN_C int KeyingSetPath_group_method_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->groupmode);
}

RNA_EXTERN_C void KeyingSetPath_group_method_set(PointerRNA *ptr, int value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
#ifdef __cplusplus
    data->groupmode = (std::remove_reference_t<decltype(data->groupmode)>)value;
#else
    data->groupmode = value;
#endif
}

RNA_EXTERN_C void KeyingSetPath_data_path_get(PointerRNA *ptr, char *value)
{
    rna_ksPath_RnaPath_get(ptr, value);
}

RNA_EXTERN_C int KeyingSetPath_data_path_length(PointerRNA *ptr)
{
    return rna_ksPath_RnaPath_length(ptr);
}

RNA_EXTERN_C void KeyingSetPath_data_path_set(PointerRNA *ptr, const char *value)
{
    rna_ksPath_RnaPath_set(ptr, value);
}

RNA_EXTERN_C int KeyingSetPath_array_index_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->array_index);
}

RNA_EXTERN_C void KeyingSetPath_array_index_set(PointerRNA *ptr, int value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
#ifdef __cplusplus
    data->array_index = (std::remove_reference_t<decltype(data->array_index)>)value;
#else
    data->array_index = value;
#endif
}

RNA_EXTERN_C bool KeyingSetPath_use_entire_array_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_entire_array_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool KeyingSetPath_use_insertkey_override_needed_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingoverride) & 1) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_insertkey_override_needed_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride |= 1; }
    else { data->keyingoverride &= ~1; }
}

RNA_EXTERN_C bool KeyingSetPath_use_insertkey_override_visual_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingoverride) & 2) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_insertkey_override_visual_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride |= 2; }
    else { data->keyingoverride &= ~2; }
}

RNA_EXTERN_C bool KeyingSetPath_use_insertkey_override_xyz_to_rgb_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingoverride) & 32) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_insertkey_override_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride |= 32; }
    else { data->keyingoverride &= ~32; }
}

RNA_EXTERN_C bool KeyingSetPath_use_insertkey_needed_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingflag) & 1) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_insertkey_needed_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag |= 1; }
    else { data->keyingflag &= ~1; }
}

RNA_EXTERN_C bool KeyingSetPath_use_insertkey_visual_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingflag) & 2) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_insertkey_visual_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag |= 2; }
    else { data->keyingflag &= ~2; }
}

RNA_EXTERN_C bool KeyingSetPath_use_insertkey_xyz_to_rgb_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingflag) & 32) != 0);
}

RNA_EXTERN_C void KeyingSetPath_use_insertkey_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag |= 32; }
    else { data->keyingflag &= ~32; }
}

static PointerRNA KeyingSetInfo_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyingSetInfo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSetInfo_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetInfo_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSetInfo_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetInfo_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyingSetInfo_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyingSetInfo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyingSetInfo_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void KeyingSetInfo_bl_idname_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_assert(strlen(data->idname) < sizeof(data->idname));
    strcpy(value, data->idname);
}

RNA_EXTERN_C int KeyingSetInfo_bl_idname_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void KeyingSetInfo_bl_idname_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, sizeof(data->idname));
}

RNA_EXTERN_C void KeyingSetInfo_bl_label_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

RNA_EXTERN_C int KeyingSetInfo_bl_label_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void KeyingSetInfo_bl_label_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, sizeof(data->name));
}

RNA_EXTERN_C void KeyingSetInfo_bl_description_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_assert(strlen(data->description) < 1024);
    strcpy(value, data->description);
}

RNA_EXTERN_C int KeyingSetInfo_bl_description_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->description);
}

RNA_EXTERN_C void KeyingSetInfo_bl_description_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 1024);
}

RNA_EXTERN_C int KeyingSetInfo_bl_options_get(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return (int)(data->keyingflag);
}

RNA_EXTERN_C void KeyingSetInfo_bl_options_set(PointerRNA *ptr, int value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
#ifdef __cplusplus
    data->keyingflag = (std::remove_reference_t<decltype(data->keyingflag)>)value;
#else
    data->keyingflag = value;
#endif
}

RNA_EXTERN_C float AnimData_nla_tweak_strip_time_to_scene_func(struct AnimData *_self, float frame, bool invert)
{
	return rna_AnimData_nla_tweak_strip_time_to_scene(_self, frame, invert);
}

static void AnimData_nla_tweak_strip_time_to_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	float frame;
	bool invert;
	float result;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	invert = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_AnimData_nla_tweak_strip_time_to_scene(_self, frame, invert);
	*((float *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

float rna_AnimData_nla_tweak_strip_time_to_scene(struct AnimData *_self, float frame, bool invert);

RNA_EXTERN_C struct NlaTrack *NlaTracks_new_func(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, struct NlaTrack *prev)
{
	return rna_NlaTrack_new(_selfid, _self, bmain, C, prev);
}

static void NlaTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AnimData *_self;
	struct NlaTrack *prev;
	struct NlaTrack *track;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	prev = *((struct NlaTrack **)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_NlaTrack_new(_selfid, _self, CTX_data_main(C), C, prev);
	*((struct NlaTrack **)_retdata) = track;
}

RNA_EXTERN_C void NlaTracks_remove_func(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *track)
{
	rna_NlaTrack_remove(_selfid, _self, bmain, C, reports, track);
}

static void NlaTracks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AnimData *_self;
	struct PointerRNA *track;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	track = *((struct PointerRNA **)_data);
	
	rna_NlaTrack_remove(_selfid, _self, CTX_data_main(C), C, reports, track);
}

/* Repeated prototypes to detect errors */

struct NlaTrack *rna_NlaTrack_new(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, struct NlaTrack *prev);
void rna_NlaTrack_remove(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *track);

RNA_EXTERN_C struct FCurve *AnimDataDrivers_new_func(struct ID *_selfid, struct AnimData *_self, Main *bmain, ReportList *reports, const char * data_path, int index)
{
	return rna_Driver_new(_selfid, _self, bmain, reports, data_path, index);
}

static void AnimDataDrivers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AnimData *_self;
	const char * data_path;
	int index;
	struct FCurve *driver;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	driver = rna_Driver_new(_selfid, _self, CTX_data_main(C), reports, data_path, index);
	*((struct FCurve **)_retdata) = driver;
}

RNA_EXTERN_C void AnimDataDrivers_remove_func(struct AnimData *_self, Main *bmain, ReportList *reports, struct FCurve *driver)
{
	rna_Driver_remove(_self, bmain, reports, driver);
}

static void AnimDataDrivers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct FCurve *driver;
	char *_data;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	driver = *((struct FCurve **)_data);
	
	rna_Driver_remove(_self, CTX_data_main(C), reports, driver);
}

RNA_EXTERN_C struct FCurve *AnimDataDrivers_from_existing_func(struct AnimData *_self, bContext *C, struct FCurve *src_driver)
{
	return rna_Driver_from_existing(_self, C, src_driver);
}

static void AnimDataDrivers_from_existing_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct FCurve *src_driver;
	struct FCurve *driver;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	src_driver = *((struct FCurve **)_data);
	_data += 8;
	_retdata = _data;
	
	driver = rna_Driver_from_existing(_self, C, src_driver);
	*((struct FCurve **)_retdata) = driver;
}

RNA_EXTERN_C struct FCurve *AnimDataDrivers_find_func(struct AnimData *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_Driver_find(_self, reports, data_path, index);
}

static void AnimDataDrivers_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	const char * data_path;
	int index;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Driver_find(_self, reports, data_path, index);
	*((struct FCurve **)_retdata) = fcurve;
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Driver_new(struct ID *_selfid, struct AnimData *_self, Main *bmain, ReportList *reports, const char * data_path, int index);
void rna_Driver_remove(struct AnimData *_self, Main *bmain, ReportList *reports, struct FCurve *driver);
struct FCurve *rna_Driver_from_existing(struct AnimData *_self, bContext *C, struct FCurve *src_driver);
struct FCurve *rna_Driver_find(struct AnimData *_self, ReportList *reports, const char * data_path, int index);

RNA_EXTERN_C void KeyingSet_refresh_func(struct KeyingSet *_self, bContext *C, ReportList *reports)
{
	rna_KeyingSet_context_refresh(_self, C, reports);
}

static void KeyingSet_refresh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	_self = (struct KeyingSet *)_ptr->data;
	
	rna_KeyingSet_context_refresh(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_KeyingSet_context_refresh(struct KeyingSet *_self, bContext *C, ReportList *reports);

RNA_EXTERN_C struct KS_Path *KeyingSetPaths_add_func(struct KeyingSet *_self, ReportList *reports, struct ID *target_id, const char * data_path, int index, int group_method, const char * group_name)
{
	return rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
}

static void KeyingSetPaths_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	struct KS_Path *ksp;
	struct ID *target_id;
	const char * data_path;
	int index;
	int group_method;
	const char * group_name;
	char *_data, *_retdata;
	
	_self = (struct KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	target_id = *((struct ID **)_data);
	_data += 8;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	group_method = *((int *)_data);
	_data += 8;
	group_name = *((const char * *)_data);
	
	ksp = rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
	*((struct KS_Path **)_retdata) = ksp;
}

RNA_EXTERN_C void KeyingSetPaths_remove_func(struct KeyingSet *_self, ReportList *reports, struct PointerRNA *path)
{
	rna_KeyingSet_paths_remove(_self, reports, path);
}

static void KeyingSetPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	struct PointerRNA *path;
	char *_data;
	
	_self = (struct KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((struct PointerRNA **)_data);
	
	rna_KeyingSet_paths_remove(_self, reports, path);
}

RNA_EXTERN_C void KeyingSetPaths_clear_func(struct KeyingSet *_self, ReportList *reports)
{
	rna_KeyingSet_paths_clear(_self, reports);
}

static void KeyingSetPaths_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	_self = (struct KeyingSet *)_ptr->data;
	
	rna_KeyingSet_paths_clear(_self, reports);
}

/* Repeated prototypes to detect errors */

struct KS_Path *rna_KeyingSet_paths_add(struct KeyingSet *_self, ReportList *reports, struct ID *target_id, const char * data_path, int index, int group_method, const char * group_name);
void rna_KeyingSet_paths_remove(struct KeyingSet *_self, ReportList *reports, struct PointerRNA *path);
void rna_KeyingSet_paths_clear(struct KeyingSet *_self, ReportList *reports);



/* Animation Data */
CollectionPropertyRNA rna_AnimData_rna_properties = {
	{(PropertyRNA *)&rna_AnimData_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_rna_properties_begin, AnimData_rna_properties_next, AnimData_rna_properties_end, AnimData_rna_properties_get, nullptr, nullptr, AnimData_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AnimData_rna_type = {
	{(PropertyRNA *)&rna_AnimData_nla_tracks, (PropertyRNA *)&rna_AnimData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_AnimData_nla_tracks = {
	{(PropertyRNA *)&rna_AnimData_action, (PropertyRNA *)&rna_AnimData_rna_type,
	-1, "nla_tracks", 0, 3073, 0, 0, 0, "NLA Tracks",
	"NLA Tracks (i.e. Animation Layers)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_NLA_tracks_override_apply,
	0, PROP_RAW_UNSET, &RNA_NlaTracks},
	AnimData_nla_tracks_begin, AnimData_nla_tracks_next, AnimData_nla_tracks_end, AnimData_nla_tracks_get, nullptr, AnimData_nla_tracks_lookup_int, AnimData_nla_tracks_lookup_string, nullptr, &RNA_NlaTrack
};

PointerPropertyRNA rna_AnimData_action = {
	{(PropertyRNA *)&rna_AnimData_action_extrapolation, (PropertyRNA *)&rna_AnimData_nla_tracks,
	-1, "action", 8388801, 1, 0, 0, 0, "Action",
	"Active Action for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_dependency_update, 256507904, rna_AnimData_action_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_action_get, AnimData_action_set, nullptr, rna_Action_id_poll,&RNA_Action
};

static const EnumPropertyItem rna_AnimData_action_extrapolation_items[4] = {
	{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"},
	{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"},
	{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_AnimData_action_extrapolation = {
	{(PropertyRNA *)&rna_AnimData_action_blend_type, (PropertyRNA *)&rna_AnimData_action,
	-1, "action_extrapolation", 3, 1, 0, 4, 0, "Action Extrapolation",
	"Action to take for gaps past the Active Action\'s range (when evaluating with NLA)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AnimData, act_extendmode), (RawPropertyType)1, nullptr},
	AnimData_action_extrapolation_get, AnimData_action_extrapolation_set, nullptr, nullptr, nullptr, rna_AnimData_action_extrapolation_items, 3, 0
};

static const EnumPropertyItem rna_AnimData_action_blend_type_items[7] = {
	{0, "REPLACE", 0, "Replace", "The strip values replace the accumulated results by amount specified by influence"},
	{4, "COMBINE", 0, "Combine", "The strip values are combined with accumulated results by appropriately using addition, multiplication, or quaternion math, based on channel type"},
	{0, "", 0, nullptr, nullptr},
	{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"},
	{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"},
	{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_AnimData_action_blend_type = {
	{(PropertyRNA *)&rna_AnimData_action_influence, (PropertyRNA *)&rna_AnimData_action_extrapolation,
	-1, "action_blend_type", 3, 1, 0, 4, 0, "Action Blending",
	"Method used for combining Active Action\'s result with result of NLA stack",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AnimData, act_blendmode), (RawPropertyType)1, nullptr},
	AnimData_action_blend_type_get, AnimData_action_blend_type_set, nullptr, nullptr, nullptr, rna_AnimData_action_blend_type_items, 6, 0
};

FloatPropertyRNA rna_AnimData_action_influence = {
	{(PropertyRNA *)&rna_AnimData_action_tweak_storage, (PropertyRNA *)&rna_AnimData_action_blend_type,
	-1, "action_influence", 3, 1, 0, 4, 0, "Action Influence",
	"Amount the Active Action contributes to the result of the NLA stack",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AnimData, act_influence), (RawPropertyType)5, nullptr},
	AnimData_action_influence_get, AnimData_action_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

PointerPropertyRNA rna_AnimData_action_tweak_storage = {
	{(PropertyRNA *)&rna_AnimData_drivers, (PropertyRNA *)&rna_AnimData_action_influence,
	-1, "action_tweak_storage", 8913089, 1, 0, 0, 0, "Tweak Mode Action Storage",
	"Slot to temporarily hold the main action while in tweak mode",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_dependency_update, 256507904, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_action_tweak_storage_get, AnimData_action_tweak_storage_set, nullptr, rna_Action_id_poll,&RNA_Action
};

CollectionPropertyRNA rna_AnimData_drivers = {
	{(PropertyRNA *)&rna_AnimData_use_nla, (PropertyRNA *)&rna_AnimData_action_tweak_storage,
	-1, "drivers", 0, 1, 0, 0, 0, "Drivers",
	"The Drivers/Expressions for this data-block",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AnimDataDrivers},
	AnimData_drivers_begin, AnimData_drivers_next, AnimData_drivers_end, AnimData_drivers_get, nullptr, AnimData_drivers_lookup_int, nullptr, nullptr, &RNA_FCurve
};

BoolPropertyRNA rna_AnimData_use_nla = {
	{(PropertyRNA *)&rna_AnimData_use_tweak_mode, (PropertyRNA *)&rna_AnimData_drivers,
	-1, "use_nla", 3, 1, 0, 0, 0, "NLA Evaluation Enabled",
	"NLA stack is evaluated when evaluating this block",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_use_nla_get, AnimData_use_nla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_AnimData_use_tweak_mode = {
	{(PropertyRNA *)&rna_AnimData_use_pin, (PropertyRNA *)&rna_AnimData_use_nla,
	-1, "use_tweak_mode", 3, 1, 0, 0, 0, "Use NLA Tweak Mode",
	"Whether to enable or disable tweak mode in NLA",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimData_tweakmode_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_use_tweak_mode_get, AnimData_use_tweak_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_AnimData_use_pin = {
	{nullptr, (PropertyRNA *)&rna_AnimData_use_tweak_mode,
	-1, "use_pin", 1073741827, 1, 0, 0, 0, "Pin in Graph Editor",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimData_use_pin_get, AnimData_use_pin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_frame = {
	{(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_invert, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "",
	"Input time",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 1.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_invert = {
	{(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_result, (PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_frame,
	-1, "invert", 3, 0, 0, 0, 0, "Invert",
	"Convert scene time to action time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_result = {
	{nullptr, (PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_invert,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Converted time",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_AnimData_nla_tweak_strip_time_to_scene_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_frame, (PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_result}},
	"nla_tweak_strip_time_to_scene", 0, "Convert a time value from the local time of the tweaked strip to scene time, exactly as done by built-in key editing tools. Returns the input time unchanged if not tweaking.",
	AnimData_nla_tweak_strip_time_to_scene_call,
	(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_result
};

StructRNA RNA_AnimData = {
	{(ContainerRNA *)&RNA_NlaTracks, (ContainerRNA *)&RNA_DopeSheet,
	nullptr,
	{(PropertyRNA *)&rna_AnimData_rna_properties, (PropertyRNA *)&rna_AnimData_use_pin}},
	"AnimData", nullptr, nullptr, 516, nullptr, "Animation Data",
	"Animation data for data-block",
	"*", 167,
	nullptr, (PropertyRNA *)&rna_AnimData_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_func, (FunctionRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_func}
};

/* NLA Tracks */
CollectionPropertyRNA rna_NlaTracks_rna_properties = {
	{(PropertyRNA *)&rna_NlaTracks_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTracks_rna_properties_begin, NlaTracks_rna_properties_next, NlaTracks_rna_properties_end, NlaTracks_rna_properties_get, nullptr, nullptr, NlaTracks_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_NlaTracks_rna_type = {
	{(PropertyRNA *)&rna_NlaTracks_active, (PropertyRNA *)&rna_NlaTracks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTracks_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_NlaTracks_active = {
	{nullptr, (PropertyRNA *)&rna_NlaTracks_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Track",
	"Active NLA Track",
	0, "Action",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442374, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTracks_active_get, NlaTracks_active_set, nullptr, nullptr,&RNA_NlaTrack
};

PointerPropertyRNA rna_NlaTracks_new_prev = {
	{(PropertyRNA *)&rna_NlaTracks_new_track, nullptr,
	-1, "prev", 8388608, 0, 0, 0, 0, "",
	"NLA Track to add the new one after",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NlaTrack
};

PointerPropertyRNA rna_NlaTracks_new_track = {
	{nullptr, (PropertyRNA *)&rna_NlaTracks_new_prev,
	-1, "track", 8388608, 0, 2, 0, 0, "",
	"New NLA Track",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NlaTrack
};

FunctionRNA rna_NlaTracks_new_func = {
	{(FunctionRNA *)&rna_NlaTracks_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_NlaTracks_new_prev, (PropertyRNA *)&rna_NlaTracks_new_track}},
	"new", 2060, "Add a new NLA Track",
	NlaTracks_new_call,
	(PropertyRNA *)&rna_NlaTracks_new_track
};

PointerPropertyRNA rna_NlaTracks_remove_track = {
	{nullptr, nullptr,
	-1, "track", 262144, 0, 5, 0, 0, "",
	"NLA Track to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NlaTrack
};

FunctionRNA rna_NlaTracks_remove_func = {
	{nullptr, (FunctionRNA *)&rna_NlaTracks_new_func,
	nullptr,
	{(PropertyRNA *)&rna_NlaTracks_remove_track, (PropertyRNA *)&rna_NlaTracks_remove_track}},
	"remove", 2076, "Remove a NLA Track",
	NlaTracks_remove_call,
	nullptr
};

StructRNA RNA_NlaTracks = {
	{(ContainerRNA *)&RNA_AnimDataDrivers, (ContainerRNA *)&RNA_AnimData,
	nullptr,
	{(PropertyRNA *)&rna_NlaTracks_rna_properties, (PropertyRNA *)&rna_NlaTracks_active}},
	"NlaTracks", nullptr, nullptr, 516, nullptr, "NLA Tracks",
	"Collection of NLA Tracks",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_NlaTracks_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_NlaTracks_new_func, (FunctionRNA *)&rna_NlaTracks_remove_func}
};

/* Drivers */
CollectionPropertyRNA rna_AnimDataDrivers_rna_properties = {
	{(PropertyRNA *)&rna_AnimDataDrivers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimDataDrivers_rna_properties_begin, AnimDataDrivers_rna_properties_next, AnimDataDrivers_rna_properties_end, AnimDataDrivers_rna_properties_get, nullptr, nullptr, AnimDataDrivers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AnimDataDrivers_rna_type = {
	{nullptr, (PropertyRNA *)&rna_AnimDataDrivers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnimDataDrivers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_AnimDataDrivers_new_data_path = {
	{(PropertyRNA *)&rna_AnimDataDrivers_new_index, nullptr,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path to use",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_AnimDataDrivers_new_index = {
	{(PropertyRNA *)&rna_AnimDataDrivers_new_driver, (PropertyRNA *)&rna_AnimDataDrivers_new_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_AnimDataDrivers_new_driver = {
	{nullptr, (PropertyRNA *)&rna_AnimDataDrivers_new_index,
	-1, "driver", 8388608, 0, 2, 0, 0, "",
	"Newly Driver F-Curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_new_func = {
	{(FunctionRNA *)&rna_AnimDataDrivers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_AnimDataDrivers_new_data_path, (PropertyRNA *)&rna_AnimDataDrivers_new_driver}},
	"new", 2068, "new",
	AnimDataDrivers_new_call,
	(PropertyRNA *)&rna_AnimDataDrivers_new_driver
};

PointerPropertyRNA rna_AnimDataDrivers_remove_driver = {
	{nullptr, nullptr,
	-1, "driver", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_remove_func = {
	{(FunctionRNA *)&rna_AnimDataDrivers_from_existing_func, (FunctionRNA *)&rna_AnimDataDrivers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_AnimDataDrivers_remove_driver, (PropertyRNA *)&rna_AnimDataDrivers_remove_driver}},
	"remove", 20, "remove",
	AnimDataDrivers_remove_call,
	nullptr
};

PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver = {
	{(PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver, nullptr,
	-1, "src_driver", 8388608, 0, 0, 0, 0, "",
	"Existing Driver F-Curve to use as template for a new one",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver = {
	{nullptr, (PropertyRNA *)&rna_AnimDataDrivers_from_existing_src_driver,
	-1, "driver", 8388608, 0, 2, 0, 0, "",
	"New Driver F-Curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_from_existing_func = {
	{(FunctionRNA *)&rna_AnimDataDrivers_find_func, (FunctionRNA *)&rna_AnimDataDrivers_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_AnimDataDrivers_from_existing_src_driver, (PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver}},
	"from_existing", 8, "Add a new driver given an existing one",
	AnimDataDrivers_from_existing_call,
	(PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver
};

StringPropertyRNA rna_AnimDataDrivers_find_data_path = {
	{(PropertyRNA *)&rna_AnimDataDrivers_find_index, nullptr,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_AnimDataDrivers_find_index = {
	{(PropertyRNA *)&rna_AnimDataDrivers_find_fcurve, (PropertyRNA *)&rna_AnimDataDrivers_find_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_AnimDataDrivers_find_fcurve = {
	{nullptr, (PropertyRNA *)&rna_AnimDataDrivers_find_index,
	-1, "fcurve", 8388608, 0, 2, 0, 0, "",
	"The found F-Curve, or None if it doesn\'t exist",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_find_func = {
	{nullptr, (FunctionRNA *)&rna_AnimDataDrivers_from_existing_func,
	nullptr,
	{(PropertyRNA *)&rna_AnimDataDrivers_find_data_path, (PropertyRNA *)&rna_AnimDataDrivers_find_fcurve}},
	"find", 16, "Find a driver F-Curve. Note that this function performs a linear scan of all driver F-Curves.",
	AnimDataDrivers_find_call,
	(PropertyRNA *)&rna_AnimDataDrivers_find_fcurve
};

StructRNA RNA_AnimDataDrivers = {
	{(ContainerRNA *)&RNA_KeyingSet, (ContainerRNA *)&RNA_NlaTracks,
	nullptr,
	{(PropertyRNA *)&rna_AnimDataDrivers_rna_properties, (PropertyRNA *)&rna_AnimDataDrivers_rna_type}},
	"AnimDataDrivers", nullptr, nullptr, 516, nullptr, "Drivers",
	"Collection of Driver F-Curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AnimDataDrivers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_AnimDataDrivers_new_func, (FunctionRNA *)&rna_AnimDataDrivers_find_func}
};

/* Keying Set */
CollectionPropertyRNA rna_KeyingSet_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSet_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_rna_properties_begin, KeyingSet_rna_properties_next, KeyingSet_rna_properties_end, KeyingSet_rna_properties_get, nullptr, nullptr, KeyingSet_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyingSet_rna_type = {
	{(PropertyRNA *)&rna_KeyingSet_bl_idname, (PropertyRNA *)&rna_KeyingSet_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyingSet_bl_idname = {
	{(PropertyRNA *)&rna_KeyingSet_bl_label, (PropertyRNA *)&rna_KeyingSet_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_bl_idname_get, KeyingSet_bl_idname_length, KeyingSet_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_KeyingSet_bl_label = {
	{(PropertyRNA *)&rna_KeyingSet_bl_description, (PropertyRNA *)&rna_KeyingSet_bl_idname,
	-1, "bl_label", 262145, 0, 0, 0, 0, "UI Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 84803589, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_bl_label_get, KeyingSet_bl_label_length, KeyingSet_bl_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_KeyingSet_bl_description = {
	{(PropertyRNA *)&rna_KeyingSet_type_info, (PropertyRNA *)&rna_KeyingSet_bl_label,
	-1, "bl_description", 262145, 0, 0, 0, 0, "Description",
	"A short description of the keying set",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_bl_description_get, KeyingSet_bl_description_length, KeyingSet_bl_description_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_KeyingSet_type_info = {
	{(PropertyRNA *)&rna_KeyingSet_paths, (PropertyRNA *)&rna_KeyingSet_bl_description,
	-1, "type_info", 8388608, 0, 0, 0, 0, "Type Info",
	"Callback function defines for built-in Keying Sets",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_type_info_get, nullptr, nullptr, nullptr,&RNA_KeyingSetInfo
};

CollectionPropertyRNA rna_KeyingSet_paths = {
	{(PropertyRNA *)&rna_KeyingSet_is_path_absolute, (PropertyRNA *)&rna_KeyingSet_type_info,
	-1, "paths", 0, 0, 0, 0, 0, "Paths",
	"Keying Set Paths to define settings that get keyframed together",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_KeyingSetPaths},
	KeyingSet_paths_begin, KeyingSet_paths_next, KeyingSet_paths_end, KeyingSet_paths_get, nullptr, KeyingSet_paths_lookup_int, KeyingSet_paths_lookup_string, nullptr, &RNA_KeyingSetPath
};

BoolPropertyRNA rna_KeyingSet_is_path_absolute = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_override_needed, (PropertyRNA *)&rna_KeyingSet_paths,
	-1, "is_path_absolute", 2, 0, 0, 0, 0, "Absolute",
	"Keying Set defines specific paths/settings to be keyframed (i.e. is not reliant on context info)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_is_path_absolute_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_override_needed = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_override_visual, (PropertyRNA *)&rna_KeyingSet_is_path_absolute,
	-1, "use_insertkey_override_needed", 3, 0, 0, 0, 0, "Override Insert Keyframes Default- Only Needed",
	"Override default setting to only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_use_insertkey_override_needed_get, KeyingSet_use_insertkey_override_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_override_visual = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_override_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSet_use_insertkey_override_needed,
	-1, "use_insertkey_override_visual", 3, 0, 0, 0, 0, "Override Insert Keyframes Default - Visual",
	"Override default setting to insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_use_insertkey_override_visual_get, KeyingSet_use_insertkey_override_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_override_xyz_to_rgb = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_needed, (PropertyRNA *)&rna_KeyingSet_use_insertkey_override_visual,
	-1, "use_insertkey_override_xyz_to_rgb", 3, 0, 0, 0, 0, "Override F-Curve Colors - XYZ to RGB",
	"Override default setting to set color for newly added transformation F-Curves (Location, Rotation, Scale) to be based on the transform axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_use_insertkey_override_xyz_to_rgb_get, KeyingSet_use_insertkey_override_xyz_to_rgb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_needed = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_visual, (PropertyRNA *)&rna_KeyingSet_use_insertkey_override_xyz_to_rgb,
	-1, "use_insertkey_needed", 3, 0, 0, 0, 0, "Insert Keyframes - Only Needed",
	"Only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_use_insertkey_needed_get, KeyingSet_use_insertkey_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_visual = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSet_use_insertkey_needed,
	-1, "use_insertkey_visual", 3, 0, 0, 0, 0, "Insert Keyframes - Visual",
	"Insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_use_insertkey_visual_get, KeyingSet_use_insertkey_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_xyz_to_rgb = {
	{nullptr, (PropertyRNA *)&rna_KeyingSet_use_insertkey_visual,
	-1, "use_insertkey_xyz_to_rgb", 3, 0, 0, 0, 0, "F-Curve Colors - XYZ to RGB",
	"Color for newly added transformation F-Curves (Location, Rotation, Scale) is based on the transform axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSet_use_insertkey_xyz_to_rgb_get, KeyingSet_use_insertkey_xyz_to_rgb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_KeyingSet_refresh_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"refresh", 24, "Refresh Keying Set to ensure that it is valid for the current context (call before each use of one)",
	KeyingSet_refresh_call,
	nullptr
};

StructRNA RNA_KeyingSet = {
	{(ContainerRNA *)&RNA_KeyingSetPaths, (ContainerRNA *)&RNA_AnimDataDrivers,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSet_rna_properties, (PropertyRNA *)&rna_KeyingSet_use_insertkey_xyz_to_rgb}},
	"KeyingSet", nullptr, nullptr, 516, nullptr, "Keying Set",
	"Settings that should be keyframed together",
	"*", 512,
	(PropertyRNA *)&rna_KeyingSet_bl_label, (PropertyRNA *)&rna_KeyingSet_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyingSet_refresh_func, (FunctionRNA *)&rna_KeyingSet_refresh_func}
};

/* Keying set paths */
CollectionPropertyRNA rna_KeyingSetPaths_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetPaths_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPaths_rna_properties_begin, KeyingSetPaths_rna_properties_next, KeyingSetPaths_rna_properties_end, KeyingSetPaths_rna_properties_get, nullptr, nullptr, KeyingSetPaths_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetPaths_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetPaths_active, (PropertyRNA *)&rna_KeyingSetPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPaths_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetPaths_active = {
	{(PropertyRNA *)&rna_KeyingSetPaths_active_index, (PropertyRNA *)&rna_KeyingSetPaths_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Keying Set",
	"Active Keying Set used to insert/delete keyframes",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_KeyingSet_active_ksPath_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPaths_active_get, KeyingSetPaths_active_set, nullptr, nullptr,&RNA_KeyingSetPath
};

IntPropertyRNA rna_KeyingSetPaths_active_index = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetPaths_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Path Index",
	"Current Keying Set index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPaths_active_index_get, KeyingSetPaths_active_index_set, nullptr, nullptr, rna_KeyingSet_active_ksPath_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_KeyingSetPaths_add_ksp = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_target_id, nullptr,
	-1, "ksp", 8388608, 0, 2, 0, 0, "New Path",
	"Path created and added to the Keying Set",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyingSetPath
};

PointerPropertyRNA rna_KeyingSetPaths_add_target_id = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_data_path, (PropertyRNA *)&rna_KeyingSetPaths_add_ksp,
	-1, "target_id", 8388736, 0, 1, 0, 0, "Target ID",
	"ID data-block for the destination",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

StringPropertyRNA rna_KeyingSetPaths_add_data_path = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_index, (PropertyRNA *)&rna_KeyingSetPaths_add_target_id,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data-Path",
	"RNA-Path to destination property",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 256, ""
};

IntPropertyRNA rna_KeyingSetPaths_add_index = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_group_method, (PropertyRNA *)&rna_KeyingSetPaths_add_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"The index of the destination property (i.e. axis of Location/Rotation/etc.), or -1 for the entire array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

EnumPropertyRNA rna_KeyingSetPaths_add_group_method = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_group_name, (PropertyRNA *)&rna_KeyingSetPaths_add_index,
	-1, "group_method", 3, 0, 0, 0, 0, "Grouping Method",
	"Method used to define which Group-name to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keyingset_path_grouping_items, 3, 2
};

StringPropertyRNA rna_KeyingSetPaths_add_group_name = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetPaths_add_group_method,
	-1, "group_name", 262145, 0, 0, 0, 0, "Group Name",
	"Name of Action Group to assign destination to (only if grouping mode is to use this name)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FunctionRNA rna_KeyingSetPaths_add_func = {
	{(FunctionRNA *)&rna_KeyingSetPaths_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetPaths_add_ksp, (PropertyRNA *)&rna_KeyingSetPaths_add_group_name}},
	"add", 16, "Add a new path for the Keying Set",
	KeyingSetPaths_add_call,
	(PropertyRNA *)&rna_KeyingSetPaths_add_ksp
};

PointerPropertyRNA rna_KeyingSetPaths_remove_path = {
	{nullptr, nullptr,
	-1, "path", 262144, 0, 5, 0, 0, "Path",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyingSetPath
};

FunctionRNA rna_KeyingSetPaths_remove_func = {
	{(FunctionRNA *)&rna_KeyingSetPaths_clear_func, (FunctionRNA *)&rna_KeyingSetPaths_add_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetPaths_remove_path, (PropertyRNA *)&rna_KeyingSetPaths_remove_path}},
	"remove", 16, "Remove the given path from the Keying Set",
	KeyingSetPaths_remove_call,
	nullptr
};

FunctionRNA rna_KeyingSetPaths_clear_func = {
	{nullptr, (FunctionRNA *)&rna_KeyingSetPaths_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 16, "Remove all the paths from the Keying Set",
	KeyingSetPaths_clear_call,
	nullptr
};

StructRNA RNA_KeyingSetPaths = {
	{(ContainerRNA *)&RNA_KeyingSetPath, (ContainerRNA *)&RNA_KeyingSet,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetPaths_rna_properties, (PropertyRNA *)&rna_KeyingSetPaths_active_index}},
	"KeyingSetPaths", nullptr, nullptr, 516, nullptr, "Keying set paths",
	"Collection of keying set paths",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_KeyingSetPaths_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyingSetPaths_add_func, (FunctionRNA *)&rna_KeyingSetPaths_clear_func}
};

/* Keying Set Path */
CollectionPropertyRNA rna_KeyingSetPath_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetPath_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_rna_properties_begin, KeyingSetPath_rna_properties_next, KeyingSetPath_rna_properties_end, KeyingSetPath_rna_properties_get, nullptr, nullptr, KeyingSetPath_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetPath_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetPath_id, (PropertyRNA *)&rna_KeyingSetPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetPath_id = {
	{(PropertyRNA *)&rna_KeyingSetPath_id_type, (PropertyRNA *)&rna_KeyingSetPath_rna_type,
	-1, "id", 8388801, 0, 0, 0, 0, "ID-Block",
	"ID-Block that keyframes for Keying Set should be added to (for Absolute Keying Sets only)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84803585, rna_ksPath_id_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_id_get, KeyingSetPath_id_set, rna_ksPath_id_typef, nullptr,&RNA_ID
};

EnumPropertyRNA rna_KeyingSetPath_id_type = {
	{(PropertyRNA *)&rna_KeyingSetPath_group, (PropertyRNA *)&rna_KeyingSetPath_id,
	-1, "id_type", 3, 0, 0, 0, 0, "ID Type",
	"Type of ID-block that can be used",
	0, "ID",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84803585, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_id_type_get, KeyingSetPath_id_type_set, nullptr, nullptr, nullptr, rna_enum_id_type_items, 38, 16975
};

StringPropertyRNA rna_KeyingSetPath_group = {
	{(PropertyRNA *)&rna_KeyingSetPath_group_method, (PropertyRNA *)&rna_KeyingSetPath_id_type,
	-1, "group", 262145, 0, 0, 0, 0, "Group Name",
	"Name of Action Group to assign setting(s) for this path to",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 84803585, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_group_get, KeyingSetPath_group_length, KeyingSetPath_group_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_KeyingSetPath_group_method = {
	{(PropertyRNA *)&rna_KeyingSetPath_data_path, (PropertyRNA *)&rna_KeyingSetPath_group,
	-1, "group_method", 3, 0, 0, 4, 0, "Grouping Method",
	"Method used to define which Group-name to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84803585, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(KS_Path, groupmode), (RawPropertyType)1, nullptr},
	KeyingSetPath_group_method_get, KeyingSetPath_group_method_set, nullptr, nullptr, nullptr, rna_enum_keyingset_path_grouping_items, 3, 0
};

StringPropertyRNA rna_KeyingSetPath_data_path = {
	{(PropertyRNA *)&rna_KeyingSetPath_array_index, (PropertyRNA *)&rna_KeyingSetPath_group_method,
	-1, "data_path", 262145, 0, 0, 0, 0, "Data Path",
	"Path to property setting",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84803585, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_data_path_get, KeyingSetPath_data_path_length, KeyingSetPath_data_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_KeyingSetPath_array_index = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_entire_array, (PropertyRNA *)&rna_KeyingSetPath_data_path,
	-1, "array_index", 3, 0, 0, 4, 0, "RNA Array Index",
	"Index to the specific setting if applicable",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84803585, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(KS_Path, array_index), (RawPropertyType)0, nullptr},
	KeyingSetPath_array_index_get, KeyingSetPath_array_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_entire_array = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_needed, (PropertyRNA *)&rna_KeyingSetPath_array_index,
	-1, "use_entire_array", 3, 0, 0, 0, 0, "Entire Array",
	"When an \'array/vector\' type is chosen (Location, Rotation, Color, etc.), entire array is to be used",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84803585, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_entire_array_get, KeyingSetPath_use_entire_array_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_needed = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_visual, (PropertyRNA *)&rna_KeyingSetPath_use_entire_array,
	-1, "use_insertkey_override_needed", 3, 0, 0, 0, 0, "Override Insert Keyframes Default- Only Needed",
	"Override default setting to only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_insertkey_override_needed_get, KeyingSetPath_use_insertkey_override_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_visual = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_needed,
	-1, "use_insertkey_override_visual", 3, 0, 0, 0, 0, "Override Insert Keyframes Default - Visual",
	"Override default setting to insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_insertkey_override_visual_get, KeyingSetPath_use_insertkey_override_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_needed, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_visual,
	-1, "use_insertkey_override_xyz_to_rgb", 3, 0, 0, 0, 0, "Override F-Curve Colors - XYZ to RGB",
	"Override default setting to set color for newly added transformation F-Curves (Location, Rotation, Scale) to be based on the transform axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_insertkey_override_xyz_to_rgb_get, KeyingSetPath_use_insertkey_override_xyz_to_rgb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_needed = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_visual, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb,
	-1, "use_insertkey_needed", 3, 0, 0, 0, 0, "Insert Keyframes - Only Needed",
	"Only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_insertkey_needed_get, KeyingSetPath_use_insertkey_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_visual = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_needed,
	-1, "use_insertkey_visual", 3, 0, 0, 0, 0, "Insert Keyframes - Visual",
	"Insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_insertkey_visual_get, KeyingSetPath_use_insertkey_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_xyz_to_rgb = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_visual,
	-1, "use_insertkey_xyz_to_rgb", 3, 0, 0, 0, 0, "F-Curve Colors - XYZ to RGB",
	"Color for newly added transformation F-Curves (Location, Rotation, Scale) is based on the transform axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetPath_use_insertkey_xyz_to_rgb_get, KeyingSetPath_use_insertkey_xyz_to_rgb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_KeyingSetPath = {
	{(ContainerRNA *)&RNA_KeyingSetInfo, (ContainerRNA *)&RNA_KeyingSetPaths,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetPath_rna_properties, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_xyz_to_rgb}},
	"KeyingSetPath", nullptr, nullptr, 516, nullptr, "Keying Set Path",
	"Path to a setting for use in a Keying Set",
	"*", 17,
	(PropertyRNA *)&rna_KeyingSetPath_data_path, (PropertyRNA *)&rna_KeyingSetPath_rna_properties,
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

/* Keying Set Info */
CollectionPropertyRNA rna_KeyingSetInfo_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetInfo_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetInfo_rna_properties_begin, KeyingSetInfo_rna_properties_next, KeyingSetInfo_rna_properties_end, KeyingSetInfo_rna_properties_get, nullptr, nullptr, KeyingSetInfo_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetInfo_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_idname, (PropertyRNA *)&rna_KeyingSetInfo_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetInfo_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyingSetInfo_bl_idname = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_label, (PropertyRNA *)&rna_KeyingSetInfo_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetInfo_bl_idname_get, KeyingSetInfo_bl_idname_length, KeyingSetInfo_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_KeyingSetInfo_bl_label = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_description, (PropertyRNA *)&rna_KeyingSetInfo_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "UI Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetInfo_bl_label_get, KeyingSetInfo_bl_label_length, KeyingSetInfo_bl_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_KeyingSetInfo_bl_description = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_options, (PropertyRNA *)&rna_KeyingSetInfo_bl_label,
	-1, "bl_description", 262193, 0, 0, 0, 0, "Description",
	"A short description of the keying set",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetInfo_bl_description_get, KeyingSetInfo_bl_description_length, KeyingSetInfo_bl_description_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

EnumPropertyRNA rna_KeyingSetInfo_bl_options = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetInfo_bl_description,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Keying Set options to use when inserting keyframes",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyingSetInfo_bl_options_get, KeyingSetInfo_bl_options_set, nullptr, nullptr, nullptr, rna_enum_keying_flag_items, 3, 1
};

BoolPropertyRNA rna_KeyingSetInfo_poll_ok = {
	{(PropertyRNA *)&rna_KeyingSetInfo_poll_context, nullptr,
	-1, "ok", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_KeyingSetInfo_poll_context = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetInfo_poll_ok,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_KeyingSetInfo_poll_func = {
	{(FunctionRNA *)&rna_KeyingSetInfo_iterator_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetInfo_poll_ok, (PropertyRNA *)&rna_KeyingSetInfo_poll_context}},
	"poll", 32, "Test if Keying Set can be used or not",
	nullptr,
	(PropertyRNA *)&rna_KeyingSetInfo_poll_ok
};

PointerPropertyRNA rna_KeyingSetInfo_iterator_context = {
	{(PropertyRNA *)&rna_KeyingSetInfo_iterator_ks, nullptr,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_KeyingSetInfo_iterator_ks = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetInfo_iterator_context,
	-1, "ks", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyingSet
};

FunctionRNA rna_KeyingSetInfo_iterator_func = {
	{(FunctionRNA *)&rna_KeyingSetInfo_generate_func, (FunctionRNA *)&rna_KeyingSetInfo_poll_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetInfo_iterator_context, (PropertyRNA *)&rna_KeyingSetInfo_iterator_ks}},
	"iterator", 32, "Call generate() on the structs which have properties to be keyframed",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_KeyingSetInfo_generate_context = {
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_ks, nullptr,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_KeyingSetInfo_generate_ks = {
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_data, (PropertyRNA *)&rna_KeyingSetInfo_generate_context,
	-1, "ks", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyingSet
};

PointerPropertyRNA rna_KeyingSetInfo_generate_data = {
	{nullptr, (PropertyRNA *)&rna_KeyingSetInfo_generate_ks,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AnyType
};

FunctionRNA rna_KeyingSetInfo_generate_func = {
	{nullptr, (FunctionRNA *)&rna_KeyingSetInfo_iterator_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_context, (PropertyRNA *)&rna_KeyingSetInfo_generate_data}},
	"generate", 32, "Add Paths to the Keying Set to keyframe the properties of the given data",
	nullptr,
	nullptr
};

StructRNA RNA_KeyingSetInfo = {
	{(ContainerRNA *)&RNA_AnimViz, (ContainerRNA *)&RNA_KeyingSetPath,
	nullptr,
	{(PropertyRNA *)&rna_KeyingSetInfo_rna_properties, (PropertyRNA *)&rna_KeyingSetInfo_bl_options}},
	"KeyingSetInfo", nullptr, nullptr, 516, nullptr, "Keying Set Info",
	"Callback function defines for builtin Keying Sets",
	"*", 17,
	(PropertyRNA *)&rna_KeyingSetInfo_bl_label, (PropertyRNA *)&rna_KeyingSetInfo_rna_properties,
	nullptr,
	nullptr,
	rna_KeyingSetInfo_refine,
	nullptr,
	rna_KeyingSetInfo_register,
	rna_KeyingSetInfo_unregister,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyingSetInfo_poll_func, (FunctionRNA *)&rna_KeyingSetInfo_generate_func}
};

