
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

#include "rna_nla.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_NlaTrack_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_NlaTrack_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_NlaTrack_strips;
RNA_EXTERN_C BoolPropertyRNA rna_NlaTrack_is_override_data;
RNA_EXTERN_C StringPropertyRNA rna_NlaTrack_name;
RNA_EXTERN_C BoolPropertyRNA rna_NlaTrack_active;
RNA_EXTERN_C BoolPropertyRNA rna_NlaTrack_is_solo;
RNA_EXTERN_C BoolPropertyRNA rna_NlaTrack_select;
RNA_EXTERN_C BoolPropertyRNA rna_NlaTrack_mute;
RNA_EXTERN_C BoolPropertyRNA rna_NlaTrack_lock;


RNA_EXTERN_C CollectionPropertyRNA rna_NlaStrips_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_NlaStrips_rna_type;

extern FunctionRNA rna_NlaStrips_new_func;
extern StringPropertyRNA rna_NlaStrips_new_name;
extern IntPropertyRNA rna_NlaStrips_new_start;
extern PointerPropertyRNA rna_NlaStrips_new_action;
extern PointerPropertyRNA rna_NlaStrips_new_strip;

extern FunctionRNA rna_NlaStrips_remove_func;
extern PointerPropertyRNA rna_NlaStrips_remove_strip;



RNA_EXTERN_C CollectionPropertyRNA rna_NlaStrip_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_NlaStrip_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_NlaStrip_name;
RNA_EXTERN_C EnumPropertyRNA rna_NlaStrip_type;
RNA_EXTERN_C EnumPropertyRNA rna_NlaStrip_extrapolation;
RNA_EXTERN_C EnumPropertyRNA rna_NlaStrip_blend_type;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_frame_start;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_frame_end;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_frame_start_raw;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_frame_end_raw;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_frame_start_ui;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_frame_end_ui;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_blend_in;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_blend_out;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_use_auto_blend;
RNA_EXTERN_C PointerPropertyRNA rna_NlaStrip_action;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_action_frame_start;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_action_frame_end;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_repeat;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_scale;
RNA_EXTERN_C CollectionPropertyRNA rna_NlaStrip_fcurves;
RNA_EXTERN_C CollectionPropertyRNA rna_NlaStrip_modifiers;
RNA_EXTERN_C CollectionPropertyRNA rna_NlaStrip_strips;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_influence;
RNA_EXTERN_C FloatPropertyRNA rna_NlaStrip_strip_time;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_use_animated_influence;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_use_animated_time;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_use_animated_time_cyclic;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_active;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_select;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_mute;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_use_reverse;
RNA_EXTERN_C BoolPropertyRNA rna_NlaStrip_use_sync_length;


RNA_EXTERN_C CollectionPropertyRNA rna_NlaStripFCurves_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_NlaStripFCurves_rna_type;

extern FunctionRNA rna_NlaStripFCurves_find_func;
extern StringPropertyRNA rna_NlaStripFCurves_find_data_path;
extern IntPropertyRNA rna_NlaStripFCurves_find_index;
extern PointerPropertyRNA rna_NlaStripFCurves_find_fcurve;


static PointerRNA NlaTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void NlaTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaTrack_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaTrack_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaTrack_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA NlaTrack_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA NlaTrack_strips_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaStrip, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void NlaTrack_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaTrack_strips;

    rna_iterator_listbase_begin(iter, &data->strips, nullptr);

    if (iter->valid) {
        iter->ptr = NlaTrack_strips_get(iter);
    }
}

RNA_EXTERN_C void NlaTrack_strips_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaTrack_strips_get(iter);
    }
}

RNA_EXTERN_C void NlaTrack_strips_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaTrack_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaTrack_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaTrack_strips_get(&iter); }
    }

    NlaTrack_strips_end(&iter);

    return found;
}

RNA_EXTERN_C int NlaStrip_name_length(PointerRNA *);
RNA_EXTERN_C void NlaStrip_name_get(PointerRNA *, char *);

RNA_EXTERN_C int NlaTrack_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaTrack_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaStrip_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaStrip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                NlaStrip_name_get(&iter.ptr, name);
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
        NlaTrack_strips_next(&iter);
    }
    NlaTrack_strips_end(&iter);

    return found;
}

RNA_EXTERN_C bool NlaTrack_is_override_data_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return !(((data->flag) & 65536) != 0);
}

RNA_EXTERN_C void NlaTrack_name_get(PointerRNA *ptr, char *value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int NlaTrack_name_length(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void NlaTrack_name_set(PointerRNA *ptr, const char *value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C bool NlaTrack_active_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool NlaTrack_is_solo_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void NlaTrack_is_solo_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaTrack_solo_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool NlaTrack_select_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void NlaTrack_select_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool NlaTrack_mute_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void NlaTrack_mute_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool NlaTrack_lock_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void NlaTrack_lock_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

static PointerRNA NlaStrips_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void NlaStrips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrips_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrips_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaStrips_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrips_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaStrips_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaStrips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA NlaStrips_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA NlaStrip_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void NlaStrip_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaStrip_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA NlaStrip_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void NlaStrip_name_get(PointerRNA *ptr, char *value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int NlaStrip_name_length(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void NlaStrip_name_set(PointerRNA *ptr, const char *value)
{
    rna_NlaStrip_name_set(ptr, value);
}

RNA_EXTERN_C int NlaStrip_type_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C int NlaStrip_extrapolation_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->extendmode);
}

RNA_EXTERN_C void NlaStrip_extrapolation_set(PointerRNA *ptr, int value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
#ifdef __cplusplus
    data->extendmode = (std::remove_reference_t<decltype(data->extendmode)>)value;
#else
    data->extendmode = value;
#endif
}

RNA_EXTERN_C int NlaStrip_blend_type_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->blendmode);
}

RNA_EXTERN_C void NlaStrip_blend_type_set(PointerRNA *ptr, int value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
#ifdef __cplusplus
    data->blendmode = (std::remove_reference_t<decltype(data->blendmode)>)value;
#else
    data->blendmode = value;
#endif
}

RNA_EXTERN_C float NlaStrip_frame_start_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

RNA_EXTERN_C void NlaStrip_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_start_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_frame_end_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

RNA_EXTERN_C void NlaStrip_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_end_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_frame_start_raw_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

RNA_EXTERN_C void NlaStrip_frame_start_raw_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
#ifdef __cplusplus
    data->start = (std::remove_reference_t<decltype(data->start)>)value;
#else
    data->start = value;
#endif
}

RNA_EXTERN_C float NlaStrip_frame_end_raw_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

RNA_EXTERN_C void NlaStrip_frame_end_raw_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
#ifdef __cplusplus
    data->end = (std::remove_reference_t<decltype(data->end)>)value;
#else
    data->end = value;
#endif
}

RNA_EXTERN_C float NlaStrip_frame_start_ui_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

RNA_EXTERN_C void NlaStrip_frame_start_ui_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_frame_start_ui_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_frame_end_ui_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

RNA_EXTERN_C void NlaStrip_frame_end_ui_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_frame_end_ui_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_blend_in_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->blendin);
}

RNA_EXTERN_C void NlaStrip_blend_in_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_blend_in_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_blend_out_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->blendout);
}

RNA_EXTERN_C void NlaStrip_blend_out_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_blend_out_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool NlaStrip_use_auto_blend_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void NlaStrip_use_auto_blend_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaStrip_use_auto_blend_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA NlaStrip_action_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Action, data->act);
}

RNA_EXTERN_C void NlaStrip_action_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    if (data->act) {
        id_us_min((ID *)data->act);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->act = value.data;
}

RNA_EXTERN_C float NlaStrip_action_frame_start_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->actstart);
}

RNA_EXTERN_C void NlaStrip_action_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_action_start_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_action_frame_end_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->actend);
}

RNA_EXTERN_C void NlaStrip_action_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_action_end_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_repeat_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->repeat);
}

RNA_EXTERN_C void NlaStrip_repeat_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_repeat_set;
    fn(ptr, value);
}

RNA_EXTERN_C float NlaStrip_scale_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->scale);
}

RNA_EXTERN_C void NlaStrip_scale_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_scale_set;
    fn(ptr, value);
}

static PointerRNA NlaStrip_fcurves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void NlaStrip_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_fcurves;

    rna_iterator_listbase_begin(iter, &data->fcurves, nullptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_fcurves_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_fcurves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_fcurves_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_fcurves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaStrip_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaStrip_fcurves_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_fcurves_get(&iter); }
    }

    NlaStrip_fcurves_end(&iter);

    return found;
}

static PointerRNA NlaStrip_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifier, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void NlaStrip_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_modifiers;

    rna_iterator_listbase_begin(iter, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_modifiers_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_modifiers_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaStrip_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaStrip_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_modifiers_get(&iter); }
    }

    NlaStrip_modifiers_end(&iter);

    return found;
}

RNA_EXTERN_C int FModifier_name_length(PointerRNA *);
RNA_EXTERN_C void FModifier_name_get(PointerRNA *, char *);

RNA_EXTERN_C int NlaStrip_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaStrip_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                FModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                FModifier_name_get(&iter.ptr, name);
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
        NlaStrip_modifiers_next(&iter);
    }
    NlaStrip_modifiers_end(&iter);

    return found;
}

static PointerRNA NlaStrip_strips_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaStrip, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void NlaStrip_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_strips;

    rna_iterator_listbase_begin(iter, &data->strips, nullptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_strips_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_strips_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_strips_get(iter);
    }
}

RNA_EXTERN_C void NlaStrip_strips_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaStrip_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaStrip_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_strips_get(&iter); }
    }

    NlaStrip_strips_end(&iter);

    return found;
}

RNA_EXTERN_C int NlaStrip_name_length(PointerRNA *);
RNA_EXTERN_C void NlaStrip_name_get(PointerRNA *, char *);

RNA_EXTERN_C int NlaStrip_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaStrip_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaStrip_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaStrip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                NlaStrip_name_get(&iter.ptr, name);
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
        NlaStrip_strips_next(&iter);
    }
    NlaStrip_strips_end(&iter);

    return found;
}

RNA_EXTERN_C float NlaStrip_influence_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->influence);
}

RNA_EXTERN_C void NlaStrip_influence_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
#ifdef __cplusplus
    data->influence = (std::remove_reference_t<decltype(data->influence)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->influence = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float NlaStrip_strip_time_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->strip_time);
}

RNA_EXTERN_C void NlaStrip_strip_time_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
#ifdef __cplusplus
    data->strip_time = (std::remove_reference_t<decltype(data->strip_time)>)value;
#else
    data->strip_time = value;
#endif
}

RNA_EXTERN_C bool NlaStrip_use_animated_influence_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void NlaStrip_use_animated_influence_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaStrip_animated_influence_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool NlaStrip_use_animated_time_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void NlaStrip_use_animated_time_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaStrip_animated_time_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool NlaStrip_use_animated_time_cyclic_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void NlaStrip_use_animated_time_cyclic_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool NlaStrip_active_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool NlaStrip_select_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void NlaStrip_select_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool NlaStrip_mute_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void NlaStrip_mute_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool NlaStrip_use_reverse_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void NlaStrip_use_reverse_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool NlaStrip_use_sync_length_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void NlaStrip_use_sync_length_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

static PointerRNA NlaStripFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void NlaStripFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStripFCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStripFCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaStripFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStripFCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void NlaStripFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int NlaStripFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA NlaStripFCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


RNA_EXTERN_C struct NlaStrip *NlaStrips_new_func(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, const char * name, int start, struct bAction *action)
{
	return rna_NlaStrip_new(_selfid, _self, bmain, C, reports, name, start, action);
}

static void NlaStrips_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct NlaTrack *_self;
	const char * name;
	int start;
	struct bAction *action;
	struct NlaStrip *strip;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct NlaTrack *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	start = *((int *)_data);
	_data += 8;
	action = *((struct bAction **)_data);
	_data += 8;
	_retdata = _data;
	
	strip = rna_NlaStrip_new(_selfid, _self, CTX_data_main(C), C, reports, name, start, action);
	*((struct NlaStrip **)_retdata) = strip;
}

RNA_EXTERN_C void NlaStrips_remove_func(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *strip)
{
	rna_NlaStrip_remove(_selfid, _self, bmain, C, reports, strip);
}

static void NlaStrips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct NlaTrack *_self;
	struct PointerRNA *strip;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct NlaTrack *)_ptr->data;
	_data = (char *)_parms->data;
	strip = *((struct PointerRNA **)_data);
	
	rna_NlaStrip_remove(_selfid, _self, CTX_data_main(C), C, reports, strip);
}

/* Repeated prototypes to detect errors */

struct NlaStrip *rna_NlaStrip_new(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, const char * name, int start, struct bAction *action);
void rna_NlaStrip_remove(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *strip);


RNA_EXTERN_C struct FCurve *NlaStripFCurves_find_func(struct NlaStrip *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_NlaStrip_fcurve_find(_self, reports, data_path, index);
}

static void NlaStripFCurves_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct NlaStrip *_self;
	const char * data_path;
	int index;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct NlaStrip *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_NlaStrip_fcurve_find(_self, reports, data_path, index);
	*((struct FCurve **)_retdata) = fcurve;
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_NlaStrip_fcurve_find(struct NlaStrip *_self, ReportList *reports, const char * data_path, int index);

/* NLA Track */
CollectionPropertyRNA rna_NlaTrack_rna_properties = {
	{(PropertyRNA *)&rna_NlaTrack_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_rna_properties_begin, NlaTrack_rna_properties_next, NlaTrack_rna_properties_end, NlaTrack_rna_properties_get, nullptr, nullptr, NlaTrack_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_NlaTrack_rna_type = {
	{(PropertyRNA *)&rna_NlaTrack_strips, (PropertyRNA *)&rna_NlaTrack_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_NlaTrack_strips = {
	{(PropertyRNA *)&rna_NlaTrack_is_override_data, (PropertyRNA *)&rna_NlaTrack_rna_type,
	-1, "strips", 0, 1, 0, 0, 0, "NLA Strips",
	"NLA Strips on this NLA-track",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_NlaStrips},
	NlaTrack_strips_begin, NlaTrack_strips_next, NlaTrack_strips_end, NlaTrack_strips_get, nullptr, NlaTrack_strips_lookup_int, NlaTrack_strips_lookup_string, nullptr, &RNA_NlaStrip
};

BoolPropertyRNA rna_NlaTrack_is_override_data = {
	{(PropertyRNA *)&rna_NlaTrack_name, (PropertyRNA *)&rna_NlaTrack_strips,
	-1, "is_override_data", 2, 0, 0, 0, 0, "Override Track",
	"In a local override data, whether this NLA track comes from the linked reference data, or is local to the override",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_is_override_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_NlaTrack_name = {
	{(PropertyRNA *)&rna_NlaTrack_active, (PropertyRNA *)&rna_NlaTrack_is_override_data,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_name_get, NlaTrack_name_length, NlaTrack_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_NlaTrack_active = {
	{(PropertyRNA *)&rna_NlaTrack_is_solo, (PropertyRNA *)&rna_NlaTrack_name,
	-1, "active", 2, 1, 0, 0, 0, "Active",
	"NLA Track is active",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_active_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaTrack_is_solo = {
	{(PropertyRNA *)&rna_NlaTrack_select, (PropertyRNA *)&rna_NlaTrack_active,
	-1, "is_solo", 3, 1, 0, 0, 0, "Solo",
	"NLA Track is evaluated itself (i.e. active Action and all other NLA Tracks in the same AnimData block are disabled)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_is_solo_get, NlaTrack_is_solo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaTrack_select = {
	{(PropertyRNA *)&rna_NlaTrack_mute, (PropertyRNA *)&rna_NlaTrack_is_solo,
	-1, "select", 3, 1, 0, 0, 0, "Select",
	"NLA Track is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_select_get, NlaTrack_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaTrack_mute = {
	{(PropertyRNA *)&rna_NlaTrack_lock, (PropertyRNA *)&rna_NlaTrack_select,
	-1, "mute", 3, 1, 0, 0, 0, "Muted",
	"Disable NLA Track evaluation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_mute_get, NlaTrack_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaTrack_lock = {
	{nullptr, (PropertyRNA *)&rna_NlaTrack_mute,
	-1, "lock", 3, 1, 0, 0, 0, "Locked",
	"NLA Track is locked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaTrack_lock_get, NlaTrack_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_NlaTrack = {
	{(ContainerRNA *)&RNA_NlaStrips, (ContainerRNA *)&RNA_ShaderFxFlip,
	nullptr,
	{(PropertyRNA *)&rna_NlaTrack_rna_properties, (PropertyRNA *)&rna_NlaTrack_lock}},
	"NlaTrack", nullptr, nullptr, 516, nullptr, "NLA Track",
	"An animation layer containing Actions referenced as NLA strips",
	"*", 116,
	(PropertyRNA *)&rna_NlaTrack_name, (PropertyRNA *)&rna_NlaTrack_rna_properties,
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

/* NLA Strips */
CollectionPropertyRNA rna_NlaStrips_rna_properties = {
	{(PropertyRNA *)&rna_NlaStrips_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrips_rna_properties_begin, NlaStrips_rna_properties_next, NlaStrips_rna_properties_end, NlaStrips_rna_properties_get, nullptr, nullptr, NlaStrips_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_NlaStrips_rna_type = {
	{nullptr, (PropertyRNA *)&rna_NlaStrips_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrips_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_NlaStrips_new_name = {
	{(PropertyRNA *)&rna_NlaStrips_new_start, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"Name for the NLA Strips",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "NlaStrip"
};

IntPropertyRNA rna_NlaStrips_new_start = {
	{(PropertyRNA *)&rna_NlaStrips_new_action, (PropertyRNA *)&rna_NlaStrips_new_name,
	-1, "start", 3, 0, 1, 0, 0, "Start Frame",
	"Start frame for this strip",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_NlaStrips_new_action = {
	{(PropertyRNA *)&rna_NlaStrips_new_strip, (PropertyRNA *)&rna_NlaStrips_new_start,
	-1, "action", 8650880, 0, 1, 0, 0, "",
	"Action to assign to this strip",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Action
};

PointerPropertyRNA rna_NlaStrips_new_strip = {
	{nullptr, (PropertyRNA *)&rna_NlaStrips_new_action,
	-1, "strip", 8388608, 0, 2, 0, 0, "",
	"New NLA Strip",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NlaStrip
};

FunctionRNA rna_NlaStrips_new_func = {
	{(FunctionRNA *)&rna_NlaStrips_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_NlaStrips_new_name, (PropertyRNA *)&rna_NlaStrips_new_strip}},
	"new", 2076, "Add a new Action-Clip strip to the track",
	NlaStrips_new_call,
	(PropertyRNA *)&rna_NlaStrips_new_strip
};

PointerPropertyRNA rna_NlaStrips_remove_strip = {
	{nullptr, nullptr,
	-1, "strip", 262144, 0, 5, 0, 0, "",
	"NLA Strip to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NlaStrip
};

FunctionRNA rna_NlaStrips_remove_func = {
	{nullptr, (FunctionRNA *)&rna_NlaStrips_new_func,
	nullptr,
	{(PropertyRNA *)&rna_NlaStrips_remove_strip, (PropertyRNA *)&rna_NlaStrips_remove_strip}},
	"remove", 2076, "Remove a NLA Strip",
	NlaStrips_remove_call,
	nullptr
};

StructRNA RNA_NlaStrips = {
	{(ContainerRNA *)&RNA_NlaStrip, (ContainerRNA *)&RNA_NlaTrack,
	nullptr,
	{(PropertyRNA *)&rna_NlaStrips_rna_properties, (PropertyRNA *)&rna_NlaStrips_rna_type}},
	"NlaStrips", nullptr, nullptr, 516, nullptr, "NLA Strips",
	"Collection of NLA Strips",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_NlaStrips_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_NlaStrips_new_func, (FunctionRNA *)&rna_NlaStrips_remove_func}
};

/* NLA Strip */
CollectionPropertyRNA rna_NlaStrip_rna_properties = {
	{(PropertyRNA *)&rna_NlaStrip_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_rna_properties_begin, NlaStrip_rna_properties_next, NlaStrip_rna_properties_end, NlaStrip_rna_properties_get, nullptr, nullptr, NlaStrip_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_NlaStrip_rna_type = {
	{(PropertyRNA *)&rna_NlaStrip_name, (PropertyRNA *)&rna_NlaStrip_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_NlaStrip_name = {
	{(PropertyRNA *)&rna_NlaStrip_type, (PropertyRNA *)&rna_NlaStrip_rna_type,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_name_get, NlaStrip_name_length, NlaStrip_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static const EnumPropertyItem rna_NlaStrip_type_items[5] = {
	{0, "CLIP", 0, "Action Clip", "NLA Strip references some Action"},
	{1, "TRANSITION", 0, "Transition", "NLA Strip \'transitions\' between adjacent strips"},
	{2, "META", 0, "Meta", "NLA Strip acts as a container for adjacent strips"},
	{3, "SOUND", 0, "Sound Clip", "NLA Strip representing a sound event for speakers"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_NlaStrip_type = {
	{(PropertyRNA *)&rna_NlaStrip_extrapolation, (PropertyRNA *)&rna_NlaStrip_name,
	-1, "type", 2, 1, 0, 4, 0, "Type",
	"Type of NLA Strip",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, type), (RawPropertyType)1, nullptr},
	NlaStrip_type_get, nullptr, nullptr, nullptr, nullptr, rna_NlaStrip_type_items, 4, 0
};

static const EnumPropertyItem rna_NlaStrip_extrapolation_items[4] = {
	{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"},
	{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"},
	{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_NlaStrip_extrapolation = {
	{(PropertyRNA *)&rna_NlaStrip_blend_type, (PropertyRNA *)&rna_NlaStrip_type,
	-1, "extrapolation", 3, 1, 0, 4, 0, "Extrapolation",
	"Action to take for gaps past the strip extents",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, extendmode), (RawPropertyType)1, nullptr},
	NlaStrip_extrapolation_get, NlaStrip_extrapolation_set, nullptr, nullptr, nullptr, rna_NlaStrip_extrapolation_items, 3, 0
};

static const EnumPropertyItem rna_NlaStrip_blend_type_items[7] = {
	{0, "REPLACE", 0, "Replace", "The strip values replace the accumulated results by amount specified by influence"},
	{4, "COMBINE", 0, "Combine", "The strip values are combined with accumulated results by appropriately using addition, multiplication, or quaternion math, based on channel type"},
	{0, "", 0, nullptr, nullptr},
	{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"},
	{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"},
	{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_NlaStrip_blend_type = {
	{(PropertyRNA *)&rna_NlaStrip_frame_start, (PropertyRNA *)&rna_NlaStrip_extrapolation,
	-1, "blend_type", 3, 1, 0, 4, 0, "Blending",
	"Method used for combining strip\'s result with accumulated result",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, blendmode), (RawPropertyType)1, nullptr},
	NlaStrip_blend_type_get, NlaStrip_blend_type_set, nullptr, nullptr, nullptr, rna_NlaStrip_blend_type_items, 6, 0
};

FloatPropertyRNA rna_NlaStrip_frame_start = {
	{(PropertyRNA *)&rna_NlaStrip_frame_end, (PropertyRNA *)&rna_NlaStrip_blend_type,
	-1, "frame_start", 3, 3, 0, 0, 0, "Start Frame",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_frame_start_get, NlaStrip_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_frame_end = {
	{(PropertyRNA *)&rna_NlaStrip_frame_start_raw, (PropertyRNA *)&rna_NlaStrip_frame_start,
	-1, "frame_end", 3, 3, 0, 0, 0, "End Frame",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_frame_end_get, NlaStrip_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_frame_start_raw = {
	{(PropertyRNA *)&rna_NlaStrip_frame_end_raw, (PropertyRNA *)&rna_NlaStrip_frame_end,
	-1, "frame_start_raw", 3, 1, 0, 4, 0, "Start Frame (raw value)",
	"Same as frame_start, except that any value can be set, including ones that create an invalid state",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, start), (RawPropertyType)5, nullptr},
	NlaStrip_frame_start_raw_get, NlaStrip_frame_start_raw_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_frame_end_raw = {
	{(PropertyRNA *)&rna_NlaStrip_frame_start_ui, (PropertyRNA *)&rna_NlaStrip_frame_start_raw,
	-1, "frame_end_raw", 3, 1, 0, 4, 0, "End Frame (raw value)",
	"Same as frame_end, except that any value can be set, including ones that create an invalid state",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, end), (RawPropertyType)5, nullptr},
	NlaStrip_frame_end_raw_get, NlaStrip_frame_end_raw_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_frame_start_ui = {
	{(PropertyRNA *)&rna_NlaStrip_frame_end_ui, (PropertyRNA *)&rna_NlaStrip_frame_end_raw,
	-1, "frame_start_ui", 3, 3, 0, 0, 0, "Start Frame (manipulated from UI)",
	"Start frame of the NLA strip. Note: changing this value also updates the value of the strip\'s end frame. If only the start frame should be changed, see the \"frame_start\" property instead",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_frame_start_ui_get, NlaStrip_frame_start_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_frame_end_ui = {
	{(PropertyRNA *)&rna_NlaStrip_blend_in, (PropertyRNA *)&rna_NlaStrip_frame_start_ui,
	-1, "frame_end_ui", 3, 3, 0, 0, 0, "End Frame (manipulated from UI)",
	"End frame of the NLA strip. Note: changing this value also updates the value of the strip\'s repeats or its action\'s end frame. If only the end frame should be changed, see the \"frame_end\" property instead",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_frame_end_ui_get, NlaStrip_frame_end_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_blend_in = {
	{(PropertyRNA *)&rna_NlaStrip_blend_out, (PropertyRNA *)&rna_NlaStrip_frame_end_ui,
	-1, "blend_in", 3, 1, 0, 0, 0, "Blend In",
	"Number of frames at start of strip to fade in influence",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_blend_in_get, NlaStrip_blend_in_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_blend_out = {
	{(PropertyRNA *)&rna_NlaStrip_use_auto_blend, (PropertyRNA *)&rna_NlaStrip_blend_in,
	-1, "blend_out", 3, 1, 0, 0, 0, "Blend Out",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_blend_out_get, NlaStrip_blend_out_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_NlaStrip_use_auto_blend = {
	{(PropertyRNA *)&rna_NlaStrip_action, (PropertyRNA *)&rna_NlaStrip_blend_out,
	-1, "use_auto_blend", 3, 1, 0, 0, 0, "Auto Blend In/Out",
	"Number of frames for Blending In/Out is automatically determined from overlapping strips",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_use_auto_blend_get, NlaStrip_use_auto_blend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_NlaStrip_action = {
	{(PropertyRNA *)&rna_NlaStrip_action_frame_start, (PropertyRNA *)&rna_NlaStrip_use_auto_blend,
	-1, "action", 8388801, 1, 0, 0, 0, "Action",
	"Action referenced by this strip",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_dependency_update, 256442369, rna_NlaStrip_action_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_action_get, NlaStrip_action_set, nullptr, rna_Action_id_poll,&RNA_Action
};

FloatPropertyRNA rna_NlaStrip_action_frame_start = {
	{(PropertyRNA *)&rna_NlaStrip_action_frame_end, (PropertyRNA *)&rna_NlaStrip_action,
	-1, "action_frame_start", 3, 1, 0, 0, 0, "Action Start Frame",
	"First frame from action to use",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_action_frame_start_get, NlaStrip_action_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_action_frame_end = {
	{(PropertyRNA *)&rna_NlaStrip_repeat, (PropertyRNA *)&rna_NlaStrip_action_frame_start,
	-1, "action_frame_end", 3, 1, 0, 0, 0, "Action End Frame",
	"Last frame from action to use",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_action_frame_end_get, NlaStrip_action_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_repeat = {
	{(PropertyRNA *)&rna_NlaStrip_scale, (PropertyRNA *)&rna_NlaStrip_action_frame_end,
	-1, "repeat", 3, 1, 0, 0, 0, "Repeat",
	"Number of times to repeat the action range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_repeat_get, NlaStrip_repeat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 1000.0f, 0.1000000015f, 1000.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_scale = {
	{(PropertyRNA *)&rna_NlaStrip_fcurves, (PropertyRNA *)&rna_NlaStrip_repeat,
	-1, "scale", 3, 1, 0, 0, 0, "Scale",
	"Scaling factor for action",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_scale_get, NlaStrip_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1000.0f, 0.0001000000f, 1000.0f, 10.0f, 3, 1.0f, nullptr
};

CollectionPropertyRNA rna_NlaStrip_fcurves = {
	{(PropertyRNA *)&rna_NlaStrip_modifiers, (PropertyRNA *)&rna_NlaStrip_scale,
	-1, "fcurves", 0, 1, 0, 0, 0, "F-Curves",
	"F-Curves for controlling the strip\'s influence and timing",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_NlaStripFCurves},
	NlaStrip_fcurves_begin, NlaStrip_fcurves_next, NlaStrip_fcurves_end, NlaStrip_fcurves_get, nullptr, NlaStrip_fcurves_lookup_int, nullptr, nullptr, &RNA_FCurve
};

CollectionPropertyRNA rna_NlaStrip_modifiers = {
	{(PropertyRNA *)&rna_NlaStrip_strips, (PropertyRNA *)&rna_NlaStrip_fcurves,
	-1, "modifiers", 0, 1, 0, 0, 0, "Modifiers",
	"Modifiers affecting all the F-Curves in the referenced Action",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_modifiers_begin, NlaStrip_modifiers_next, NlaStrip_modifiers_end, NlaStrip_modifiers_get, nullptr, NlaStrip_modifiers_lookup_int, NlaStrip_modifiers_lookup_string, nullptr, &RNA_FModifier
};

CollectionPropertyRNA rna_NlaStrip_strips = {
	{(PropertyRNA *)&rna_NlaStrip_influence, (PropertyRNA *)&rna_NlaStrip_modifiers,
	-1, "strips", 0, 1, 0, 0, 0, "NLA Strips",
	"NLA Strips that this strip acts as a container for (if it is of type Meta)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_strips_begin, NlaStrip_strips_next, NlaStrip_strips_end, NlaStrip_strips_get, nullptr, NlaStrip_strips_lookup_int, NlaStrip_strips_lookup_string, nullptr, &RNA_NlaStrip
};

FloatPropertyRNA rna_NlaStrip_influence = {
	{(PropertyRNA *)&rna_NlaStrip_strip_time, (PropertyRNA *)&rna_NlaStrip_strips,
	-1, "influence", 3, 1, 0, 4, 0, "Influence",
	"Amount the strip contributes to the current result",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, influence), (RawPropertyType)5, nullptr},
	NlaStrip_influence_get, NlaStrip_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_NlaStrip_strip_time = {
	{(PropertyRNA *)&rna_NlaStrip_use_animated_influence, (PropertyRNA *)&rna_NlaStrip_influence,
	-1, "strip_time", 3, 1, 0, 4, 0, "Strip Time",
	"Frame of referenced Action to evaluate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, strip_time), (RawPropertyType)5, nullptr},
	NlaStrip_strip_time_get, NlaStrip_strip_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_NlaStrip_use_animated_influence = {
	{(PropertyRNA *)&rna_NlaStrip_use_animated_time, (PropertyRNA *)&rna_NlaStrip_strip_time,
	-1, "use_animated_influence", 3, 1, 0, 0, 0, "Animated Influence",
	"Influence setting is controlled by an F-Curve rather than automatically determined",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_use_animated_influence_get, NlaStrip_use_animated_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_use_animated_time = {
	{(PropertyRNA *)&rna_NlaStrip_use_animated_time_cyclic, (PropertyRNA *)&rna_NlaStrip_use_animated_influence,
	-1, "use_animated_time", 3, 1, 0, 0, 0, "Animated Strip Time",
	"Strip time is controlled by an F-Curve rather than automatically determined",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_use_animated_time_get, NlaStrip_use_animated_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_use_animated_time_cyclic = {
	{(PropertyRNA *)&rna_NlaStrip_active, (PropertyRNA *)&rna_NlaStrip_use_animated_time,
	-1, "use_animated_time_cyclic", 3, 1, 0, 0, 0, "Cyclic Strip Time",
	"Cycle the animated time within the action start and end",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_use_animated_time_cyclic_get, NlaStrip_use_animated_time_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_active = {
	{(PropertyRNA *)&rna_NlaStrip_select, (PropertyRNA *)&rna_NlaStrip_use_animated_time_cyclic,
	-1, "active", 2, 1, 0, 0, 0, "Active",
	"NLA Strip is active",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_active_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_select = {
	{(PropertyRNA *)&rna_NlaStrip_mute, (PropertyRNA *)&rna_NlaStrip_active,
	-1, "select", 3, 1, 0, 0, 0, "Select",
	"NLA Strip is selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256442368, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_select_get, NlaStrip_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_mute = {
	{(PropertyRNA *)&rna_NlaStrip_use_reverse, (PropertyRNA *)&rna_NlaStrip_select,
	-1, "mute", 4355, 1, 0, 0, 0, "Mute",
	"Disable NLA Strip evaluation",
	39, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_mute_get, NlaStrip_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_use_reverse = {
	{(PropertyRNA *)&rna_NlaStrip_use_sync_length, (PropertyRNA *)&rna_NlaStrip_mute,
	-1, "use_reverse", 3, 1, 0, 0, 0, "Reversed",
	"NLA Strip is played back in reverse order (only when timing is automatically determined)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_use_reverse_get, NlaStrip_use_reverse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_NlaStrip_use_sync_length = {
	{nullptr, (PropertyRNA *)&rna_NlaStrip_use_reverse,
	-1, "use_sync_length", 3, 1, 0, 0, 0, "Sync Action Length",
	"Update range of frames referenced from action after tweaking strip and its keyframes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStrip_use_sync_length_get, NlaStrip_use_sync_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_NlaStrip = {
	{(ContainerRNA *)&RNA_NlaStripFCurves, (ContainerRNA *)&RNA_NlaStrips,
	nullptr,
	{(PropertyRNA *)&rna_NlaStrip_rna_properties, (PropertyRNA *)&rna_NlaStrip_use_sync_length}},
	"NlaStrip", nullptr, nullptr, 516, nullptr, "NLA Strip",
	"A container referencing an existing Action",
	"*", 116,
	(PropertyRNA *)&rna_NlaStrip_name, (PropertyRNA *)&rna_NlaStrip_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_NlaStrip_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* NLA-Strip F-Curves */
CollectionPropertyRNA rna_NlaStripFCurves_rna_properties = {
	{(PropertyRNA *)&rna_NlaStripFCurves_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStripFCurves_rna_properties_begin, NlaStripFCurves_rna_properties_next, NlaStripFCurves_rna_properties_end, NlaStripFCurves_rna_properties_get, nullptr, nullptr, NlaStripFCurves_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_NlaStripFCurves_rna_type = {
	{nullptr, (PropertyRNA *)&rna_NlaStripFCurves_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	NlaStripFCurves_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_NlaStripFCurves_find_data_path = {
	{(PropertyRNA *)&rna_NlaStripFCurves_find_index, nullptr,
	-1, "data_path", 262145, 1, 1, 0, 0, "Data Path",
	"F-Curve data path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_NlaStripFCurves_find_index = {
	{(PropertyRNA *)&rna_NlaStripFCurves_find_fcurve, (PropertyRNA *)&rna_NlaStripFCurves_find_data_path,
	-1, "index", 3, 1, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_NlaStripFCurves_find_fcurve = {
	{nullptr, (PropertyRNA *)&rna_NlaStripFCurves_find_index,
	-1, "fcurve", 8388608, 1, 2, 0, 0, "",
	"The found F-Curve, or None if it doesn\'t exist",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FCurve
};

FunctionRNA rna_NlaStripFCurves_find_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_NlaStripFCurves_find_data_path, (PropertyRNA *)&rna_NlaStripFCurves_find_fcurve}},
	"find", 16, "Find an F-Curve. Note that this function performs a linear scan of all F-Curves in the NLA strip.",
	NlaStripFCurves_find_call,
	(PropertyRNA *)&rna_NlaStripFCurves_find_fcurve
};

StructRNA RNA_NlaStripFCurves = {
	{(ContainerRNA *)&RNA_Node, (ContainerRNA *)&RNA_NlaStrip,
	nullptr,
	{(PropertyRNA *)&rna_NlaStripFCurves_rna_properties, (PropertyRNA *)&rna_NlaStripFCurves_rna_type}},
	"NlaStripFCurves", nullptr, nullptr, 516, nullptr, "NLA-Strip F-Curves",
	"Collection of NLA strip F-Curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_NlaStripFCurves_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_NlaStripFCurves_find_func, (FunctionRNA *)&rna_NlaStripFCurves_find_func}
};

