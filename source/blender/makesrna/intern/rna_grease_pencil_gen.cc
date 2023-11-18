
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

#include "rna_grease_pencil.cc"

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

RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilv3_attributes;
RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilv3_color_attributes;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilv3_animation_data;
RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilv3_layers;
RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilv3_layer_groups;

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



RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilv3Layers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilv3Layers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilv3Layers_active;


RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_GreasePencilLayer_name;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencilLayer_hide;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencilLayer_lock;
RNA_EXTERN_C FloatPropertyRNA rna_GreasePencilLayer_opacity;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencilLayer_use_onion_skinning;


RNA_EXTERN_C CollectionPropertyRNA rna_GreasePencilLayerGroup_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GreasePencilLayerGroup_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_GreasePencilLayerGroup_name;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencilLayerGroup_hide;
RNA_EXTERN_C BoolPropertyRNA rna_GreasePencilLayerGroup_lock;

RNA_EXTERN_C int GreasePencilv3_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_length(ptr);
}

static PointerRNA GreasePencilv3_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_iterator_get(iter);
}

RNA_EXTERN_C void GreasePencilv3_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilv3_attributes;

    rna_AttributeGroup_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_attributes_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_attributes_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int GreasePencilv3_color_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_color_length(ptr);
}

static PointerRNA GreasePencilv3_color_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_color_iterator_get(iter);
}

RNA_EXTERN_C void GreasePencilv3_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilv3_color_attributes;

    rna_AttributeGroup_color_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_color_attributes_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_color_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_color_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_color_attributes_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_color_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C PointerRNA GreasePencilv3_animation_data_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C int GreasePencilv3_layers_length(PointerRNA *ptr)
{
    return rna_iterator_grease_pencil_layers_length(ptr);
}

static PointerRNA GreasePencilv3_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GreasePencilLayer, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void GreasePencilv3_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilv3_layers;

    rna_iterator_grease_pencil_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_layers_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_layers_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int GreasePencilv3_layer_groups_length(PointerRNA *ptr)
{
    return rna_iterator_grease_pencil_layer_groups_length(ptr);
}

static PointerRNA GreasePencilv3_layer_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GreasePencilLayerGroup, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void GreasePencilv3_layer_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilv3_layer_groups;

    rna_iterator_grease_pencil_layer_groups_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_layer_groups_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_layer_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3_layer_groups_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3_layer_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA GreasePencilv3Layers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GreasePencilv3Layers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilv3Layers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3Layers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3Layers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3Layers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilv3Layers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencilv3Layers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilv3Layers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilv3Layers_active_get(PointerRNA *ptr)
{
    return rna_GreasePencil_active_layer_get(ptr);
}

RNA_EXTERN_C void GreasePencilv3Layers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GreasePencil_active_layer_set(ptr, value, reports);
}

static PointerRNA GreasePencilLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GreasePencilLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencilLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GreasePencilLayer_name_get(PointerRNA *ptr, char *value)
{
    rna_GreasePencilLayer_name_get(ptr, value);
}

RNA_EXTERN_C int GreasePencilLayer_name_length(PointerRNA *ptr)
{
    return rna_GreasePencilLayer_name_length(ptr);
}

RNA_EXTERN_C void GreasePencilLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_GreasePencilLayer_name_set(ptr, value);
}

RNA_EXTERN_C bool GreasePencilLayer_hide_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GreasePencilLayer_hide_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GreasePencilLayer_lock_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GreasePencilLayer_lock_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C float GreasePencilLayer_opacity_get(PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    return (float)(data->opacity);
}

RNA_EXTERN_C void GreasePencilLayer_opacity_set(PointerRNA *ptr, float value)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
#ifdef __cplusplus
    data->opacity = (std::remove_reference_t<decltype(data->opacity)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->opacity = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool GreasePencilLayer_use_onion_skinning_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void GreasePencilLayer_use_onion_skinning_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

static PointerRNA GreasePencilLayerGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GreasePencilLayerGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilLayerGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilLayerGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GreasePencilLayerGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GreasePencilLayerGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GreasePencilLayerGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GreasePencilLayerGroup_name_get(PointerRNA *ptr, char *value)
{
    rna_GreasePencilLayerGroup_name_get(ptr, value);
}

RNA_EXTERN_C int GreasePencilLayerGroup_name_length(PointerRNA *ptr)
{
    return rna_GreasePencilLayerGroup_name_length(ptr);
}

RNA_EXTERN_C void GreasePencilLayerGroup_name_set(PointerRNA *ptr, const char *value)
{
    rna_GreasePencilLayerGroup_name_set(ptr, value);
}

RNA_EXTERN_C bool GreasePencilLayerGroup_hide_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GreasePencilLayerGroup_hide_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GreasePencilLayerGroup_lock_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GreasePencilLayerGroup_lock_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}





/* Grease Pencil */
CollectionPropertyRNA rna_GreasePencilv3_attributes = {
	{(PropertyRNA *)&rna_GreasePencilv3_color_attributes, nullptr,
	-1, "attributes", 0, 0, 0, 0, 0, "Attributes",
	"Geometry attributes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AttributeGroup},
	GreasePencilv3_attributes_begin, GreasePencilv3_attributes_next, GreasePencilv3_attributes_end, GreasePencilv3_attributes_get, GreasePencilv3_attributes_length, nullptr, nullptr, nullptr, &RNA_Attribute
};

CollectionPropertyRNA rna_GreasePencilv3_color_attributes = {
	{(PropertyRNA *)&rna_GreasePencilv3_animation_data, (PropertyRNA *)&rna_GreasePencilv3_attributes,
	-1, "color_attributes", 0, 0, 0, 0, 0, "Color Attributes",
	"Geometry color attributes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AttributeGroup},
	GreasePencilv3_color_attributes_begin, GreasePencilv3_color_attributes_next, GreasePencilv3_color_attributes_end, GreasePencilv3_color_attributes_get, GreasePencilv3_color_attributes_length, nullptr, nullptr, nullptr, &RNA_Attribute
};

PointerPropertyRNA rna_GreasePencilv3_animation_data = {
	{(PropertyRNA *)&rna_GreasePencilv3_layers, (PropertyRNA *)&rna_GreasePencilv3_color_attributes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilv3_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

CollectionPropertyRNA rna_GreasePencilv3_layers = {
	{(PropertyRNA *)&rna_GreasePencilv3_layer_groups, (PropertyRNA *)&rna_GreasePencilv3_animation_data,
	-1, "layers", 0, 0, 0, 0, 0, "Layers",
	"Grease Pencil layers",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_GreasePencilv3Layers},
	GreasePencilv3_layers_begin, GreasePencilv3_layers_next, GreasePencilv3_layers_end, GreasePencilv3_layers_get, GreasePencilv3_layers_length, nullptr, nullptr, nullptr, &RNA_GreasePencilLayer
};

CollectionPropertyRNA rna_GreasePencilv3_layer_groups = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilv3_layers,
	-1, "layer_groups", 0, 0, 0, 0, 0, "Layer Groups",
	"Grease Pencil layer groups",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilv3_layer_groups_begin, GreasePencilv3_layer_groups_next, GreasePencilv3_layer_groups_end, GreasePencilv3_layer_groups_get, GreasePencilv3_layer_groups_length, nullptr, nullptr, nullptr, &RNA_GreasePencilLayerGroup
};

StructRNA RNA_GreasePencilv3 = {
	{(ContainerRNA *)&RNA_GreasePencilv3Layers, (ContainerRNA *)&RNA_GpencilVertexGroupElement,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilv3_attributes, (PropertyRNA *)&rna_GreasePencilv3_layer_groups}},
	"GreasePencilv3", nullptr, nullptr, 519, nullptr, "Grease Pencil",
	"Grease Pencil data-block",
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
	{nullptr, nullptr}
};

/* Grease Pencil Layers */
CollectionPropertyRNA rna_GreasePencilv3Layers_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilv3Layers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilv3Layers_rna_properties_begin, GreasePencilv3Layers_rna_properties_next, GreasePencilv3Layers_rna_properties_end, GreasePencilv3Layers_rna_properties_get, nullptr, nullptr, GreasePencilv3Layers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilv3Layers_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilv3Layers_active, (PropertyRNA *)&rna_GreasePencilv3Layers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilv3Layers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_GreasePencilv3Layers_active = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilv3Layers_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Layer",
	"Active Grease Pencil layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839750, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilv3Layers_active_get, GreasePencilv3Layers_active_set, nullptr, nullptr,&RNA_GreasePencilLayer
};

StructRNA RNA_GreasePencilv3Layers = {
	{(ContainerRNA *)&RNA_GreasePencilLayer, (ContainerRNA *)&RNA_GreasePencilv3,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilv3Layers_rna_properties, (PropertyRNA *)&rna_GreasePencilv3Layers_active}},
	"GreasePencilv3Layers", nullptr, nullptr, 516, nullptr, "Grease Pencil Layers",
	"Collection of Grease Pencil layers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GreasePencilv3Layers_rna_properties,
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

/* Grease Pencil Layer */
CollectionPropertyRNA rna_GreasePencilLayer_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayer_rna_properties_begin, GreasePencilLayer_rna_properties_next, GreasePencilLayer_rna_properties_end, GreasePencilLayer_rna_properties_get, nullptr, nullptr, GreasePencilLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilLayer_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilLayer_name, (PropertyRNA *)&rna_GreasePencilLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_GreasePencilLayer_name = {
	{(PropertyRNA *)&rna_GreasePencilLayer_hide, (PropertyRNA *)&rna_GreasePencilLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Layer name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839749, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayer_name_get, GreasePencilLayer_name_length, GreasePencilLayer_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_GreasePencilLayer_hide = {
	{(PropertyRNA *)&rna_GreasePencilLayer_lock, (PropertyRNA *)&rna_GreasePencilLayer_name,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set layer visibility",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayer_hide_get, GreasePencilLayer_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencilLayer_lock = {
	{(PropertyRNA *)&rna_GreasePencilLayer_opacity, (PropertyRNA *)&rna_GreasePencilLayer_hide,
	-1, "lock", 4099, 0, 0, 0, 0, "Locked",
	"Protect layer from further editing and/or frame changes",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayer_lock_get, GreasePencilLayer_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_GreasePencilLayer_opacity = {
	{(PropertyRNA *)&rna_GreasePencilLayer_use_onion_skinning, (PropertyRNA *)&rna_GreasePencilLayer_lock,
	-1, "opacity", 3, 0, 0, 4, 0, "Opacity",
	"Layer Opacity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GreasePencilLayer, opacity), (RawPropertyType)5, nullptr},
	GreasePencilLayer_opacity_get, GreasePencilLayer_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_GreasePencilLayer_use_onion_skinning = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilLayer_opacity,
	-1, "use_onion_skinning", 3, 0, 0, 0, 0, "Onion Skinning",
	"Display onion skins before and after the current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayer_use_onion_skinning_get, GreasePencilLayer_use_onion_skinning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_GreasePencilLayer = {
	{(ContainerRNA *)&RNA_GreasePencilLayerGroup, (ContainerRNA *)&RNA_GreasePencilv3Layers,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilLayer_rna_properties, (PropertyRNA *)&rna_GreasePencilLayer_use_onion_skinning}},
	"GreasePencilLayer", nullptr, nullptr, 516, nullptr, "Grease Pencil Layer",
	"Collection of related drawings",
	"*", 17,
	(PropertyRNA *)&rna_GreasePencilLayer_name, (PropertyRNA *)&rna_GreasePencilLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GreasePencilLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Layer Group */
CollectionPropertyRNA rna_GreasePencilLayerGroup_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilLayerGroup_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayerGroup_rna_properties_begin, GreasePencilLayerGroup_rna_properties_next, GreasePencilLayerGroup_rna_properties_end, GreasePencilLayerGroup_rna_properties_get, nullptr, nullptr, GreasePencilLayerGroup_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilLayerGroup_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilLayerGroup_name, (PropertyRNA *)&rna_GreasePencilLayerGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayerGroup_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_GreasePencilLayerGroup_name = {
	{(PropertyRNA *)&rna_GreasePencilLayerGroup_hide, (PropertyRNA *)&rna_GreasePencilLayerGroup_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Group name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839749, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayerGroup_name_get, GreasePencilLayerGroup_name_length, GreasePencilLayerGroup_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_GreasePencilLayerGroup_hide = {
	{(PropertyRNA *)&rna_GreasePencilLayerGroup_lock, (PropertyRNA *)&rna_GreasePencilLayerGroup_name,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set layer group visibility",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayerGroup_hide_get, GreasePencilLayerGroup_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GreasePencilLayerGroup_lock = {
	{nullptr, (PropertyRNA *)&rna_GreasePencilLayerGroup_hide,
	-1, "lock", 4099, 0, 0, 0, 0, "Locked",
	"Protect group from further editing and/or frame changes",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_grease_pencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GreasePencilLayerGroup_lock_get, GreasePencilLayerGroup_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_GreasePencilLayerGroup = {
	{(ContainerRNA *)&RNA_CurvePoint, (ContainerRNA *)&RNA_GreasePencilLayer,
	nullptr,
	{(PropertyRNA *)&rna_GreasePencilLayerGroup_rna_properties, (PropertyRNA *)&rna_GreasePencilLayerGroup_lock}},
	"GreasePencilLayerGroup", nullptr, nullptr, 516, nullptr, "Grease Pencil Layer Group",
	"Group of Grease Pencil layers",
	"*", 17,
	(PropertyRNA *)&rna_GreasePencilLayerGroup_name, (PropertyRNA *)&rna_GreasePencilLayerGroup_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GreasePencilLayerGroup_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

