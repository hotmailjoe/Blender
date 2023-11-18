
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

#include "rna_speaker.cc"

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

RNA_EXTERN_C BoolPropertyRNA rna_Speaker_muted;
RNA_EXTERN_C PointerPropertyRNA rna_Speaker_sound;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_volume_max;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_volume_min;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_distance_max;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_distance_reference;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_attenuation;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_cone_angle_outer;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_cone_angle_inner;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_cone_volume_outer;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_volume;
RNA_EXTERN_C FloatPropertyRNA rna_Speaker_pitch;
RNA_EXTERN_C PointerPropertyRNA rna_Speaker_animation_data;

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


RNA_EXTERN_C bool Speaker_muted_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Speaker_muted_set(PointerRNA *ptr, bool value)
{
    Speaker *data = (Speaker *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C PointerRNA Speaker_sound_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Sound, data->sound);
}

RNA_EXTERN_C void Speaker_sound_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Speaker *data = (Speaker *)(ptr->data);

    if (data->sound) {
        id_us_min((ID *)data->sound);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->sound = value.data;
}

RNA_EXTERN_C float Speaker_volume_max_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume_max);
}

RNA_EXTERN_C void Speaker_volume_max_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->volume_max = (std::remove_reference_t<decltype(data->volume_max)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->volume_max = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Speaker_volume_min_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume_min);
}

RNA_EXTERN_C void Speaker_volume_min_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->volume_min = (std::remove_reference_t<decltype(data->volume_min)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->volume_min = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Speaker_distance_max_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->distance_max);
}

RNA_EXTERN_C void Speaker_distance_max_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->distance_max = (std::remove_reference_t<decltype(data->distance_max)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->distance_max = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Speaker_distance_reference_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->distance_reference);
}

RNA_EXTERN_C void Speaker_distance_reference_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->distance_reference = (std::remove_reference_t<decltype(data->distance_reference)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->distance_reference = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Speaker_attenuation_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->attenuation);
}

RNA_EXTERN_C void Speaker_attenuation_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->attenuation = (std::remove_reference_t<decltype(data->attenuation)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->attenuation = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Speaker_cone_angle_outer_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_angle_outer);
}

RNA_EXTERN_C void Speaker_cone_angle_outer_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->cone_angle_outer = (std::remove_reference_t<decltype(data->cone_angle_outer)>)CLAMPIS(value, 0.0f, 360.0f);
#else
    data->cone_angle_outer = CLAMPIS(value, 0.0f, 360.0f);
#endif
}

RNA_EXTERN_C float Speaker_cone_angle_inner_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_angle_inner);
}

RNA_EXTERN_C void Speaker_cone_angle_inner_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->cone_angle_inner = (std::remove_reference_t<decltype(data->cone_angle_inner)>)CLAMPIS(value, 0.0f, 360.0f);
#else
    data->cone_angle_inner = CLAMPIS(value, 0.0f, 360.0f);
#endif
}

RNA_EXTERN_C float Speaker_cone_volume_outer_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_volume_outer);
}

RNA_EXTERN_C void Speaker_cone_volume_outer_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->cone_volume_outer = (std::remove_reference_t<decltype(data->cone_volume_outer)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->cone_volume_outer = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Speaker_volume_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume);
}

RNA_EXTERN_C void Speaker_volume_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->volume = (std::remove_reference_t<decltype(data->volume)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->volume = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Speaker_pitch_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->pitch);
}

RNA_EXTERN_C void Speaker_pitch_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
#ifdef __cplusplus
    data->pitch = (std::remove_reference_t<decltype(data->pitch)>)CLAMPIS(value, 0.1000000015f, 10.0f);
#else
    data->pitch = CLAMPIS(value, 0.1000000015f, 10.0f);
#endif
}

RNA_EXTERN_C PointerRNA Speaker_animation_data_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}


/* Speaker */
BoolPropertyRNA rna_Speaker_muted = {
	{(PropertyRNA *)&rna_Speaker_sound, nullptr,
	-1, "muted", 1, 0, 0, 0, 0, "Mute",
	"Mute the speaker",
	0, "Sound",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Speaker_muted_get, Speaker_muted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Speaker_sound = {
	{(PropertyRNA *)&rna_Speaker_volume_max, (PropertyRNA *)&rna_Speaker_muted,
	-1, "sound", 8388801, 1, 0, 0, 0, "Sound",
	"Sound data-block used by this speaker",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Speaker_sound_get, Speaker_sound_set, nullptr, nullptr,&RNA_Sound
};

FloatPropertyRNA rna_Speaker_volume_max = {
	{(PropertyRNA *)&rna_Speaker_volume_min, (PropertyRNA *)&rna_Speaker_sound,
	-1, "volume_max", 1, 0, 0, 4, 0, "Maximum Volume",
	"Maximum volume, no matter how near the object is",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, volume_max), (RawPropertyType)5, nullptr},
	Speaker_volume_max_get, Speaker_volume_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Speaker_volume_min = {
	{(PropertyRNA *)&rna_Speaker_distance_max, (PropertyRNA *)&rna_Speaker_volume_max,
	-1, "volume_min", 1, 0, 0, 4, 0, "Minimum Volume",
	"Minimum volume, no matter how far away the object is",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, volume_min), (RawPropertyType)5, nullptr},
	Speaker_volume_min_get, Speaker_volume_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Speaker_distance_max = {
	{(PropertyRNA *)&rna_Speaker_distance_reference, (PropertyRNA *)&rna_Speaker_volume_min,
	-1, "distance_max", 1, 0, 0, 4, 0, "Maximum Distance",
	"Maximum distance for volume calculation, no matter how far away the object is",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, distance_max), (RawPropertyType)5, nullptr},
	Speaker_distance_max_get, Speaker_distance_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, FLT_MAX, nullptr
};

FloatPropertyRNA rna_Speaker_distance_reference = {
	{(PropertyRNA *)&rna_Speaker_attenuation, (PropertyRNA *)&rna_Speaker_distance_max,
	-1, "distance_reference", 1, 0, 0, 4, 0, "Reference Distance",
	"Reference distance at which volume is 100%",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, distance_reference), (RawPropertyType)5, nullptr},
	Speaker_distance_reference_get, Speaker_distance_reference_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Speaker_attenuation = {
	{(PropertyRNA *)&rna_Speaker_cone_angle_outer, (PropertyRNA *)&rna_Speaker_distance_reference,
	-1, "attenuation", 1, 0, 0, 4, 0, "Attenuation",
	"How strong the distance affects volume, depending on distance model",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, attenuation), (RawPropertyType)5, nullptr},
	Speaker_attenuation_get, Speaker_attenuation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Speaker_cone_angle_outer = {
	{(PropertyRNA *)&rna_Speaker_cone_angle_inner, (PropertyRNA *)&rna_Speaker_attenuation,
	-1, "cone_angle_outer", 1, 0, 0, 4, 0, "Outer Cone Angle",
	"Angle of the outer cone, in degrees, outside this cone the volume is the outer cone volume, between inner and outer cone the volume is interpolated",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, cone_angle_outer), (RawPropertyType)5, nullptr},
	Speaker_cone_angle_outer_get, Speaker_cone_angle_outer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 360.0f, 0.0f, 360.0f, 10.0f, 3, 360.0f, nullptr
};

FloatPropertyRNA rna_Speaker_cone_angle_inner = {
	{(PropertyRNA *)&rna_Speaker_cone_volume_outer, (PropertyRNA *)&rna_Speaker_cone_angle_outer,
	-1, "cone_angle_inner", 1, 0, 0, 4, 0, "Inner Cone Angle",
	"Angle of the inner cone, in degrees, inside the cone the volume is 100%",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, cone_angle_inner), (RawPropertyType)5, nullptr},
	Speaker_cone_angle_inner_get, Speaker_cone_angle_inner_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 360.0f, 0.0f, 360.0f, 10.0f, 3, 360.0f, nullptr
};

FloatPropertyRNA rna_Speaker_cone_volume_outer = {
	{(PropertyRNA *)&rna_Speaker_volume, (PropertyRNA *)&rna_Speaker_cone_angle_inner,
	-1, "cone_volume_outer", 1, 0, 0, 4, 0, "Outer Cone Volume",
	"Volume outside the outer cone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, cone_volume_outer), (RawPropertyType)5, nullptr},
	Speaker_cone_volume_outer_get, Speaker_cone_volume_outer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Speaker_volume = {
	{(PropertyRNA *)&rna_Speaker_pitch, (PropertyRNA *)&rna_Speaker_cone_volume_outer,
	-1, "volume", 3, 0, 0, 4, 0, "Volume",
	"How loud the sound is",
	0, "Sound",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, volume), (RawPropertyType)5, nullptr},
	Speaker_volume_get, Speaker_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Speaker_pitch = {
	{(PropertyRNA *)&rna_Speaker_animation_data, (PropertyRNA *)&rna_Speaker_volume,
	-1, "pitch", 3, 0, 0, 4, 0, "Pitch",
	"Playback pitch of the sound",
	0, "Sound",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, pitch), (RawPropertyType)5, nullptr},
	Speaker_pitch_get, Speaker_pitch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

PointerPropertyRNA rna_Speaker_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Speaker_pitch,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Speaker_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

StructRNA RNA_Speaker = {
	{(ContainerRNA *)&RNA_TextLine, (ContainerRNA *)&RNA_SpreadsheetRowFilter,
	nullptr,
	{(PropertyRNA *)&rna_Speaker_muted, (PropertyRNA *)&rna_Speaker_animation_data}},
	"Speaker", nullptr, nullptr, 519, nullptr, "Speaker",
	"Speaker data-block for 3D audio speaker objects",
	"*", 90,
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

