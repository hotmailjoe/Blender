
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

#include "rna_lattice.cc"
#include "rna_lattice_api.cc"

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

RNA_EXTERN_C IntPropertyRNA rna_Lattice_points_u;
RNA_EXTERN_C IntPropertyRNA rna_Lattice_points_v;
RNA_EXTERN_C IntPropertyRNA rna_Lattice_points_w;
RNA_EXTERN_C EnumPropertyRNA rna_Lattice_interpolation_type_u;
RNA_EXTERN_C EnumPropertyRNA rna_Lattice_interpolation_type_v;
RNA_EXTERN_C EnumPropertyRNA rna_Lattice_interpolation_type_w;
RNA_EXTERN_C BoolPropertyRNA rna_Lattice_use_outside;
RNA_EXTERN_C StringPropertyRNA rna_Lattice_vertex_group;
RNA_EXTERN_C PointerPropertyRNA rna_Lattice_shape_keys;
RNA_EXTERN_C CollectionPropertyRNA rna_Lattice_points;
RNA_EXTERN_C BoolPropertyRNA rna_Lattice_is_editmode;
RNA_EXTERN_C PointerPropertyRNA rna_Lattice_animation_data;

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


extern FunctionRNA rna_Lattice_transform_func;
extern FloatPropertyRNA rna_Lattice_transform_matrix;
extern BoolPropertyRNA rna_Lattice_transform_shape_keys;

extern FunctionRNA rna_Lattice_update_gpu_tag_func;


RNA_EXTERN_C CollectionPropertyRNA rna_LatticePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_LatticePoint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_LatticePoint_select;
RNA_EXTERN_C FloatPropertyRNA rna_LatticePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_LatticePoint_co_deform;
RNA_EXTERN_C FloatPropertyRNA rna_LatticePoint_weight_softbody;
RNA_EXTERN_C CollectionPropertyRNA rna_LatticePoint_groups;

RNA_EXTERN_C int Lattice_points_u_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->pntsu);
}

RNA_EXTERN_C void Lattice_points_u_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Lattice_points_u_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Lattice_points_v_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->pntsv);
}

RNA_EXTERN_C void Lattice_points_v_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Lattice_points_v_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Lattice_points_w_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->pntsw);
}

RNA_EXTERN_C void Lattice_points_w_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Lattice_points_w_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Lattice_interpolation_type_u_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->typeu);
}

RNA_EXTERN_C void Lattice_interpolation_type_u_set(PointerRNA *ptr, int value)
{
    Lattice *data = (Lattice *)(ptr->data);
#ifdef __cplusplus
    data->typeu = (std::remove_reference_t<decltype(data->typeu)>)value;
#else
    data->typeu = value;
#endif
}

RNA_EXTERN_C int Lattice_interpolation_type_v_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->typev);
}

RNA_EXTERN_C void Lattice_interpolation_type_v_set(PointerRNA *ptr, int value)
{
    Lattice *data = (Lattice *)(ptr->data);
#ifdef __cplusplus
    data->typev = (std::remove_reference_t<decltype(data->typev)>)value;
#else
    data->typev = value;
#endif
}

RNA_EXTERN_C int Lattice_interpolation_type_w_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (int)(data->typew);
}

RNA_EXTERN_C void Lattice_interpolation_type_w_set(PointerRNA *ptr, int value)
{
    Lattice *data = (Lattice *)(ptr->data);
#ifdef __cplusplus
    data->typew = (std::remove_reference_t<decltype(data->typew)>)value;
#else
    data->typew = value;
#endif
}

RNA_EXTERN_C bool Lattice_use_outside_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Lattice_use_outside_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Lattice_use_outside_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Lattice_vertex_group_get(PointerRNA *ptr, char *value)
{
    Lattice *data = (Lattice *)(ptr->data);
    BLI_assert(strlen(data->vgroup) < 64);
    strcpy(value, data->vgroup);
}

RNA_EXTERN_C int Lattice_vertex_group_length(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return strlen(data->vgroup);
}

RNA_EXTERN_C void Lattice_vertex_group_set(PointerRNA *ptr, const char *value)
{
    rna_Lattice_vg_name_set(ptr, value);
}

RNA_EXTERN_C PointerRNA Lattice_shape_keys_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

static PointerRNA Lattice_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_LatticePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Lattice_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Lattice_points;

    rna_Lattice_points_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Lattice_points_get(iter);
    }
}

RNA_EXTERN_C void Lattice_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Lattice_points_get(iter);
    }
}

RNA_EXTERN_C void Lattice_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C bool Lattice_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Lattice_is_editmode_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Lattice_animation_data_get(PointerRNA *ptr)
{
    Lattice *data = (Lattice *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA LatticePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void LatticePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LatticePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LatticePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LatticePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LatticePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LatticePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LatticePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA LatticePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool LatticePoint_select_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

RNA_EXTERN_C void LatticePoint_select_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

RNA_EXTERN_C void LatticePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_LatticePoint_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void LatticePoint_co_deform_get(PointerRNA *ptr, float values[3])
{
    BPoint *data = (BPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

RNA_EXTERN_C void LatticePoint_co_deform_set(PointerRNA *ptr, const float values[3])
{
    BPoint *data = (BPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

RNA_EXTERN_C float LatticePoint_weight_softbody_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void LatticePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0099999998f, 100.0f);
#else
    data->weight = CLAMPIS(value, 0.0099999998f, 100.0f);
#endif
}

static PointerRNA LatticePoint_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void LatticePoint_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LatticePoint_groups;

    rna_LatticePoint_groups_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LatticePoint_groups_get(iter);
    }
}

RNA_EXTERN_C void LatticePoint_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = LatticePoint_groups_get(iter);
    }
}

RNA_EXTERN_C void LatticePoint_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C void Lattice_transform_func(struct Lattice *_self, float matrix[16], bool shape_keys)
{
	rna_Lattice_transform(_self, matrix, shape_keys);
}

static void Lattice_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Lattice *_self;
	const float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (struct Lattice *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Lattice_transform(_self, matrix, shape_keys);
}

RNA_EXTERN_C void Lattice_update_gpu_tag_func(struct Lattice *_self)
{
	rna_Lattice_update_gpu_tag(_self);
}

static void Lattice_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Lattice *_self;
	_self = (struct Lattice *)_ptr->data;
	
	rna_Lattice_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Lattice_transform(struct Lattice *_self, float matrix[16], bool shape_keys);
void rna_Lattice_update_gpu_tag(struct Lattice *_self);


/* Lattice */
IntPropertyRNA rna_Lattice_points_u = {
	{(PropertyRNA *)&rna_Lattice_points_v, nullptr,
	-1, "points_u", 1, 0, 0, 0, 0, "U",
	"Points in U direction (cannot be changed when there are shape keys)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_size, 0, rna_Lattice_size_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_points_u_get, Lattice_points_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, 0, nullptr
};

IntPropertyRNA rna_Lattice_points_v = {
	{(PropertyRNA *)&rna_Lattice_points_w, (PropertyRNA *)&rna_Lattice_points_u,
	-1, "points_v", 1, 0, 0, 0, 0, "V",
	"Points in V direction (cannot be changed when there are shape keys)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_size, 0, rna_Lattice_size_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_points_v_get, Lattice_points_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, 0, nullptr
};

IntPropertyRNA rna_Lattice_points_w = {
	{(PropertyRNA *)&rna_Lattice_interpolation_type_u, (PropertyRNA *)&rna_Lattice_points_v,
	-1, "points_w", 1, 0, 0, 0, 0, "W",
	"Points in W direction (cannot be changed when there are shape keys)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_size, 0, rna_Lattice_size_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_points_w_get, Lattice_points_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 64, 1, 0, nullptr
};

static const EnumPropertyItem rna_Lattice_interpolation_type_u_items[5] = {
	{0, "KEY_LINEAR", 0, "Linear", ""},
	{1, "KEY_CARDINAL", 0, "Cardinal", ""},
	{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""},
	{2, "KEY_BSPLINE", 0, "BSpline", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Lattice_interpolation_type_u = {
	{(PropertyRNA *)&rna_Lattice_interpolation_type_v, (PropertyRNA *)&rna_Lattice_points_w,
	-1, "interpolation_type_u", 3, 0, 0, 4, 0, "Interpolation Type U",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Lattice, typeu), (RawPropertyType)2, nullptr},
	Lattice_interpolation_type_u_get, Lattice_interpolation_type_u_set, nullptr, nullptr, nullptr, rna_Lattice_interpolation_type_u_items, 4, 2
};

static const EnumPropertyItem rna_Lattice_interpolation_type_v_items[5] = {
	{0, "KEY_LINEAR", 0, "Linear", ""},
	{1, "KEY_CARDINAL", 0, "Cardinal", ""},
	{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""},
	{2, "KEY_BSPLINE", 0, "BSpline", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Lattice_interpolation_type_v = {
	{(PropertyRNA *)&rna_Lattice_interpolation_type_w, (PropertyRNA *)&rna_Lattice_interpolation_type_u,
	-1, "interpolation_type_v", 3, 0, 0, 4, 0, "Interpolation Type V",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Lattice, typev), (RawPropertyType)2, nullptr},
	Lattice_interpolation_type_v_get, Lattice_interpolation_type_v_set, nullptr, nullptr, nullptr, rna_Lattice_interpolation_type_v_items, 4, 2
};

static const EnumPropertyItem rna_Lattice_interpolation_type_w_items[5] = {
	{0, "KEY_LINEAR", 0, "Linear", ""},
	{1, "KEY_CARDINAL", 0, "Cardinal", ""},
	{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""},
	{2, "KEY_BSPLINE", 0, "BSpline", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Lattice_interpolation_type_w = {
	{(PropertyRNA *)&rna_Lattice_use_outside, (PropertyRNA *)&rna_Lattice_interpolation_type_v,
	-1, "interpolation_type_w", 3, 0, 0, 4, 0, "Interpolation Type W",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Lattice, typew), (RawPropertyType)2, nullptr},
	Lattice_interpolation_type_w_get, Lattice_interpolation_type_w_set, nullptr, nullptr, nullptr, rna_Lattice_interpolation_type_w_items, 4, 2
};

BoolPropertyRNA rna_Lattice_use_outside = {
	{(PropertyRNA *)&rna_Lattice_vertex_group, (PropertyRNA *)&rna_Lattice_interpolation_type_w,
	-1, "use_outside", 3, 0, 0, 0, 0, "Outside",
	"Only display and take into account the outer vertices",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_use_outside_get, Lattice_use_outside_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_Lattice_vertex_group = {
	{(PropertyRNA *)&rna_Lattice_shape_keys, (PropertyRNA *)&rna_Lattice_use_outside,
	-1, "vertex_group", 262145, 0, 0, 0, 0, "Vertex Group",
	"Vertex group to apply the influence of the lattice",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Lattice_update_data_editlatt, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_vertex_group_get, Lattice_vertex_group_length, Lattice_vertex_group_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_Lattice_shape_keys = {
	{(PropertyRNA *)&rna_Lattice_points, (PropertyRNA *)&rna_Lattice_vertex_group,
	-1, "shape_keys", 8388672, 1, 0, 32, 0, "Shape Keys",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_shape_keys_get, nullptr, nullptr, nullptr,&RNA_Key
};

CollectionPropertyRNA rna_Lattice_points = {
	{(PropertyRNA *)&rna_Lattice_is_editmode, (PropertyRNA *)&rna_Lattice_shape_keys,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Points of the lattice",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_points_begin, Lattice_points_next, Lattice_points_end, Lattice_points_get, nullptr, nullptr, nullptr, nullptr, &RNA_LatticePoint
};

BoolPropertyRNA rna_Lattice_is_editmode = {
	{(PropertyRNA *)&rna_Lattice_animation_data, (PropertyRNA *)&rna_Lattice_points,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Lattice_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Lattice_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Lattice_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

static float rna_Lattice_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Lattice_transform_matrix = {
	{(PropertyRNA *)&rna_Lattice_transform_shape_keys, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Lattice_transform_matrix_default
};

BoolPropertyRNA rna_Lattice_transform_shape_keys = {
	{nullptr, (PropertyRNA *)&rna_Lattice_transform_matrix,
	-1, "shape_keys", 3, 0, 0, 0, 0, "",
	"Transform Shape Keys",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Lattice_transform_func = {
	{(FunctionRNA *)&rna_Lattice_update_gpu_tag_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Lattice_transform_matrix, (PropertyRNA *)&rna_Lattice_transform_shape_keys}},
	"transform", 0, "Transform lattice by a matrix",
	Lattice_transform_call,
	nullptr
};

FunctionRNA rna_Lattice_update_gpu_tag_func = {
	{nullptr, (FunctionRNA *)&rna_Lattice_transform_func,
	nullptr,
	{nullptr, nullptr}},
	"update_gpu_tag", 0, "update_gpu_tag",
	Lattice_update_gpu_tag_call,
	nullptr
};

StructRNA RNA_Lattice = {
	{(ContainerRNA *)&RNA_LatticePoint, (ContainerRNA *)&RNA_SunLight,
	nullptr,
	{(PropertyRNA *)&rna_Lattice_points_u, (PropertyRNA *)&rna_Lattice_animation_data}},
	"Lattice", nullptr, nullptr, 519, nullptr, "Lattice",
	"Lattice data-block defining a grid for deforming other objects",
	"*", 163,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Lattice_transform_func, (FunctionRNA *)&rna_Lattice_update_gpu_tag_func}
};

/* LatticePoint */
CollectionPropertyRNA rna_LatticePoint_rna_properties = {
	{(PropertyRNA *)&rna_LatticePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LatticePoint_rna_properties_begin, LatticePoint_rna_properties_next, LatticePoint_rna_properties_end, LatticePoint_rna_properties_get, nullptr, nullptr, LatticePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_LatticePoint_rna_type = {
	{(PropertyRNA *)&rna_LatticePoint_select, (PropertyRNA *)&rna_LatticePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LatticePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_LatticePoint_select = {
	{(PropertyRNA *)&rna_LatticePoint_co, (PropertyRNA *)&rna_LatticePoint_rna_type,
	-1, "select", 3, 0, 0, 0, 0, "Point selected",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LatticePoint_select_get, LatticePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_LatticePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_LatticePoint_co = {
	{(PropertyRNA *)&rna_LatticePoint_co_deform, (PropertyRNA *)&rna_LatticePoint_select,
	-1, "co", 2, 0, 0, 0, 0, "Location",
	"Original undeformed location used to calculate the strength of the deform effect (edit/animate the Deformed Location instead)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, LatticePoint_co_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_LatticePoint_co_default
};

static float rna_LatticePoint_co_deform_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_LatticePoint_co_deform = {
	{(PropertyRNA *)&rna_LatticePoint_weight_softbody, (PropertyRNA *)&rna_LatticePoint_co,
	-1, "co_deform", 3, 0, 0, 4, 0, "Deformed Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Lattice_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, vec), (RawPropertyType)5, nullptr},
	nullptr, nullptr, LatticePoint_co_deform_get, LatticePoint_co_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_LatticePoint_co_deform_default
};

FloatPropertyRNA rna_LatticePoint_weight_softbody = {
	{(PropertyRNA *)&rna_LatticePoint_groups, (PropertyRNA *)&rna_LatticePoint_co_deform,
	-1, "weight_softbody", 3, 0, 0, 4, 0, "Weight",
	"Softbody goal weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Lattice_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, weight), (RawPropertyType)5, nullptr},
	LatticePoint_weight_softbody_get, LatticePoint_weight_softbody_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

CollectionPropertyRNA rna_LatticePoint_groups = {
	{nullptr, (PropertyRNA *)&rna_LatticePoint_weight_softbody,
	-1, "groups", 0, 0, 0, 8, 0, "Groups",
	"Weights for the vertex groups this point is member of",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LatticePoint_groups_begin, LatticePoint_groups_next, LatticePoint_groups_end, LatticePoint_groups_get, nullptr, nullptr, nullptr, nullptr, &RNA_VertexGroupElement
};

StructRNA RNA_LatticePoint = {
	{(ContainerRNA *)&RNA_ViewLayer, (ContainerRNA *)&RNA_Lattice,
	nullptr,
	{(PropertyRNA *)&rna_LatticePoint_rna_properties, (PropertyRNA *)&rna_LatticePoint_groups}},
	"LatticePoint", nullptr, nullptr, 516, nullptr, "LatticePoint",
	"Point in the lattice grid",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_LatticePoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_LatticePoint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

