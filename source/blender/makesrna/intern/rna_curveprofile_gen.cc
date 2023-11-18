
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

#include "rna_curveprofile.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_CurveProfilePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveProfilePoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_CurveProfilePoint_location;
RNA_EXTERN_C EnumPropertyRNA rna_CurveProfilePoint_handle_type_1;
RNA_EXTERN_C EnumPropertyRNA rna_CurveProfilePoint_handle_type_2;
RNA_EXTERN_C BoolPropertyRNA rna_CurveProfilePoint_select;


RNA_EXTERN_C CollectionPropertyRNA rna_CurveProfile_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveProfile_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_CurveProfile_preset;
RNA_EXTERN_C BoolPropertyRNA rna_CurveProfile_use_clip;
RNA_EXTERN_C BoolPropertyRNA rna_CurveProfile_use_sample_straight_edges;
RNA_EXTERN_C BoolPropertyRNA rna_CurveProfile_use_sample_even_lengths;
RNA_EXTERN_C CollectionPropertyRNA rna_CurveProfile_points;
RNA_EXTERN_C CollectionPropertyRNA rna_CurveProfile_segments;

extern FunctionRNA rna_CurveProfile_update_func;
extern FunctionRNA rna_CurveProfile_reset_view_func;
extern FunctionRNA rna_CurveProfile_initialize_func;
extern IntPropertyRNA rna_CurveProfile_initialize_totsegments;

extern FunctionRNA rna_CurveProfile_evaluate_func;
extern FloatPropertyRNA rna_CurveProfile_evaluate_length_portion;
extern FloatPropertyRNA rna_CurveProfile_evaluate_location;



RNA_EXTERN_C CollectionPropertyRNA rna_CurveProfilePoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveProfilePoints_rna_type;

extern FunctionRNA rna_CurveProfilePoints_add_func;
extern FloatPropertyRNA rna_CurveProfilePoints_add_x;
extern FloatPropertyRNA rna_CurveProfilePoints_add_y;
extern PointerPropertyRNA rna_CurveProfilePoints_add_point;

extern FunctionRNA rna_CurveProfilePoints_remove_func;
extern PointerPropertyRNA rna_CurveProfilePoints_remove_point;


static PointerRNA CurveProfilePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveProfilePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveProfilePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveProfilePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveProfilePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveProfilePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveProfilePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveProfilePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveProfilePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void CurveProfilePoint_location_get(PointerRNA *ptr, float values[2])
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

RNA_EXTERN_C void CurveProfilePoint_location_set(PointerRNA *ptr, const float values[2])
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

RNA_EXTERN_C int CurveProfilePoint_handle_type_1_get(PointerRNA *ptr)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    return (int)(data->h1);
}

RNA_EXTERN_C void CurveProfilePoint_handle_type_1_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_CurveProfilePoint_handle_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int CurveProfilePoint_handle_type_2_get(PointerRNA *ptr)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    return (int)(data->h2);
}

RNA_EXTERN_C void CurveProfilePoint_handle_type_2_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_CurveProfilePoint_handle_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool CurveProfilePoint_select_get(PointerRNA *ptr)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CurveProfilePoint_select_set(PointerRNA *ptr, bool value)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA CurveProfile_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveProfile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveProfile_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveProfile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveProfile_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveProfile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveProfile_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveProfile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveProfile_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int CurveProfile_preset_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (int)(data->preset);
}

RNA_EXTERN_C void CurveProfile_preset_set(PointerRNA *ptr, int value)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
#ifdef __cplusplus
    data->preset = (std::remove_reference_t<decltype(data->preset)>)value;
#else
    data->preset = value;
#endif
}

RNA_EXTERN_C bool CurveProfile_use_clip_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void CurveProfile_use_clip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveProfile_clip_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool CurveProfile_use_sample_straight_edges_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void CurveProfile_use_sample_straight_edges_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveProfile_sample_straight_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool CurveProfile_use_sample_even_lengths_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void CurveProfile_use_sample_even_lengths_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveProfile_sample_even_set;
    fn(ptr, value);
}

RNA_EXTERN_C int CurveProfile_points_length(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (data->path == nullptr) ? 0 : data->path_len;
}

static PointerRNA CurveProfile_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveProfilePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void CurveProfile_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveProfile_points;

    rna_iterator_array_begin(iter, data->path, sizeof(data->path[0]), data->path_len, 0, nullptr);

    if (iter->valid) {
        iter->ptr = CurveProfile_points_get(iter);
    }
}

RNA_EXTERN_C void CurveProfile_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = CurveProfile_points_get(iter);
    }
}

RNA_EXTERN_C void CurveProfile_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int CurveProfile_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    CurveProfile_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = CurveProfile_points_get(&iter); }
    }

    CurveProfile_points_end(&iter);

    return found;
}

RNA_EXTERN_C int CurveProfile_segments_length(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (data->segments == nullptr) ? 0 : data->segments_len;
}

static PointerRNA CurveProfile_segments_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveProfilePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void CurveProfile_segments_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveProfile_segments;

    rna_iterator_array_begin(iter, data->segments, sizeof(data->segments[0]), data->segments_len, 0, nullptr);

    if (iter->valid) {
        iter->ptr = CurveProfile_segments_get(iter);
    }
}

RNA_EXTERN_C void CurveProfile_segments_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = CurveProfile_segments_get(iter);
    }
}

RNA_EXTERN_C void CurveProfile_segments_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int CurveProfile_segments_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    CurveProfile_segments_begin(&iter, ptr);

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
        if (found) { *r_ptr = CurveProfile_segments_get(&iter); }
    }

    CurveProfile_segments_end(&iter);

    return found;
}

static PointerRNA CurveProfilePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveProfilePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveProfilePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveProfilePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveProfilePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveProfilePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveProfilePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveProfilePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveProfilePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


RNA_EXTERN_C void CurveProfile_update_func(struct CurveProfile *_self)
{
	rna_CurveProfile_update(_self);
}

static void CurveProfile_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveProfile *_self;
	_self = (struct CurveProfile *)_ptr->data;
	
	rna_CurveProfile_update(_self);
}

RNA_EXTERN_C void CurveProfile_reset_view_func(struct CurveProfile *_self)
{
	BKE_curveprofile_reset_view(_self);
}

static void CurveProfile_reset_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveProfile *_self;
	_self = (struct CurveProfile *)_ptr->data;
	
	BKE_curveprofile_reset_view(_self);
}

RNA_EXTERN_C void CurveProfile_initialize_func(struct CurveProfile *_self, int totsegments)
{
	rna_CurveProfile_initialize(_self, totsegments);
}

static void CurveProfile_initialize_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveProfile *_self;
	int totsegments;
	char *_data;
	
	_self = (struct CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	totsegments = *((int *)_data);
	
	rna_CurveProfile_initialize(_self, totsegments);
}

RNA_EXTERN_C void CurveProfile_evaluate_func(struct CurveProfile *_self, ReportList *reports, float length_portion, float location[2])
{
	rna_CurveProfile_evaluate(_self, reports, length_portion, location);
}

static void CurveProfile_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveProfile *_self;
	float length_portion;
	float *location;
	char *_data;
	
	_self = (struct CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	length_portion = *((float *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_CurveProfile_evaluate(_self, reports, length_portion, location);
}

/* Repeated prototypes to detect errors */

void rna_CurveProfile_update(struct CurveProfile *_self);
void BKE_curveprofile_reset_view(struct CurveProfile *_self);
void rna_CurveProfile_initialize(struct CurveProfile *_self, int totsegments);
void rna_CurveProfile_evaluate(struct CurveProfile *_self, ReportList *reports, float length_portion, float location[2]);

RNA_EXTERN_C struct CurveProfilePoint *CurveProfilePoints_add_func(struct CurveProfile *_self, float x, float y)
{
	return BKE_curveprofile_insert(_self, x, y);
}

static void CurveProfilePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveProfile *_self;
	float x;
	float y;
	struct CurveProfilePoint *point;
	char *_data, *_retdata;
	
	_self = (struct CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = BKE_curveprofile_insert(_self, x, y);
	*((struct CurveProfilePoint **)_retdata) = point;
}

RNA_EXTERN_C void CurveProfilePoints_remove_func(struct CurveProfile *_self, ReportList *reports, struct PointerRNA *point)
{
	rna_CurveProfile_remove_point(_self, reports, point);
}

static void CurveProfilePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveProfile *_self;
	struct PointerRNA *point;
	char *_data;
	
	_self = (struct CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((struct PointerRNA **)_data);
	
	rna_CurveProfile_remove_point(_self, reports, point);
}

/* Repeated prototypes to detect errors */

struct CurveProfilePoint *BKE_curveprofile_insert(struct CurveProfile *_self, float x, float y);
void rna_CurveProfile_remove_point(struct CurveProfile *_self, ReportList *reports, struct PointerRNA *point);

/* CurveProfilePoint */
CollectionPropertyRNA rna_CurveProfilePoint_rna_properties = {
	{(PropertyRNA *)&rna_CurveProfilePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoint_rna_properties_begin, CurveProfilePoint_rna_properties_next, CurveProfilePoint_rna_properties_end, CurveProfilePoint_rna_properties_get, nullptr, nullptr, CurveProfilePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveProfilePoint_rna_type = {
	{(PropertyRNA *)&rna_CurveProfilePoint_location, (PropertyRNA *)&rna_CurveProfilePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_CurveProfilePoint_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveProfilePoint_location = {
	{(PropertyRNA *)&rna_CurveProfilePoint_handle_type_1, (PropertyRNA *)&rna_CurveProfilePoint_rna_type,
	-1, "location", 3, 0, 0, 4, 0, "Location",
	"X/Y coordinates of the path point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveProfilePoint, x), (RawPropertyType)5, nullptr},
	nullptr, nullptr, CurveProfilePoint_location_get, CurveProfilePoint_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_CurveProfilePoint_location_default
};

static const EnumPropertyItem rna_CurveProfilePoint_handle_type_1_items[5] = {
	{1, "AUTO", 768, "Auto Handle", ""},
	{2, "VECTOR", 770, "Vector Handle", ""},
	{0, "FREE", 771, "Free Handle", ""},
	{3, "ALIGN", 769, "Aligned Free Handles", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveProfilePoint_handle_type_1 = {
	{(PropertyRNA *)&rna_CurveProfilePoint_handle_type_2, (PropertyRNA *)&rna_CurveProfilePoint_location,
	-1, "handle_type_1", 3, 0, 0, 0, 0, "First Handle Type",
	"Path interpolation at this point",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoint_handle_type_1_get, CurveProfilePoint_handle_type_1_set, nullptr, nullptr, nullptr, rna_CurveProfilePoint_handle_type_1_items, 4, 0
};

static const EnumPropertyItem rna_CurveProfilePoint_handle_type_2_items[5] = {
	{1, "AUTO", 768, "Auto Handle", ""},
	{2, "VECTOR", 770, "Vector Handle", ""},
	{0, "FREE", 771, "Free Handle", ""},
	{3, "ALIGN", 769, "Aligned Free Handles", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveProfilePoint_handle_type_2 = {
	{(PropertyRNA *)&rna_CurveProfilePoint_select, (PropertyRNA *)&rna_CurveProfilePoint_handle_type_1,
	-1, "handle_type_2", 3, 0, 0, 0, 0, "Second Handle Type",
	"Path interpolation at this point",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoint_handle_type_2_get, CurveProfilePoint_handle_type_2_set, nullptr, nullptr, nullptr, rna_CurveProfilePoint_handle_type_2_items, 4, 0
};

BoolPropertyRNA rna_CurveProfilePoint_select = {
	{nullptr, (PropertyRNA *)&rna_CurveProfilePoint_handle_type_2,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection state of the path point",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoint_select_get, CurveProfilePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_CurveProfilePoint = {
	{(ContainerRNA *)&RNA_CurveProfile, (ContainerRNA *)&RNA_Itasc,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfilePoint_rna_properties, (PropertyRNA *)&rna_CurveProfilePoint_select}},
	"CurveProfilePoint", nullptr, nullptr, 516, nullptr, "CurveProfilePoint",
	"Point of a path used to define a profile",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveProfilePoint_rna_properties,
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

/* CurveProfile */
CollectionPropertyRNA rna_CurveProfile_rna_properties = {
	{(PropertyRNA *)&rna_CurveProfile_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfile_rna_properties_begin, CurveProfile_rna_properties_next, CurveProfile_rna_properties_end, CurveProfile_rna_properties_get, nullptr, nullptr, CurveProfile_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveProfile_rna_type = {
	{(PropertyRNA *)&rna_CurveProfile_preset, (PropertyRNA *)&rna_CurveProfile_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfile_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_CurveProfile_preset_items[6] = {
	{0, "LINE", 0, "Line", "Default"},
	{1, "SUPPORTS", 0, "Support Loops", "Loops on each side of the profile"},
	{2, "CORNICE", 0, "Cornice Molding", ""},
	{3, "CROWN", 0, "Crown Molding", ""},
	{4, "STEPS", 0, "Steps", "A number of steps defined by the segments"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveProfile_preset = {
	{(PropertyRNA *)&rna_CurveProfile_use_clip, (PropertyRNA *)&rna_CurveProfile_rna_type,
	-1, "preset", 3, 0, 0, 4, 0, "Preset",
	"",
	0, "Mesh",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CurveProfile, preset), (RawPropertyType)0, nullptr},
	CurveProfile_preset_get, CurveProfile_preset_set, nullptr, nullptr, nullptr, rna_CurveProfile_preset_items, 5, 0
};

BoolPropertyRNA rna_CurveProfile_use_clip = {
	{(PropertyRNA *)&rna_CurveProfile_use_sample_straight_edges, (PropertyRNA *)&rna_CurveProfile_preset,
	-1, "use_clip", 3, 0, 0, 0, 0, "Clip",
	"Force the path view to fit a defined boundary",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfile_use_clip_get, CurveProfile_use_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CurveProfile_use_sample_straight_edges = {
	{(PropertyRNA *)&rna_CurveProfile_use_sample_even_lengths, (PropertyRNA *)&rna_CurveProfile_use_clip,
	-1, "use_sample_straight_edges", 3, 0, 0, 0, 0, "Sample Straight Edges",
	"Sample edges with vector handles",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfile_use_sample_straight_edges_get, CurveProfile_use_sample_straight_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CurveProfile_use_sample_even_lengths = {
	{(PropertyRNA *)&rna_CurveProfile_points, (PropertyRNA *)&rna_CurveProfile_use_sample_straight_edges,
	-1, "use_sample_even_lengths", 3, 0, 0, 0, 0, "Sample Even Lengths",
	"Sample edges with even lengths",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfile_use_sample_even_lengths_get, CurveProfile_use_sample_even_lengths_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_CurveProfile_points = {
	{(PropertyRNA *)&rna_CurveProfile_segments, (PropertyRNA *)&rna_CurveProfile_use_sample_even_lengths,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Profile control points",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_CurveProfilePoints},
	CurveProfile_points_begin, CurveProfile_points_next, CurveProfile_points_end, CurveProfile_points_get, CurveProfile_points_length, CurveProfile_points_lookup_int, nullptr, nullptr, &RNA_CurveProfilePoint
};

CollectionPropertyRNA rna_CurveProfile_segments = {
	{nullptr, (PropertyRNA *)&rna_CurveProfile_points,
	-1, "segments", 0, 0, 0, 8, 0, "Segments",
	"Segments sampled from control points",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfile_segments_begin, CurveProfile_segments_next, CurveProfile_segments_end, CurveProfile_segments_get, CurveProfile_segments_length, CurveProfile_segments_lookup_int, nullptr, nullptr, &RNA_CurveProfilePoint
};

FunctionRNA rna_CurveProfile_update_func = {
	{(FunctionRNA *)&rna_CurveProfile_reset_view_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"update", 0, "Refresh internal data, remove doubles and clip points",
	CurveProfile_update_call,
	nullptr
};

FunctionRNA rna_CurveProfile_reset_view_func = {
	{(FunctionRNA *)&rna_CurveProfile_initialize_func, (FunctionRNA *)&rna_CurveProfile_update_func,
	nullptr,
	{nullptr, nullptr}},
	"reset_view", 0, "Reset the curve profile grid to its clipping size",
	CurveProfile_reset_view_call,
	nullptr
};

IntPropertyRNA rna_CurveProfile_initialize_totsegments = {
	{nullptr, nullptr,
	-1, "totsegments", 262147, 0, 1, 0, 0, "",
	"The number of segment values to initialize the segments table with",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, 1000, 1, 1, nullptr
};

FunctionRNA rna_CurveProfile_initialize_func = {
	{(FunctionRNA *)&rna_CurveProfile_evaluate_func, (FunctionRNA *)&rna_CurveProfile_reset_view_func,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfile_initialize_totsegments, (PropertyRNA *)&rna_CurveProfile_initialize_totsegments}},
	"initialize", 0, "Set the number of display segments and fill tables",
	CurveProfile_initialize_call,
	nullptr
};

FloatPropertyRNA rna_CurveProfile_evaluate_length_portion = {
	{(PropertyRNA *)&rna_CurveProfile_evaluate_location, nullptr,
	-1, "length_portion", 3, 0, 1, 0, 0, "Length Portion",
	"Portion of the path length to travel before evaluation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, nullptr
};

static float rna_CurveProfile_evaluate_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveProfile_evaluate_location = {
	{nullptr, (PropertyRNA *)&rna_CurveProfile_evaluate_length_portion,
	-1, "location", 3, 0, 2, 0, 0, "Location",
	"The location at the given portion of the profile",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 1.0f, 3, 0.0f, rna_CurveProfile_evaluate_location_default
};

FunctionRNA rna_CurveProfile_evaluate_func = {
	{nullptr, (FunctionRNA *)&rna_CurveProfile_initialize_func,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfile_evaluate_length_portion, (PropertyRNA *)&rna_CurveProfile_evaluate_location}},
	"evaluate", 16, "Evaluate the at the given portion of the path length",
	CurveProfile_evaluate_call,
	nullptr
};

StructRNA RNA_CurveProfile = {
	{(ContainerRNA *)&RNA_CurveProfilePoints, (ContainerRNA *)&RNA_CurveProfilePoint,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfile_rna_properties, (PropertyRNA *)&rna_CurveProfile_segments}},
	"CurveProfile", nullptr, nullptr, 516, nullptr, "CurveProfile",
	"Profile Path editor used to build a profile path",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveProfile_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CurveProfile_update_func, (FunctionRNA *)&rna_CurveProfile_evaluate_func}
};

/* Profile Point */
CollectionPropertyRNA rna_CurveProfilePoints_rna_properties = {
	{(PropertyRNA *)&rna_CurveProfilePoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoints_rna_properties_begin, CurveProfilePoints_rna_properties_next, CurveProfilePoints_rna_properties_end, CurveProfilePoints_rna_properties_get, nullptr, nullptr, CurveProfilePoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveProfilePoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_CurveProfilePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveProfilePoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_CurveProfilePoints_add_x = {
	{(PropertyRNA *)&rna_CurveProfilePoints_add_y, nullptr,
	-1, "x", 3, 0, 1, 0, 0, "X Position",
	"X Position for new point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CurveProfilePoints_add_y = {
	{(PropertyRNA *)&rna_CurveProfilePoints_add_point, (PropertyRNA *)&rna_CurveProfilePoints_add_x,
	-1, "y", 3, 0, 1, 0, 0, "Y Position",
	"Y Position for new point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_CurveProfilePoints_add_point = {
	{nullptr, (PropertyRNA *)&rna_CurveProfilePoints_add_y,
	-1, "point", 8388608, 0, 2, 0, 0, "",
	"New point",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CurveProfilePoint
};

FunctionRNA rna_CurveProfilePoints_add_func = {
	{(FunctionRNA *)&rna_CurveProfilePoints_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfilePoints_add_x, (PropertyRNA *)&rna_CurveProfilePoints_add_point}},
	"add", 0, "Add point to the profile",
	CurveProfilePoints_add_call,
	(PropertyRNA *)&rna_CurveProfilePoints_add_point
};

PointerPropertyRNA rna_CurveProfilePoints_remove_point = {
	{nullptr, nullptr,
	-1, "point", 262144, 0, 5, 0, 0, "",
	"Point to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_CurveProfilePoint
};

FunctionRNA rna_CurveProfilePoints_remove_func = {
	{nullptr, (FunctionRNA *)&rna_CurveProfilePoints_add_func,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfilePoints_remove_point, (PropertyRNA *)&rna_CurveProfilePoints_remove_point}},
	"remove", 16, "Delete point from the profile",
	CurveProfilePoints_remove_call,
	nullptr
};

StructRNA RNA_CurveProfilePoints = {
	{(ContainerRNA *)&RNA_LightProbe, (ContainerRNA *)&RNA_CurveProfile,
	nullptr,
	{(PropertyRNA *)&rna_CurveProfilePoints_rna_properties, (PropertyRNA *)&rna_CurveProfilePoints_rna_type}},
	"CurveProfilePoints", nullptr, nullptr, 516, nullptr, "Profile Point",
	"Collection of Profile Points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveProfilePoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CurveProfilePoints_add_func, (FunctionRNA *)&rna_CurveProfilePoints_remove_func}
};

