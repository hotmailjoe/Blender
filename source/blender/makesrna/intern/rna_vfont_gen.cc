
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

#include "rna_vfont.cc"
#include "rna_vfont_api.cc"

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

RNA_EXTERN_C StringPropertyRNA rna_VectorFont_filepath;
RNA_EXTERN_C PointerPropertyRNA rna_VectorFont_packed_file;

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


extern FunctionRNA rna_VectorFont_pack_func;
extern FunctionRNA rna_VectorFont_unpack_func;
extern EnumPropertyRNA rna_VectorFont_unpack_method;


RNA_EXTERN_C void VectorFont_filepath_get(PointerRNA *ptr, char *value)
{
    VFont *data = (VFont *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int VectorFont_filepath_length(PointerRNA *ptr)
{
    VFont *data = (VFont *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void VectorFont_filepath_set(PointerRNA *ptr, const char *value)
{
    VFont *data = (VFont *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C PointerRNA VectorFont_packed_file_get(PointerRNA *ptr)
{
    VFont *data = (VFont *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

RNA_EXTERN_C void VectorFont_pack_func(struct VFont *_self, Main *bmain, ReportList *reports)
{
	rna_VectorFont_pack(_self, bmain, reports);
}

static void VectorFont_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct VFont *_self;
	_self = (struct VFont *)_ptr->data;
	
	rna_VectorFont_pack(_self, CTX_data_main(C), reports);
}

RNA_EXTERN_C void VectorFont_unpack_func(struct VFont *_self, Main *bmain, ReportList *reports, int method)
{
	rna_VectorFont_unpack(_self, bmain, reports, method);
}

static void VectorFont_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct VFont *_self;
	int method;
	char *_data;
	
	_self = (struct VFont *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_VectorFont_unpack(_self, CTX_data_main(C), reports, method);
}

/* Repeated prototypes to detect errors */

void rna_VectorFont_pack(struct VFont *_self, Main *bmain, ReportList *reports);
void rna_VectorFont_unpack(struct VFont *_self, Main *bmain, ReportList *reports, int method);

/* Vector Font */
StringPropertyRNA rna_VectorFont_filepath = {
	{(PropertyRNA *)&rna_VectorFont_packed_file, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_VectorFont_reload_update, 291176448, rna_VectorFont_filepath_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VectorFont_filepath_get, VectorFont_filepath_length, VectorFont_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_VectorFont_packed_file = {
	{nullptr, (PropertyRNA *)&rna_VectorFont_filepath,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VectorFont_packed_file_get, nullptr, nullptr, nullptr,&RNA_PackedFile
};

FunctionRNA rna_VectorFont_pack_func = {
	{(FunctionRNA *)&rna_VectorFont_unpack_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"pack", 20, "Pack the font into the current blend file",
	VectorFont_pack_call,
	nullptr
};

EnumPropertyRNA rna_VectorFont_unpack_method = {
	{nullptr, nullptr,
	-1, "method", 3, 0, 0, 0, 0, "method",
	"How to unpack",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_unpack_method_items, 5, 5
};

FunctionRNA rna_VectorFont_unpack_func = {
	{nullptr, (FunctionRNA *)&rna_VectorFont_pack_func,
	nullptr,
	{(PropertyRNA *)&rna_VectorFont_unpack_method, (PropertyRNA *)&rna_VectorFont_unpack_method}},
	"unpack", 20, "Unpack the font to the samples filename",
	VectorFont_unpack_call,
	nullptr
};

StructRNA RNA_VectorFont = {
	{(ContainerRNA *)&RNA_VolumeGrid, (ContainerRNA *)&RNA_PreferencesExperimental,
	nullptr,
	{(PropertyRNA *)&rna_VectorFont_filepath, (PropertyRNA *)&rna_VectorFont_packed_file}},
	"VectorFont", nullptr, nullptr, 519, nullptr, "Vector Font",
	"Vector font for Text objects",
	"*", 700,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_VectorFont_pack_func, (FunctionRNA *)&rna_VectorFont_unpack_func}
};

