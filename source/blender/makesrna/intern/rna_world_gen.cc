
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

#include "rna_world.cc"

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

RNA_EXTERN_C PointerPropertyRNA rna_World_animation_data;
RNA_EXTERN_C FloatPropertyRNA rna_World_color;
RNA_EXTERN_C PointerPropertyRNA rna_World_light_settings;
RNA_EXTERN_C PointerPropertyRNA rna_World_mist_settings;
RNA_EXTERN_C PointerPropertyRNA rna_World_node_tree;
RNA_EXTERN_C BoolPropertyRNA rna_World_use_nodes;
RNA_EXTERN_C StringPropertyRNA rna_World_lightgroup;
RNA_EXTERN_C EnumPropertyRNA rna_World_probe_resolution;

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



RNA_EXTERN_C CollectionPropertyRNA rna_WorldLighting_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_WorldLighting_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_WorldLighting_ao_factor;
RNA_EXTERN_C FloatPropertyRNA rna_WorldLighting_distance;


RNA_EXTERN_C CollectionPropertyRNA rna_WorldMistSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_WorldMistSettings_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_WorldMistSettings_use_mist;
RNA_EXTERN_C FloatPropertyRNA rna_WorldMistSettings_intensity;
RNA_EXTERN_C FloatPropertyRNA rna_WorldMistSettings_start;
RNA_EXTERN_C FloatPropertyRNA rna_WorldMistSettings_depth;
RNA_EXTERN_C FloatPropertyRNA rna_WorldMistSettings_height;
RNA_EXTERN_C EnumPropertyRNA rna_WorldMistSettings_falloff;

RNA_EXTERN_C PointerRNA World_animation_data_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C void World_color_get(PointerRNA *ptr, float values[3])
{
    World *data = (World *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->horr)[i]);
    }
}

RNA_EXTERN_C void World_color_set(PointerRNA *ptr, const float values[3])
{
    World *data = (World *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->horr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C PointerRNA World_light_settings_get(PointerRNA *ptr)
{
    return rna_World_lighting_get(ptr);
}

RNA_EXTERN_C PointerRNA World_mist_settings_get(PointerRNA *ptr)
{
    return rna_World_mist_get(ptr);
}

RNA_EXTERN_C PointerRNA World_node_tree_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

RNA_EXTERN_C bool World_use_nodes_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (((data->use_nodes) & 1) != 0);
}

RNA_EXTERN_C void World_use_nodes_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->use_nodes |= 1; }
    else { data->use_nodes &= ~1; }
}

RNA_EXTERN_C void World_lightgroup_get(PointerRNA *ptr, char *value)
{
    rna_World_lightgroup_get(ptr, value);
}

RNA_EXTERN_C int World_lightgroup_length(PointerRNA *ptr)
{
    return rna_World_lightgroup_length(ptr);
}

RNA_EXTERN_C void World_lightgroup_set(PointerRNA *ptr, const char *value)
{
    rna_World_lightgroup_set(ptr, value);
}

RNA_EXTERN_C int World_probe_resolution_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (int)(data->probe_resolution);
}

RNA_EXTERN_C void World_probe_resolution_set(PointerRNA *ptr, int value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->probe_resolution = (std::remove_reference_t<decltype(data->probe_resolution)>)value;
#else
    data->probe_resolution = value;
#endif
}

static PointerRNA WorldLighting_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void WorldLighting_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorldLighting_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorldLighting_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void WorldLighting_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = WorldLighting_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void WorldLighting_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WorldLighting_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA WorldLighting_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float WorldLighting_ao_factor_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->aoenergy);
}

RNA_EXTERN_C void WorldLighting_ao_factor_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->aoenergy = (std::remove_reference_t<decltype(data->aoenergy)>)CLAMPIS(value, 0.0f, 2147483648.0f);
#else
    data->aoenergy = CLAMPIS(value, 0.0f, 2147483648.0f);
#endif
}

RNA_EXTERN_C float WorldLighting_distance_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->aodist);
}

RNA_EXTERN_C void WorldLighting_distance_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->aodist = (std::remove_reference_t<decltype(data->aodist)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->aodist = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

static PointerRNA WorldMistSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void WorldMistSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorldMistSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorldMistSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void WorldMistSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = WorldMistSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void WorldMistSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WorldMistSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA WorldMistSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool WorldMistSettings_use_mist_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

RNA_EXTERN_C void WorldMistSettings_use_mist_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

RNA_EXTERN_C float WorldMistSettings_intensity_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->misi);
}

RNA_EXTERN_C void WorldMistSettings_intensity_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->misi = (std::remove_reference_t<decltype(data->misi)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->misi = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float WorldMistSettings_start_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->miststa);
}

RNA_EXTERN_C void WorldMistSettings_start_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->miststa = (std::remove_reference_t<decltype(data->miststa)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->miststa = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float WorldMistSettings_depth_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->mistdist);
}

RNA_EXTERN_C void WorldMistSettings_depth_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->mistdist = (std::remove_reference_t<decltype(data->mistdist)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->mistdist = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float WorldMistSettings_height_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->misthi);
}

RNA_EXTERN_C void WorldMistSettings_height_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->misthi = (std::remove_reference_t<decltype(data->misthi)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->misthi = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int WorldMistSettings_falloff_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (int)(data->mistype);
}

RNA_EXTERN_C void WorldMistSettings_falloff_set(PointerRNA *ptr, int value)
{
    World *data = (World *)(ptr->data);
#ifdef __cplusplus
    data->mistype = (std::remove_reference_t<decltype(data->mistype)>)value;
#else
    data->mistype = value;
#endif
}




/* World */
PointerPropertyRNA rna_World_animation_data = {
	{(PropertyRNA *)&rna_World_color, nullptr,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	World_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

static float rna_World_color_default[3] = {
	0.0500000007f,
	0.0500000007f,
	0.0500000007f
};

FloatPropertyRNA rna_World_color = {
	{(PropertyRNA *)&rna_World_light_settings, (PropertyRNA *)&rna_World_animation_data,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Color of the background",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, horr), (RawPropertyType)5, nullptr},
	nullptr, nullptr, World_color_get, World_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0500000007f, rna_World_color_default
};

PointerPropertyRNA rna_World_light_settings = {
	{(PropertyRNA *)&rna_World_mist_settings, (PropertyRNA *)&rna_World_color,
	-1, "light_settings", 8650752, 0, 0, 0, 0, "Lighting",
	"World lighting settings",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	World_light_settings_get, nullptr, nullptr, nullptr,&RNA_WorldLighting
};

PointerPropertyRNA rna_World_mist_settings = {
	{(PropertyRNA *)&rna_World_node_tree, (PropertyRNA *)&rna_World_light_settings,
	-1, "mist_settings", 8650752, 0, 0, 0, 0, "Mist",
	"World mist settings",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	World_mist_settings_get, nullptr, nullptr, nullptr,&RNA_WorldMistSettings
};

PointerPropertyRNA rna_World_node_tree = {
	{(PropertyRNA *)&rna_World_use_nodes, (PropertyRNA *)&rna_World_mist_settings,
	-1, "node_tree", 8388672, 1, 0, 32, 0, "Node Tree",
	"Node tree for node based worlds",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	World_node_tree_get, nullptr, nullptr, nullptr,&RNA_NodeTree
};

BoolPropertyRNA rna_World_use_nodes = {
	{(PropertyRNA *)&rna_World_lightgroup, (PropertyRNA *)&rna_World_node_tree,
	-1, "use_nodes", 4194305, 0, 0, 0, 0, "Use Nodes",
	"Use shader nodes to render the world",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_World_use_nodes_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	World_use_nodes_get, World_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_World_lightgroup = {
	{(PropertyRNA *)&rna_World_probe_resolution, (PropertyRNA *)&rna_World_use_nodes,
	-1, "lightgroup", 262145, 0, 0, 0, 0, "Lightgroup",
	"Lightgroup that the world belongs to",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	World_lightgroup_get, World_lightgroup_length, World_lightgroup_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

static const EnumPropertyItem rna_World_probe_resolution_items[7] = {
	{6, "64", 0, "64", ""},
	{7, "128", 0, "128", ""},
	{8, "256", 0, "256", ""},
	{9, "512", 0, "512", ""},
	{10, "1024", 0, "1024", ""},
	{11, "2048", 0, "2048", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_World_probe_resolution = {
	{nullptr, (PropertyRNA *)&rna_World_lightgroup,
	-1, "probe_resolution", 3, 0, 0, 4, 0, "Resolution",
	"Resolution when baked to a texture",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, probe_resolution), (RawPropertyType)0, nullptr},
	World_probe_resolution_get, World_probe_resolution_set, nullptr, nullptr, nullptr, rna_World_probe_resolution_items, 6, 10
};

StructRNA RNA_World = {
	{(ContainerRNA *)&RNA_WorldLighting, (ContainerRNA *)&RNA_wmTools,
	nullptr,
	{(PropertyRNA *)&rna_World_animation_data, (PropertyRNA *)&rna_World_probe_resolution}},
	"World", nullptr, nullptr, 519, nullptr, "World",
	"World data-block describing the environment and ambient lighting of a scene",
	"*", 158,
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

/* Lighting */
CollectionPropertyRNA rna_WorldLighting_rna_properties = {
	{(PropertyRNA *)&rna_WorldLighting_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorldLighting_rna_properties_begin, WorldLighting_rna_properties_next, WorldLighting_rna_properties_end, WorldLighting_rna_properties_get, nullptr, nullptr, WorldLighting_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_WorldLighting_rna_type = {
	{(PropertyRNA *)&rna_WorldLighting_ao_factor, (PropertyRNA *)&rna_WorldLighting_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorldLighting_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_WorldLighting_ao_factor = {
	{(PropertyRNA *)&rna_WorldLighting_distance, (PropertyRNA *)&rna_WorldLighting_rna_type,
	-1, "ao_factor", 3, 0, 0, 4, 0, "Factor",
	"Factor for ambient occlusion blending",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_World_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, aoenergy), (RawPropertyType)5, nullptr},
	WorldLighting_ao_factor_get, WorldLighting_ao_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 2147483648.0f, 0.1000000015f, 2, 1.0f, nullptr
};

FloatPropertyRNA rna_WorldLighting_distance = {
	{nullptr, (PropertyRNA *)&rna_WorldLighting_ao_factor,
	-1, "distance", 3, 0, 0, 4, 0, "Distance",
	"Length of rays, defines how far away other faces give occlusion effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_World_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, aodist), (RawPropertyType)5, nullptr},
	WorldLighting_distance_get, WorldLighting_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 10.0f, nullptr
};

StructRNA RNA_WorldLighting = {
	{(ContainerRNA *)&RNA_WorldMistSettings, (ContainerRNA *)&RNA_World,
	nullptr,
	{(PropertyRNA *)&rna_WorldLighting_rna_properties, (PropertyRNA *)&rna_WorldLighting_distance}},
	"WorldLighting", nullptr, nullptr, 516, nullptr, "Lighting",
	"Lighting for a World data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_WorldLighting_rna_properties,
	nullptr,
	&RNA_World,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* World Mist */
CollectionPropertyRNA rna_WorldMistSettings_rna_properties = {
	{(PropertyRNA *)&rna_WorldMistSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorldMistSettings_rna_properties_begin, WorldMistSettings_rna_properties_next, WorldMistSettings_rna_properties_end, WorldMistSettings_rna_properties_get, nullptr, nullptr, WorldMistSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_WorldMistSettings_rna_type = {
	{(PropertyRNA *)&rna_WorldMistSettings_use_mist, (PropertyRNA *)&rna_WorldMistSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorldMistSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_WorldMistSettings_use_mist = {
	{(PropertyRNA *)&rna_WorldMistSettings_intensity, (PropertyRNA *)&rna_WorldMistSettings_rna_type,
	-1, "use_mist", 3, 0, 0, 0, 0, "Use Mist",
	"Occlude objects with the environment color as they are further away",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WorldMistSettings_use_mist_get, WorldMistSettings_use_mist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_WorldMistSettings_intensity = {
	{(PropertyRNA *)&rna_WorldMistSettings_start, (PropertyRNA *)&rna_WorldMistSettings_use_mist,
	-1, "intensity", 3, 0, 0, 4, 0, "Minimum",
	"Overall minimum intensity of the mist effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, misi), (RawPropertyType)5, nullptr},
	WorldMistSettings_intensity_get, WorldMistSettings_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_WorldMistSettings_start = {
	{(PropertyRNA *)&rna_WorldMistSettings_depth, (PropertyRNA *)&rna_WorldMistSettings_intensity,
	-1, "start", 3, 0, 0, 4, 0, "Start",
	"Starting distance of the mist, measured from the camera",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, miststa), (RawPropertyType)5, nullptr},
	WorldMistSettings_start_get, WorldMistSettings_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, 5.0f, nullptr
};

FloatPropertyRNA rna_WorldMistSettings_depth = {
	{(PropertyRNA *)&rna_WorldMistSettings_height, (PropertyRNA *)&rna_WorldMistSettings_start,
	-1, "depth", 3, 0, 0, 4, 0, "Depth",
	"Distance over which the mist effect fades in",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, mistdist), (RawPropertyType)5, nullptr},
	WorldMistSettings_depth_get, WorldMistSettings_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, 25.0f, nullptr
};

FloatPropertyRNA rna_WorldMistSettings_height = {
	{(PropertyRNA *)&rna_WorldMistSettings_falloff, (PropertyRNA *)&rna_WorldMistSettings_depth,
	-1, "height", 3, 0, 0, 4, 0, "Height",
	"Control how much mist density decreases with height",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_World_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, misthi), (RawPropertyType)5, nullptr},
	WorldMistSettings_height_get, WorldMistSettings_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_WorldMistSettings_falloff_items[4] = {
	{0, "QUADRATIC", 0, "Quadratic", "Use quadratic progression"},
	{1, "LINEAR", 0, "Linear", "Use linear progression"},
	{2, "INVERSE_QUADRATIC", 0, "Inverse Quadratic", "Use inverse quadratic progression"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_WorldMistSettings_falloff = {
	{nullptr, (PropertyRNA *)&rna_WorldMistSettings_height,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"Type of transition used to fade mist",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, mistype), (RawPropertyType)1, nullptr},
	WorldMistSettings_falloff_get, WorldMistSettings_falloff_set, nullptr, nullptr, nullptr, rna_WorldMistSettings_falloff_items, 3, 0
};

StructRNA RNA_WorldMistSettings = {
	{(ContainerRNA *)&RNA_MovieClip, (ContainerRNA *)&RNA_WorldLighting,
	nullptr,
	{(PropertyRNA *)&rna_WorldMistSettings_rna_properties, (PropertyRNA *)&rna_WorldMistSettings_falloff}},
	"WorldMistSettings", nullptr, nullptr, 516, nullptr, "World Mist",
	"Mist settings for a World data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_WorldMistSettings_rna_properties,
	nullptr,
	&RNA_World,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

