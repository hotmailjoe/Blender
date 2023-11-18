
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

#include "rna_cachefile.cc"

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

RNA_EXTERN_C StringPropertyRNA rna_CacheFile_filepath;
RNA_EXTERN_C BoolPropertyRNA rna_CacheFile_is_sequence;
RNA_EXTERN_C BoolPropertyRNA rna_CacheFile_use_render_procedural;
RNA_EXTERN_C BoolPropertyRNA rna_CacheFile_override_frame;
RNA_EXTERN_C FloatPropertyRNA rna_CacheFile_frame;
RNA_EXTERN_C FloatPropertyRNA rna_CacheFile_frame_offset;
RNA_EXTERN_C BoolPropertyRNA rna_CacheFile_use_prefetch;
RNA_EXTERN_C IntPropertyRNA rna_CacheFile_prefetch_cache_size;
RNA_EXTERN_C EnumPropertyRNA rna_CacheFile_forward_axis;
RNA_EXTERN_C EnumPropertyRNA rna_CacheFile_up_axis;
RNA_EXTERN_C FloatPropertyRNA rna_CacheFile_scale;
RNA_EXTERN_C CollectionPropertyRNA rna_CacheFile_object_paths;
RNA_EXTERN_C StringPropertyRNA rna_CacheFile_velocity_name;
RNA_EXTERN_C EnumPropertyRNA rna_CacheFile_velocity_unit;
RNA_EXTERN_C CollectionPropertyRNA rna_CacheFile_layers;
RNA_EXTERN_C IntPropertyRNA rna_CacheFile_active_index;
RNA_EXTERN_C PointerPropertyRNA rna_CacheFile_animation_data;

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



RNA_EXTERN_C CollectionPropertyRNA rna_CacheFileLayers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CacheFileLayers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_CacheFileLayers_active;

extern FunctionRNA rna_CacheFileLayers_new_func;
extern StringPropertyRNA rna_CacheFileLayers_new_filepath;
extern PointerPropertyRNA rna_CacheFileLayers_new_layer;

extern FunctionRNA rna_CacheFileLayers_remove_func;
extern PointerPropertyRNA rna_CacheFileLayers_remove_layer;



RNA_EXTERN_C CollectionPropertyRNA rna_CacheObjectPaths_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CacheObjectPaths_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_CacheObjectPath_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CacheObjectPath_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_CacheObjectPath_path;


RNA_EXTERN_C CollectionPropertyRNA rna_CacheFileLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CacheFileLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_CacheFileLayer_filepath;
RNA_EXTERN_C BoolPropertyRNA rna_CacheFileLayer_hide_layer;

RNA_EXTERN_C void CacheFile_filepath_get(PointerRNA *ptr, char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int CacheFile_filepath_length(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void CacheFile_filepath_set(PointerRNA *ptr, const char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C bool CacheFile_is_sequence_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (bool)(data->is_sequence);
}

RNA_EXTERN_C void CacheFile_is_sequence_set(PointerRNA *ptr, bool value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->is_sequence = (std::remove_reference_t<decltype(data->is_sequence)>)value;
#else
    data->is_sequence = value;
#endif
}

RNA_EXTERN_C bool CacheFile_use_render_procedural_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (bool)(data->use_render_procedural);
}

RNA_EXTERN_C void CacheFile_use_render_procedural_set(PointerRNA *ptr, bool value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->use_render_procedural = (std::remove_reference_t<decltype(data->use_render_procedural)>)value;
#else
    data->use_render_procedural = value;
#endif
}

RNA_EXTERN_C bool CacheFile_override_frame_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (bool)(data->override_frame);
}

RNA_EXTERN_C void CacheFile_override_frame_set(PointerRNA *ptr, bool value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->override_frame = (std::remove_reference_t<decltype(data->override_frame)>)value;
#else
    data->override_frame = value;
#endif
}

RNA_EXTERN_C float CacheFile_frame_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (float)(data->frame);
}

RNA_EXTERN_C void CacheFile_frame_set(PointerRNA *ptr, float value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->frame = (std::remove_reference_t<decltype(data->frame)>)CLAMPIS(value, -1048574.0f, 1048574.0f);
#else
    data->frame = CLAMPIS(value, -1048574.0f, 1048574.0f);
#endif
}

RNA_EXTERN_C float CacheFile_frame_offset_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (float)(data->frame_offset);
}

RNA_EXTERN_C void CacheFile_frame_offset_set(PointerRNA *ptr, float value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->frame_offset = (std::remove_reference_t<decltype(data->frame_offset)>)CLAMPIS(value, -1048574.0f, 1048574.0f);
#else
    data->frame_offset = CLAMPIS(value, -1048574.0f, 1048574.0f);
#endif
}

RNA_EXTERN_C bool CacheFile_use_prefetch_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (bool)(data->use_prefetch);
}

RNA_EXTERN_C void CacheFile_use_prefetch_set(PointerRNA *ptr, bool value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->use_prefetch = (std::remove_reference_t<decltype(data->use_prefetch)>)value;
#else
    data->use_prefetch = value;
#endif
}

RNA_EXTERN_C int CacheFile_prefetch_cache_size_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->prefetch_cache_size);
}

RNA_EXTERN_C void CacheFile_prefetch_cache_size_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->prefetch_cache_size = (std::remove_reference_t<decltype(data->prefetch_cache_size)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->prefetch_cache_size = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C int CacheFile_forward_axis_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->forward_axis);
}

RNA_EXTERN_C void CacheFile_forward_axis_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->forward_axis = (std::remove_reference_t<decltype(data->forward_axis)>)value;
#else
    data->forward_axis = value;
#endif
}

RNA_EXTERN_C int CacheFile_up_axis_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->up_axis);
}

RNA_EXTERN_C void CacheFile_up_axis_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->up_axis = (std::remove_reference_t<decltype(data->up_axis)>)value;
#else
    data->up_axis = value;
#endif
}

RNA_EXTERN_C float CacheFile_scale_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (float)(data->scale);
}

RNA_EXTERN_C void CacheFile_scale_set(PointerRNA *ptr, float value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->scale = (std::remove_reference_t<decltype(data->scale)>)CLAMPIS(value, 0.0001000000f, 1000.0f);
#else
    data->scale = CLAMPIS(value, 0.0001000000f, 1000.0f);
#endif
}

static PointerRNA CacheFile_object_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CacheObjectPath, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void CacheFile_object_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CacheFile_object_paths;

    rna_CacheFile_object_paths_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheFile_object_paths_get(iter);
    }
}

RNA_EXTERN_C void CacheFile_object_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = CacheFile_object_paths_get(iter);
    }
}

RNA_EXTERN_C void CacheFile_object_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CacheFile_object_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    CacheFile_object_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = CacheFile_object_paths_get(&iter); }
    }

    CacheFile_object_paths_end(&iter);

    return found;
}

RNA_EXTERN_C int CacheObjectPath_path_length(PointerRNA *);
RNA_EXTERN_C void CacheObjectPath_path_get(PointerRNA *, char *);

RNA_EXTERN_C int CacheFile_object_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    CacheFile_object_paths_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = CacheObjectPath_path_length(&iter.ptr);
            if (namelen < 1024) {
                CacheObjectPath_path_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                CacheObjectPath_path_get(&iter.ptr, name);
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
        CacheFile_object_paths_next(&iter);
    }
    CacheFile_object_paths_end(&iter);

    return found;
}

RNA_EXTERN_C void CacheFile_velocity_name_get(PointerRNA *ptr, char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_assert(strlen(data->velocity_name) < 64);
    strcpy(value, data->velocity_name);
}

RNA_EXTERN_C int CacheFile_velocity_name_length(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return strlen(data->velocity_name);
}

RNA_EXTERN_C void CacheFile_velocity_name_set(PointerRNA *ptr, const char *value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    BLI_strncpy_utf8(data->velocity_name, value, 64);
}

RNA_EXTERN_C int CacheFile_velocity_unit_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return (int)(data->velocity_unit);
}

RNA_EXTERN_C void CacheFile_velocity_unit_set(PointerRNA *ptr, int value)
{
    CacheFile *data = (CacheFile *)(ptr->data);
#ifdef __cplusplus
    data->velocity_unit = (std::remove_reference_t<decltype(data->velocity_unit)>)value;
#else
    data->velocity_unit = value;
#endif
}

static PointerRNA CacheFile_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CacheFileLayer, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void CacheFile_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CacheFile_layers;

    rna_iterator_listbase_begin(iter, &data->layers, nullptr);

    if (iter->valid) {
        iter->ptr = CacheFile_layers_get(iter);
    }
}

RNA_EXTERN_C void CacheFile_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = CacheFile_layers_get(iter);
    }
}

RNA_EXTERN_C void CacheFile_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CacheFile_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    CacheFile_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = CacheFile_layers_get(&iter); }
    }

    CacheFile_layers_end(&iter);

    return found;
}

RNA_EXTERN_C int CacheFile_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CacheFile_active_layer_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void CacheFile_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_CacheFile_active_layer_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA CacheFile_animation_data_get(PointerRNA *ptr)
{
    CacheFile *data = (CacheFile *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA CacheFileLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CacheFileLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CacheFileLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheFileLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheFileLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CacheFileLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheFileLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CacheFileLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CacheFileLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA CacheFileLayers_active_get(PointerRNA *ptr)
{
    return rna_CacheFile_active_layer_get(ptr);
}

RNA_EXTERN_C void CacheFileLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_CacheFile_active_layer_set(ptr, value, reports);
}

static PointerRNA CacheObjectPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CacheObjectPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CacheObjectPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheObjectPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheObjectPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CacheObjectPaths_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheObjectPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CacheObjectPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CacheObjectPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CacheObjectPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CacheObjectPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CacheObjectPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheObjectPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheObjectPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CacheObjectPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheObjectPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CacheObjectPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CacheObjectPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void CacheObjectPath_path_get(PointerRNA *ptr, char *value)
{
    CacheObjectPath *data = (CacheObjectPath *)(ptr->data);
    BLI_assert(strlen(data->path) < 4096);
    strcpy(value, data->path);
}

RNA_EXTERN_C int CacheObjectPath_path_length(PointerRNA *ptr)
{
    CacheObjectPath *data = (CacheObjectPath *)(ptr->data);
    return strlen(data->path);
}

RNA_EXTERN_C void CacheObjectPath_path_set(PointerRNA *ptr, const char *value)
{
    CacheObjectPath *data = (CacheObjectPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 4096);
}

static PointerRNA CacheFileLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CacheFileLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CacheFileLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CacheFileLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheFileLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CacheFileLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CacheFileLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CacheFileLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CacheFileLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void CacheFileLayer_filepath_get(PointerRNA *ptr, char *value)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int CacheFileLayer_filepath_length(PointerRNA *ptr)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void CacheFileLayer_filepath_set(PointerRNA *ptr, const char *value)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C bool CacheFileLayer_hide_layer_get(PointerRNA *ptr)
{
    CacheFileLayer *data = (CacheFileLayer *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CacheFileLayer_hide_layer_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CacheFileLayer_hidden_flag_set;
    fn(ptr, value);
}


RNA_EXTERN_C struct CacheFileLayer *CacheFileLayers_new_func(struct CacheFile *_self, bContext *C, ReportList *reports, const char * filepath)
{
	return rna_CacheFile_layer_new(_self, C, reports, filepath);
}

static void CacheFileLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CacheFile *_self;
	const char * filepath;
	struct CacheFileLayer *layer;
	char *_data, *_retdata;
	
	_self = (struct CacheFile *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_CacheFile_layer_new(_self, C, reports, filepath);
	*((struct CacheFileLayer **)_retdata) = layer;
}

RNA_EXTERN_C void CacheFileLayers_remove_func(struct CacheFile *_self, bContext *C, struct PointerRNA *layer)
{
	rna_CacheFile_layer_remove(_self, C, layer);
}

static void CacheFileLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CacheFile *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct CacheFile *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_CacheFile_layer_remove(_self, C, layer);
}

/* Repeated prototypes to detect errors */

struct CacheFileLayer *rna_CacheFile_layer_new(struct CacheFile *_self, bContext *C, ReportList *reports, const char * filepath);
void rna_CacheFile_layer_remove(struct CacheFile *_self, bContext *C, struct PointerRNA *layer);




/* CacheFile */
StringPropertyRNA rna_CacheFile_filepath = {
	{(PropertyRNA *)&rna_CacheFile_is_sequence, nullptr,
	-1, "filepath", 262145, 1, 0, 0, 0, "File Path",
	"Path to external displacements file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFile_filepath_get, CacheFile_filepath_length, CacheFile_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

BoolPropertyRNA rna_CacheFile_is_sequence = {
	{(PropertyRNA *)&rna_CacheFile_use_render_procedural, (PropertyRNA *)&rna_CacheFile_filepath,
	-1, "is_sequence", 3, 1, 0, 4, 0, "Sequence",
	"Whether the cache is separated in a series of files",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, is_sequence), (RawPropertyType)2, nullptr},
	CacheFile_is_sequence_get, CacheFile_is_sequence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CacheFile_use_render_procedural = {
	{(PropertyRNA *)&rna_CacheFile_override_frame, (PropertyRNA *)&rna_CacheFile_is_sequence,
	-1, "use_render_procedural", 3, 1, 0, 4, 0, "Use Render Engine Procedural",
	"Display boxes in the viewport as placeholders for the objects, Cycles will use a procedural to load the objects during viewport rendering in experimental mode, other render engines will also receive a placeholder and should take care of loading the Alembic data themselves if possible",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, use_render_procedural), (RawPropertyType)2, nullptr},
	CacheFile_use_render_procedural_get, CacheFile_use_render_procedural_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CacheFile_override_frame = {
	{(PropertyRNA *)&rna_CacheFile_frame, (PropertyRNA *)&rna_CacheFile_use_render_procedural,
	-1, "override_frame", 3, 1, 0, 4, 0, "Override Frame",
	"Whether to use a custom frame for looking up data in the cache file, instead of using the current scene frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, override_frame), (RawPropertyType)2, nullptr},
	CacheFile_override_frame_get, CacheFile_override_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_CacheFile_frame = {
	{(PropertyRNA *)&rna_CacheFile_frame_offset, (PropertyRNA *)&rna_CacheFile_override_frame,
	-1, "frame", 3, 1, 0, 4, 0, "Frame",
	"The time to use for looking up the data in the cache file, or to determine which file to use in a file sequence",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, frame), (RawPropertyType)5, nullptr},
	CacheFile_frame_get, CacheFile_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CacheFile_frame_offset = {
	{(PropertyRNA *)&rna_CacheFile_use_prefetch, (PropertyRNA *)&rna_CacheFile_frame,
	-1, "frame_offset", 3, 1, 0, 4, 0, "Frame Offset",
	"Subtracted from the current frame to use for looking up the data in the cache file, or to determine which file to use in a file sequence",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, frame_offset), (RawPropertyType)5, nullptr},
	CacheFile_frame_offset_get, CacheFile_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_CacheFile_use_prefetch = {
	{(PropertyRNA *)&rna_CacheFile_prefetch_cache_size, (PropertyRNA *)&rna_CacheFile_frame_offset,
	-1, "use_prefetch", 3, 1, 0, 4, 0, "Use Prefetch",
	"When enabled, the Cycles Procedural will preload animation data for faster updates",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, use_prefetch), (RawPropertyType)2, nullptr},
	CacheFile_use_prefetch_get, CacheFile_use_prefetch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_CacheFile_prefetch_cache_size = {
	{(PropertyRNA *)&rna_CacheFile_forward_axis, (PropertyRNA *)&rna_CacheFile_use_prefetch,
	-1, "prefetch_cache_size", 3, 1, 0, 4, 0, "Prefetch Cache Size",
	"Memory usage limit in megabytes for the Cycles Procedural cache, if the data does not fit within the limit, rendering is aborted",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, prefetch_cache_size), (RawPropertyType)0, nullptr},
	CacheFile_prefetch_cache_size_get, CacheFile_prefetch_cache_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 4096, nullptr
};

EnumPropertyRNA rna_CacheFile_forward_axis = {
	{(PropertyRNA *)&rna_CacheFile_up_axis, (PropertyRNA *)&rna_CacheFile_prefetch_cache_size,
	-1, "forward_axis", 3, 1, 0, 4, 0, "Forward",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, forward_axis), (RawPropertyType)2, nullptr},
	CacheFile_forward_axis_get, CacheFile_forward_axis_set, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
};

EnumPropertyRNA rna_CacheFile_up_axis = {
	{(PropertyRNA *)&rna_CacheFile_scale, (PropertyRNA *)&rna_CacheFile_forward_axis,
	-1, "up_axis", 3, 1, 0, 4, 0, "Up",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, up_axis), (RawPropertyType)2, nullptr},
	CacheFile_up_axis_get, CacheFile_up_axis_set, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
};

FloatPropertyRNA rna_CacheFile_scale = {
	{(PropertyRNA *)&rna_CacheFile_object_paths, (PropertyRNA *)&rna_CacheFile_up_axis,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Value by which to enlarge or shrink the object with respect to the world\'s origin (only applicable through a Transform Cache constraint)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, scale), (RawPropertyType)5, nullptr},
	CacheFile_scale_get, CacheFile_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1000.0f, 0.0001000000f, 1000.0f, 10.0f, 3, 1.0f, nullptr
};

CollectionPropertyRNA rna_CacheFile_object_paths = {
	{(PropertyRNA *)&rna_CacheFile_velocity_name, (PropertyRNA *)&rna_CacheFile_scale,
	-1, "object_paths", 0, 1, 0, 0, 0, "Object Paths",
	"Paths of the objects inside the Alembic archive",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_CacheObjectPaths},
	CacheFile_object_paths_begin, CacheFile_object_paths_next, CacheFile_object_paths_end, CacheFile_object_paths_get, nullptr, CacheFile_object_paths_lookup_int, CacheFile_object_paths_lookup_string, nullptr, &RNA_CacheObjectPath
};

StringPropertyRNA rna_CacheFile_velocity_name = {
	{(PropertyRNA *)&rna_CacheFile_velocity_unit, (PropertyRNA *)&rna_CacheFile_object_paths,
	-1, "velocity_name", 262145, 1, 0, 0, 0, "Velocity Attribute",
	"Name of the Alembic attribute used for generating motion blur data",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFile_velocity_name_get, CacheFile_velocity_name_length, CacheFile_velocity_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_CacheFile_velocity_unit = {
	{(PropertyRNA *)&rna_CacheFile_layers, (PropertyRNA *)&rna_CacheFile_velocity_name,
	-1, "velocity_unit", 1, 1, 0, 4, 0, "Velocity Unit",
	"Define how the velocity vectors are interpreted with regard to time, \'frame\' means the delta time is 1 frame, \'second\' means the delta time is 1 / FPS",
	0, "Unit",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFile_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CacheFile, velocity_unit), (RawPropertyType)2, nullptr},
	CacheFile_velocity_unit_get, CacheFile_velocity_unit_set, nullptr, nullptr, nullptr, rna_enum_velocity_unit_items, 2, 0
};

CollectionPropertyRNA rna_CacheFile_layers = {
	{(PropertyRNA *)&rna_CacheFile_active_index, (PropertyRNA *)&rna_CacheFile_velocity_unit,
	-1, "layers", 0, 0, 0, 0, 0, "Cache Layers",
	"Layers of the cache",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_CacheFileLayers},
	CacheFile_layers_begin, CacheFile_layers_next, CacheFile_layers_end, CacheFile_layers_get, nullptr, CacheFile_layers_lookup_int, nullptr, nullptr, &RNA_CacheFileLayer
};

IntPropertyRNA rna_CacheFile_active_index = {
	{(PropertyRNA *)&rna_CacheFile_animation_data, (PropertyRNA *)&rna_CacheFile_layers,
	-1, "active_index", 1, 1, 0, 0, 0, "active_index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_CacheObjectPaths},
	CacheFile_active_index_get, CacheFile_active_index_set, nullptr, nullptr, rna_CacheFile_active_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_CacheFile_animation_data = {
	{nullptr, (PropertyRNA *)&rna_CacheFile_active_index,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	CacheFile_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

StructRNA RNA_CacheFile = {
	{(ContainerRNA *)&RNA_CacheFileLayers, (ContainerRNA *)&RNA_OperatorStrokeElement,
	nullptr,
	{(PropertyRNA *)&rna_CacheFile_filepath, (PropertyRNA *)&rna_CacheFile_animation_data}},
	"CacheFile", nullptr, nullptr, 519, nullptr, "CacheFile",
	"",
	"*", 184,
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

/* Cache Layers */
CollectionPropertyRNA rna_CacheFileLayers_rna_properties = {
	{(PropertyRNA *)&rna_CacheFileLayers_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayers_rna_properties_begin, CacheFileLayers_rna_properties_next, CacheFileLayers_rna_properties_end, CacheFileLayers_rna_properties_get, nullptr, nullptr, CacheFileLayers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CacheFileLayers_rna_type = {
	{(PropertyRNA *)&rna_CacheFileLayers_active, (PropertyRNA *)&rna_CacheFileLayers_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CacheFileLayers_active = {
	{nullptr, (PropertyRNA *)&rna_CacheFileLayers_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Layer",
	"Active layer of the CacheFile",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayers_active_get, CacheFileLayers_active_set, nullptr, nullptr,&RNA_CacheFileLayer
};

StringPropertyRNA rna_CacheFileLayers_new_filepath = {
	{(PropertyRNA *)&rna_CacheFileLayers_new_layer, nullptr,
	-1, "filepath", 262145, 1, 1, 0, 0, "",
	"File path to the archive used as a layer",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "File Path"
};

PointerPropertyRNA rna_CacheFileLayers_new_layer = {
	{nullptr, (PropertyRNA *)&rna_CacheFileLayers_new_filepath,
	-1, "layer", 8388608, 1, 2, 0, 0, "",
	"Newly created layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CacheFileLayer
};

FunctionRNA rna_CacheFileLayers_new_func = {
	{(FunctionRNA *)&rna_CacheFileLayers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CacheFileLayers_new_filepath, (PropertyRNA *)&rna_CacheFileLayers_new_layer}},
	"new", 24, "Add a new layer",
	CacheFileLayers_new_call,
	(PropertyRNA *)&rna_CacheFileLayers_new_layer
};

PointerPropertyRNA rna_CacheFileLayers_remove_layer = {
	{nullptr, nullptr,
	-1, "layer", 262144, 1, 5, 0, 0, "",
	"Layer to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CacheFileLayer
};

FunctionRNA rna_CacheFileLayers_remove_func = {
	{nullptr, (FunctionRNA *)&rna_CacheFileLayers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_CacheFileLayers_remove_layer, (PropertyRNA *)&rna_CacheFileLayers_remove_layer}},
	"remove", 8, "Remove an existing layer from the cache file",
	CacheFileLayers_remove_call,
	nullptr
};

StructRNA RNA_CacheFileLayers = {
	{(ContainerRNA *)&RNA_CacheObjectPaths, (ContainerRNA *)&RNA_CacheFile,
	nullptr,
	{(PropertyRNA *)&rna_CacheFileLayers_rna_properties, (PropertyRNA *)&rna_CacheFileLayers_active}},
	"CacheFileLayers", nullptr, nullptr, 516, nullptr, "Cache Layers",
	"Collection of cache layers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CacheFileLayers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CacheFileLayers_new_func, (FunctionRNA *)&rna_CacheFileLayers_remove_func}
};

/* Object Paths */
CollectionPropertyRNA rna_CacheObjectPaths_rna_properties = {
	{(PropertyRNA *)&rna_CacheObjectPaths_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheObjectPaths_rna_properties_begin, CacheObjectPaths_rna_properties_next, CacheObjectPaths_rna_properties_end, CacheObjectPaths_rna_properties_get, nullptr, nullptr, CacheObjectPaths_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CacheObjectPaths_rna_type = {
	{nullptr, (PropertyRNA *)&rna_CacheObjectPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheObjectPaths_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_CacheObjectPaths = {
	{(ContainerRNA *)&RNA_CacheObjectPath, (ContainerRNA *)&RNA_CacheFileLayers,
	nullptr,
	{(PropertyRNA *)&rna_CacheObjectPaths_rna_properties, (PropertyRNA *)&rna_CacheObjectPaths_rna_type}},
	"CacheObjectPaths", nullptr, nullptr, 516, nullptr, "Object Paths",
	"Collection of object paths",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CacheObjectPaths_rna_properties,
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

/* Object Path */
CollectionPropertyRNA rna_CacheObjectPath_rna_properties = {
	{(PropertyRNA *)&rna_CacheObjectPath_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheObjectPath_rna_properties_begin, CacheObjectPath_rna_properties_next, CacheObjectPath_rna_properties_end, CacheObjectPath_rna_properties_get, nullptr, nullptr, CacheObjectPath_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CacheObjectPath_rna_type = {
	{(PropertyRNA *)&rna_CacheObjectPath_path, (PropertyRNA *)&rna_CacheObjectPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheObjectPath_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_CacheObjectPath_path = {
	{nullptr, (PropertyRNA *)&rna_CacheObjectPath_rna_type,
	-1, "path", 262145, 1, 0, 0, 0, "Path",
	"Object path",
	0, "File browser",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {4096, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheObjectPath_path_get, CacheObjectPath_path_length, CacheObjectPath_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 4096, ""
};

StructRNA RNA_CacheObjectPath = {
	{(ContainerRNA *)&RNA_CacheFileLayer, (ContainerRNA *)&RNA_CacheObjectPaths,
	nullptr,
	{(PropertyRNA *)&rna_CacheObjectPath_rna_properties, (PropertyRNA *)&rna_CacheObjectPath_path}},
	"CacheObjectPath", nullptr, nullptr, 516, nullptr, "Object Path",
	"Path of an object inside of an Alembic archive",
	"*", 0,
	(PropertyRNA *)&rna_CacheObjectPath_path, (PropertyRNA *)&rna_CacheObjectPath_rna_properties,
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

/* Cache Layer */
CollectionPropertyRNA rna_CacheFileLayer_rna_properties = {
	{(PropertyRNA *)&rna_CacheFileLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayer_rna_properties_begin, CacheFileLayer_rna_properties_next, CacheFileLayer_rna_properties_end, CacheFileLayer_rna_properties_get, nullptr, nullptr, CacheFileLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CacheFileLayer_rna_type = {
	{(PropertyRNA *)&rna_CacheFileLayer_filepath, (PropertyRNA *)&rna_CacheFileLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_CacheFileLayer_filepath = {
	{(PropertyRNA *)&rna_CacheFileLayer_hide_layer, (PropertyRNA *)&rna_CacheFileLayer_rna_type,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Path to the archive",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_CacheFileLayer_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayer_filepath_get, CacheFileLayer_filepath_length, CacheFileLayer_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

BoolPropertyRNA rna_CacheFileLayer_hide_layer = {
	{nullptr, (PropertyRNA *)&rna_CacheFileLayer_filepath,
	-1, "hide_layer", 4355, 0, 0, 0, 0, "Hide Layer",
	"Do not load data from this layer",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CacheFileLayer_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CacheFileLayer_hide_layer_get, CacheFileLayer_hide_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_CacheFileLayer = {
	{(ContainerRNA *)&RNA_Camera, (ContainerRNA *)&RNA_CacheObjectPath,
	nullptr,
	{(PropertyRNA *)&rna_CacheFileLayer_rna_properties, (PropertyRNA *)&rna_CacheFileLayer_hide_layer}},
	"CacheFileLayer", nullptr, nullptr, 516, nullptr, "Cache Layer",
	"Layer of the cache, used to load or override data from the first the first layer",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CacheFileLayer_rna_properties,
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

