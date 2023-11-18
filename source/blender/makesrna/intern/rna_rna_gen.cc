
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

#include "rna_rna.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_Struct_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Struct_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_Struct_name;
RNA_EXTERN_C StringPropertyRNA rna_Struct_identifier;
RNA_EXTERN_C StringPropertyRNA rna_Struct_description;
RNA_EXTERN_C StringPropertyRNA rna_Struct_translation_context;
RNA_EXTERN_C PointerPropertyRNA rna_Struct_base;
RNA_EXTERN_C PointerPropertyRNA rna_Struct_nested;
RNA_EXTERN_C PointerPropertyRNA rna_Struct_name_property;
RNA_EXTERN_C CollectionPropertyRNA rna_Struct_properties;
RNA_EXTERN_C CollectionPropertyRNA rna_Struct_functions;
RNA_EXTERN_C CollectionPropertyRNA rna_Struct_property_tags;


RNA_EXTERN_C CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_Property_name;
RNA_EXTERN_C StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C StringPropertyRNA rna_Property_description;
RNA_EXTERN_C StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C EnumPropertyRNA rna_Property_tags;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C BoolPropertyRNA rna_BoolProperty_default;
RNA_EXTERN_C BoolPropertyRNA rna_BoolProperty_default_array;
RNA_EXTERN_C IntPropertyRNA rna_BoolProperty_array_length;
RNA_EXTERN_C IntPropertyRNA rna_BoolProperty_array_dimensions;
RNA_EXTERN_C BoolPropertyRNA rna_BoolProperty_is_array;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C IntPropertyRNA rna_IntProperty_default;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_default_array;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_array_length;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_array_dimensions;
RNA_EXTERN_C BoolPropertyRNA rna_IntProperty_is_array;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_hard_min;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_hard_max;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_soft_min;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_soft_max;
RNA_EXTERN_C IntPropertyRNA rna_IntProperty_step;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_default;
RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_default_array;
RNA_EXTERN_C IntPropertyRNA rna_FloatProperty_array_length;
RNA_EXTERN_C IntPropertyRNA rna_FloatProperty_array_dimensions;
RNA_EXTERN_C BoolPropertyRNA rna_FloatProperty_is_array;
RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_hard_min;
RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_hard_max;
RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_soft_min;
RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_soft_max;
RNA_EXTERN_C FloatPropertyRNA rna_FloatProperty_step;
RNA_EXTERN_C IntPropertyRNA rna_FloatProperty_precision;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C StringPropertyRNA rna_StringProperty_default;
RNA_EXTERN_C IntPropertyRNA rna_StringProperty_length_max;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C EnumPropertyRNA rna_EnumProperty_default;
RNA_EXTERN_C EnumPropertyRNA rna_EnumProperty_default_flag;
RNA_EXTERN_C CollectionPropertyRNA rna_EnumProperty_enum_items;
RNA_EXTERN_C CollectionPropertyRNA rna_EnumProperty_enum_items_static;
RNA_EXTERN_C CollectionPropertyRNA rna_EnumProperty_enum_items_static_ui;


RNA_EXTERN_C CollectionPropertyRNA rna_EnumPropertyItem_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_EnumPropertyItem_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_EnumPropertyItem_name;
RNA_EXTERN_C StringPropertyRNA rna_EnumPropertyItem_description;
RNA_EXTERN_C StringPropertyRNA rna_EnumPropertyItem_identifier;
RNA_EXTERN_C IntPropertyRNA rna_EnumPropertyItem_value;
RNA_EXTERN_C EnumPropertyRNA rna_EnumPropertyItem_icon;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C PointerPropertyRNA rna_PointerProperty_fixed_type;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Property_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_name;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_identifier;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_description;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_Property_translation_context;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_subtype;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Property_srna;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_unit;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_icon;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_readonly;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_animatable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_overridable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_required;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_argument_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_never_none;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_hidden;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_skip_save;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_output;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_registered_optional;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_runtime;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_enum_flag;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_library_editable;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Property_is_path_output;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Property_tags;

RNA_EXTERN_C PointerPropertyRNA rna_CollectionProperty_fixed_type;


RNA_EXTERN_C CollectionPropertyRNA rna_Function_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Function_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_Function_identifier;
RNA_EXTERN_C StringPropertyRNA rna_Function_description;
RNA_EXTERN_C CollectionPropertyRNA rna_Function_parameters;
RNA_EXTERN_C BoolPropertyRNA rna_Function_is_registered;
RNA_EXTERN_C BoolPropertyRNA rna_Function_is_registered_optional;
RNA_EXTERN_C BoolPropertyRNA rna_Function_use_self;
RNA_EXTERN_C BoolPropertyRNA rna_Function_use_self_type;


RNA_EXTERN_C CollectionPropertyRNA rna_BlenderRNA_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlenderRNA_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_BlenderRNA_structs;


RNA_EXTERN_C CollectionPropertyRNA rna_PrimitiveString_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PrimitiveString_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_PrimitiveString_value;


RNA_EXTERN_C CollectionPropertyRNA rna_PrimitiveInt_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PrimitiveInt_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_PrimitiveInt_value;


RNA_EXTERN_C CollectionPropertyRNA rna_PrimitiveFloat_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PrimitiveFloat_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_PrimitiveFloat_value;


RNA_EXTERN_C CollectionPropertyRNA rna_PrimitiveBoolean_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PrimitiveBoolean_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_PrimitiveBoolean_value;

static PointerRNA Struct_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Struct_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Struct_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Struct_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Struct_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Struct_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Struct_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Struct_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Struct_name_get(PointerRNA *ptr, char *value)
{
    rna_Struct_name_get(ptr, value);
}

RNA_EXTERN_C int Struct_name_length(PointerRNA *ptr)
{
    return rna_Struct_name_length(ptr);
}

RNA_EXTERN_C void Struct_identifier_get(PointerRNA *ptr, char *value)
{
    rna_Struct_identifier_get(ptr, value);
}

RNA_EXTERN_C int Struct_identifier_length(PointerRNA *ptr)
{
    return rna_Struct_identifier_length(ptr);
}

RNA_EXTERN_C void Struct_description_get(PointerRNA *ptr, char *value)
{
    rna_Struct_description_get(ptr, value);
}

RNA_EXTERN_C int Struct_description_length(PointerRNA *ptr)
{
    return rna_Struct_description_length(ptr);
}

RNA_EXTERN_C void Struct_translation_context_get(PointerRNA *ptr, char *value)
{
    rna_Struct_translation_context_get(ptr, value);
}

RNA_EXTERN_C int Struct_translation_context_length(PointerRNA *ptr)
{
    return rna_Struct_translation_context_length(ptr);
}

RNA_EXTERN_C PointerRNA Struct_base_get(PointerRNA *ptr)
{
    return rna_Struct_base_get(ptr);
}

RNA_EXTERN_C PointerRNA Struct_nested_get(PointerRNA *ptr)
{
    return rna_Struct_nested_get(ptr);
}

RNA_EXTERN_C PointerRNA Struct_name_property_get(PointerRNA *ptr)
{
    return rna_Struct_name_property_get(ptr);
}

static PointerRNA Struct_properties_get(CollectionPropertyIterator *iter)
{
    return rna_Struct_properties_get(iter);
}

RNA_EXTERN_C void Struct_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Struct_properties;

    rna_Struct_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_properties_get(iter);
    }
}

RNA_EXTERN_C void Struct_properties_next(CollectionPropertyIterator *iter)
{
    rna_Struct_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Struct_properties_get(iter);
    }
}

RNA_EXTERN_C void Struct_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Struct_functions_get(CollectionPropertyIterator *iter)
{
    return rna_Struct_functions_get(iter);
}

RNA_EXTERN_C void Struct_functions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Struct_functions;

    rna_Struct_functions_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_functions_get(iter);
    }
}

RNA_EXTERN_C void Struct_functions_next(CollectionPropertyIterator *iter)
{
    rna_Struct_functions_next(iter);

    if (iter->valid) {
        iter->ptr = Struct_functions_get(iter);
    }
}

RNA_EXTERN_C void Struct_functions_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Struct_property_tags_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Struct_property_tags_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Struct_property_tags;

    rna_Struct_property_tags_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_property_tags_get(iter);
    }
}

RNA_EXTERN_C void Struct_property_tags_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Struct_property_tags_get(iter);
    }
}

RNA_EXTERN_C void Struct_property_tags_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA Property_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Property_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Property_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Property_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Property_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Property_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Property_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Property_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Property_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Property_name_get(PointerRNA *ptr, char *value)
{
    rna_Property_name_get(ptr, value);
}

RNA_EXTERN_C int Property_name_length(PointerRNA *ptr)
{
    return rna_Property_name_length(ptr);
}

RNA_EXTERN_C void Property_identifier_get(PointerRNA *ptr, char *value)
{
    rna_Property_identifier_get(ptr, value);
}

RNA_EXTERN_C int Property_identifier_length(PointerRNA *ptr)
{
    return rna_Property_identifier_length(ptr);
}

RNA_EXTERN_C void Property_description_get(PointerRNA *ptr, char *value)
{
    rna_Property_description_get(ptr, value);
}

RNA_EXTERN_C int Property_description_length(PointerRNA *ptr)
{
    return rna_Property_description_length(ptr);
}

RNA_EXTERN_C void Property_translation_context_get(PointerRNA *ptr, char *value)
{
    rna_Property_translation_context_get(ptr, value);
}

RNA_EXTERN_C int Property_translation_context_length(PointerRNA *ptr)
{
    return rna_Property_translation_context_length(ptr);
}

RNA_EXTERN_C int Property_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_type_get;
    return fn(ptr);
}

RNA_EXTERN_C int Property_subtype_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_subtype_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Property_srna_get(PointerRNA *ptr)
{
    return rna_Property_srna_get(ptr);
}

RNA_EXTERN_C int Property_unit_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_unit_get;
    return fn(ptr);
}

RNA_EXTERN_C int Property_icon_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_icon_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_readonly_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_readonly_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_animatable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_animatable_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_overridable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_overridable_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_required_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_required_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_argument_optional_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_argument_optional_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_never_none_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_never_none_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_hidden_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_hidden_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_skip_save_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_skip_save_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_output_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_use_output_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_registered_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_registered_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_registered_optional_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_registered_optional_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_runtime_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_runtime_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_enum_flag_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_enum_flag_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_library_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_library_editable_flag_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Property_is_path_output_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_path_output_flag_get;
    return fn(ptr);
}

RNA_EXTERN_C int Property_tags_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_tags_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BoolProperty_default_value_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoolProperty_default_get;
    return fn(ptr);
}

RNA_EXTERN_C void BoolProperty_default_array_get(PointerRNA *ptr, bool values[])
{
    PropBooleanArrayGetFunc fn = rna_BoolProperty_default_array_get;
    fn(ptr, values);
}

RNA_EXTERN_C int BoolProperty_array_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Property_array_length_get;
    return fn(ptr);
}

RNA_EXTERN_C void BoolProperty_array_dimensions_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_array_dimensions_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool BoolProperty_is_array_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NumberProperty_is_array_get;
    return fn(ptr);
}

RNA_EXTERN_C int IntProperty_default_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_default_get;
    return fn(ptr);
}

RNA_EXTERN_C void IntProperty_default_array_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_IntProperty_default_array_get;
    fn(ptr, values);
}

RNA_EXTERN_C int IntProperty_array_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Property_array_length_get;
    return fn(ptr);
}

RNA_EXTERN_C void IntProperty_array_dimensions_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_array_dimensions_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool IntProperty_is_array_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NumberProperty_is_array_get;
    return fn(ptr);
}

RNA_EXTERN_C int IntProperty_hard_min_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_hard_min_get;
    return fn(ptr);
}

RNA_EXTERN_C int IntProperty_hard_max_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_hard_max_get;
    return fn(ptr);
}

RNA_EXTERN_C int IntProperty_soft_min_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_soft_min_get;
    return fn(ptr);
}

RNA_EXTERN_C int IntProperty_soft_max_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_soft_max_get;
    return fn(ptr);
}

RNA_EXTERN_C int IntProperty_step_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_step_get;
    return fn(ptr);
}

RNA_EXTERN_C float FloatProperty_default_value_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_default_get;
    return fn(ptr);
}

RNA_EXTERN_C void FloatProperty_default_array_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FloatProperty_default_array_get;
    fn(ptr, values);
}

RNA_EXTERN_C int FloatProperty_array_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Property_array_length_get;
    return fn(ptr);
}

RNA_EXTERN_C void FloatProperty_array_dimensions_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_array_dimensions_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool FloatProperty_is_array_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NumberProperty_is_array_get;
    return fn(ptr);
}

RNA_EXTERN_C float FloatProperty_hard_min_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_hard_min_get;
    return fn(ptr);
}

RNA_EXTERN_C float FloatProperty_hard_max_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_hard_max_get;
    return fn(ptr);
}

RNA_EXTERN_C float FloatProperty_soft_min_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_soft_min_get;
    return fn(ptr);
}

RNA_EXTERN_C float FloatProperty_soft_max_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_soft_max_get;
    return fn(ptr);
}

RNA_EXTERN_C float FloatProperty_step_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_step_get;
    return fn(ptr);
}

RNA_EXTERN_C int FloatProperty_precision_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_FloatProperty_precision_get;
    return fn(ptr);
}

RNA_EXTERN_C void StringProperty_default_value_get(PointerRNA *ptr, char *value)
{
    rna_StringProperty_default_get(ptr, value);
}

RNA_EXTERN_C int StringProperty_default_value_length(PointerRNA *ptr)
{
    return rna_StringProperty_default_length(ptr);
}

RNA_EXTERN_C int StringProperty_length_max_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_StringProperty_max_length_get;
    return fn(ptr);
}

RNA_EXTERN_C int EnumProperty_default_value_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_EnumProperty_default_get;
    return fn(ptr);
}

RNA_EXTERN_C int EnumProperty_default_flag_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_EnumProperty_default_get;
    return fn(ptr);
}

static PointerRNA EnumProperty_enum_items_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void EnumProperty_enum_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EnumProperty_enum_items;

    rna_EnumProperty_items_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_get(iter);
    }
}

RNA_EXTERN_C void EnumProperty_enum_items_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_get(iter);
    }
}

RNA_EXTERN_C void EnumProperty_enum_items_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA EnumProperty_enum_items_static_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void EnumProperty_enum_items_static_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EnumProperty_enum_items_static;

    rna_EnumProperty_items_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_get(iter);
    }
}

RNA_EXTERN_C void EnumProperty_enum_items_static_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_get(iter);
    }
}

RNA_EXTERN_C void EnumProperty_enum_items_static_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA EnumProperty_enum_items_static_ui_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void EnumProperty_enum_items_static_ui_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EnumProperty_enum_items_static_ui;

    rna_EnumProperty_items_ui_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_ui_get(iter);
    }
}

RNA_EXTERN_C void EnumProperty_enum_items_static_ui_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_ui_get(iter);
    }
}

RNA_EXTERN_C void EnumProperty_enum_items_static_ui_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA EnumPropertyItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void EnumPropertyItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EnumPropertyItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumPropertyItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void EnumPropertyItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = EnumPropertyItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void EnumPropertyItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int EnumPropertyItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA EnumPropertyItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void EnumPropertyItem_name_get(PointerRNA *ptr, char *value)
{
    rna_EnumPropertyItem_name_get(ptr, value);
}

RNA_EXTERN_C int EnumPropertyItem_name_length(PointerRNA *ptr)
{
    return rna_EnumPropertyItem_name_length(ptr);
}

RNA_EXTERN_C void EnumPropertyItem_description_get(PointerRNA *ptr, char *value)
{
    rna_EnumPropertyItem_description_get(ptr, value);
}

RNA_EXTERN_C int EnumPropertyItem_description_length(PointerRNA *ptr)
{
    return rna_EnumPropertyItem_description_length(ptr);
}

RNA_EXTERN_C void EnumPropertyItem_identifier_get(PointerRNA *ptr, char *value)
{
    rna_EnumPropertyItem_identifier_get(ptr, value);
}

RNA_EXTERN_C int EnumPropertyItem_identifier_length(PointerRNA *ptr)
{
    return rna_EnumPropertyItem_identifier_length(ptr);
}

RNA_EXTERN_C int EnumPropertyItem_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_EnumPropertyItem_value_get;
    return fn(ptr);
}

RNA_EXTERN_C int EnumPropertyItem_icon_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_EnumPropertyItem_icon_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA PointerProperty_fixed_type_get(PointerRNA *ptr)
{
    return rna_PointerProperty_fixed_type_get(ptr);
}

RNA_EXTERN_C PointerRNA CollectionProperty_fixed_type_get(PointerRNA *ptr)
{
    return rna_CollectionProperty_fixed_type_get(ptr);
}

static PointerRNA Function_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Function_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Function_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Function_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Function_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Function_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Function_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Function_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Function_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Function_identifier_get(PointerRNA *ptr, char *value)
{
    rna_Function_identifier_get(ptr, value);
}

RNA_EXTERN_C int Function_identifier_length(PointerRNA *ptr)
{
    return rna_Function_identifier_length(ptr);
}

RNA_EXTERN_C void Function_description_get(PointerRNA *ptr, char *value)
{
    rna_Function_description_get(ptr, value);
}

RNA_EXTERN_C int Function_description_length(PointerRNA *ptr)
{
    return rna_Function_description_length(ptr);
}

static PointerRNA Function_parameters_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Property, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Function_parameters_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Function_parameters;

    rna_Function_parameters_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Function_parameters_get(iter);
    }
}

RNA_EXTERN_C void Function_parameters_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Function_parameters_get(iter);
    }
}

RNA_EXTERN_C void Function_parameters_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C bool Function_is_registered_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_registered_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Function_is_registered_optional_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_registered_optional_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Function_use_self_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_no_self_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Function_use_self_type_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_use_self_type_get;
    return fn(ptr);
}

static PointerRNA BlenderRNA_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlenderRNA_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlenderRNA_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlenderRNA_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlenderRNA_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlenderRNA_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlenderRNA_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlenderRNA_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlenderRNA_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int BlenderRNA_structs_length(PointerRNA *ptr)
{
    return rna_BlenderRNA_structs_length(ptr);
}

static PointerRNA BlenderRNA_structs_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Struct, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlenderRNA_structs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlenderRNA_structs;

    rna_BlenderRNA_structs_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlenderRNA_structs_get(iter);
    }
}

RNA_EXTERN_C void BlenderRNA_structs_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlenderRNA_structs_get(iter);
    }
}

RNA_EXTERN_C void BlenderRNA_structs_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlenderRNA_structs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_BlenderRNA_structs_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int BlenderRNA_structs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_BlenderRNA_structs_lookup_string(ptr, key, r_ptr);
}

static PointerRNA PrimitiveString_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PrimitiveString_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PrimitiveString_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveString_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveString_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveString_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveString_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PrimitiveString_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PrimitiveString_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void PrimitiveString_value_get(PointerRNA *ptr, char *value)
{
    rna_PrimitiveString_value_get(ptr, value);
}

RNA_EXTERN_C int PrimitiveString_value_length(PointerRNA *ptr)
{
    return rna_PrimitiveString_value_length(ptr);
}

static PointerRNA PrimitiveInt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PrimitiveInt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PrimitiveInt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveInt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveInt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveInt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveInt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PrimitiveInt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PrimitiveInt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PrimitiveInt_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_PrimitiveInt_value_get;
    return fn(ptr);
}

static PointerRNA PrimitiveFloat_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PrimitiveFloat_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PrimitiveFloat_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveFloat_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveFloat_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveFloat_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveFloat_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PrimitiveFloat_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PrimitiveFloat_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float PrimitiveFloat_value_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PrimitiveFloat_value_get;
    return fn(ptr);
}

static PointerRNA PrimitiveBoolean_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PrimitiveBoolean_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PrimitiveBoolean_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveBoolean_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveBoolean_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveBoolean_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PrimitiveBoolean_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PrimitiveBoolean_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PrimitiveBoolean_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool PrimitiveBoolean_value_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_PrimitiveBoolean_value_get;
    return fn(ptr);
}



RNA_EXTERN_C int BoolProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}


RNA_EXTERN_C int IntProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}


RNA_EXTERN_C int FloatProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}













/* Struct Definition */
CollectionPropertyRNA rna_Struct_rna_properties = {
	{(PropertyRNA *)&rna_Struct_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_rna_properties_begin, Struct_rna_properties_next, Struct_rna_properties_end, Struct_rna_properties_get, nullptr, nullptr, Struct_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Struct_rna_type = {
	{(PropertyRNA *)&rna_Struct_name, (PropertyRNA *)&rna_Struct_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Struct_name = {
	{(PropertyRNA *)&rna_Struct_identifier, (PropertyRNA *)&rna_Struct_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Human readable name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_name_get, Struct_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Struct_identifier = {
	{(PropertyRNA *)&rna_Struct_description, (PropertyRNA *)&rna_Struct_name,
	-1, "identifier", 262144, 0, 0, 0, 0, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_identifier_get, Struct_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Struct_description = {
	{(PropertyRNA *)&rna_Struct_translation_context, (PropertyRNA *)&rna_Struct_identifier,
	-1, "description", 262144, 0, 0, 0, 0, "Description",
	"Description of the Struct\'s purpose",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_description_get, Struct_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Struct_translation_context = {
	{(PropertyRNA *)&rna_Struct_base, (PropertyRNA *)&rna_Struct_description,
	-1, "translation_context", 262144, 0, 0, 0, 0, "Translation Context",
	"Translation context of the struct\'s name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_translation_context_get, Struct_translation_context_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Struct_base = {
	{(PropertyRNA *)&rna_Struct_nested, (PropertyRNA *)&rna_Struct_translation_context,
	-1, "base", 8388608, 0, 0, 0, 0, "Base",
	"Struct definition this is derived from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_base_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Struct_nested = {
	{(PropertyRNA *)&rna_Struct_name_property, (PropertyRNA *)&rna_Struct_base,
	-1, "nested", 8388608, 0, 0, 0, 0, "Nested",
	"Struct in which this struct is always nested, and to which it logically belongs",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_nested_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Struct_name_property = {
	{(PropertyRNA *)&rna_Struct_properties, (PropertyRNA *)&rna_Struct_nested,
	-1, "name_property", 8388608, 0, 0, 0, 0, "Name Property",
	"Property that gives the name of the struct",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_name_property_get, nullptr, nullptr, nullptr,&RNA_StringProperty
};

CollectionPropertyRNA rna_Struct_properties = {
	{(PropertyRNA *)&rna_Struct_functions, (PropertyRNA *)&rna_Struct_name_property,
	-1, "properties", 0, 0, 0, 0, 0, "Properties",
	"Properties in the struct",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_properties_begin, Struct_properties_next, Struct_properties_end, Struct_properties_get, nullptr, nullptr, nullptr, nullptr, &RNA_Property
};

CollectionPropertyRNA rna_Struct_functions = {
	{(PropertyRNA *)&rna_Struct_property_tags, (PropertyRNA *)&rna_Struct_properties,
	-1, "functions", 0, 0, 0, 0, 0, "Functions",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_functions_begin, Struct_functions_next, Struct_functions_end, Struct_functions_get, nullptr, nullptr, nullptr, nullptr, &RNA_Function
};

CollectionPropertyRNA rna_Struct_property_tags = {
	{nullptr, (PropertyRNA *)&rna_Struct_functions,
	-1, "property_tags", 0, 0, 0, 8, 0, "Property Tags",
	"Tags that properties can use to influence behavior",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Struct_property_tags_begin, Struct_property_tags_next, Struct_property_tags_end, Struct_property_tags_get, nullptr, nullptr, nullptr, nullptr, &RNA_EnumPropertyItem
};

StructRNA RNA_Struct = {
	{(ContainerRNA *)&RNA_Property, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Struct_rna_properties, (PropertyRNA *)&rna_Struct_property_tags}},
	"Struct", nullptr, nullptr, 516, nullptr, "Struct Definition",
	"RNA structure definition",
	"*", 206,
	(PropertyRNA *)&rna_Struct_identifier, (PropertyRNA *)&rna_Struct_rna_properties,
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

/* Property Definition */
CollectionPropertyRNA rna_Property_rna_properties = {
	{(PropertyRNA *)&rna_Property_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_rna_properties_begin, Property_rna_properties_next, Property_rna_properties_end, Property_rna_properties_get, nullptr, nullptr, Property_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Property_rna_type = {
	{(PropertyRNA *)&rna_Property_name, (PropertyRNA *)&rna_Property_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Property_name = {
	{(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Human readable name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_name_get, Property_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Property_identifier = {
	{(PropertyRNA *)&rna_Property_description, (PropertyRNA *)&rna_Property_name,
	-1, "identifier", 262144, 0, 0, 0, 0, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_identifier_get, Property_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Property_description = {
	{(PropertyRNA *)&rna_Property_translation_context, (PropertyRNA *)&rna_Property_identifier,
	-1, "description", 262144, 0, 0, 0, 0, "Description",
	"Description of the property for tooltips",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_description_get, Property_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Property_translation_context = {
	{(PropertyRNA *)&rna_Property_type, (PropertyRNA *)&rna_Property_description,
	-1, "translation_context", 262144, 0, 0, 0, 0, "Translation Context",
	"Translation context of the property\'s name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_translation_context_get, Property_translation_context_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_Property_type = {
	{(PropertyRNA *)&rna_Property_subtype, (PropertyRNA *)&rna_Property_translation_context,
	-1, "type", 2, 0, 0, 0, 0, "Type",
	"Data type of the property",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_property_type_items, 7, 0
};

EnumPropertyRNA rna_Property_subtype = {
	{(PropertyRNA *)&rna_Property_srna, (PropertyRNA *)&rna_Property_type,
	-1, "subtype", 2, 0, 0, 0, 0, "Subtype",
	"Semantic interpretation of the property",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_subtype_get, nullptr, nullptr, nullptr, nullptr, rna_enum_property_subtype_items, 32, 0
};

PointerPropertyRNA rna_Property_srna = {
	{(PropertyRNA *)&rna_Property_unit, (PropertyRNA *)&rna_Property_subtype,
	-1, "srna", 8388608, 0, 0, 0, 0, "Base",
	"Struct definition used for properties assigned to this item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_srna_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_Property_unit = {
	{(PropertyRNA *)&rna_Property_icon, (PropertyRNA *)&rna_Property_srna,
	-1, "unit", 2, 0, 0, 0, 0, "Unit",
	"Type of units for this property",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_unit_get, nullptr, nullptr, nullptr, nullptr, rna_enum_property_unit_items, 13, 0
};

EnumPropertyRNA rna_Property_icon = {
	{(PropertyRNA *)&rna_Property_is_readonly, (PropertyRNA *)&rna_Property_unit,
	-1, "icon", 2, 0, 0, 0, 0, "Icon",
	"Icon of the item",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_icon_get, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 838, 0
};

BoolPropertyRNA rna_Property_is_readonly = {
	{(PropertyRNA *)&rna_Property_is_animatable, (PropertyRNA *)&rna_Property_icon,
	-1, "is_readonly", 2, 0, 0, 0, 0, "Read Only",
	"Property is editable through RNA",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_readonly_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_animatable = {
	{(PropertyRNA *)&rna_Property_is_overridable, (PropertyRNA *)&rna_Property_is_readonly,
	-1, "is_animatable", 2, 0, 0, 0, 0, "Animatable",
	"Property is animatable through RNA",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_animatable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_overridable = {
	{(PropertyRNA *)&rna_Property_is_required, (PropertyRNA *)&rna_Property_is_animatable,
	-1, "is_overridable", 2, 0, 0, 0, 0, "Overridable",
	"Property is overridable through RNA",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_overridable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_required = {
	{(PropertyRNA *)&rna_Property_is_argument_optional, (PropertyRNA *)&rna_Property_is_overridable,
	-1, "is_required", 2, 0, 0, 0, 0, "Required",
	"False when this property is an optional argument in an RNA function",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_required_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_argument_optional = {
	{(PropertyRNA *)&rna_Property_is_never_none, (PropertyRNA *)&rna_Property_is_required,
	-1, "is_argument_optional", 2, 0, 0, 0, 0, "Optional Argument",
	"True when the property is optional in a Python function implementing an RNA function",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_argument_optional_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_never_none = {
	{(PropertyRNA *)&rna_Property_is_hidden, (PropertyRNA *)&rna_Property_is_argument_optional,
	-1, "is_never_none", 2, 0, 0, 0, 0, "Never None",
	"True when this value can\'t be set to None",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_never_none_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_hidden = {
	{(PropertyRNA *)&rna_Property_is_skip_save, (PropertyRNA *)&rna_Property_is_never_none,
	-1, "is_hidden", 2, 0, 0, 0, 0, "Hidden",
	"True when the property is hidden",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_hidden_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_skip_save = {
	{(PropertyRNA *)&rna_Property_is_output, (PropertyRNA *)&rna_Property_is_hidden,
	-1, "is_skip_save", 2, 0, 0, 0, 0, "Skip Save",
	"True when the property is not saved in presets",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_skip_save_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_output = {
	{(PropertyRNA *)&rna_Property_is_registered, (PropertyRNA *)&rna_Property_is_skip_save,
	-1, "is_output", 2, 0, 0, 0, 0, "Return",
	"True when this property is an output value from an RNA function",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_output_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_registered = {
	{(PropertyRNA *)&rna_Property_is_registered_optional, (PropertyRNA *)&rna_Property_is_output,
	-1, "is_registered", 2, 0, 0, 0, 0, "Registered",
	"Property is registered as part of type registration",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_registered_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_registered_optional = {
	{(PropertyRNA *)&rna_Property_is_runtime, (PropertyRNA *)&rna_Property_is_registered,
	-1, "is_registered_optional", 2, 0, 0, 0, 0, "Registered Optionally",
	"Property is optionally registered as part of type registration",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_registered_optional_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_runtime = {
	{(PropertyRNA *)&rna_Property_is_enum_flag, (PropertyRNA *)&rna_Property_is_registered_optional,
	-1, "is_runtime", 2, 0, 0, 0, 0, "Runtime",
	"Property has been dynamically created at runtime",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_runtime_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_enum_flag = {
	{(PropertyRNA *)&rna_Property_is_library_editable, (PropertyRNA *)&rna_Property_is_runtime,
	-1, "is_enum_flag", 2, 0, 0, 0, 0, "Enum Flag",
	"True when multiple enums",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_enum_flag_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_library_editable = {
	{(PropertyRNA *)&rna_Property_is_path_output, (PropertyRNA *)&rna_Property_is_enum_flag,
	-1, "is_library_editable", 2, 0, 0, 0, 0, "Library Editable",
	"Property is editable from linked instances (changes not saved)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_library_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Property_is_path_output = {
	{(PropertyRNA *)&rna_Property_tags, (PropertyRNA *)&rna_Property_is_library_editable,
	-1, "is_path_output", 2, 0, 0, 0, 0, "Path Output",
	"Property is a filename, filepath or directory output",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_is_path_output_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Property_tags_items[1] = {
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Property_tags = {
	{nullptr, (PropertyRNA *)&rna_Property_is_path_output,
	-1, "tags", 2097202, 0, 0, 0, 0, "Tags",
	"Subset of tags (defined in parent struct) that are set for this property",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Property_tags_get, nullptr, rna_Property_tags_itemf, nullptr, nullptr, rna_Property_tags_items, 0, 0
};

StructRNA RNA_Property = {
	{(ContainerRNA *)&RNA_BoolProperty, (ContainerRNA *)&RNA_Struct,
	nullptr,
	{(PropertyRNA *)&rna_Property_rna_properties, (PropertyRNA *)&rna_Property_tags}},
	"Property", nullptr, nullptr, 516, nullptr, "Property Definition",
	"RNA property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	nullptr,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Boolean Definition */
BoolPropertyRNA rna_BoolProperty_default = {
	{(PropertyRNA *)&rna_BoolProperty_default_array, nullptr,
	-1, "default", 2, 0, 0, 0, 0, "Default",
	"Default value for this number",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoolProperty_default_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static bool rna_BoolProperty_default_array_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_BoolProperty_default_array = {
	{(PropertyRNA *)&rna_BoolProperty_array_length, (PropertyRNA *)&rna_BoolProperty_default,
	-1, "default_array", 131074, 0, 0, 0, 0, "Default Array",
	"Default value for this array",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, BoolProperty_default_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_BoolProperty_default_array_default
};

IntPropertyRNA rna_BoolProperty_array_length = {
	{(PropertyRNA *)&rna_BoolProperty_array_dimensions, (PropertyRNA *)&rna_BoolProperty_default_array,
	-1, "array_length", 2, 0, 0, 0, 0, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoolProperty_array_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static int rna_BoolProperty_array_dimensions_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_BoolProperty_array_dimensions = {
	{(PropertyRNA *)&rna_BoolProperty_is_array, (PropertyRNA *)&rna_BoolProperty_array_length,
	-1, "array_dimensions", 2, 0, 0, 0, 0, "Array Dimensions",
	"Length of each dimension of the array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, BoolProperty_array_dimensions_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_BoolProperty_array_dimensions_default
};

BoolPropertyRNA rna_BoolProperty_is_array = {
	{nullptr, (PropertyRNA *)&rna_BoolProperty_array_dimensions,
	-1, "is_array", 2, 0, 0, 0, 0, "Is Array",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoolProperty_is_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BoolProperty = {
	{(ContainerRNA *)&RNA_IntProperty, (ContainerRNA *)&RNA_Property,
	nullptr,
	{(PropertyRNA *)&rna_BoolProperty_default, (PropertyRNA *)&rna_BoolProperty_is_array}},
	"BoolProperty", nullptr, nullptr, 516, nullptr, "Boolean Definition",
	"RNA boolean property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Int Definition */
IntPropertyRNA rna_IntProperty_default = {
	{(PropertyRNA *)&rna_IntProperty_default_array, nullptr,
	-1, "default", 2, 0, 0, 0, 0, "Default",
	"Default value for this number",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_default_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static int rna_IntProperty_default_array_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_IntProperty_default_array = {
	{(PropertyRNA *)&rna_IntProperty_array_length, (PropertyRNA *)&rna_IntProperty_default,
	-1, "default_array", 131074, 0, 0, 0, 0, "Default Array",
	"Default value for this array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, IntProperty_default_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_IntProperty_default_array_default
};

IntPropertyRNA rna_IntProperty_array_length = {
	{(PropertyRNA *)&rna_IntProperty_array_dimensions, (PropertyRNA *)&rna_IntProperty_default_array,
	-1, "array_length", 2, 0, 0, 0, 0, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_array_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static int rna_IntProperty_array_dimensions_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_IntProperty_array_dimensions = {
	{(PropertyRNA *)&rna_IntProperty_is_array, (PropertyRNA *)&rna_IntProperty_array_length,
	-1, "array_dimensions", 2, 0, 0, 0, 0, "Array Dimensions",
	"Length of each dimension of the array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, IntProperty_array_dimensions_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_IntProperty_array_dimensions_default
};

BoolPropertyRNA rna_IntProperty_is_array = {
	{(PropertyRNA *)&rna_IntProperty_hard_min, (PropertyRNA *)&rna_IntProperty_array_dimensions,
	-1, "is_array", 2, 0, 0, 0, 0, "Is Array",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_is_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_IntProperty_hard_min = {
	{(PropertyRNA *)&rna_IntProperty_hard_max, (PropertyRNA *)&rna_IntProperty_is_array,
	-1, "hard_min", 2, 0, 0, 0, 0, "Hard Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_hard_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_IntProperty_hard_max = {
	{(PropertyRNA *)&rna_IntProperty_soft_min, (PropertyRNA *)&rna_IntProperty_hard_min,
	-1, "hard_max", 2, 0, 0, 0, 0, "Hard Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_hard_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_IntProperty_soft_min = {
	{(PropertyRNA *)&rna_IntProperty_soft_max, (PropertyRNA *)&rna_IntProperty_hard_max,
	-1, "soft_min", 2, 0, 0, 0, 0, "Soft Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_soft_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_IntProperty_soft_max = {
	{(PropertyRNA *)&rna_IntProperty_step, (PropertyRNA *)&rna_IntProperty_soft_min,
	-1, "soft_max", 2, 0, 0, 0, 0, "Soft Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_soft_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_IntProperty_step = {
	{nullptr, (PropertyRNA *)&rna_IntProperty_soft_max,
	-1, "step", 2, 0, 0, 0, 0, "Step",
	"Step size used by number buttons, for floats 1/100th of the step size",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IntProperty_step_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_IntProperty = {
	{(ContainerRNA *)&RNA_FloatProperty, (ContainerRNA *)&RNA_BoolProperty,
	nullptr,
	{(PropertyRNA *)&rna_IntProperty_default, (PropertyRNA *)&rna_IntProperty_step}},
	"IntProperty", nullptr, nullptr, 516, nullptr, "Int Definition",
	"RNA integer number property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Float Definition */
FloatPropertyRNA rna_FloatProperty_default = {
	{(PropertyRNA *)&rna_FloatProperty_default_array, nullptr,
	-1, "default", 2, 0, 0, 0, 0, "Default",
	"Default value for this number",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_default_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_FloatProperty_default_array_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FloatProperty_default_array = {
	{(PropertyRNA *)&rna_FloatProperty_array_length, (PropertyRNA *)&rna_FloatProperty_default,
	-1, "default_array", 131074, 0, 0, 0, 0, "Default Array",
	"Default value for this array",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FloatProperty_default_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FloatProperty_default_array_default
};

IntPropertyRNA rna_FloatProperty_array_length = {
	{(PropertyRNA *)&rna_FloatProperty_array_dimensions, (PropertyRNA *)&rna_FloatProperty_default_array,
	-1, "array_length", 2, 0, 0, 0, 0, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_array_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static int rna_FloatProperty_array_dimensions_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_FloatProperty_array_dimensions = {
	{(PropertyRNA *)&rna_FloatProperty_is_array, (PropertyRNA *)&rna_FloatProperty_array_length,
	-1, "array_dimensions", 2, 0, 0, 0, 0, "Array Dimensions",
	"Length of each dimension of the array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FloatProperty_array_dimensions_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_FloatProperty_array_dimensions_default
};

BoolPropertyRNA rna_FloatProperty_is_array = {
	{(PropertyRNA *)&rna_FloatProperty_hard_min, (PropertyRNA *)&rna_FloatProperty_array_dimensions,
	-1, "is_array", 2, 0, 0, 0, 0, "Is Array",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_is_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FloatProperty_hard_min = {
	{(PropertyRNA *)&rna_FloatProperty_hard_max, (PropertyRNA *)&rna_FloatProperty_is_array,
	-1, "hard_min", 2, 0, 0, 0, 0, "Hard Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_hard_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FloatProperty_hard_max = {
	{(PropertyRNA *)&rna_FloatProperty_soft_min, (PropertyRNA *)&rna_FloatProperty_hard_min,
	-1, "hard_max", 2, 0, 0, 0, 0, "Hard Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_hard_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FloatProperty_soft_min = {
	{(PropertyRNA *)&rna_FloatProperty_soft_max, (PropertyRNA *)&rna_FloatProperty_hard_max,
	-1, "soft_min", 2, 0, 0, 0, 0, "Soft Minimum",
	"Minimum value used by buttons",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_soft_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FloatProperty_soft_max = {
	{(PropertyRNA *)&rna_FloatProperty_step, (PropertyRNA *)&rna_FloatProperty_soft_min,
	-1, "soft_max", 2, 0, 0, 0, 0, "Soft Maximum",
	"Maximum value used by buttons",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_soft_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FloatProperty_step = {
	{(PropertyRNA *)&rna_FloatProperty_precision, (PropertyRNA *)&rna_FloatProperty_soft_max,
	-1, "step", 2, 0, 0, 0, 0, "Step",
	"Step size used by number buttons, for floats 1/100th of the step size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_step_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_FloatProperty_precision = {
	{nullptr, (PropertyRNA *)&rna_FloatProperty_step,
	-1, "precision", 2, 0, 0, 0, 0, "Precision",
	"Number of digits after the dot used by buttons. Fraction is automatically hidden for exact integer values of fields with unit \'NONE\' or \'TIME\' (frame count) and step divisible by 100",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatProperty_precision_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_FloatProperty = {
	{(ContainerRNA *)&RNA_StringProperty, (ContainerRNA *)&RNA_IntProperty,
	nullptr,
	{(PropertyRNA *)&rna_FloatProperty_default, (PropertyRNA *)&rna_FloatProperty_precision}},
	"FloatProperty", nullptr, nullptr, 516, nullptr, "Float Definition",
	"RNA floating-point number (single precision) property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* String Definition */
StringPropertyRNA rna_StringProperty_default = {
	{(PropertyRNA *)&rna_StringProperty_length_max, nullptr,
	-1, "default", 262144, 0, 0, 0, 0, "Default",
	"String default value",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	StringProperty_default_value_get, StringProperty_default_value_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_StringProperty_length_max = {
	{nullptr, (PropertyRNA *)&rna_StringProperty_default,
	-1, "length_max", 2, 0, 0, 0, 0, "Maximum Length",
	"Maximum length of the string, 0 means unlimited",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	StringProperty_length_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_StringProperty = {
	{(ContainerRNA *)&RNA_EnumProperty, (ContainerRNA *)&RNA_FloatProperty,
	nullptr,
	{(PropertyRNA *)&rna_StringProperty_default, (PropertyRNA *)&rna_StringProperty_length_max}},
	"StringProperty", nullptr, nullptr, 516, nullptr, "String Definition",
	"RNA text string property definition",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Enum Definition */
static const EnumPropertyItem rna_EnumProperty_default_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_EnumProperty_default = {
	{(PropertyRNA *)&rna_EnumProperty_default_flag, nullptr,
	-1, "default", 2, 0, 0, 0, 0, "Default",
	"Default value for this enum",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumProperty_default_value_get, nullptr, rna_EnumProperty_default_itemf, nullptr, nullptr, rna_EnumProperty_default_items, 1, 0
};

static const EnumPropertyItem rna_EnumProperty_default_flag_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_EnumProperty_default_flag = {
	{(PropertyRNA *)&rna_EnumProperty_enum_items, (PropertyRNA *)&rna_EnumProperty_default,
	-1, "default_flag", 2097154, 0, 0, 0, 0, "Default",
	"Default value for this enum",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumProperty_default_flag_get, nullptr, rna_EnumProperty_default_itemf, nullptr, nullptr, rna_EnumProperty_default_flag_items, 1, 0
};

CollectionPropertyRNA rna_EnumProperty_enum_items = {
	{(PropertyRNA *)&rna_EnumProperty_enum_items_static, (PropertyRNA *)&rna_EnumProperty_default_flag,
	-1, "enum_items", 0, 0, 0, 8, 0, "Items",
	"Possible values for the property",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumProperty_enum_items_begin, EnumProperty_enum_items_next, EnumProperty_enum_items_end, EnumProperty_enum_items_get, nullptr, nullptr, nullptr, nullptr, &RNA_EnumPropertyItem
};

CollectionPropertyRNA rna_EnumProperty_enum_items_static = {
	{(PropertyRNA *)&rna_EnumProperty_enum_items_static_ui, (PropertyRNA *)&rna_EnumProperty_enum_items,
	-1, "enum_items_static", 0, 0, 0, 8, 0, "Static Items",
	"Possible values for the property (never calls optional dynamic generation of those)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumProperty_enum_items_static_begin, EnumProperty_enum_items_static_next, EnumProperty_enum_items_static_end, EnumProperty_enum_items_static_get, nullptr, nullptr, nullptr, nullptr, &RNA_EnumPropertyItem
};

CollectionPropertyRNA rna_EnumProperty_enum_items_static_ui = {
	{nullptr, (PropertyRNA *)&rna_EnumProperty_enum_items_static,
	-1, "enum_items_static_ui", 0, 0, 0, 8, 0, "Static Items with UI Elements",
	"Possible values for the property (never calls optional dynamic generation of those). Includes UI elements (separators and section headings)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumProperty_enum_items_static_ui_begin, EnumProperty_enum_items_static_ui_next, EnumProperty_enum_items_static_ui_end, EnumProperty_enum_items_static_ui_get, nullptr, nullptr, nullptr, nullptr, &RNA_EnumPropertyItem
};

StructRNA RNA_EnumProperty = {
	{(ContainerRNA *)&RNA_EnumPropertyItem, (ContainerRNA *)&RNA_StringProperty,
	nullptr,
	{(PropertyRNA *)&rna_EnumProperty_default, (PropertyRNA *)&rna_EnumProperty_enum_items_static_ui}},
	"EnumProperty", nullptr, nullptr, 516, nullptr, "Enum Definition",
	"RNA enumeration property definition, to choose from a number of predefined options",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Enum Item Definition */
CollectionPropertyRNA rna_EnumPropertyItem_rna_properties = {
	{(PropertyRNA *)&rna_EnumPropertyItem_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_rna_properties_begin, EnumPropertyItem_rna_properties_next, EnumPropertyItem_rna_properties_end, EnumPropertyItem_rna_properties_get, nullptr, nullptr, EnumPropertyItem_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_EnumPropertyItem_rna_type = {
	{(PropertyRNA *)&rna_EnumPropertyItem_name, (PropertyRNA *)&rna_EnumPropertyItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_EnumPropertyItem_name = {
	{(PropertyRNA *)&rna_EnumPropertyItem_description, (PropertyRNA *)&rna_EnumPropertyItem_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Human readable name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_name_get, EnumPropertyItem_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_EnumPropertyItem_description = {
	{(PropertyRNA *)&rna_EnumPropertyItem_identifier, (PropertyRNA *)&rna_EnumPropertyItem_name,
	-1, "description", 262144, 0, 0, 0, 0, "Description",
	"Description of the item\'s purpose",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_description_get, EnumPropertyItem_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_EnumPropertyItem_identifier = {
	{(PropertyRNA *)&rna_EnumPropertyItem_value, (PropertyRNA *)&rna_EnumPropertyItem_description,
	-1, "identifier", 262144, 0, 0, 0, 0, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_identifier_get, EnumPropertyItem_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_EnumPropertyItem_value = {
	{(PropertyRNA *)&rna_EnumPropertyItem_icon, (PropertyRNA *)&rna_EnumPropertyItem_identifier,
	-1, "value", 2, 0, 0, 0, 0, "Value",
	"Value of the item",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

EnumPropertyRNA rna_EnumPropertyItem_icon = {
	{nullptr, (PropertyRNA *)&rna_EnumPropertyItem_value,
	-1, "icon", 2, 0, 0, 0, 0, "Icon",
	"Icon of the item",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EnumPropertyItem_icon_get, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 838, 0
};

StructRNA RNA_EnumPropertyItem = {
	{(ContainerRNA *)&RNA_PointerProperty, (ContainerRNA *)&RNA_EnumProperty,
	nullptr,
	{(PropertyRNA *)&rna_EnumPropertyItem_rna_properties, (PropertyRNA *)&rna_EnumPropertyItem_icon}},
	"EnumPropertyItem", nullptr, nullptr, 516, nullptr, "Enum Item Definition",
	"Definition of a choice in an RNA enum property",
	"*", 206,
	(PropertyRNA *)&rna_EnumPropertyItem_identifier, (PropertyRNA *)&rna_EnumPropertyItem_rna_properties,
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

/* Pointer Definition */
PointerPropertyRNA rna_PointerProperty_fixed_type = {
	{nullptr, nullptr,
	-1, "fixed_type", 8388608, 0, 0, 0, 0, "Pointer Type",
	"Fixed pointer type, empty if variable type",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointerProperty_fixed_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_PointerProperty = {
	{(ContainerRNA *)&RNA_CollectionProperty, (ContainerRNA *)&RNA_EnumPropertyItem,
	nullptr,
	{(PropertyRNA *)&rna_PointerProperty_fixed_type, (PropertyRNA *)&rna_PointerProperty_fixed_type}},
	"PointerProperty", nullptr, nullptr, 516, nullptr, "Pointer Definition",
	"RNA pointer property to point to another RNA struct",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Collection Definition */
PointerPropertyRNA rna_CollectionProperty_fixed_type = {
	{nullptr, nullptr,
	-1, "fixed_type", 8388608, 0, 0, 0, 0, "Pointer Type",
	"Fixed pointer type, empty if variable type",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollectionProperty_fixed_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_CollectionProperty = {
	{(ContainerRNA *)&RNA_Function, (ContainerRNA *)&RNA_PointerProperty,
	nullptr,
	{(PropertyRNA *)&rna_CollectionProperty_fixed_type, (PropertyRNA *)&rna_CollectionProperty_fixed_type}},
	"CollectionProperty", nullptr, nullptr, 516, nullptr, "Collection Definition",
	"RNA collection property to define lists, arrays and mappings",
	"*", 206,
	(PropertyRNA *)&rna_Property_identifier, (PropertyRNA *)&rna_Property_rna_properties,
	&RNA_Property,
	nullptr,
	rna_Property_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Function Definition */
CollectionPropertyRNA rna_Function_rna_properties = {
	{(PropertyRNA *)&rna_Function_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_rna_properties_begin, Function_rna_properties_next, Function_rna_properties_end, Function_rna_properties_get, nullptr, nullptr, Function_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Function_rna_type = {
	{(PropertyRNA *)&rna_Function_identifier, (PropertyRNA *)&rna_Function_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Function_identifier = {
	{(PropertyRNA *)&rna_Function_description, (PropertyRNA *)&rna_Function_rna_type,
	-1, "identifier", 262144, 0, 0, 0, 0, "Identifier",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_identifier_get, Function_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Function_description = {
	{(PropertyRNA *)&rna_Function_parameters, (PropertyRNA *)&rna_Function_identifier,
	-1, "description", 262144, 0, 0, 0, 0, "Description",
	"Description of the Function\'s purpose",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_description_get, Function_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

CollectionPropertyRNA rna_Function_parameters = {
	{(PropertyRNA *)&rna_Function_is_registered, (PropertyRNA *)&rna_Function_description,
	-1, "parameters", 0, 0, 0, 0, 0, "Parameters",
	"Parameters for the function",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_parameters_begin, Function_parameters_next, Function_parameters_end, Function_parameters_get, nullptr, nullptr, nullptr, nullptr, &RNA_Property
};

BoolPropertyRNA rna_Function_is_registered = {
	{(PropertyRNA *)&rna_Function_is_registered_optional, (PropertyRNA *)&rna_Function_parameters,
	-1, "is_registered", 2, 0, 0, 0, 0, "Registered",
	"Function is registered as callback as part of type registration",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_is_registered_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Function_is_registered_optional = {
	{(PropertyRNA *)&rna_Function_use_self, (PropertyRNA *)&rna_Function_is_registered,
	-1, "is_registered_optional", 2, 0, 0, 0, 0, "Registered Optionally",
	"Function is optionally registered as callback part of type registration",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_is_registered_optional_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Function_use_self = {
	{(PropertyRNA *)&rna_Function_use_self_type, (PropertyRNA *)&rna_Function_is_registered_optional,
	-1, "use_self", 2, 0, 0, 0, 0, "No Self",
	"Function does not pass itself as an argument (becomes a static method in Python)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_use_self_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Function_use_self_type = {
	{nullptr, (PropertyRNA *)&rna_Function_use_self,
	-1, "use_self_type", 2, 0, 0, 0, 0, "Use Self Type",
	"Function passes itself type as an argument (becomes a class method in Python if use_self is false)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Function_use_self_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_Function = {
	{(ContainerRNA *)&RNA_BlenderRNA, (ContainerRNA *)&RNA_CollectionProperty,
	nullptr,
	{(PropertyRNA *)&rna_Function_rna_properties, (PropertyRNA *)&rna_Function_use_self_type}},
	"Function", nullptr, nullptr, 516, nullptr, "Function Definition",
	"RNA function definition",
	"*", 206,
	(PropertyRNA *)&rna_Function_identifier, (PropertyRNA *)&rna_Function_rna_properties,
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

/* Blender RNA */
CollectionPropertyRNA rna_BlenderRNA_rna_properties = {
	{(PropertyRNA *)&rna_BlenderRNA_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlenderRNA_rna_properties_begin, BlenderRNA_rna_properties_next, BlenderRNA_rna_properties_end, BlenderRNA_rna_properties_get, nullptr, nullptr, BlenderRNA_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlenderRNA_rna_type = {
	{(PropertyRNA *)&rna_BlenderRNA_structs, (PropertyRNA *)&rna_BlenderRNA_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlenderRNA_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_BlenderRNA_structs = {
	{nullptr, (PropertyRNA *)&rna_BlenderRNA_rna_type,
	-1, "structs", 0, 0, 0, 0, 0, "Structs",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlenderRNA_structs_begin, BlenderRNA_structs_next, BlenderRNA_structs_end, BlenderRNA_structs_get, BlenderRNA_structs_length, BlenderRNA_structs_lookup_int, BlenderRNA_structs_lookup_string, nullptr, &RNA_Struct
};

StructRNA RNA_BlenderRNA = {
	{(ContainerRNA *)&RNA_PrimitiveString, (ContainerRNA *)&RNA_Function,
	nullptr,
	{(PropertyRNA *)&rna_BlenderRNA_rna_properties, (PropertyRNA *)&rna_BlenderRNA_structs}},
	"BlenderRNA", nullptr, nullptr, 516, nullptr, "Blender RNA",
	"Blender RNA structure definitions",
	"*", 206,
	nullptr, (PropertyRNA *)&rna_BlenderRNA_rna_properties,
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

/* String Value */
CollectionPropertyRNA rna_PrimitiveString_rna_properties = {
	{(PropertyRNA *)&rna_PrimitiveString_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveString_rna_properties_begin, PrimitiveString_rna_properties_next, PrimitiveString_rna_properties_end, PrimitiveString_rna_properties_get, nullptr, nullptr, PrimitiveString_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PrimitiveString_rna_type = {
	{(PropertyRNA *)&rna_PrimitiveString_value, (PropertyRNA *)&rna_PrimitiveString_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveString_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_PrimitiveString_value = {
	{nullptr, (PropertyRNA *)&rna_PrimitiveString_rna_type,
	-1, "value", 262144, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_BYTESTRING | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveString_value_get, PrimitiveString_value_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_PrimitiveString = {
	{(ContainerRNA *)&RNA_PrimitiveInt, (ContainerRNA *)&RNA_BlenderRNA,
	nullptr,
	{(PropertyRNA *)&rna_PrimitiveString_rna_properties, (PropertyRNA *)&rna_PrimitiveString_value}},
	"PrimitiveString", nullptr, nullptr, 516, nullptr, "String Value",
	"RNA wrapped string",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PrimitiveString_rna_properties,
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

/* Primitive Int */
CollectionPropertyRNA rna_PrimitiveInt_rna_properties = {
	{(PropertyRNA *)&rna_PrimitiveInt_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveInt_rna_properties_begin, PrimitiveInt_rna_properties_next, PrimitiveInt_rna_properties_end, PrimitiveInt_rna_properties_get, nullptr, nullptr, PrimitiveInt_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PrimitiveInt_rna_type = {
	{(PropertyRNA *)&rna_PrimitiveInt_value, (PropertyRNA *)&rna_PrimitiveInt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveInt_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_PrimitiveInt_value = {
	{nullptr, (PropertyRNA *)&rna_PrimitiveInt_rna_type,
	-1, "value", 2, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveInt_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_PrimitiveInt = {
	{(ContainerRNA *)&RNA_PrimitiveFloat, (ContainerRNA *)&RNA_PrimitiveString,
	nullptr,
	{(PropertyRNA *)&rna_PrimitiveInt_rna_properties, (PropertyRNA *)&rna_PrimitiveInt_value}},
	"PrimitiveInt", nullptr, nullptr, 516, nullptr, "Primitive Int",
	"RNA wrapped int",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PrimitiveInt_rna_properties,
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

/* Primitive Float */
CollectionPropertyRNA rna_PrimitiveFloat_rna_properties = {
	{(PropertyRNA *)&rna_PrimitiveFloat_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveFloat_rna_properties_begin, PrimitiveFloat_rna_properties_next, PrimitiveFloat_rna_properties_end, PrimitiveFloat_rna_properties_get, nullptr, nullptr, PrimitiveFloat_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PrimitiveFloat_rna_type = {
	{(PropertyRNA *)&rna_PrimitiveFloat_value, (PropertyRNA *)&rna_PrimitiveFloat_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveFloat_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_PrimitiveFloat_value = {
	{nullptr, (PropertyRNA *)&rna_PrimitiveFloat_rna_type,
	-1, "value", 2, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveFloat_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_PrimitiveFloat = {
	{(ContainerRNA *)&RNA_PrimitiveBoolean, (ContainerRNA *)&RNA_PrimitiveInt,
	nullptr,
	{(PropertyRNA *)&rna_PrimitiveFloat_rna_properties, (PropertyRNA *)&rna_PrimitiveFloat_value}},
	"PrimitiveFloat", nullptr, nullptr, 516, nullptr, "Primitive Float",
	"RNA wrapped float",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PrimitiveFloat_rna_properties,
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

/* Primitive Boolean */
CollectionPropertyRNA rna_PrimitiveBoolean_rna_properties = {
	{(PropertyRNA *)&rna_PrimitiveBoolean_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveBoolean_rna_properties_begin, PrimitiveBoolean_rna_properties_next, PrimitiveBoolean_rna_properties_end, PrimitiveBoolean_rna_properties_get, nullptr, nullptr, PrimitiveBoolean_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PrimitiveBoolean_rna_type = {
	{(PropertyRNA *)&rna_PrimitiveBoolean_value, (PropertyRNA *)&rna_PrimitiveBoolean_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveBoolean_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_PrimitiveBoolean_value = {
	{nullptr, (PropertyRNA *)&rna_PrimitiveBoolean_rna_type,
	-1, "value", 2, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PrimitiveBoolean_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_PrimitiveBoolean = {
	{(ContainerRNA *)&RNA_UnknownType, (ContainerRNA *)&RNA_PrimitiveFloat,
	nullptr,
	{(PropertyRNA *)&rna_PrimitiveBoolean_rna_properties, (PropertyRNA *)&rna_PrimitiveBoolean_value}},
	"PrimitiveBoolean", nullptr, nullptr, 516, nullptr, "Primitive Boolean",
	"RNA wrapped boolean",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PrimitiveBoolean_rna_properties,
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

