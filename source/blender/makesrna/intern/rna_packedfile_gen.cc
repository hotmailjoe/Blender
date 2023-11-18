
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

#include "rna_packedfile.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_PackedFile_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PackedFile_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_PackedFile_size;
RNA_EXTERN_C StringPropertyRNA rna_PackedFile_data;

static PointerRNA PackedFile_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PackedFile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PackedFile_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PackedFile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PackedFile_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PackedFile_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PackedFile_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PackedFile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PackedFile_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PackedFile_size_get(PointerRNA *ptr)
{
    PackedFile *data = (PackedFile *)(ptr->data);
    return (int)(data->size);
}

RNA_EXTERN_C void PackedFile_data_get(PointerRNA *ptr, char *value)
{
    rna_PackedImage_data_get(ptr, value);
}

RNA_EXTERN_C int PackedFile_data_length(PointerRNA *ptr)
{
    return rna_PackedImage_data_len(ptr);
}


/* Packed File */
CollectionPropertyRNA rna_PackedFile_rna_properties = {
	{(PropertyRNA *)&rna_PackedFile_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PackedFile_rna_properties_begin, PackedFile_rna_properties_next, PackedFile_rna_properties_end, PackedFile_rna_properties_get, nullptr, nullptr, PackedFile_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PackedFile_rna_type = {
	{(PropertyRNA *)&rna_PackedFile_size, (PropertyRNA *)&rna_PackedFile_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PackedFile_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_PackedFile_size = {
	{(PropertyRNA *)&rna_PackedFile_data, (PropertyRNA *)&rna_PackedFile_rna_type,
	-1, "size", 2, 0, 0, 4, 0, "Size",
	"Size of packed file in bytes",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PackedFile, size), (RawPropertyType)0, nullptr},
	PackedFile_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_PackedFile_data = {
	{nullptr, (PropertyRNA *)&rna_PackedFile_size,
	-1, "data", 262144, 0, 0, 0, 0, "Data",
	"Raw data (bytes, exact content of the embedded file)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_BYTESTRING | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PackedFile_data_get, PackedFile_data_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_PackedFile = {
	{(ContainerRNA *)&RNA_PaletteColor, (ContainerRNA *)&RNA_Depsgraph,
	nullptr,
	{(PropertyRNA *)&rna_PackedFile_rna_properties, (PropertyRNA *)&rna_PackedFile_data}},
	"PackedFile", nullptr, nullptr, 516, nullptr, "Packed File",
	"External file packed into the .blend file",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PackedFile_rna_properties,
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

