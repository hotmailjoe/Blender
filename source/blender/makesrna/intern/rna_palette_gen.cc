
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

#include "rna_palette.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_PaletteColor_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PaletteColor_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_PaletteColor_color;
RNA_EXTERN_C FloatPropertyRNA rna_PaletteColor_strength;
RNA_EXTERN_C FloatPropertyRNA rna_PaletteColor_weight;


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

RNA_EXTERN_C CollectionPropertyRNA rna_Palette_colors;

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



RNA_EXTERN_C CollectionPropertyRNA rna_PaletteColors_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PaletteColors_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_PaletteColors_active;

extern FunctionRNA rna_PaletteColors_new_func;
extern PointerPropertyRNA rna_PaletteColors_new_color;

extern FunctionRNA rna_PaletteColors_remove_func;
extern PointerPropertyRNA rna_PaletteColors_remove_color;

extern FunctionRNA rna_PaletteColors_clear_func;

static PointerRNA PaletteColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PaletteColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaletteColor_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaletteColor_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaletteColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaletteColor_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaletteColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PaletteColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PaletteColor_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void PaletteColor_color_get(PointerRNA *ptr, float values[3])
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rgb)[i]);
    }
}

RNA_EXTERN_C void PaletteColor_color_set(PointerRNA *ptr, const float values[3])
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float PaletteColor_strength_get(PointerRNA *ptr)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    return (float)(data->value);
}

RNA_EXTERN_C void PaletteColor_strength_set(PointerRNA *ptr, float value)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
#ifdef __cplusplus
    data->value = (std::remove_reference_t<decltype(data->value)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->value = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float PaletteColor_weight_get(PointerRNA *ptr)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    return (float)(data->value);
}

RNA_EXTERN_C void PaletteColor_weight_set(PointerRNA *ptr, float value)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
#ifdef __cplusplus
    data->value = (std::remove_reference_t<decltype(data->value)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->value = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

static PointerRNA Palette_colors_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PaletteColor, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Palette_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Palette *data = (Palette *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Palette_colors;

    rna_iterator_listbase_begin(iter, &data->colors, nullptr);

    if (iter->valid) {
        iter->ptr = Palette_colors_get(iter);
    }
}

RNA_EXTERN_C void Palette_colors_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Palette_colors_get(iter);
    }
}

RNA_EXTERN_C void Palette_colors_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Palette_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Palette_colors_begin(&iter, ptr);

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
        if (found) { *r_ptr = Palette_colors_get(&iter); }
    }

    Palette_colors_end(&iter);

    return found;
}

static PointerRNA PaletteColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PaletteColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaletteColors_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaletteColors_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaletteColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaletteColors_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaletteColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PaletteColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PaletteColors_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA PaletteColors_active_get(PointerRNA *ptr)
{
    return rna_Palette_active_color_get(ptr);
}

RNA_EXTERN_C void PaletteColors_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Palette_active_color_set(ptr, value, reports);
}



RNA_EXTERN_C struct PaletteColor *PaletteColors_new_func(struct Palette *_self)
{
	return rna_Palette_color_new(_self);
}

static void PaletteColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Palette *_self;
	struct PaletteColor *color;
	char *_data, *_retdata;
	
	_self = (struct Palette *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	color = rna_Palette_color_new(_self);
	*((struct PaletteColor **)_retdata) = color;
}

RNA_EXTERN_C void PaletteColors_remove_func(struct Palette *_self, ReportList *reports, struct PointerRNA *color)
{
	rna_Palette_color_remove(_self, reports, color);
}

static void PaletteColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Palette *_self;
	struct PointerRNA *color;
	char *_data;
	
	_self = (struct Palette *)_ptr->data;
	_data = (char *)_parms->data;
	color = *((struct PointerRNA **)_data);
	
	rna_Palette_color_remove(_self, reports, color);
}

RNA_EXTERN_C void PaletteColors_clear_func(struct Palette *_self)
{
	rna_Palette_color_clear(_self);
}

static void PaletteColors_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Palette *_self;
	_self = (struct Palette *)_ptr->data;
	
	rna_Palette_color_clear(_self);
}

/* Repeated prototypes to detect errors */

struct PaletteColor *rna_Palette_color_new(struct Palette *_self);
void rna_Palette_color_remove(struct Palette *_self, ReportList *reports, struct PointerRNA *color);
void rna_Palette_color_clear(struct Palette *_self);

/* Palette Color */
CollectionPropertyRNA rna_PaletteColor_rna_properties = {
	{(PropertyRNA *)&rna_PaletteColor_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaletteColor_rna_properties_begin, PaletteColor_rna_properties_next, PaletteColor_rna_properties_end, PaletteColor_rna_properties_get, nullptr, nullptr, PaletteColor_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PaletteColor_rna_type = {
	{(PropertyRNA *)&rna_PaletteColor_color, (PropertyRNA *)&rna_PaletteColor_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaletteColor_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_PaletteColor_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PaletteColor_color = {
	{(PropertyRNA *)&rna_PaletteColor_strength, (PropertyRNA *)&rna_PaletteColor_rna_type,
	-1, "color", 65537, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaletteColor, rgb), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PaletteColor_color_get, PaletteColor_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_PaletteColor_color_default
};

FloatPropertyRNA rna_PaletteColor_strength = {
	{(PropertyRNA *)&rna_PaletteColor_weight, (PropertyRNA *)&rna_PaletteColor_color,
	-1, "strength", 1, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaletteColor, value), (RawPropertyType)5, nullptr},
	PaletteColor_strength_get, PaletteColor_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PaletteColor_weight = {
	{nullptr, (PropertyRNA *)&rna_PaletteColor_strength,
	-1, "weight", 1, 0, 0, 4, 0, "Weight",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaletteColor, value), (RawPropertyType)5, nullptr},
	PaletteColor_weight_get, PaletteColor_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_PaletteColor = {
	{(ContainerRNA *)&RNA_Palette, (ContainerRNA *)&RNA_PackedFile,
	nullptr,
	{(PropertyRNA *)&rna_PaletteColor_rna_properties, (PropertyRNA *)&rna_PaletteColor_weight}},
	"PaletteColor", nullptr, nullptr, 516, nullptr, "Palette Color",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PaletteColor_rna_properties,
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

/* Palette */
CollectionPropertyRNA rna_Palette_colors = {
	{nullptr, nullptr,
	-1, "colors", 0, 0, 0, 0, 0, "colors",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_PaletteColors},
	Palette_colors_begin, Palette_colors_next, Palette_colors_end, Palette_colors_get, nullptr, Palette_colors_lookup_int, nullptr, nullptr, &RNA_PaletteColor
};

StructRNA RNA_Palette = {
	{(ContainerRNA *)&RNA_PaletteColors, (ContainerRNA *)&RNA_PaletteColor,
	nullptr,
	{(PropertyRNA *)&rna_Palette_colors, (PropertyRNA *)&rna_Palette_colors}},
	"Palette", nullptr, nullptr, 519, nullptr, "Palette",
	"",
	"*", 54,
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

/* Palette Splines */
CollectionPropertyRNA rna_PaletteColors_rna_properties = {
	{(PropertyRNA *)&rna_PaletteColors_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaletteColors_rna_properties_begin, PaletteColors_rna_properties_next, PaletteColors_rna_properties_end, PaletteColors_rna_properties_get, nullptr, nullptr, PaletteColors_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PaletteColors_rna_type = {
	{(PropertyRNA *)&rna_PaletteColors_active, (PropertyRNA *)&rna_PaletteColors_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaletteColors_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_PaletteColors_active = {
	{nullptr, (PropertyRNA *)&rna_PaletteColors_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Palette Color",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaletteColors_active_get, PaletteColors_active_set, nullptr, nullptr,&RNA_PaletteColor
};

PointerPropertyRNA rna_PaletteColors_new_color = {
	{nullptr, nullptr,
	-1, "color", 8388608, 0, 2, 0, 0, "",
	"The newly created color",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_PaletteColor
};

FunctionRNA rna_PaletteColors_new_func = {
	{(FunctionRNA *)&rna_PaletteColors_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_PaletteColors_new_color, (PropertyRNA *)&rna_PaletteColors_new_color}},
	"new", 0, "Add a new color to the palette",
	PaletteColors_new_call,
	(PropertyRNA *)&rna_PaletteColors_new_color
};

PointerPropertyRNA rna_PaletteColors_remove_color = {
	{nullptr, nullptr,
	-1, "color", 262144, 0, 5, 0, 0, "",
	"The color to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_PaletteColor
};

FunctionRNA rna_PaletteColors_remove_func = {
	{(FunctionRNA *)&rna_PaletteColors_clear_func, (FunctionRNA *)&rna_PaletteColors_new_func,
	nullptr,
	{(PropertyRNA *)&rna_PaletteColors_remove_color, (PropertyRNA *)&rna_PaletteColors_remove_color}},
	"remove", 16, "Remove a color from the palette",
	PaletteColors_remove_call,
	nullptr
};

FunctionRNA rna_PaletteColors_clear_func = {
	{nullptr, (FunctionRNA *)&rna_PaletteColors_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all colors from the palette",
	PaletteColors_clear_call,
	nullptr
};

StructRNA RNA_PaletteColors = {
	{(ContainerRNA *)&RNA_ParticleTarget, (ContainerRNA *)&RNA_Palette,
	nullptr,
	{(PropertyRNA *)&rna_PaletteColors_rna_properties, (PropertyRNA *)&rna_PaletteColors_active}},
	"PaletteColors", nullptr, nullptr, 516, nullptr, "Palette Splines",
	"Collection of palette colors",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PaletteColors_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_PaletteColors_new_func, (FunctionRNA *)&rna_PaletteColors_clear_func}
};

