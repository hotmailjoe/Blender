
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

#include "rna_movieclip.cc"

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

RNA_EXTERN_C StringPropertyRNA rna_MovieClip_filepath;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClip_tracking;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClip_proxy;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClip_use_proxy;
RNA_EXTERN_C IntPropertyRNA rna_MovieClip_size;
RNA_EXTERN_C FloatPropertyRNA rna_MovieClip_display_aspect;
RNA_EXTERN_C EnumPropertyRNA rna_MovieClip_source;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClip_grease_pencil;
RNA_EXTERN_C IntPropertyRNA rna_MovieClip_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_MovieClip_frame_offset;
RNA_EXTERN_C IntPropertyRNA rna_MovieClip_frame_duration;
RNA_EXTERN_C FloatPropertyRNA rna_MovieClip_fps;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClip_colorspace_settings;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClip_animation_data;

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


extern FunctionRNA rna_MovieClip_metadata_func;
extern PointerPropertyRNA rna_MovieClip_metadata_metadata;



RNA_EXTERN_C CollectionPropertyRNA rna_MovieClipProxy_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClipProxy_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_25;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_50;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_75;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_100;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_record_run;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_free_run;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipProxy_build_free_run_rec_date;
RNA_EXTERN_C IntPropertyRNA rna_MovieClipProxy_quality;
RNA_EXTERN_C EnumPropertyRNA rna_MovieClipProxy_timecode;
RNA_EXTERN_C StringPropertyRNA rna_MovieClipProxy_directory;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieClipUser_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClipUser_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MovieClipUser_frame_current;
RNA_EXTERN_C EnumPropertyRNA rna_MovieClipUser_proxy_render_size;
RNA_EXTERN_C BoolPropertyRNA rna_MovieClipUser_use_render_undistorted;


RNA_EXTERN_C CollectionPropertyRNA rna_MovieClipScopes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MovieClipScopes_rna_type;

RNA_EXTERN_C void MovieClip_filepath_get(PointerRNA *ptr, char *value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int MovieClip_filepath_length(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void MovieClip_filepath_set(PointerRNA *ptr, const char *value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C PointerRNA MovieClip_tracking_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieTracking, &data->tracking);
}

RNA_EXTERN_C PointerRNA MovieClip_proxy_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieClipProxy, &data->proxy);
}

RNA_EXTERN_C bool MovieClip_use_proxy_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MovieClip_use_proxy_set(PointerRNA *ptr, bool value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C void MovieClip_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_MovieClip_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MovieClip_display_aspect_get(PointerRNA *ptr, float values[2])
{
    MovieClip *data = (MovieClip *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->aspx)[i]);
    }
}

RNA_EXTERN_C void MovieClip_display_aspect_set(PointerRNA *ptr, const float values[2])
{
    MovieClip *data = (MovieClip *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->aspx)[i] = CLAMPIS(values[i], 0.1000000015f, FLT_MAX);
    }
}

RNA_EXTERN_C int MovieClip_source_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->source);
}

RNA_EXTERN_C bool MovieClip_use_proxy_custom_directory_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MovieClip_use_proxy_custom_directory_set(PointerRNA *ptr, bool value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C PointerRNA MovieClip_grease_pencil_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

RNA_EXTERN_C void MovieClip_grease_pencil_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    MovieClip *data = (MovieClip *)(ptr->data);

    if (data->gpd) {
        id_us_min((ID *)data->gpd);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->gpd = value.data;
}

RNA_EXTERN_C int MovieClip_frame_start_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->start_frame);
}

RNA_EXTERN_C void MovieClip_frame_start_set(PointerRNA *ptr, int value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
#ifdef __cplusplus
    data->start_frame = (std::remove_reference_t<decltype(data->start_frame)>)value;
#else
    data->start_frame = value;
#endif
}

RNA_EXTERN_C int MovieClip_frame_offset_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->frame_offset);
}

RNA_EXTERN_C void MovieClip_frame_offset_set(PointerRNA *ptr, int value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
#ifdef __cplusplus
    data->frame_offset = (std::remove_reference_t<decltype(data->frame_offset)>)value;
#else
    data->frame_offset = value;
#endif
}

RNA_EXTERN_C int MovieClip_frame_duration_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->len);
}

RNA_EXTERN_C float MovieClip_fps_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MovieClip_fps_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA MovieClip_colorspace_settings_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

RNA_EXTERN_C PointerRNA MovieClip_animation_data_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MovieClipProxy_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieClipProxy_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieClipProxy_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipProxy_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieClipProxy_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieClipProxy_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieClipProxy_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieClipProxy_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieClipProxy_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool MovieClipProxy_build_25_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_25_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 1; }
    else { data->build_size_flag &= ~1; }
}

RNA_EXTERN_C bool MovieClipProxy_build_50_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 2) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_50_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 2; }
    else { data->build_size_flag &= ~2; }
}

RNA_EXTERN_C bool MovieClipProxy_build_75_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 4) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_75_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 4; }
    else { data->build_size_flag &= ~4; }
}

RNA_EXTERN_C bool MovieClipProxy_build_100_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 8) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_100_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 8; }
    else { data->build_size_flag &= ~8; }
}

RNA_EXTERN_C bool MovieClipProxy_build_undistorted_25_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 16) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_undistorted_25_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 16; }
    else { data->build_size_flag &= ~16; }
}

RNA_EXTERN_C bool MovieClipProxy_build_undistorted_50_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 32) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_undistorted_50_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 32; }
    else { data->build_size_flag &= ~32; }
}

RNA_EXTERN_C bool MovieClipProxy_build_undistorted_75_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 64) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_undistorted_75_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 64; }
    else { data->build_size_flag &= ~64; }
}

RNA_EXTERN_C bool MovieClipProxy_build_undistorted_100_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 128) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_undistorted_100_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 128; }
    else { data->build_size_flag &= ~128; }
}

RNA_EXTERN_C bool MovieClipProxy_build_record_run_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_tc_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_record_run_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_tc_flag |= 1; }
    else { data->build_tc_flag &= ~1; }
}

RNA_EXTERN_C bool MovieClipProxy_build_free_run_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_tc_flag) & 2) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_free_run_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_tc_flag |= 2; }
    else { data->build_tc_flag &= ~2; }
}

RNA_EXTERN_C bool MovieClipProxy_build_free_run_rec_date_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_tc_flag) & 4) != 0);
}

RNA_EXTERN_C void MovieClipProxy_build_free_run_rec_date_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_tc_flag |= 4; }
    else { data->build_tc_flag &= ~4; }
}

RNA_EXTERN_C int MovieClipProxy_quality_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (int)(data->quality);
}

RNA_EXTERN_C void MovieClipProxy_quality_set(PointerRNA *ptr, int value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
#ifdef __cplusplus
    data->quality = (std::remove_reference_t<decltype(data->quality)>)CLAMPIS(value, 0, 32767);
#else
    data->quality = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C int MovieClipProxy_timecode_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (int)(data->tc);
}

RNA_EXTERN_C void MovieClipProxy_timecode_set(PointerRNA *ptr, int value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
#ifdef __cplusplus
    data->tc = (std::remove_reference_t<decltype(data->tc)>)value;
#else
    data->tc = value;
#endif
}

RNA_EXTERN_C void MovieClipProxy_directory_get(PointerRNA *ptr, char *value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    BLI_assert(strlen(data->dir) < 768);
    strcpy(value, data->dir);
}

RNA_EXTERN_C int MovieClipProxy_directory_length(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return strlen(data->dir);
}

RNA_EXTERN_C void MovieClipProxy_directory_set(PointerRNA *ptr, const char *value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    BLI_strncpy(data->dir, value, 768);
}

static PointerRNA MovieClipUser_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieClipUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieClipUser_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipUser_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieClipUser_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieClipUser_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieClipUser_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieClipUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieClipUser_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MovieClipUser_frame_current_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (int)(data->framenr);
}

RNA_EXTERN_C void MovieClipUser_frame_current_set(PointerRNA *ptr, int value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
#ifdef __cplusplus
    data->framenr = (std::remove_reference_t<decltype(data->framenr)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->framenr = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int MovieClipUser_proxy_render_size_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (int)(data->render_size);
}

RNA_EXTERN_C void MovieClipUser_proxy_render_size_set(PointerRNA *ptr, int value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
#ifdef __cplusplus
    data->render_size = (std::remove_reference_t<decltype(data->render_size)>)value;
#else
    data->render_size = value;
#endif
}

RNA_EXTERN_C bool MovieClipUser_use_render_undistorted_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (((data->render_flag) & 1) != 0);
}

RNA_EXTERN_C void MovieClipUser_use_render_undistorted_set(PointerRNA *ptr, bool value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    if (value) { data->render_flag |= 1; }
    else { data->render_flag &= ~1; }
}

static PointerRNA MovieClipScopes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MovieClipScopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieClipScopes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipScopes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieClipScopes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieClipScopes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MovieClipScopes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MovieClipScopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MovieClipScopes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C struct PointerRNA MovieClip_metadata_func(struct MovieClip *_self)
{
	return rna_MovieClip_metadata_get(_self);
}

static void MovieClip_metadata_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieClip *_self;
	struct PointerRNA metadata;
	char *_data, *_retdata;
	
	_self = (struct MovieClip *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	metadata = rna_MovieClip_metadata_get(_self);
	*((struct PointerRNA *)_retdata) = metadata;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_MovieClip_metadata_get(struct MovieClip *_self);




/* MovieClip */
StringPropertyRNA rna_MovieClip_filepath = {
	{(PropertyRNA *)&rna_MovieClip_tracking, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Filename of the movie or sequence file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_filepath_get, MovieClip_filepath_length, MovieClip_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_MovieClip_tracking = {
	{(PropertyRNA *)&rna_MovieClip_proxy, (PropertyRNA *)&rna_MovieClip_filepath,
	-1, "tracking", 8388608, 0, 0, 0, 0, "tracking",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_tracking_get, nullptr, nullptr, nullptr,&RNA_MovieTracking
};

PointerPropertyRNA rna_MovieClip_proxy = {
	{(PropertyRNA *)&rna_MovieClip_use_proxy, (PropertyRNA *)&rna_MovieClip_tracking,
	-1, "proxy", 8388608, 0, 0, 0, 0, "proxy",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_proxy_get, nullptr, nullptr, nullptr,&RNA_MovieClipProxy
};

BoolPropertyRNA rna_MovieClip_use_proxy = {
	{(PropertyRNA *)&rna_MovieClip_size, (PropertyRNA *)&rna_MovieClip_proxy,
	-1, "use_proxy", 1, 0, 0, 0, 0, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this clip",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MovieClip_use_proxy_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_use_proxy_get, MovieClip_use_proxy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static int rna_MovieClip_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MovieClip_size = {
	{(PropertyRNA *)&rna_MovieClip_display_aspect, (PropertyRNA *)&rna_MovieClip_use_proxy,
	-1, "size", 2, 0, 0, 0, 0, "Size",
	"Width and height in pixels, zero when image data can\'t be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MovieClip_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_MovieClip_size_default
};

static float rna_MovieClip_display_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_MovieClip_display_aspect = {
	{(PropertyRNA *)&rna_MovieClip_source, (PropertyRNA *)&rna_MovieClip_size,
	-1, "display_aspect", 3, 0, 0, 4, 0, "Display Aspect",
	"Display Aspect for this clip, does not affect rendering",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, aspx), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MovieClip_display_aspect_get, MovieClip_display_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 1.0f, rna_MovieClip_display_aspect_default
};

static const EnumPropertyItem rna_MovieClip_source_items[3] = {
	{1, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"},
	{2, "MOVIE", 0, "Movie File", "Movie file"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieClip_source = {
	{(PropertyRNA *)&rna_MovieClip_use_proxy_custom_directory, (PropertyRNA *)&rna_MovieClip_display_aspect,
	-1, "source", 2, 0, 0, 4, 0, "Source",
	"Where the clip comes from",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, source), (RawPropertyType)0, nullptr},
	MovieClip_source_get, nullptr, nullptr, nullptr, nullptr, rna_MovieClip_source_items, 2, 1
};

BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_MovieClip_grease_pencil, (PropertyRNA *)&rna_MovieClip_source,
	-1, "use_proxy_custom_directory", 1, 0, 0, 0, 0, "Proxy Custom Directory",
	"Create proxy images in a custom directory (default is movie location)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_use_proxy_custom_directory_get, MovieClip_use_proxy_custom_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_MovieClip_grease_pencil = {
	{(PropertyRNA *)&rna_MovieClip_frame_start, (PropertyRNA *)&rna_MovieClip_use_proxy_custom_directory,
	-1, "grease_pencil", 8388801, 0, 0, 0, 0, "Grease Pencil",
	"Grease pencil data for this movie clip",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_grease_pencil_get, MovieClip_grease_pencil_set, nullptr, rna_GPencil_datablocks_annotations_poll,&RNA_GreasePencil
};

IntPropertyRNA rna_MovieClip_frame_start = {
	{(PropertyRNA *)&rna_MovieClip_frame_offset, (PropertyRNA *)&rna_MovieClip_grease_pencil,
	-1, "frame_start", 3, 0, 0, 4, 0, "Start Frame",
	"Global scene frame number at which this movie starts playing (affects all data associated with a clip)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, start_frame), (RawPropertyType)0, nullptr},
	MovieClip_frame_start_get, MovieClip_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 1, nullptr
};

IntPropertyRNA rna_MovieClip_frame_offset = {
	{(PropertyRNA *)&rna_MovieClip_frame_duration, (PropertyRNA *)&rna_MovieClip_frame_start,
	-1, "frame_offset", 3, 0, 0, 4, 0, "Frame Offset",
	"Offset of footage first frame relative to its file name (affects only how footage is loading, does not change data associated with a clip)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, frame_offset), (RawPropertyType)0, nullptr},
	MovieClip_frame_offset_get, MovieClip_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MovieClip_frame_duration = {
	{(PropertyRNA *)&rna_MovieClip_fps, (PropertyRNA *)&rna_MovieClip_frame_offset,
	-1, "frame_duration", 2, 0, 0, 4, 0, "Duration",
	"Detected duration of movie clip in frames",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, len), (RawPropertyType)0, nullptr},
	MovieClip_frame_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_MovieClip_fps = {
	{(PropertyRNA *)&rna_MovieClip_colorspace_settings, (PropertyRNA *)&rna_MovieClip_frame_duration,
	-1, "fps", 2, 0, 0, 0, 0, "Frame Rate",
	"Detected frame rate of the movie clip in frames per second",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_fps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_MovieClip_colorspace_settings = {
	{(PropertyRNA *)&rna_MovieClip_animation_data, (PropertyRNA *)&rna_MovieClip_fps,
	-1, "colorspace_settings", 8388608, 0, 0, 0, 0, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_colorspace_settings_get, nullptr, nullptr, nullptr,&RNA_ColorManagedInputColorspaceSettings
};

PointerPropertyRNA rna_MovieClip_animation_data = {
	{nullptr, (PropertyRNA *)&rna_MovieClip_colorspace_settings,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	MovieClip_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

PointerPropertyRNA rna_MovieClip_metadata_metadata = {
	{nullptr, nullptr,
	-1, "metadata", 8388608, 0, 6, 0, 0, "",
	"Dict-like object containing the metadata",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_IDPropertyWrapPtr
};

FunctionRNA rna_MovieClip_metadata_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MovieClip_metadata_metadata, (PropertyRNA *)&rna_MovieClip_metadata_metadata}},
	"metadata", 0, "Retrieve metadata of the movie file",
	MovieClip_metadata_call,
	(PropertyRNA *)&rna_MovieClip_metadata_metadata
};

StructRNA RNA_MovieClip = {
	{(ContainerRNA *)&RNA_MovieClipProxy, (ContainerRNA *)&RNA_WorldMistSettings,
	nullptr,
	{(PropertyRNA *)&rna_MovieClip_filepath, (PropertyRNA *)&rna_MovieClip_animation_data}},
	"MovieClip", nullptr, nullptr, 519, nullptr, "MovieClip",
	"MovieClip data-block referencing an external movie file",
	"*", 111,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_MovieClip_metadata_func, (FunctionRNA *)&rna_MovieClip_metadata_func}
};

/* Movie Clip Proxy */
CollectionPropertyRNA rna_MovieClipProxy_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipProxy_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_rna_properties_begin, MovieClipProxy_rna_properties_next, MovieClipProxy_rna_properties_end, MovieClipProxy_rna_properties_get, nullptr, nullptr, MovieClipProxy_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieClipProxy_rna_type = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_25, (PropertyRNA *)&rna_MovieClipProxy_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_MovieClipProxy_build_25 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_50, (PropertyRNA *)&rna_MovieClipProxy_rna_type,
	-1, "build_25", 1, 0, 0, 0, 0, "25%",
	"Build proxy resolution 25% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_25_get, MovieClipProxy_build_25_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_50 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_75, (PropertyRNA *)&rna_MovieClipProxy_build_25,
	-1, "build_50", 1, 0, 0, 0, 0, "50%",
	"Build proxy resolution 50% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_50_get, MovieClipProxy_build_50_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_75 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_100, (PropertyRNA *)&rna_MovieClipProxy_build_50,
	-1, "build_75", 1, 0, 0, 0, 0, "75%",
	"Build proxy resolution 75% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_75_get, MovieClipProxy_build_75_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_100 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_25, (PropertyRNA *)&rna_MovieClipProxy_build_75,
	-1, "build_100", 1, 0, 0, 0, 0, "100%",
	"Build proxy resolution 100% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_100_get, MovieClipProxy_build_100_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_50, (PropertyRNA *)&rna_MovieClipProxy_build_100,
	-1, "build_undistorted_25", 1, 0, 0, 0, 0, "25%",
	"Build proxy resolution 25% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_undistorted_25_get, MovieClipProxy_build_undistorted_25_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_75, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_25,
	-1, "build_undistorted_50", 1, 0, 0, 0, 0, "50%",
	"Build proxy resolution 50% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_undistorted_50_get, MovieClipProxy_build_undistorted_50_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_100, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_50,
	-1, "build_undistorted_75", 1, 0, 0, 0, 0, "75%",
	"Build proxy resolution 75% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_undistorted_75_get, MovieClipProxy_build_undistorted_75_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_record_run, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_75,
	-1, "build_undistorted_100", 1, 0, 0, 0, 0, "100%",
	"Build proxy resolution 100% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_undistorted_100_get, MovieClipProxy_build_undistorted_100_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_record_run = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_free_run, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_100,
	-1, "build_record_run", 1, 0, 0, 0, 0, "Rec Run",
	"Build record run time code index",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_record_run_get, MovieClipProxy_build_record_run_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_free_run = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_free_run_rec_date, (PropertyRNA *)&rna_MovieClipProxy_build_record_run,
	-1, "build_free_run", 1, 0, 0, 0, 0, "Free Run",
	"Build free run time code index",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_free_run_get, MovieClipProxy_build_free_run_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MovieClipProxy_build_free_run_rec_date = {
	{(PropertyRNA *)&rna_MovieClipProxy_quality, (PropertyRNA *)&rna_MovieClipProxy_build_free_run,
	-1, "build_free_run_rec_date", 1, 0, 0, 0, 0, "Free Run (Rec Date)",
	"Build free run time code index using Record Date/Time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_build_free_run_rec_date_get, MovieClipProxy_build_free_run_rec_date_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_MovieClipProxy_quality = {
	{(PropertyRNA *)&rna_MovieClipProxy_timecode, (PropertyRNA *)&rna_MovieClipProxy_build_free_run_rec_date,
	-1, "quality", 1, 0, 0, 4, 0, "Quality",
	"JPEG quality of proxy images",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipProxy, quality), (RawPropertyType)1, nullptr},
	MovieClipProxy_quality_get, MovieClipProxy_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 0, 32767, 1, 0, nullptr
};

static const EnumPropertyItem rna_MovieClipProxy_timecode_items[6] = {
	{0, "NONE", 0, "None", ""},
	{1, "RECORD_RUN", 0, "Record Run", "Use images in the order they are recorded"},
	{2, "FREE_RUN", 0, "Free Run", "Use global timestamp written by recording device"},
	{4, "FREE_RUN_REC_DATE", 0, "Free Run (rec date)", "Interpolate a global timestamp using the record date and time written by recording device"},
	{8, "FREE_RUN_NO_GAPS", 0, "Free Run No Gaps", "Record run, but ignore timecode, changes in framerate or dropouts"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieClipProxy_timecode = {
	{(PropertyRNA *)&rna_MovieClipProxy_directory, (PropertyRNA *)&rna_MovieClipProxy_quality,
	-1, "timecode", 1, 0, 0, 4, 0, "Timecode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipProxy, tc), (RawPropertyType)1, nullptr},
	MovieClipProxy_timecode_get, MovieClipProxy_timecode_set, nullptr, nullptr, nullptr, rna_MovieClipProxy_timecode_items, 5, 0
};

StringPropertyRNA rna_MovieClipProxy_directory = {
	{nullptr, (PropertyRNA *)&rna_MovieClipProxy_timecode,
	-1, "directory", 262145, 0, 0, 0, 0, "Directory",
	"Location to store the proxy files",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_DIRPATH | (int)PROP_UNIT_NONE), nullptr, 0, {768, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipProxy_directory_get, MovieClipProxy_directory_length, MovieClipProxy_directory_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 768, ""
};

StructRNA RNA_MovieClipProxy = {
	{(ContainerRNA *)&RNA_MovieClipUser, (ContainerRNA *)&RNA_MovieClip,
	nullptr,
	{(PropertyRNA *)&rna_MovieClipProxy_rna_properties, (PropertyRNA *)&rna_MovieClipProxy_directory}},
	"MovieClipProxy", nullptr, nullptr, 516, nullptr, "Movie Clip Proxy",
	"Proxy parameters for a movie clip",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieClipProxy_rna_properties,
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

/* Movie Clip User */
CollectionPropertyRNA rna_MovieClipUser_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipUser_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipUser_rna_properties_begin, MovieClipUser_rna_properties_next, MovieClipUser_rna_properties_end, MovieClipUser_rna_properties_get, nullptr, nullptr, MovieClipUser_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieClipUser_rna_type = {
	{(PropertyRNA *)&rna_MovieClipUser_frame_current, (PropertyRNA *)&rna_MovieClipUser_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipUser_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MovieClipUser_frame_current = {
	{(PropertyRNA *)&rna_MovieClipUser_proxy_render_size, (PropertyRNA *)&rna_MovieClipUser_rna_type,
	-1, "frame_current", 3, 1, 0, 4, 0, "Current Frame",
	"Current frame number in movie or image sequence",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipUser, framenr), (RawPropertyType)0, nullptr},
	MovieClipUser_frame_current_get, MovieClipUser_frame_current_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 1, nullptr
};

static const EnumPropertyItem rna_MovieClipUser_proxy_render_size_items[6] = {
	{1, "PROXY_25", 0, "25%", ""},
	{2, "PROXY_50", 0, "50%", ""},
	{3, "PROXY_75", 0, "75%", ""},
	{4, "PROXY_100", 0, "100%", ""},
	{0, "FULL", 0, "None, full render", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MovieClipUser_proxy_render_size = {
	{(PropertyRNA *)&rna_MovieClipUser_use_render_undistorted, (PropertyRNA *)&rna_MovieClipUser_frame_current,
	-1, "proxy_render_size", 3, 1, 0, 4, 0, "Proxy Render Size",
	"Display preview using full resolution or different proxy resolutions",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MovieClipUser_proxy_render_settings_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipUser, render_size), (RawPropertyType)1, nullptr},
	MovieClipUser_proxy_render_size_get, MovieClipUser_proxy_render_size_set, nullptr, nullptr, nullptr, rna_MovieClipUser_proxy_render_size_items, 5, 0
};

BoolPropertyRNA rna_MovieClipUser_use_render_undistorted = {
	{nullptr, (PropertyRNA *)&rna_MovieClipUser_proxy_render_size,
	-1, "use_render_undistorted", 3, 1, 0, 0, 0, "Render Undistorted",
	"Render preview using undistorted proxy",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MovieClipUser_proxy_render_settings_update, 355663872, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipUser_use_render_undistorted_get, MovieClipUser_use_render_undistorted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MovieClipUser = {
	{(ContainerRNA *)&RNA_MovieClipScopes, (ContainerRNA *)&RNA_MovieClipProxy,
	nullptr,
	{(PropertyRNA *)&rna_MovieClipUser_rna_properties, (PropertyRNA *)&rna_MovieClipUser_use_render_undistorted}},
	"MovieClipUser", nullptr, nullptr, 516, nullptr, "Movie Clip User",
	"Parameters defining how a MovieClip data-block is used by another data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieClipUser_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MovieClipUser_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* MovieClipScopes */
CollectionPropertyRNA rna_MovieClipScopes_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipScopes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipScopes_rna_properties_begin, MovieClipScopes_rna_properties_next, MovieClipScopes_rna_properties_end, MovieClipScopes_rna_properties_get, nullptr, nullptr, MovieClipScopes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MovieClipScopes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MovieClipScopes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MovieClipScopes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_MovieClipScopes = {
	{(ContainerRNA *)&RNA_MovieTrackingSettings, (ContainerRNA *)&RNA_MovieClipUser,
	nullptr,
	{(PropertyRNA *)&rna_MovieClipScopes_rna_properties, (PropertyRNA *)&rna_MovieClipScopes_rna_type}},
	"MovieClipScopes", nullptr, nullptr, 516, nullptr, "MovieClipScopes",
	"Scopes for statistical view of a movie clip",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MovieClipScopes_rna_properties,
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

