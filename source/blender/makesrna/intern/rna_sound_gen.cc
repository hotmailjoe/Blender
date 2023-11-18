
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

#include "rna_sound.cc"
#include "rna_sound_api.cc"

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

RNA_EXTERN_C StringPropertyRNA rna_Sound_filepath;
RNA_EXTERN_C PointerPropertyRNA rna_Sound_packed_file;
RNA_EXTERN_C BoolPropertyRNA rna_Sound_use_memory_cache;
RNA_EXTERN_C BoolPropertyRNA rna_Sound_use_mono;
RNA_EXTERN_C IntPropertyRNA rna_Sound_samplerate;
RNA_EXTERN_C EnumPropertyRNA rna_Sound_channels;

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


extern FunctionRNA rna_Sound_pack_func;
extern FunctionRNA rna_Sound_unpack_func;
extern EnumPropertyRNA rna_Sound_unpack_method;


RNA_EXTERN_C void Sound_filepath_get(PointerRNA *ptr, char *value)
{
    bSound *data = (bSound *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int Sound_filepath_length(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void Sound_filepath_set(PointerRNA *ptr, const char *value)
{
    bSound *data = (bSound *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

RNA_EXTERN_C PointerRNA Sound_packed_file_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

RNA_EXTERN_C bool Sound_use_memory_cache_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void Sound_use_memory_cache_set(PointerRNA *ptr, bool value)
{
    bSound *data = (bSound *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C bool Sound_use_mono_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void Sound_use_mono_set(PointerRNA *ptr, bool value)
{
    bSound *data = (bSound *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C int Sound_samplerate_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return (int)(data->samplerate);
}

RNA_EXTERN_C int Sound_channels_get(PointerRNA *ptr)
{
    bSound *data = (bSound *)(ptr->data);
    return (int)(data->audio_channels);
}

RNA_EXTERN_C void Sound_pack_func(struct bSound *_self, Main *bmain, ReportList *reports)
{
	rna_Sound_pack(_self, bmain, reports);
}

static void Sound_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bSound *_self;
	_self = (struct bSound *)_ptr->data;
	
	rna_Sound_pack(_self, CTX_data_main(C), reports);
}

RNA_EXTERN_C void Sound_unpack_func(struct bSound *_self, Main *bmain, ReportList *reports, int method)
{
	rna_Sound_unpack(_self, bmain, reports, method);
}

static void Sound_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bSound *_self;
	int method;
	char *_data;
	
	_self = (struct bSound *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_Sound_unpack(_self, CTX_data_main(C), reports, method);
}

/* Repeated prototypes to detect errors */

void rna_Sound_pack(struct bSound *_self, Main *bmain, ReportList *reports);
void rna_Sound_unpack(struct bSound *_self, Main *bmain, ReportList *reports, int method);

/* Sound */
StringPropertyRNA rna_Sound_filepath = {
	{(PropertyRNA *)&rna_Sound_packed_file, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Sound sample file used by this Sound data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Sound_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sound_filepath_get, Sound_filepath_length, Sound_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_Sound_packed_file = {
	{(PropertyRNA *)&rna_Sound_use_memory_cache, (PropertyRNA *)&rna_Sound_filepath,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sound_packed_file_get, nullptr, nullptr, nullptr,&RNA_PackedFile
};

BoolPropertyRNA rna_Sound_use_memory_cache = {
	{(PropertyRNA *)&rna_Sound_use_mono, (PropertyRNA *)&rna_Sound_packed_file,
	-1, "use_memory_cache", 3, 0, 0, 0, 0, "Caching",
	"The sound file is decoded and loaded into RAM",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Sound_caching_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sound_use_memory_cache_get, Sound_use_memory_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sound_use_mono = {
	{(PropertyRNA *)&rna_Sound_samplerate, (PropertyRNA *)&rna_Sound_use_memory_cache,
	-1, "use_mono", 3, 0, 0, 0, 0, "Mono",
	"If the file contains multiple audio channels they are rendered to a single one",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Sound_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sound_use_mono_get, Sound_use_mono_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Sound_samplerate = {
	{(PropertyRNA *)&rna_Sound_channels, (PropertyRNA *)&rna_Sound_use_mono,
	-1, "samplerate", 2, 0, 0, 4, 0, "Sample Rate",
	"Sample rate of the audio in Hz",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bSound, samplerate), (RawPropertyType)0, nullptr},
	Sound_samplerate_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_Sound_channels_items[10] = {
	{0, "INVALID", 0, "Invalid", "Invalid"},
	{1, "MONO", 0, "Mono", "Mono"},
	{2, "STEREO", 0, "Stereo", "Stereo"},
	{3, "STEREO_LFE", 0, "Stereo LFE", "Stereo FX"},
	{4, "CHANNELS_4", 0, "4 Channels", "4 Channels"},
	{5, "CHANNELS_5", 0, "5 Channels", "5 Channels"},
	{6, "SURROUND_51", 0, "5.1 Surround", "5.1 Surround"},
	{7, "SURROUND_61", 0, "6.1 Surround", "6.1 Surround"},
	{8, "SURROUND_71", 0, "7.1 Surround", "7.1 Surround"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Sound_channels = {
	{nullptr, (PropertyRNA *)&rna_Sound_samplerate,
	-1, "channels", 2, 0, 0, 4, 0, "Audio channels",
	"Definition of audio channels",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bSound, audio_channels), (RawPropertyType)0, nullptr},
	Sound_channels_get, nullptr, nullptr, nullptr, nullptr, rna_Sound_channels_items, 9, 0
};

FunctionRNA rna_Sound_pack_func = {
	{(FunctionRNA *)&rna_Sound_unpack_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"pack", 20, "Pack the sound into the current blend file",
	Sound_pack_call,
	nullptr
};

EnumPropertyRNA rna_Sound_unpack_method = {
	{nullptr, nullptr,
	-1, "method", 3, 0, 0, 0, 0, "method",
	"How to unpack",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_unpack_method_items, 5, 5
};

FunctionRNA rna_Sound_unpack_func = {
	{nullptr, (FunctionRNA *)&rna_Sound_pack_func,
	nullptr,
	{(PropertyRNA *)&rna_Sound_unpack_method, (PropertyRNA *)&rna_Sound_unpack_method}},
	"unpack", 20, "Unpack the sound to the samples filename",
	Sound_unpack_call,
	nullptr
};

StructRNA RNA_Sound = {
	{(ContainerRNA *)&RNA_UILayout, (ContainerRNA *)&RNA_TimelineMarker,
	nullptr,
	{(PropertyRNA *)&rna_Sound_filepath, (PropertyRNA *)&rna_Sound_channels}},
	"Sound", nullptr, nullptr, 519, nullptr, "Sound",
	"Sound data-block referencing an external or packed sound file",
	"*", 114,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Sound_pack_func, (FunctionRNA *)&rna_Sound_unpack_func}
};

