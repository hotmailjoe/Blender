
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

#include "rna_material.cc"
#include "rna_material_api.cc"

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

RNA_EXTERN_C EnumPropertyRNA rna_Material_surface_render_method;
RNA_EXTERN_C EnumPropertyRNA rna_Material_blend_method;
RNA_EXTERN_C EnumPropertyRNA rna_Material_shadow_method;
RNA_EXTERN_C FloatPropertyRNA rna_Material_alpha_threshold;
RNA_EXTERN_C BoolPropertyRNA rna_Material_show_transparent_back;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_backface_culling;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_backface_culling_shadow;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_transparent_shadow;
RNA_EXTERN_C BoolPropertyRNA rna_Material_lightprobe_volume_single_sided;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_screen_refraction;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_sss_translucency;
RNA_EXTERN_C FloatPropertyRNA rna_Material_refraction_depth;
RNA_EXTERN_C EnumPropertyRNA rna_Material_volume_intersection_method;
RNA_EXTERN_C FloatPropertyRNA rna_Material_max_vertex_displacement;
RNA_EXTERN_C EnumPropertyRNA rna_Material_preview_render_type;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_preview_world;
RNA_EXTERN_C IntPropertyRNA rna_Material_pass_index;
RNA_EXTERN_C PointerPropertyRNA rna_Material_node_tree;
RNA_EXTERN_C BoolPropertyRNA rna_Material_use_nodes;
RNA_EXTERN_C PointerPropertyRNA rna_Material_animation_data;
RNA_EXTERN_C CollectionPropertyRNA rna_Material_texture_paint_images;
RNA_EXTERN_C CollectionPropertyRNA rna_Material_texture_paint_slots;
RNA_EXTERN_C IntPropertyRNA rna_Material_paint_active_slot;
RNA_EXTERN_C IntPropertyRNA rna_Material_paint_clone_slot;
RNA_EXTERN_C FloatPropertyRNA rna_Material_diffuse_color;
RNA_EXTERN_C FloatPropertyRNA rna_Material_specular_color;
RNA_EXTERN_C FloatPropertyRNA rna_Material_roughness;
RNA_EXTERN_C FloatPropertyRNA rna_Material_specular_intensity;
RNA_EXTERN_C FloatPropertyRNA rna_Material_metallic;
RNA_EXTERN_C FloatPropertyRNA rna_Material_line_color;
RNA_EXTERN_C IntPropertyRNA rna_Material_line_priority;
RNA_EXTERN_C PointerPropertyRNA rna_Material_grease_pencil;
RNA_EXTERN_C BoolPropertyRNA rna_Material_is_grease_pencil;
RNA_EXTERN_C PointerPropertyRNA rna_Material_lineart;

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



RNA_EXTERN_C CollectionPropertyRNA rna_TexPaintSlot_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_TexPaintSlot_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_TexPaintSlot_name;
RNA_EXTERN_C IntPropertyRNA rna_TexPaintSlot_icon_value;
RNA_EXTERN_C StringPropertyRNA rna_TexPaintSlot_uv_layer;
RNA_EXTERN_C BoolPropertyRNA rna_TexPaintSlot_is_valid;


RNA_EXTERN_C CollectionPropertyRNA rna_MaterialGPencilStyle_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaterialGPencilStyle_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_color;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_fill_color;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_mix_color;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_mix_factor;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_mix_stroke_factor;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_texture_angle;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_texture_scale;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_texture_offset;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_pixel_size;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_hide;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_lock;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_ghost;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_texture_clamp;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_flip;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_use_overlap_strokes;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_use_stroke_holdout;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_use_fill_holdout;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_show_stroke;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_show_fill;
RNA_EXTERN_C EnumPropertyRNA rna_MaterialGPencilStyle_alignment_mode;
RNA_EXTERN_C FloatPropertyRNA rna_MaterialGPencilStyle_alignment_rotation;
RNA_EXTERN_C IntPropertyRNA rna_MaterialGPencilStyle_pass_index;
RNA_EXTERN_C EnumPropertyRNA rna_MaterialGPencilStyle_mode;
RNA_EXTERN_C EnumPropertyRNA rna_MaterialGPencilStyle_stroke_style;
RNA_EXTERN_C PointerPropertyRNA rna_MaterialGPencilStyle_stroke_image;
RNA_EXTERN_C EnumPropertyRNA rna_MaterialGPencilStyle_fill_style;
RNA_EXTERN_C EnumPropertyRNA rna_MaterialGPencilStyle_gradient_type;
RNA_EXTERN_C PointerPropertyRNA rna_MaterialGPencilStyle_fill_image;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_is_stroke_visible;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialGPencilStyle_is_fill_visible;


RNA_EXTERN_C CollectionPropertyRNA rna_MaterialLineArt_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaterialLineArt_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialLineArt_use_material_mask;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialLineArt_use_material_mask_bits;
RNA_EXTERN_C IntPropertyRNA rna_MaterialLineArt_mat_occlusion;
RNA_EXTERN_C IntPropertyRNA rna_MaterialLineArt_intersection_priority;
RNA_EXTERN_C BoolPropertyRNA rna_MaterialLineArt_use_intersection_priority_override;

RNA_EXTERN_C int Material_surface_render_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->surface_render_method);
}

RNA_EXTERN_C void Material_surface_render_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->surface_render_method = (std::remove_reference_t<decltype(data->surface_render_method)>)value;
#else
    data->surface_render_method = value;
#endif
}

RNA_EXTERN_C int Material_blend_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->blend_method);
}

RNA_EXTERN_C void Material_blend_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->blend_method = (std::remove_reference_t<decltype(data->blend_method)>)value;
#else
    data->blend_method = value;
#endif
}

RNA_EXTERN_C int Material_shadow_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->blend_shadow);
}

RNA_EXTERN_C void Material_shadow_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->blend_shadow = (std::remove_reference_t<decltype(data->blend_shadow)>)value;
#else
    data->blend_shadow = value;
#endif
}

RNA_EXTERN_C float Material_alpha_threshold_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->alpha_threshold);
}

RNA_EXTERN_C void Material_alpha_threshold_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->alpha_threshold = (std::remove_reference_t<decltype(data->alpha_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->alpha_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool Material_show_transparent_back_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return !(((data->blend_flag) & 1) != 0);
}

RNA_EXTERN_C void Material_show_transparent_back_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (!value) { data->blend_flag |= 1; }
    else { data->blend_flag &= ~1; }
}

RNA_EXTERN_C bool Material_use_backface_culling_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 4) != 0);
}

RNA_EXTERN_C void Material_use_backface_culling_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 4; }
    else { data->blend_flag &= ~4; }
}

RNA_EXTERN_C bool Material_use_backface_culling_shadow_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 32) != 0);
}

RNA_EXTERN_C void Material_use_backface_culling_shadow_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 32; }
    else { data->blend_flag &= ~32; }
}

RNA_EXTERN_C bool Material_use_transparent_shadow_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 64) != 0);
}

RNA_EXTERN_C void Material_use_transparent_shadow_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 64; }
    else { data->blend_flag &= ~64; }
}

RNA_EXTERN_C bool Material_lightprobe_volume_single_sided_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return !(((data->blend_flag) & 16) != 0);
}

RNA_EXTERN_C void Material_lightprobe_volume_single_sided_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (!value) { data->blend_flag |= 16; }
    else { data->blend_flag &= ~16; }
}

RNA_EXTERN_C bool Material_use_screen_refraction_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 2) != 0);
}

RNA_EXTERN_C void Material_use_screen_refraction_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 2; }
    else { data->blend_flag &= ~2; }
}

RNA_EXTERN_C bool Material_use_sss_translucency_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 8) != 0);
}

RNA_EXTERN_C void Material_use_sss_translucency_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 8; }
    else { data->blend_flag &= ~8; }
}

RNA_EXTERN_C float Material_refraction_depth_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->refract_depth);
}

RNA_EXTERN_C void Material_refraction_depth_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->refract_depth = (std::remove_reference_t<decltype(data->refract_depth)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->refract_depth = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int Material_volume_intersection_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->volume_intersection_method);
}

RNA_EXTERN_C void Material_volume_intersection_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->volume_intersection_method = (std::remove_reference_t<decltype(data->volume_intersection_method)>)value;
#else
    data->volume_intersection_method = value;
#endif
}

RNA_EXTERN_C float Material_max_vertex_displacement_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->inflate_bounds);
}

RNA_EXTERN_C void Material_max_vertex_displacement_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->inflate_bounds = (std::remove_reference_t<decltype(data->inflate_bounds)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->inflate_bounds = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int Material_preview_render_type_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->pr_type);
}

RNA_EXTERN_C void Material_preview_render_type_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->pr_type = (std::remove_reference_t<decltype(data->pr_type)>)value;
#else
    data->pr_type = value;
#endif
}

RNA_EXTERN_C bool Material_use_preview_world_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->pr_flag) & 1) != 0);
}

RNA_EXTERN_C void Material_use_preview_world_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->pr_flag |= 1; }
    else { data->pr_flag &= ~1; }
}

RNA_EXTERN_C int Material_pass_index_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->index);
}

RNA_EXTERN_C void Material_pass_index_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->index = (std::remove_reference_t<decltype(data->index)>)CLAMPIS(value, 0, 32767);
#else
    data->index = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C PointerRNA Material_node_tree_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

RNA_EXTERN_C bool Material_use_nodes_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->use_nodes) & 1) != 0);
}

RNA_EXTERN_C void Material_use_nodes_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->use_nodes |= 1; }
    else { data->use_nodes &= ~1; }
}

RNA_EXTERN_C PointerRNA Material_animation_data_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Material_texture_paint_images_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Image, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void Material_texture_paint_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Material_texture_paint_images;

    rna_Material_texpaint_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_images_get(iter);
    }
}

RNA_EXTERN_C void Material_texture_paint_images_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_images_get(iter);
    }
}

RNA_EXTERN_C void Material_texture_paint_images_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Material_texture_paint_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Material_texture_paint_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = Material_texture_paint_images_get(&iter); }
    }

    Material_texture_paint_images_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Material_texture_paint_images_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Material_texture_paint_images_begin(&iter, ptr);

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
        Material_texture_paint_images_next(&iter);
    }
    Material_texture_paint_images_end(&iter);

    return found;
}

static PointerRNA Material_texture_paint_slots_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TexPaintSlot, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Material_texture_paint_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Material_texture_paint_slots;

    rna_Material_texpaint_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_slots_get(iter);
    }
}

RNA_EXTERN_C void Material_texture_paint_slots_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_slots_get(iter);
    }
}

RNA_EXTERN_C void Material_texture_paint_slots_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Material_paint_active_slot_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->paint_active_slot);
}

RNA_EXTERN_C void Material_paint_active_slot_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->paint_active_slot = (std::remove_reference_t<decltype(data->paint_active_slot)>)CLAMPIS(value, 0, 32767);
#else
    data->paint_active_slot = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C int Material_paint_clone_slot_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->paint_clone_slot);
}

RNA_EXTERN_C void Material_paint_clone_slot_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->paint_clone_slot = (std::remove_reference_t<decltype(data->paint_clone_slot)>)CLAMPIS(value, 0, 32767);
#else
    data->paint_clone_slot = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C void Material_diffuse_color_get(PointerRNA *ptr, float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

RNA_EXTERN_C void Material_diffuse_color_set(PointerRNA *ptr, const float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C void Material_specular_color_get(PointerRNA *ptr, float values[3])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->specr)[i]);
    }
}

RNA_EXTERN_C void Material_specular_color_set(PointerRNA *ptr, const float values[3])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->specr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float Material_roughness_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->roughness);
}

RNA_EXTERN_C void Material_roughness_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->roughness = (std::remove_reference_t<decltype(data->roughness)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->roughness = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Material_specular_intensity_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->spec);
}

RNA_EXTERN_C void Material_specular_intensity_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->spec = (std::remove_reference_t<decltype(data->spec)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->spec = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Material_metallic_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->metallic);
}

RNA_EXTERN_C void Material_metallic_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->metallic = (std::remove_reference_t<decltype(data->metallic)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->metallic = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void Material_line_color_get(PointerRNA *ptr, float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->line_col)[i]);
    }
}

RNA_EXTERN_C void Material_line_color_set(PointerRNA *ptr, const float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->line_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C int Material_line_priority_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->line_priority);
}

RNA_EXTERN_C void Material_line_priority_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
#ifdef __cplusplus
    data->line_priority = (std::remove_reference_t<decltype(data->line_priority)>)CLAMPIS(value, 0, 32767);
#else
    data->line_priority = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C PointerRNA Material_grease_pencil_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MaterialGPencilStyle, data->gp_style);
}

RNA_EXTERN_C bool Material_is_grease_pencil_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_is_grease_pencil_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Material_lineart_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MaterialLineArt, &data->lineart);
}

static PointerRNA TexPaintSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void TexPaintSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TexPaintSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TexPaintSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TexPaintSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TexPaintSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TexPaintSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int TexPaintSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA TexPaintSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void TexPaintSlot_name_get(PointerRNA *ptr, char *value)
{
    rna_TexPaintSlot_name_get(ptr, value);
}

RNA_EXTERN_C int TexPaintSlot_name_length(PointerRNA *ptr)
{
    return rna_TexPaintSlot_name_length(ptr);
}

RNA_EXTERN_C int TexPaintSlot_icon_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_TexPaintSlot_icon_get;
    return fn(ptr);
}

RNA_EXTERN_C void TexPaintSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
    rna_TexPaintSlot_uv_layer_get(ptr, value);
}

RNA_EXTERN_C int TexPaintSlot_uv_layer_length(PointerRNA *ptr)
{
    return rna_TexPaintSlot_uv_layer_length(ptr);
}

RNA_EXTERN_C void TexPaintSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
    rna_TexPaintSlot_uv_layer_set(ptr, value);
}

RNA_EXTERN_C bool TexPaintSlot_is_valid_get(PointerRNA *ptr)
{
    TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
    return (((data->valid) & 1) != 0);
}

static PointerRNA MaterialGPencilStyle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaterialGPencilStyle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialGPencilStyle_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaterialGPencilStyle_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaterialGPencilStyle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaterialGPencilStyle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MaterialGPencilStyle_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->stroke_rgba)[i]);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->stroke_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_fill_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->fill_rgba)[i]);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_fill_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->fill_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_mix_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->mix_rgba)[i]);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_mix_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->mix_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float MaterialGPencilStyle_mix_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->mix_factor);
}

RNA_EXTERN_C void MaterialGPencilStyle_mix_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
#ifdef __cplusplus
    data->mix_factor = (std::remove_reference_t<decltype(data->mix_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->mix_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MaterialGPencilStyle_mix_stroke_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->mix_stroke_factor);
}

RNA_EXTERN_C void MaterialGPencilStyle_mix_stroke_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
#ifdef __cplusplus
    data->mix_stroke_factor = (std::remove_reference_t<decltype(data->mix_stroke_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->mix_stroke_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float MaterialGPencilStyle_texture_angle_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->texture_angle);
}

RNA_EXTERN_C void MaterialGPencilStyle_texture_angle_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
#ifdef __cplusplus
    data->texture_angle = (std::remove_reference_t<decltype(data->texture_angle)>)value;
#else
    data->texture_angle = value;
#endif
}

RNA_EXTERN_C void MaterialGPencilStyle_texture_scale_get(PointerRNA *ptr, float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->texture_scale)[i]);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_texture_scale_set(PointerRNA *ptr, const float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->texture_scale)[i] = values[i];
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_texture_offset_get(PointerRNA *ptr, float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->texture_offset)[i]);
    }
}

RNA_EXTERN_C void MaterialGPencilStyle_texture_offset_set(PointerRNA *ptr, const float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->texture_offset)[i] = values[i];
    }
}

RNA_EXTERN_C float MaterialGPencilStyle_pixel_size_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->texture_pixsize);
}

RNA_EXTERN_C void MaterialGPencilStyle_pixel_size_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
#ifdef __cplusplus
    data->texture_pixsize = (std::remove_reference_t<decltype(data->texture_pixsize)>)CLAMPIS(value, 1.0f, 5000.0f);
#else
    data->texture_pixsize = CLAMPIS(value, 1.0f, 5000.0f);
#endif
}

RNA_EXTERN_C bool MaterialGPencilStyle_hide_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_hide_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_lock_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_lock_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_ghost_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_ghost_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_texture_clamp_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_texture_clamp_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_flip_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_flip_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_use_overlap_strokes_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_use_overlap_strokes_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_use_stroke_holdout_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_use_stroke_holdout_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_use_fill_holdout_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_use_fill_holdout_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_show_stroke_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_show_stroke_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool MaterialGPencilStyle_show_fill_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void MaterialGPencilStyle_show_fill_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C int MaterialGPencilStyle_alignment_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->alignment_mode) & 3);
}

RNA_EXTERN_C void MaterialGPencilStyle_alignment_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->alignment_mode &= ~3;
    data->alignment_mode |= value;
}

RNA_EXTERN_C float MaterialGPencilStyle_alignment_rotation_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->alignment_rotation);
}

RNA_EXTERN_C void MaterialGPencilStyle_alignment_rotation_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
#ifdef __cplusplus
    data->alignment_rotation = (std::remove_reference_t<decltype(data->alignment_rotation)>)CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#else
    data->alignment_rotation = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#endif
}

RNA_EXTERN_C int MaterialGPencilStyle_pass_index_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (int)(data->index);
}

RNA_EXTERN_C void MaterialGPencilStyle_pass_index_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
#ifdef __cplusplus
    data->index = (std::remove_reference_t<decltype(data->index)>)CLAMPIS(value, 0, 32767);
#else
    data->index = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C int MaterialGPencilStyle_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->mode) & 3);
}

RNA_EXTERN_C void MaterialGPencilStyle_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mode &= ~3;
    data->mode |= value;
}

RNA_EXTERN_C int MaterialGPencilStyle_stroke_style_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->stroke_style) & 1);
}

RNA_EXTERN_C void MaterialGPencilStyle_stroke_style_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->stroke_style &= ~1;
    data->stroke_style |= value;
}

RNA_EXTERN_C PointerRNA MaterialGPencilStyle_stroke_image_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->sima);
}

RNA_EXTERN_C void MaterialGPencilStyle_stroke_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GpencilColorData_stroke_image_set(ptr, value, reports);
}

RNA_EXTERN_C int MaterialGPencilStyle_fill_style_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->fill_style) & 3);
}

RNA_EXTERN_C void MaterialGPencilStyle_fill_style_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->fill_style &= ~3;
    data->fill_style |= value;
}

RNA_EXTERN_C int MaterialGPencilStyle_gradient_type_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->gradient_type) & 1);
}

RNA_EXTERN_C void MaterialGPencilStyle_gradient_type_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->gradient_type &= ~1;
    data->gradient_type |= value;
}

RNA_EXTERN_C PointerRNA MaterialGPencilStyle_fill_image_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

RNA_EXTERN_C void MaterialGPencilStyle_fill_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GpencilColorData_fill_image_set(ptr, value, reports);
}

RNA_EXTERN_C bool MaterialGPencilStyle_is_stroke_visible_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilColorData_is_stroke_visible_get;
    return fn(ptr);
}

RNA_EXTERN_C bool MaterialGPencilStyle_is_fill_visible_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilColorData_is_fill_visible_get;
    return fn(ptr);
}

static PointerRNA MaterialLineArt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaterialLineArt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaterialLineArt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialLineArt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaterialLineArt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaterialLineArt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaterialLineArt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaterialLineArt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaterialLineArt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool MaterialLineArt_use_material_mask_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void MaterialLineArt_use_material_mask_set(PointerRNA *ptr, bool value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C void MaterialLineArt_use_material_mask_bits_get(PointerRNA *ptr, bool values[8])
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        values[i] = ((data->material_mask_bits & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void MaterialLineArt_use_material_mask_bits_set(PointerRNA *ptr, const bool values[8])
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (values[i]) { data->material_mask_bits |= (1 << i); }
        else { data->material_mask_bits &= ~(1 << i); }
    }
}

RNA_EXTERN_C int MaterialLineArt_mat_occlusion_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (int)(data->mat_occlusion);
}

RNA_EXTERN_C void MaterialLineArt_mat_occlusion_set(PointerRNA *ptr, int value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
#ifdef __cplusplus
    data->mat_occlusion = (std::remove_reference_t<decltype(data->mat_occlusion)>)CLAMPIS(value, 0, 255);
#else
    data->mat_occlusion = CLAMPIS(value, 0, 255);
#endif
}

RNA_EXTERN_C int MaterialLineArt_intersection_priority_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (int)(data->intersection_priority);
}

RNA_EXTERN_C void MaterialLineArt_intersection_priority_set(PointerRNA *ptr, int value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
#ifdef __cplusplus
    data->intersection_priority = (std::remove_reference_t<decltype(data->intersection_priority)>)CLAMPIS(value, 0, 255);
#else
    data->intersection_priority = CLAMPIS(value, 0, 255);
#endif
}

RNA_EXTERN_C bool MaterialLineArt_use_intersection_priority_override_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void MaterialLineArt_use_intersection_priority_override_set(PointerRNA *ptr, bool value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}





/* Material */
static const EnumPropertyItem rna_Material_surface_render_method_items[3] = {
	{0, "DITHERED", 0, "Dithered", "Allows for grayscale hashed transparency, and compatible with render passes and raytracing. Also known as deferred rendering"},
	{1, "BLENDED", 0, "Blended", "Allows for colored transparency, but incompatible with render passes and raytracing. Also known as forward rendering"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Material_surface_render_method = {
	{(PropertyRNA *)&rna_Material_blend_method, nullptr,
	-1, "surface_render_method", 3, 0, 0, 4, 0, "Surface Render Method",
	"Controls the blending and the compatibility with certain features",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, surface_render_method), (RawPropertyType)2, nullptr},
	Material_surface_render_method_get, Material_surface_render_method_set, nullptr, nullptr, nullptr, rna_Material_surface_render_method_items, 2, 0
};

static const EnumPropertyItem rna_Material_blend_method_items[5] = {
	{0, "OPAQUE", 0, "Opaque", "Render surface without transparency"},
	{3, "CLIP", 0, "Alpha Clip", "Use the alpha threshold to clip the visibility (binary visibility)"},
	{4, "HASHED", 0, "Alpha Hashed", "Use noise to dither the binary visibility (works well with multi-samples)"},
	{5, "BLEND", 0, "Alpha Blend", "Render polygon transparent, depending on alpha channel of the texture"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Material_blend_method = {
	{(PropertyRNA *)&rna_Material_shadow_method, (PropertyRNA *)&rna_Material_surface_render_method,
	-1, "blend_method", 3, 0, 0, 4, 0, "Blend Mode",
	"Blend Mode for Transparent Faces",
	0, "Material",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, blend_method), (RawPropertyType)2, nullptr},
	Material_blend_method_get, Material_blend_method_set, nullptr, nullptr, nullptr, rna_Material_blend_method_items, 4, 0
};

static const EnumPropertyItem rna_Material_shadow_method_items[5] = {
	{0, "NONE", 0, "None", "Material will cast no shadow"},
	{1, "OPAQUE", 0, "Opaque", "Material will cast shadows without transparency"},
	{2, "CLIP", 0, "Alpha Clip", "Use the alpha threshold to clip the visibility (binary visibility)"},
	{3, "HASHED", 0, "Alpha Hashed", "Use noise to dither the binary visibility and use filtering to reduce the noise"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Material_shadow_method = {
	{(PropertyRNA *)&rna_Material_alpha_threshold, (PropertyRNA *)&rna_Material_blend_method,
	-1, "shadow_method", 3, 0, 0, 4, 0, "Shadow Mode",
	"Shadow mapping method",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, blend_shadow), (RawPropertyType)2, nullptr},
	Material_shadow_method_get, Material_shadow_method_set, nullptr, nullptr, nullptr, rna_Material_shadow_method_items, 4, 1
};

FloatPropertyRNA rna_Material_alpha_threshold = {
	{(PropertyRNA *)&rna_Material_show_transparent_back, (PropertyRNA *)&rna_Material_shadow_method,
	-1, "alpha_threshold", 3, 0, 0, 4, 0, "Clip Threshold",
	"A pixel is rendered only if its alpha value is above this threshold",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, alpha_threshold), (RawPropertyType)5, nullptr},
	Material_alpha_threshold_get, Material_alpha_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

BoolPropertyRNA rna_Material_show_transparent_back = {
	{(PropertyRNA *)&rna_Material_use_backface_culling, (PropertyRNA *)&rna_Material_alpha_threshold,
	-1, "show_transparent_back", 3, 0, 0, 0, 0, "Show Backface",
	"Render multiple transparent layers (may introduce transparency sorting problems)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_show_transparent_back_get, Material_show_transparent_back_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Material_use_backface_culling = {
	{(PropertyRNA *)&rna_Material_use_backface_culling_shadow, (PropertyRNA *)&rna_Material_show_transparent_back,
	-1, "use_backface_culling", 3, 0, 0, 0, 0, "Backface Culling",
	"Use back face culling to hide the back side of faces",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_backface_culling_get, Material_use_backface_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Material_use_backface_culling_shadow = {
	{(PropertyRNA *)&rna_Material_use_transparent_shadow, (PropertyRNA *)&rna_Material_use_backface_culling,
	-1, "use_backface_culling_shadow", 3, 0, 0, 0, 0, "Shadow Backface Culling",
	"Use back face culling when casting shadows",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_backface_culling_shadow_get, Material_use_backface_culling_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Material_use_transparent_shadow = {
	{(PropertyRNA *)&rna_Material_lightprobe_volume_single_sided, (PropertyRNA *)&rna_Material_use_backface_culling_shadow,
	-1, "use_transparent_shadow", 3, 0, 0, 0, 0, "Transparent Shadows",
	"Use transparent shadows for this material if it contains a Transparent BSDF, disabling will render faster but not give accurate shadows",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_transparent_shadow_get, Material_use_transparent_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Material_lightprobe_volume_single_sided = {
	{(PropertyRNA *)&rna_Material_use_screen_refraction, (PropertyRNA *)&rna_Material_use_transparent_shadow,
	-1, "lightprobe_volume_single_sided", 3, 0, 0, 0, 0, "Light Probe Volume Single Sided",
	"Consider material single sided for light probe volume capture. Additionnaly helps rejecting probes inside the object to avoid light leaks",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_lightprobe_volume_single_sided_get, Material_lightprobe_volume_single_sided_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Material_use_screen_refraction = {
	{(PropertyRNA *)&rna_Material_use_sss_translucency, (PropertyRNA *)&rna_Material_lightprobe_volume_single_sided,
	-1, "use_screen_refraction", 3, 0, 0, 0, 0, "Raytrace Refraction",
	"Use raytracing to determine refracted color instead of using only light probes. This prevents the surface from contributing to the lighting of surfaces not using this setting",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_screen_refraction_get, Material_use_screen_refraction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Material_use_sss_translucency = {
	{(PropertyRNA *)&rna_Material_refraction_depth, (PropertyRNA *)&rna_Material_use_screen_refraction,
	-1, "use_sss_translucency", 3, 0, 0, 0, 0, "Subsurface Translucency",
	"Add translucency effect to subsurface",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_sss_translucency_get, Material_use_sss_translucency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Material_refraction_depth = {
	{(PropertyRNA *)&rna_Material_volume_intersection_method, (PropertyRNA *)&rna_Material_use_sss_translucency,
	-1, "refraction_depth", 3, 0, 0, 4, 0, "Refraction Depth",
	"Approximate the thickness of the object to compute two refraction events (0 is disabled)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, refract_depth), (RawPropertyType)5, nullptr},
	Material_refraction_depth_get, Material_refraction_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_Material_volume_intersection_method_items[3] = {
	{0, "FAST", 0, "Fast", "Each face is considered as a medium interface. Gives correct results for manifold geometry that contains no inner parts"},
	{1, "ACCURATE", 0, "Accurate", "Faces are considered as medium interface only when they have different consecutive facing. Gives correct results as long as the max ray depth is not exceeded. Have significant memory overhead compared to the fast method"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Material_volume_intersection_method = {
	{(PropertyRNA *)&rna_Material_max_vertex_displacement, (PropertyRNA *)&rna_Material_refraction_depth,
	-1, "volume_intersection_method", 3, 0, 0, 4, 0, "Volume Intersection Method",
	"Determines which inner part of the mesh will produce volumetric effect",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, volume_intersection_method), (RawPropertyType)2, nullptr},
	Material_volume_intersection_method_get, Material_volume_intersection_method_set, nullptr, nullptr, nullptr, rna_Material_volume_intersection_method_items, 2, 0
};

FloatPropertyRNA rna_Material_max_vertex_displacement = {
	{(PropertyRNA *)&rna_Material_preview_render_type, (PropertyRNA *)&rna_Material_volume_intersection_method,
	-1, "max_vertex_displacement", 3, 0, 0, 4, 0, "Max Vertex Displacement",
	"The max distance a vertex can be displaced.Displacements over this threshold may cause visibility issues",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, inflate_bounds), (RawPropertyType)5, nullptr},
	Material_max_vertex_displacement_get, Material_max_vertex_displacement_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_Material_preview_render_type_items[8] = {
	{0, "FLAT", 728, "Flat", "Flat XY plane"},
	{1, "SPHERE", 729, "Sphere", "Sphere"},
	{2, "CUBE", 730, "Cube", "Cube"},
	{10, "HAIR", 732, "Hair", "Hair strands"},
	{3, "SHADERBALL", 736, "Shader Ball", "Shader ball"},
	{12, "CLOTH", 737, "Cloth", "Cloth"},
	{13, "FLUID", 738, "Fluid", "Fluid"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Material_preview_render_type = {
	{(PropertyRNA *)&rna_Material_use_preview_world, (PropertyRNA *)&rna_Material_max_vertex_displacement,
	-1, "preview_render_type", 3, 0, 0, 4, 0, "Preview Render Type",
	"Type of preview render",
	0, "Material",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_update_previews, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, pr_type), (RawPropertyType)2, nullptr},
	Material_preview_render_type_get, Material_preview_render_type_set, nullptr, nullptr, nullptr, rna_Material_preview_render_type_items, 7, 1
};

BoolPropertyRNA rna_Material_use_preview_world = {
	{(PropertyRNA *)&rna_Material_pass_index, (PropertyRNA *)&rna_Material_preview_render_type,
	-1, "use_preview_world", 3, 0, 0, 0, 0, "Preview World",
	"Use the current world background to light the preview render",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_update_previews, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_preview_world_get, Material_use_preview_world_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Material_pass_index = {
	{(PropertyRNA *)&rna_Material_node_tree, (PropertyRNA *)&rna_Material_use_preview_world,
	-1, "pass_index", 3, 0, 0, 4, 0, "Pass Index",
	"Index number for the \"Material Index\" render pass",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_update, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, index), (RawPropertyType)1, nullptr},
	Material_pass_index_get, Material_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

PointerPropertyRNA rna_Material_node_tree = {
	{(PropertyRNA *)&rna_Material_use_nodes, (PropertyRNA *)&rna_Material_pass_index,
	-1, "node_tree", 8388672, 1, 0, 32, 0, "Node Tree",
	"Node tree for node based materials",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_node_tree_get, nullptr, nullptr, nullptr,&RNA_NodeTree
};

BoolPropertyRNA rna_Material_use_nodes = {
	{(PropertyRNA *)&rna_Material_animation_data, (PropertyRNA *)&rna_Material_node_tree,
	-1, "use_nodes", 4194305, 0, 0, 0, 0, "Use Nodes",
	"Use shader nodes to render the material",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Material_use_nodes_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_use_nodes_get, Material_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Material_animation_data = {
	{(PropertyRNA *)&rna_Material_texture_paint_images, (PropertyRNA *)&rna_Material_use_nodes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Material_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

CollectionPropertyRNA rna_Material_texture_paint_images = {
	{(PropertyRNA *)&rna_Material_texture_paint_slots, (PropertyRNA *)&rna_Material_animation_data,
	-1, "texture_paint_images", 128, 0, 0, 0, 0, "Texture Slot Images",
	"Texture images used for texture painting",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_texture_paint_images_begin, Material_texture_paint_images_next, Material_texture_paint_images_end, Material_texture_paint_images_get, nullptr, Material_texture_paint_images_lookup_int, Material_texture_paint_images_lookup_string, nullptr, &RNA_Image
};

CollectionPropertyRNA rna_Material_texture_paint_slots = {
	{(PropertyRNA *)&rna_Material_paint_active_slot, (PropertyRNA *)&rna_Material_texture_paint_images,
	-1, "texture_paint_slots", 0, 0, 0, 8, 0, "Texture Slots",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_texture_paint_slots_begin, Material_texture_paint_slots_next, Material_texture_paint_slots_end, Material_texture_paint_slots_get, nullptr, nullptr, nullptr, nullptr, &RNA_TexPaintSlot
};

IntPropertyRNA rna_Material_paint_active_slot = {
	{(PropertyRNA *)&rna_Material_paint_clone_slot, (PropertyRNA *)&rna_Material_texture_paint_slots,
	-1, "paint_active_slot", 4194307, 0, 0, 4, 0, "Active Paint Texture Index",
	"Index of active texture paint slot",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Material_active_paint_texture_index_update, 119537664, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, paint_active_slot), (RawPropertyType)1, nullptr},
	Material_paint_active_slot_get, Material_paint_active_slot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Material_paint_clone_slot = {
	{(PropertyRNA *)&rna_Material_diffuse_color, (PropertyRNA *)&rna_Material_paint_active_slot,
	-1, "paint_clone_slot", 3, 0, 0, 4, 0, "Clone Paint Texture Index",
	"Index of clone texture paint slot",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 119537664, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, paint_clone_slot), (RawPropertyType)1, nullptr},
	Material_paint_clone_slot_get, Material_paint_clone_slot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

static float rna_Material_diffuse_color_default[4] = {
	0.8000000119f,
	0.8000000119f,
	0.8000000119f,
	0.8000000119f
};

FloatPropertyRNA rna_Material_diffuse_color = {
	{(PropertyRNA *)&rna_Material_specular_color, (PropertyRNA *)&rna_Material_paint_clone_slot,
	-1, "diffuse_color", 3, 1, 0, 4, 0, "Diffuse Color",
	"Diffuse color of the material",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, r), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Material_diffuse_color_get, Material_diffuse_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.8000000119f, rna_Material_diffuse_color_default
};

static float rna_Material_specular_color_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Material_specular_color = {
	{(PropertyRNA *)&rna_Material_roughness, (PropertyRNA *)&rna_Material_diffuse_color,
	-1, "specular_color", 3, 1, 0, 4, 0, "Specular Color",
	"Specular color of the material",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, specr), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Material_specular_color_get, Material_specular_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, rna_Material_specular_color_default
};

FloatPropertyRNA rna_Material_roughness = {
	{(PropertyRNA *)&rna_Material_specular_intensity, (PropertyRNA *)&rna_Material_specular_color,
	-1, "roughness", 3, 1, 0, 4, 0, "Roughness",
	"Roughness of the material",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, roughness), (RawPropertyType)5, nullptr},
	Material_roughness_get, Material_roughness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.4000000060f, nullptr
};

FloatPropertyRNA rna_Material_specular_intensity = {
	{(PropertyRNA *)&rna_Material_metallic, (PropertyRNA *)&rna_Material_roughness,
	-1, "specular_intensity", 3, 1, 0, 4, 0, "Specular",
	"How intense (bright) the specular reflection is",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, spec), (RawPropertyType)5, nullptr},
	Material_specular_intensity_get, Material_specular_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Material_metallic = {
	{(PropertyRNA *)&rna_Material_line_color, (PropertyRNA *)&rna_Material_specular_intensity,
	-1, "metallic", 3, 1, 0, 4, 0, "Metallic",
	"Amount of mirror reflection for raytrace",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, metallic), (RawPropertyType)5, nullptr},
	Material_metallic_get, Material_metallic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_Material_line_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Material_line_color = {
	{(PropertyRNA *)&rna_Material_line_priority, (PropertyRNA *)&rna_Material_metallic,
	-1, "line_color", 3, 0, 0, 4, 0, "Line Color",
	"Line color used for Freestyle line rendering",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Material_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, line_col), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Material_line_color_get, Material_line_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Material_line_color_default
};

IntPropertyRNA rna_Material_line_priority = {
	{(PropertyRNA *)&rna_Material_grease_pencil, (PropertyRNA *)&rna_Material_line_color,
	-1, "line_priority", 3, 0, 0, 4, 0, "Line Priority",
	"The line color of a higher priority is used at material boundaries",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, line_priority), (RawPropertyType)1, nullptr},
	Material_line_priority_get, Material_line_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

PointerPropertyRNA rna_Material_grease_pencil = {
	{(PropertyRNA *)&rna_Material_is_grease_pencil, (PropertyRNA *)&rna_Material_line_priority,
	-1, "grease_pencil", 8388608, 0, 0, 0, 0, "Grease Pencil Settings",
	"Grease pencil color settings for material",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_grease_pencil_get, nullptr, nullptr, nullptr,&RNA_MaterialGPencilStyle
};

BoolPropertyRNA rna_Material_is_grease_pencil = {
	{(PropertyRNA *)&rna_Material_lineart, (PropertyRNA *)&rna_Material_grease_pencil,
	-1, "is_grease_pencil", 2, 0, 0, 0, 0, "Is Grease Pencil",
	"True if this material has grease pencil data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_is_grease_pencil_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Material_lineart = {
	{nullptr, (PropertyRNA *)&rna_Material_is_grease_pencil,
	-1, "lineart", 8388608, 0, 0, 0, 0, "Line Art Settings",
	"Line art settings for material",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Material_lineart_get, nullptr, nullptr, nullptr,&RNA_MaterialLineArt
};

StructRNA RNA_Material = {
	{(ContainerRNA *)&RNA_TexPaintSlot, (ContainerRNA *)&RNA_FluidEffectorSettings,
	nullptr,
	{(PropertyRNA *)&rna_Material_surface_render_method, (PropertyRNA *)&rna_Material_lineart}},
	"Material", nullptr, nullptr, 519, nullptr, "Material",
	"Material data-block to define the appearance of geometric objects for rendering",
	"*", 165,
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

/* Texture Paint Slot */
CollectionPropertyRNA rna_TexPaintSlot_rna_properties = {
	{(PropertyRNA *)&rna_TexPaintSlot_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TexPaintSlot_rna_properties_begin, TexPaintSlot_rna_properties_next, TexPaintSlot_rna_properties_end, TexPaintSlot_rna_properties_get, nullptr, nullptr, TexPaintSlot_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_TexPaintSlot_rna_type = {
	{(PropertyRNA *)&rna_TexPaintSlot_name, (PropertyRNA *)&rna_TexPaintSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TexPaintSlot_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_TexPaintSlot_name = {
	{(PropertyRNA *)&rna_TexPaintSlot_icon_value, (PropertyRNA *)&rna_TexPaintSlot_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Name of the slot",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TexPaintSlot_name_get, TexPaintSlot_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_TexPaintSlot_icon_value = {
	{(PropertyRNA *)&rna_TexPaintSlot_uv_layer, (PropertyRNA *)&rna_TexPaintSlot_name,
	-1, "icon_value", 2, 0, 0, 0, 0, "Icon",
	"Paint slot icon",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TexPaintSlot_icon_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_TexPaintSlot_uv_layer = {
	{(PropertyRNA *)&rna_TexPaintSlot_is_valid, (PropertyRNA *)&rna_TexPaintSlot_icon_value,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"Name of UV map",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Material_update, 291176448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TexPaintSlot_uv_layer_get, TexPaintSlot_uv_layer_length, TexPaintSlot_uv_layer_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_TexPaintSlot_is_valid = {
	{nullptr, (PropertyRNA *)&rna_TexPaintSlot_uv_layer,
	-1, "is_valid", 2, 0, 0, 0, 0, "Valid",
	"Slot has a valid image and UV map",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TexPaintSlot_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_TexPaintSlot = {
	{(ContainerRNA *)&RNA_MaterialGPencilStyle, (ContainerRNA *)&RNA_Material,
	nullptr,
	{(PropertyRNA *)&rna_TexPaintSlot_rna_properties, (PropertyRNA *)&rna_TexPaintSlot_is_valid}},
	"TexPaintSlot", nullptr, nullptr, 516, nullptr, "Texture Paint Slot",
	"Slot that contains information about texture painting",
	"*", 17,
	(PropertyRNA *)&rna_TexPaintSlot_name, (PropertyRNA *)&rna_TexPaintSlot_rna_properties,
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

/* Grease Pencil Color */
CollectionPropertyRNA rna_MaterialGPencilStyle_rna_properties = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_rna_properties_begin, MaterialGPencilStyle_rna_properties_next, MaterialGPencilStyle_rna_properties_end, MaterialGPencilStyle_rna_properties_get, nullptr, nullptr, MaterialGPencilStyle_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaterialGPencilStyle_rna_type = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_color, (PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MaterialGPencilStyle_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_color = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_fill_color, (PropertyRNA *)&rna_MaterialGPencilStyle_rna_type,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, stroke_rgba), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MaterialGPencilStyle_color_get, MaterialGPencilStyle_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_color_default
};

static float rna_MaterialGPencilStyle_fill_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_fill_color = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mix_color, (PropertyRNA *)&rna_MaterialGPencilStyle_color,
	-1, "fill_color", 3, 0, 0, 4, 0, "Fill Color",
	"Color for filling region bounded by each stroke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, fill_rgba), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MaterialGPencilStyle_fill_color_get, MaterialGPencilStyle_fill_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_fill_color_default
};

static float rna_MaterialGPencilStyle_mix_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_mix_color = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mix_factor, (PropertyRNA *)&rna_MaterialGPencilStyle_fill_color,
	-1, "mix_color", 3, 0, 0, 4, 0, "Mix Color",
	"Color for mixing with primary filling color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mix_rgba), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MaterialGPencilStyle_mix_color_get, MaterialGPencilStyle_mix_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_mix_color_default
};

FloatPropertyRNA rna_MaterialGPencilStyle_mix_factor = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mix_stroke_factor, (PropertyRNA *)&rna_MaterialGPencilStyle_mix_color,
	-1, "mix_factor", 3, 0, 0, 4, 0, "Mix",
	"Mix Factor",
	0, "GPencil",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mix_factor), (RawPropertyType)5, nullptr},
	MaterialGPencilStyle_mix_factor_get, MaterialGPencilStyle_mix_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MaterialGPencilStyle_mix_stroke_factor = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_angle, (PropertyRNA *)&rna_MaterialGPencilStyle_mix_factor,
	-1, "mix_stroke_factor", 3, 0, 0, 4, 0, "Mix",
	"Mix Stroke Factor",
	0, "GPencil",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mix_stroke_factor), (RawPropertyType)5, nullptr},
	MaterialGPencilStyle_mix_stroke_factor_get, MaterialGPencilStyle_mix_stroke_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_MaterialGPencilStyle_texture_angle = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_scale, (PropertyRNA *)&rna_MaterialGPencilStyle_mix_stroke_factor,
	-1, "texture_angle", 3, 0, 0, 4, 0, "Angle",
	"Texture Orientation Angle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_angle), (RawPropertyType)5, nullptr},
	MaterialGPencilStyle_texture_angle_get, MaterialGPencilStyle_texture_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_MaterialGPencilStyle_texture_scale_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_texture_scale = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_offset, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_angle,
	-1, "texture_scale", 3, 0, 0, 4, 0, "Scale",
	"Scale Factor for Texture",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_scale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MaterialGPencilStyle_texture_scale_get, MaterialGPencilStyle_texture_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_texture_scale_default
};

static float rna_MaterialGPencilStyle_texture_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_texture_offset = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_pixel_size, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_scale,
	-1, "texture_offset", 3, 0, 0, 4, 0, "Offset",
	"Shift Texture in 2d Space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MaterialGPencilStyle_texture_offset_get, MaterialGPencilStyle_texture_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_texture_offset_default
};

FloatPropertyRNA rna_MaterialGPencilStyle_pixel_size = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_hide, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_offset,
	-1, "pixel_size", 3, 0, 0, 4, 0, "UV Factor",
	"Texture Pixel Size factor along the stroke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_gpcolordata_uv_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_pixsize), (RawPropertyType)5, nullptr},
	MaterialGPencilStyle_pixel_size_get, MaterialGPencilStyle_pixel_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5000.0f, 1.0f, 5000.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_hide = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_lock, (PropertyRNA *)&rna_MaterialGPencilStyle_pixel_size,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set color Visibility",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_hide_get, MaterialGPencilStyle_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_lock = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_ghost, (PropertyRNA *)&rna_MaterialGPencilStyle_hide,
	-1, "lock", 4099, 0, 0, 0, 0, "Locked",
	"Protect color from further editing and/or frame changes",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_lock_get, MaterialGPencilStyle_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_ghost = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_clamp, (PropertyRNA *)&rna_MaterialGPencilStyle_lock,
	-1, "ghost", 3, 0, 0, 0, 0, "Show in Ghosts",
	"Display strokes using this color when showing onion skins",
	53, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_ghost_get, MaterialGPencilStyle_ghost_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_texture_clamp = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_flip, (PropertyRNA *)&rna_MaterialGPencilStyle_ghost,
	-1, "texture_clamp", 3, 0, 0, 0, 0, "Clamp",
	"Do not repeat texture and clamp to one instance only",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_texture_clamp_get, MaterialGPencilStyle_texture_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_flip = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_use_overlap_strokes, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_clamp,
	-1, "flip", 3, 0, 0, 0, 0, "Flip",
	"Flip filling colors",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_flip_get, MaterialGPencilStyle_flip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_use_overlap_strokes = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_use_stroke_holdout, (PropertyRNA *)&rna_MaterialGPencilStyle_flip,
	-1, "use_overlap_strokes", 3, 0, 0, 0, 0, "Self Overlap",
	"Disable stencil and overlap self intersections with alpha materials",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_use_overlap_strokes_get, MaterialGPencilStyle_use_overlap_strokes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_use_stroke_holdout = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_use_fill_holdout, (PropertyRNA *)&rna_MaterialGPencilStyle_use_overlap_strokes,
	-1, "use_stroke_holdout", 3, 0, 0, 0, 0, "Holdout",
	"Remove the color from underneath this stroke by using it as a mask",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_use_stroke_holdout_get, MaterialGPencilStyle_use_stroke_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_use_fill_holdout = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_show_stroke, (PropertyRNA *)&rna_MaterialGPencilStyle_use_stroke_holdout,
	-1, "use_fill_holdout", 3, 0, 0, 0, 0, "Holdout",
	"Remove the color from underneath this stroke by using it as a mask",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_use_fill_holdout_get, MaterialGPencilStyle_use_fill_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_show_stroke = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_show_fill, (PropertyRNA *)&rna_MaterialGPencilStyle_use_fill_holdout,
	-1, "show_stroke", 3, 0, 0, 0, 0, "Show Stroke",
	"Show stroke lines of this material",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_show_stroke_get, MaterialGPencilStyle_show_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_show_fill = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_alignment_mode, (PropertyRNA *)&rna_MaterialGPencilStyle_show_stroke,
	-1, "show_fill", 3, 0, 0, 0, 0, "Show Fill",
	"Show stroke fills of this material",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_show_fill_get, MaterialGPencilStyle_show_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_MaterialGPencilStyle_alignment_mode_items[4] = {
	{0, "PATH", 0, "Path", "Follow stroke drawing path and object rotation"},
	{1, "OBJECT", 0, "Object", "Follow object rotation only"},
	{2, "FIXED", 0, "Fixed", "Do not follow drawing path or object rotation and keeps aligned with viewport"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaterialGPencilStyle_alignment_mode = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_alignment_rotation, (PropertyRNA *)&rna_MaterialGPencilStyle_show_fill,
	-1, "alignment_mode", 3, 0, 0, 4, 0, "Alignment",
	"Defines how align Dots and Boxes with drawing path and object rotation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, alignment_mode), (RawPropertyType)0, nullptr},
	MaterialGPencilStyle_alignment_mode_get, MaterialGPencilStyle_alignment_mode_set, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_alignment_mode_items, 3, 0
};

FloatPropertyRNA rna_MaterialGPencilStyle_alignment_rotation = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_pass_index, (PropertyRNA *)&rna_MaterialGPencilStyle_alignment_mode,
	-1, "alignment_rotation", 3, 0, 0, 4, 0, "Rotation",
	"Additional rotation applied to dots and square texture of strokes. Only applies in texture shading mode",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, alignment_rotation), (RawPropertyType)5, nullptr},
	MaterialGPencilStyle_alignment_rotation_get, MaterialGPencilStyle_alignment_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_MaterialGPencilStyle_pass_index = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mode, (PropertyRNA *)&rna_MaterialGPencilStyle_alignment_rotation,
	-1, "pass_index", 3, 0, 0, 4, 0, "Pass Index",
	"Index number for the \"Color Index\" pass",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, index), (RawPropertyType)1, nullptr},
	MaterialGPencilStyle_pass_index_get, MaterialGPencilStyle_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

static const EnumPropertyItem rna_MaterialGPencilStyle_mode_items[4] = {
	{0, "LINE", 0, "Line", "Draw strokes using a continuous line"},
	{1, "DOTS", 0, "Dots", "Draw strokes using separated dots"},
	{2, "BOX", 0, "Squares", "Draw strokes using separated squares"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaterialGPencilStyle_mode = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_stroke_style, (PropertyRNA *)&rna_MaterialGPencilStyle_pass_index,
	-1, "mode", 3, 0, 0, 4, 0, "Line Type",
	"Select line type for strokes",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mode), (RawPropertyType)0, nullptr},
	MaterialGPencilStyle_mode_get, MaterialGPencilStyle_mode_set, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_mode_items, 3, 0
};

static const EnumPropertyItem rna_MaterialGPencilStyle_stroke_style_items[3] = {
	{0, "SOLID", 0, "Solid", "Draw strokes with solid color"},
	{1, "TEXTURE", 0, "Texture", "Draw strokes using texture"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaterialGPencilStyle_stroke_style = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_stroke_image, (PropertyRNA *)&rna_MaterialGPencilStyle_mode,
	-1, "stroke_style", 3, 0, 0, 4, 0, "Stroke Style",
	"Select style used to draw strokes",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, stroke_style), (RawPropertyType)1, nullptr},
	MaterialGPencilStyle_stroke_style_get, MaterialGPencilStyle_stroke_style_set, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_stroke_style_items, 2, 0
};

PointerPropertyRNA rna_MaterialGPencilStyle_stroke_image = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_fill_style, (PropertyRNA *)&rna_MaterialGPencilStyle_stroke_style,
	-1, "stroke_image", 8388801, 1, 0, 0, 0, "Image",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_stroke_image_get, MaterialGPencilStyle_stroke_image_set, nullptr, nullptr,&RNA_Image
};

static const EnumPropertyItem rna_MaterialGPencilStyle_fill_style_items[4] = {
	{0, "SOLID", 0, "Solid", "Fill area with solid color"},
	{1, "GRADIENT", 0, "Gradient", "Fill area with gradient color"},
	{3, "TEXTURE", 0, "Texture", "Fill area with image texture"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaterialGPencilStyle_fill_style = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_gradient_type, (PropertyRNA *)&rna_MaterialGPencilStyle_stroke_image,
	-1, "fill_style", 3, 0, 0, 4, 0, "Fill Style",
	"Select style used to fill strokes",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, fill_style), (RawPropertyType)1, nullptr},
	MaterialGPencilStyle_fill_style_get, MaterialGPencilStyle_fill_style_set, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_fill_style_items, 3, 0
};

static const EnumPropertyItem rna_MaterialGPencilStyle_gradient_type_items[3] = {
	{0, "LINEAR", 0, "Linear", "Fill area with gradient color"},
	{1, "RADIAL", 0, "Radial", "Fill area with radial gradient"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaterialGPencilStyle_gradient_type = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_fill_image, (PropertyRNA *)&rna_MaterialGPencilStyle_fill_style,
	-1, "gradient_type", 3, 0, 0, 4, 0, "Gradient Type",
	"Select type of gradient used to fill strokes",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, gradient_type), (RawPropertyType)0, nullptr},
	MaterialGPencilStyle_gradient_type_get, MaterialGPencilStyle_gradient_type_set, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_gradient_type_items, 2, 0
};

PointerPropertyRNA rna_MaterialGPencilStyle_fill_image = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_is_stroke_visible, (PropertyRNA *)&rna_MaterialGPencilStyle_gradient_type,
	-1, "fill_image", 8388801, 1, 0, 0, 0, "Image",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_fill_image_get, MaterialGPencilStyle_fill_image_set, nullptr, nullptr,&RNA_Image
};

BoolPropertyRNA rna_MaterialGPencilStyle_is_stroke_visible = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_is_fill_visible, (PropertyRNA *)&rna_MaterialGPencilStyle_fill_image,
	-1, "is_stroke_visible", 2, 0, 0, 0, 0, "Is Stroke Visible",
	"True when opacity of stroke is set high enough to be visible",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_is_stroke_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MaterialGPencilStyle_is_fill_visible = {
	{nullptr, (PropertyRNA *)&rna_MaterialGPencilStyle_is_stroke_visible,
	-1, "is_fill_visible", 2, 0, 0, 0, 0, "Is Fill Visible",
	"True when opacity of fill is set high enough to be visible",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialGPencilStyle_is_fill_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MaterialGPencilStyle = {
	{(ContainerRNA *)&RNA_MaterialLineArt, (ContainerRNA *)&RNA_TexPaintSlot,
	nullptr,
	{(PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties, (PropertyRNA *)&rna_MaterialGPencilStyle_is_fill_visible}},
	"MaterialGPencilStyle", nullptr, nullptr, 516, nullptr, "Grease Pencil Color",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GpencilColorData_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Material Line Art */
CollectionPropertyRNA rna_MaterialLineArt_rna_properties = {
	{(PropertyRNA *)&rna_MaterialLineArt_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialLineArt_rna_properties_begin, MaterialLineArt_rna_properties_next, MaterialLineArt_rna_properties_end, MaterialLineArt_rna_properties_get, nullptr, nullptr, MaterialLineArt_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaterialLineArt_rna_type = {
	{(PropertyRNA *)&rna_MaterialLineArt_use_material_mask, (PropertyRNA *)&rna_MaterialLineArt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialLineArt_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_MaterialLineArt_use_material_mask = {
	{(PropertyRNA *)&rna_MaterialLineArt_use_material_mask_bits, (PropertyRNA *)&rna_MaterialLineArt_rna_type,
	-1, "use_material_mask", 3, 0, 0, 0, 0, "Use Material Mask",
	"Use material masks to filter out occluded strokes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialLineArt_use_material_mask_get, MaterialLineArt_use_material_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static bool rna_MaterialLineArt_use_material_mask_bits_default[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_MaterialLineArt_use_material_mask_bits = {
	{(PropertyRNA *)&rna_MaterialLineArt_mat_occlusion, (PropertyRNA *)&rna_MaterialLineArt_use_material_mask,
	-1, "use_material_mask_bits", 3, 0, 0, 0, 0, "Mask",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {8, 0, 0}, 8,
	rna_MaterialLineArt_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MaterialLineArt_use_material_mask_bits_get, MaterialLineArt_use_material_mask_bits_set, nullptr, nullptr, nullptr, nullptr, 0, rna_MaterialLineArt_use_material_mask_bits_default
};

IntPropertyRNA rna_MaterialLineArt_mat_occlusion = {
	{(PropertyRNA *)&rna_MaterialLineArt_intersection_priority, (PropertyRNA *)&rna_MaterialLineArt_use_material_mask_bits,
	-1, "mat_occlusion", 3, 0, 0, 4, 0, "Effectiveness",
	"Faces with this material will behave as if it has set number of layers in occlusion",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialLineArt, mat_occlusion), (RawPropertyType)2, nullptr},
	MaterialLineArt_mat_occlusion_get, MaterialLineArt_mat_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 5, 0, 255, 1, 1, nullptr
};

IntPropertyRNA rna_MaterialLineArt_intersection_priority = {
	{(PropertyRNA *)&rna_MaterialLineArt_use_intersection_priority_override, (PropertyRNA *)&rna_MaterialLineArt_mat_occlusion,
	-1, "intersection_priority", 3, 0, 0, 4, 0, "Intersection Priority",
	"The intersection line will be included into the object with the higher intersection priority value",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialLineArt, intersection_priority), (RawPropertyType)2, nullptr},
	MaterialLineArt_intersection_priority_get, MaterialLineArt_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

BoolPropertyRNA rna_MaterialLineArt_use_intersection_priority_override = {
	{nullptr, (PropertyRNA *)&rna_MaterialLineArt_intersection_priority,
	-1, "use_intersection_priority_override", 3, 0, 0, 0, 0, "Use Intersection Priority",
	"Override object and collection intersection priority value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialLineArt_use_intersection_priority_override_get, MaterialLineArt_use_intersection_priority_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MaterialLineArt = {
	{(ContainerRNA *)&RNA_Mesh, (ContainerRNA *)&RNA_MaterialGPencilStyle,
	nullptr,
	{(PropertyRNA *)&rna_MaterialLineArt_rna_properties, (PropertyRNA *)&rna_MaterialLineArt_use_intersection_priority_override}},
	"MaterialLineArt", nullptr, nullptr, 516, nullptr, "Material Line Art",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MaterialLineArt_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MaterialLineArt_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

