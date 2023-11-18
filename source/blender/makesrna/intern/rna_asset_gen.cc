
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

#include "rna_asset.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_AssetTag_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AssetTag_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_AssetTag_name;


RNA_EXTERN_C CollectionPropertyRNA rna_AssetMetaData_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AssetMetaData_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_AssetMetaData_author;
RNA_EXTERN_C StringPropertyRNA rna_AssetMetaData_description;
RNA_EXTERN_C StringPropertyRNA rna_AssetMetaData_copyright;
RNA_EXTERN_C StringPropertyRNA rna_AssetMetaData_license;
RNA_EXTERN_C CollectionPropertyRNA rna_AssetMetaData_tags;
RNA_EXTERN_C IntPropertyRNA rna_AssetMetaData_active_tag;
RNA_EXTERN_C StringPropertyRNA rna_AssetMetaData_catalog_id;
RNA_EXTERN_C StringPropertyRNA rna_AssetMetaData_catalog_simple_name;


RNA_EXTERN_C CollectionPropertyRNA rna_AssetTags_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AssetTags_rna_type;

extern FunctionRNA rna_AssetTags_new_func;
extern StringPropertyRNA rna_AssetTags_new_name;
extern BoolPropertyRNA rna_AssetTags_new_skip_if_exists;
extern PointerPropertyRNA rna_AssetTags_new_tag;

extern FunctionRNA rna_AssetTags_remove_func;
extern PointerPropertyRNA rna_AssetTags_remove_tag;



RNA_EXTERN_C CollectionPropertyRNA rna_AssetLibraryReference_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AssetLibraryReference_rna_type;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_PropertyGroup_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_PropertyGroup_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_PropertyGroup_name;

RNA_EXTERN_C PointerPropertyRNA rna_AssetHandle_file_data;


RNA_EXTERN_C CollectionPropertyRNA rna_AssetRepresentation_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AssetRepresentation_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_AssetRepresentation_name;
RNA_EXTERN_C PointerPropertyRNA rna_AssetRepresentation_metadata;
RNA_EXTERN_C EnumPropertyRNA rna_AssetRepresentation_id_type;
RNA_EXTERN_C PointerPropertyRNA rna_AssetRepresentation_local_id;
RNA_EXTERN_C StringPropertyRNA rna_AssetRepresentation_full_library_path;
RNA_EXTERN_C StringPropertyRNA rna_AssetRepresentation_full_path;


RNA_EXTERN_C CollectionPropertyRNA rna_AssetCatalogPath_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AssetCatalogPath_rna_type;

static PointerRNA AssetTag_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AssetTag_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetTag_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetTag_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetTag_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetTag_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetTag_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetTag_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AssetTag_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void AssetTag_name_get(PointerRNA *ptr, char *value)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int AssetTag_name_length(PointerRNA *ptr)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void AssetTag_name_set(PointerRNA *ptr, const char *value)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA AssetMetaData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AssetMetaData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetMetaData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetMetaData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetMetaData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetMetaData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetMetaData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetMetaData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AssetMetaData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void AssetMetaData_author_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_author_get(ptr, value);
}

RNA_EXTERN_C int AssetMetaData_author_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_author_length(ptr);
}

RNA_EXTERN_C void AssetMetaData_author_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_author_set(ptr, value);
}

RNA_EXTERN_C void AssetMetaData_description_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_description_get(ptr, value);
}

RNA_EXTERN_C int AssetMetaData_description_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_description_length(ptr);
}

RNA_EXTERN_C void AssetMetaData_description_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_description_set(ptr, value);
}

RNA_EXTERN_C void AssetMetaData_copyright_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_copyright_get(ptr, value);
}

RNA_EXTERN_C int AssetMetaData_copyright_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_copyright_length(ptr);
}

RNA_EXTERN_C void AssetMetaData_copyright_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_copyright_set(ptr, value);
}

RNA_EXTERN_C void AssetMetaData_license_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_license_get(ptr, value);
}

RNA_EXTERN_C int AssetMetaData_license_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_license_length(ptr);
}

RNA_EXTERN_C void AssetMetaData_license_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_license_set(ptr, value);
}

static PointerRNA AssetMetaData_tags_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_AssetTag, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void AssetMetaData_tags_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetMetaData_tags;

    rna_iterator_listbase_begin(iter, &data->tags, nullptr);

    if (iter->valid) {
        iter->ptr = AssetMetaData_tags_get(iter);
    }
}

RNA_EXTERN_C void AssetMetaData_tags_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = AssetMetaData_tags_get(iter);
    }
}

RNA_EXTERN_C void AssetMetaData_tags_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetMetaData_tags_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    AssetMetaData_tags_begin(&iter, ptr);

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
        if (found) { *r_ptr = AssetMetaData_tags_get(&iter); }
    }

    AssetMetaData_tags_end(&iter);

    return found;
}

RNA_EXTERN_C int AssetTag_name_length(PointerRNA *);
RNA_EXTERN_C void AssetTag_name_get(PointerRNA *, char *);

RNA_EXTERN_C int AssetMetaData_tags_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    AssetMetaData_tags_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = AssetTag_name_length(&iter.ptr);
            if (namelen < 1024) {
                AssetTag_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                AssetTag_name_get(&iter.ptr, name);
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
        AssetMetaData_tags_next(&iter);
    }
    AssetMetaData_tags_end(&iter);

    return found;
}

RNA_EXTERN_C int AssetMetaData_active_tag_get(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return (int)(data->active_tag);
}

RNA_EXTERN_C void AssetMetaData_active_tag_set(PointerRNA *ptr, int value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_AssetMetaData_active_tag_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->active_tag = (std::remove_reference_t<decltype(data->active_tag)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->active_tag = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C void AssetMetaData_catalog_id_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_catalog_id_get(ptr, value);
}

RNA_EXTERN_C int AssetMetaData_catalog_id_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_catalog_id_length(ptr);
}

RNA_EXTERN_C void AssetMetaData_catalog_id_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_catalog_id_set(ptr, value);
}

RNA_EXTERN_C void AssetMetaData_catalog_simple_name_get(PointerRNA *ptr, char *value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    BLI_assert(strlen(data->catalog_simple_name) < 64);
    strcpy(value, data->catalog_simple_name);
}

RNA_EXTERN_C int AssetMetaData_catalog_simple_name_length(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return strlen(data->catalog_simple_name);
}

static PointerRNA AssetTags_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AssetTags_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetTags_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetTags_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetTags_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetTags_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetTags_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetTags_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AssetTags_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA AssetLibraryReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AssetLibraryReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetLibraryReference_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetLibraryReference_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetLibraryReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetLibraryReference_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetLibraryReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetLibraryReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AssetLibraryReference_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA AssetHandle_file_data_get(PointerRNA *ptr)
{
    return rna_AssetHandle_file_data_get(ptr);
}

RNA_EXTERN_C void AssetHandle_file_data_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AssetHandle_file_data_set(ptr, value, reports);
}

static PointerRNA AssetRepresentation_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AssetRepresentation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetRepresentation_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetRepresentation_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetRepresentation_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetRepresentation_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetRepresentation_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetRepresentation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AssetRepresentation_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void AssetRepresentation_name_get(PointerRNA *ptr, char *value)
{
    rna_AssetRepresentation_name_get(ptr, value);
}

RNA_EXTERN_C int AssetRepresentation_name_length(PointerRNA *ptr)
{
    return rna_AssetRepresentation_name_length(ptr);
}

RNA_EXTERN_C PointerRNA AssetRepresentation_metadata_get(PointerRNA *ptr)
{
    return rna_AssetRepresentation_metadata_get(ptr);
}

RNA_EXTERN_C int AssetRepresentation_id_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_AssetRepresentation_id_type_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA AssetRepresentation_local_id_get(PointerRNA *ptr)
{
    return rna_AssetRepresentation_local_id_get(ptr);
}

RNA_EXTERN_C void AssetRepresentation_full_library_path_get(PointerRNA *ptr, char *value)
{
    rna_AssetRepresentation_full_library_path_get(ptr, value);
}

RNA_EXTERN_C int AssetRepresentation_full_library_path_length(PointerRNA *ptr)
{
    return rna_AssetRepresentation_full_library_path_length(ptr);
}

RNA_EXTERN_C void AssetRepresentation_full_path_get(PointerRNA *ptr, char *value)
{
    rna_AssetRepresentation_full_path_get(ptr, value);
}

RNA_EXTERN_C int AssetRepresentation_full_path_length(PointerRNA *ptr)
{
    return rna_AssetRepresentation_full_path_length(ptr);
}

static PointerRNA AssetCatalogPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AssetCatalogPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetCatalogPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetCatalogPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetCatalogPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetCatalogPath_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AssetCatalogPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AssetCatalogPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AssetCatalogPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}



RNA_EXTERN_C struct AssetTag *AssetTags_new_func(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, const char * name, bool skip_if_exists)
{
	return rna_AssetMetaData_tag_new(_selfid, _self, reports, name, skip_if_exists);
}

static void AssetTags_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AssetMetaData *_self;
	const char * name;
	bool skip_if_exists;
	struct AssetTag *tag;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AssetMetaData *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	skip_if_exists = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	tag = rna_AssetMetaData_tag_new(_selfid, _self, reports, name, skip_if_exists);
	*((struct AssetTag **)_retdata) = tag;
}

RNA_EXTERN_C void AssetTags_remove_func(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, struct PointerRNA *tag)
{
	rna_AssetMetaData_tag_remove(_selfid, _self, reports, tag);
}

static void AssetTags_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AssetMetaData *_self;
	struct PointerRNA *tag;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AssetMetaData *)_ptr->data;
	_data = (char *)_parms->data;
	tag = *((struct PointerRNA **)_data);
	
	rna_AssetMetaData_tag_remove(_selfid, _self, reports, tag);
}

/* Repeated prototypes to detect errors */

struct AssetTag *rna_AssetMetaData_tag_new(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, const char * name, bool skip_if_exists);
void rna_AssetMetaData_tag_remove(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, struct PointerRNA *tag);





/* Asset Tag */
CollectionPropertyRNA rna_AssetTag_rna_properties = {
	{(PropertyRNA *)&rna_AssetTag_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetTag_rna_properties_begin, AssetTag_rna_properties_next, AssetTag_rna_properties_end, AssetTag_rna_properties_get, nullptr, nullptr, AssetTag_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AssetTag_rna_type = {
	{(PropertyRNA *)&rna_AssetTag_name, (PropertyRNA *)&rna_AssetTag_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetTag_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_AssetTag_name = {
	{nullptr, (PropertyRNA *)&rna_AssetTag_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"The identifier that makes up this tag",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, rna_AssetTag_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetTag_name_get, AssetTag_name_length, AssetTag_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StructRNA RNA_AssetTag = {
	{(ContainerRNA *)&RNA_AssetMetaData, (ContainerRNA *)&RNA_AttributeGroup,
	nullptr,
	{(PropertyRNA *)&rna_AssetTag_rna_properties, (PropertyRNA *)&rna_AssetTag_name}},
	"AssetTag", nullptr, nullptr, 516, nullptr, "Asset Tag",
	"User defined tag (name token)",
	"*", 17,
	(PropertyRNA *)&rna_AssetTag_name, (PropertyRNA *)&rna_AssetTag_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_AssetTag_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Asset Data */
CollectionPropertyRNA rna_AssetMetaData_rna_properties = {
	{(PropertyRNA *)&rna_AssetMetaData_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_rna_properties_begin, AssetMetaData_rna_properties_next, AssetMetaData_rna_properties_end, AssetMetaData_rna_properties_get, nullptr, nullptr, AssetMetaData_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AssetMetaData_rna_type = {
	{(PropertyRNA *)&rna_AssetMetaData_author, (PropertyRNA *)&rna_AssetMetaData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_AssetMetaData_author = {
	{(PropertyRNA *)&rna_AssetMetaData_description, (PropertyRNA *)&rna_AssetMetaData_rna_type,
	-1, "author", 262145, 0, 0, 0, 0, "Author",
	"Name of the creator of the asset",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_AssetMetaData_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_author_get, AssetMetaData_author_length, AssetMetaData_author_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_AssetMetaData_description = {
	{(PropertyRNA *)&rna_AssetMetaData_copyright, (PropertyRNA *)&rna_AssetMetaData_author,
	-1, "description", 262145, 0, 0, 0, 0, "Description",
	"A description of the asset to be displayed for the user",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_AssetMetaData_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_description_get, AssetMetaData_description_length, AssetMetaData_description_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_AssetMetaData_copyright = {
	{(PropertyRNA *)&rna_AssetMetaData_license, (PropertyRNA *)&rna_AssetMetaData_description,
	-1, "copyright", 262145, 0, 0, 0, 0, "Copyright",
	"Copyright notice for this asset. An empty copyright notice does not necessarily indicate that this is copyright-free. Contact the author if any clarification is needed",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_AssetMetaData_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_copyright_get, AssetMetaData_copyright_length, AssetMetaData_copyright_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_AssetMetaData_license = {
	{(PropertyRNA *)&rna_AssetMetaData_tags, (PropertyRNA *)&rna_AssetMetaData_copyright,
	-1, "license", 262145, 0, 0, 0, 0, "License",
	"The type of license this asset is distributed under. An empty license name does not necessarily indicate that this is free of licensing terms. Contact the author if any clarification is needed",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_AssetMetaData_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_license_get, AssetMetaData_license_length, AssetMetaData_license_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

CollectionPropertyRNA rna_AssetMetaData_tags = {
	{(PropertyRNA *)&rna_AssetMetaData_active_tag, (PropertyRNA *)&rna_AssetMetaData_license,
	-1, "tags", 0, 0, 0, 0, 0, "Tags",
	"Custom tags (name tokens) for the asset, used for filtering and general asset management",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_AssetMetaData_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AssetTags},
	AssetMetaData_tags_begin, AssetMetaData_tags_next, AssetMetaData_tags_end, AssetMetaData_tags_get, nullptr, AssetMetaData_tags_lookup_int, AssetMetaData_tags_lookup_string, nullptr, &RNA_AssetTag
};

IntPropertyRNA rna_AssetMetaData_active_tag = {
	{(PropertyRNA *)&rna_AssetMetaData_catalog_id, (PropertyRNA *)&rna_AssetMetaData_tags,
	-1, "active_tag", 1, 0, 0, 4, 0, "Active Tag",
	"Index of the tag set for editing",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AssetMetaData, active_tag), (RawPropertyType)1, nullptr},
	AssetMetaData_active_tag_get, AssetMetaData_active_tag_set, nullptr, nullptr, rna_AssetMetaData_active_tag_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

StringPropertyRNA rna_AssetMetaData_catalog_id = {
	{(PropertyRNA *)&rna_AssetMetaData_catalog_simple_name, (PropertyRNA *)&rna_AssetMetaData_active_tag,
	-1, "catalog_id", 4456449, 0, 0, 0, 0, "Catalog UUID",
	"Identifier for the asset\'s catalog, used by Blender to look up the asset\'s catalog path. Must be a UUID according to RFC4122",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_AssetMetaData_catalog_id_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_catalog_id_get, AssetMetaData_catalog_id_length, AssetMetaData_catalog_id_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_AssetMetaData_catalog_simple_name = {
	{nullptr, (PropertyRNA *)&rna_AssetMetaData_catalog_id,
	-1, "catalog_simple_name", 262144, 0, 0, 0, 0, "Catalog Simple Name",
	"Simple name of the asset\'s catalog, for debugging and data recovery purposes",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetMetaData_catalog_simple_name_get, AssetMetaData_catalog_simple_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StructRNA RNA_AssetMetaData = {
	{(ContainerRNA *)&RNA_AssetTags, (ContainerRNA *)&RNA_AssetTag,
	nullptr,
	{(PropertyRNA *)&rna_AssetMetaData_rna_properties, (PropertyRNA *)&rna_AssetMetaData_catalog_simple_name}},
	"AssetMetaData", nullptr, nullptr, 644, nullptr, "Asset Data",
	"Additional data stored for an asset data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AssetMetaData_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_AssetMetaData_path,
	nullptr,
	nullptr,
	nullptr,
	rna_AssetMetaData_idprops,
	{nullptr, nullptr}
};

/* Asset Tags */
CollectionPropertyRNA rna_AssetTags_rna_properties = {
	{(PropertyRNA *)&rna_AssetTags_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetTags_rna_properties_begin, AssetTags_rna_properties_next, AssetTags_rna_properties_end, AssetTags_rna_properties_get, nullptr, nullptr, AssetTags_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AssetTags_rna_type = {
	{nullptr, (PropertyRNA *)&rna_AssetTags_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetTags_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_AssetTags_new_name = {
	{(PropertyRNA *)&rna_AssetTags_new_skip_if_exists, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_AssetTags_new_skip_if_exists = {
	{(PropertyRNA *)&rna_AssetTags_new_tag, (PropertyRNA *)&rna_AssetTags_new_name,
	-1, "skip_if_exists", 1, 0, 0, 0, 0, "Skip if Exists",
	"Do not add a new tag if one of the same type already exists",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_AssetTags_new_tag = {
	{nullptr, (PropertyRNA *)&rna_AssetTags_new_skip_if_exists,
	-1, "tag", 8388608, 0, 2, 0, 0, "",
	"New tag",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AssetTag
};

FunctionRNA rna_AssetTags_new_func = {
	{(FunctionRNA *)&rna_AssetTags_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_AssetTags_new_name, (PropertyRNA *)&rna_AssetTags_new_tag}},
	"new", 2064, "Add a new tag to this asset",
	AssetTags_new_call,
	(PropertyRNA *)&rna_AssetTags_new_tag
};

PointerPropertyRNA rna_AssetTags_remove_tag = {
	{nullptr, nullptr,
	-1, "tag", 262144, 0, 5, 0, 0, "",
	"Removed tag",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AssetTag
};

FunctionRNA rna_AssetTags_remove_func = {
	{nullptr, (FunctionRNA *)&rna_AssetTags_new_func,
	nullptr,
	{(PropertyRNA *)&rna_AssetTags_remove_tag, (PropertyRNA *)&rna_AssetTags_remove_tag}},
	"remove", 2064, "Remove an existing tag from this asset",
	AssetTags_remove_call,
	nullptr
};

StructRNA RNA_AssetTags = {
	{(ContainerRNA *)&RNA_AssetLibraryReference, (ContainerRNA *)&RNA_AssetMetaData,
	nullptr,
	{(PropertyRNA *)&rna_AssetTags_rna_properties, (PropertyRNA *)&rna_AssetTags_rna_type}},
	"AssetTags", nullptr, nullptr, 516, nullptr, "Asset Tags",
	"Collection of custom asset tags",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AssetTags_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_AssetTags_new_func, (FunctionRNA *)&rna_AssetTags_remove_func}
};

/* Asset Library Reference */
CollectionPropertyRNA rna_AssetLibraryReference_rna_properties = {
	{(PropertyRNA *)&rna_AssetLibraryReference_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetLibraryReference_rna_properties_begin, AssetLibraryReference_rna_properties_next, AssetLibraryReference_rna_properties_end, AssetLibraryReference_rna_properties_get, nullptr, nullptr, AssetLibraryReference_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AssetLibraryReference_rna_type = {
	{nullptr, (PropertyRNA *)&rna_AssetLibraryReference_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetLibraryReference_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_AssetLibraryReference = {
	{(ContainerRNA *)&RNA_AssetHandle, (ContainerRNA *)&RNA_AssetTags,
	nullptr,
	{(PropertyRNA *)&rna_AssetLibraryReference_rna_properties, (PropertyRNA *)&rna_AssetLibraryReference_rna_type}},
	"AssetLibraryReference", nullptr, nullptr, 516, nullptr, "Asset Library Reference",
	"Identifier to refer to the asset library",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AssetLibraryReference_rna_properties,
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

/* Asset Handle */
PointerPropertyRNA rna_AssetHandle_file_data = {
	{nullptr, nullptr,
	-1, "file_data", 8388609, 0, 0, 0, 0, "File Entry",
	"TEMPORARY, DO NOT USE - File data used to refer to the asset",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetHandle_file_data_get, AssetHandle_file_data_set, nullptr, nullptr,&RNA_FileSelectEntry
};

StructRNA RNA_AssetHandle = {
	{(ContainerRNA *)&RNA_AssetRepresentation, (ContainerRNA *)&RNA_AssetLibraryReference,
	nullptr,
	{(PropertyRNA *)&rna_AssetHandle_file_data, (PropertyRNA *)&rna_AssetHandle_file_data}},
	"AssetHandle", nullptr, nullptr, 516, nullptr, "Asset Handle",
	"Reference to some asset",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	nullptr,
	rna_PropertyGroup_refine,
	nullptr,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	nullptr,
	rna_PropertyGroup_idprops,
	{nullptr, nullptr}
};

/* Asset Representation */
CollectionPropertyRNA rna_AssetRepresentation_rna_properties = {
	{(PropertyRNA *)&rna_AssetRepresentation_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_rna_properties_begin, AssetRepresentation_rna_properties_next, AssetRepresentation_rna_properties_end, AssetRepresentation_rna_properties_get, nullptr, nullptr, AssetRepresentation_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AssetRepresentation_rna_type = {
	{(PropertyRNA *)&rna_AssetRepresentation_name, (PropertyRNA *)&rna_AssetRepresentation_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_AssetRepresentation_name = {
	{(PropertyRNA *)&rna_AssetRepresentation_metadata, (PropertyRNA *)&rna_AssetRepresentation_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILENAME | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_name_get, AssetRepresentation_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_AssetRepresentation_metadata = {
	{(PropertyRNA *)&rna_AssetRepresentation_id_type, (PropertyRNA *)&rna_AssetRepresentation_name,
	-1, "metadata", 8388608, 0, 0, 0, 0, "Asset Metadata",
	"Additional information about the asset",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_metadata_get, nullptr, nullptr, nullptr,&RNA_AssetMetaData
};

EnumPropertyRNA rna_AssetRepresentation_id_type = {
	{(PropertyRNA *)&rna_AssetRepresentation_local_id, (PropertyRNA *)&rna_AssetRepresentation_metadata,
	-1, "id_type", 0, 0, 0, 0, 0, "Data-block Type",
	"The type of the data-block, if the asset represents one (\'NONE\' otherwise)",
	0, "ID",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_id_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 38, 17217
};

PointerPropertyRNA rna_AssetRepresentation_local_id = {
	{(PropertyRNA *)&rna_AssetRepresentation_full_library_path, (PropertyRNA *)&rna_AssetRepresentation_id_type,
	-1, "local_id", 8388736, 0, 0, 0, 0, "",
	"The local data-block this asset represents; only valid if that is a data-block in this file",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_local_id_get, nullptr, nullptr, nullptr,&RNA_ID
};

StringPropertyRNA rna_AssetRepresentation_full_library_path = {
	{(PropertyRNA *)&rna_AssetRepresentation_full_path, (PropertyRNA *)&rna_AssetRepresentation_local_id,
	-1, "full_library_path", 262144, 0, 0, 0, 0, "Full Library Path",
	"Absolute path to the .blend file containing this asset",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILENAME | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_full_library_path_get, AssetRepresentation_full_library_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_AssetRepresentation_full_path = {
	{nullptr, (PropertyRNA *)&rna_AssetRepresentation_full_library_path,
	-1, "full_path", 262144, 0, 0, 0, 0, "Full Path",
	"Absolute path to the .blend file containing this asset extended with the path of the asset inside the file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILENAME | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetRepresentation_full_path_get, AssetRepresentation_full_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_AssetRepresentation = {
	{(ContainerRNA *)&RNA_AssetCatalogPath, (ContainerRNA *)&RNA_AssetHandle,
	nullptr,
	{(PropertyRNA *)&rna_AssetRepresentation_rna_properties, (PropertyRNA *)&rna_AssetRepresentation_full_path}},
	"AssetRepresentation", nullptr, nullptr, 516, nullptr, "Asset Representation",
	"Information about an entity that makes it possible for the asset system to deal with the entity as asset",
	"*", 17,
	(PropertyRNA *)&rna_AssetRepresentation_name, (PropertyRNA *)&rna_AssetRepresentation_rna_properties,
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

/* Catalog Path */
CollectionPropertyRNA rna_AssetCatalogPath_rna_properties = {
	{(PropertyRNA *)&rna_AssetCatalogPath_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetCatalogPath_rna_properties_begin, AssetCatalogPath_rna_properties_next, AssetCatalogPath_rna_properties_end, AssetCatalogPath_rna_properties_get, nullptr, nullptr, AssetCatalogPath_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AssetCatalogPath_rna_type = {
	{nullptr, (PropertyRNA *)&rna_AssetCatalogPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AssetCatalogPath_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_AssetCatalogPath = {
	{(ContainerRNA *)&RNA_BoidRule, (ContainerRNA *)&RNA_AssetRepresentation,
	nullptr,
	{(PropertyRNA *)&rna_AssetCatalogPath_rna_properties, (PropertyRNA *)&rna_AssetCatalogPath_rna_type}},
	"AssetCatalogPath", nullptr, nullptr, 516, nullptr, "Catalog Path",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AssetCatalogPath_rna_properties,
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

