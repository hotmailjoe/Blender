
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

#include "rna_timeline.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_TimelineMarker_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_TimelineMarker_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_TimelineMarker_name;
RNA_EXTERN_C IntPropertyRNA rna_TimelineMarker_frame;
RNA_EXTERN_C BoolPropertyRNA rna_TimelineMarker_select;
RNA_EXTERN_C PointerPropertyRNA rna_TimelineMarker_camera;

static PointerRNA TimelineMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void TimelineMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TimelineMarker_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TimelineMarker_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TimelineMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TimelineMarker_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TimelineMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int TimelineMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA TimelineMarker_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void TimelineMarker_name_get(PointerRNA *ptr, char *value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int TimelineMarker_name_length(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void TimelineMarker_name_set(PointerRNA *ptr, const char *value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C int TimelineMarker_frame_get(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return (int)(data->frame);
}

RNA_EXTERN_C void TimelineMarker_frame_set(PointerRNA *ptr, int value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
#ifdef __cplusplus
    data->frame = (std::remove_reference_t<decltype(data->frame)>)value;
#else
    data->frame = value;
#endif
}

RNA_EXTERN_C bool TimelineMarker_select_get(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void TimelineMarker_select_set(PointerRNA *ptr, bool value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C PointerRNA TimelineMarker_camera_get(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera);
}

RNA_EXTERN_C void TimelineMarker_camera_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->camera = value.data;
}


/* Marker */
CollectionPropertyRNA rna_TimelineMarker_rna_properties = {
	{(PropertyRNA *)&rna_TimelineMarker_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TimelineMarker_rna_properties_begin, TimelineMarker_rna_properties_next, TimelineMarker_rna_properties_end, TimelineMarker_rna_properties_get, nullptr, nullptr, TimelineMarker_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_TimelineMarker_rna_type = {
	{(PropertyRNA *)&rna_TimelineMarker_name, (PropertyRNA *)&rna_TimelineMarker_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TimelineMarker_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_TimelineMarker_name = {
	{(PropertyRNA *)&rna_TimelineMarker_frame, (PropertyRNA *)&rna_TimelineMarker_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_TimelineMarker_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TimelineMarker_name_get, TimelineMarker_name_length, TimelineMarker_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

IntPropertyRNA rna_TimelineMarker_frame = {
	{(PropertyRNA *)&rna_TimelineMarker_select, (PropertyRNA *)&rna_TimelineMarker_name,
	-1, "frame", 3, 0, 0, 4, 0, "Frame",
	"The frame on which the timeline marker appears",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_TimelineMarker_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TimeMarker, frame), (RawPropertyType)0, nullptr},
	TimelineMarker_frame_get, TimelineMarker_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_TimelineMarker_select = {
	{(PropertyRNA *)&rna_TimelineMarker_camera, (PropertyRNA *)&rna_TimelineMarker_frame,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Marker selection state",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_TimelineMarker_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TimelineMarker_select_get, TimelineMarker_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_TimelineMarker_camera = {
	{nullptr, (PropertyRNA *)&rna_TimelineMarker_select,
	-1, "camera", 9437313, 1, 0, 0, 0, "Camera",
	"Camera that becomes active on this frame",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_TimelineMarker_camera_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TimelineMarker_camera_get, TimelineMarker_camera_set, nullptr, nullptr,&RNA_Object
};

StructRNA RNA_TimelineMarker = {
	{(ContainerRNA *)&RNA_Sound, (ContainerRNA *)&RNA_Text,
	nullptr,
	{(PropertyRNA *)&rna_TimelineMarker_rna_properties, (PropertyRNA *)&rna_TimelineMarker_camera}},
	"TimelineMarker", nullptr, nullptr, 516, nullptr, "Marker",
	"Marker for noting points in the timeline",
	"*", 17,
	(PropertyRNA *)&rna_TimelineMarker_name, (PropertyRNA *)&rna_TimelineMarker_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rna_TimelineMarker_idprops,
	{nullptr, nullptr}
};

