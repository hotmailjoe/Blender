
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

#include "rna_usd.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_USDHook_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_USDHook_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_USDHook_bl_idname;
RNA_EXTERN_C StringPropertyRNA rna_USDHook_bl_label;
RNA_EXTERN_C StringPropertyRNA rna_USDHook_bl_description;

static PointerRNA USDHook_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void USDHook_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_USDHook_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = USDHook_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void USDHook_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = USDHook_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void USDHook_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int USDHook_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA USDHook_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void USDHook_bl_idname_get(PointerRNA *ptr, char *value)
{
    USDHook *data = (USDHook *)(ptr->data);
    BLI_assert(strlen(data->idname) < sizeof(data->idname));
    strcpy(value, data->idname);
}

RNA_EXTERN_C int USDHook_bl_idname_length(PointerRNA *ptr)
{
    USDHook *data = (USDHook *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void USDHook_bl_idname_set(PointerRNA *ptr, const char *value)
{
    USDHook *data = (USDHook *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, sizeof(data->idname));
}

RNA_EXTERN_C void USDHook_bl_label_get(PointerRNA *ptr, char *value)
{
    USDHook *data = (USDHook *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

RNA_EXTERN_C int USDHook_bl_label_length(PointerRNA *ptr)
{
    USDHook *data = (USDHook *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void USDHook_bl_label_set(PointerRNA *ptr, const char *value)
{
    USDHook *data = (USDHook *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, sizeof(data->name));
}

RNA_EXTERN_C void USDHook_bl_description_get(PointerRNA *ptr, char *value)
{
    USDHook *data = (USDHook *)(ptr->data);
    BLI_assert(strlen(data->description) < 1024);
    strcpy(value, data->description);
}

RNA_EXTERN_C int USDHook_bl_description_length(PointerRNA *ptr)
{
    USDHook *data = (USDHook *)(ptr->data);
    return strlen(data->description);
}

RNA_EXTERN_C void USDHook_bl_description_set(PointerRNA *ptr, const char *value)
{
    USDHook *data = (USDHook *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 1024);
}


/* USD Hook */
CollectionPropertyRNA rna_USDHook_rna_properties = {
	{(PropertyRNA *)&rna_USDHook_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	USDHook_rna_properties_begin, USDHook_rna_properties_next, USDHook_rna_properties_end, USDHook_rna_properties_get, nullptr, nullptr, USDHook_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_USDHook_rna_type = {
	{(PropertyRNA *)&rna_USDHook_bl_idname, (PropertyRNA *)&rna_USDHook_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	USDHook_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_USDHook_bl_idname = {
	{(PropertyRNA *)&rna_USDHook_bl_label, (PropertyRNA *)&rna_USDHook_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	USDHook_bl_idname_get, USDHook_bl_idname_length, USDHook_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_USDHook_bl_label = {
	{(PropertyRNA *)&rna_USDHook_bl_description, (PropertyRNA *)&rna_USDHook_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "UI Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	USDHook_bl_label_get, USDHook_bl_label_length, USDHook_bl_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_USDHook_bl_description = {
	{nullptr, (PropertyRNA *)&rna_USDHook_bl_label,
	-1, "bl_description", 262193, 0, 0, 0, 0, "Description",
	"A short description of the USD hook",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	USDHook_bl_description_get, USDHook_bl_description_length, USDHook_bl_description_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StructRNA RNA_USDHook = {
	{(ContainerRNA *)&RNA_ThemeFontStyle, (ContainerRNA *)&RNA_AssetShelf,
	nullptr,
	{(PropertyRNA *)&rna_USDHook_rna_properties, (PropertyRNA *)&rna_USDHook_bl_description}},
	"USDHook", nullptr, nullptr, 516, nullptr, "USD Hook",
	"Defines callback functions to extend USD IO",
	"*", 17,
	(PropertyRNA *)&rna_USDHook_bl_label, (PropertyRNA *)&rna_USDHook_rna_properties,
	nullptr,
	nullptr,
	rna_USDHook_refine,
	nullptr,
	rna_USDHook_register,
	rna_USDHook_unregister,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

