
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

#include "rna_gpencil_legacy.cc"

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

RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencil_layers;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencil_animation_data;
RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencil_materials;
RNA_EXTERN_C EnumPropertyRNA rna_GreasePencil_stroke_depth_order;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_stroke_edit_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_is_stroke_paint_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_is_stroke_sculpt_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_is_stroke_weight_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_is_stroke_vertex_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_onion_skinning;
RNA_EXTERN_C EnumPropertyRNA rna_GreasePencil_stroke_thickness_space;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_pixel_factor;
RNA_EXTERN_C IntPropertyRNA rna_GreasePencil_edit_curve_resolution;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_adaptive_curve_resolution;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_curve_edit_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_curve_edit_corner_angle;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_multiedit;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_curve_edit;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_autolock_layers;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_edit_line_color;
RNA_EXTERN_C IntPropertyRNA rna_GreasePencil_ghost_before_range;
RNA_EXTERN_C IntPropertyRNA rna_GreasePencil_ghost_after_range;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_ghost_custom_colors;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_before_color;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_after_color;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_ghosts_always;
RNA_EXTERN_C EnumPropertyRNA rna_GreasePencil_onion_mode;
RNA_EXTERN_C EnumPropertyRNA rna_GreasePencil_onion_keyframe_type;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_onion_fade;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_use_onion_loop;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_onion_factor;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencil_zdepth_offset;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencil_is_annotation;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencil_grid;

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


extern FunctionRNA rna_GreasePencil_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilLayers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilLayers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilLayers_active;
RNA_EXTERN_C IntPropertyRNA rna_GreasePencilLayers_active_index;
RNA_EXTERN_C EnumPropertyRNA rna_GreasePencilLayers_active_note;

extern FunctionRNA rna_GreasePencilLayers_new_func;
extern StringPropertyRNA rna_GreasePencilLayers_new_name;
extern BoolPropertyRNA rna_GreasePencilLayers_new_set_active;
extern PointerPropertyRNA rna_GreasePencilLayers_new_layer;

extern FunctionRNA rna_GreasePencilLayers_remove_func;
extern PointerPropertyRNA rna_GreasePencilLayers_remove_layer;

extern FunctionRNA rna_GreasePencilLayers_move_func;
extern PointerPropertyRNA rna_GreasePencilLayers_move_layer;
extern EnumPropertyRNA rna_GreasePencilLayers_move_type;



RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilGrid_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilGrid_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencilGrid_scale;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencilGrid_color;
RNA_EXTERN_C IntPropertyRNA rna_GreasePencilGrid_lines;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencilGrid_offset;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_GPencilLayer_info;
RNA_EXTERN_C CollectionPropertyRNA rna_GPencilLayer_frames;
RNA_EXTERN_C CollectionPropertyRNA rna_GPencilLayer_mask_layers;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilLayer_active_frame;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_opacity;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_channel_color;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_annotation_opacity;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_color;
RNA_EXTERN_C IntPropertyRNA rna_GPencilLayer_thickness;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_tint_color;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_tint_factor;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_vertex_paint_opacity;
RNA_EXTERN_C IntPropertyRNA rna_GPencilLayer_line_change;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_use_onion_skinning;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_use_annotation_onion_skinning;
RNA_EXTERN_C IntPropertyRNA rna_GPencilLayer_annotation_onion_before_range;
RNA_EXTERN_C IntPropertyRNA rna_GPencilLayer_annotation_onion_after_range;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_annotation_onion_before_color;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_annotation_onion_after_color;
RNA_EXTERN_C IntPropertyRNA rna_GPencilLayer_pass_index;
RNA_EXTERN_C StringPropertyRNA rna_GPencilLayer_viewlayer_render;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_use_viewlayer_masks;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilLayer_blend_mode;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_location;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_scale;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_matrix_layer;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_matrix_inverse_layer;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_hide;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_annotation_hide;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_lock;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_lock_frame;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_lock_material;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_use_mask_layer;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_use_lights;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_use_solo_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_is_ruler;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_select;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_show_points;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_show_in_front;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilLayer_parent;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilLayer_parent_type;
RNA_EXTERN_C StringPropertyRNA rna_GPencilLayer_parent_bone;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilLayer_matrix_inverse;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayer_is_parented;

extern FunctionRNA rna_GPencilLayer_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilFrames_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilFrames_rna_type;

extern FunctionRNA rna_GPencilFrames_new_func;
extern IntPropertyRNA rna_GPencilFrames_new_frame_number;
extern BoolPropertyRNA rna_GPencilFrames_new_active;
extern PointerPropertyRNA rna_GPencilFrames_new_frame;

extern FunctionRNA rna_GPencilFrames_remove_func;
extern PointerPropertyRNA rna_GPencilFrames_remove_frame;

extern FunctionRNA rna_GPencilFrames_copy_func;
extern PointerPropertyRNA rna_GPencilFrames_copy_source;
extern PointerPropertyRNA rna_GPencilFrames_copy_copy;



RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilMaskLayers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilMaskLayers_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_GreasePencilMaskLayers_active_mask_index;

extern FunctionRNA rna_GreasePencilMaskLayers_add_func;
extern PointerPropertyRNA rna_GreasePencilMaskLayers_add_layer;

extern FunctionRNA rna_GreasePencilMaskLayers_remove_func;
extern PointerPropertyRNA rna_GreasePencilMaskLayers_remove_mask;



RNA_EXTERN_C CollectionPropertyRNA rna_GPencilLayerMask_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilLayerMask_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_GPencilLayerMask_name;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayerMask_hide;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilLayerMask_invert;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilFrame_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilFrame_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_GPencilFrame_strokes;
RNA_EXTERN_C IntPropertyRNA rna_GPencilFrame_frame_number;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilFrame_keyframe_type;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilFrame_is_edited;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilFrame_select;

extern FunctionRNA rna_GPencilFrame_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilStrokes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilStrokes_rna_type;

extern FunctionRNA rna_GPencilStrokes_new_func;
extern PointerPropertyRNA rna_GPencilStrokes_new_stroke;

extern FunctionRNA rna_GPencilStrokes_remove_func;
extern PointerPropertyRNA rna_GPencilStrokes_remove_stroke;

extern FunctionRNA rna_GPencilStrokes_close_func;
extern PointerPropertyRNA rna_GPencilStrokes_close_stroke;



RNA_EXTERN_C CollectionPropertyRNA rna_GPencilStroke_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilStroke_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_GPencilStroke_points;
RNA_EXTERN_C CollectionPropertyRNA rna_GPencilStroke_triangles;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilStroke_edit_curve;
RNA_EXTERN_C IntPropertyRNA rna_GPencilStroke_material_index;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilStroke_display_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilStroke_select;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilStroke_use_cyclic;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilStroke_has_edit_curve;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilStroke_start_cap_mode;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilStroke_end_cap_mode;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilStroke_is_nofill_stroke;
RNA_EXTERN_C IntPropertyRNA rna_GPencilStroke_line_width;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_hardness;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_bound_box_min;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_bound_box_max;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_aspect;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_uv_translation;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_uv_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_uv_scale;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_vertex_color_fill;
RNA_EXTERN_C IntPropertyRNA rna_GPencilStroke_select_index;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStroke_time_start;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilStrokePoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilStrokePoints_rna_type;

extern FunctionRNA rna_GPencilStrokePoints_add_func;
extern IntPropertyRNA rna_GPencilStrokePoints_add_count;
extern FloatPropertyRNA rna_GPencilStrokePoints_add_pressure;
extern FloatPropertyRNA rna_GPencilStrokePoints_add_strength;

extern FunctionRNA rna_GPencilStrokePoints_pop_func;
extern IntPropertyRNA rna_GPencilStrokePoints_pop_index;

extern FunctionRNA rna_GPencilStrokePoints_update_func;
extern FunctionRNA rna_GPencilStrokePoints_weight_get_func;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_get_vertex_group_index;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_get_point_index;
extern FloatPropertyRNA rna_GPencilStrokePoints_weight_get_weight;

extern FunctionRNA rna_GPencilStrokePoints_weight_set_func;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_set_vertex_group_index;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_set_point_index;
extern FloatPropertyRNA rna_GPencilStrokePoints_weight_set_weight;



RNA_EXTERN_C CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilStrokePoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_pressure;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_strength;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_uv_factor;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_uv_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_uv_fill;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilStrokePoint_select;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_time;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilStrokePoint_vertex_color;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilTriangle_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilTriangle_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_GPencilTriangle_v1;
RNA_EXTERN_C IntPropertyRNA rna_GPencilTriangle_v2;
RNA_EXTERN_C IntPropertyRNA rna_GPencilTriangle_v3;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilEditCurve_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilEditCurve_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_GPencilEditCurve_curve_points;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilEditCurve_select;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilEditCurvePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilEditCurvePoint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilEditCurvePoint_select_left_handle;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilEditCurvePoint_select_right_handle;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilEditCurvePoint_select_control_point;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilEditCurvePoint_hide;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_handle_left;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_handle_right;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_pressure;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_strength;
RNA_EXTERN_C IntPropertyRNA rna_GPencilEditCurvePoint_point_index;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_uv_factor;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_uv_rotation;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilEditCurvePoint_vertex_color;


RNA_EXTERN_C CollectionPropertyRNA rna_GpencilVertexGroupElement_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GpencilVertexGroupElement_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_GpencilVertexGroupElement_group;
RNA_EXTERN_C FloatPropertyRNA rna_GpencilVertexGroupElement_weight;

static PointerRNA GreasePencil_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilLayer, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void GreasePencil_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencil_layers;

    rna_iterator_listbase_begin(iter, &data->layers, nullptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_layers_get(iter);
    }
}

RNA_EXTERN_C void GreasePencil_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_layers_get(iter);
    }
}

RNA_EXTERN_C void GreasePencil_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencil_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GreasePencil_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_layers_get(&iter); }
    }

    GreasePencil_layers_end(&iter);

    return found;
}

RNA_EXTERN_C int GPencilLayer_info_length(PointerRNA *);
RNA_EXTERN_C void GPencilLayer_info_get(PointerRNA *, char *);

RNA_EXTERN_C int GreasePencil_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencil_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GPencilLayer_info_length(&iter.ptr);
            if (namelen < 1024) {
                GPencilLayer_info_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                GPencilLayer_info_get(&iter.ptr, name);
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
        GreasePencil_layers_next(&iter);
    }
    GreasePencil_layers_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA GreasePencil_animation_data_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C int GreasePencil_materials_length(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA GreasePencil_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void GreasePencil_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencil_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_materials_get(iter);
    }
}

RNA_EXTERN_C void GreasePencil_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_materials_get(iter);
    }
}

RNA_EXTERN_C void GreasePencil_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int GreasePencil_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GreasePencil_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_materials_get(&iter); }
    }

    GreasePencil_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int GreasePencil_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencil_materials_begin(&iter, ptr);

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
        GreasePencil_materials_next(&iter);
    }
    GreasePencil_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int GreasePencil_stroke_depth_order_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->draw_mode);
}

RNA_EXTERN_C void GreasePencil_stroke_depth_order_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->draw_mode = (std::remove_reference_t<decltype(data->draw_mode)>)value;
#else
    data->draw_mode = value;
#endif
}

RNA_EXTERN_C bool GreasePencil_use_stroke_edit_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void GreasePencil_use_stroke_edit_mode_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool GreasePencil_is_stroke_paint_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C bool GreasePencil_is_stroke_sculpt_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C bool GreasePencil_is_stroke_weight_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C bool GreasePencil_is_stroke_vertex_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

RNA_EXTERN_C bool GreasePencil_use_onion_skinning_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void GreasePencil_use_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C int GreasePencil_stroke_thickness_space_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return ((data->flag) & 32768);
}

RNA_EXTERN_C void GreasePencil_stroke_thickness_space_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->flag &= ~32768;
    data->flag |= value;
}

RNA_EXTERN_C float GreasePencil_pixel_factor_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->pixfactor);
}

RNA_EXTERN_C void GreasePencil_pixel_factor_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->pixfactor = (std::remove_reference_t<decltype(data->pixfactor)>)CLAMPIS(value, 0.1000000015f, 30.0f);
#else
    data->pixfactor = CLAMPIS(value, 0.1000000015f, 30.0f);
#endif
}

RNA_EXTERN_C int GreasePencil_edit_curve_resolution_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->curve_edit_resolution);
}

RNA_EXTERN_C void GreasePencil_edit_curve_resolution_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->curve_edit_resolution = (std::remove_reference_t<decltype(data->curve_edit_resolution)>)CLAMPIS(value, 1, 256);
#else
    data->curve_edit_resolution = CLAMPIS(value, 1, 256);
#endif
}

RNA_EXTERN_C bool GreasePencil_use_adaptive_curve_resolution_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 4194304) != 0);
}

RNA_EXTERN_C void GreasePencil_use_adaptive_curve_resolution_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

RNA_EXTERN_C float GreasePencil_curve_edit_threshold_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->curve_edit_threshold);
}

RNA_EXTERN_C void GreasePencil_curve_edit_threshold_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->curve_edit_threshold = (std::remove_reference_t<decltype(data->curve_edit_threshold)>)CLAMPIS(value, 0.0000000000f, 10.0f);
#else
    data->curve_edit_threshold = CLAMPIS(value, 0.0000000000f, 10.0f);
#endif
}

RNA_EXTERN_C float GreasePencil_curve_edit_corner_angle_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->curve_edit_corner_angle);
}

RNA_EXTERN_C void GreasePencil_curve_edit_corner_angle_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->curve_edit_corner_angle = (std::remove_reference_t<decltype(data->curve_edit_corner_angle)>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->curve_edit_corner_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C bool GreasePencil_use_multiedit_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

RNA_EXTERN_C void GreasePencil_use_multiedit_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

RNA_EXTERN_C bool GreasePencil_use_curve_edit_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 2097152) != 0);
}

RNA_EXTERN_C void GreasePencil_use_curve_edit_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 2097152; }
    else { data->flag &= ~2097152; }
}

RNA_EXTERN_C bool GreasePencil_use_autolock_layers_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 1048576) != 0);
}

RNA_EXTERN_C void GreasePencil_use_autolock_layers_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 1048576; }
    else { data->flag &= ~1048576; }
}

RNA_EXTERN_C void GreasePencil_edit_line_color_get(PointerRNA *ptr, float values[4])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->line_color)[i]);
    }
}

RNA_EXTERN_C void GreasePencil_edit_line_color_set(PointerRNA *ptr, const float values[4])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->line_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int GreasePencil_ghost_before_range_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->gstep);
}

RNA_EXTERN_C void GreasePencil_ghost_before_range_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->gstep = (std::remove_reference_t<decltype(data->gstep)>)CLAMPIS(value, 0, 120);
#else
    data->gstep = CLAMPIS(value, 0, 120);
#endif
}

RNA_EXTERN_C int GreasePencil_ghost_after_range_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->gstep_next);
}

RNA_EXTERN_C void GreasePencil_ghost_after_range_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->gstep_next = (std::remove_reference_t<decltype(data->gstep_next)>)CLAMPIS(value, 0, 120);
#else
    data->gstep_next = CLAMPIS(value, 0, 120);
#endif
}

RNA_EXTERN_C bool GreasePencil_use_ghost_custom_colors_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 3) != 0);
}

RNA_EXTERN_C void GreasePencil_use_ghost_custom_colors_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 3; }
    else { data->onion_flag &= ~3; }
}

RNA_EXTERN_C void GreasePencil_before_color_get(PointerRNA *ptr, float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_prev)[i]);
    }
}

RNA_EXTERN_C void GreasePencil_before_color_set(PointerRNA *ptr, const float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_prev)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void GreasePencil_after_color_get(PointerRNA *ptr, float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_next)[i]);
    }
}

RNA_EXTERN_C void GreasePencil_after_color_set(PointerRNA *ptr, const float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_next)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C bool GreasePencil_use_ghosts_always_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 4) != 0);
}

RNA_EXTERN_C void GreasePencil_use_ghosts_always_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 4; }
    else { data->onion_flag &= ~4; }
}

RNA_EXTERN_C int GreasePencil_onion_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->onion_mode);
}

RNA_EXTERN_C void GreasePencil_onion_mode_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->onion_mode = (std::remove_reference_t<decltype(data->onion_mode)>)value;
#else
    data->onion_mode = value;
#endif
}

RNA_EXTERN_C int GreasePencil_onion_keyframe_type_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->onion_keytype);
}

RNA_EXTERN_C void GreasePencil_onion_keyframe_type_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->onion_keytype = (std::remove_reference_t<decltype(data->onion_keytype)>)value;
#else
    data->onion_keytype = value;
#endif
}

RNA_EXTERN_C bool GreasePencil_use_onion_fade_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 8) != 0);
}

RNA_EXTERN_C void GreasePencil_use_onion_fade_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 8; }
    else { data->onion_flag &= ~8; }
}

RNA_EXTERN_C bool GreasePencil_use_onion_loop_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 16) != 0);
}

RNA_EXTERN_C void GreasePencil_use_onion_loop_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 16; }
    else { data->onion_flag &= ~16; }
}

RNA_EXTERN_C float GreasePencil_onion_factor_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->onion_factor);
}

RNA_EXTERN_C void GreasePencil_onion_factor_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->onion_factor = (std::remove_reference_t<decltype(data->onion_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->onion_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float GreasePencil_zdepth_offset_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->zdepth_offset);
}

RNA_EXTERN_C void GreasePencil_zdepth_offset_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
#ifdef __cplusplus
    data->zdepth_offset = (std::remove_reference_t<decltype(data->zdepth_offset)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->zdepth_offset = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool GreasePencil_is_annotation_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C PointerRNA GreasePencil_grid_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GreasePencilGrid, &data->grid);
}

static PointerRNA GreasePencilLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GreasePencilLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencilLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilLayers_active_get(PointerRNA *ptr)
{
    return rna_GPencil_active_layer_get(ptr);
}

RNA_EXTERN_C void GreasePencilLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GPencil_active_layer_set(ptr, value, reports);
}

RNA_EXTERN_C int GreasePencilLayers_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_GPencil_active_layer_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void GreasePencilLayers_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_GPencil_active_layer_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int GreasePencilLayers_active_note_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_GPencil_active_layer_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void GreasePencilLayers_active_note_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_GPencil_active_layer_index_set;
    fn(ptr, value);
}

static PointerRNA GreasePencilGrid_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GreasePencilGrid_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilGrid_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilGrid_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilGrid_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilGrid_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilGrid_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencilGrid_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilGrid_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GreasePencilGrid_scale_get(PointerRNA *ptr, float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

RNA_EXTERN_C void GreasePencilGrid_scale_set(PointerRNA *ptr, const float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->scale)[i] = CLAMPIS(values[i], 0.0099999998f, FLT_MAX);
    }
}

RNA_EXTERN_C void GreasePencilGrid_color_get(PointerRNA *ptr, float values[3])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void GreasePencilGrid_color_set(PointerRNA *ptr, const float values[3])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int GreasePencilGrid_lines_get(PointerRNA *ptr)
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    return (int)(data->lines);
}

RNA_EXTERN_C void GreasePencilGrid_lines_set(PointerRNA *ptr, int value)
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
#ifdef __cplusplus
    data->lines = (std::remove_reference_t<decltype(data->lines)>)CLAMPIS(value, 0, 32767);
#else
    data->lines = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C void GreasePencilGrid_offset_get(PointerRNA *ptr, float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

RNA_EXTERN_C void GreasePencilGrid_offset_set(PointerRNA *ptr, const float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

static PointerRNA GPencilLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GPencilLayer_info_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_assert(strlen(data->info) < 128);
    strcpy(value, data->info);
}

RNA_EXTERN_C int GPencilLayer_info_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->info);
}

RNA_EXTERN_C void GPencilLayer_info_set(PointerRNA *ptr, const char *value)
{
    rna_GPencilLayer_info_set(ptr, value);
}

static PointerRNA GPencilLayer_frames_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilFrame, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void GPencilLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayer_frames;

    rna_iterator_listbase_begin(iter, &data->frames, nullptr);

    if (iter->valid) {
        iter->ptr = GPencilLayer_frames_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayer_frames_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayer_frames_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayer_frames_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilLayer_frames_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilLayer_frames_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilLayer_frames_get(&iter); }
    }

    GPencilLayer_frames_end(&iter);

    return found;
}

static PointerRNA GPencilLayer_mask_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilLayerMask, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void GPencilLayer_mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayer_mask_layers;

    rna_iterator_listbase_begin(iter, &data->mask_layers, nullptr);

    if (iter->valid) {
        iter->ptr = GPencilLayer_mask_layers_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayer_mask_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayer_mask_layers_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayer_mask_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilLayer_mask_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilLayer_mask_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilLayer_mask_layers_get(&iter); }
    }

    GPencilLayer_mask_layers_end(&iter);

    return found;
}

RNA_EXTERN_C int GPencilLayerMask_name_length(PointerRNA *);
RNA_EXTERN_C void GPencilLayerMask_name_get(PointerRNA *, char *);

RNA_EXTERN_C int GPencilLayer_mask_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GPencilLayer_mask_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GPencilLayerMask_name_length(&iter.ptr);
            if (namelen < 1024) {
                GPencilLayerMask_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                GPencilLayerMask_name_get(&iter.ptr, name);
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
        GPencilLayer_mask_layers_next(&iter);
    }
    GPencilLayer_mask_layers_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA GPencilLayer_active_frame_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GPencilFrame, data->actframe);
}

RNA_EXTERN_C float GPencilLayer_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->opacity);
}

RNA_EXTERN_C void GPencilLayer_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->opacity = (std::remove_reference_t<decltype(data->opacity)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->opacity = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void GPencilLayer_channel_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_channel_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float GPencilLayer_annotation_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->opacity);
}

RNA_EXTERN_C void GPencilLayer_annotation_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->opacity = (std::remove_reference_t<decltype(data->opacity)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->opacity = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void GPencilLayer_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int GPencilLayer_thickness_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->thickness);
}

RNA_EXTERN_C void GPencilLayer_thickness_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->thickness = (std::remove_reference_t<decltype(data->thickness)>)CLAMPIS(value, 1, 10);
#else
    data->thickness = CLAMPIS(value, 1, 10);
#endif
}

RNA_EXTERN_C void GPencilLayer_tint_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tintcolor)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_tint_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->tintcolor)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float GPencilLayer_tint_factor_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->tintcolor[3]);
}

RNA_EXTERN_C void GPencilLayer_tint_factor_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->tintcolor[3] = (std::remove_reference_t<decltype(data->tintcolor[3])>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->tintcolor[3] = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float GPencilLayer_vertex_paint_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->vertex_paint_opacity);
}

RNA_EXTERN_C void GPencilLayer_vertex_paint_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->vertex_paint_opacity = (std::remove_reference_t<decltype(data->vertex_paint_opacity)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->vertex_paint_opacity = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int GPencilLayer_line_change_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->line_change);
}

RNA_EXTERN_C void GPencilLayer_line_change_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->line_change = (std::remove_reference_t<decltype(data->line_change)>)CLAMPIS(value, -300, 300);
#else
    data->line_change = CLAMPIS(value, -300, 300);
#endif
}

RNA_EXTERN_C bool GPencilLayer_use_onion_skinning_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->onion_flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilLayer_use_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->onion_flag |= 1; }
    else { data->onion_flag &= ~1; }
}

RNA_EXTERN_C bool GPencilLayer_use_annotation_onion_skinning_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->onion_flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilLayer_use_annotation_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->onion_flag |= 1; }
    else { data->onion_flag &= ~1; }
}

RNA_EXTERN_C int GPencilLayer_annotation_onion_before_range_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->gstep);
}

RNA_EXTERN_C void GPencilLayer_annotation_onion_before_range_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->gstep = (std::remove_reference_t<decltype(data->gstep)>)CLAMPIS(value, -1, 120);
#else
    data->gstep = CLAMPIS(value, -1, 120);
#endif
}

RNA_EXTERN_C int GPencilLayer_annotation_onion_after_range_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->gstep_next);
}

RNA_EXTERN_C void GPencilLayer_annotation_onion_after_range_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->gstep_next = (std::remove_reference_t<decltype(data->gstep_next)>)CLAMPIS(value, -1, 120);
#else
    data->gstep_next = CLAMPIS(value, -1, 120);
#endif
}

RNA_EXTERN_C void GPencilLayer_annotation_onion_before_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_prev)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_annotation_onion_before_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_prev)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void GPencilLayer_annotation_onion_after_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_next)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_annotation_onion_after_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_next)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int GPencilLayer_pass_index_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->pass_index);
}

RNA_EXTERN_C void GPencilLayer_pass_index_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->pass_index = (std::remove_reference_t<decltype(data->pass_index)>)CLAMPIS(value, 0, 32767);
#else
    data->pass_index = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C void GPencilLayer_viewlayer_render_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_assert(strlen(data->viewlayername) < 64);
    strcpy(value, data->viewlayername);
}

RNA_EXTERN_C int GPencilLayer_viewlayer_render_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->viewlayername);
}

RNA_EXTERN_C void GPencilLayer_viewlayer_render_set(PointerRNA *ptr, const char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_strncpy_utf8(data->viewlayername, value, 64);
}

RNA_EXTERN_C bool GPencilLayer_use_viewlayer_masks_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !(((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void GPencilLayer_use_viewlayer_masks_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

RNA_EXTERN_C int GPencilLayer_blend_mode_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->blend_mode);
}

RNA_EXTERN_C void GPencilLayer_blend_mode_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
#ifdef __cplusplus
    data->blend_mode = (std::remove_reference_t<decltype(data->blend_mode)>)value;
#else
    data->blend_mode = value;
#endif
}

RNA_EXTERN_C void GPencilLayer_location_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->location)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_location_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->location)[i] = values[i];
    }
}

RNA_EXTERN_C void GPencilLayer_rotation_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rotation)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_rotation_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rotation)[i] = values[i];
    }
}

RNA_EXTERN_C void GPencilLayer_scale_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_scale_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

RNA_EXTERN_C void GPencilLayer_matrix_layer_get(PointerRNA *ptr, float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->layer_mat)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_matrix_inverse_layer_get(PointerRNA *ptr, float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->layer_invmat)[i]);
    }
}

RNA_EXTERN_C bool GPencilLayer_hide_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilLayer_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GPencilLayer_annotation_hide_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilLayer_annotation_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GPencilLayer_lock_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GPencilLayer_lock_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool GPencilLayer_lock_frame_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void GPencilLayer_lock_frame_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool GPencilLayer_lock_material_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !(((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void GPencilLayer_lock_material_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool GPencilLayer_use_mask_layer_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void GPencilLayer_use_mask_layer_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool GPencilLayer_use_lights_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void GPencilLayer_use_lights_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool GPencilLayer_use_solo_mode_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void GPencilLayer_use_solo_mode_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool GPencilLayer_is_ruler_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C bool GPencilLayer_select_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void GPencilLayer_select_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool GPencilLayer_show_points_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void GPencilLayer_show_points_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool GPencilLayer_show_in_front_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !(((data->flag) & 128) != 0);
}

RNA_EXTERN_C void GPencilLayer_show_in_front_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C PointerRNA GPencilLayer_parent_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

RNA_EXTERN_C void GPencilLayer_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GPencilLayer_parent_set(ptr, value, reports);
}

RNA_EXTERN_C int GPencilLayer_parent_type_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((data->partype) & 7);
}

RNA_EXTERN_C void GPencilLayer_parent_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_GPencilLayer_parent_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C void GPencilLayer_parent_bone_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_assert(strlen(data->parsubstr) < 64);
    strcpy(value, data->parsubstr);
}

RNA_EXTERN_C int GPencilLayer_parent_bone_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->parsubstr);
}

RNA_EXTERN_C void GPencilLayer_parent_bone_set(PointerRNA *ptr, const char *value)
{
    rna_GPencilLayer_parent_bone_set(ptr, value);
}

RNA_EXTERN_C void GPencilLayer_matrix_inverse_get(PointerRNA *ptr, float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->inverse)[i]);
    }
}

RNA_EXTERN_C void GPencilLayer_matrix_inverse_set(PointerRNA *ptr, const float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        ((float *)data->inverse)[i] = values[i];
    }
}

RNA_EXTERN_C bool GPencilLayer_is_parented_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GPencilLayer_is_parented_get;
    return fn(ptr);
}

static PointerRNA GPencilFrames_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilFrames_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilFrames_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilFrames_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilFrames_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilFrames_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilFrames_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilFrames_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilFrames_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GreasePencilMaskLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GreasePencilMaskLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilMaskLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilMaskLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilMaskLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilMaskLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencilMaskLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilMaskLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int GreasePencilMaskLayers_active_mask_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_GPencil_active_mask_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void GreasePencilMaskLayers_active_mask_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_GPencil_active_mask_index_set;
    fn(ptr, value);
}

static PointerRNA GPencilLayerMask_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilLayerMask_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayerMask_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilLayerMask_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayerMask_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayerMask_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilLayerMask_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilLayerMask_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilLayerMask_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GPencilLayerMask_name_get(PointerRNA *ptr, char *value)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    BLI_assert(strlen(data->name) < 128);
    strcpy(value, data->name);
}

RNA_EXTERN_C int GPencilLayerMask_name_length(PointerRNA *ptr)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void GPencilLayerMask_name_set(PointerRNA *ptr, const char *value)
{
    rna_GPencilLayer_mask_info_set(ptr, value);
}

RNA_EXTERN_C bool GPencilLayerMask_hide_get(PointerRNA *ptr)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilLayerMask_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GPencilLayerMask_invert_get(PointerRNA *ptr)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GPencilLayerMask_invert_set(PointerRNA *ptr, bool value)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA GPencilFrame_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilFrame_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilFrame_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilFrame_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilFrame_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilFrame_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilFrame_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilFrame_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilFrame_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilFrame_strokes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStroke, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void GPencilFrame_strokes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilFrame_strokes;

    rna_iterator_listbase_begin(iter, &data->strokes, nullptr);

    if (iter->valid) {
        iter->ptr = GPencilFrame_strokes_get(iter);
    }
}

RNA_EXTERN_C void GPencilFrame_strokes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilFrame_strokes_get(iter);
    }
}

RNA_EXTERN_C void GPencilFrame_strokes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilFrame_strokes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilFrame_strokes_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilFrame_strokes_get(&iter); }
    }

    GPencilFrame_strokes_end(&iter);

    return found;
}

RNA_EXTERN_C int GPencilFrame_frame_number_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (int)(data->framenum);
}

RNA_EXTERN_C void GPencilFrame_frame_number_set(PointerRNA *ptr, int value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
#ifdef __cplusplus
    data->framenum = (std::remove_reference_t<decltype(data->framenum)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->framenum = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int GPencilFrame_keyframe_type_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (int)(data->key_type);
}

RNA_EXTERN_C void GPencilFrame_keyframe_type_set(PointerRNA *ptr, int value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
#ifdef __cplusplus
    data->key_type = (std::remove_reference_t<decltype(data->key_type)>)value;
#else
    data->key_type = value;
#endif
}

RNA_EXTERN_C bool GPencilFrame_is_edited_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilFrame_is_edited_set(PointerRNA *ptr, bool value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GPencilFrame_select_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GPencilFrame_select_set(PointerRNA *ptr, bool value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA GPencilStrokes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilStrokes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStrokes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStrokes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStrokes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStrokes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStrokes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilStrokes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilStrokes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStroke_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilStroke_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStroke_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStroke_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStroke_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStroke_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStroke_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilStroke_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilStroke_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int GPencilStroke_points_length(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (data->points == nullptr) ? 0 : data->totpoints;
}

static PointerRNA GPencilStroke_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStrokePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void GPencilStroke_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStroke_points;

    rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->totpoints, 0, nullptr);

    if (iter->valid) {
        iter->ptr = GPencilStroke_points_get(iter);
    }
}

RNA_EXTERN_C void GPencilStroke_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStroke_points_get(iter);
    }
}

RNA_EXTERN_C void GPencilStroke_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int GPencilStroke_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilStroke_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilStroke_points_get(&iter); }
    }

    GPencilStroke_points_end(&iter);

    return found;
}

RNA_EXTERN_C int GPencilStroke_triangles_length(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (data->triangles == nullptr) ? 0 : data->tot_triangles;
}

static PointerRNA GPencilStroke_triangles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilTriangle, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void GPencilStroke_triangles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStroke_triangles;

    rna_iterator_array_begin(iter, data->triangles, sizeof(data->triangles[0]), data->tot_triangles, 0, nullptr);

    if (iter->valid) {
        iter->ptr = GPencilStroke_triangles_get(iter);
    }
}

RNA_EXTERN_C void GPencilStroke_triangles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStroke_triangles_get(iter);
    }
}

RNA_EXTERN_C void GPencilStroke_triangles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int GPencilStroke_triangles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilStroke_triangles_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilStroke_triangles_get(&iter); }
    }

    GPencilStroke_triangles_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA GPencilStroke_edit_curve_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GPencilEditCurve, data->editcurve);
}

RNA_EXTERN_C int GPencilStroke_material_index_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->mat_nr);
}

RNA_EXTERN_C void GPencilStroke_material_index_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->mat_nr = (std::remove_reference_t<decltype(data->mat_nr)>)value;
#else
    data->mat_nr = value;
#endif
}

RNA_EXTERN_C int GPencilStroke_display_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return ((data->flag) & 7);
}

RNA_EXTERN_C void GPencilStroke_display_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->flag &= ~7;
    data->flag |= value;
}

RNA_EXTERN_C bool GPencilStroke_select_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void GPencilStroke_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GPencil_stroke_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool GPencilStroke_use_cyclic_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void GPencilStroke_use_cyclic_set(PointerRNA *ptr, bool value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool GPencilStroke_has_edit_curve_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_stroke_has_edit_curve_get;
    return fn(ptr);
}

RNA_EXTERN_C int GPencilStroke_start_cap_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->caps[0]);
}

RNA_EXTERN_C void GPencilStroke_start_cap_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->caps[0] = (std::remove_reference_t<decltype(data->caps[0])>)value;
#else
    data->caps[0] = value;
#endif
}

RNA_EXTERN_C int GPencilStroke_end_cap_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->caps[1]);
}

RNA_EXTERN_C void GPencilStroke_end_cap_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->caps[1] = (std::remove_reference_t<decltype(data->caps[1])>)value;
#else
    data->caps[1] = value;
#endif
}

RNA_EXTERN_C bool GPencilStroke_is_nofill_stroke_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void GPencilStroke_is_nofill_stroke_set(PointerRNA *ptr, bool value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C int GPencilStroke_line_width_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->thickness);
}

RNA_EXTERN_C void GPencilStroke_line_width_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->thickness = (std::remove_reference_t<decltype(data->thickness)>)CLAMPIS(value, 1, 1000);
#else
    data->thickness = CLAMPIS(value, 1, 1000);
#endif
}

RNA_EXTERN_C float GPencilStroke_hardness_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->hardness);
}

RNA_EXTERN_C void GPencilStroke_hardness_set(PointerRNA *ptr, float value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->hardness = (std::remove_reference_t<decltype(data->hardness)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->hardness = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C void GPencilStroke_bound_box_min_get(PointerRNA *ptr, float values[3])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->boundbox_min)[i]);
    }
}

RNA_EXTERN_C void GPencilStroke_bound_box_max_get(PointerRNA *ptr, float values[3])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->boundbox_max)[i]);
    }
}

RNA_EXTERN_C void GPencilStroke_aspect_get(PointerRNA *ptr, float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->aspect_ratio)[i]);
    }
}

RNA_EXTERN_C void GPencilStroke_aspect_set(PointerRNA *ptr, const float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->aspect_ratio)[i] = CLAMPIS(values[i], 0.0099999998f, 1.0f);
    }
}

RNA_EXTERN_C void GPencilStroke_uv_translation_get(PointerRNA *ptr, float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->uv_translation)[i]);
    }
}

RNA_EXTERN_C void GPencilStroke_uv_translation_set(PointerRNA *ptr, const float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->uv_translation)[i] = values[i];
    }
}

RNA_EXTERN_C float GPencilStroke_uv_rotation_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->uv_rotation);
}

RNA_EXTERN_C void GPencilStroke_uv_rotation_set(PointerRNA *ptr, float value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->uv_rotation = (std::remove_reference_t<decltype(data->uv_rotation)>)value;
#else
    data->uv_rotation = value;
#endif
}

RNA_EXTERN_C float GPencilStroke_uv_scale_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->uv_scale);
}

RNA_EXTERN_C void GPencilStroke_uv_scale_set(PointerRNA *ptr, float value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->uv_scale = (std::remove_reference_t<decltype(data->uv_scale)>)CLAMPIS(value, 0.0099999998f, 100.0f);
#else
    data->uv_scale = CLAMPIS(value, 0.0099999998f, 100.0f);
#endif
}

RNA_EXTERN_C void GPencilStroke_vertex_color_fill_get(PointerRNA *ptr, float values[4])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vert_color_fill)[i]);
    }
}

RNA_EXTERN_C void GPencilStroke_vertex_color_fill_set(PointerRNA *ptr, const float values[4])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vert_color_fill)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int GPencilStroke_select_index_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->select_index);
}

RNA_EXTERN_C void GPencilStroke_select_index_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
#ifdef __cplusplus
    data->select_index = (std::remove_reference_t<decltype(data->select_index)>)value;
#else
    data->select_index = value;
#endif
}

RNA_EXTERN_C float GPencilStroke_time_start_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->inittime);
}

static PointerRNA GPencilStrokePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilStrokePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStrokePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStrokePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilStrokePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilStrokePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStrokePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilStrokePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStrokePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilStrokePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilStrokePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilStrokePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GPencilStrokePoint_co_get(PointerRNA *ptr, float values[3])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

RNA_EXTERN_C void GPencilStrokePoint_co_set(PointerRNA *ptr, const float values[3])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

RNA_EXTERN_C float GPencilStrokePoint_pressure_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->pressure);
}

RNA_EXTERN_C void GPencilStrokePoint_pressure_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
#ifdef __cplusplus
    data->pressure = (std::remove_reference_t<decltype(data->pressure)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->pressure = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float GPencilStrokePoint_strength_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->strength);
}

RNA_EXTERN_C void GPencilStrokePoint_strength_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
#ifdef __cplusplus
    data->strength = (std::remove_reference_t<decltype(data->strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float GPencilStrokePoint_uv_factor_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->uv_fac);
}

RNA_EXTERN_C void GPencilStrokePoint_uv_factor_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
#ifdef __cplusplus
    data->uv_fac = (std::remove_reference_t<decltype(data->uv_fac)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->uv_fac = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float GPencilStrokePoint_uv_rotation_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->uv_rot);
}

RNA_EXTERN_C void GPencilStrokePoint_uv_rotation_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
#ifdef __cplusplus
    data->uv_rot = (std::remove_reference_t<decltype(data->uv_rot)>)CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#else
    data->uv_rot = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#endif
}

RNA_EXTERN_C void GPencilStrokePoint_uv_fill_get(PointerRNA *ptr, float values[2])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->uv_fill)[i]);
    }
}

RNA_EXTERN_C void GPencilStrokePoint_uv_fill_set(PointerRNA *ptr, const float values[2])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->uv_fill)[i] = values[i];
    }
}

RNA_EXTERN_C bool GPencilStrokePoint_select_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilStrokePoint_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GPencil_stroke_point_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C float GPencilStrokePoint_time_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->time);
}

RNA_EXTERN_C void GPencilStrokePoint_vertex_color_get(PointerRNA *ptr, float values[4])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vert_color)[i]);
    }
}

RNA_EXTERN_C void GPencilStrokePoint_vertex_color_set(PointerRNA *ptr, const float values[4])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vert_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

static PointerRNA GPencilTriangle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilTriangle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilTriangle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilTriangle_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilTriangle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilTriangle_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilTriangle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilTriangle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilTriangle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int GPencilTriangle_v1_get(PointerRNA *ptr)
{
    bGPDtriangle *data = (bGPDtriangle *)(ptr->data);
    return (int)(data->verts[0]);
}

RNA_EXTERN_C int GPencilTriangle_v2_get(PointerRNA *ptr)
{
    bGPDtriangle *data = (bGPDtriangle *)(ptr->data);
    return (int)(data->verts[1]);
}

RNA_EXTERN_C int GPencilTriangle_v3_get(PointerRNA *ptr)
{
    bGPDtriangle *data = (bGPDtriangle *)(ptr->data);
    return (int)(data->verts[2]);
}

static PointerRNA GPencilEditCurve_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilEditCurve_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilEditCurve_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilEditCurve_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilEditCurve_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilEditCurve_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilEditCurve_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int GPencilEditCurve_curve_points_length(PointerRNA *ptr)
{
    bGPDcurve *data = (bGPDcurve *)(ptr->data);
    return (data->curve_points == nullptr) ? 0 : data->tot_curve_points;
}

static PointerRNA GPencilEditCurve_curve_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilEditCurvePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void GPencilEditCurve_curve_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDcurve *data = (bGPDcurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilEditCurve_curve_points;

    rna_iterator_array_begin(iter, data->curve_points, sizeof(data->curve_points[0]), data->tot_curve_points, 0, nullptr);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_curve_points_get(iter);
    }
}

RNA_EXTERN_C void GPencilEditCurve_curve_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_curve_points_get(iter);
    }
}

RNA_EXTERN_C void GPencilEditCurve_curve_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int GPencilEditCurve_curve_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilEditCurve_curve_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilEditCurve_curve_points_get(&iter); }
    }

    GPencilEditCurve_curve_points_end(&iter);

    return found;
}

RNA_EXTERN_C bool GPencilEditCurve_select_get(PointerRNA *ptr)
{
    bGPDcurve *data = (bGPDcurve *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GPencilEditCurve_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GPencil_curve_select_set;
    fn(ptr, value);
}

static PointerRNA GPencilEditCurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilEditCurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilEditCurvePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilEditCurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilEditCurvePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilEditCurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilEditCurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilEditCurvePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool GPencilEditCurvePoint_select_left_handle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilCurvePoint_BezTriple_handle1_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void GPencilEditCurvePoint_select_left_handle_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GpencilCurvePoint_BezTriple_handle1_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool GPencilEditCurvePoint_select_right_handle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilCurvePoint_BezTriple_handle2_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void GPencilEditCurvePoint_select_right_handle_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GpencilCurvePoint_BezTriple_handle2_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool GPencilEditCurvePoint_select_control_point_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilCurvePoint_BezTriple_ctrlpoint_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void GPencilEditCurvePoint_select_control_point_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GpencilCurvePoint_BezTriple_ctrlpoint_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool GPencilEditCurvePoint_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilCurvePoint_BezTriple_hide_get;
    return fn(ptr);
}

RNA_EXTERN_C void GPencilEditCurvePoint_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GpencilCurvePoint_BezTriple_hide_set;
    fn(ptr, value);
}

RNA_EXTERN_C void GPencilEditCurvePoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_GpencilCurvePoint_BezTriple_handle1_get;
    fn(ptr, values);
}

RNA_EXTERN_C void GPencilEditCurvePoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_GpencilCurvePoint_BezTriple_handle1_set;
    fn(ptr, values);
}

RNA_EXTERN_C void GPencilEditCurvePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_GpencilCurvePoint_BezTriple_ctrlpoint_get;
    fn(ptr, values);
}

RNA_EXTERN_C void GPencilEditCurvePoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_GpencilCurvePoint_BezTriple_ctrlpoint_set;
    fn(ptr, values);
}

RNA_EXTERN_C void GPencilEditCurvePoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_GpencilCurvePoint_BezTriple_handle2_get;
    fn(ptr, values);
}

RNA_EXTERN_C void GPencilEditCurvePoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_GpencilCurvePoint_BezTriple_handle2_set;
    fn(ptr, values);
}

RNA_EXTERN_C float GPencilEditCurvePoint_pressure_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->pressure);
}

RNA_EXTERN_C void GPencilEditCurvePoint_pressure_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
#ifdef __cplusplus
    data->pressure = (std::remove_reference_t<decltype(data->pressure)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->pressure = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float GPencilEditCurvePoint_strength_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->strength);
}

RNA_EXTERN_C void GPencilEditCurvePoint_strength_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
#ifdef __cplusplus
    data->strength = (std::remove_reference_t<decltype(data->strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int GPencilEditCurvePoint_point_index_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (int)(data->point_index);
}

RNA_EXTERN_C float GPencilEditCurvePoint_uv_factor_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->uv_fac);
}

RNA_EXTERN_C void GPencilEditCurvePoint_uv_factor_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
#ifdef __cplusplus
    data->uv_fac = (std::remove_reference_t<decltype(data->uv_fac)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->uv_fac = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float GPencilEditCurvePoint_uv_rotation_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->uv_rot);
}

RNA_EXTERN_C void GPencilEditCurvePoint_uv_rotation_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
#ifdef __cplusplus
    data->uv_rot = (std::remove_reference_t<decltype(data->uv_rot)>)CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#else
    data->uv_rot = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#endif
}

RNA_EXTERN_C void GPencilEditCurvePoint_vertex_color_get(PointerRNA *ptr, float values[4])
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vert_color)[i]);
    }
}

RNA_EXTERN_C void GPencilEditCurvePoint_vertex_color_set(PointerRNA *ptr, const float values[4])
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vert_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

static PointerRNA GpencilVertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GpencilVertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GpencilVertexGroupElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GpencilVertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GpencilVertexGroupElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GpencilVertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GpencilVertexGroupElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GpencilVertexGroupElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int GpencilVertexGroupElement_group_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (int)(data->def_nr);
}

RNA_EXTERN_C float GpencilVertexGroupElement_weight_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void GpencilVertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void GreasePencil_clear_func(struct bGPdata *_self)
{
	rna_GPencil_clear(_self);
}

static void GreasePencil_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	_self = (struct bGPdata *)_ptr->data;
	
	rna_GPencil_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_clear(struct bGPdata *_self);

RNA_EXTERN_C struct bGPDlayer *GreasePencilLayers_new_func(struct bGPdata *_self, const char * name, bool set_active)
{
	return rna_GPencil_layer_new(_self, name, set_active);
}

static void GreasePencilLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	const char * name;
	bool set_active;
	struct bGPDlayer *layer;
	char *_data, *_retdata;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	set_active = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_GPencil_layer_new(_self, name, set_active);
	*((struct bGPDlayer **)_retdata) = layer;
}

RNA_EXTERN_C void GreasePencilLayers_remove_func(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer)
{
	rna_GPencil_layer_remove(_self, reports, layer);
}

static void GreasePencilLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_remove(_self, reports, layer);
}

RNA_EXTERN_C void GreasePencilLayers_move_func(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer, int type)
{
	rna_GPencil_layer_move(_self, reports, layer, type);
}

static void GreasePencilLayers_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	struct PointerRNA *layer;
	int type;
	char *_data;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_GPencil_layer_move(_self, reports, layer, type);
}

/* Repeated prototypes to detect errors */

struct bGPDlayer *rna_GPencil_layer_new(struct bGPdata *_self, const char * name, bool set_active);
void rna_GPencil_layer_remove(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer);
void rna_GPencil_layer_move(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer, int type);


RNA_EXTERN_C void GPencilLayer_clear_func(struct ID *_selfid, struct bGPDlayer *_self)
{
	rna_GPencil_layer_clear(_selfid, _self);
}

static void GPencilLayer_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDlayer *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDlayer *)_ptr->data;
	
	rna_GPencil_layer_clear(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_layer_clear(struct ID *_selfid, struct bGPDlayer *_self);

RNA_EXTERN_C struct bGPDframe *GPencilFrames_new_func(struct bGPDlayer *_self, ReportList *reports, int frame_number, bool active)
{
	return rna_GPencil_frame_new(_self, reports, frame_number, active);
}

static void GPencilFrames_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	int frame_number;
	bool active;
	struct bGPDframe *frame;
	char *_data, *_retdata;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	_data += 8;
	active = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	frame = rna_GPencil_frame_new(_self, reports, frame_number, active);
	*((struct bGPDframe **)_retdata) = frame;
}

RNA_EXTERN_C void GPencilFrames_remove_func(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *frame)
{
	rna_GPencil_frame_remove(_self, reports, frame);
}

static void GPencilFrames_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *frame;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((struct PointerRNA **)_data);
	
	rna_GPencil_frame_remove(_self, reports, frame);
}

RNA_EXTERN_C struct bGPDframe *GPencilFrames_copy_func(struct bGPDlayer *_self, struct bGPDframe *source)
{
	return rna_GPencil_frame_copy(_self, source);
}

static void GPencilFrames_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct bGPDframe *source;
	struct bGPDframe *copy;
	char *_data, *_retdata;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	source = *((struct bGPDframe **)_data);
	_data += 8;
	_retdata = _data;
	
	copy = rna_GPencil_frame_copy(_self, source);
	*((struct bGPDframe **)_retdata) = copy;
}

/* Repeated prototypes to detect errors */

struct bGPDframe *rna_GPencil_frame_new(struct bGPDlayer *_self, ReportList *reports, int frame_number, bool active);
void rna_GPencil_frame_remove(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *frame);
struct bGPDframe *rna_GPencil_frame_copy(struct bGPDlayer *_self, struct bGPDframe *source);

RNA_EXTERN_C void GreasePencilMaskLayers_add_func(struct bGPDlayer *_self, struct PointerRNA *layer)
{
	rna_GPencil_layer_mask_add(_self, layer);
}

static void GreasePencilMaskLayers_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_mask_add(_self, layer);
}

RNA_EXTERN_C void GreasePencilMaskLayers_remove_func(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *mask)
{
	rna_GPencil_layer_mask_remove(_self, reports, mask);
}

static void GreasePencilMaskLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *mask;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	mask = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_mask_remove(_self, reports, mask);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_layer_mask_add(struct bGPDlayer *_self, struct PointerRNA *layer);
void rna_GPencil_layer_mask_remove(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *mask);


RNA_EXTERN_C void GPencilFrame_clear_func(struct ID *_selfid, struct bGPDframe *_self)
{
	rna_GPencil_frame_clear(_selfid, _self);
}

static void GPencilFrame_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDframe *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDframe *)_ptr->data;
	
	rna_GPencil_frame_clear(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_frame_clear(struct ID *_selfid, struct bGPDframe *_self);

RNA_EXTERN_C struct bGPDstroke *GPencilStrokes_new_func(struct bGPDframe *_self)
{
	return rna_GPencil_stroke_new(_self);
}

static void GPencilStrokes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDframe *_self;
	struct bGPDstroke *stroke;
	char *_data, *_retdata;
	
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	stroke = rna_GPencil_stroke_new(_self);
	*((struct bGPDstroke **)_retdata) = stroke;
}

RNA_EXTERN_C void GPencilStrokes_remove_func(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke)
{
	rna_GPencil_stroke_remove(_selfid, _self, reports, stroke);
}

static void GPencilStrokes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDframe *_self;
	struct PointerRNA *stroke;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	stroke = *((struct PointerRNA **)_data);
	
	rna_GPencil_stroke_remove(_selfid, _self, reports, stroke);
}

RNA_EXTERN_C void GPencilStrokes_close_func(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke)
{
	rna_GPencil_stroke_close(_selfid, _self, reports, stroke);
}

static void GPencilStrokes_close_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDframe *_self;
	struct PointerRNA *stroke;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	stroke = *((struct PointerRNA **)_data);
	
	rna_GPencil_stroke_close(_selfid, _self, reports, stroke);
}

/* Repeated prototypes to detect errors */

struct bGPDstroke *rna_GPencil_stroke_new(struct bGPDframe *_self);
void rna_GPencil_stroke_remove(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke);
void rna_GPencil_stroke_close(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke);


RNA_EXTERN_C void GPencilStrokePoints_add_func(struct ID *_selfid, struct bGPDstroke *_self, int count, float pressure, float strength)
{
	rna_GPencil_stroke_point_add(_selfid, _self, count, pressure, strength);
}

static void GPencilStrokePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDstroke *_self;
	int count;
	float pressure;
	float strength;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	_data += 8;
	pressure = *((float *)_data);
	_data += 8;
	strength = *((float *)_data);
	
	rna_GPencil_stroke_point_add(_selfid, _self, count, pressure, strength);
}

RNA_EXTERN_C void GPencilStrokePoints_pop_func(struct ID *_selfid, struct bGPDstroke *_self, ReportList *reports, int index)
{
	rna_GPencil_stroke_point_pop(_selfid, _self, reports, index);
}

static void GPencilStrokePoints_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDstroke *_self;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_GPencil_stroke_point_pop(_selfid, _self, reports, index);
}

RNA_EXTERN_C void GPencilStrokePoints_update_func(struct ID *_selfid, struct bGPDstroke *_self)
{
	rna_GPencil_stroke_point_update(_selfid, _self);
}

static void GPencilStrokePoints_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDstroke *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDstroke *)_ptr->data;
	
	rna_GPencil_stroke_point_update(_selfid, _self);
}

RNA_EXTERN_C float GPencilStrokePoints_weight_get_func(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index)
{
	return rna_GPencilStrokePoints_weight_get(_self, reports, vertex_group_index, point_index);
}

static void GPencilStrokePoints_weight_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDstroke *_self;
	int vertex_group_index;
	int point_index;
	float weight;
	char *_data, *_retdata;
	
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_group_index = *((int *)_data);
	_data += 8;
	point_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	weight = rna_GPencilStrokePoints_weight_get(_self, reports, vertex_group_index, point_index);
	*((float *)_retdata) = weight;
}

RNA_EXTERN_C void GPencilStrokePoints_weight_set_func(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index, float weight)
{
	rna_GPencilStrokePoints_weight_set(_self, reports, vertex_group_index, point_index, weight);
}

static void GPencilStrokePoints_weight_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDstroke *_self;
	int vertex_group_index;
	int point_index;
	float weight;
	char *_data;
	
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_group_index = *((int *)_data);
	_data += 8;
	point_index = *((int *)_data);
	_data += 8;
	weight = *((float *)_data);
	
	rna_GPencilStrokePoints_weight_set(_self, reports, vertex_group_index, point_index, weight);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_stroke_point_add(struct ID *_selfid, struct bGPDstroke *_self, int count, float pressure, float strength);
void rna_GPencil_stroke_point_pop(struct ID *_selfid, struct bGPDstroke *_self, ReportList *reports, int index);
void rna_GPencil_stroke_point_update(struct ID *_selfid, struct bGPDstroke *_self);
float rna_GPencilStrokePoints_weight_get(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index);
void rna_GPencilStrokePoints_weight_set(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index, float weight);






/* Grease Pencil */
CollectionPropertyRNA rna_GreasePencil_layers = {
	{(PropertyRNA *)&rna_GreasePencil_animation_data, nullptr,
	-1, "layers", 0, 0, 0, 0, 0, "Layers",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_GreasePencilLayers},
	GreasePencil_layers_begin, GreasePencil_layers_next, GreasePencil_layers_end, GreasePencil_layers_get, nullptr, GreasePencil_layers_lookup_int, GreasePencil_layers_lookup_string, nullptr, &RNA_GPencilLayer
};

PointerPropertyRNA rna_GreasePencil_animation_data = {
	{(PropertyRNA *)&rna_GreasePencil_materials, (PropertyRNA *)&rna_GreasePencil_layers,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

CollectionPropertyRNA rna_GreasePencil_materials = {
	{(PropertyRNA *)&rna_GreasePencil_stroke_depth_order, (PropertyRNA *)&rna_GreasePencil_animation_data,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDMaterials},
	GreasePencil_materials_begin, GreasePencil_materials_next, GreasePencil_materials_end, GreasePencil_materials_get, GreasePencil_materials_length, GreasePencil_materials_lookup_int, GreasePencil_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

static const EnumPropertyItem rna_GreasePencil_stroke_depth_order_items[3] = {
	{0, "2D", 0, "2D Layers", "Display strokes using grease pencil layers to define order"},
	{1, "3D", 0, "3D Location", "Display strokes using real 3D position in 3D space"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GreasePencil_stroke_depth_order = {
	{(PropertyRNA *)&rna_GreasePencil_use_stroke_edit_mode, (PropertyRNA *)&rna_GreasePencil_materials,
	-1, "stroke_depth_order", 3, 0, 0, 4, 0, "Stroke Depth Order",
	"Defines how the strokes are ordered in 3D space (for objects not displayed \'In Front\')",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, draw_mode), (RawPropertyType)1, nullptr},
	GreasePencil_stroke_depth_order_get, GreasePencil_stroke_depth_order_set, nullptr, nullptr, nullptr, rna_GreasePencil_stroke_depth_order_items, 2, 0
};

BoolPropertyRNA rna_GreasePencil_use_stroke_edit_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_paint_mode, (PropertyRNA *)&rna_GreasePencil_stroke_depth_order,
	-1, "use_stroke_edit_mode", 3, 0, 0, 0, 0, "Stroke Edit Mode",
	"Edit Grease Pencil strokes instead of viewport data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_stroke_edit_mode_get, GreasePencil_use_stroke_edit_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_is_stroke_paint_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_sculpt_mode, (PropertyRNA *)&rna_GreasePencil_use_stroke_edit_mode,
	-1, "is_stroke_paint_mode", 2, 0, 0, 0, 0, "Stroke Paint Mode",
	"Draw Grease Pencil strokes on click/drag",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_is_stroke_paint_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_is_stroke_sculpt_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_weight_mode, (PropertyRNA *)&rna_GreasePencil_is_stroke_paint_mode,
	-1, "is_stroke_sculpt_mode", 2, 0, 0, 0, 0, "Stroke Sculpt Mode",
	"Sculpt Grease Pencil strokes instead of viewport data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_is_stroke_sculpt_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_is_stroke_weight_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_vertex_mode, (PropertyRNA *)&rna_GreasePencil_is_stroke_sculpt_mode,
	-1, "is_stroke_weight_mode", 2, 0, 0, 0, 0, "Stroke Weight Paint Mode",
	"Grease Pencil weight paint",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_is_stroke_weight_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_is_stroke_vertex_mode = {
	{(PropertyRNA *)&rna_GreasePencil_use_onion_skinning, (PropertyRNA *)&rna_GreasePencil_is_stroke_weight_mode,
	-1, "is_stroke_vertex_mode", 2, 0, 0, 0, 0, "Stroke Vertex Paint Mode",
	"Grease Pencil vertex paint",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_is_stroke_vertex_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_onion_skinning = {
	{(PropertyRNA *)&rna_GreasePencil_stroke_thickness_space, (PropertyRNA *)&rna_GreasePencil_is_stroke_vertex_mode,
	-1, "use_onion_skinning", 3, 0, 0, 0, 0, "Onion Skins",
	"Show ghosts of the keyframes before and after the current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_onion_skinning_get, GreasePencil_use_onion_skinning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static const EnumPropertyItem rna_GreasePencil_stroke_thickness_space_items[3] = {
	{0, "WORLDSPACE", 0, "World Space", "Set stroke thickness relative to the world space"},
	{32768, "SCREENSPACE", 0, "Screen Space", "Set stroke thickness relative to the screen space"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GreasePencil_stroke_thickness_space = {
	{(PropertyRNA *)&rna_GreasePencil_pixel_factor, (PropertyRNA *)&rna_GreasePencil_use_onion_skinning,
	-1, "stroke_thickness_space", 3, 0, 0, 4, 0, "Stroke Thickness",
	"Set stroke thickness in screen space or world space",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, flag), (RawPropertyType)0, nullptr},
	GreasePencil_stroke_thickness_space_get, GreasePencil_stroke_thickness_space_set, nullptr, nullptr, nullptr, rna_GreasePencil_stroke_thickness_space_items, 2, 0
};

FloatPropertyRNA rna_GreasePencil_pixel_factor = {
	{(PropertyRNA *)&rna_GreasePencil_edit_curve_resolution, (PropertyRNA *)&rna_GreasePencil_stroke_thickness_space,
	-1, "pixel_factor", 3, 0, 0, 4, 0, "Scale",
	"Scale conversion factor for pixel size (use larger values for thicker lines)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, pixfactor), (RawPropertyType)5, nullptr},
	GreasePencil_pixel_factor_get, GreasePencil_pixel_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 30.0f, 0.1000000015f, 30.0f, 1.0f, 2, 0.0f, nullptr
};

IntPropertyRNA rna_GreasePencil_edit_curve_resolution = {
	{(PropertyRNA *)&rna_GreasePencil_use_adaptive_curve_resolution, (PropertyRNA *)&rna_GreasePencil_pixel_factor,
	-1, "edit_curve_resolution", 1, 0, 0, 4, 0, "Curve Resolution",
	"Number of segments generated between control points when editing strokes in curve mode",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_resolution_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, curve_edit_resolution), (RawPropertyType)0, nullptr},
	GreasePencil_edit_curve_resolution_get, GreasePencil_edit_curve_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 256, 1, 32, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_adaptive_curve_resolution = {
	{(PropertyRNA *)&rna_GreasePencil_curve_edit_threshold, (PropertyRNA *)&rna_GreasePencil_edit_curve_resolution,
	-1, "use_adaptive_curve_resolution", 3, 0, 0, 0, 0, "Adaptive Resolution",
	"Set the resolution of each editcurve segment dynamically depending on the length of the segment. The resolution is the number of points generated per unit distance",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_resolution_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_adaptive_curve_resolution_get, GreasePencil_use_adaptive_curve_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_GreasePencil_curve_edit_threshold = {
	{(PropertyRNA *)&rna_GreasePencil_curve_edit_corner_angle, (PropertyRNA *)&rna_GreasePencil_use_adaptive_curve_resolution,
	-1, "curve_edit_threshold", 1, 0, 0, 4, 0, "Threshold",
	"Curve conversion error threshold",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, curve_edit_threshold), (RawPropertyType)5, nullptr},
	GreasePencil_curve_edit_threshold_get, GreasePencil_curve_edit_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000000000f, 10.0f, 0.0000000000f, 10.0f, 2.0f, 5, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_GreasePencil_curve_edit_corner_angle = {
	{(PropertyRNA *)&rna_GreasePencil_use_multiedit, (PropertyRNA *)&rna_GreasePencil_curve_edit_threshold,
	-1, "curve_edit_corner_angle", 1, 0, 0, 4, 0, "Corner Angle",
	"Angles above this are considered corners",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, curve_edit_corner_angle), (RawPropertyType)5, nullptr},
	GreasePencil_curve_edit_corner_angle_get, GreasePencil_curve_edit_corner_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 1.5707963705f, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_multiedit = {
	{(PropertyRNA *)&rna_GreasePencil_use_curve_edit, (PropertyRNA *)&rna_GreasePencil_curve_edit_corner_angle,
	-1, "use_multiedit", 3, 0, 0, 0, 0, "Multiframe",
	"Edit strokes from multiple grease pencil keyframes at the same time (keyframes must be selected to be included)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_multiedit_get, GreasePencil_use_multiedit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_curve_edit = {
	{(PropertyRNA *)&rna_GreasePencil_use_autolock_layers, (PropertyRNA *)&rna_GreasePencil_use_multiedit,
	-1, "use_curve_edit", 3, 0, 0, 0, 0, "Curve Editing",
	"Edit strokes using curve handles",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_curve_edit_mode_toggle, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_curve_edit_get, GreasePencil_use_curve_edit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_autolock_layers = {
	{(PropertyRNA *)&rna_GreasePencil_edit_line_color, (PropertyRNA *)&rna_GreasePencil_use_curve_edit,
	-1, "use_autolock_layers", 3, 0, 0, 0, 0, "Auto-Lock Layers",
	"Automatically lock all layers except the active one to avoid accidental changes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_autolock, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_autolock_layers_get, GreasePencil_use_autolock_layers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_GreasePencil_edit_line_color_default[4] = {
	0.6000000238f,
	0.6000000238f,
	0.6000000238f,
	0.5000000000f
};

FloatPropertyRNA rna_GreasePencil_edit_line_color = {
	{(PropertyRNA *)&rna_GreasePencil_ghost_before_range, (PropertyRNA *)&rna_GreasePencil_use_autolock_layers,
	-1, "edit_line_color", 3, 0, 0, 4, 0, "Edit Line Color",
	"Color for editing line",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, line_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GreasePencil_edit_line_color_get, GreasePencil_edit_line_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencil_edit_line_color_default
};

IntPropertyRNA rna_GreasePencil_ghost_before_range = {
	{(PropertyRNA *)&rna_GreasePencil_ghost_after_range, (PropertyRNA *)&rna_GreasePencil_edit_line_color,
	-1, "ghost_before_range", 1, 0, 0, 4, 0, "Frames Before",
	"Maximum number of frames to show before current frame (0 = don\'t show any frames before current)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gstep), (RawPropertyType)1, nullptr},
	GreasePencil_ghost_before_range_get, GreasePencil_ghost_before_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 120, 0, 120, 1, 1, nullptr
};

IntPropertyRNA rna_GreasePencil_ghost_after_range = {
	{(PropertyRNA *)&rna_GreasePencil_use_ghost_custom_colors, (PropertyRNA *)&rna_GreasePencil_ghost_before_range,
	-1, "ghost_after_range", 1, 0, 0, 4, 0, "Frames After",
	"Maximum number of frames to show after current frame (0 = don\'t show any frames after current)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gstep_next), (RawPropertyType)1, nullptr},
	GreasePencil_ghost_after_range_get, GreasePencil_ghost_after_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 120, 0, 120, 1, 1, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_ghost_custom_colors = {
	{(PropertyRNA *)&rna_GreasePencil_before_color, (PropertyRNA *)&rna_GreasePencil_ghost_after_range,
	-1, "use_ghost_custom_colors", 1, 0, 0, 0, 0, "Use Custom Ghost Colors",
	"Use custom colors for ghost frames",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_ghost_custom_colors_get, GreasePencil_use_ghost_custom_colors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_GreasePencil_before_color_default[3] = {
	0.1450980008f,
	0.4196079969f,
	0.1372549981f
};

FloatPropertyRNA rna_GreasePencil_before_color = {
	{(PropertyRNA *)&rna_GreasePencil_after_color, (PropertyRNA *)&rna_GreasePencil_use_ghost_custom_colors,
	-1, "before_color", 1, 0, 0, 4, 0, "Before Color",
	"Base color for ghosts before the active frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gcolor_prev), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GreasePencil_before_color_get, GreasePencil_before_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencil_before_color_default
};

static float rna_GreasePencil_after_color_default[3] = {
	0.1254899949f,
	0.0823530033f,
	0.5294119716f
};

FloatPropertyRNA rna_GreasePencil_after_color = {
	{(PropertyRNA *)&rna_GreasePencil_use_ghosts_always, (PropertyRNA *)&rna_GreasePencil_before_color,
	-1, "after_color", 1, 0, 0, 4, 0, "After Color",
	"Base color for ghosts after the active frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 392101888, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gcolor_next), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GreasePencil_after_color_get, GreasePencil_after_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencil_after_color_default
};

BoolPropertyRNA rna_GreasePencil_use_ghosts_always = {
	{(PropertyRNA *)&rna_GreasePencil_onion_mode, (PropertyRNA *)&rna_GreasePencil_after_color,
	-1, "use_ghosts_always", 1, 0, 0, 0, 0, "Always Show Ghosts",
	"Ghosts are shown in renders and animation playback. Useful for special effects (e.g. motion blur)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_ghosts_always_get, GreasePencil_use_ghosts_always_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_GreasePencil_onion_mode_items[4] = {
	{0, "ABSOLUTE", 0, "Frames", "Frames in absolute range of the scene frame"},
	{1, "RELATIVE", 0, "Keyframes", "Frames in relative range of the Grease Pencil keyframes"},
	{2, "SELECTED", 0, "Selected", "Only selected keyframes"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GreasePencil_onion_mode = {
	{(PropertyRNA *)&rna_GreasePencil_onion_keyframe_type, (PropertyRNA *)&rna_GreasePencil_use_ghosts_always,
	-1, "onion_mode", 1, 0, 0, 4, 0, "Mode",
	"Mode to display frames",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, onion_mode), (RawPropertyType)0, nullptr},
	GreasePencil_onion_mode_get, GreasePencil_onion_mode_set, nullptr, nullptr, nullptr, rna_GreasePencil_onion_mode_items, 3, 0
};

static const EnumPropertyItem rna_GreasePencil_onion_keyframe_type_items[7] = {
	{-1, "ALL", 0, "All", "Include all Keyframe types"},
	{0, "KEYFRAME", 840, "Keyframe", "Normal keyframe, e.g. for key poses"},
	{2, "BREAKDOWN", 841, "Breakdown", "A breakdown pose, e.g. for transitions between key poses"},
	{4, "MOVING_HOLD", 844, "Moving Hold", "A keyframe that is part of a moving hold"},
	{1, "EXTREME", 842, "Extreme", "An \'extreme\' pose, or some other purpose as needed"},
	{3, "JITTER", 843, "Jitter", "A filler or baked keyframe for keying on ones, or some other purpose as needed"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GreasePencil_onion_keyframe_type = {
	{(PropertyRNA *)&rna_GreasePencil_use_onion_fade, (PropertyRNA *)&rna_GreasePencil_onion_mode,
	-1, "onion_keyframe_type", 1, 0, 0, 4, 0, "Filter by Type",
	"Type of keyframe (for filtering)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, onion_keytype), (RawPropertyType)1, nullptr},
	GreasePencil_onion_keyframe_type_get, GreasePencil_onion_keyframe_type_set, nullptr, nullptr, nullptr, rna_GreasePencil_onion_keyframe_type_items, 6, 0
};

BoolPropertyRNA rna_GreasePencil_use_onion_fade = {
	{(PropertyRNA *)&rna_GreasePencil_use_onion_loop, (PropertyRNA *)&rna_GreasePencil_onion_keyframe_type,
	-1, "use_onion_fade", 1, 0, 0, 0, 0, "Fade",
	"Display onion keyframes with a fade in color transparency",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_onion_fade_get, GreasePencil_use_onion_fade_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencil_use_onion_loop = {
	{(PropertyRNA *)&rna_GreasePencil_onion_factor, (PropertyRNA *)&rna_GreasePencil_use_onion_fade,
	-1, "use_onion_loop", 1, 0, 0, 0, 0, "Show Start Frame",
	"Display onion keyframes for looping animations",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_use_onion_loop_get, GreasePencil_use_onion_loop_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_GreasePencil_onion_factor = {
	{(PropertyRNA *)&rna_GreasePencil_zdepth_offset, (PropertyRNA *)&rna_GreasePencil_use_onion_loop,
	-1, "onion_factor", 1, 0, 0, 4, 0, "Onion Opacity",
	"Change fade opacity of displayed onion frames",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, onion_factor), (RawPropertyType)5, nullptr},
	GreasePencil_onion_factor_get, GreasePencil_onion_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_GreasePencil_zdepth_offset = {
	{(PropertyRNA *)&rna_GreasePencil_is_annotation, (PropertyRNA *)&rna_GreasePencil_onion_factor,
	-1, "zdepth_offset", 3, 0, 0, 4, 0, "Surface Offset",
	"Offset amount when drawing in surface mode",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, zdepth_offset), (RawPropertyType)5, nullptr},
	GreasePencil_zdepth_offset_get, GreasePencil_zdepth_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.1500000060f, nullptr
};

BoolPropertyRNA rna_GreasePencil_is_annotation = {
	{(PropertyRNA *)&rna_GreasePencil_grid, (PropertyRNA *)&rna_GreasePencil_zdepth_offset,
	-1, "is_annotation", 2, 0, 0, 0, 0, "Annotation",
	"Current data-block is an annotation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_is_annotation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_GreasePencil_grid = {
	{nullptr, (PropertyRNA *)&rna_GreasePencil_is_annotation,
	-1, "grid", 8650752, 0, 0, 0, 0, "Grid Settings",
	"Settings for grid and canvas in the 3D viewport",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencil_grid_get, nullptr, nullptr, nullptr,&RNA_GreasePencilGrid
};

FunctionRNA rna_GreasePencil_clear_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all the Grease Pencil data",
	GreasePencil_clear_call,
	nullptr
};

StructRNA RNA_GreasePencil = {
	{(ContainerRNA *)&RNA_GreasePencilLayers, (ContainerRNA *)&RNA_FModifierStepped,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencil_layers, (PropertyRNA *)&rna_GreasePencil_grid}},
	"GreasePencil", nullptr, nullptr, 519, nullptr, "Grease Pencil",
	"Freehand annotation sketchbook",
	"*", 273,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_GreasePencil_clear_func, (FunctionRNA *)&rna_GreasePencil_clear_func}
};

/* Grease Pencil Layers */
CollectionPropertyRNA rna_GreasePencilLayers_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilLayers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayers_rna_properties_begin, GreasePencilLayers_rna_properties_next, GreasePencilLayers_rna_properties_end, GreasePencilLayers_rna_properties_get, nullptr, nullptr, GreasePencilLayers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilLayers_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active, (PropertyRNA *)&rna_GreasePencilLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_GreasePencilLayers_active = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active_index, (PropertyRNA *)&rna_GreasePencilLayers_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Layer",
	"Active grease pencil layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839750, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayers_active_get, GreasePencilLayers_active_set, nullptr, nullptr,&RNA_GPencilLayer
};

IntPropertyRNA rna_GreasePencilLayers_active_index = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active_note, (PropertyRNA *)&rna_GreasePencilLayers_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Layer Index",
	"Index of active grease pencil layer",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839750, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayers_active_index_get, GreasePencilLayers_active_index_set, nullptr, nullptr, rna_GPencil_active_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

EnumPropertyRNA rna_GreasePencilLayers_active_note = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilLayers_active_index,
	-1, "active_note", 3, 0, 0, 0, 0, "Active Note",
	"Note/Layer to add annotation strokes to",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayers_active_note_get, GreasePencilLayers_active_note_set, rna_GPencil_active_layer_itemf, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
};

StringPropertyRNA rna_GreasePencilLayers_new_name = {
	{(PropertyRNA *)&rna_GreasePencilLayers_new_set_active, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"Name of the layer",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, "GPencilLayer"
};

BoolPropertyRNA rna_GreasePencilLayers_new_set_active = {
	{(PropertyRNA *)&rna_GreasePencilLayers_new_layer, (PropertyRNA *)&rna_GreasePencilLayers_new_name,
	-1, "set_active", 3, 0, 0, 0, 0, "Set Active",
	"Set the newly created layer to the active layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_GreasePencilLayers_new_layer = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilLayers_new_set_active,
	-1, "layer", 8388608, 0, 2, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilLayers_new_func = {
	{(FunctionRNA *)&rna_GreasePencilLayers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilLayers_new_name, (PropertyRNA *)&rna_GreasePencilLayers_new_layer}},
	"new", 0, "Add a new grease pencil layer",
	GreasePencilLayers_new_call,
	(PropertyRNA *)&rna_GreasePencilLayers_new_layer
};

PointerPropertyRNA rna_GreasePencilLayers_remove_layer = {
	{nullptr, nullptr,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilLayers_remove_func = {
	{(FunctionRNA *)&rna_GreasePencilLayers_move_func, (FunctionRNA *)&rna_GreasePencilLayers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilLayers_remove_layer, (PropertyRNA *)&rna_GreasePencilLayers_remove_layer}},
	"remove", 16, "Remove a grease pencil layer",
	GreasePencilLayers_remove_call,
	nullptr
};

PointerPropertyRNA rna_GreasePencilLayers_move_layer = {
	{(PropertyRNA *)&rna_GreasePencilLayers_move_type, nullptr,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"The layer to move",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilLayer
};

static const EnumPropertyItem rna_GreasePencilLayers_move_type_items[3] = {
	{-1, "UP", 0, "Up", ""},
	{1, "DOWN", 0, "Down", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GreasePencilLayers_move_type = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilLayers_move_layer,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Direction of movement",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilLayers_move_type_items, 2, 1
};

FunctionRNA rna_GreasePencilLayers_move_func = {
	{nullptr, (FunctionRNA *)&rna_GreasePencilLayers_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilLayers_move_layer, (PropertyRNA *)&rna_GreasePencilLayers_move_type}},
	"move", 16, "Move a grease pencil layer in the layer stack",
	GreasePencilLayers_move_call,
	nullptr
};

StructRNA RNA_GreasePencilLayers = {
	{(ContainerRNA *)&RNA_GreasePencilGrid, (ContainerRNA *)&RNA_GreasePencil,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilLayers_rna_properties, (PropertyRNA *)&rna_GreasePencilLayers_active_note}},
	"GreasePencilLayers", nullptr, nullptr, 516, nullptr, "Grease Pencil Layers",
	"Collection of grease pencil layers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GreasePencilLayers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GreasePencilLayers_new_func, (FunctionRNA *)&rna_GreasePencilLayers_move_func}
};

/* Grid and Canvas Settings */
CollectionPropertyRNA rna_GreasePencilGrid_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilGrid_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilGrid_rna_properties_begin, GreasePencilGrid_rna_properties_next, GreasePencilGrid_rna_properties_end, GreasePencilGrid_rna_properties_get, nullptr, nullptr, GreasePencilGrid_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilGrid_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilGrid_scale, (PropertyRNA *)&rna_GreasePencilGrid_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilGrid_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_GreasePencilGrid_scale_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_GreasePencilGrid_scale = {
	{(PropertyRNA *)&rna_GreasePencilGrid_color, (PropertyRNA *)&rna_GreasePencilGrid_rna_type,
	-1, "scale", 3, 0, 0, 4, 0, "Grid Scale",
	"Grid scale",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, scale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GreasePencilGrid_scale_get, GreasePencilGrid_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 1.0f, rna_GreasePencilGrid_scale_default
};

static float rna_GreasePencilGrid_color_default[3] = {
	0.5000000000f,
	0.5000000000f,
	0.5000000000f
};

FloatPropertyRNA rna_GreasePencilGrid_color = {
	{(PropertyRNA *)&rna_GreasePencilGrid_lines, (PropertyRNA *)&rna_GreasePencilGrid_scale,
	-1, "color", 3, 0, 0, 4, 0, "Grid Color",
	"Color for grid lines",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GreasePencilGrid_color_get, GreasePencilGrid_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencilGrid_color_default
};

IntPropertyRNA rna_GreasePencilGrid_lines = {
	{(PropertyRNA *)&rna_GreasePencilGrid_offset, (PropertyRNA *)&rna_GreasePencilGrid_color,
	-1, "lines", 3, 0, 0, 4, 0, "Grid Subdivisions",
	"Number of subdivisions in each side of symmetry line",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, lines), (RawPropertyType)0, nullptr},
	GreasePencilGrid_lines_get, GreasePencilGrid_lines_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 4, nullptr
};

static float rna_GreasePencilGrid_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GreasePencilGrid_offset = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilGrid_lines,
	-1, "offset", 3, 0, 0, 4, 0, "Offset",
	"Offset of the canvas",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GreasePencilGrid_offset_get, GreasePencilGrid_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GreasePencilGrid_offset_default
};

StructRNA RNA_GreasePencilGrid = {
	{(ContainerRNA *)&RNA_GPencilLayer, (ContainerRNA *)&RNA_GreasePencilLayers,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilGrid_rna_properties, (PropertyRNA *)&rna_GreasePencilGrid_offset}},
	"GreasePencilGrid", nullptr, nullptr, 516, nullptr, "Grid and Canvas Settings",
	"Settings for grid and canvas in 3D viewport",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GreasePencilGrid_rna_properties,
	nullptr,
	&RNA_GreasePencil,
	nullptr,
	rna_GreasePencilGrid_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Layer */
CollectionPropertyRNA rna_GPencilLayer_rna_properties = {
	{(PropertyRNA *)&rna_GPencilLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_rna_properties_begin, GPencilLayer_rna_properties_next, GPencilLayer_rna_properties_end, GPencilLayer_rna_properties_get, nullptr, nullptr, GPencilLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilLayer_rna_type = {
	{(PropertyRNA *)&rna_GPencilLayer_info, (PropertyRNA *)&rna_GPencilLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_GPencilLayer_info = {
	{(PropertyRNA *)&rna_GPencilLayer_frames, (PropertyRNA *)&rna_GPencilLayer_rna_type,
	-1, "info", 262145, 0, 0, 0, 0, "Info",
	"Layer name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {128, 0, 0}, 0,
	rna_GPencil_update, 391839749, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_info_get, GPencilLayer_info_length, GPencilLayer_info_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 128, ""
};

CollectionPropertyRNA rna_GPencilLayer_frames = {
	{(PropertyRNA *)&rna_GPencilLayer_mask_layers, (PropertyRNA *)&rna_GPencilLayer_info,
	-1, "frames", 0, 0, 0, 0, 0, "Frames",
	"Sketches for this layer on different frames",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_GPencilFrames},
	GPencilLayer_frames_begin, GPencilLayer_frames_next, GPencilLayer_frames_end, GPencilLayer_frames_get, nullptr, GPencilLayer_frames_lookup_int, nullptr, nullptr, &RNA_GPencilFrame
};

CollectionPropertyRNA rna_GPencilLayer_mask_layers = {
	{(PropertyRNA *)&rna_GPencilLayer_active_frame, (PropertyRNA *)&rna_GPencilLayer_frames,
	-1, "mask_layers", 0, 0, 0, 0, 0, "Masks",
	"List of Masking Layers",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_GreasePencilMaskLayers},
	GPencilLayer_mask_layers_begin, GPencilLayer_mask_layers_next, GPencilLayer_mask_layers_end, GPencilLayer_mask_layers_get, nullptr, GPencilLayer_mask_layers_lookup_int, GPencilLayer_mask_layers_lookup_string, nullptr, &RNA_GPencilLayerMask
};

PointerPropertyRNA rna_GPencilLayer_active_frame = {
	{(PropertyRNA *)&rna_GPencilLayer_opacity, (PropertyRNA *)&rna_GPencilLayer_mask_layers,
	-1, "active_frame", 8388608, 0, 0, 0, 0, "Active Frame",
	"Frame currently being displayed for this layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, rna_GPencilLayer_active_frame_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_active_frame_get, nullptr, nullptr, nullptr,&RNA_GPencilFrame
};

FloatPropertyRNA rna_GPencilLayer_opacity = {
	{(PropertyRNA *)&rna_GPencilLayer_channel_color, (PropertyRNA *)&rna_GPencilLayer_active_frame,
	-1, "opacity", 3, 0, 0, 4, 0, "Opacity",
	"Layer Opacity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, opacity), (RawPropertyType)5, nullptr},
	GPencilLayer_opacity_get, GPencilLayer_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_GPencilLayer_channel_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_channel_color = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_opacity, (PropertyRNA *)&rna_GPencilLayer_opacity,
	-1, "channel_color", 1, 0, 0, 4, 0, "Custom Channel Color",
	"Custom color for animation channel in Dopesheet",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_channel_color_get, GPencilLayer_channel_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_channel_color_default
};

FloatPropertyRNA rna_GPencilLayer_annotation_opacity = {
	{(PropertyRNA *)&rna_GPencilLayer_color, (PropertyRNA *)&rna_GPencilLayer_channel_color,
	-1, "annotation_opacity", 1, 0, 0, 4, 0, "Opacity",
	"Annotation Layer Opacity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, opacity), (RawPropertyType)5, nullptr},
	GPencilLayer_annotation_opacity_get, GPencilLayer_annotation_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_GPencilLayer_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_color = {
	{(PropertyRNA *)&rna_GPencilLayer_thickness, (PropertyRNA *)&rna_GPencilLayer_annotation_opacity,
	-1, "color", 1, 0, 0, 4, 0, "Color",
	"Color for all strokes in this layer",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_color_get, GPencilLayer_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_color_default
};

IntPropertyRNA rna_GPencilLayer_thickness = {
	{(PropertyRNA *)&rna_GPencilLayer_tint_color, (PropertyRNA *)&rna_GPencilLayer_color,
	-1, "thickness", 1, 0, 0, 4, 0, "Thickness",
	"Thickness of annotation strokes",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, thickness), (RawPropertyType)1, nullptr},
	GPencilLayer_thickness_get, GPencilLayer_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 10, 1, 0, nullptr
};

static float rna_GPencilLayer_tint_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_tint_color = {
	{(PropertyRNA *)&rna_GPencilLayer_tint_factor, (PropertyRNA *)&rna_GPencilLayer_thickness,
	-1, "tint_color", 3, 0, 0, 4, 0, "Tint Color",
	"Color for tinting stroke colors",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, tintcolor), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_tint_color_get, GPencilLayer_tint_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_tint_color_default
};

FloatPropertyRNA rna_GPencilLayer_tint_factor = {
	{(PropertyRNA *)&rna_GPencilLayer_vertex_paint_opacity, (PropertyRNA *)&rna_GPencilLayer_tint_color,
	-1, "tint_factor", 3, 0, 0, 4, 0, "Tint Factor",
	"Factor of tinting color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, tintcolor[3]), (RawPropertyType)5, nullptr},
	GPencilLayer_tint_factor_get, GPencilLayer_tint_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilLayer_vertex_paint_opacity = {
	{(PropertyRNA *)&rna_GPencilLayer_line_change, (PropertyRNA *)&rna_GPencilLayer_tint_factor,
	-1, "vertex_paint_opacity", 3, 0, 0, 4, 0, "Vertex Paint Opacity",
	"Vertex Paint mix factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, vertex_paint_opacity), (RawPropertyType)5, nullptr},
	GPencilLayer_vertex_paint_opacity_get, GPencilLayer_vertex_paint_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_GPencilLayer_line_change = {
	{(PropertyRNA *)&rna_GPencilLayer_use_onion_skinning, (PropertyRNA *)&rna_GPencilLayer_vertex_paint_opacity,
	-1, "line_change", 3, 0, 0, 4, 0, "Thickness Change",
	"Thickness change to apply to current strokes (in pixels)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, line_change), (RawPropertyType)1, nullptr},
	GPencilLayer_line_change_get, GPencilLayer_line_change_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -100, 100, -300, 300, 1, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_use_onion_skinning = {
	{(PropertyRNA *)&rna_GPencilLayer_use_annotation_onion_skinning, (PropertyRNA *)&rna_GPencilLayer_line_change,
	-1, "use_onion_skinning", 3, 0, 0, 0, 0, "Onion Skinning",
	"Display onion skins before and after the current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_use_onion_skinning_get, GPencilLayer_use_onion_skinning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_use_annotation_onion_skinning = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_range, (PropertyRNA *)&rna_GPencilLayer_use_onion_skinning,
	-1, "use_annotation_onion_skinning", 1, 0, 0, 0, 0, "Onion Skinning",
	"Display annotation onion skins before and after the current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_use_annotation_onion_skinning_get, GPencilLayer_use_annotation_onion_skinning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_GPencilLayer_annotation_onion_before_range = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_range, (PropertyRNA *)&rna_GPencilLayer_use_annotation_onion_skinning,
	-1, "annotation_onion_before_range", 1, 0, 0, 4, 0, "Frames Before",
	"Maximum number of frames to show before current frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gstep), (RawPropertyType)1, nullptr},
	GPencilLayer_annotation_onion_before_range_get, GPencilLayer_annotation_onion_before_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 120, -1, 120, 1, 0, nullptr
};

IntPropertyRNA rna_GPencilLayer_annotation_onion_after_range = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_color, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_range,
	-1, "annotation_onion_after_range", 1, 0, 0, 4, 0, "Frames After",
	"Maximum number of frames to show after current frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gstep_next), (RawPropertyType)1, nullptr},
	GPencilLayer_annotation_onion_after_range_get, GPencilLayer_annotation_onion_after_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 120, -1, 120, 1, 0, nullptr
};

static float rna_GPencilLayer_annotation_onion_before_color_default[3] = {
	0.3019999862f,
	0.8510000110f,
	0.3019999862f
};

FloatPropertyRNA rna_GPencilLayer_annotation_onion_before_color = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_color, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_range,
	-1, "annotation_onion_before_color", 1, 0, 0, 4, 0, "Before Color",
	"Base color for ghosts before the active frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gcolor_prev), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_annotation_onion_before_color_get, GPencilLayer_annotation_onion_before_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_annotation_onion_before_color_default
};

static float rna_GPencilLayer_annotation_onion_after_color_default[3] = {
	0.2500000000f,
	0.1000000015f,
	1.0f
};

FloatPropertyRNA rna_GPencilLayer_annotation_onion_after_color = {
	{(PropertyRNA *)&rna_GPencilLayer_pass_index, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_color,
	-1, "annotation_onion_after_color", 1, 0, 0, 4, 0, "After Color",
	"Base color for ghosts after the active frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gcolor_next), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_annotation_onion_after_color_get, GPencilLayer_annotation_onion_after_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_annotation_onion_after_color_default
};

IntPropertyRNA rna_GPencilLayer_pass_index = {
	{(PropertyRNA *)&rna_GPencilLayer_viewlayer_render, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_color,
	-1, "pass_index", 3, 0, 0, 4, 0, "Pass Index",
	"Index number for the \"Layer Index\" pass",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, pass_index), (RawPropertyType)1, nullptr},
	GPencilLayer_pass_index_get, GPencilLayer_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

StringPropertyRNA rna_GPencilLayer_viewlayer_render = {
	{(PropertyRNA *)&rna_GPencilLayer_use_viewlayer_masks, (PropertyRNA *)&rna_GPencilLayer_pass_index,
	-1, "viewlayer_render", 262145, 0, 0, 0, 0, "ViewLayer",
	"Only include Layer in this View Layer render output (leave blank to include always)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_viewlayer_render_get, GPencilLayer_viewlayer_render_length, GPencilLayer_viewlayer_render_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_GPencilLayer_use_viewlayer_masks = {
	{(PropertyRNA *)&rna_GPencilLayer_blend_mode, (PropertyRNA *)&rna_GPencilLayer_viewlayer_render,
	-1, "use_viewlayer_masks", 3, 0, 0, 0, 0, "Use Masks in Render",
	"Include the mask layers when rendering the view-layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_use_viewlayer_masks_get, GPencilLayer_use_viewlayer_masks_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_GPencilLayer_blend_mode_items[7] = {
	{0, "REGULAR", 0, "Regular", ""},
	{1, "HARDLIGHT", 0, "Hard Light", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "MULTIPLY", 0, "Multiply", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilLayer_blend_mode = {
	{(PropertyRNA *)&rna_GPencilLayer_location, (PropertyRNA *)&rna_GPencilLayer_use_viewlayer_masks,
	-1, "blend_mode", 3, 0, 0, 4, 0, "Blend Mode",
	"Blend mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, blend_mode), (RawPropertyType)0, nullptr},
	GPencilLayer_blend_mode_get, GPencilLayer_blend_mode_set, nullptr, nullptr, nullptr, rna_GPencilLayer_blend_mode_items, 6, 0
};

static float rna_GPencilLayer_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_location = {
	{(PropertyRNA *)&rna_GPencilLayer_rotation, (PropertyRNA *)&rna_GPencilLayer_blend_mode,
	-1, "location", 3, 0, 0, 4, 0, "Location",
	"Values for change location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_GpencilLayerMatrix_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, location), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_location_get, GPencilLayer_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilLayer_location_default
};

static float rna_GPencilLayer_rotation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_rotation = {
	{(PropertyRNA *)&rna_GPencilLayer_scale, (PropertyRNA *)&rna_GPencilLayer_location,
	-1, "rotation", 3, 0, 0, 4, 0, "Rotation",
	"Values for changes in rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_EULER | (int)PROP_UNIT_ROTATION), nullptr, 1, {3, 0, 0}, 3,
	rna_GpencilLayerMatrix_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, rotation), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_rotation_get, GPencilLayer_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, 0.0f, rna_GPencilLayer_rotation_default
};

static float rna_GPencilLayer_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_GPencilLayer_scale = {
	{(PropertyRNA *)&rna_GPencilLayer_matrix_layer, (PropertyRNA *)&rna_GPencilLayer_rotation,
	-1, "scale", 3, 0, 0, 4, 0, "Scale",
	"Values for changes in scale",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GpencilLayerMatrix_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, scale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_scale_get, GPencilLayer_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 1.0f, rna_GPencilLayer_scale_default
};

static float rna_GPencilLayer_matrix_layer_default[16] = {
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

FloatPropertyRNA rna_GPencilLayer_matrix_layer = {
	{(PropertyRNA *)&rna_GPencilLayer_matrix_inverse_layer, (PropertyRNA *)&rna_GPencilLayer_scale,
	-1, "matrix_layer", 2, 2, 0, 4, 0, "Matrix Layer",
	"Local Layer transformation matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, layer_mat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_matrix_layer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilLayer_matrix_layer_default
};

static float rna_GPencilLayer_matrix_inverse_layer_default[16] = {
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

FloatPropertyRNA rna_GPencilLayer_matrix_inverse_layer = {
	{(PropertyRNA *)&rna_GPencilLayer_hide, (PropertyRNA *)&rna_GPencilLayer_matrix_layer,
	-1, "matrix_inverse_layer", 2, 2, 0, 4, 0, "Matrix Layer Inverse",
	"Local Layer transformation inverse matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, layer_invmat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_matrix_inverse_layer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilLayer_matrix_inverse_layer_default
};

BoolPropertyRNA rna_GPencilLayer_hide = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_hide, (PropertyRNA *)&rna_GPencilLayer_matrix_inverse_layer,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set layer Visibility",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_hide_get, GPencilLayer_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_annotation_hide = {
	{(PropertyRNA *)&rna_GPencilLayer_lock, (PropertyRNA *)&rna_GPencilLayer_hide,
	-1, "annotation_hide", 4353, 0, 0, 0, 0, "Hide",
	"Set annotation Visibility",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_annotation_hide_get, GPencilLayer_annotation_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_lock = {
	{(PropertyRNA *)&rna_GPencilLayer_lock_frame, (PropertyRNA *)&rna_GPencilLayer_annotation_hide,
	-1, "lock", 4099, 0, 0, 0, 0, "Locked",
	"Protect layer from further editing and/or frame changes",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_lock_get, GPencilLayer_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_lock_frame = {
	{(PropertyRNA *)&rna_GPencilLayer_lock_material, (PropertyRNA *)&rna_GPencilLayer_lock,
	-1, "lock_frame", 4097, 0, 0, 0, 0, "Frame Locked",
	"Lock current frame displayed by layer",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_lock_frame_get, GPencilLayer_lock_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_lock_material = {
	{(PropertyRNA *)&rna_GPencilLayer_use_mask_layer, (PropertyRNA *)&rna_GPencilLayer_lock_frame,
	-1, "lock_material", 1, 0, 0, 0, 0, "Disallow Locked Materials Editing",
	"Avoids editing locked materials in the layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_lock_material_get, GPencilLayer_lock_material_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_use_mask_layer = {
	{(PropertyRNA *)&rna_GPencilLayer_use_lights, (PropertyRNA *)&rna_GPencilLayer_lock_material,
	-1, "use_mask_layer", 3, 0, 0, 0, 0, "Use Mask",
	"The visibility of drawings on this layer is affected by the layers in its masks list",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_use_mask_layer_get, GPencilLayer_use_mask_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_use_lights = {
	{(PropertyRNA *)&rna_GPencilLayer_use_solo_mode, (PropertyRNA *)&rna_GPencilLayer_use_mask_layer,
	-1, "use_lights", 3, 0, 0, 0, 0, "Use Lights",
	"Enable the use of lights on stroke and fill materials",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_use_lights_get, GPencilLayer_use_lights_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_use_solo_mode = {
	{(PropertyRNA *)&rna_GPencilLayer_is_ruler, (PropertyRNA *)&rna_GPencilLayer_use_lights,
	-1, "use_solo_mode", 3, 0, 0, 0, 0, "Solo Mode",
	"In Draw Mode only display layers with keyframe in current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_use_solo_mode_get, GPencilLayer_use_solo_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_is_ruler = {
	{(PropertyRNA *)&rna_GPencilLayer_select, (PropertyRNA *)&rna_GPencilLayer_use_solo_mode,
	-1, "is_ruler", 2, 0, 0, 0, 0, "Ruler",
	"This is a special ruler layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_is_ruler_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_select = {
	{(PropertyRNA *)&rna_GPencilLayer_show_points, (PropertyRNA *)&rna_GPencilLayer_is_ruler,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Layer is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839750, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_select_get, GPencilLayer_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_show_points = {
	{(PropertyRNA *)&rna_GPencilLayer_show_in_front, (PropertyRNA *)&rna_GPencilLayer_select,
	-1, "show_points", 3, 0, 0, 0, 0, "Show Points",
	"Show the points which make up the strokes (for debugging purposes)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_show_points_get, GPencilLayer_show_points_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayer_show_in_front = {
	{(PropertyRNA *)&rna_GPencilLayer_parent, (PropertyRNA *)&rna_GPencilLayer_show_points,
	-1, "show_in_front", 3, 0, 0, 0, 0, "In Front",
	"Make the layer display in front of objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_show_in_front_get, GPencilLayer_show_in_front_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_GPencilLayer_parent = {
	{(PropertyRNA *)&rna_GPencilLayer_parent_type, (PropertyRNA *)&rna_GPencilLayer_show_in_front,
	-1, "parent", 9437313, 1, 0, 0, 0, "Parent",
	"Parent object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_dependency_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_parent_get, GPencilLayer_parent_set, nullptr, nullptr,&RNA_Object
};

static const EnumPropertyItem rna_GPencilLayer_parent_type_items[4] = {
	{0, "OBJECT", 0, "Object", "The layer is parented to an object"},
	{4, "ARMATURE", 0, "Armature", ""},
	{7, "BONE", 0, "Bone", "The layer is parented to a bone"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilLayer_parent_type = {
	{(PropertyRNA *)&rna_GPencilLayer_parent_bone, (PropertyRNA *)&rna_GPencilLayer_parent,
	-1, "parent_type", 3, 0, 0, 0, 0, "Parent Type",
	"Type of parent relation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_dependency_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_parent_type_get, GPencilLayer_parent_type_set, rna_Object_parent_type_itemf, nullptr, nullptr, rna_GPencilLayer_parent_type_items, 3, 0
};

StringPropertyRNA rna_GPencilLayer_parent_bone = {
	{(PropertyRNA *)&rna_GPencilLayer_matrix_inverse, (PropertyRNA *)&rna_GPencilLayer_parent_type,
	-1, "parent_bone", 262145, 0, 0, 0, 0, "Parent Bone",
	"Name of parent bone in case of a bone parenting relation",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_GPencil_dependency_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_parent_bone_get, GPencilLayer_parent_bone_length, GPencilLayer_parent_bone_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static float rna_GPencilLayer_matrix_inverse_default[16] = {
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

FloatPropertyRNA rna_GPencilLayer_matrix_inverse = {
	{(PropertyRNA *)&rna_GPencilLayer_is_parented, (PropertyRNA *)&rna_GPencilLayer_parent_bone,
	-1, "matrix_inverse", 1, 0, 0, 4, 0, "Inverse Matrix",
	"Parent inverse transformation matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, inverse), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilLayer_matrix_inverse_get, GPencilLayer_matrix_inverse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilLayer_matrix_inverse_default
};

BoolPropertyRNA rna_GPencilLayer_is_parented = {
	{nullptr, (PropertyRNA *)&rna_GPencilLayer_matrix_inverse,
	-1, "is_parented", 2, 0, 0, 0, 0, "Is Parented",
	"True when the layer parent object is set",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayer_is_parented_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_GPencilLayer_clear_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"clear", 2048, "Remove all the grease pencil layer data",
	GPencilLayer_clear_call,
	nullptr
};

StructRNA RNA_GPencilLayer = {
	{(ContainerRNA *)&RNA_GPencilFrames, (ContainerRNA *)&RNA_GreasePencilGrid,
	nullptr,
	{(PropertyRNA *)&rna_GPencilLayer_rna_properties, (PropertyRNA *)&rna_GPencilLayer_is_parented}},
	"GPencilLayer", nullptr, nullptr, 516, nullptr, "Grease Pencil Layer",
	"Collection of related sketches",
	"*", 17,
	(PropertyRNA *)&rna_GPencilLayer_info, (PropertyRNA *)&rna_GPencilLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GPencilLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GPencilLayer_clear_func, (FunctionRNA *)&rna_GPencilLayer_clear_func}
};

/* Grease Pencil Frames */
CollectionPropertyRNA rna_GPencilFrames_rna_properties = {
	{(PropertyRNA *)&rna_GPencilFrames_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilFrames_rna_properties_begin, GPencilFrames_rna_properties_next, GPencilFrames_rna_properties_end, GPencilFrames_rna_properties_get, nullptr, nullptr, GPencilFrames_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilFrames_rna_type = {
	{nullptr, (PropertyRNA *)&rna_GPencilFrames_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilFrames_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_GPencilFrames_new_frame_number = {
	{(PropertyRNA *)&rna_GPencilFrames_new_active, nullptr,
	-1, "frame_number", 3, 0, 1, 0, 0, "Frame Number",
	"The frame on which this sketch appears",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 1, nullptr
};

BoolPropertyRNA rna_GPencilFrames_new_active = {
	{(PropertyRNA *)&rna_GPencilFrames_new_frame, (PropertyRNA *)&rna_GPencilFrames_new_frame_number,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_GPencilFrames_new_frame = {
	{nullptr, (PropertyRNA *)&rna_GPencilFrames_new_active,
	-1, "frame", 8388608, 0, 2, 0, 0, "",
	"The newly created frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_new_func = {
	{(FunctionRNA *)&rna_GPencilFrames_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_GPencilFrames_new_frame_number, (PropertyRNA *)&rna_GPencilFrames_new_frame}},
	"new", 16, "Add a new grease pencil frame",
	GPencilFrames_new_call,
	(PropertyRNA *)&rna_GPencilFrames_new_frame
};

PointerPropertyRNA rna_GPencilFrames_remove_frame = {
	{nullptr, nullptr,
	-1, "frame", 262144, 0, 5, 0, 0, "Frame",
	"The frame to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_remove_func = {
	{(FunctionRNA *)&rna_GPencilFrames_copy_func, (FunctionRNA *)&rna_GPencilFrames_new_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilFrames_remove_frame, (PropertyRNA *)&rna_GPencilFrames_remove_frame}},
	"remove", 16, "Remove a grease pencil frame",
	GPencilFrames_remove_call,
	nullptr
};

PointerPropertyRNA rna_GPencilFrames_copy_source = {
	{(PropertyRNA *)&rna_GPencilFrames_copy_copy, nullptr,
	-1, "source", 8650752, 0, 1, 0, 0, "Source",
	"The source frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilFrame
};

PointerPropertyRNA rna_GPencilFrames_copy_copy = {
	{nullptr, (PropertyRNA *)&rna_GPencilFrames_copy_source,
	-1, "copy", 8388608, 0, 2, 0, 0, "",
	"The newly copied frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_copy_func = {
	{nullptr, (FunctionRNA *)&rna_GPencilFrames_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilFrames_copy_source, (PropertyRNA *)&rna_GPencilFrames_copy_copy}},
	"copy", 0, "Copy a grease pencil frame",
	GPencilFrames_copy_call,
	(PropertyRNA *)&rna_GPencilFrames_copy_copy
};

StructRNA RNA_GPencilFrames = {
	{(ContainerRNA *)&RNA_GreasePencilMaskLayers, (ContainerRNA *)&RNA_GPencilLayer,
	nullptr,
	{(PropertyRNA *)&rna_GPencilFrames_rna_properties, (PropertyRNA *)&rna_GPencilFrames_rna_type}},
	"GPencilFrames", nullptr, nullptr, 516, nullptr, "Grease Pencil Frames",
	"Collection of grease pencil frames",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilFrames_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GPencilFrames_new_func, (FunctionRNA *)&rna_GPencilFrames_copy_func}
};

/* Grease Pencil Mask Layers */
CollectionPropertyRNA rna_GreasePencilMaskLayers_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilMaskLayers_rna_properties_begin, GreasePencilMaskLayers_rna_properties_next, GreasePencilMaskLayers_rna_properties_end, GreasePencilMaskLayers_rna_properties_get, nullptr, nullptr, GreasePencilMaskLayers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilMaskLayers_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_active_mask_index, (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilMaskLayers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_GreasePencilMaskLayers_active_mask_index = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_type,
	-1, "active_mask_index", 1, 0, 0, 0, 0, "Active Layer Mask Index",
	"Active index in layer mask array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilMaskLayers_active_mask_index_get, GreasePencilMaskLayers_active_mask_index_set, nullptr, nullptr, rna_GPencil_active_mask_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_GreasePencilMaskLayers_add_layer = {
	{nullptr, nullptr,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"Layer to add as mask",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilMaskLayers_add_func = {
	{(FunctionRNA *)&rna_GreasePencilMaskLayers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_add_layer, (PropertyRNA *)&rna_GreasePencilMaskLayers_add_layer}},
	"add", 0, "Add a layer to mask list",
	GreasePencilMaskLayers_add_call,
	nullptr
};

PointerPropertyRNA rna_GreasePencilMaskLayers_remove_mask = {
	{nullptr, nullptr,
	-1, "mask", 262144, 0, 5, 0, 0, "",
	"Mask to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilLayerMask
};

FunctionRNA rna_GreasePencilMaskLayers_remove_func = {
	{nullptr, (FunctionRNA *)&rna_GreasePencilMaskLayers_add_func,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_remove_mask, (PropertyRNA *)&rna_GreasePencilMaskLayers_remove_mask}},
	"remove", 16, "Remove a layer from mask list",
	GreasePencilMaskLayers_remove_call,
	nullptr
};

StructRNA RNA_GreasePencilMaskLayers = {
	{(ContainerRNA *)&RNA_GPencilLayerMask, (ContainerRNA *)&RNA_GPencilFrames,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties, (PropertyRNA *)&rna_GreasePencilMaskLayers_active_mask_index}},
	"GreasePencilMaskLayers", nullptr, nullptr, 516, nullptr, "Grease Pencil Mask Layers",
	"Collection of grease pencil masking layers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GreasePencilMaskLayers_add_func, (FunctionRNA *)&rna_GreasePencilMaskLayers_remove_func}
};

/* Grease Pencil Masking Layers */
CollectionPropertyRNA rna_GPencilLayerMask_rna_properties = {
	{(PropertyRNA *)&rna_GPencilLayerMask_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayerMask_rna_properties_begin, GPencilLayerMask_rna_properties_next, GPencilLayerMask_rna_properties_end, GPencilLayerMask_rna_properties_get, nullptr, nullptr, GPencilLayerMask_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilLayerMask_rna_type = {
	{(PropertyRNA *)&rna_GPencilLayerMask_name, (PropertyRNA *)&rna_GPencilLayerMask_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayerMask_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_GPencilLayerMask_name = {
	{(PropertyRNA *)&rna_GPencilLayerMask_hide, (PropertyRNA *)&rna_GPencilLayerMask_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Layer",
	"Mask layer name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {128, 0, 0}, 0,
	nullptr, 391839749, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayerMask_name_get, GPencilLayerMask_name_length, GPencilLayerMask_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 128, ""
};

BoolPropertyRNA rna_GPencilLayerMask_hide = {
	{(PropertyRNA *)&rna_GPencilLayerMask_invert, (PropertyRNA *)&rna_GPencilLayerMask_name,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set mask Visibility",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayerMask_hide_get, GPencilLayerMask_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilLayerMask_invert = {
	{nullptr, (PropertyRNA *)&rna_GPencilLayerMask_hide,
	-1, "invert", 4355, 0, 0, 0, 0, "Invert",
	"Invert mask",
	589, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilLayerMask_invert_get, GPencilLayerMask_invert_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_GPencilLayerMask = {
	{(ContainerRNA *)&RNA_GPencilFrame, (ContainerRNA *)&RNA_GreasePencilMaskLayers,
	nullptr,
	{(PropertyRNA *)&rna_GPencilLayerMask_rna_properties, (PropertyRNA *)&rna_GPencilLayerMask_invert}},
	"GPencilLayerMask", nullptr, nullptr, 516, nullptr, "Grease Pencil Masking Layers",
	"List of Mask Layers",
	"*", 17,
	(PropertyRNA *)&rna_GPencilLayerMask_name, (PropertyRNA *)&rna_GPencilLayerMask_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GPencilLayerMask_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Frame */
CollectionPropertyRNA rna_GPencilFrame_rna_properties = {
	{(PropertyRNA *)&rna_GPencilFrame_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilFrame_rna_properties_begin, GPencilFrame_rna_properties_next, GPencilFrame_rna_properties_end, GPencilFrame_rna_properties_get, nullptr, nullptr, GPencilFrame_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilFrame_rna_type = {
	{(PropertyRNA *)&rna_GPencilFrame_strokes, (PropertyRNA *)&rna_GPencilFrame_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilFrame_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilFrame_strokes = {
	{(PropertyRNA *)&rna_GPencilFrame_frame_number, (PropertyRNA *)&rna_GPencilFrame_rna_type,
	-1, "strokes", 0, 0, 0, 0, 0, "Strokes",
	"Freehand curves defining the sketch on this frame",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_GPencilStrokes},
	GPencilFrame_strokes_begin, GPencilFrame_strokes_next, GPencilFrame_strokes_end, GPencilFrame_strokes_get, nullptr, GPencilFrame_strokes_lookup_int, nullptr, nullptr, &RNA_GPencilStroke
};

IntPropertyRNA rna_GPencilFrame_frame_number = {
	{(PropertyRNA *)&rna_GPencilFrame_keyframe_type, (PropertyRNA *)&rna_GPencilFrame_strokes,
	-1, "frame_number", 3, 0, 0, 4, 0, "Frame Number",
	"The frame on which this sketch appears",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDframe, framenum), (RawPropertyType)0, nullptr},
	GPencilFrame_frame_number_get, GPencilFrame_frame_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

static const EnumPropertyItem rna_GPencilFrame_keyframe_type_items[6] = {
	{0, "KEYFRAME", 840, "Keyframe", "Normal keyframe, e.g. for key poses"},
	{2, "BREAKDOWN", 841, "Breakdown", "A breakdown pose, e.g. for transitions between key poses"},
	{4, "MOVING_HOLD", 844, "Moving Hold", "A keyframe that is part of a moving hold"},
	{1, "EXTREME", 842, "Extreme", "An \'extreme\' pose, or some other purpose as needed"},
	{3, "JITTER", 843, "Jitter", "A filler or baked keyframe for keying on ones, or some other purpose as needed"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilFrame_keyframe_type = {
	{(PropertyRNA *)&rna_GPencilFrame_is_edited, (PropertyRNA *)&rna_GPencilFrame_frame_number,
	-1, "keyframe_type", 1, 0, 0, 4, 0, "Keyframe Type",
	"Type of keyframe",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDframe, key_type), (RawPropertyType)1, nullptr},
	GPencilFrame_keyframe_type_get, GPencilFrame_keyframe_type_set, nullptr, nullptr, nullptr, rna_GPencilFrame_keyframe_type_items, 5, 0
};

BoolPropertyRNA rna_GPencilFrame_is_edited = {
	{(PropertyRNA *)&rna_GPencilFrame_select, (PropertyRNA *)&rna_GPencilFrame_keyframe_type,
	-1, "is_edited", 3, 0, 0, 0, 0, "Paint Lock",
	"Frame is being edited (painted on)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilFrame_is_edited_get, GPencilFrame_is_edited_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilFrame_select = {
	{nullptr, (PropertyRNA *)&rna_GPencilFrame_is_edited,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Frame is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilFrame_select_get, GPencilFrame_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_GPencilFrame_clear_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"clear", 2048, "Remove all the grease pencil frame data",
	GPencilFrame_clear_call,
	nullptr
};

StructRNA RNA_GPencilFrame = {
	{(ContainerRNA *)&RNA_GPencilStrokes, (ContainerRNA *)&RNA_GPencilLayerMask,
	nullptr,
	{(PropertyRNA *)&rna_GPencilFrame_rna_properties, (PropertyRNA *)&rna_GPencilFrame_select}},
	"GPencilFrame", nullptr, nullptr, 516, nullptr, "Grease Pencil Frame",
	"Collection of related sketches on a particular frame",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilFrame_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GPencilFrame_clear_func, (FunctionRNA *)&rna_GPencilFrame_clear_func}
};

/* Grease Pencil Frames */
CollectionPropertyRNA rna_GPencilStrokes_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokes_rna_properties_begin, GPencilStrokes_rna_properties_next, GPencilStrokes_rna_properties_end, GPencilStrokes_rna_properties_get, nullptr, nullptr, GPencilStrokes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_GPencilStrokes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_GPencilStrokes_new_stroke = {
	{nullptr, nullptr,
	-1, "stroke", 8388608, 0, 2, 0, 0, "",
	"The newly created stroke",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_new_func = {
	{(FunctionRNA *)&rna_GPencilStrokes_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokes_new_stroke, (PropertyRNA *)&rna_GPencilStrokes_new_stroke}},
	"new", 0, "Add a new grease pencil stroke",
	GPencilStrokes_new_call,
	(PropertyRNA *)&rna_GPencilStrokes_new_stroke
};

PointerPropertyRNA rna_GPencilStrokes_remove_stroke = {
	{nullptr, nullptr,
	-1, "stroke", 262144, 0, 5, 0, 0, "Stroke",
	"The stroke to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_remove_func = {
	{(FunctionRNA *)&rna_GPencilStrokes_close_func, (FunctionRNA *)&rna_GPencilStrokes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokes_remove_stroke, (PropertyRNA *)&rna_GPencilStrokes_remove_stroke}},
	"remove", 2064, "Remove a grease pencil stroke",
	GPencilStrokes_remove_call,
	nullptr
};

PointerPropertyRNA rna_GPencilStrokes_close_stroke = {
	{nullptr, nullptr,
	-1, "stroke", 262144, 0, 5, 0, 0, "Stroke",
	"The stroke to close",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_close_func = {
	{nullptr, (FunctionRNA *)&rna_GPencilStrokes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokes_close_stroke, (PropertyRNA *)&rna_GPencilStrokes_close_stroke}},
	"close", 2064, "Close a grease pencil stroke adding geometry",
	GPencilStrokes_close_call,
	nullptr
};

StructRNA RNA_GPencilStrokes = {
	{(ContainerRNA *)&RNA_GPencilStroke, (ContainerRNA *)&RNA_GPencilFrame,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokes_rna_properties, (PropertyRNA *)&rna_GPencilStrokes_rna_type}},
	"GPencilStrokes", nullptr, nullptr, 516, nullptr, "Grease Pencil Frames",
	"Collection of grease pencil stroke",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilStrokes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GPencilStrokes_new_func, (FunctionRNA *)&rna_GPencilStrokes_close_func}
};

/* Grease Pencil Stroke */
CollectionPropertyRNA rna_GPencilStroke_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStroke_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_rna_properties_begin, GPencilStroke_rna_properties_next, GPencilStroke_rna_properties_end, GPencilStroke_rna_properties_get, nullptr, nullptr, GPencilStroke_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilStroke_rna_type = {
	{(PropertyRNA *)&rna_GPencilStroke_points, (PropertyRNA *)&rna_GPencilStroke_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilStroke_points = {
	{(PropertyRNA *)&rna_GPencilStroke_triangles, (PropertyRNA *)&rna_GPencilStroke_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Stroke Points",
	"Stroke data points",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_GPencilStrokePoints},
	GPencilStroke_points_begin, GPencilStroke_points_next, GPencilStroke_points_end, GPencilStroke_points_get, GPencilStroke_points_length, GPencilStroke_points_lookup_int, nullptr, nullptr, &RNA_GPencilStrokePoint
};

CollectionPropertyRNA rna_GPencilStroke_triangles = {
	{(PropertyRNA *)&rna_GPencilStroke_edit_curve, (PropertyRNA *)&rna_GPencilStroke_points,
	-1, "triangles", 0, 0, 0, 8, 0, "Triangles",
	"Triangulation data for HQ fill",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_triangles_begin, GPencilStroke_triangles_next, GPencilStroke_triangles_end, GPencilStroke_triangles_get, GPencilStroke_triangles_length, GPencilStroke_triangles_lookup_int, nullptr, nullptr, &RNA_GPencilTriangle
};

PointerPropertyRNA rna_GPencilStroke_edit_curve = {
	{(PropertyRNA *)&rna_GPencilStroke_material_index, (PropertyRNA *)&rna_GPencilStroke_triangles,
	-1, "edit_curve", 8388608, 0, 0, 0, 0, "Edit Curve",
	"Temporary data for Edit Curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_edit_curve_get, nullptr, nullptr, nullptr,&RNA_GPencilEditCurve
};

IntPropertyRNA rna_GPencilStroke_material_index = {
	{(PropertyRNA *)&rna_GPencilStroke_display_mode, (PropertyRNA *)&rna_GPencilStroke_edit_curve,
	-1, "material_index", 3, 0, 0, 4, 0, "Material Index",
	"Material slot index of this stroke",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, mat_nr), (RawPropertyType)0, nullptr},
	GPencilStroke_material_index_get, GPencilStroke_material_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_GPencilStroke_display_mode_items[5] = {
	{0, "SCREEN", 0, "Screen", "Stroke is in screen-space"},
	{1, "3DSPACE", 0, "3D Space", "Stroke is in 3D-space"},
	{2, "2DSPACE", 0, "2D Space", "Stroke is in 2D-space"},
	{4, "2DIMAGE", 0, "2D Image", "Stroke is in 2D-space (but with special \'image\' scaling)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilStroke_display_mode = {
	{(PropertyRNA *)&rna_GPencilStroke_select, (PropertyRNA *)&rna_GPencilStroke_material_index,
	-1, "display_mode", 3, 0, 0, 4, 0, "Display Mode",
	"Coordinate space that stroke is in",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, flag), (RawPropertyType)1, nullptr},
	GPencilStroke_display_mode_get, GPencilStroke_display_mode_set, nullptr, nullptr, nullptr, rna_GPencilStroke_display_mode_items, 4, 0
};

BoolPropertyRNA rna_GPencilStroke_select = {
	{(PropertyRNA *)&rna_GPencilStroke_use_cyclic, (PropertyRNA *)&rna_GPencilStroke_display_mode,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Stroke is selected for viewport editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_select_get, GPencilStroke_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilStroke_use_cyclic = {
	{(PropertyRNA *)&rna_GPencilStroke_has_edit_curve, (PropertyRNA *)&rna_GPencilStroke_select,
	-1, "use_cyclic", 3, 0, 0, 0, 0, "Cyclic",
	"Enable cyclic drawing, closing the stroke",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_use_cyclic_get, GPencilStroke_use_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilStroke_has_edit_curve = {
	{(PropertyRNA *)&rna_GPencilStroke_start_cap_mode, (PropertyRNA *)&rna_GPencilStroke_use_cyclic,
	-1, "has_edit_curve", 2, 0, 0, 0, 0, "Has Curve Data",
	"Stroke has Curve data to edit shape",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_has_edit_curve_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_GPencilStroke_start_cap_mode_items[3] = {
	{0, "ROUND", 0, "Rounded", ""},
	{1, "FLAT", 0, "Flat", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilStroke_start_cap_mode = {
	{(PropertyRNA *)&rna_GPencilStroke_end_cap_mode, (PropertyRNA *)&rna_GPencilStroke_has_edit_curve,
	-1, "start_cap_mode", 3, 0, 0, 4, 0, "Start Cap",
	"Stroke start extreme cap style",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, caps[0]), (RawPropertyType)1, nullptr},
	GPencilStroke_start_cap_mode_get, GPencilStroke_start_cap_mode_set, nullptr, nullptr, nullptr, rna_GPencilStroke_start_cap_mode_items, 2, 0
};

static const EnumPropertyItem rna_GPencilStroke_end_cap_mode_items[3] = {
	{0, "ROUND", 0, "Rounded", ""},
	{1, "FLAT", 0, "Flat", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilStroke_end_cap_mode = {
	{(PropertyRNA *)&rna_GPencilStroke_is_nofill_stroke, (PropertyRNA *)&rna_GPencilStroke_start_cap_mode,
	-1, "end_cap_mode", 3, 0, 0, 4, 0, "End Cap",
	"Stroke end extreme cap style",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, caps[1]), (RawPropertyType)1, nullptr},
	GPencilStroke_end_cap_mode_get, GPencilStroke_end_cap_mode_set, nullptr, nullptr, nullptr, rna_GPencilStroke_end_cap_mode_items, 2, 0
};

BoolPropertyRNA rna_GPencilStroke_is_nofill_stroke = {
	{(PropertyRNA *)&rna_GPencilStroke_line_width, (PropertyRNA *)&rna_GPencilStroke_end_cap_mode,
	-1, "is_nofill_stroke", 3, 0, 0, 0, 0, "No Fill",
	"Special stroke to use as boundary for filling areas",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStroke_is_nofill_stroke_get, GPencilStroke_is_nofill_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_GPencilStroke_line_width = {
	{(PropertyRNA *)&rna_GPencilStroke_hardness, (PropertyRNA *)&rna_GPencilStroke_is_nofill_stroke,
	-1, "line_width", 3, 0, 0, 4, 0, "Thickness",
	"Thickness of stroke (in pixels)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, thickness), (RawPropertyType)1, nullptr},
	GPencilStroke_line_width_get, GPencilStroke_line_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 1000, 1, 0, nullptr
};

FloatPropertyRNA rna_GPencilStroke_hardness = {
	{(PropertyRNA *)&rna_GPencilStroke_bound_box_min, (PropertyRNA *)&rna_GPencilStroke_line_width,
	-1, "hardness", 1, 0, 0, 4, 0, "Hardness",
	"Amount of gradient along section of stroke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, hardness), (RawPropertyType)5, nullptr},
	GPencilStroke_hardness_get, GPencilStroke_hardness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

static float rna_GPencilStroke_bound_box_min_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_bound_box_min = {
	{(PropertyRNA *)&rna_GPencilStroke_bound_box_max, (PropertyRNA *)&rna_GPencilStroke_hardness,
	-1, "bound_box_min", 2, 0, 0, 4, 0, "Boundbox Min",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, boundbox_min), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStroke_bound_box_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStroke_bound_box_min_default
};

static float rna_GPencilStroke_bound_box_max_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_bound_box_max = {
	{(PropertyRNA *)&rna_GPencilStroke_aspect, (PropertyRNA *)&rna_GPencilStroke_bound_box_min,
	-1, "bound_box_max", 2, 0, 0, 4, 0, "Boundbox Max",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, boundbox_max), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStroke_bound_box_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStroke_bound_box_max_default
};

static float rna_GPencilStroke_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_GPencilStroke_aspect = {
	{(PropertyRNA *)&rna_GPencilStroke_uv_translation, (PropertyRNA *)&rna_GPencilStroke_bound_box_max,
	-1, "aspect", 3, 0, 0, 4, 0, "Aspect",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, aspect_ratio), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStroke_aspect_get, GPencilStroke_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 1.0f, rna_GPencilStroke_aspect_default
};

static float rna_GPencilStroke_uv_translation_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_uv_translation = {
	{(PropertyRNA *)&rna_GPencilStroke_uv_rotation, (PropertyRNA *)&rna_GPencilStroke_aspect,
	-1, "uv_translation", 1, 0, 0, 4, 0, "UV Translation",
	"Translation of default UV position",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_GPencil_uv_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, uv_translation), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStroke_uv_translation_get, GPencilStroke_uv_translation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStroke_uv_translation_default
};

FloatPropertyRNA rna_GPencilStroke_uv_rotation = {
	{(PropertyRNA *)&rna_GPencilStroke_uv_scale, (PropertyRNA *)&rna_GPencilStroke_uv_translation,
	-1, "uv_rotation", 1, 0, 0, 4, 0, "UV Rotation",
	"Rotation of the UV",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_uv_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, uv_rotation), (RawPropertyType)5, nullptr},
	GPencilStroke_uv_rotation_get, GPencilStroke_uv_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilStroke_uv_scale = {
	{(PropertyRNA *)&rna_GPencilStroke_vertex_color_fill, (PropertyRNA *)&rna_GPencilStroke_uv_rotation,
	-1, "uv_scale", 1, 0, 0, 4, 0, "UV Scale",
	"Scale of the UV",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_uv_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, uv_scale), (RawPropertyType)5, nullptr},
	GPencilStroke_uv_scale_get, GPencilStroke_uv_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 1.0f, nullptr
};

static float rna_GPencilStroke_vertex_color_fill_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_vertex_color_fill = {
	{(PropertyRNA *)&rna_GPencilStroke_select_index, (PropertyRNA *)&rna_GPencilStroke_uv_scale,
	-1, "vertex_color_fill", 1, 0, 0, 4, 0, "Vertex Fill Color",
	"Color used to mix with fill color to get final color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, vert_color_fill), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStroke_vertex_color_fill_get, GPencilStroke_vertex_color_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilStroke_vertex_color_fill_default
};

IntPropertyRNA rna_GPencilStroke_select_index = {
	{(PropertyRNA *)&rna_GPencilStroke_time_start, (PropertyRNA *)&rna_GPencilStroke_vertex_color_fill,
	-1, "select_index", 3, 0, 0, 4, 0, "Select Index",
	"Index of selection used for interpolation",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, select_index), (RawPropertyType)0, nullptr},
	GPencilStroke_select_index_get, GPencilStroke_select_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_GPencilStroke_time_start = {
	{nullptr, (PropertyRNA *)&rna_GPencilStroke_select_index,
	-1, "time_start", 2, 0, 0, 4, 0, "Init Time",
	"Initial time of the stroke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, inittime), (RawPropertyType)4, nullptr},
	GPencilStroke_time_start_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_GPencilStroke = {
	{(ContainerRNA *)&RNA_GPencilStrokePoints, (ContainerRNA *)&RNA_GPencilStrokes,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStroke_rna_properties, (PropertyRNA *)&rna_GPencilStroke_time_start}},
	"GPencilStroke", nullptr, nullptr, 516, nullptr, "Grease Pencil Stroke",
	"Freehand curve defining part of a sketch",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilStroke_rna_properties,
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

/* Grease Pencil Stroke Points */
CollectionPropertyRNA rna_GPencilStrokePoints_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokePoints_rna_properties_begin, GPencilStrokePoints_rna_properties_next, GPencilStrokePoints_rna_properties_end, GPencilStrokePoints_rna_properties_get, nullptr, nullptr, GPencilStrokePoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokePoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokePoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_GPencilStrokePoints_add_count = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_pressure, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the stroke",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 1, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoints_add_pressure = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_strength, (PropertyRNA *)&rna_GPencilStrokePoints_add_count,
	-1, "pressure", 3, 0, 0, 0, 0, "Pressure",
	"Pressure for newly created points",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoints_add_strength = {
	{nullptr, (PropertyRNA *)&rna_GPencilStrokePoints_add_pressure,
	-1, "strength", 3, 0, 0, 0, 0, "Strength",
	"Color intensity (alpha factor) for newly created points",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, nullptr
};

FunctionRNA rna_GPencilStrokePoints_add_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_pop_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_count, (PropertyRNA *)&rna_GPencilStrokePoints_add_strength}},
	"add", 2048, "Add a new grease pencil stroke point",
	GPencilStrokePoints_add_call,
	nullptr
};

IntPropertyRNA rna_GPencilStrokePoints_pop_index = {
	{nullptr, nullptr,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"point index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_GPencilStrokePoints_pop_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_update_func, (FunctionRNA *)&rna_GPencilStrokePoints_add_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokePoints_pop_index, (PropertyRNA *)&rna_GPencilStrokePoints_pop_index}},
	"pop", 2064, "Remove a grease pencil stroke point",
	GPencilStrokePoints_pop_call,
	nullptr
};

FunctionRNA rna_GPencilStrokePoints_update_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_weight_get_func, (FunctionRNA *)&rna_GPencilStrokePoints_pop_func,
	nullptr,
	{nullptr, nullptr}},
	"update", 2048, "Recalculate internal triangulation data",
	GPencilStrokePoints_update_call,
	nullptr
};

IntPropertyRNA rna_GPencilStrokePoints_weight_get_vertex_group_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_point_index, nullptr,
	-1, "vertex_group_index", 3, 0, 0, 0, 0, "Vertex Group Index",
	"Index of Vertex Group in the array of groups",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_GPencilStrokePoints_weight_get_point_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_weight, (PropertyRNA *)&rna_GPencilStrokePoints_weight_get_vertex_group_index,
	-1, "point_index", 3, 0, 0, 0, 0, "Point Index",
	"Index of the Point in the array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoints_weight_get_weight = {
	{nullptr, (PropertyRNA *)&rna_GPencilStrokePoints_weight_get_point_index,
	-1, "weight", 3, 0, 2, 0, 0, "Weight",
	"Point Weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_GPencilStrokePoints_weight_get_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_weight_set_func, (FunctionRNA *)&rna_GPencilStrokePoints_update_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_vertex_group_index, (PropertyRNA *)&rna_GPencilStrokePoints_weight_get_weight}},
	"weight_get", 16, "Get vertex group point weight",
	GPencilStrokePoints_weight_get_call,
	(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_weight
};

IntPropertyRNA rna_GPencilStrokePoints_weight_set_vertex_group_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_set_point_index, nullptr,
	-1, "vertex_group_index", 3, 0, 0, 0, 0, "Vertex Group Index",
	"Index of Vertex Group in the array of groups",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_GPencilStrokePoints_weight_set_point_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_set_weight, (PropertyRNA *)&rna_GPencilStrokePoints_weight_set_vertex_group_index,
	-1, "point_index", 3, 0, 0, 0, 0, "Point Index",
	"Index of the Point in the array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoints_weight_set_weight = {
	{nullptr, (PropertyRNA *)&rna_GPencilStrokePoints_weight_set_point_index,
	-1, "weight", 3, 0, 0, 0, 0, "Weight",
	"Point Weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_GPencilStrokePoints_weight_set_func = {
	{nullptr, (FunctionRNA *)&rna_GPencilStrokePoints_weight_get_func,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_set_vertex_group_index, (PropertyRNA *)&rna_GPencilStrokePoints_weight_set_weight}},
	"weight_set", 16, "Set vertex group point weight",
	GPencilStrokePoints_weight_set_call,
	nullptr
};

StructRNA RNA_GPencilStrokePoints = {
	{(ContainerRNA *)&RNA_GPencilStrokePoint, (ContainerRNA *)&RNA_GPencilStroke,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokePoints_rna_properties, (PropertyRNA *)&rna_GPencilStrokePoints_rna_type}},
	"GPencilStrokePoints", nullptr, nullptr, 516, nullptr, "Grease Pencil Stroke Points",
	"Collection of grease pencil stroke points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_GPencilStrokePoints_add_func, (FunctionRNA *)&rna_GPencilStrokePoints_weight_set_func}
};

/* Grease Pencil Stroke Point */
CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokePoint_rna_properties_begin, GPencilStrokePoint_rna_properties_next, GPencilStrokePoint_rna_properties_end, GPencilStrokePoint_rna_properties_get, nullptr, nullptr, GPencilStrokePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokePoint_rna_type = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_co, (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_GPencilStrokePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_co = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_pressure, (PropertyRNA *)&rna_GPencilStrokePoint_rna_type,
	-1, "co", 3, 0, 0, 4, 0, "Coordinates",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, x), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStrokePoint_co_get, GPencilStrokePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_co_default
};

FloatPropertyRNA rna_GPencilStrokePoint_pressure = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_strength, (PropertyRNA *)&rna_GPencilStrokePoint_co,
	-1, "pressure", 3, 0, 0, 4, 0, "Pressure",
	"Pressure of tablet at point when drawing it",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, pressure), (RawPropertyType)5, nullptr},
	GPencilStrokePoint_pressure_get, GPencilStrokePoint_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoint_strength = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_uv_factor, (PropertyRNA *)&rna_GPencilStrokePoint_pressure,
	-1, "strength", 3, 0, 0, 4, 0, "Strength",
	"Color intensity (alpha factor)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, strength), (RawPropertyType)5, nullptr},
	GPencilStrokePoint_strength_get, GPencilStrokePoint_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoint_uv_factor = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_uv_rotation, (PropertyRNA *)&rna_GPencilStrokePoint_strength,
	-1, "uv_factor", 3, 0, 0, 4, 0, "UV Factor",
	"Internal UV factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, uv_fac), (RawPropertyType)5, nullptr},
	GPencilStrokePoint_uv_factor_get, GPencilStrokePoint_uv_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoint_uv_rotation = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_uv_fill, (PropertyRNA *)&rna_GPencilStrokePoint_uv_factor,
	-1, "uv_rotation", 3, 0, 0, 4, 0, "UV Rotation",
	"Internal UV factor for dot mode",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, uv_rot), (RawPropertyType)5, nullptr},
	GPencilStrokePoint_uv_rotation_get, GPencilStrokePoint_uv_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, nullptr
};

static float rna_GPencilStrokePoint_uv_fill_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_uv_fill = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_select, (PropertyRNA *)&rna_GPencilStrokePoint_uv_rotation,
	-1, "uv_fill", 3, 0, 0, 4, 0, "UV Fill",
	"Internal UV factor for filling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, uv_fill), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStrokePoint_uv_fill_get, GPencilStrokePoint_uv_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_uv_fill_default
};

BoolPropertyRNA rna_GPencilStrokePoint_select = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_time, (PropertyRNA *)&rna_GPencilStrokePoint_uv_fill,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Point is selected for viewport editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilStrokePoint_select_get, GPencilStrokePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_GPencilStrokePoint_time = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_vertex_color, (PropertyRNA *)&rna_GPencilStrokePoint_select,
	-1, "time", 2, 0, 0, 4, 0, "Time",
	"Time relative to stroke start",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, time), (RawPropertyType)5, nullptr},
	GPencilStrokePoint_time_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_GPencilStrokePoint_vertex_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_vertex_color = {
	{nullptr, (PropertyRNA *)&rna_GPencilStrokePoint_time,
	-1, "vertex_color", 1, 0, 0, 4, 0, "Vertex Color",
	"Color used to mix with point color to get final color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, vert_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilStrokePoint_vertex_color_get, GPencilStrokePoint_vertex_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_vertex_color_default
};

StructRNA RNA_GPencilStrokePoint = {
	{(ContainerRNA *)&RNA_GPencilTriangle, (ContainerRNA *)&RNA_GPencilStrokePoints,
	nullptr,
	{(PropertyRNA *)&rna_GPencilStrokePoint_rna_properties, (PropertyRNA *)&rna_GPencilStrokePoint_vertex_color}},
	"GPencilStrokePoint", nullptr, nullptr, 516, nullptr, "Grease Pencil Stroke Point",
	"Data point for freehand stroke curve",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties,
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

/* Triangle */
CollectionPropertyRNA rna_GPencilTriangle_rna_properties = {
	{(PropertyRNA *)&rna_GPencilTriangle_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilTriangle_rna_properties_begin, GPencilTriangle_rna_properties_next, GPencilTriangle_rna_properties_end, GPencilTriangle_rna_properties_get, nullptr, nullptr, GPencilTriangle_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilTriangle_rna_type = {
	{(PropertyRNA *)&rna_GPencilTriangle_v1, (PropertyRNA *)&rna_GPencilTriangle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilTriangle_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_GPencilTriangle_v1 = {
	{(PropertyRNA *)&rna_GPencilTriangle_v2, (PropertyRNA *)&rna_GPencilTriangle_rna_type,
	-1, "v1", 2, 0, 0, 4, 0, "v1",
	"First triangle vertex index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDtriangle, verts[0]), (RawPropertyType)0, nullptr},
	GPencilTriangle_v1_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_GPencilTriangle_v2 = {
	{(PropertyRNA *)&rna_GPencilTriangle_v3, (PropertyRNA *)&rna_GPencilTriangle_v1,
	-1, "v2", 2, 0, 0, 4, 0, "v2",
	"Second triangle vertex index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDtriangle, verts[1]), (RawPropertyType)0, nullptr},
	GPencilTriangle_v2_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_GPencilTriangle_v3 = {
	{nullptr, (PropertyRNA *)&rna_GPencilTriangle_v2,
	-1, "v3", 2, 0, 0, 4, 0, "v3",
	"Third triangle vertex index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDtriangle, verts[2]), (RawPropertyType)0, nullptr},
	GPencilTriangle_v3_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_GPencilTriangle = {
	{(ContainerRNA *)&RNA_GPencilEditCurve, (ContainerRNA *)&RNA_GPencilStrokePoint,
	nullptr,
	{(PropertyRNA *)&rna_GPencilTriangle_rna_properties, (PropertyRNA *)&rna_GPencilTriangle_v3}},
	"GPencilTriangle", nullptr, nullptr, 516, nullptr, "Triangle",
	"Triangulation data for Grease Pencil fills",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilTriangle_rna_properties,
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

/* Edit Curve */
CollectionPropertyRNA rna_GPencilEditCurve_rna_properties = {
	{(PropertyRNA *)&rna_GPencilEditCurve_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurve_rna_properties_begin, GPencilEditCurve_rna_properties_next, GPencilEditCurve_rna_properties_end, GPencilEditCurve_rna_properties_get, nullptr, nullptr, GPencilEditCurve_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilEditCurve_rna_type = {
	{(PropertyRNA *)&rna_GPencilEditCurve_curve_points, (PropertyRNA *)&rna_GPencilEditCurve_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurve_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilEditCurve_curve_points = {
	{(PropertyRNA *)&rna_GPencilEditCurve_select, (PropertyRNA *)&rna_GPencilEditCurve_rna_type,
	-1, "curve_points", 0, 0, 0, 8, 0, "Curve Points",
	"Curve data points",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurve_curve_points_begin, GPencilEditCurve_curve_points_next, GPencilEditCurve_curve_points_end, GPencilEditCurve_curve_points_get, GPencilEditCurve_curve_points_length, GPencilEditCurve_curve_points_lookup_int, nullptr, nullptr, &RNA_GPencilEditCurvePoint
};

BoolPropertyRNA rna_GPencilEditCurve_select = {
	{nullptr, (PropertyRNA *)&rna_GPencilEditCurve_curve_points,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Curve is selected for viewport editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurve_select_get, GPencilEditCurve_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_GPencilEditCurve = {
	{(ContainerRNA *)&RNA_GPencilEditCurvePoint, (ContainerRNA *)&RNA_GPencilTriangle,
	nullptr,
	{(PropertyRNA *)&rna_GPencilEditCurve_rna_properties, (PropertyRNA *)&rna_GPencilEditCurve_select}},
	"GPencilEditCurve", nullptr, nullptr, 516, nullptr, "Edit Curve",
	"Edition Curve",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilEditCurve_rna_properties,
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

/* Bezier Curve Point */
CollectionPropertyRNA rna_GPencilEditCurvePoint_rna_properties = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurvePoint_rna_properties_begin, GPencilEditCurvePoint_rna_properties_next, GPencilEditCurvePoint_rna_properties_end, GPencilEditCurvePoint_rna_properties_get, nullptr, nullptr, GPencilEditCurvePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilEditCurvePoint_rna_type = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_select_left_handle, (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurvePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_GPencilEditCurvePoint_select_left_handle = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_select_right_handle, (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_type,
	-1, "select_left_handle", 3, 0, 0, 0, 0, "Handle 1 selected",
	"Handle 1 selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurvePoint_select_left_handle_get, GPencilEditCurvePoint_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilEditCurvePoint_select_right_handle = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_select_control_point, (PropertyRNA *)&rna_GPencilEditCurvePoint_select_left_handle,
	-1, "select_right_handle", 3, 0, 0, 0, 0, "Handle 2 selected",
	"Handle 2 selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurvePoint_select_right_handle_get, GPencilEditCurvePoint_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilEditCurvePoint_select_control_point = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_hide, (PropertyRNA *)&rna_GPencilEditCurvePoint_select_right_handle,
	-1, "select_control_point", 3, 0, 0, 0, 0, "Control Point selected",
	"Control point selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurvePoint_select_control_point_get, GPencilEditCurvePoint_select_control_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilEditCurvePoint_hide = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_handle_left, (PropertyRNA *)&rna_GPencilEditCurvePoint_select_control_point,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"Visibility status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilEditCurvePoint_hide_get, GPencilEditCurvePoint_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_GPencilEditCurvePoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_handle_left = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_co, (PropertyRNA *)&rna_GPencilEditCurvePoint_hide,
	-1, "handle_left", 1, 0, 0, 0, 0, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, GPencilEditCurvePoint_handle_left_get, GPencilEditCurvePoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilEditCurvePoint_handle_left_default
};

static float rna_GPencilEditCurvePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_co = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_handle_right, (PropertyRNA *)&rna_GPencilEditCurvePoint_handle_left,
	-1, "co", 1, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, GPencilEditCurvePoint_co_get, GPencilEditCurvePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilEditCurvePoint_co_default
};

static float rna_GPencilEditCurvePoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_handle_right = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_pressure, (PropertyRNA *)&rna_GPencilEditCurvePoint_co,
	-1, "handle_right", 1, 0, 0, 0, 0, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, GPencilEditCurvePoint_handle_right_get, GPencilEditCurvePoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilEditCurvePoint_handle_right_default
};

FloatPropertyRNA rna_GPencilEditCurvePoint_pressure = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_strength, (PropertyRNA *)&rna_GPencilEditCurvePoint_handle_right,
	-1, "pressure", 1, 0, 0, 4, 0, "Pressure",
	"Pressure of the grease pencil stroke point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, pressure), (RawPropertyType)5, nullptr},
	GPencilEditCurvePoint_pressure_get, GPencilEditCurvePoint_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilEditCurvePoint_strength = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_point_index, (PropertyRNA *)&rna_GPencilEditCurvePoint_pressure,
	-1, "strength", 1, 0, 0, 4, 0, "Strength",
	"Color intensity (alpha factor) of the grease pencil stroke point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, strength), (RawPropertyType)5, nullptr},
	GPencilEditCurvePoint_strength_get, GPencilEditCurvePoint_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_GPencilEditCurvePoint_point_index = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_uv_factor, (PropertyRNA *)&rna_GPencilEditCurvePoint_strength,
	-1, "point_index", 0, 0, 0, 4, 0, "Point Index",
	"Index of the corresponding grease pencil stroke point",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, point_index), (RawPropertyType)0, nullptr},
	GPencilEditCurvePoint_point_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_GPencilEditCurvePoint_uv_factor = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_uv_rotation, (PropertyRNA *)&rna_GPencilEditCurvePoint_point_index,
	-1, "uv_factor", 1, 0, 0, 4, 0, "UV Factor",
	"Internal UV factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, uv_fac), (RawPropertyType)5, nullptr},
	GPencilEditCurvePoint_uv_factor_get, GPencilEditCurvePoint_uv_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilEditCurvePoint_uv_rotation = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_vertex_color, (PropertyRNA *)&rna_GPencilEditCurvePoint_uv_factor,
	-1, "uv_rotation", 1, 0, 0, 4, 0, "UV Rotation",
	"Internal UV factor for dot mode",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, uv_rot), (RawPropertyType)5, nullptr},
	GPencilEditCurvePoint_uv_rotation_get, GPencilEditCurvePoint_uv_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, nullptr
};

static float rna_GPencilEditCurvePoint_vertex_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_vertex_color = {
	{nullptr, (PropertyRNA *)&rna_GPencilEditCurvePoint_uv_rotation,
	-1, "vertex_color", 1, 0, 0, 4, 0, "Vertex Color",
	"Vertex color of the grease pencil stroke point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_GPencil_stroke_curve_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, vert_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilEditCurvePoint_vertex_color_get, GPencilEditCurvePoint_vertex_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilEditCurvePoint_vertex_color_default
};

StructRNA RNA_GPencilEditCurvePoint = {
	{(ContainerRNA *)&RNA_GpencilVertexGroupElement, (ContainerRNA *)&RNA_GPencilEditCurve,
	nullptr,
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties, (PropertyRNA *)&rna_GPencilEditCurvePoint_vertex_color}},
	"GPencilEditCurvePoint", nullptr, nullptr, 516, nullptr, "Bezier Curve Point",
	"Bezier curve point with two handles",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties,
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

/* Vertex Group Element */
CollectionPropertyRNA rna_GpencilVertexGroupElement_rna_properties = {
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GpencilVertexGroupElement_rna_properties_begin, GpencilVertexGroupElement_rna_properties_next, GpencilVertexGroupElement_rna_properties_end, GpencilVertexGroupElement_rna_properties_get, nullptr, nullptr, GpencilVertexGroupElement_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GpencilVertexGroupElement_rna_type = {
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_group, (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GpencilVertexGroupElement_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_GpencilVertexGroupElement_group = {
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_weight, (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_type,
	-1, "group", 2, 0, 0, 4, 0, "Group Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, def_nr), (RawPropertyType)0, nullptr},
	GpencilVertexGroupElement_group_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_GpencilVertexGroupElement_weight = {
	{nullptr, (PropertyRNA *)&rna_GpencilVertexGroupElement_group,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Vertex Weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, weight), (RawPropertyType)5, nullptr},
	GpencilVertexGroupElement_weight_get, GpencilVertexGroupElement_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_GpencilVertexGroupElement = {
	{(ContainerRNA *)&RNA_GreasePencilv3, (ContainerRNA *)&RNA_GPencilEditCurvePoint,
	nullptr,
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties, (PropertyRNA *)&rna_GpencilVertexGroupElement_weight}},
	"GpencilVertexGroupElement", nullptr, nullptr, 516, nullptr, "Vertex Group Element",
	"Weight value of a vertex in a vertex group",
	"*", 201,
	nullptr, (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties,
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

