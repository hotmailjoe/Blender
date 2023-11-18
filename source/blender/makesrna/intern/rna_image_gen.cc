
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

#include "rna_image.cc"
#include "rna_image_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_RenderSlot_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_RenderSlot_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_RenderSlot_name;

extern FunctionRNA rna_RenderSlot_clear_func;
extern PointerPropertyRNA rna_RenderSlot_clear_iuser;



RNA_EXTERN_C CollectionPropertyRNA rna_UDIMTile_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UDIMTile_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_UDIMTile_label;
RNA_EXTERN_C IntPropertyRNA rna_UDIMTile_number;
RNA_EXTERN_C IntPropertyRNA rna_UDIMTile_size;
RNA_EXTERN_C IntPropertyRNA rna_UDIMTile_channels;
RNA_EXTERN_C EnumPropertyRNA rna_UDIMTile_generated_type;
RNA_EXTERN_C IntPropertyRNA rna_UDIMTile_generated_width;
RNA_EXTERN_C IntPropertyRNA rna_UDIMTile_generated_height;
RNA_EXTERN_C BoolPropertyRNA rna_UDIMTile_use_generated_float;
RNA_EXTERN_C FloatPropertyRNA rna_UDIMTile_generated_color;


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

RNA_EXTERN_C StringPropertyRNA rna_Image_filepath;
RNA_EXTERN_C StringPropertyRNA rna_Image_filepath_raw;
RNA_EXTERN_C EnumPropertyRNA rna_Image_file_format;
RNA_EXTERN_C EnumPropertyRNA rna_Image_source;
RNA_EXTERN_C EnumPropertyRNA rna_Image_type;
RNA_EXTERN_C PointerPropertyRNA rna_Image_packed_file;
RNA_EXTERN_C CollectionPropertyRNA rna_Image_packed_files;
RNA_EXTERN_C BoolPropertyRNA rna_Image_use_view_as_render;
RNA_EXTERN_C BoolPropertyRNA rna_Image_use_deinterlace;
RNA_EXTERN_C BoolPropertyRNA rna_Image_use_multiview;
RNA_EXTERN_C BoolPropertyRNA rna_Image_is_stereo_3d;
RNA_EXTERN_C BoolPropertyRNA rna_Image_is_multiview;
RNA_EXTERN_C BoolPropertyRNA rna_Image_is_dirty;
RNA_EXTERN_C EnumPropertyRNA rna_Image_generated_type;
RNA_EXTERN_C IntPropertyRNA rna_Image_generated_width;
RNA_EXTERN_C IntPropertyRNA rna_Image_generated_height;
RNA_EXTERN_C BoolPropertyRNA rna_Image_use_generated_float;
RNA_EXTERN_C FloatPropertyRNA rna_Image_generated_color;
RNA_EXTERN_C FloatPropertyRNA rna_Image_display_aspect;
RNA_EXTERN_C IntPropertyRNA rna_Image_bindcode;
RNA_EXTERN_C CollectionPropertyRNA rna_Image_render_slots;
RNA_EXTERN_C CollectionPropertyRNA rna_Image_tiles;
RNA_EXTERN_C BoolPropertyRNA rna_Image_has_data;
RNA_EXTERN_C IntPropertyRNA rna_Image_depth;
RNA_EXTERN_C IntPropertyRNA rna_Image_size;
RNA_EXTERN_C FloatPropertyRNA rna_Image_resolution;
RNA_EXTERN_C IntPropertyRNA rna_Image_frame_duration;
RNA_EXTERN_C FloatPropertyRNA rna_Image_pixels;
RNA_EXTERN_C IntPropertyRNA rna_Image_channels;
RNA_EXTERN_C BoolPropertyRNA rna_Image_is_float;
RNA_EXTERN_C PointerPropertyRNA rna_Image_colorspace_settings;
RNA_EXTERN_C EnumPropertyRNA rna_Image_alpha_mode;
RNA_EXTERN_C BoolPropertyRNA rna_Image_use_half_precision;
RNA_EXTERN_C IntPropertyRNA rna_Image_seam_margin;
RNA_EXTERN_C EnumPropertyRNA rna_Image_views_format;
RNA_EXTERN_C PointerPropertyRNA rna_Image_stereo_3d_format;

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


extern FunctionRNA rna_Image_save_render_func;
extern StringPropertyRNA rna_Image_save_render_filepath;
extern PointerPropertyRNA rna_Image_save_render_scene;
extern IntPropertyRNA rna_Image_save_render_quality;

extern FunctionRNA rna_Image_save_func;
extern StringPropertyRNA rna_Image_save_filepath;
extern IntPropertyRNA rna_Image_save_quality;

extern FunctionRNA rna_Image_pack_func;
extern StringPropertyRNA rna_Image_pack_data;
extern IntPropertyRNA rna_Image_pack_data_len;

extern FunctionRNA rna_Image_unpack_func;
extern EnumPropertyRNA rna_Image_unpack_method;

extern FunctionRNA rna_Image_reload_func;
extern FunctionRNA rna_Image_update_func;
extern FunctionRNA rna_Image_scale_func;
extern IntPropertyRNA rna_Image_scale_width;
extern IntPropertyRNA rna_Image_scale_height;

extern FunctionRNA rna_Image_gl_touch_func;
extern IntPropertyRNA rna_Image_gl_touch_frame;
extern IntPropertyRNA rna_Image_gl_touch_layer_index;
extern IntPropertyRNA rna_Image_gl_touch_pass_index;
extern IntPropertyRNA rna_Image_gl_touch_error;

extern FunctionRNA rna_Image_gl_load_func;
extern IntPropertyRNA rna_Image_gl_load_frame;
extern IntPropertyRNA rna_Image_gl_load_layer_index;
extern IntPropertyRNA rna_Image_gl_load_pass_index;
extern IntPropertyRNA rna_Image_gl_load_error;

extern FunctionRNA rna_Image_gl_free_func;
extern FunctionRNA rna_Image_filepath_from_user_func;
extern PointerPropertyRNA rna_Image_filepath_from_user_image_user;
extern StringPropertyRNA rna_Image_filepath_from_user_filepath;

extern FunctionRNA rna_Image_buffers_free_func;


RNA_EXTERN_C CollectionPropertyRNA rna_RenderSlots_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_RenderSlots_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_RenderSlots_active_index;
RNA_EXTERN_C PointerPropertyRNA rna_RenderSlots_active;

extern FunctionRNA rna_RenderSlots_new_func;
extern StringPropertyRNA rna_RenderSlots_new_name;
extern PointerPropertyRNA rna_RenderSlots_new_result;



RNA_EXTERN_C CollectionPropertyRNA rna_UDIMTiles_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UDIMTiles_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_UDIMTiles_active_index;
RNA_EXTERN_C PointerPropertyRNA rna_UDIMTiles_active;

extern FunctionRNA rna_UDIMTiles_new_func;
extern IntPropertyRNA rna_UDIMTiles_new_tile_number;
extern StringPropertyRNA rna_UDIMTiles_new_label;
extern PointerPropertyRNA rna_UDIMTiles_new_result;

extern FunctionRNA rna_UDIMTiles_get_func;
extern IntPropertyRNA rna_UDIMTiles_get_tile_number;
extern PointerPropertyRNA rna_UDIMTiles_get_result;

extern FunctionRNA rna_UDIMTiles_remove_func;
extern PointerPropertyRNA rna_UDIMTiles_remove_tile;



RNA_EXTERN_C CollectionPropertyRNA rna_ImageUser_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ImageUser_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_ImageUser_use_auto_refresh;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_frame_current;
RNA_EXTERN_C BoolPropertyRNA rna_ImageUser_use_cyclic;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_frame_duration;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_frame_offset;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_multilayer_layer;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_multilayer_pass;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_multilayer_view;
RNA_EXTERN_C IntPropertyRNA rna_ImageUser_tile;


RNA_EXTERN_C CollectionPropertyRNA rna_ImagePackedFile_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ImagePackedFile_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ImagePackedFile_packed_file;
RNA_EXTERN_C StringPropertyRNA rna_ImagePackedFile_filepath;
RNA_EXTERN_C IntPropertyRNA rna_ImagePackedFile_view;
RNA_EXTERN_C IntPropertyRNA rna_ImagePackedFile_tile_number;

extern FunctionRNA rna_ImagePackedFile_save_func;

static PointerRNA RenderSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void RenderSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RenderSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RenderSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int RenderSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA RenderSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void RenderSlot_name_get(PointerRNA *ptr, char *value)
{
    RenderSlot *data = (RenderSlot *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int RenderSlot_name_length(PointerRNA *ptr)
{
    RenderSlot *data = (RenderSlot *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void RenderSlot_name_set(PointerRNA *ptr, const char *value)
{
    RenderSlot *data = (RenderSlot *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA UDIMTile_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UDIMTile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UDIMTile_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UDIMTile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UDIMTile_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UDIMTile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UDIMTile_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UDIMTile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UDIMTile_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void UDIMTile_label_get(PointerRNA *ptr, char *value)
{
    rna_UDIMTile_label_get(ptr, value);
}

RNA_EXTERN_C int UDIMTile_label_length(PointerRNA *ptr)
{
    return rna_UDIMTile_label_length(ptr);
}

RNA_EXTERN_C void UDIMTile_label_set(PointerRNA *ptr, const char *value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    BLI_strncpy_utf8(data->label, value, 64);
}

RNA_EXTERN_C int UDIMTile_number_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->tile_number);
}

RNA_EXTERN_C void UDIMTile_number_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_UDIMTile_tile_number_set;
    fn(ptr, value);
}

RNA_EXTERN_C void UDIMTile_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_UDIMTile_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C int UDIMTile_channels_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_UDIMTile_channels_get;
    return fn(ptr);
}

RNA_EXTERN_C int UDIMTile_generated_type_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->gen_type);
}

RNA_EXTERN_C void UDIMTile_generated_type_set(PointerRNA *ptr, int value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
#ifdef __cplusplus
    data->gen_type = (std::remove_reference_t<decltype(data->gen_type)>)value;
#else
    data->gen_type = value;
#endif
}

RNA_EXTERN_C int UDIMTile_generated_width_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->gen_x);
}

RNA_EXTERN_C void UDIMTile_generated_width_set(PointerRNA *ptr, int value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
#ifdef __cplusplus
    data->gen_x = (std::remove_reference_t<decltype(data->gen_x)>)CLAMPIS(value, 1, 65536);
#else
    data->gen_x = CLAMPIS(value, 1, 65536);
#endif
}

RNA_EXTERN_C int UDIMTile_generated_height_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (int)(data->gen_y);
}

RNA_EXTERN_C void UDIMTile_generated_height_set(PointerRNA *ptr, int value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
#ifdef __cplusplus
    data->gen_y = (std::remove_reference_t<decltype(data->gen_y)>)CLAMPIS(value, 1, 65536);
#else
    data->gen_y = CLAMPIS(value, 1, 65536);
#endif
}

RNA_EXTERN_C bool UDIMTile_use_generated_float_get(PointerRNA *ptr)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    return (((data->gen_flag) & 1) != 0);
}

RNA_EXTERN_C void UDIMTile_use_generated_float_set(PointerRNA *ptr, bool value)
{
    ImageTile *data = (ImageTile *)(ptr->data);
    if (value) { data->gen_flag |= 1; }
    else { data->gen_flag &= ~1; }
}

RNA_EXTERN_C void UDIMTile_generated_color_get(PointerRNA *ptr, float values[4])
{
    ImageTile *data = (ImageTile *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->gen_color)[i]);
    }
}

RNA_EXTERN_C void UDIMTile_generated_color_set(PointerRNA *ptr, const float values[4])
{
    ImageTile *data = (ImageTile *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->gen_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C void Image_filepath_get(PointerRNA *ptr, char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int Image_filepath_length(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void Image_filepath_set(PointerRNA *ptr, const char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C void Image_filepath_raw_get(PointerRNA *ptr, char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int Image_filepath_raw_length(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void Image_filepath_raw_set(PointerRNA *ptr, const char *value)
{
    Image *data = (Image *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C int Image_file_format_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Image_file_format_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_file_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Image_file_format_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Image_source_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->source);
}

RNA_EXTERN_C void Image_source_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Image_source_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Image_type_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C PointerRNA Image_packed_file_get(PointerRNA *ptr)
{
    return rna_Image_packed_file_get(ptr);
}

static PointerRNA Image_packed_files_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ImagePackedFile, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Image_packed_files_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Image_packed_files;

    rna_iterator_listbase_begin(iter, &data->packedfiles, nullptr);

    if (iter->valid) {
        iter->ptr = Image_packed_files_get(iter);
    }
}

RNA_EXTERN_C void Image_packed_files_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Image_packed_files_get(iter);
    }
}

RNA_EXTERN_C void Image_packed_files_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Image_packed_files_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Image_packed_files_begin(&iter, ptr);

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
        if (found) { *r_ptr = Image_packed_files_get(&iter); }
    }

    Image_packed_files_end(&iter);

    return found;
}

RNA_EXTERN_C int ImagePackedFile_filepath_length(PointerRNA *);
RNA_EXTERN_C void ImagePackedFile_filepath_get(PointerRNA *, char *);

RNA_EXTERN_C int Image_packed_files_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Image_packed_files_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ImagePackedFile_filepath_length(&iter.ptr);
            if (namelen < 1024) {
                ImagePackedFile_filepath_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ImagePackedFile_filepath_get(&iter.ptr, name);
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
        Image_packed_files_next(&iter);
    }
    Image_packed_files_end(&iter);

    return found;
}

RNA_EXTERN_C bool Image_use_view_as_render_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void Image_use_view_as_render_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool Image_use_deinterlace_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void Image_use_deinterlace_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool Image_use_multiview_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void Image_use_multiview_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C bool Image_is_stereo_3d_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_is_stereo_3d_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Image_is_multiview_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_is_multiview_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Image_is_dirty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_dirty_get;
    return fn(ptr);
}

RNA_EXTERN_C int Image_generated_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Image_generated_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_generated_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Image_generated_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Image_generated_width_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_generated_width_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_generated_width_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Image_generated_width_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Image_generated_height_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_generated_height_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_generated_height_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Image_generated_height_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Image_use_generated_float_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_generated_float_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_use_generated_float_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Image_generated_float_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Image_generated_color_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_Image_generated_color_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Image_generated_color_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_Image_generated_color_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Image_display_aspect_get(PointerRNA *ptr, float values[2])
{
    Image *data = (Image *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->aspx)[i]);
    }
}

RNA_EXTERN_C void Image_display_aspect_set(PointerRNA *ptr, const float values[2])
{
    Image *data = (Image *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->aspx)[i] = CLAMPIS(values[i], 0.1000000015f, FLT_MAX);
    }
}

RNA_EXTERN_C int Image_bindcode_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_bindcode_get;
    return fn(ptr);
}

static PointerRNA Image_render_slots_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderSlot, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Image_render_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Image_render_slots;

    rna_iterator_listbase_begin(iter, &data->renderslots, nullptr);

    if (iter->valid) {
        iter->ptr = Image_render_slots_get(iter);
    }
}

RNA_EXTERN_C void Image_render_slots_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Image_render_slots_get(iter);
    }
}

RNA_EXTERN_C void Image_render_slots_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Image_render_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Image_render_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = Image_render_slots_get(&iter); }
    }

    Image_render_slots_end(&iter);

    return found;
}

static PointerRNA Image_tiles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_UDIMTile, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Image_tiles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Image_tiles;

    rna_iterator_listbase_begin(iter, &data->tiles, nullptr);

    if (iter->valid) {
        iter->ptr = Image_tiles_get(iter);
    }
}

RNA_EXTERN_C void Image_tiles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Image_tiles_get(iter);
    }
}

RNA_EXTERN_C void Image_tiles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Image_tiles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Image_tiles_begin(&iter, ptr);

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
        if (found) { *r_ptr = Image_tiles_get(&iter); }
    }

    Image_tiles_end(&iter);

    return found;
}

RNA_EXTERN_C bool Image_has_data_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_has_data_get;
    return fn(ptr);
}

RNA_EXTERN_C int Image_depth_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_depth_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_Image_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Image_resolution_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Image_resolution_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Image_resolution_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_Image_resolution_set;
    fn(ptr, values);
}

RNA_EXTERN_C int Image_frame_duration_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_frame_duration_get;
    return fn(ptr);
}

RNA_EXTERN_C void Image_pixels_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_Image_pixels_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Image_pixels_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_Image_pixels_set;
    fn(ptr, values);
}

RNA_EXTERN_C int Image_channels_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_channels_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Image_is_float_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Image_is_float_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Image_colorspace_settings_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

RNA_EXTERN_C int Image_alpha_mode_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->alpha_mode);
}

RNA_EXTERN_C void Image_alpha_mode_set(PointerRNA *ptr, int value)
{
    Image *data = (Image *)(ptr->data);
#ifdef __cplusplus
    data->alpha_mode = (std::remove_reference_t<decltype(data->alpha_mode)>)value;
#else
    data->alpha_mode = value;
#endif
}

RNA_EXTERN_C bool Image_use_half_precision_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Image_use_half_precision_set(PointerRNA *ptr, bool value)
{
    Image *data = (Image *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int Image_seam_margin_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->seam_margin);
}

RNA_EXTERN_C void Image_seam_margin_set(PointerRNA *ptr, int value)
{
    Image *data = (Image *)(ptr->data);
#ifdef __cplusplus
    data->seam_margin = (std::remove_reference_t<decltype(data->seam_margin)>)CLAMPIS(value, -32768, 32767);
#else
    data->seam_margin = CLAMPIS(value, -32768, 32767);
#endif
}

RNA_EXTERN_C int Image_views_format_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return (int)(data->views_format);
}

RNA_EXTERN_C void Image_views_format_set(PointerRNA *ptr, int value)
{
    Image *data = (Image *)(ptr->data);
#ifdef __cplusplus
    data->views_format = (std::remove_reference_t<decltype(data->views_format)>)value;
#else
    data->views_format = value;
#endif
}

RNA_EXTERN_C PointerRNA Image_stereo_3d_format_get(PointerRNA *ptr)
{
    Image *data = (Image *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Stereo3dFormat, data->stereo3d_format);
}

static PointerRNA RenderSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void RenderSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderSlots_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderSlots_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RenderSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderSlots_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RenderSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int RenderSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA RenderSlots_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int RenderSlots_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_render_slots_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void RenderSlots_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_render_slots_active_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA RenderSlots_active_get(PointerRNA *ptr)
{
    return rna_render_slots_active_get(ptr);
}

RNA_EXTERN_C void RenderSlots_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_render_slots_active_set(ptr, value, reports);
}

static PointerRNA UDIMTiles_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UDIMTiles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UDIMTiles_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UDIMTiles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UDIMTiles_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UDIMTiles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UDIMTiles_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UDIMTiles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UDIMTiles_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int UDIMTiles_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Image_active_tile_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void UDIMTiles_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Image_active_tile_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA UDIMTiles_active_get(PointerRNA *ptr)
{
    return rna_Image_active_tile_get(ptr);
}

RNA_EXTERN_C void UDIMTiles_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Image_active_tile_set(ptr, value, reports);
}

static PointerRNA ImageUser_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ImageUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ImageUser_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImageUser_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ImageUser_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ImageUser_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ImageUser_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ImageUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ImageUser_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool ImageUser_use_auto_refresh_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ImageUser_use_auto_refresh_set(PointerRNA *ptr, bool value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int ImageUser_frame_current_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->framenr);
}

RNA_EXTERN_C void ImageUser_frame_current_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
#ifdef __cplusplus
    data->framenr = (std::remove_reference_t<decltype(data->framenr)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->framenr = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C bool ImageUser_use_cyclic_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (bool)(data->cycl);
}

RNA_EXTERN_C void ImageUser_use_cyclic_set(PointerRNA *ptr, bool value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
#ifdef __cplusplus
    data->cycl = (std::remove_reference_t<decltype(data->cycl)>)value;
#else
    data->cycl = value;
#endif
}

RNA_EXTERN_C int ImageUser_frame_duration_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->frames);
}

RNA_EXTERN_C void ImageUser_frame_duration_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
#ifdef __cplusplus
    data->frames = (std::remove_reference_t<decltype(data->frames)>)CLAMPIS(value, 0, 1048574);
#else
    data->frames = CLAMPIS(value, 0, 1048574);
#endif
}

RNA_EXTERN_C int ImageUser_frame_offset_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->offset);
}

RNA_EXTERN_C void ImageUser_frame_offset_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
#ifdef __cplusplus
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
#else
    data->offset = value;
#endif
}

RNA_EXTERN_C int ImageUser_frame_start_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->sfra);
}

RNA_EXTERN_C void ImageUser_frame_start_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
#ifdef __cplusplus
    data->sfra = (std::remove_reference_t<decltype(data->sfra)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->sfra = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int ImageUser_multilayer_layer_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->layer);
}

RNA_EXTERN_C int ImageUser_multilayer_pass_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->pass);
}

RNA_EXTERN_C int ImageUser_multilayer_view_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->view);
}

RNA_EXTERN_C int ImageUser_tile_get(PointerRNA *ptr)
{
    ImageUser *data = (ImageUser *)(ptr->data);
    return (int)(data->tile);
}

RNA_EXTERN_C void ImageUser_tile_set(PointerRNA *ptr, int value)
{
    ImageUser *data = (ImageUser *)(ptr->data);
#ifdef __cplusplus
    data->tile = (std::remove_reference_t<decltype(data->tile)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->tile = CLAMPIS(value, 0, INT_MAX);
#endif
}

static PointerRNA ImagePackedFile_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ImagePackedFile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ImagePackedFile_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImagePackedFile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ImagePackedFile_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ImagePackedFile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ImagePackedFile_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ImagePackedFile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ImagePackedFile_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ImagePackedFile_packed_file_get(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

RNA_EXTERN_C void ImagePackedFile_filepath_get(PointerRNA *ptr, char *value)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int ImagePackedFile_filepath_length(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void ImagePackedFile_filepath_set(PointerRNA *ptr, const char *value)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C int ImagePackedFile_view_get(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return (int)(data->view);
}

RNA_EXTERN_C int ImagePackedFile_tile_number_get(PointerRNA *ptr)
{
    ImagePackedFile *data = (ImagePackedFile *)(ptr->data);
    return (int)(data->tile_number);
}

RNA_EXTERN_C void RenderSlot_clear_func(struct ID *_selfid, struct RenderSlot *_self, struct ImageUser *iuser)
{
	rna_RenderSlot_clear(_selfid, _self, iuser);
}

static void RenderSlot_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct RenderSlot *_self;
	struct ImageUser *iuser;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct RenderSlot *)_ptr->data;
	_data = (char *)_parms->data;
	iuser = *((struct ImageUser **)_data);
	
	rna_RenderSlot_clear(_selfid, _self, iuser);
}

/* Repeated prototypes to detect errors */

void rna_RenderSlot_clear(struct ID *_selfid, struct RenderSlot *_self, struct ImageUser *iuser);


RNA_EXTERN_C int Image_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_Image_pixels_get_length(ptr, arraylen);
}

RNA_EXTERN_C void Image_save_render_func(struct Image *_self, bContext *C, ReportList *reports, const char * filepath, struct Scene *scene, int quality)
{
	rna_Image_save_render(_self, C, reports, filepath, scene, quality);
}

static void Image_save_render_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	const char * filepath;
	struct Scene *scene;
	int quality;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	scene = *((struct Scene **)_data);
	_data += 8;
	quality = *((int *)_data);
	
	rna_Image_save_render(_self, C, reports, filepath, scene, quality);
}

RNA_EXTERN_C void Image_save_func(struct Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * filepath, int quality)
{
	rna_Image_save(_self, bmain, C, reports, filepath, quality);
}

static void Image_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	const char * filepath;
	int quality;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	quality = *((int *)_data);
	
	rna_Image_save(_self, CTX_data_main(C), C, reports, filepath, quality);
}

RNA_EXTERN_C void Image_pack_func(struct Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * data, int data_len)
{
	rna_Image_pack(_self, bmain, C, reports, data, data_len);
}

static void Image_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	const char * data;
	int data_len;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	data = *((const char * *)_data);
	_data += 8;
	data_len = *((int *)_data);
	
	rna_Image_pack(_self, CTX_data_main(C), C, reports, data, data_len);
}

RNA_EXTERN_C void Image_unpack_func(struct Image *_self, Main *bmain, ReportList *reports, int method)
{
	rna_Image_unpack(_self, bmain, reports, method);
}

static void Image_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int method;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_Image_unpack(_self, CTX_data_main(C), reports, method);
}

RNA_EXTERN_C void Image_reload_func(struct Image *_self, Main *bmain)
{
	rna_Image_reload(_self, bmain);
}

static void Image_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_reload(_self, CTX_data_main(C));
}

RNA_EXTERN_C void Image_update_func(struct Image *_self, ReportList *reports)
{
	rna_Image_update(_self, reports);
}

static void Image_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_update(_self, reports);
}

RNA_EXTERN_C void Image_scale_func(struct Image *_self, ReportList *reports, int width, int height)
{
	rna_Image_scale(_self, reports, width, height);
}

static void Image_scale_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int width;
	int height;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	width = *((int *)_data);
	_data += 8;
	height = *((int *)_data);
	
	rna_Image_scale(_self, reports, width, height);
}

RNA_EXTERN_C int Image_gl_touch_func(struct Image *_self, ReportList *reports, int frame, int layer_index, int pass_index)
{
	return rna_Image_gl_touch(_self, reports, frame, layer_index, pass_index);
}

static void Image_gl_touch_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int frame;
	int layer_index;
	int pass_index;
	int error;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	layer_index = *((int *)_data);
	_data += 8;
	pass_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	error = rna_Image_gl_touch(_self, reports, frame, layer_index, pass_index);
	*((int *)_retdata) = error;
}

RNA_EXTERN_C int Image_gl_load_func(struct Image *_self, ReportList *reports, int frame, int layer_index, int pass_index)
{
	return rna_Image_gl_load(_self, reports, frame, layer_index, pass_index);
}

static void Image_gl_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int frame;
	int layer_index;
	int pass_index;
	int error;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	layer_index = *((int *)_data);
	_data += 8;
	pass_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	error = rna_Image_gl_load(_self, reports, frame, layer_index, pass_index);
	*((int *)_retdata) = error;
}

RNA_EXTERN_C void Image_gl_free_func(struct Image *_self)
{
	rna_Image_gl_free(_self);
}

static void Image_gl_free_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_gl_free(_self);
}

RNA_EXTERN_C void Image_filepath_from_user_func(struct Image *_self, struct ImageUser *image_user, char * filepath)
{
	rna_Image_filepath_from_user(_self, image_user, filepath);
}

static void Image_filepath_from_user_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	struct ImageUser *image_user;
	char * filepath;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	image_user = *((struct ImageUser **)_data);
	_data += 8;
	filepath = ((char * )_data);
	
	rna_Image_filepath_from_user(_self, image_user, filepath);
}

RNA_EXTERN_C void Image_buffers_free_func(struct Image *_self)
{
	rna_Image_buffers_free(_self);
}

static void Image_buffers_free_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_buffers_free(_self);
}

/* Repeated prototypes to detect errors */

void rna_Image_save_render(struct Image *_self, bContext *C, ReportList *reports, const char * filepath, struct Scene *scene, int quality);
void rna_Image_save(struct Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * filepath, int quality);
void rna_Image_pack(struct Image *_self, Main *bmain, bContext *C, ReportList *reports, const char * data, int data_len);
void rna_Image_unpack(struct Image *_self, Main *bmain, ReportList *reports, int method);
void rna_Image_reload(struct Image *_self, Main *bmain);
void rna_Image_update(struct Image *_self, ReportList *reports);
void rna_Image_scale(struct Image *_self, ReportList *reports, int width, int height);
int rna_Image_gl_touch(struct Image *_self, ReportList *reports, int frame, int layer_index, int pass_index);
int rna_Image_gl_load(struct Image *_self, ReportList *reports, int frame, int layer_index, int pass_index);
void rna_Image_gl_free(struct Image *_self);
void rna_Image_filepath_from_user(struct Image *_self, struct ImageUser *image_user, char * filepath);
void rna_Image_buffers_free(struct Image *_self);

RNA_EXTERN_C struct RenderSlot *RenderSlots_new_func(struct Image *_self, const char * name)
{
	return BKE_image_add_renderslot(_self, name);
}

static void RenderSlots_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	const char * name;
	struct RenderSlot *result;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = BKE_image_add_renderslot(_self, name);
	*((struct RenderSlot **)_retdata) = result;
}

/* Repeated prototypes to detect errors */

struct RenderSlot *BKE_image_add_renderslot(struct Image *_self, const char * name);

RNA_EXTERN_C struct ImageTile *UDIMTiles_new_func(struct Image *_self, int tile_number, const char * label)
{
	return rna_UDIMTile_new(_self, tile_number, label);
}

static void UDIMTiles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int tile_number;
	const char * label;
	struct ImageTile *result;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	tile_number = *((int *)_data);
	_data += 8;
	label = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_UDIMTile_new(_self, tile_number, label);
	*((struct ImageTile **)_retdata) = result;
}

RNA_EXTERN_C struct ImageTile *UDIMTiles_get_func(struct Image *_self, int tile_number)
{
	return BKE_image_get_tile(_self, tile_number);
}

static void UDIMTiles_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int tile_number;
	struct ImageTile *result;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	tile_number = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = BKE_image_get_tile(_self, tile_number);
	*((struct ImageTile **)_retdata) = result;
}

RNA_EXTERN_C void UDIMTiles_remove_func(struct Image *_self, struct PointerRNA *tile)
{
	rna_UDIMTile_remove(_self, tile);
}

static void UDIMTiles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	struct PointerRNA *tile;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	tile = *((struct PointerRNA **)_data);
	
	rna_UDIMTile_remove(_self, tile);
}

/* Repeated prototypes to detect errors */

struct ImageTile *rna_UDIMTile_new(struct Image *_self, int tile_number, const char * label);
struct ImageTile *BKE_image_get_tile(struct Image *_self, int tile_number);
void rna_UDIMTile_remove(struct Image *_self, struct PointerRNA *tile);


RNA_EXTERN_C void ImagePackedFile_save_func(struct ImagePackedFile *_self, Main *bmain, ReportList *reports)
{
	rna_ImagePackedFile_save(_self, bmain, reports);
}

static void ImagePackedFile_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ImagePackedFile *_self;
	_self = (struct ImagePackedFile *)_ptr->data;
	
	rna_ImagePackedFile_save(_self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

void rna_ImagePackedFile_save(struct ImagePackedFile *_self, Main *bmain, ReportList *reports);

/* Render Slot */
CollectionPropertyRNA rna_RenderSlot_rna_properties = {
	{(PropertyRNA *)&rna_RenderSlot_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlot_rna_properties_begin, RenderSlot_rna_properties_next, RenderSlot_rna_properties_end, RenderSlot_rna_properties_get, nullptr, nullptr, RenderSlot_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_RenderSlot_rna_type = {
	{(PropertyRNA *)&rna_RenderSlot_name, (PropertyRNA *)&rna_RenderSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlot_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_RenderSlot_name = {
	{nullptr, (PropertyRNA *)&rna_RenderSlot_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Render slot name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlot_name_get, RenderSlot_name_length, RenderSlot_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_RenderSlot_clear_iuser = {
	{nullptr, nullptr,
	-1, "iuser", 8388608, 0, 1, 0, 0, "ImageUser",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ImageUser
};

FunctionRNA rna_RenderSlot_clear_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_RenderSlot_clear_iuser, (PropertyRNA *)&rna_RenderSlot_clear_iuser}},
	"clear", 2048, "Clear the render slot",
	RenderSlot_clear_call,
	nullptr
};

StructRNA RNA_RenderSlot = {
	{(ContainerRNA *)&RNA_UDIMTile, (ContainerRNA *)&RNA_FloatVectorValueReadOnly,
	nullptr,
	{(PropertyRNA *)&rna_RenderSlot_rna_properties, (PropertyRNA *)&rna_RenderSlot_name}},
	"RenderSlot", nullptr, nullptr, 516, nullptr, "Render Slot",
	"Parameters defining the render slot",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_RenderSlot_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_RenderSlot_clear_func, (FunctionRNA *)&rna_RenderSlot_clear_func}
};

/* UDIM Tile */
CollectionPropertyRNA rna_UDIMTile_rna_properties = {
	{(PropertyRNA *)&rna_UDIMTile_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTile_rna_properties_begin, UDIMTile_rna_properties_next, UDIMTile_rna_properties_end, UDIMTile_rna_properties_get, nullptr, nullptr, UDIMTile_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UDIMTile_rna_type = {
	{(PropertyRNA *)&rna_UDIMTile_label, (PropertyRNA *)&rna_UDIMTile_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTile_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_UDIMTile_label = {
	{(PropertyRNA *)&rna_UDIMTile_number, (PropertyRNA *)&rna_UDIMTile_rna_type,
	-1, "label", 262145, 0, 0, 0, 0, "Label",
	"Tile label",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTile_label_get, UDIMTile_label_length, UDIMTile_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

IntPropertyRNA rna_UDIMTile_number = {
	{(PropertyRNA *)&rna_UDIMTile_size, (PropertyRNA *)&rna_UDIMTile_label,
	-1, "number", 3, 0, 0, 0, 0, "Number",
	"Number of the position that this tile covers",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTile_number_get, UDIMTile_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static int rna_UDIMTile_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_UDIMTile_size = {
	{(PropertyRNA *)&rna_UDIMTile_channels, (PropertyRNA *)&rna_UDIMTile_number,
	-1, "size", 2, 0, 0, 0, 0, "Size",
	"Width and height of the tile buffer in pixels, zero when image data can\'t be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, UDIMTile_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_UDIMTile_size_default
};

IntPropertyRNA rna_UDIMTile_channels = {
	{(PropertyRNA *)&rna_UDIMTile_generated_type, (PropertyRNA *)&rna_UDIMTile_size,
	-1, "channels", 2, 0, 0, 0, 0, "Channels",
	"Number of channels in the tile pixels buffer",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTile_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

EnumPropertyRNA rna_UDIMTile_generated_type = {
	{(PropertyRNA *)&rna_UDIMTile_generated_width, (PropertyRNA *)&rna_UDIMTile_channels,
	-1, "generated_type", 1, 0, 0, 4, 0, "Generated Type",
	"Generated image type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageTile, gen_type), (RawPropertyType)2, nullptr},
	UDIMTile_generated_type_get, UDIMTile_generated_type_set, nullptr, nullptr, nullptr, rna_enum_image_generated_type_items, 3, 0
};

IntPropertyRNA rna_UDIMTile_generated_width = {
	{(PropertyRNA *)&rna_UDIMTile_generated_height, (PropertyRNA *)&rna_UDIMTile_generated_type,
	-1, "generated_width", 67108865, 0, 0, 4, 0, "Generated Width",
	"Generated image width",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageTile, gen_x), (RawPropertyType)0, nullptr},
	UDIMTile_generated_width_get, UDIMTile_generated_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, 0, nullptr
};

IntPropertyRNA rna_UDIMTile_generated_height = {
	{(PropertyRNA *)&rna_UDIMTile_use_generated_float, (PropertyRNA *)&rna_UDIMTile_generated_width,
	-1, "generated_height", 67108865, 0, 0, 4, 0, "Generated Height",
	"Generated image height",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageTile, gen_y), (RawPropertyType)0, nullptr},
	UDIMTile_generated_height_get, UDIMTile_generated_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, 0, nullptr
};

BoolPropertyRNA rna_UDIMTile_use_generated_float = {
	{(PropertyRNA *)&rna_UDIMTile_generated_color, (PropertyRNA *)&rna_UDIMTile_generated_height,
	-1, "use_generated_float", 1, 0, 0, 0, 0, "Float Buffer",
	"Generate floating-point buffer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTile_use_generated_float_get, UDIMTile_use_generated_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_UDIMTile_generated_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UDIMTile_generated_color = {
	{nullptr, (PropertyRNA *)&rna_UDIMTile_use_generated_float,
	-1, "generated_color", 1, 0, 0, 4, 0, "Color",
	"Fill color for the generated image",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_UDIMTile_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageTile, gen_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, UDIMTile_generated_color_get, UDIMTile_generated_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_UDIMTile_generated_color_default
};

StructRNA RNA_UDIMTile = {
	{(ContainerRNA *)&RNA_Image, (ContainerRNA *)&RNA_RenderSlot,
	nullptr,
	{(PropertyRNA *)&rna_UDIMTile_rna_properties, (PropertyRNA *)&rna_UDIMTile_generated_color}},
	"UDIMTile", nullptr, nullptr, 516, nullptr, "UDIM Tile",
	"Properties of the UDIM tile",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UDIMTile_rna_properties,
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

/* Image */
StringPropertyRNA rna_Image_filepath = {
	{(PropertyRNA *)&rna_Image_filepath_raw, nullptr,
	-1, "filepath", 262145, 1, 0, 0, 0, "File Name",
	"Image/Movie file name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Image_reload_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_filepath_get, Image_filepath_length, Image_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_Image_filepath_raw = {
	{(PropertyRNA *)&rna_Image_file_format, (PropertyRNA *)&rna_Image_filepath,
	-1, "filepath_raw", 262145, 0, 0, 0, 0, "File Name",
	"Image/Movie file name (without data refreshing)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_filepath_raw_get, Image_filepath_raw_length, Image_filepath_raw_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

EnumPropertyRNA rna_Image_file_format = {
	{(PropertyRNA *)&rna_Image_source, (PropertyRNA *)&rna_Image_filepath_raw,
	-1, "file_format", 3, 0, 0, 0, 0, "File Format",
	"Format used for re-saving this file",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_file_format_get, Image_file_format_set, nullptr, nullptr, nullptr, rna_enum_image_type_items, 20, 0
};

static const EnumPropertyItem rna_Image_source_items[7] = {
	{1, "FILE", 0, "Single Image", "Single image file"},
	{2, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"},
	{3, "MOVIE", 0, "Movie", "Movie file"},
	{4, "GENERATED", 0, "Generated", "Generated image"},
	{5, "VIEWER", 0, "Viewer", "Compositing node viewer"},
	{6, "TILED", 0, "UDIM Tiles", "Tiled UDIM image texture"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Image_source = {
	{(PropertyRNA *)&rna_Image_type, (PropertyRNA *)&rna_Image_file_format,
	-1, "source", 3, 0, 0, 0, 0, "Source",
	"Where the image comes from",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_source_get, Image_source_set, rna_Image_source_itemf, nullptr, nullptr, rna_Image_source_items, 6, 1
};

static const EnumPropertyItem rna_Image_type_items[6] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "MULTILAYER", 0, "Multilayer", ""},
	{2, "UV_TEST", 0, "UV Test", ""},
	{4, "RENDER_RESULT", 0, "Render Result", ""},
	{5, "COMPOSITING", 0, "Compositing", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Image_type = {
	{(PropertyRNA *)&rna_Image_packed_file, (PropertyRNA *)&rna_Image_source,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"How to generate the image",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Image, type), (RawPropertyType)1, nullptr},
	Image_type_get, nullptr, nullptr, nullptr, nullptr, rna_Image_type_items, 5, 0
};

PointerPropertyRNA rna_Image_packed_file = {
	{(PropertyRNA *)&rna_Image_packed_files, (PropertyRNA *)&rna_Image_type,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"First packed file of the image",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_packed_file_get, nullptr, nullptr, nullptr,&RNA_PackedFile
};

CollectionPropertyRNA rna_Image_packed_files = {
	{(PropertyRNA *)&rna_Image_use_view_as_render, (PropertyRNA *)&rna_Image_packed_file,
	-1, "packed_files", 0, 0, 0, 0, 0, "Packed Files",
	"Collection of packed images",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_packed_files_begin, Image_packed_files_next, Image_packed_files_end, Image_packed_files_get, nullptr, Image_packed_files_lookup_int, Image_packed_files_lookup_string, nullptr, &RNA_ImagePackedFile
};

BoolPropertyRNA rna_Image_use_view_as_render = {
	{(PropertyRNA *)&rna_Image_use_deinterlace, (PropertyRNA *)&rna_Image_packed_files,
	-1, "use_view_as_render", 3, 1, 0, 0, 0, "View as Render",
	"Apply render part of display transformation when displaying this image on the screen",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_use_view_as_render_get, Image_use_view_as_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Image_use_deinterlace = {
	{(PropertyRNA *)&rna_Image_use_multiview, (PropertyRNA *)&rna_Image_use_view_as_render,
	-1, "use_deinterlace", 3, 1, 0, 0, 0, "Deinterlace",
	"Deinterlace movie file on load",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_reload_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_use_deinterlace_get, Image_use_deinterlace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Image_use_multiview = {
	{(PropertyRNA *)&rna_Image_is_stereo_3d, (PropertyRNA *)&rna_Image_use_deinterlace,
	-1, "use_multiview", 3, 1, 0, 0, 0, "Use Multi-View",
	"Use Multiple Views (when available)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_views_format_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_use_multiview_get, Image_use_multiview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Image_is_stereo_3d = {
	{(PropertyRNA *)&rna_Image_is_multiview, (PropertyRNA *)&rna_Image_use_multiview,
	-1, "is_stereo_3d", 2, 1, 0, 0, 0, "Stereo 3D",
	"Image has left and right views",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_is_stereo_3d_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Image_is_multiview = {
	{(PropertyRNA *)&rna_Image_is_dirty, (PropertyRNA *)&rna_Image_is_stereo_3d,
	-1, "is_multiview", 2, 1, 0, 0, 0, "Multiple Views",
	"Image has more than one view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_is_multiview_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Image_is_dirty = {
	{(PropertyRNA *)&rna_Image_generated_type, (PropertyRNA *)&rna_Image_is_multiview,
	-1, "is_dirty", 2, 1, 0, 0, 0, "Dirty",
	"Image has changed and is not saved",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_is_dirty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_Image_generated_type = {
	{(PropertyRNA *)&rna_Image_generated_width, (PropertyRNA *)&rna_Image_is_dirty,
	-1, "generated_type", 1, 0, 0, 0, 0, "Generated Type",
	"Generated image type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_generated_type_get, Image_generated_type_set, nullptr, nullptr, nullptr, rna_enum_image_generated_type_items, 3, 1
};

IntPropertyRNA rna_Image_generated_width = {
	{(PropertyRNA *)&rna_Image_generated_height, (PropertyRNA *)&rna_Image_generated_type,
	-1, "generated_width", 67108865, 0, 0, 0, 0, "Generated Width",
	"Generated image width",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_generated_width_get, Image_generated_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, 1024, nullptr
};

IntPropertyRNA rna_Image_generated_height = {
	{(PropertyRNA *)&rna_Image_use_generated_float, (PropertyRNA *)&rna_Image_generated_width,
	-1, "generated_height", 67108865, 0, 0, 0, 0, "Generated Height",
	"Generated image height",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_generated_height_get, Image_generated_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 65536, 1, 65536, 1, 1024, nullptr
};

BoolPropertyRNA rna_Image_use_generated_float = {
	{(PropertyRNA *)&rna_Image_generated_color, (PropertyRNA *)&rna_Image_generated_height,
	-1, "use_generated_float", 1, 0, 0, 0, 0, "Float Buffer",
	"Generate floating-point buffer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_use_generated_float_get, Image_use_generated_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Image_generated_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Image_generated_color = {
	{(PropertyRNA *)&rna_Image_display_aspect, (PropertyRNA *)&rna_Image_use_generated_float,
	-1, "generated_color", 1, 0, 0, 0, 0, "Color",
	"Fill color for the generated image",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Image_generated_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Image_generated_color_get, Image_generated_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Image_generated_color_default
};

static float rna_Image_display_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Image_display_aspect = {
	{(PropertyRNA *)&rna_Image_bindcode, (PropertyRNA *)&rna_Image_generated_color,
	-1, "display_aspect", 3, 1, 0, 4, 0, "Display Aspect",
	"Display Aspect for this image, does not affect rendering",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Image, aspx), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Image_display_aspect_get, Image_display_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 1.0f, rna_Image_display_aspect_default
};

IntPropertyRNA rna_Image_bindcode = {
	{(PropertyRNA *)&rna_Image_render_slots, (PropertyRNA *)&rna_Image_display_aspect,
	-1, "bindcode", 2, 0, 0, 0, 0, "Bindcode",
	"OpenGL bindcode",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_bindcode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

CollectionPropertyRNA rna_Image_render_slots = {
	{(PropertyRNA *)&rna_Image_tiles, (PropertyRNA *)&rna_Image_bindcode,
	-1, "render_slots", 0, 0, 0, 0, 0, "Render Slots",
	"Render slots of the image",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_RenderSlots},
	Image_render_slots_begin, Image_render_slots_next, Image_render_slots_end, Image_render_slots_get, nullptr, Image_render_slots_lookup_int, nullptr, nullptr, &RNA_RenderSlot
};

CollectionPropertyRNA rna_Image_tiles = {
	{(PropertyRNA *)&rna_Image_has_data, (PropertyRNA *)&rna_Image_render_slots,
	-1, "tiles", 0, 0, 0, 0, 0, "Image Tiles",
	"Tiles of the image",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_UDIMTiles},
	Image_tiles_begin, Image_tiles_next, Image_tiles_end, Image_tiles_get, nullptr, Image_tiles_lookup_int, nullptr, nullptr, &RNA_UDIMTile
};

BoolPropertyRNA rna_Image_has_data = {
	{(PropertyRNA *)&rna_Image_depth, (PropertyRNA *)&rna_Image_tiles,
	-1, "has_data", 2, 0, 0, 0, 0, "Has Data",
	"True if the image data is loaded into memory",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_has_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Image_depth = {
	{(PropertyRNA *)&rna_Image_size, (PropertyRNA *)&rna_Image_has_data,
	-1, "depth", 2, 0, 0, 0, 0, "Depth",
	"Image bit depth",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_depth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static int rna_Image_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_Image_size = {
	{(PropertyRNA *)&rna_Image_resolution, (PropertyRNA *)&rna_Image_depth,
	-1, "size", 2, 0, 0, 0, 0, "Size",
	"Width and height of the image buffer in pixels, zero when image data can\'t be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Image_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_Image_size_default
};

static float rna_Image_resolution_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Image_resolution = {
	{(PropertyRNA *)&rna_Image_frame_duration, (PropertyRNA *)&rna_Image_size,
	-1, "resolution", 3, 1, 0, 0, 0, "Resolution",
	"X/Y pixels per meter, for the image buffer",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Image_resolution_get, Image_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Image_resolution_default
};

IntPropertyRNA rna_Image_frame_duration = {
	{(PropertyRNA *)&rna_Image_pixels, (PropertyRNA *)&rna_Image_resolution,
	-1, "frame_duration", 2, 0, 0, 0, 0, "Duration",
	"Duration (in frames) of the image (1 when not a video/sequence)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_frame_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_Image_pixels = {
	{(PropertyRNA *)&rna_Image_channels, (PropertyRNA *)&rna_Image_frame_duration,
	-1, "pixels", 131075, 0, 0, 0, 0, "Pixels",
	"Image buffer pixels in floating-point values",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_Image_pixels_get_length, 1, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Image_pixels_get, Image_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Image_channels = {
	{(PropertyRNA *)&rna_Image_is_float, (PropertyRNA *)&rna_Image_pixels,
	-1, "channels", 2, 0, 0, 0, 0, "Channels",
	"Number of channels in pixels buffer",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_Image_is_float = {
	{(PropertyRNA *)&rna_Image_colorspace_settings, (PropertyRNA *)&rna_Image_channels,
	-1, "is_float", 2, 0, 0, 0, 0, "Is Float",
	"True if this image is stored in floating-point buffer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_is_float_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Image_colorspace_settings = {
	{(PropertyRNA *)&rna_Image_alpha_mode, (PropertyRNA *)&rna_Image_is_float,
	-1, "colorspace_settings", 8388608, 0, 0, 0, 0, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_colorspace_settings_get, nullptr, nullptr, nullptr,&RNA_ColorManagedInputColorspaceSettings
};

static const EnumPropertyItem rna_Image_alpha_mode_items[5] = {
	{0, "STRAIGHT", 0, "Straight", "Store RGB and alpha channels separately with alpha acting as a mask, also known as unassociated alpha. Commonly used by image editing applications and file formats like PNG"},
	{1, "PREMUL", 0, "Premultiplied", "Store RGB channels with alpha multiplied in, also known as associated alpha. The natural format for renders and used by file formats like OpenEXR"},
	{2, "CHANNEL_PACKED", 0, "Channel Packed", "Different images are packed in the RGB and alpha channels, and they should not affect each other. Channel packing is commonly used by game engines to save memory"},
	{3, "NONE", 0, "None", "Ignore alpha channel from the file and make image fully opaque"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Image_alpha_mode = {
	{(PropertyRNA *)&rna_Image_use_half_precision, (PropertyRNA *)&rna_Image_colorspace_settings,
	-1, "alpha_mode", 3, 1, 0, 4, 0, "Alpha Mode",
	"Representation of alpha in the image file, to convert to and from when saving and loading the image",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_alpha_mode_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Image, alpha_mode), (RawPropertyType)2, nullptr},
	Image_alpha_mode_get, Image_alpha_mode_set, nullptr, nullptr, nullptr, rna_Image_alpha_mode_items, 4, 0
};

BoolPropertyRNA rna_Image_use_half_precision = {
	{(PropertyRNA *)&rna_Image_seam_margin, (PropertyRNA *)&rna_Image_alpha_mode,
	-1, "use_half_precision", 3, 0, 0, 0, 0, "Half Float Precision",
	"Use 16 bits per channel to lower the memory usage during rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_gpu_texture_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_use_half_precision_get, Image_use_half_precision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Image_seam_margin = {
	{(PropertyRNA *)&rna_Image_views_format, (PropertyRNA *)&rna_Image_use_half_precision,
	-1, "seam_margin", 3, 0, 0, 4, 0, "Seam Margin",
	"Margin to take into account when fixing UV seams during painting. Higher number would improve seam-fixes for mipmaps, but decreases performance",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Image, seam_margin), (RawPropertyType)1, nullptr},
	Image_seam_margin_get, Image_seam_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, -32768, 32767, 1, 8, nullptr
};

EnumPropertyRNA rna_Image_views_format = {
	{(PropertyRNA *)&rna_Image_stereo_3d_format, (PropertyRNA *)&rna_Image_seam_margin,
	-1, "views_format", 3, 1, 0, 4, 0, "Views Format",
	"Mode to load image views",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Image_views_format_update, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Image, views_format), (RawPropertyType)2, nullptr},
	Image_views_format_get, Image_views_format_set, nullptr, nullptr, nullptr, rna_enum_views_format_items, 2, 0
};

PointerPropertyRNA rna_Image_stereo_3d_format = {
	{nullptr, (PropertyRNA *)&rna_Image_views_format,
	-1, "stereo_3d_format", 8650752, 0, 0, 0, 0, "Stereo 3D Format",
	"Settings for stereo 3d",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Image_stereo_3d_format_get, nullptr, nullptr, nullptr,&RNA_Stereo3dFormat
};

StringPropertyRNA rna_Image_save_render_filepath = {
	{(PropertyRNA *)&rna_Image_save_render_scene, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"Output path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Image_save_render_scene = {
	{(PropertyRNA *)&rna_Image_save_render_quality, (PropertyRNA *)&rna_Image_save_render_filepath,
	-1, "scene", 8388736, 0, 0, 0, 0, "",
	"Scene to take image parameters from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

IntPropertyRNA rna_Image_save_render_quality = {
	{nullptr, (PropertyRNA *)&rna_Image_save_render_scene,
	-1, "quality", 3, 0, 0, 0, 0, "Quality",
	"Quality for image formats that support lossy compression, uses default quality if not specified",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 0, nullptr
};

FunctionRNA rna_Image_save_render_func = {
	{(FunctionRNA *)&rna_Image_save_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Image_save_render_filepath, (PropertyRNA *)&rna_Image_save_render_quality}},
	"save_render", 24, "Save image to a specific path using a scenes render settings",
	Image_save_render_call,
	nullptr
};

StringPropertyRNA rna_Image_save_filepath = {
	{(PropertyRNA *)&rna_Image_save_quality, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "",
	"Output path, uses image data-block filepath if not specified",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_Image_save_quality = {
	{nullptr, (PropertyRNA *)&rna_Image_save_filepath,
	-1, "quality", 3, 0, 0, 0, 0, "Quality",
	"Quality for image formats that support lossy compression, uses default quality if not specified",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 0, nullptr
};

FunctionRNA rna_Image_save_func = {
	{(FunctionRNA *)&rna_Image_pack_func, (FunctionRNA *)&rna_Image_save_render_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_save_filepath, (PropertyRNA *)&rna_Image_save_quality}},
	"save", 28, "Save image",
	Image_save_call,
	nullptr
};

StringPropertyRNA rna_Image_pack_data = {
	{(PropertyRNA *)&rna_Image_pack_data_len, nullptr,
	-1, "data", 262145, 0, 0, 0, 0, "data",
	"Raw data (bytes, exact content of the embedded file)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_BYTESTRING | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_Image_pack_data_len = {
	{nullptr, (PropertyRNA *)&rna_Image_pack_data,
	-1, "data_len", 3, 0, 0, 0, 0, "data_len",
	"length of given data (mandatory if data is provided)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Image_pack_func = {
	{(FunctionRNA *)&rna_Image_unpack_func, (FunctionRNA *)&rna_Image_save_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_pack_data, (PropertyRNA *)&rna_Image_pack_data_len}},
	"pack", 28, "Pack an image as embedded data into the .blend file",
	Image_pack_call,
	nullptr
};

EnumPropertyRNA rna_Image_unpack_method = {
	{nullptr, nullptr,
	-1, "method", 3, 0, 0, 0, 0, "method",
	"How to unpack",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_unpack_method_items, 5, 5
};

FunctionRNA rna_Image_unpack_func = {
	{(FunctionRNA *)&rna_Image_reload_func, (FunctionRNA *)&rna_Image_pack_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_unpack_method, (PropertyRNA *)&rna_Image_unpack_method}},
	"unpack", 20, "Save an image packed in the .blend file to disk",
	Image_unpack_call,
	nullptr
};

FunctionRNA rna_Image_reload_func = {
	{(FunctionRNA *)&rna_Image_update_func, (FunctionRNA *)&rna_Image_unpack_func,
	nullptr,
	{nullptr, nullptr}},
	"reload", 4, "Reload the image from its source path",
	Image_reload_call,
	nullptr
};

FunctionRNA rna_Image_update_func = {
	{(FunctionRNA *)&rna_Image_scale_func, (FunctionRNA *)&rna_Image_reload_func,
	nullptr,
	{nullptr, nullptr}},
	"update", 16, "Update the display image from the floating-point buffer",
	Image_update_call,
	nullptr
};

IntPropertyRNA rna_Image_scale_width = {
	{(PropertyRNA *)&rna_Image_scale_height, nullptr,
	-1, "width", 3, 0, 1, 0, 0, "",
	"Width",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, 1, nullptr
};

IntPropertyRNA rna_Image_scale_height = {
	{nullptr, (PropertyRNA *)&rna_Image_scale_width,
	-1, "height", 3, 0, 1, 0, 0, "",
	"Height",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, 1, nullptr
};

FunctionRNA rna_Image_scale_func = {
	{(FunctionRNA *)&rna_Image_gl_touch_func, (FunctionRNA *)&rna_Image_update_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_scale_width, (PropertyRNA *)&rna_Image_scale_height}},
	"scale", 16, "Scale the buffer of the image, in pixels",
	Image_scale_call,
	nullptr
};

IntPropertyRNA rna_Image_gl_touch_frame = {
	{(PropertyRNA *)&rna_Image_gl_touch_layer_index, nullptr,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame of image sequence or movie",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Image_gl_touch_layer_index = {
	{(PropertyRNA *)&rna_Image_gl_touch_pass_index, (PropertyRNA *)&rna_Image_gl_touch_frame,
	-1, "layer_index", 3, 0, 0, 0, 0, "Layer",
	"Index of layer that should be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Image_gl_touch_pass_index = {
	{(PropertyRNA *)&rna_Image_gl_touch_error, (PropertyRNA *)&rna_Image_gl_touch_layer_index,
	-1, "pass_index", 3, 0, 0, 0, 0, "Pass",
	"Index of pass that should be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Image_gl_touch_error = {
	{nullptr, (PropertyRNA *)&rna_Image_gl_touch_pass_index,
	-1, "error", 3, 0, 2, 0, 0, "Error",
	"OpenGL error value",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -2147483647, INT_MAX, -2147483647, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Image_gl_touch_func = {
	{(FunctionRNA *)&rna_Image_gl_load_func, (FunctionRNA *)&rna_Image_scale_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_gl_touch_frame, (PropertyRNA *)&rna_Image_gl_touch_error}},
	"gl_touch", 16, "Delay the image from being cleaned from the cache due inactivity",
	Image_gl_touch_call,
	(PropertyRNA *)&rna_Image_gl_touch_error
};

IntPropertyRNA rna_Image_gl_load_frame = {
	{(PropertyRNA *)&rna_Image_gl_load_layer_index, nullptr,
	-1, "frame", 3, 0, 0, 0, 0, "Frame",
	"Frame of image sequence or movie",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Image_gl_load_layer_index = {
	{(PropertyRNA *)&rna_Image_gl_load_pass_index, (PropertyRNA *)&rna_Image_gl_load_frame,
	-1, "layer_index", 3, 0, 0, 0, 0, "Layer",
	"Index of layer that should be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Image_gl_load_pass_index = {
	{(PropertyRNA *)&rna_Image_gl_load_error, (PropertyRNA *)&rna_Image_gl_load_layer_index,
	-1, "pass_index", 3, 0, 0, 0, 0, "Pass",
	"Index of pass that should be loaded",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Image_gl_load_error = {
	{nullptr, (PropertyRNA *)&rna_Image_gl_load_pass_index,
	-1, "error", 3, 0, 2, 0, 0, "Error",
	"OpenGL error value",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -2147483647, INT_MAX, -2147483647, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Image_gl_load_func = {
	{(FunctionRNA *)&rna_Image_gl_free_func, (FunctionRNA *)&rna_Image_gl_touch_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_gl_load_frame, (PropertyRNA *)&rna_Image_gl_load_error}},
	"gl_load", 16, "Load the image into an OpenGL texture. On success, image.bindcode will contain the OpenGL texture bindcode. Colors read from the texture will be in scene linear color space and have premultiplied or straight alpha matching the image alpha mode",
	Image_gl_load_call,
	(PropertyRNA *)&rna_Image_gl_load_error
};

FunctionRNA rna_Image_gl_free_func = {
	{(FunctionRNA *)&rna_Image_filepath_from_user_func, (FunctionRNA *)&rna_Image_gl_load_func,
	nullptr,
	{nullptr, nullptr}},
	"gl_free", 0, "Free the image from OpenGL graphics memory",
	Image_gl_free_call,
	nullptr
};

PointerPropertyRNA rna_Image_filepath_from_user_image_user = {
	{(PropertyRNA *)&rna_Image_filepath_from_user_filepath, nullptr,
	-1, "image_user", 8388608, 0, 0, 0, 0, "",
	"Image user of the image to get filepath for",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ImageUser
};

StringPropertyRNA rna_Image_filepath_from_user_filepath = {
	{nullptr, (PropertyRNA *)&rna_Image_filepath_from_user_image_user,
	-1, "filepath", 8650753, 0, 2, 0, 0, "File Path",
	"The resulting filepath from the image and its user",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

FunctionRNA rna_Image_filepath_from_user_func = {
	{(FunctionRNA *)&rna_Image_buffers_free_func, (FunctionRNA *)&rna_Image_gl_free_func,
	nullptr,
	{(PropertyRNA *)&rna_Image_filepath_from_user_image_user, (PropertyRNA *)&rna_Image_filepath_from_user_filepath}},
	"filepath_from_user", 0, "Return the absolute path to the filepath of an image frame specified by the image user",
	Image_filepath_from_user_call,
	nullptr
};

FunctionRNA rna_Image_buffers_free_func = {
	{nullptr, (FunctionRNA *)&rna_Image_filepath_from_user_func,
	nullptr,
	{nullptr, nullptr}},
	"buffers_free", 0, "Free the image buffers from memory",
	Image_buffers_free_call,
	nullptr
};

StructRNA RNA_Image = {
	{(ContainerRNA *)&RNA_RenderSlots, (ContainerRNA *)&RNA_UDIMTile,
	nullptr,
	{(PropertyRNA *)&rna_Image_filepath, (PropertyRNA *)&rna_Image_stereo_3d_format}},
	"Image", nullptr, nullptr, 519, nullptr, "Image",
	"Image data-block referencing an external or packed image",
	"*", 183,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Image_save_render_func, (FunctionRNA *)&rna_Image_buffers_free_func}
};

/* Render Layers */
CollectionPropertyRNA rna_RenderSlots_rna_properties = {
	{(PropertyRNA *)&rna_RenderSlots_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlots_rna_properties_begin, RenderSlots_rna_properties_next, RenderSlots_rna_properties_end, RenderSlots_rna_properties_get, nullptr, nullptr, RenderSlots_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_RenderSlots_rna_type = {
	{(PropertyRNA *)&rna_RenderSlots_active_index, (PropertyRNA *)&rna_RenderSlots_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlots_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_RenderSlots_active_index = {
	{(PropertyRNA *)&rna_RenderSlots_active, (PropertyRNA *)&rna_RenderSlots_rna_type,
	-1, "active_index", 3, 0, 0, 0, 0, "Active",
	"Active render slot of the image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlots_active_index_get, RenderSlots_active_index_set, nullptr, nullptr, rna_render_slots_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

PointerPropertyRNA rna_RenderSlots_active = {
	{nullptr, (PropertyRNA *)&rna_RenderSlots_active_index,
	-1, "active", 8388609, 0, 0, 0, 0, "Active",
	"Active render slot of the image",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 187891712, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RenderSlots_active_get, RenderSlots_active_set, nullptr, nullptr,&RNA_RenderSlot
};

StringPropertyRNA rna_RenderSlots_new_name = {
	{(PropertyRNA *)&rna_RenderSlots_new_result, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"New name for the render slot",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_RenderSlots_new_result = {
	{nullptr, (PropertyRNA *)&rna_RenderSlots_new_name,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"Newly created render layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_RenderSlot
};

FunctionRNA rna_RenderSlots_new_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_RenderSlots_new_name, (PropertyRNA *)&rna_RenderSlots_new_result}},
	"new", 0, "Add a render slot to the image",
	RenderSlots_new_call,
	(PropertyRNA *)&rna_RenderSlots_new_result
};

StructRNA RNA_RenderSlots = {
	{(ContainerRNA *)&RNA_UDIMTiles, (ContainerRNA *)&RNA_Image,
	nullptr,
	{(PropertyRNA *)&rna_RenderSlots_rna_properties, (PropertyRNA *)&rna_RenderSlots_active}},
	"RenderSlots", nullptr, nullptr, 516, nullptr, "Render Layers",
	"Collection of render layers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_RenderSlots_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_RenderSlots_new_func, (FunctionRNA *)&rna_RenderSlots_new_func}
};

/* UDIM Tiles */
CollectionPropertyRNA rna_UDIMTiles_rna_properties = {
	{(PropertyRNA *)&rna_UDIMTiles_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTiles_rna_properties_begin, UDIMTiles_rna_properties_next, UDIMTiles_rna_properties_end, UDIMTiles_rna_properties_get, nullptr, nullptr, UDIMTiles_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UDIMTiles_rna_type = {
	{(PropertyRNA *)&rna_UDIMTiles_active_index, (PropertyRNA *)&rna_UDIMTiles_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTiles_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_UDIMTiles_active_index = {
	{(PropertyRNA *)&rna_UDIMTiles_active, (PropertyRNA *)&rna_UDIMTiles_rna_type,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Tile Index",
	"Active index in tiles array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTiles_active_index_get, UDIMTiles_active_index_set, nullptr, nullptr, rna_Image_active_tile_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_UDIMTiles_active = {
	{nullptr, (PropertyRNA *)&rna_UDIMTiles_active_index,
	-1, "active", 8650753, 0, 0, 0, 0, "Active Image Tile",
	"Active Image Tile",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UDIMTiles_active_get, UDIMTiles_active_set, nullptr, nullptr,&RNA_UDIMTile
};

IntPropertyRNA rna_UDIMTiles_new_tile_number = {
	{(PropertyRNA *)&rna_UDIMTiles_new_label, nullptr,
	-1, "tile_number", 3, 0, 1, 0, 0, "",
	"Number of the newly created tile",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, INT_MAX, 1, 1, nullptr
};

StringPropertyRNA rna_UDIMTiles_new_label = {
	{(PropertyRNA *)&rna_UDIMTiles_new_result, (PropertyRNA *)&rna_UDIMTiles_new_tile_number,
	-1, "label", 262145, 0, 0, 0, 0, "",
	"Optional label for the tile",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_UDIMTiles_new_result = {
	{nullptr, (PropertyRNA *)&rna_UDIMTiles_new_label,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"Newly created image tile",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UDIMTile
};

FunctionRNA rna_UDIMTiles_new_func = {
	{(FunctionRNA *)&rna_UDIMTiles_get_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_UDIMTiles_new_tile_number, (PropertyRNA *)&rna_UDIMTiles_new_result}},
	"new", 0, "Add a tile to the image",
	UDIMTiles_new_call,
	(PropertyRNA *)&rna_UDIMTiles_new_result
};

IntPropertyRNA rna_UDIMTiles_get_tile_number = {
	{(PropertyRNA *)&rna_UDIMTiles_get_result, nullptr,
	-1, "tile_number", 3, 0, 1, 0, 0, "",
	"Number of the tile",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_UDIMTiles_get_result = {
	{nullptr, (PropertyRNA *)&rna_UDIMTiles_get_tile_number,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"The tile",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UDIMTile
};

FunctionRNA rna_UDIMTiles_get_func = {
	{(FunctionRNA *)&rna_UDIMTiles_remove_func, (FunctionRNA *)&rna_UDIMTiles_new_func,
	nullptr,
	{(PropertyRNA *)&rna_UDIMTiles_get_tile_number, (PropertyRNA *)&rna_UDIMTiles_get_result}},
	"get", 0, "Get a tile based on its tile number",
	UDIMTiles_get_call,
	(PropertyRNA *)&rna_UDIMTiles_get_result
};

PointerPropertyRNA rna_UDIMTiles_remove_tile = {
	{nullptr, nullptr,
	-1, "tile", 262144, 0, 5, 0, 0, "",
	"Image tile to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UDIMTile
};

FunctionRNA rna_UDIMTiles_remove_func = {
	{nullptr, (FunctionRNA *)&rna_UDIMTiles_get_func,
	nullptr,
	{(PropertyRNA *)&rna_UDIMTiles_remove_tile, (PropertyRNA *)&rna_UDIMTiles_remove_tile}},
	"remove", 0, "Remove an image tile",
	UDIMTiles_remove_call,
	nullptr
};

StructRNA RNA_UDIMTiles = {
	{(ContainerRNA *)&RNA_ImageUser, (ContainerRNA *)&RNA_RenderSlots,
	nullptr,
	{(PropertyRNA *)&rna_UDIMTiles_rna_properties, (PropertyRNA *)&rna_UDIMTiles_active}},
	"UDIMTiles", nullptr, nullptr, 516, nullptr, "UDIM Tiles",
	"Collection of UDIM tiles",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UDIMTiles_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_UDIMTiles_new_func, (FunctionRNA *)&rna_UDIMTiles_remove_func}
};

/* Image User */
CollectionPropertyRNA rna_ImageUser_rna_properties = {
	{(PropertyRNA *)&rna_ImageUser_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImageUser_rna_properties_begin, ImageUser_rna_properties_next, ImageUser_rna_properties_end, ImageUser_rna_properties_get, nullptr, nullptr, ImageUser_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ImageUser_rna_type = {
	{(PropertyRNA *)&rna_ImageUser_use_auto_refresh, (PropertyRNA *)&rna_ImageUser_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImageUser_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_ImageUser_use_auto_refresh = {
	{(PropertyRNA *)&rna_ImageUser_frame_current, (PropertyRNA *)&rna_ImageUser_rna_type,
	-1, "use_auto_refresh", 1, 1, 0, 0, 0, "Auto Refresh",
	"Always refresh image on frame changes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImageUser_relations_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImageUser_use_auto_refresh_get, ImageUser_use_auto_refresh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_ImageUser_frame_current = {
	{(PropertyRNA *)&rna_ImageUser_use_cyclic, (PropertyRNA *)&rna_ImageUser_use_auto_refresh,
	-1, "frame_current", 3, 1, 0, 4, 0, "Current Frame",
	"Current frame number in image sequence or movie",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, framenr), (RawPropertyType)0, nullptr},
	ImageUser_frame_current_get, ImageUser_frame_current_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

BoolPropertyRNA rna_ImageUser_use_cyclic = {
	{(PropertyRNA *)&rna_ImageUser_frame_duration, (PropertyRNA *)&rna_ImageUser_frame_current,
	-1, "use_cyclic", 1, 1, 0, 4, 0, "Cyclic",
	"Cycle the images in the movie",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, cycl), (RawPropertyType)2, nullptr},
	ImageUser_use_cyclic_get, ImageUser_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_ImageUser_frame_duration = {
	{(PropertyRNA *)&rna_ImageUser_frame_offset, (PropertyRNA *)&rna_ImageUser_use_cyclic,
	-1, "frame_duration", 1, 1, 0, 4, 0, "Frames",
	"Number of images of a movie to use",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, frames), (RawPropertyType)0, nullptr},
	ImageUser_frame_duration_get, ImageUser_frame_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_ImageUser_frame_offset = {
	{(PropertyRNA *)&rna_ImageUser_frame_start, (PropertyRNA *)&rna_ImageUser_frame_duration,
	-1, "frame_offset", 3, 1, 0, 4, 0, "Offset",
	"Offset the number of the frame to use in the animation",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, offset), (RawPropertyType)0, nullptr},
	ImageUser_frame_offset_get, ImageUser_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_ImageUser_frame_start = {
	{(PropertyRNA *)&rna_ImageUser_multilayer_layer, (PropertyRNA *)&rna_ImageUser_frame_offset,
	-1, "frame_start", 1, 1, 0, 4, 0, "Start Frame",
	"Global starting frame of the movie/sequence, assuming first picture has a #1",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, sfra), (RawPropertyType)0, nullptr},
	ImageUser_frame_start_get, ImageUser_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_ImageUser_multilayer_layer = {
	{(PropertyRNA *)&rna_ImageUser_multilayer_pass, (PropertyRNA *)&rna_ImageUser_frame_start,
	-1, "multilayer_layer", 2, 1, 0, 4, 0, "Layer",
	"Layer in multilayer image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, layer), (RawPropertyType)1, nullptr},
	ImageUser_multilayer_layer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_ImageUser_multilayer_pass = {
	{(PropertyRNA *)&rna_ImageUser_multilayer_view, (PropertyRNA *)&rna_ImageUser_multilayer_layer,
	-1, "multilayer_pass", 2, 1, 0, 4, 0, "Pass",
	"Pass in multilayer image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, pass), (RawPropertyType)1, nullptr},
	ImageUser_multilayer_pass_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_ImageUser_multilayer_view = {
	{(PropertyRNA *)&rna_ImageUser_tile, (PropertyRNA *)&rna_ImageUser_multilayer_pass,
	-1, "multilayer_view", 2, 1, 0, 4, 0, "View",
	"View in multilayer image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, view), (RawPropertyType)1, nullptr},
	ImageUser_multilayer_view_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_ImageUser_tile = {
	{nullptr, (PropertyRNA *)&rna_ImageUser_multilayer_view,
	-1, "tile", 1, 1, 0, 4, 0, "Tile",
	"Tile in tiled image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImageUser, tile), (RawPropertyType)0, nullptr},
	ImageUser_tile_get, ImageUser_tile_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_ImageUser = {
	{(ContainerRNA *)&RNA_ImagePackedFile, (ContainerRNA *)&RNA_UDIMTiles,
	nullptr,
	{(PropertyRNA *)&rna_ImageUser_rna_properties, (PropertyRNA *)&rna_ImageUser_tile}},
	"ImageUser", nullptr, nullptr, 516, nullptr, "Image User",
	"Parameters defining how an Image data-block is used by another data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ImageUser_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ImageUser_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* ImagePackedFile */
CollectionPropertyRNA rna_ImagePackedFile_rna_properties = {
	{(PropertyRNA *)&rna_ImagePackedFile_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePackedFile_rna_properties_begin, ImagePackedFile_rna_properties_next, ImagePackedFile_rna_properties_end, ImagePackedFile_rna_properties_get, nullptr, nullptr, ImagePackedFile_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ImagePackedFile_rna_type = {
	{(PropertyRNA *)&rna_ImagePackedFile_packed_file, (PropertyRNA *)&rna_ImagePackedFile_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePackedFile_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ImagePackedFile_packed_file = {
	{(PropertyRNA *)&rna_ImagePackedFile_filepath, (PropertyRNA *)&rna_ImagePackedFile_rna_type,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePackedFile_packed_file_get, nullptr, nullptr, nullptr,&RNA_PackedFile
};

StringPropertyRNA rna_ImagePackedFile_filepath = {
	{(PropertyRNA *)&rna_ImagePackedFile_view, (PropertyRNA *)&rna_ImagePackedFile_packed_file,
	-1, "filepath", 262145, 0, 0, 0, 0, "filepath",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePackedFile_filepath_get, ImagePackedFile_filepath_length, ImagePackedFile_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

IntPropertyRNA rna_ImagePackedFile_view = {
	{(PropertyRNA *)&rna_ImagePackedFile_tile_number, (PropertyRNA *)&rna_ImagePackedFile_filepath,
	-1, "view", 2, 0, 0, 4, 0, "View Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePackedFile, view), (RawPropertyType)0, nullptr},
	ImagePackedFile_view_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_ImagePackedFile_tile_number = {
	{nullptr, (PropertyRNA *)&rna_ImagePackedFile_view,
	-1, "tile_number", 2, 0, 0, 4, 0, "Tile Number",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePackedFile, tile_number), (RawPropertyType)0, nullptr},
	ImagePackedFile_tile_number_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_ImagePackedFile_save_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"save", 20, "Save the packed file to its filepath",
	ImagePackedFile_save_call,
	nullptr
};

StructRNA RNA_ImagePackedFile = {
	{(ContainerRNA *)&RNA_Key, (ContainerRNA *)&RNA_ImageUser,
	nullptr,
	{(PropertyRNA *)&rna_ImagePackedFile_rna_properties, (PropertyRNA *)&rna_ImagePackedFile_tile_number}},
	"ImagePackedFile", nullptr, nullptr, 516, nullptr, "ImagePackedFile",
	"",
	"*", 17,
	(PropertyRNA *)&rna_ImagePackedFile_filepath, (PropertyRNA *)&rna_ImagePackedFile_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ImagePackedFile_save_func, (FunctionRNA *)&rna_ImagePackedFile_save_func}
};

