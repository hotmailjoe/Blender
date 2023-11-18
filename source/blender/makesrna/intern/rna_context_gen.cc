
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

#include "rna_context.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_Context_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Context_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_Context_window_manager;
RNA_EXTERN_C PointerPropertyRNA rna_Context_window;
RNA_EXTERN_C PointerPropertyRNA rna_Context_workspace;
RNA_EXTERN_C PointerPropertyRNA rna_Context_screen;
RNA_EXTERN_C PointerPropertyRNA rna_Context_area;
RNA_EXTERN_C PointerPropertyRNA rna_Context_space_data;
RNA_EXTERN_C PointerPropertyRNA rna_Context_region;
RNA_EXTERN_C PointerPropertyRNA rna_Context_region_data;
RNA_EXTERN_C PointerPropertyRNA rna_Context_gizmo_group;
RNA_EXTERN_C PointerPropertyRNA rna_Context_asset;
RNA_EXTERN_C PointerPropertyRNA rna_Context_blend_data;
RNA_EXTERN_C PointerPropertyRNA rna_Context_scene;
RNA_EXTERN_C PointerPropertyRNA rna_Context_view_layer;
RNA_EXTERN_C StringPropertyRNA rna_Context_engine;
RNA_EXTERN_C PointerPropertyRNA rna_Context_collection;
RNA_EXTERN_C PointerPropertyRNA rna_Context_layer_collection;
RNA_EXTERN_C PointerPropertyRNA rna_Context_tool_settings;
RNA_EXTERN_C PointerPropertyRNA rna_Context_preferences;
RNA_EXTERN_C EnumPropertyRNA rna_Context_mode;

extern FunctionRNA rna_Context_evaluated_depsgraph_get_func;
extern PointerPropertyRNA rna_Context_evaluated_depsgraph_get_depsgraph;


static PointerRNA Context_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Context_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Context_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Context_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Context_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Context_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Context_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Context_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Context_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_window_manager_get(PointerRNA *ptr)
{
    return rna_Context_manager_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_window_get(PointerRNA *ptr)
{
    return rna_Context_window_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_workspace_get(PointerRNA *ptr)
{
    return rna_Context_workspace_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_screen_get(PointerRNA *ptr)
{
    return rna_Context_screen_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_area_get(PointerRNA *ptr)
{
    return rna_Context_area_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_space_data_get(PointerRNA *ptr)
{
    return rna_Context_space_data_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_region_get(PointerRNA *ptr)
{
    return rna_Context_region_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_region_data_get(PointerRNA *ptr)
{
    return rna_Context_region_data_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_gizmo_group_get(PointerRNA *ptr)
{
    return rna_Context_gizmo_group_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_asset_get(PointerRNA *ptr)
{
    return rna_Context_asset_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_blend_data_get(PointerRNA *ptr)
{
    return rna_Context_main_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_scene_get(PointerRNA *ptr)
{
    return rna_Context_scene_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_view_layer_get(PointerRNA *ptr)
{
    return rna_Context_view_layer_get(ptr);
}

RNA_EXTERN_C void Context_engine_get(PointerRNA *ptr, char *value)
{
    rna_Context_engine_get(ptr, value);
}

RNA_EXTERN_C int Context_engine_length(PointerRNA *ptr)
{
    return rna_Context_engine_length(ptr);
}

RNA_EXTERN_C PointerRNA Context_collection_get(PointerRNA *ptr)
{
    return rna_Context_collection_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_layer_collection_get(PointerRNA *ptr)
{
    return rna_Context_layer_collection_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_tool_settings_get(PointerRNA *ptr)
{
    return rna_Context_tool_settings_get(ptr);
}

RNA_EXTERN_C PointerRNA Context_preferences_get(PointerRNA *ptr)
{
    return rna_Context_preferences_get(ptr);
}

RNA_EXTERN_C int Context_mode_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Context_mode_get;
    return fn(ptr);
}

RNA_EXTERN_C struct Depsgraph *Context_evaluated_depsgraph_get_func(struct bContext *_self)
{
	return rna_Context_evaluated_depsgraph_get(_self);
}

static void Context_evaluated_depsgraph_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *_self;
	struct Depsgraph *depsgraph;
	char *_data, *_retdata;
	
	_self = (struct bContext *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	depsgraph = rna_Context_evaluated_depsgraph_get(_self);
	*((struct Depsgraph **)_retdata) = depsgraph;
}

/* Repeated prototypes to detect errors */

struct Depsgraph *rna_Context_evaluated_depsgraph_get(struct bContext *_self);

/* Context */
CollectionPropertyRNA rna_Context_rna_properties = {
	{(PropertyRNA *)&rna_Context_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_rna_properties_begin, Context_rna_properties_next, Context_rna_properties_end, Context_rna_properties_get, nullptr, nullptr, Context_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Context_rna_type = {
	{(PropertyRNA *)&rna_Context_window_manager, (PropertyRNA *)&rna_Context_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Context_window_manager = {
	{(PropertyRNA *)&rna_Context_window, (PropertyRNA *)&rna_Context_rna_type,
	-1, "window_manager", 8388736, 0, 0, 0, 0, "window_manager",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_window_manager_get, nullptr, nullptr, nullptr,&RNA_WindowManager
};

PointerPropertyRNA rna_Context_window = {
	{(PropertyRNA *)&rna_Context_workspace, (PropertyRNA *)&rna_Context_window_manager,
	-1, "window", 8388608, 0, 0, 0, 0, "window",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_window_get, nullptr, nullptr, nullptr,&RNA_Window
};

PointerPropertyRNA rna_Context_workspace = {
	{(PropertyRNA *)&rna_Context_screen, (PropertyRNA *)&rna_Context_window,
	-1, "workspace", 8388736, 0, 0, 0, 0, "workspace",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_workspace_get, nullptr, nullptr, nullptr,&RNA_WorkSpace
};

PointerPropertyRNA rna_Context_screen = {
	{(PropertyRNA *)&rna_Context_area, (PropertyRNA *)&rna_Context_workspace,
	-1, "screen", 8388736, 0, 0, 0, 0, "screen",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_screen_get, nullptr, nullptr, nullptr,&RNA_Screen
};

PointerPropertyRNA rna_Context_area = {
	{(PropertyRNA *)&rna_Context_space_data, (PropertyRNA *)&rna_Context_screen,
	-1, "area", 8388608, 0, 0, 0, 0, "area",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_area_get, nullptr, nullptr, nullptr,&RNA_Area
};

PointerPropertyRNA rna_Context_space_data = {
	{(PropertyRNA *)&rna_Context_region, (PropertyRNA *)&rna_Context_area,
	-1, "space_data", 8388608, 0, 0, 0, 0, "",
	"The current space, may be None in background-mode, when the cursor is outside the window or when using menu-search",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_space_data_get, nullptr, nullptr, nullptr,&RNA_Space
};

PointerPropertyRNA rna_Context_region = {
	{(PropertyRNA *)&rna_Context_region_data, (PropertyRNA *)&rna_Context_space_data,
	-1, "region", 8388608, 0, 0, 0, 0, "region",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_region_get, nullptr, nullptr, nullptr,&RNA_Region
};

PointerPropertyRNA rna_Context_region_data = {
	{(PropertyRNA *)&rna_Context_gizmo_group, (PropertyRNA *)&rna_Context_region,
	-1, "region_data", 8388608, 0, 0, 0, 0, "region_data",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_region_data_get, nullptr, nullptr, nullptr,&RNA_RegionView3D
};

PointerPropertyRNA rna_Context_gizmo_group = {
	{(PropertyRNA *)&rna_Context_asset, (PropertyRNA *)&rna_Context_region_data,
	-1, "gizmo_group", 8388608, 0, 0, 0, 0, "gizmo_group",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_gizmo_group_get, nullptr, nullptr, nullptr,&RNA_GizmoGroup
};

PointerPropertyRNA rna_Context_asset = {
	{(PropertyRNA *)&rna_Context_blend_data, (PropertyRNA *)&rna_Context_gizmo_group,
	-1, "asset", 8388608, 0, 0, 0, 0, "asset",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_asset_get, nullptr, nullptr, nullptr,&RNA_AssetRepresentation
};

PointerPropertyRNA rna_Context_blend_data = {
	{(PropertyRNA *)&rna_Context_scene, (PropertyRNA *)&rna_Context_asset,
	-1, "blend_data", 8388608, 0, 0, 0, 0, "blend_data",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_blend_data_get, nullptr, nullptr, nullptr,&RNA_BlendData
};

PointerPropertyRNA rna_Context_scene = {
	{(PropertyRNA *)&rna_Context_view_layer, (PropertyRNA *)&rna_Context_blend_data,
	-1, "scene", 8388736, 0, 0, 0, 0, "scene",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_scene_get, nullptr, nullptr, nullptr,&RNA_Scene
};

PointerPropertyRNA rna_Context_view_layer = {
	{(PropertyRNA *)&rna_Context_engine, (PropertyRNA *)&rna_Context_scene,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "view_layer",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_view_layer_get, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

StringPropertyRNA rna_Context_engine = {
	{(PropertyRNA *)&rna_Context_collection, (PropertyRNA *)&rna_Context_view_layer,
	-1, "engine", 262144, 0, 0, 0, 0, "engine",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_engine_get, Context_engine_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Context_collection = {
	{(PropertyRNA *)&rna_Context_layer_collection, (PropertyRNA *)&rna_Context_engine,
	-1, "collection", 8388736, 0, 0, 0, 0, "collection",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_collection_get, nullptr, nullptr, nullptr,&RNA_Collection
};

PointerPropertyRNA rna_Context_layer_collection = {
	{(PropertyRNA *)&rna_Context_tool_settings, (PropertyRNA *)&rna_Context_collection,
	-1, "layer_collection", 8388608, 0, 0, 0, 0, "layer_collection",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_layer_collection_get, nullptr, nullptr, nullptr,&RNA_LayerCollection
};

PointerPropertyRNA rna_Context_tool_settings = {
	{(PropertyRNA *)&rna_Context_preferences, (PropertyRNA *)&rna_Context_layer_collection,
	-1, "tool_settings", 8388608, 0, 0, 0, 0, "tool_settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_tool_settings_get, nullptr, nullptr, nullptr,&RNA_ToolSettings
};

PointerPropertyRNA rna_Context_preferences = {
	{(PropertyRNA *)&rna_Context_mode, (PropertyRNA *)&rna_Context_tool_settings,
	-1, "preferences", 8388608, 0, 0, 0, 0, "preferences",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_preferences_get, nullptr, nullptr, nullptr,&RNA_Preferences
};

EnumPropertyRNA rna_Context_mode = {
	{nullptr, (PropertyRNA *)&rna_Context_preferences,
	-1, "mode", 2, 0, 0, 0, 0, "mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Context_mode_get, nullptr, nullptr, nullptr, nullptr, rna_enum_context_mode_items, 24, 0
};

PointerPropertyRNA rna_Context_evaluated_depsgraph_get_depsgraph = {
	{nullptr, nullptr,
	-1, "depsgraph", 8388608, 0, 2, 0, 0, "",
	"Evaluated dependency graph",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

FunctionRNA rna_Context_evaluated_depsgraph_get_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Context_evaluated_depsgraph_get_depsgraph, (PropertyRNA *)&rna_Context_evaluated_depsgraph_get_depsgraph}},
	"evaluated_depsgraph_get", 0, "Get the dependency graph for the current scene and view layer, to access to data-blocks with animation and modifiers applied. If any data-blocks have been edited, the dependency graph will be updated. This invalidates all references to evaluated data-blocks from the dependency graph.",
	Context_evaluated_depsgraph_get_call,
	(PropertyRNA *)&rna_Context_evaluated_depsgraph_get_depsgraph
};

StructRNA RNA_Context = {
	{(ContainerRNA *)&RNA_Curve, (ContainerRNA *)&RNA_TransformCacheConstraint,
	nullptr,
	{(PropertyRNA *)&rna_Context_rna_properties, (PropertyRNA *)&rna_Context_mode}},
	"Context", nullptr, nullptr, 516, nullptr, "Context",
	"Current windowmanager and data context",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Context_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Context_evaluated_depsgraph_get_func, (FunctionRNA *)&rna_Context_evaluated_depsgraph_get_func}
};

