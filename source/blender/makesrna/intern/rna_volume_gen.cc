
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

#include "rna_volume.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_VolumeGrid_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VolumeGrid_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_VolumeGrid_name;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeGrid_data_type;
RNA_EXTERN_C IntPropertyRNA rna_VolumeGrid_channels;
RNA_EXTERN_C FloatPropertyRNA rna_VolumeGrid_matrix_object;
RNA_EXTERN_C BoolPropertyRNA rna_VolumeGrid_is_loaded;

extern FunctionRNA rna_VolumeGrid_load_func;
extern BoolPropertyRNA rna_VolumeGrid_load_success;

extern FunctionRNA rna_VolumeGrid_unload_func;


RNA_EXTERN_C CollectionPropertyRNA rna_VolumeDisplay_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VolumeDisplay_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_VolumeDisplay_density;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeDisplay_wireframe_type;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeDisplay_wireframe_detail;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeDisplay_interpolation_method;
RNA_EXTERN_C BoolPropertyRNA rna_VolumeDisplay_use_slice;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeDisplay_slice_axis;
RNA_EXTERN_C FloatPropertyRNA rna_VolumeDisplay_slice_depth;


RNA_EXTERN_C CollectionPropertyRNA rna_VolumeRender_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VolumeRender_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeRender_precision;
RNA_EXTERN_C EnumPropertyRNA rna_VolumeRender_space;
RNA_EXTERN_C FloatPropertyRNA rna_VolumeRender_step_size;
RNA_EXTERN_C FloatPropertyRNA rna_VolumeRender_clipping;


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

RNA_EXTERN_C StringPropertyRNA rna_Volume_filepath;
RNA_EXTERN_C PointerPropertyRNA rna_Volume_packed_file;
RNA_EXTERN_C BoolPropertyRNA rna_Volume_is_sequence;
RNA_EXTERN_C IntPropertyRNA rna_Volume_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_Volume_frame_duration;
RNA_EXTERN_C IntPropertyRNA rna_Volume_frame_offset;
RNA_EXTERN_C EnumPropertyRNA rna_Volume_sequence_mode;
RNA_EXTERN_C CollectionPropertyRNA rna_Volume_grids;
RNA_EXTERN_C CollectionPropertyRNA rna_Volume_materials;
RNA_EXTERN_C PointerPropertyRNA rna_Volume_display;
RNA_EXTERN_C PointerPropertyRNA rna_Volume_render;
RNA_EXTERN_C StringPropertyRNA rna_Volume_velocity_grid;
RNA_EXTERN_C EnumPropertyRNA rna_Volume_velocity_unit;
RNA_EXTERN_C FloatPropertyRNA rna_Volume_velocity_scale;
RNA_EXTERN_C StringPropertyRNA rna_Volume_velocity_x_grid;
RNA_EXTERN_C StringPropertyRNA rna_Volume_velocity_y_grid;
RNA_EXTERN_C StringPropertyRNA rna_Volume_velocity_z_grid;
RNA_EXTERN_C PointerPropertyRNA rna_Volume_animation_data;

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



RNA_EXTERN_C CollectionPropertyRNA rna_VolumeGrids_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VolumeGrids_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_VolumeGrids_active_index;
RNA_EXTERN_C StringPropertyRNA rna_VolumeGrids_error_message;
RNA_EXTERN_C BoolPropertyRNA rna_VolumeGrids_is_loaded;
RNA_EXTERN_C IntPropertyRNA rna_VolumeGrids_frame;
RNA_EXTERN_C StringPropertyRNA rna_VolumeGrids_frame_filepath;

extern FunctionRNA rna_VolumeGrids_load_func;
extern BoolPropertyRNA rna_VolumeGrids_load_success;

extern FunctionRNA rna_VolumeGrids_unload_func;
extern FunctionRNA rna_VolumeGrids_save_func;
extern StringPropertyRNA rna_VolumeGrids_save_filepath;
extern BoolPropertyRNA rna_VolumeGrids_save_success;


static PointerRNA VolumeGrid_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VolumeGrid_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VolumeGrid_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeGrid_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeGrid_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VolumeGrid_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeGrid_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VolumeGrid_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VolumeGrid_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void VolumeGrid_name_get(PointerRNA *ptr, char *value)
{
    rna_VolumeGrid_name_get(ptr, value);
}

RNA_EXTERN_C int VolumeGrid_name_length(PointerRNA *ptr)
{
    return rna_VolumeGrid_name_length(ptr);
}

RNA_EXTERN_C int VolumeGrid_data_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_VolumeGrid_data_type_get;
    return fn(ptr);
}

RNA_EXTERN_C int VolumeGrid_channels_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_VolumeGrid_channels_get;
    return fn(ptr);
}

RNA_EXTERN_C void VolumeGrid_matrix_object_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_VolumeGrid_matrix_object_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool VolumeGrid_is_loaded_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_VolumeGrid_is_loaded_get;
    return fn(ptr);
}

static PointerRNA VolumeDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VolumeDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VolumeDisplay_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeDisplay_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VolumeDisplay_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VolumeDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VolumeDisplay_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float VolumeDisplay_density_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (float)(data->density);
}

RNA_EXTERN_C void VolumeDisplay_density_set(PointerRNA *ptr, float value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
#ifdef __cplusplus
    data->density = (std::remove_reference_t<decltype(data->density)>)CLAMPIS(value, 0.0000100000f, FLT_MAX);
#else
    data->density = CLAMPIS(value, 0.0000100000f, FLT_MAX);
#endif
}

RNA_EXTERN_C int VolumeDisplay_wireframe_type_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->wireframe_type);
}

RNA_EXTERN_C void VolumeDisplay_wireframe_type_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
#ifdef __cplusplus
    data->wireframe_type = (std::remove_reference_t<decltype(data->wireframe_type)>)value;
#else
    data->wireframe_type = value;
#endif
}

RNA_EXTERN_C int VolumeDisplay_wireframe_detail_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->wireframe_detail);
}

RNA_EXTERN_C void VolumeDisplay_wireframe_detail_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
#ifdef __cplusplus
    data->wireframe_detail = (std::remove_reference_t<decltype(data->wireframe_detail)>)value;
#else
    data->wireframe_detail = value;
#endif
}

RNA_EXTERN_C int VolumeDisplay_interpolation_method_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->interpolation_method);
}

RNA_EXTERN_C void VolumeDisplay_interpolation_method_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
#ifdef __cplusplus
    data->interpolation_method = (std::remove_reference_t<decltype(data->interpolation_method)>)value;
#else
    data->interpolation_method = value;
#endif
}

RNA_EXTERN_C bool VolumeDisplay_use_slice_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (((data->axis_slice_method) & 1) != 0);
}

RNA_EXTERN_C void VolumeDisplay_use_slice_set(PointerRNA *ptr, bool value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    if (value) { data->axis_slice_method |= 1; }
    else { data->axis_slice_method &= ~1; }
}

RNA_EXTERN_C int VolumeDisplay_slice_axis_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (int)(data->slice_axis);
}

RNA_EXTERN_C void VolumeDisplay_slice_axis_set(PointerRNA *ptr, int value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
#ifdef __cplusplus
    data->slice_axis = (std::remove_reference_t<decltype(data->slice_axis)>)value;
#else
    data->slice_axis = value;
#endif
}

RNA_EXTERN_C float VolumeDisplay_slice_depth_get(PointerRNA *ptr)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
    return (float)(data->slice_depth);
}

RNA_EXTERN_C void VolumeDisplay_slice_depth_set(PointerRNA *ptr, float value)
{
    VolumeDisplay *data = (VolumeDisplay *)(ptr->data);
#ifdef __cplusplus
    data->slice_depth = (std::remove_reference_t<decltype(data->slice_depth)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->slice_depth = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

static PointerRNA VolumeRender_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VolumeRender_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VolumeRender_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeRender_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeRender_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VolumeRender_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeRender_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VolumeRender_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VolumeRender_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int VolumeRender_precision_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (int)(data->precision);
}

RNA_EXTERN_C void VolumeRender_precision_set(PointerRNA *ptr, int value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
#ifdef __cplusplus
    data->precision = (std::remove_reference_t<decltype(data->precision)>)value;
#else
    data->precision = value;
#endif
}

RNA_EXTERN_C int VolumeRender_space_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (int)(data->space);
}

RNA_EXTERN_C void VolumeRender_space_set(PointerRNA *ptr, int value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
#ifdef __cplusplus
    data->space = (std::remove_reference_t<decltype(data->space)>)value;
#else
    data->space = value;
#endif
}

RNA_EXTERN_C float VolumeRender_step_size_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (float)(data->step_size);
}

RNA_EXTERN_C void VolumeRender_step_size_set(PointerRNA *ptr, float value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
#ifdef __cplusplus
    data->step_size = (std::remove_reference_t<decltype(data->step_size)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->step_size = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float VolumeRender_clipping_get(PointerRNA *ptr)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
    return (float)(data->clipping);
}

RNA_EXTERN_C void VolumeRender_clipping_set(PointerRNA *ptr, float value)
{
    VolumeRender *data = (VolumeRender *)(ptr->data);
#ifdef __cplusplus
    data->clipping = (std::remove_reference_t<decltype(data->clipping)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->clipping = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void Volume_filepath_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int Volume_filepath_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void Volume_filepath_set(PointerRNA *ptr, const char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C PointerRNA Volume_packed_file_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

RNA_EXTERN_C bool Volume_is_sequence_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (bool)(data->is_sequence);
}

RNA_EXTERN_C void Volume_is_sequence_set(PointerRNA *ptr, bool value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->is_sequence = (std::remove_reference_t<decltype(data->is_sequence)>)value;
#else
    data->is_sequence = value;
#endif
}

RNA_EXTERN_C int Volume_frame_start_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->frame_start);
}

RNA_EXTERN_C void Volume_frame_start_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->frame_start = (std::remove_reference_t<decltype(data->frame_start)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->frame_start = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int Volume_frame_duration_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->frame_duration);
}

RNA_EXTERN_C void Volume_frame_duration_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->frame_duration = (std::remove_reference_t<decltype(data->frame_duration)>)CLAMPIS(value, 0, 1048574);
#else
    data->frame_duration = CLAMPIS(value, 0, 1048574);
#endif
}

RNA_EXTERN_C int Volume_frame_offset_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->frame_offset);
}

RNA_EXTERN_C void Volume_frame_offset_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->frame_offset = (std::remove_reference_t<decltype(data->frame_offset)>)value;
#else
    data->frame_offset = value;
#endif
}

RNA_EXTERN_C int Volume_sequence_mode_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->sequence_mode);
}

RNA_EXTERN_C void Volume_sequence_mode_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->sequence_mode = (std::remove_reference_t<decltype(data->sequence_mode)>)value;
#else
    data->sequence_mode = value;
#endif
}

RNA_EXTERN_C int Volume_grids_length(PointerRNA *ptr)
{
    return rna_Volume_grids_length(ptr);
}

static PointerRNA Volume_grids_get(CollectionPropertyIterator *iter)
{
    return rna_Volume_grids_get(iter);
}

RNA_EXTERN_C void Volume_grids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Volume_grids;

    rna_Volume_grids_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Volume_grids_get(iter);
    }
}

RNA_EXTERN_C void Volume_grids_next(CollectionPropertyIterator *iter)
{
    rna_Volume_grids_next(iter);

    if (iter->valid) {
        iter->ptr = Volume_grids_get(iter);
    }
}

RNA_EXTERN_C void Volume_grids_end(CollectionPropertyIterator *iter)
{
    rna_Volume_grids_end(iter);
}

RNA_EXTERN_C int Volume_materials_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Volume_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void Volume_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Volume_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Volume_materials_get(iter);
    }
}

RNA_EXTERN_C void Volume_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Volume_materials_get(iter);
    }
}

RNA_EXTERN_C void Volume_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Volume_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Volume_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Volume_materials_get(&iter); }
    }

    Volume_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Volume_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Volume_materials_begin(&iter, ptr);

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
        Volume_materials_next(&iter);
    }
    Volume_materials_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Volume_display_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VolumeDisplay, &data->display);
}

RNA_EXTERN_C PointerRNA Volume_render_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VolumeRender, &data->render);
}

RNA_EXTERN_C void Volume_velocity_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->velocity_grid) < 64);
    strcpy(value, data->velocity_grid);
}

RNA_EXTERN_C int Volume_velocity_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->velocity_grid);
}

RNA_EXTERN_C void Volume_velocity_grid_set(PointerRNA *ptr, const char *value)
{
    rna_Volume_velocity_grid_set(ptr, value);
}

RNA_EXTERN_C int Volume_velocity_unit_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->velocity_unit);
}

RNA_EXTERN_C void Volume_velocity_unit_set(PointerRNA *ptr, int value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->velocity_unit = (std::remove_reference_t<decltype(data->velocity_unit)>)value;
#else
    data->velocity_unit = value;
#endif
}

RNA_EXTERN_C float Volume_velocity_scale_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (float)(data->velocity_scale);
}

RNA_EXTERN_C void Volume_velocity_scale_set(PointerRNA *ptr, float value)
{
    Volume *data = (Volume *)(ptr->data);
#ifdef __cplusplus
    data->velocity_scale = (std::remove_reference_t<decltype(data->velocity_scale)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->velocity_scale = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void Volume_velocity_x_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->runtime.velocity_x_grid) < 64);
    strcpy(value, data->runtime.velocity_x_grid);
}

RNA_EXTERN_C int Volume_velocity_x_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->runtime.velocity_x_grid);
}

RNA_EXTERN_C void Volume_velocity_y_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->runtime.velocity_y_grid) < 64);
    strcpy(value, data->runtime.velocity_y_grid);
}

RNA_EXTERN_C int Volume_velocity_y_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->runtime.velocity_y_grid);
}

RNA_EXTERN_C void Volume_velocity_z_grid_get(PointerRNA *ptr, char *value)
{
    Volume *data = (Volume *)(ptr->data);
    BLI_assert(strlen(data->runtime.velocity_z_grid) < 64);
    strcpy(value, data->runtime.velocity_z_grid);
}

RNA_EXTERN_C int Volume_velocity_z_grid_length(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return strlen(data->runtime.velocity_z_grid);
}

RNA_EXTERN_C PointerRNA Volume_animation_data_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA VolumeGrids_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VolumeGrids_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VolumeGrids_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VolumeGrids_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeGrids_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VolumeGrids_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VolumeGrids_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VolumeGrids_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VolumeGrids_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int VolumeGrids_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_VolumeGrids_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void VolumeGrids_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_VolumeGrids_active_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C void VolumeGrids_error_message_get(PointerRNA *ptr, char *value)
{
    rna_VolumeGrids_error_message_get(ptr, value);
}

RNA_EXTERN_C int VolumeGrids_error_message_length(PointerRNA *ptr)
{
    return rna_VolumeGrids_error_message_length(ptr);
}

RNA_EXTERN_C bool VolumeGrids_is_loaded_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_VolumeGrids_is_loaded_get;
    return fn(ptr);
}

RNA_EXTERN_C int VolumeGrids_frame_get(PointerRNA *ptr)
{
    Volume *data = (Volume *)(ptr->data);
    return (int)(data->runtime.frame);
}

RNA_EXTERN_C void VolumeGrids_frame_filepath_get(PointerRNA *ptr, char *value)
{
    rna_VolumeGrids_frame_filepath_get(ptr, value);
}

RNA_EXTERN_C int VolumeGrids_frame_filepath_length(PointerRNA *ptr)
{
    return rna_VolumeGrids_frame_filepath_length(ptr);
}

RNA_EXTERN_C bool VolumeGrid_load_func(struct ID *_selfid, struct VolumeGrid *_self)
{
	return rna_VolumeGrid_load(_selfid, _self);
}

static void VolumeGrid_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct VolumeGrid *_self;
	bool success;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct VolumeGrid *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	success = rna_VolumeGrid_load(_selfid, _self);
	*((bool *)_retdata) = success;
}

RNA_EXTERN_C void VolumeGrid_unload_func(struct ID *_selfid, struct VolumeGrid *_self)
{
	rna_VolumeGrid_unload(_selfid, _self);
}

static void VolumeGrid_unload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct VolumeGrid *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct VolumeGrid *)_ptr->data;
	
	rna_VolumeGrid_unload(_selfid, _self);
}

/* Repeated prototypes to detect errors */

bool rna_VolumeGrid_load(struct ID *_selfid, struct VolumeGrid *_self);
void rna_VolumeGrid_unload(struct ID *_selfid, struct VolumeGrid *_self);




RNA_EXTERN_C bool VolumeGrids_load_func(struct Volume *_self, Main *bmain)
{
	return rna_Volume_load(_self, bmain);
}

static void VolumeGrids_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Volume *_self;
	bool success;
	char *_data, *_retdata;
	
	_self = (struct Volume *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	success = rna_Volume_load(_self, CTX_data_main(C));
	*((bool *)_retdata) = success;
}

RNA_EXTERN_C void VolumeGrids_unload_func(struct Volume *_self)
{
	BKE_volume_unload(_self);
}

static void VolumeGrids_unload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Volume *_self;
	_self = (struct Volume *)_ptr->data;
	
	BKE_volume_unload(_self);
}

RNA_EXTERN_C bool VolumeGrids_save_func(struct Volume *_self, Main *bmain, ReportList *reports, const char * filepath)
{
	return rna_Volume_save(_self, bmain, reports, filepath);
}

static void VolumeGrids_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Volume *_self;
	const char * filepath;
	bool success;
	char *_data, *_retdata;
	
	_self = (struct Volume *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	success = rna_Volume_save(_self, CTX_data_main(C), reports, filepath);
	*((bool *)_retdata) = success;
}

/* Repeated prototypes to detect errors */

bool rna_Volume_load(struct Volume *_self, Main *bmain);
void BKE_volume_unload(struct Volume *_self);
bool rna_Volume_save(struct Volume *_self, Main *bmain, ReportList *reports, const char * filepath);

/* Volume Grid */
CollectionPropertyRNA rna_VolumeGrid_rna_properties = {
	{(PropertyRNA *)&rna_VolumeGrid_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrid_rna_properties_begin, VolumeGrid_rna_properties_next, VolumeGrid_rna_properties_end, VolumeGrid_rna_properties_get, nullptr, nullptr, VolumeGrid_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VolumeGrid_rna_type = {
	{(PropertyRNA *)&rna_VolumeGrid_name, (PropertyRNA *)&rna_VolumeGrid_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrid_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_VolumeGrid_name = {
	{(PropertyRNA *)&rna_VolumeGrid_data_type, (PropertyRNA *)&rna_VolumeGrid_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Volume grid name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrid_name_get, VolumeGrid_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_VolumeGrid_data_type = {
	{(PropertyRNA *)&rna_VolumeGrid_channels, (PropertyRNA *)&rna_VolumeGrid_name,
	-1, "data_type", 2, 0, 0, 0, 0, "Data Type",
	"Data type of voxel values",
	0, "Volume",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrid_data_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_volume_grid_data_type_items, 11, 0
};

IntPropertyRNA rna_VolumeGrid_channels = {
	{(PropertyRNA *)&rna_VolumeGrid_matrix_object, (PropertyRNA *)&rna_VolumeGrid_data_type,
	-1, "channels", 2, 0, 0, 0, 0, "Channels",
	"Number of dimensions of the grid data type",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrid_channels_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static float rna_VolumeGrid_matrix_object_default[16] = {
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

FloatPropertyRNA rna_VolumeGrid_matrix_object = {
	{(PropertyRNA *)&rna_VolumeGrid_is_loaded, (PropertyRNA *)&rna_VolumeGrid_channels,
	-1, "matrix_object", 2, 0, 0, 0, 0, "Matrix Object",
	"Transformation matrix from voxel index to object space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, VolumeGrid_matrix_object_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_VolumeGrid_matrix_object_default
};

BoolPropertyRNA rna_VolumeGrid_is_loaded = {
	{nullptr, (PropertyRNA *)&rna_VolumeGrid_matrix_object,
	-1, "is_loaded", 2, 0, 0, 0, 0, "Is Loaded",
	"Grid tree is loaded in memory",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrid_is_loaded_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_VolumeGrid_load_success = {
	{nullptr, nullptr,
	-1, "success", 3, 0, 2, 0, 0, "",
	"True if grid tree was successfully loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_VolumeGrid_load_func = {
	{(FunctionRNA *)&rna_VolumeGrid_unload_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_VolumeGrid_load_success, (PropertyRNA *)&rna_VolumeGrid_load_success}},
	"load", 2048, "Load grid tree from file",
	VolumeGrid_load_call,
	(PropertyRNA *)&rna_VolumeGrid_load_success
};

FunctionRNA rna_VolumeGrid_unload_func = {
	{nullptr, (FunctionRNA *)&rna_VolumeGrid_load_func,
	nullptr,
	{nullptr, nullptr}},
	"unload", 2048, "Unload grid tree and voxel data from memory, leaving only metadata",
	VolumeGrid_unload_call,
	nullptr
};

StructRNA RNA_VolumeGrid = {
	{(ContainerRNA *)&RNA_VolumeDisplay, (ContainerRNA *)&RNA_VectorFont,
	nullptr,
	{(PropertyRNA *)&rna_VolumeGrid_rna_properties, (PropertyRNA *)&rna_VolumeGrid_is_loaded}},
	"VolumeGrid", nullptr, nullptr, 516, nullptr, "Volume Grid",
	"3D volume grid",
	"*", 658,
	(PropertyRNA *)&rna_VolumeGrid_name, (PropertyRNA *)&rna_VolumeGrid_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_VolumeGrid_load_func, (FunctionRNA *)&rna_VolumeGrid_unload_func}
};

/* Volume Display */
CollectionPropertyRNA rna_VolumeDisplay_rna_properties = {
	{(PropertyRNA *)&rna_VolumeDisplay_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeDisplay_rna_properties_begin, VolumeDisplay_rna_properties_next, VolumeDisplay_rna_properties_end, VolumeDisplay_rna_properties_get, nullptr, nullptr, VolumeDisplay_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VolumeDisplay_rna_type = {
	{(PropertyRNA *)&rna_VolumeDisplay_density, (PropertyRNA *)&rna_VolumeDisplay_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeDisplay_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_VolumeDisplay_density = {
	{(PropertyRNA *)&rna_VolumeDisplay_wireframe_type, (PropertyRNA *)&rna_VolumeDisplay_rna_type,
	-1, "density", 1, 0, 0, 4, 0, "Density",
	"Thickness of volume display in the viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeDisplay, density), (RawPropertyType)5, nullptr},
	VolumeDisplay_density_get, VolumeDisplay_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 100.0f, 0.0000100000f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_VolumeDisplay_wireframe_type_items[5] = {
	{0, "NONE", 0, "None", "Don\'t display volume in wireframe mode"},
	{1, "BOUNDS", 0, "Bounds", "Display single bounding box for the entire grid"},
	{2, "BOXES", 0, "Boxes", "Display bounding boxes for nodes in the volume tree"},
	{3, "POINTS", 0, "Points", "Display points for nodes in the volume tree"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VolumeDisplay_wireframe_type = {
	{(PropertyRNA *)&rna_VolumeDisplay_wireframe_detail, (PropertyRNA *)&rna_VolumeDisplay_density,
	-1, "wireframe_type", 3, 0, 0, 4, 0, "Wireframe",
	"Type of wireframe display",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeDisplay, wireframe_type), (RawPropertyType)0, nullptr},
	VolumeDisplay_wireframe_type_get, VolumeDisplay_wireframe_type_set, nullptr, nullptr, nullptr, rna_VolumeDisplay_wireframe_type_items, 4, 0
};

static const EnumPropertyItem rna_VolumeDisplay_wireframe_detail_items[3] = {
	{0, "COARSE", 0, "Coarse", "Display one box or point for each intermediate tree node"},
	{1, "FINE", 0, "Fine", "Display box for each leaf node containing 8×8 voxels"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VolumeDisplay_wireframe_detail = {
	{(PropertyRNA *)&rna_VolumeDisplay_interpolation_method, (PropertyRNA *)&rna_VolumeDisplay_wireframe_type,
	-1, "wireframe_detail", 3, 0, 0, 4, 0, "Wireframe Detail",
	"Amount of detail for wireframe display",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeDisplay, wireframe_detail), (RawPropertyType)0, nullptr},
	VolumeDisplay_wireframe_detail_get, VolumeDisplay_wireframe_detail_set, nullptr, nullptr, nullptr, rna_VolumeDisplay_wireframe_detail_items, 2, 0
};

static const EnumPropertyItem rna_VolumeDisplay_interpolation_method_items[4] = {
	{0, "LINEAR", 0, "Linear", "Good smoothness and speed"},
	{1, "CUBIC", 0, "Cubic", "Smoothed high quality interpolation, but slower"},
	{2, "CLOSEST", 0, "Closest", "No interpolation"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VolumeDisplay_interpolation_method = {
	{(PropertyRNA *)&rna_VolumeDisplay_use_slice, (PropertyRNA *)&rna_VolumeDisplay_wireframe_detail,
	-1, "interpolation_method", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation method to use for volumes in solid mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeDisplay, interpolation_method), (RawPropertyType)0, nullptr},
	VolumeDisplay_interpolation_method_get, VolumeDisplay_interpolation_method_set, nullptr, nullptr, nullptr, rna_VolumeDisplay_interpolation_method_items, 3, 0
};

BoolPropertyRNA rna_VolumeDisplay_use_slice = {
	{(PropertyRNA *)&rna_VolumeDisplay_slice_axis, (PropertyRNA *)&rna_VolumeDisplay_interpolation_method,
	-1, "use_slice", 3, 0, 0, 0, 0, "Slice",
	"Perform a single slice of the domain object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeDisplay_use_slice_get, VolumeDisplay_use_slice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_VolumeDisplay_slice_axis_items[5] = {
	{0, "AUTO", 0, "Auto", "Adjust slice direction according to the view direction"},
	{1, "X", 0, "X", "Slice along the X axis"},
	{2, "Y", 0, "Y", "Slice along the Y axis"},
	{3, "Z", 0, "Z", "Slice along the Z axis"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VolumeDisplay_slice_axis = {
	{(PropertyRNA *)&rna_VolumeDisplay_slice_depth, (PropertyRNA *)&rna_VolumeDisplay_use_slice,
	-1, "slice_axis", 3, 0, 0, 4, 0, "Axis",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeDisplay, slice_axis), (RawPropertyType)0, nullptr},
	VolumeDisplay_slice_axis_get, VolumeDisplay_slice_axis_set, nullptr, nullptr, nullptr, rna_VolumeDisplay_slice_axis_items, 4, 0
};

FloatPropertyRNA rna_VolumeDisplay_slice_depth = {
	{nullptr, (PropertyRNA *)&rna_VolumeDisplay_slice_axis,
	-1, "slice_depth", 3, 0, 0, 4, 0, "Position",
	"Position of the slice",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeDisplay, slice_depth), (RawPropertyType)5, nullptr},
	VolumeDisplay_slice_depth_get, VolumeDisplay_slice_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, nullptr
};

StructRNA RNA_VolumeDisplay = {
	{(ContainerRNA *)&RNA_VolumeRender, (ContainerRNA *)&RNA_VolumeGrid,
	nullptr,
	{(PropertyRNA *)&rna_VolumeDisplay_rna_properties, (PropertyRNA *)&rna_VolumeDisplay_slice_depth}},
	"VolumeDisplay", nullptr, nullptr, 516, nullptr, "Volume Display",
	"Volume object display settings for 3D viewport",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_VolumeDisplay_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_VolumeDisplay_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Volume Render */
CollectionPropertyRNA rna_VolumeRender_rna_properties = {
	{(PropertyRNA *)&rna_VolumeRender_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeRender_rna_properties_begin, VolumeRender_rna_properties_next, VolumeRender_rna_properties_end, VolumeRender_rna_properties_get, nullptr, nullptr, VolumeRender_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VolumeRender_rna_type = {
	{(PropertyRNA *)&rna_VolumeRender_precision, (PropertyRNA *)&rna_VolumeRender_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeRender_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_VolumeRender_precision_items[4] = {
	{1, "FULL", 0, "Full", "Full float (Use 32 bit for all data)"},
	{0, "HALF", 0, "Half", "Half float (Use 16 bit for all data)"},
	{2, "VARIABLE", 0, "Variable", "Use variable bit quantization"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VolumeRender_precision = {
	{(PropertyRNA *)&rna_VolumeRender_space, (PropertyRNA *)&rna_VolumeRender_rna_type,
	-1, "precision", 3, 0, 0, 4, 0, "Precision",
	"Specify volume data precision. Lower values reduce memory consumption at the cost of detail",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeRender, precision), (RawPropertyType)0, nullptr},
	VolumeRender_precision_get, VolumeRender_precision_set, nullptr, nullptr, nullptr, rna_VolumeRender_precision_items, 3, 0
};

static const EnumPropertyItem rna_VolumeRender_space_items[3] = {
	{0, "OBJECT", 0, "Object", "Keep volume opacity and detail the same regardless of object scale"},
	{1, "WORLD", 0, "World", "Specify volume step size and density in world space"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VolumeRender_space = {
	{(PropertyRNA *)&rna_VolumeRender_step_size, (PropertyRNA *)&rna_VolumeRender_precision,
	-1, "space", 3, 0, 0, 4, 0, "Space",
	"Specify volume density and step size in object or world space",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeRender, space), (RawPropertyType)0, nullptr},
	VolumeRender_space_get, VolumeRender_space_set, nullptr, nullptr, nullptr, rna_VolumeRender_space_items, 2, 0
};

FloatPropertyRNA rna_VolumeRender_step_size = {
	{(PropertyRNA *)&rna_VolumeRender_clipping, (PropertyRNA *)&rna_VolumeRender_space,
	-1, "step_size", 1, 0, 0, 4, 0, "Step Size",
	"Distance between volume samples. Lower values render more detail at the cost of performance. If set to zero, the step size is automatically determined based on voxel size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeRender, step_size), (RawPropertyType)5, nullptr},
	VolumeRender_step_size_get, VolumeRender_step_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_VolumeRender_clipping = {
	{nullptr, (PropertyRNA *)&rna_VolumeRender_step_size,
	-1, "clipping", 3, 0, 0, 4, 0, "Clipping",
	"Value under which voxels are considered empty space to optimize rendering",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VolumeRender, clipping), (RawPropertyType)5, nullptr},
	VolumeRender_clipping_get, VolumeRender_clipping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, nullptr
};

StructRNA RNA_VolumeRender = {
	{(ContainerRNA *)&RNA_Volume, (ContainerRNA *)&RNA_VolumeDisplay,
	nullptr,
	{(PropertyRNA *)&rna_VolumeRender_rna_properties, (PropertyRNA *)&rna_VolumeRender_clipping}},
	"VolumeRender", nullptr, nullptr, 516, nullptr, "Volume Render",
	"Volume object render settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_VolumeRender_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_VolumeRender_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Volume */
StringPropertyRNA rna_Volume_filepath = {
	{(PropertyRNA *)&rna_Volume_packed_file, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Volume file used by this Volume data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Volume_update_filepath, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_filepath_get, Volume_filepath_length, Volume_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_Volume_packed_file = {
	{(PropertyRNA *)&rna_Volume_is_sequence, (PropertyRNA *)&rna_Volume_filepath,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_packed_file_get, nullptr, nullptr, nullptr,&RNA_PackedFile
};

BoolPropertyRNA rna_Volume_is_sequence = {
	{(PropertyRNA *)&rna_Volume_frame_start, (PropertyRNA *)&rna_Volume_packed_file,
	-1, "is_sequence", 1, 0, 0, 4, 0, "Sequence",
	"Whether the cache is separated in a series of files",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_is_sequence, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, is_sequence), (RawPropertyType)2, nullptr},
	Volume_is_sequence_get, Volume_is_sequence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Volume_frame_start = {
	{(PropertyRNA *)&rna_Volume_frame_duration, (PropertyRNA *)&rna_Volume_is_sequence,
	-1, "frame_start", 1, 0, 0, 4, 0, "Start Frame",
	"Global starting frame of the sequence, assuming first has a #1",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_filepath, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, frame_start), (RawPropertyType)0, nullptr},
	Volume_frame_start_get, Volume_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 1, nullptr
};

IntPropertyRNA rna_Volume_frame_duration = {
	{(PropertyRNA *)&rna_Volume_frame_offset, (PropertyRNA *)&rna_Volume_frame_start,
	-1, "frame_duration", 1, 0, 0, 4, 0, "Frames",
	"Number of frames of the sequence to use",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_filepath, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, frame_duration), (RawPropertyType)0, nullptr},
	Volume_frame_duration_get, Volume_frame_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, 0, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_Volume_frame_offset = {
	{(PropertyRNA *)&rna_Volume_sequence_mode, (PropertyRNA *)&rna_Volume_frame_duration,
	-1, "frame_offset", 3, 0, 0, 4, 0, "Offset",
	"Offset the number of the frame to use in the animation",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_filepath, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, frame_offset), (RawPropertyType)0, nullptr},
	Volume_frame_offset_get, Volume_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_Volume_sequence_mode_items[5] = {
	{0, "CLIP", 0, "Clip", "Hide frames outside the specified frame range"},
	{1, "EXTEND", 0, "Extend", "Repeat the start frame before, and the end frame after the frame range"},
	{2, "REPEAT", 0, "Repeat", "Cycle the frames in the sequence"},
	{3, "PING_PONG", 0, "Ping-Pong", "Repeat the frames, reversing the playback direction every other cycle"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Volume_sequence_mode = {
	{(PropertyRNA *)&rna_Volume_grids, (PropertyRNA *)&rna_Volume_frame_offset,
	-1, "sequence_mode", 1, 0, 0, 4, 0, "Sequence Mode",
	"Sequence playback mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_filepath, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, sequence_mode), (RawPropertyType)2, nullptr},
	Volume_sequence_mode_get, Volume_sequence_mode_set, nullptr, nullptr, nullptr, rna_Volume_sequence_mode_items, 4, 0
};

CollectionPropertyRNA rna_Volume_grids = {
	{(PropertyRNA *)&rna_Volume_materials, (PropertyRNA *)&rna_Volume_sequence_mode,
	-1, "grids", 0, 0, 0, 0, 0, "Grids",
	"3D volume grids",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_VolumeGrids},
	Volume_grids_begin, Volume_grids_next, Volume_grids_end, Volume_grids_get, Volume_grids_length, nullptr, nullptr, nullptr, &RNA_VolumeGrid
};

CollectionPropertyRNA rna_Volume_materials = {
	{(PropertyRNA *)&rna_Volume_display, (PropertyRNA *)&rna_Volume_grids,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDMaterials},
	Volume_materials_begin, Volume_materials_next, Volume_materials_end, Volume_materials_get, Volume_materials_length, Volume_materials_lookup_int, Volume_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

PointerPropertyRNA rna_Volume_display = {
	{(PropertyRNA *)&rna_Volume_render, (PropertyRNA *)&rna_Volume_materials,
	-1, "display", 8388608, 0, 0, 0, 0, "Display",
	"Volume display settings for 3D viewport",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_display_get, nullptr, nullptr, nullptr,&RNA_VolumeDisplay
};

PointerPropertyRNA rna_Volume_render = {
	{(PropertyRNA *)&rna_Volume_velocity_grid, (PropertyRNA *)&rna_Volume_display,
	-1, "render", 8388608, 0, 0, 0, 0, "Render",
	"Volume render settings for 3D viewport",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_render_get, nullptr, nullptr, nullptr,&RNA_VolumeRender
};

StringPropertyRNA rna_Volume_velocity_grid = {
	{(PropertyRNA *)&rna_Volume_velocity_unit, (PropertyRNA *)&rna_Volume_render,
	-1, "velocity_grid", 262145, 0, 0, 0, 0, "Velocity Grid",
	"Name of the velocity field, or the base name if the velocity is split into multiple grids",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_velocity_grid_get, Volume_velocity_grid_length, Volume_velocity_grid_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_Volume_velocity_unit = {
	{(PropertyRNA *)&rna_Volume_velocity_scale, (PropertyRNA *)&rna_Volume_velocity_grid,
	-1, "velocity_unit", 1, 0, 0, 4, 0, "Velocity Unit",
	"Define how the velocity vectors are interpreted with regard to time, \'frame\' means the delta time is 1 frame, \'second\' means the delta time is 1 / FPS",
	0, "Unit",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, velocity_unit), (RawPropertyType)2, nullptr},
	Volume_velocity_unit_get, Volume_velocity_unit_set, nullptr, nullptr, nullptr, rna_enum_velocity_unit_items, 2, 0
};

FloatPropertyRNA rna_Volume_velocity_scale = {
	{(PropertyRNA *)&rna_Volume_velocity_x_grid, (PropertyRNA *)&rna_Volume_velocity_unit,
	-1, "velocity_scale", 3, 0, 0, 4, 0, "Velocity Scale",
	"Factor to control the amount of motion blur",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, velocity_scale), (RawPropertyType)5, nullptr},
	Volume_velocity_scale_get, Volume_velocity_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

StringPropertyRNA rna_Volume_velocity_x_grid = {
	{(PropertyRNA *)&rna_Volume_velocity_y_grid, (PropertyRNA *)&rna_Volume_velocity_scale,
	-1, "velocity_x_grid", 262144, 0, 0, 0, 0, "Velocity X Grid",
	"Name of the grid for the X axis component of the velocity field if it was split into multiple grids",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_velocity_x_grid_get, Volume_velocity_x_grid_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_Volume_velocity_y_grid = {
	{(PropertyRNA *)&rna_Volume_velocity_z_grid, (PropertyRNA *)&rna_Volume_velocity_x_grid,
	-1, "velocity_y_grid", 262144, 0, 0, 0, 0, "Velocity Y Grid",
	"Name of the grid for the Y axis component of the velocity field if it was split into multiple grids",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_velocity_y_grid_get, Volume_velocity_y_grid_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_Volume_velocity_z_grid = {
	{(PropertyRNA *)&rna_Volume_animation_data, (PropertyRNA *)&rna_Volume_velocity_y_grid,
	-1, "velocity_z_grid", 262144, 0, 0, 0, 0, "Velocity Z Grid",
	"Name of the grid for the Z axis component of the velocity field if it was split into multiple grids",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Volume_velocity_z_grid_get, Volume_velocity_z_grid_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_Volume_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Volume_velocity_z_grid,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Volume_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

StructRNA RNA_Volume = {
	{(ContainerRNA *)&RNA_VolumeGrids, (ContainerRNA *)&RNA_VolumeRender,
	nullptr,
	{(PropertyRNA *)&rna_Volume_filepath, (PropertyRNA *)&rna_Volume_animation_data}},
	"Volume", nullptr, nullptr, 519, nullptr, "Volume",
	"Volume data-block for 3D volume grids",
	"*", 658,
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

/* Volume Grids */
CollectionPropertyRNA rna_VolumeGrids_rna_properties = {
	{(PropertyRNA *)&rna_VolumeGrids_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrids_rna_properties_begin, VolumeGrids_rna_properties_next, VolumeGrids_rna_properties_end, VolumeGrids_rna_properties_get, nullptr, nullptr, VolumeGrids_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VolumeGrids_rna_type = {
	{(PropertyRNA *)&rna_VolumeGrids_active_index, (PropertyRNA *)&rna_VolumeGrids_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrids_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_VolumeGrids_active_index = {
	{(PropertyRNA *)&rna_VolumeGrids_error_message, (PropertyRNA *)&rna_VolumeGrids_rna_type,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Grid Index",
	"Index of active volume grid",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Volume_update_display, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrids_active_index_get, VolumeGrids_active_index_set, nullptr, nullptr, rna_VolumeGrids_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_VolumeGrids_error_message = {
	{(PropertyRNA *)&rna_VolumeGrids_is_loaded, (PropertyRNA *)&rna_VolumeGrids_active_index,
	-1, "error_message", 262144, 0, 0, 0, 0, "Error Message",
	"If loading grids failed, error message with details",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrids_error_message_get, VolumeGrids_error_message_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_VolumeGrids_is_loaded = {
	{(PropertyRNA *)&rna_VolumeGrids_frame, (PropertyRNA *)&rna_VolumeGrids_error_message,
	-1, "is_loaded", 2, 0, 0, 0, 0, "Is Loaded",
	"List of grids and metadata are loaded in memory",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrids_is_loaded_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_VolumeGrids_frame = {
	{(PropertyRNA *)&rna_VolumeGrids_frame_filepath, (PropertyRNA *)&rna_VolumeGrids_is_loaded,
	-1, "frame", 2, 0, 0, 4, 0, "Frame",
	"Frame number that volume grids will be loaded at, based on scene time and volume parameters",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Volume, runtime.frame), (RawPropertyType)0, nullptr},
	VolumeGrids_frame_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_VolumeGrids_frame_filepath = {
	{nullptr, (PropertyRNA *)&rna_VolumeGrids_frame,
	-1, "frame_filepath", 262144, 0, 0, 0, 0, "Frame File Path",
	"Volume file used for loading the volume at the current frame. Empty if the volume has not be loaded or the frame only exists in memory",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VolumeGrids_frame_filepath_get, VolumeGrids_frame_filepath_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_VolumeGrids_load_success = {
	{nullptr, nullptr,
	-1, "success", 3, 0, 2, 0, 0, "",
	"True if grid list was successfully loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_VolumeGrids_load_func = {
	{(FunctionRNA *)&rna_VolumeGrids_unload_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_VolumeGrids_load_success, (PropertyRNA *)&rna_VolumeGrids_load_success}},
	"load", 4, "Load list of grids and metadata from file",
	VolumeGrids_load_call,
	(PropertyRNA *)&rna_VolumeGrids_load_success
};

FunctionRNA rna_VolumeGrids_unload_func = {
	{(FunctionRNA *)&rna_VolumeGrids_save_func, (FunctionRNA *)&rna_VolumeGrids_load_func,
	nullptr,
	{nullptr, nullptr}},
	"unload", 0, "Unload all grid and voxel data from memory",
	VolumeGrids_unload_call,
	nullptr
};

StringPropertyRNA rna_VolumeGrids_save_filepath = {
	{(PropertyRNA *)&rna_VolumeGrids_save_success, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"File path to save to",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_VolumeGrids_save_success = {
	{nullptr, (PropertyRNA *)&rna_VolumeGrids_save_filepath,
	-1, "success", 3, 0, 2, 0, 0, "",
	"True if grid list was successfully loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_VolumeGrids_save_func = {
	{nullptr, (FunctionRNA *)&rna_VolumeGrids_unload_func,
	nullptr,
	{(PropertyRNA *)&rna_VolumeGrids_save_filepath, (PropertyRNA *)&rna_VolumeGrids_save_success}},
	"save", 20, "Save grids and metadata to file",
	VolumeGrids_save_call,
	(PropertyRNA *)&rna_VolumeGrids_save_success
};

StructRNA RNA_VolumeGrids = {
	{(ContainerRNA *)&RNA_Operator, (ContainerRNA *)&RNA_Volume,
	nullptr,
	{(PropertyRNA *)&rna_VolumeGrids_rna_properties, (PropertyRNA *)&rna_VolumeGrids_frame_filepath}},
	"VolumeGrids", nullptr, nullptr, 516, nullptr, "Volume Grids",
	"3D volume grids",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_VolumeGrids_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_VolumeGrids_load_func, (FunctionRNA *)&rna_VolumeGrids_save_func}
};

