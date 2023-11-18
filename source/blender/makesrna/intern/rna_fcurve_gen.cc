
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

#include "rna_fcurve.cc"
#include "rna_fcurve_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_FCurve_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FCurve_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_FCurve_extrapolation;
RNA_EXTERN_C PointerPropertyRNA rna_FCurve_driver;
RNA_EXTERN_C PointerPropertyRNA rna_FCurve_group;
RNA_EXTERN_C StringPropertyRNA rna_FCurve_data_path;
RNA_EXTERN_C IntPropertyRNA rna_FCurve_array_index;
RNA_EXTERN_C EnumPropertyRNA rna_FCurve_color_mode;
RNA_EXTERN_C FloatPropertyRNA rna_FCurve_color;
RNA_EXTERN_C BoolPropertyRNA rna_FCurve_select;
RNA_EXTERN_C BoolPropertyRNA rna_FCurve_lock;
RNA_EXTERN_C BoolPropertyRNA rna_FCurve_mute;
RNA_EXTERN_C BoolPropertyRNA rna_FCurve_hide;
RNA_EXTERN_C EnumPropertyRNA rna_FCurve_auto_smoothing;
RNA_EXTERN_C BoolPropertyRNA rna_FCurve_is_valid;
RNA_EXTERN_C BoolPropertyRNA rna_FCurve_is_empty;
RNA_EXTERN_C CollectionPropertyRNA rna_FCurve_sampled_points;
RNA_EXTERN_C CollectionPropertyRNA rna_FCurve_keyframe_points;
RNA_EXTERN_C CollectionPropertyRNA rna_FCurve_modifiers;

extern FunctionRNA rna_FCurve_evaluate_func;
extern FloatPropertyRNA rna_FCurve_evaluate_frame;
extern FloatPropertyRNA rna_FCurve_evaluate_value;

extern FunctionRNA rna_FCurve_update_func;
extern FunctionRNA rna_FCurve_range_func;
extern FloatPropertyRNA rna_FCurve_range_range;

extern FunctionRNA rna_FCurve_update_autoflags_func;
extern PointerPropertyRNA rna_FCurve_update_autoflags_data;

extern FunctionRNA rna_FCurve_convert_to_samples_func;
extern IntPropertyRNA rna_FCurve_convert_to_samples_start;
extern IntPropertyRNA rna_FCurve_convert_to_samples_end;

extern FunctionRNA rna_FCurve_convert_to_keyframes_func;
extern IntPropertyRNA rna_FCurve_convert_to_keyframes_start;
extern IntPropertyRNA rna_FCurve_convert_to_keyframes_end;



RNA_EXTERN_C CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FCurveKeyframePoints_rna_type;

extern FunctionRNA rna_FCurveKeyframePoints_insert_func;
extern FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame;
extern FloatPropertyRNA rna_FCurveKeyframePoints_insert_value;
extern EnumPropertyRNA rna_FCurveKeyframePoints_insert_options;
extern EnumPropertyRNA rna_FCurveKeyframePoints_insert_keyframe_type;
extern PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe;

extern FunctionRNA rna_FCurveKeyframePoints_add_func;
extern IntPropertyRNA rna_FCurveKeyframePoints_add_count;

extern FunctionRNA rna_FCurveKeyframePoints_remove_func;
extern PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe;
extern BoolPropertyRNA rna_FCurveKeyframePoints_remove_fast;

extern FunctionRNA rna_FCurveKeyframePoints_clear_func;
extern FunctionRNA rna_FCurveKeyframePoints_sort_func;
extern FunctionRNA rna_FCurveKeyframePoints_deduplicate_func;
extern FunctionRNA rna_FCurveKeyframePoints_handles_recalc_func;


RNA_EXTERN_C CollectionPropertyRNA rna_FCurveModifiers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FCurveModifiers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_FCurveModifiers_active;

extern FunctionRNA rna_FCurveModifiers_new_func;
extern PointerPropertyRNA rna_FCurveModifiers_new_fmodifier;
extern EnumPropertyRNA rna_FCurveModifiers_new_type;

extern FunctionRNA rna_FCurveModifiers_remove_func;
extern PointerPropertyRNA rna_FCurveModifiers_remove_modifier;



RNA_EXTERN_C CollectionPropertyRNA rna_Keyframe_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Keyframe_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_Keyframe_select_left_handle;
RNA_EXTERN_C BoolPropertyRNA rna_Keyframe_select_right_handle;
RNA_EXTERN_C BoolPropertyRNA rna_Keyframe_select_control_point;
RNA_EXTERN_C EnumPropertyRNA rna_Keyframe_handle_left_type;
RNA_EXTERN_C EnumPropertyRNA rna_Keyframe_handle_right_type;
RNA_EXTERN_C EnumPropertyRNA rna_Keyframe_interpolation;
RNA_EXTERN_C EnumPropertyRNA rna_Keyframe_type;
RNA_EXTERN_C EnumPropertyRNA rna_Keyframe_easing;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_back;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_amplitude;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_period;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_handle_left;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_co;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_co_ui;
RNA_EXTERN_C FloatPropertyRNA rna_Keyframe_handle_right;


RNA_EXTERN_C CollectionPropertyRNA rna_FCurveSample_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FCurveSample_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_FCurveSample_select;
RNA_EXTERN_C FloatPropertyRNA rna_FCurveSample_co;


RNA_EXTERN_C CollectionPropertyRNA rna_DriverTarget_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DriverTarget_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_DriverTarget_id;
RNA_EXTERN_C EnumPropertyRNA rna_DriverTarget_id_type;
RNA_EXTERN_C StringPropertyRNA rna_DriverTarget_data_path;
RNA_EXTERN_C StringPropertyRNA rna_DriverTarget_bone_target;
RNA_EXTERN_C EnumPropertyRNA rna_DriverTarget_transform_type;
RNA_EXTERN_C EnumPropertyRNA rna_DriverTarget_rotation_mode;
RNA_EXTERN_C EnumPropertyRNA rna_DriverTarget_transform_space;
RNA_EXTERN_C EnumPropertyRNA rna_DriverTarget_context_property;


RNA_EXTERN_C CollectionPropertyRNA rna_DriverVariable_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_DriverVariable_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_DriverVariable_name;
RNA_EXTERN_C EnumPropertyRNA rna_DriverVariable_type;
RNA_EXTERN_C CollectionPropertyRNA rna_DriverVariable_targets;
RNA_EXTERN_C BoolPropertyRNA rna_DriverVariable_is_name_valid;


RNA_EXTERN_C CollectionPropertyRNA rna_Driver_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Driver_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_Driver_type;
RNA_EXTERN_C StringPropertyRNA rna_Driver_expression;
RNA_EXTERN_C CollectionPropertyRNA rna_Driver_variables;
RNA_EXTERN_C BoolPropertyRNA rna_Driver_use_self;
RNA_EXTERN_C BoolPropertyRNA rna_Driver_is_valid;
RNA_EXTERN_C BoolPropertyRNA rna_Driver_is_simple_expression;


RNA_EXTERN_C CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ChannelDriverVariables_rna_type;

extern FunctionRNA rna_ChannelDriverVariables_new_func;
extern PointerPropertyRNA rna_ChannelDriverVariables_new_var;

extern FunctionRNA rna_ChannelDriverVariables_remove_func;
extern PointerPropertyRNA rna_ChannelDriverVariables_remove_variable;



RNA_EXTERN_C CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C FloatPropertyRNA rna_FModifier_influence;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C BoolPropertyRNA rna_FModifierGenerator_use_additive;
RNA_EXTERN_C EnumPropertyRNA rna_FModifierGenerator_mode;
RNA_EXTERN_C IntPropertyRNA rna_FModifierGenerator_poly_order;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierGenerator_coefficients;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset;
RNA_EXTERN_C BoolPropertyRNA rna_FModifierFunctionGenerator_use_additive;
RNA_EXTERN_C EnumPropertyRNA rna_FModifierFunctionGenerator_function_type;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C CollectionPropertyRNA rna_FModifierEnvelope_control_points;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierEnvelope_reference_value;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierEnvelope_default_min;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierEnvelope_default_max;


RNA_EXTERN_C CollectionPropertyRNA rna_FModifierEnvelopeControlPoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FModifierEnvelopeControlPoints_rna_type;

extern FunctionRNA rna_FModifierEnvelopeControlPoints_add_func;
extern FloatPropertyRNA rna_FModifierEnvelopeControlPoints_add_frame;
extern PointerPropertyRNA rna_FModifierEnvelopeControlPoints_add_point;

extern FunctionRNA rna_FModifierEnvelopeControlPoints_remove_func;
extern PointerPropertyRNA rna_FModifierEnvelopeControlPoints_remove_point;



RNA_EXTERN_C CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C EnumPropertyRNA rna_FModifierCycles_mode_before;
RNA_EXTERN_C IntPropertyRNA rna_FModifierCycles_cycles_before;
RNA_EXTERN_C EnumPropertyRNA rna_FModifierCycles_mode_after;
RNA_EXTERN_C IntPropertyRNA rna_FModifierCycles_cycles_after;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C BoolPropertyRNA rna_FModifierLimits_use_min_x;
RNA_EXTERN_C BoolPropertyRNA rna_FModifierLimits_use_min_y;
RNA_EXTERN_C BoolPropertyRNA rna_FModifierLimits_use_max_x;
RNA_EXTERN_C BoolPropertyRNA rna_FModifierLimits_use_max_y;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierLimits_min_x;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierLimits_min_y;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierLimits_max_x;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierLimits_max_y;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C EnumPropertyRNA rna_FModifierNoise_blend_type;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierNoise_scale;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierNoise_strength;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierNoise_phase;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierNoise_offset;
RNA_EXTERN_C IntPropertyRNA rna_FModifierNoise_depth;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_FModifier_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_FModifier_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_FModifier_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_FModifier_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_show_expanded;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_mute;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_is_valid;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_active;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_restricted_range;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_frame_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_in;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_blend_out;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_FModifier_use_influence;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_FModifier_influence;

RNA_EXTERN_C FloatPropertyRNA rna_FModifierStepped_frame_step;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierStepped_frame_offset;
RNA_EXTERN_C BoolPropertyRNA rna_FModifierStepped_use_frame_start;
RNA_EXTERN_C BoolPropertyRNA rna_FModifierStepped_use_frame_end;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierStepped_frame_start;
RNA_EXTERN_C FloatPropertyRNA rna_FModifierStepped_frame_end;

static PointerRNA FCurve_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FCurve_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurve_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurve_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurve_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FCurve_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FCurve_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int FCurve_extrapolation_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->extend);
}

RNA_EXTERN_C void FCurve_extrapolation_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
#ifdef __cplusplus
    data->extend = (std::remove_reference_t<decltype(data->extend)>)value;
#else
    data->extend = value;
#endif
}

RNA_EXTERN_C PointerRNA FCurve_driver_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Driver, data->driver);
}

RNA_EXTERN_C PointerRNA FCurve_group_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ActionGroup, data->grp);
}

RNA_EXTERN_C void FCurve_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_FCurve_group_set(ptr, value, reports);
}

RNA_EXTERN_C void FCurve_data_path_get(PointerRNA *ptr, char *value)
{
    rna_FCurve_RnaPath_get(ptr, value);
}

RNA_EXTERN_C int FCurve_data_path_length(PointerRNA *ptr)
{
    return rna_FCurve_RnaPath_length(ptr);
}

RNA_EXTERN_C void FCurve_data_path_set(PointerRNA *ptr, const char *value)
{
    rna_FCurve_RnaPath_set(ptr, value);
}

RNA_EXTERN_C int FCurve_array_index_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->array_index);
}

RNA_EXTERN_C void FCurve_array_index_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
#ifdef __cplusplus
    data->array_index = (std::remove_reference_t<decltype(data->array_index)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->array_index = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C int FCurve_color_mode_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->color_mode);
}

RNA_EXTERN_C void FCurve_color_mode_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
#ifdef __cplusplus
    data->color_mode = (std::remove_reference_t<decltype(data->color_mode)>)value;
#else
    data->color_mode = value;
#endif
}

RNA_EXTERN_C void FCurve_color_get(PointerRNA *ptr, float values[3])
{
    FCurve *data = (FCurve *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void FCurve_color_set(PointerRNA *ptr, const float values[3])
{
    FCurve *data = (FCurve *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C bool FCurve_select_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void FCurve_select_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool FCurve_lock_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void FCurve_lock_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool FCurve_mute_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void FCurve_mute_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool FCurve_hide_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FCurve_hide_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int FCurve_auto_smoothing_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->auto_smoothing);
}

RNA_EXTERN_C void FCurve_auto_smoothing_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
#ifdef __cplusplus
    data->auto_smoothing = (std::remove_reference_t<decltype(data->auto_smoothing)>)value;
#else
    data->auto_smoothing = value;
#endif
}

RNA_EXTERN_C bool FCurve_is_valid_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return !(((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void FCurve_is_valid_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (!value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool FCurve_is_empty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_FCurve_is_empty_get;
    return fn(ptr);
}

RNA_EXTERN_C int FCurve_sampled_points_length(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (data->fpt == nullptr) ? 0 : data->totvert;
}

static PointerRNA FCurve_sampled_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurveSample, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void FCurve_sampled_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_sampled_points;

    rna_iterator_array_begin(iter, data->fpt, sizeof(data->fpt[0]), data->totvert, 0, nullptr);

    if (iter->valid) {
        iter->ptr = FCurve_sampled_points_get(iter);
    }
}

RNA_EXTERN_C void FCurve_sampled_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_sampled_points_get(iter);
    }
}

RNA_EXTERN_C void FCurve_sampled_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int FCurve_sampled_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FCurve_sampled_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_sampled_points_get(&iter); }
    }

    FCurve_sampled_points_end(&iter);

    return found;
}

RNA_EXTERN_C int FCurve_keyframe_points_length(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (data->bezt == nullptr) ? 0 : data->totvert;
}

static PointerRNA FCurve_keyframe_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Keyframe, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void FCurve_keyframe_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_keyframe_points;

    rna_iterator_array_begin(iter, data->bezt, sizeof(data->bezt[0]), data->totvert, 0, nullptr);

    if (iter->valid) {
        iter->ptr = FCurve_keyframe_points_get(iter);
    }
}

RNA_EXTERN_C void FCurve_keyframe_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_keyframe_points_get(iter);
    }
}

RNA_EXTERN_C void FCurve_keyframe_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int FCurve_keyframe_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FCurve_keyframe_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_keyframe_points_get(&iter); }
    }

    FCurve_keyframe_points_end(&iter);

    return found;
}

static PointerRNA FCurve_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifier, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void FCurve_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_modifiers;

    rna_iterator_listbase_begin(iter, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = FCurve_modifiers_get(iter);
    }
}

RNA_EXTERN_C void FCurve_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_modifiers_get(iter);
    }
}

RNA_EXTERN_C void FCurve_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FCurve_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FCurve_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_modifiers_get(&iter); }
    }

    FCurve_modifiers_end(&iter);

    return found;
}

RNA_EXTERN_C int FModifier_name_length(PointerRNA *);
RNA_EXTERN_C void FModifier_name_get(PointerRNA *, char *);

RNA_EXTERN_C int FCurve_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    FCurve_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                FModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                FModifier_name_get(&iter.ptr, name);
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
        FCurve_modifiers_next(&iter);
    }
    FCurve_modifiers_end(&iter);

    return found;
}

static PointerRNA FCurveKeyframePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FCurveKeyframePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveKeyframePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurveKeyframePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurveKeyframePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurveKeyframePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FCurveKeyframePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FCurveKeyframePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FCurveModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FCurveModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurveModifiers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveModifiers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurveModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurveModifiers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurveModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FCurveModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FCurveModifiers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA FCurveModifiers_active_get(PointerRNA *ptr)
{
    return rna_FCurve_active_modifier_get(ptr);
}

RNA_EXTERN_C void FCurveModifiers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_FCurve_active_modifier_set(ptr, value, reports);
}

static PointerRNA Keyframe_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Keyframe_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Keyframe_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Keyframe_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Keyframe_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Keyframe_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Keyframe_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Keyframe_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Keyframe_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool Keyframe_select_left_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

RNA_EXTERN_C void Keyframe_select_left_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

RNA_EXTERN_C bool Keyframe_select_right_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f3) & 1) != 0);
}

RNA_EXTERN_C void Keyframe_select_right_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f3 |= 1; }
    else { data->f3 &= ~1; }
}

RNA_EXTERN_C bool Keyframe_select_control_point_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f2) & 1) != 0);
}

RNA_EXTERN_C void Keyframe_select_control_point_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f2 |= 1; }
    else { data->f2 &= ~1; }
}

RNA_EXTERN_C int Keyframe_handle_left_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h1);
}

RNA_EXTERN_C void Keyframe_handle_left_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->h1 = (std::remove_reference_t<decltype(data->h1)>)value;
#else
    data->h1 = value;
#endif
}

RNA_EXTERN_C int Keyframe_handle_right_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h2);
}

RNA_EXTERN_C void Keyframe_handle_right_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->h2 = (std::remove_reference_t<decltype(data->h2)>)value;
#else
    data->h2 = value;
#endif
}

RNA_EXTERN_C int Keyframe_interpolation_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->ipo);
}

RNA_EXTERN_C void Keyframe_interpolation_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->ipo = (std::remove_reference_t<decltype(data->ipo)>)value;
#else
    data->ipo = value;
#endif
}

RNA_EXTERN_C int Keyframe_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->hide);
}

RNA_EXTERN_C void Keyframe_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->hide = (std::remove_reference_t<decltype(data->hide)>)value;
#else
    data->hide = value;
#endif
}

RNA_EXTERN_C int Keyframe_easing_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->easing);
}

RNA_EXTERN_C void Keyframe_easing_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->easing = (std::remove_reference_t<decltype(data->easing)>)value;
#else
    data->easing = value;
#endif
}

RNA_EXTERN_C float Keyframe_back_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->back);
}

RNA_EXTERN_C void Keyframe_back_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->back = (std::remove_reference_t<decltype(data->back)>)value;
#else
    data->back = value;
#endif
}

RNA_EXTERN_C float Keyframe_amplitude_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->amplitude);
}

RNA_EXTERN_C void Keyframe_amplitude_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->amplitude = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Keyframe_period_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->period);
}

RNA_EXTERN_C void Keyframe_period_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->period = (std::remove_reference_t<decltype(data->period)>)value;
#else
    data->period = value;
#endif
}

RNA_EXTERN_C void Keyframe_handle_left_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_handle1_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_handle_left_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_handle1_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_co_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_ctrlpoint_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_co_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_ctrlpoint_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_co_ui_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_ctrlpoint_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_co_ui_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_ctrlpoint_ui_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_handle_right_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_FKeyframe_handle2_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Keyframe_handle_right_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_FKeyframe_handle2_set;
    fn(ptr, values);
}

static PointerRNA FCurveSample_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FCurveSample_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurveSample_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveSample_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurveSample_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurveSample_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FCurveSample_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FCurveSample_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FCurveSample_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool FCurveSample_select_get(PointerRNA *ptr)
{
    FPoint *data = (FPoint *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FCurveSample_select_set(PointerRNA *ptr, bool value)
{
    FPoint *data = (FPoint *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C void FCurveSample_co_get(PointerRNA *ptr, float values[2])
{
    FPoint *data = (FPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

RNA_EXTERN_C void FCurveSample_co_set(PointerRNA *ptr, const float values[2])
{
    FPoint *data = (FPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

static PointerRNA DriverTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DriverTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DriverTarget_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DriverTarget_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DriverTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DriverTarget_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DriverTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DriverTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DriverTarget_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA DriverTarget_id_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

RNA_EXTERN_C void DriverTarget_id_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_DriverTarget_id_set(ptr, value, reports);
}

RNA_EXTERN_C int DriverTarget_id_type_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->idtype);
}

RNA_EXTERN_C void DriverTarget_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_DriverTarget_id_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C void DriverTarget_data_path_get(PointerRNA *ptr, char *value)
{
    rna_DriverTarget_RnaPath_get(ptr, value);
}

RNA_EXTERN_C int DriverTarget_data_path_length(PointerRNA *ptr)
{
    return rna_DriverTarget_RnaPath_length(ptr);
}

RNA_EXTERN_C void DriverTarget_data_path_set(PointerRNA *ptr, const char *value)
{
    rna_DriverTarget_RnaPath_set(ptr, value);
}

RNA_EXTERN_C void DriverTarget_bone_target_get(PointerRNA *ptr, char *value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    BLI_assert(strlen(data->pchan_name) < 64);
    strcpy(value, data->pchan_name);
}

RNA_EXTERN_C int DriverTarget_bone_target_length(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return strlen(data->pchan_name);
}

RNA_EXTERN_C void DriverTarget_bone_target_set(PointerRNA *ptr, const char *value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    BLI_strncpy_utf8(data->pchan_name, value, 64);
}

RNA_EXTERN_C int DriverTarget_transform_type_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->transChan);
}

RNA_EXTERN_C void DriverTarget_transform_type_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
#ifdef __cplusplus
    data->transChan = (std::remove_reference_t<decltype(data->transChan)>)value;
#else
    data->transChan = value;
#endif
}

RNA_EXTERN_C int DriverTarget_rotation_mode_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->rotation_mode);
}

RNA_EXTERN_C void DriverTarget_rotation_mode_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
#ifdef __cplusplus
    data->rotation_mode = (std::remove_reference_t<decltype(data->rotation_mode)>)value;
#else
    data->rotation_mode = value;
#endif
}

RNA_EXTERN_C int DriverTarget_transform_space_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return ((data->flag) & 12);
}

RNA_EXTERN_C void DriverTarget_transform_space_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->flag &= ~12;
    data->flag |= value;
}

RNA_EXTERN_C int DriverTarget_context_property_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->context_property);
}

RNA_EXTERN_C void DriverTarget_context_property_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
#ifdef __cplusplus
    data->context_property = (std::remove_reference_t<decltype(data->context_property)>)value;
#else
    data->context_property = value;
#endif
}

static PointerRNA DriverVariable_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void DriverVariable_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DriverVariable_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DriverVariable_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DriverVariable_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DriverVariable_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void DriverVariable_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int DriverVariable_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA DriverVariable_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void DriverVariable_name_get(PointerRNA *ptr, char *value)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int DriverVariable_name_length(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void DriverVariable_name_set(PointerRNA *ptr, const char *value)
{
    rna_DriverVariable_name_set(ptr, value);
}

RNA_EXTERN_C int DriverVariable_type_get(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void DriverVariable_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_DriverVariable_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int DriverVariable_targets_length(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return data->num_targets;
}

static PointerRNA DriverVariable_targets_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_DriverTarget, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void DriverVariable_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DriverVariable_targets;

    rna_iterator_array_begin(iter, data->targets, sizeof(data->targets[0]), data->num_targets, 0, nullptr);

    if (iter->valid) {
        iter->ptr = DriverVariable_targets_get(iter);
    }
}

RNA_EXTERN_C void DriverVariable_targets_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = DriverVariable_targets_get(iter);
    }
}

RNA_EXTERN_C void DriverVariable_targets_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int DriverVariable_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    DriverVariable_targets_begin(&iter, ptr);

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
        if (found) { *r_ptr = DriverVariable_targets_get(&iter); }
    }

    DriverVariable_targets_end(&iter);

    return found;
}

RNA_EXTERN_C bool DriverVariable_is_name_valid_get(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

static PointerRNA Driver_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Driver_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Driver_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Driver_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Driver_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Driver_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Driver_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Driver_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Driver_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int Driver_type_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void Driver_type_set(PointerRNA *ptr, int value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C void Driver_expression_get(PointerRNA *ptr, char *value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    BLI_assert(strlen(data->expression) < 256);
    strcpy(value, data->expression);
}

RNA_EXTERN_C int Driver_expression_length(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return strlen(data->expression);
}

RNA_EXTERN_C void Driver_expression_set(PointerRNA *ptr, const char *value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    BLI_strncpy_utf8(data->expression, value, 256);
}

static PointerRNA Driver_variables_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_DriverVariable, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Driver_variables_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Driver_variables;

    rna_iterator_listbase_begin(iter, &data->variables, nullptr);

    if (iter->valid) {
        iter->ptr = Driver_variables_get(iter);
    }
}

RNA_EXTERN_C void Driver_variables_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Driver_variables_get(iter);
    }
}

RNA_EXTERN_C void Driver_variables_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Driver_variables_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Driver_variables_begin(&iter, ptr);

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
        if (found) { *r_ptr = Driver_variables_get(&iter); }
    }

    Driver_variables_end(&iter);

    return found;
}

RNA_EXTERN_C int DriverVariable_name_length(PointerRNA *);
RNA_EXTERN_C void DriverVariable_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Driver_variables_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Driver_variables_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = DriverVariable_name_length(&iter.ptr);
            if (namelen < 1024) {
                DriverVariable_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                DriverVariable_name_get(&iter.ptr, name);
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
        Driver_variables_next(&iter);
    }
    Driver_variables_end(&iter);

    return found;
}

RNA_EXTERN_C bool Driver_use_self_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void Driver_use_self_set(PointerRNA *ptr, bool value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool Driver_is_valid_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Driver_is_valid_set(PointerRNA *ptr, bool value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool Driver_is_simple_expression_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ChannelDriver_is_simple_expression_get;
    return fn(ptr);
}

static PointerRNA ChannelDriverVariables_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ChannelDriverVariables_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ChannelDriverVariables_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ChannelDriverVariables_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ChannelDriverVariables_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ChannelDriverVariables_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ChannelDriverVariables_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ChannelDriverVariables_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ChannelDriverVariables_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifier_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifier_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FModifier_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FModifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FModifier_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void FModifier_name_get(PointerRNA *ptr, char *value)
{
    FModifier *data = (FModifier *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int FModifier_name_length(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void FModifier_name_set(PointerRNA *ptr, const char *value)
{
    rna_fModifier_name_set(ptr, value);
}

RNA_EXTERN_C int FModifier_type_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C bool FModifier_show_expanded_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

RNA_EXTERN_C void FModifier_show_expanded_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_FModifier_show_expanded_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool FModifier_mute_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void FModifier_mute_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool FModifier_is_valid_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool FModifier_active_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void FModifier_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_FModifier_active_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool FModifier_use_restricted_range_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void FModifier_use_restricted_range_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C float FModifier_frame_start_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->sfra);
}

RNA_EXTERN_C void FModifier_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifier_start_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FModifier_frame_end_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->efra);
}

RNA_EXTERN_C void FModifier_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifier_end_frame_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FModifier_blend_in_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->blendin);
}

RNA_EXTERN_C void FModifier_blend_in_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_FModifier_blending_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->blendin = (std::remove_reference_t<decltype(data->blendin)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->blendin = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C float FModifier_blend_out_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->blendout);
}

RNA_EXTERN_C void FModifier_blend_out_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_FModifier_blending_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->blendout = (std::remove_reference_t<decltype(data->blendout)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->blendout = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C bool FModifier_use_influence_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void FModifier_use_influence_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C float FModifier_influence_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->influence);
}

RNA_EXTERN_C void FModifier_influence_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
#ifdef __cplusplus
    data->influence = (std::remove_reference_t<decltype(data->influence)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->influence = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool FModifierGenerator_use_additive_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FModifierGenerator_use_additive_set(PointerRNA *ptr, bool value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int FModifierGenerator_mode_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void FModifierGenerator_mode_set(PointerRNA *ptr, int value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C int FModifierGenerator_poly_order_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (int)(data->poly_order);
}

RNA_EXTERN_C void FModifierGenerator_poly_order_set(PointerRNA *ptr, int value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->poly_order = (std::remove_reference_t<decltype(data->poly_order)>)CLAMPIS(value, 1, 100);
#else
    data->poly_order = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C void FModifierGenerator_coefficients_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FModifierGenerator_coefficients_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FModifierGenerator_coefficients_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_FModifierGenerator_coefficients_set;
    fn(ptr, values);
}

RNA_EXTERN_C float FModifierFunctionGenerator_amplitude_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->amplitude);
}

RNA_EXTERN_C void FModifierFunctionGenerator_amplitude_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)value;
#else
    data->amplitude = value;
#endif
}

RNA_EXTERN_C float FModifierFunctionGenerator_phase_multiplier_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase_multiplier);
}

RNA_EXTERN_C void FModifierFunctionGenerator_phase_multiplier_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->phase_multiplier = (std::remove_reference_t<decltype(data->phase_multiplier)>)value;
#else
    data->phase_multiplier = value;
#endif
}

RNA_EXTERN_C float FModifierFunctionGenerator_phase_offset_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase_offset);
}

RNA_EXTERN_C void FModifierFunctionGenerator_phase_offset_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->phase_offset = (std::remove_reference_t<decltype(data->phase_offset)>)value;
#else
    data->phase_offset = value;
#endif
}

RNA_EXTERN_C float FModifierFunctionGenerator_value_offset_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->value_offset);
}

RNA_EXTERN_C void FModifierFunctionGenerator_value_offset_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->value_offset = (std::remove_reference_t<decltype(data->value_offset)>)value;
#else
    data->value_offset = value;
#endif
}

RNA_EXTERN_C bool FModifierFunctionGenerator_use_additive_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FModifierFunctionGenerator_use_additive_set(PointerRNA *ptr, bool value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int FModifierFunctionGenerator_function_type_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (int)(data->type);
}

RNA_EXTERN_C void FModifierFunctionGenerator_function_type_set(PointerRNA *ptr, int value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C int FModifierEnvelope_control_points_length(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (data->data == nullptr) ? 0 : data->totvert;
}

static PointerRNA FModifierEnvelope_control_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifierEnvelopeControlPoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void FModifierEnvelope_control_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifierEnvelope_control_points;

    rna_iterator_array_begin(iter, data->data, sizeof(data->data[0]), data->totvert, 0, nullptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelope_control_points_get(iter);
    }
}

RNA_EXTERN_C void FModifierEnvelope_control_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelope_control_points_get(iter);
    }
}

RNA_EXTERN_C void FModifierEnvelope_control_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int FModifierEnvelope_control_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FModifierEnvelope_control_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FModifierEnvelope_control_points_get(&iter); }
    }

    FModifierEnvelope_control_points_end(&iter);

    return found;
}

RNA_EXTERN_C float FModifierEnvelope_reference_value_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->midval);
}

RNA_EXTERN_C void FModifierEnvelope_reference_value_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->midval = (std::remove_reference_t<decltype(data->midval)>)value;
#else
    data->midval = value;
#endif
}

RNA_EXTERN_C float FModifierEnvelope_default_min_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->min);
}

RNA_EXTERN_C void FModifierEnvelope_default_min_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->min = (std::remove_reference_t<decltype(data->min)>)value;
#else
    data->min = value;
#endif
}

RNA_EXTERN_C float FModifierEnvelope_default_max_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->max);
}

RNA_EXTERN_C void FModifierEnvelope_default_max_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->max = (std::remove_reference_t<decltype(data->max)>)value;
#else
    data->max = value;
#endif
}

static PointerRNA FModifierEnvelopeControlPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FModifierEnvelopeControlPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FModifierEnvelopeControlPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FModifierEnvelopeControlPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FModifierEnvelopeControlPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FModifierEnvelopeControlPoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FModifierEnvelopeControlPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FModifierEnvelopeControlPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FModifierEnvelopeControlPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FModifierEnvelopeControlPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FModifierEnvelopeControlPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FModifierEnvelopeControlPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float FModifierEnvelopeControlPoint_min_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->min);
}

RNA_EXTERN_C void FModifierEnvelopeControlPoint_min_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
#ifdef __cplusplus
    data->min = (std::remove_reference_t<decltype(data->min)>)value;
#else
    data->min = value;
#endif
}

RNA_EXTERN_C float FModifierEnvelopeControlPoint_max_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->max);
}

RNA_EXTERN_C void FModifierEnvelopeControlPoint_max_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
#ifdef __cplusplus
    data->max = (std::remove_reference_t<decltype(data->max)>)value;
#else
    data->max = value;
#endif
}

RNA_EXTERN_C float FModifierEnvelopeControlPoint_frame_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->time);
}

RNA_EXTERN_C void FModifierEnvelopeControlPoint_frame_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
#ifdef __cplusplus
    data->time = (std::remove_reference_t<decltype(data->time)>)value;
#else
    data->time = value;
#endif
}

RNA_EXTERN_C int FModifierCycles_mode_before_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->before_mode);
}

RNA_EXTERN_C void FModifierCycles_mode_before_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->before_mode = (std::remove_reference_t<decltype(data->before_mode)>)value;
#else
    data->before_mode = value;
#endif
}

RNA_EXTERN_C int FModifierCycles_cycles_before_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->before_cycles);
}

RNA_EXTERN_C void FModifierCycles_cycles_before_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->before_cycles = (std::remove_reference_t<decltype(data->before_cycles)>)CLAMPIS(value, -32768, 32767);
#else
    data->before_cycles = CLAMPIS(value, -32768, 32767);
#endif
}

RNA_EXTERN_C int FModifierCycles_mode_after_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->after_mode);
}

RNA_EXTERN_C void FModifierCycles_mode_after_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->after_mode = (std::remove_reference_t<decltype(data->after_mode)>)value;
#else
    data->after_mode = value;
#endif
}

RNA_EXTERN_C int FModifierCycles_cycles_after_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->after_cycles);
}

RNA_EXTERN_C void FModifierCycles_cycles_after_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->after_cycles = (std::remove_reference_t<decltype(data->after_cycles)>)CLAMPIS(value, -32768, 32767);
#else
    data->after_cycles = CLAMPIS(value, -32768, 32767);
#endif
}

RNA_EXTERN_C bool FModifierLimits_use_min_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FModifierLimits_use_min_x_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool FModifierLimits_use_min_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void FModifierLimits_use_min_y_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool FModifierLimits_use_max_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void FModifierLimits_use_max_x_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool FModifierLimits_use_max_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void FModifierLimits_use_max_y_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C float FModifierLimits_min_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.xmin);
}

RNA_EXTERN_C void FModifierLimits_min_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_minx_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FModifierLimits_min_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.ymin);
}

RNA_EXTERN_C void FModifierLimits_min_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_miny_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FModifierLimits_max_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.xmax);
}

RNA_EXTERN_C void FModifierLimits_max_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_maxx_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FModifierLimits_max_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.ymax);
}

RNA_EXTERN_C void FModifierLimits_max_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierLimits_maxy_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FModifierNoise_blend_type_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (int)(data->modification);
}

RNA_EXTERN_C void FModifierNoise_blend_type_set(PointerRNA *ptr, int value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->modification = (std::remove_reference_t<decltype(data->modification)>)value;
#else
    data->modification = value;
#endif
}

RNA_EXTERN_C float FModifierNoise_scale_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->size);
}

RNA_EXTERN_C void FModifierNoise_scale_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->size = (std::remove_reference_t<decltype(data->size)>)value;
#else
    data->size = value;
#endif
}

RNA_EXTERN_C float FModifierNoise_strength_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->strength);
}

RNA_EXTERN_C void FModifierNoise_strength_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->strength = (std::remove_reference_t<decltype(data->strength)>)value;
#else
    data->strength = value;
#endif
}

RNA_EXTERN_C float FModifierNoise_phase_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase);
}

RNA_EXTERN_C void FModifierNoise_phase_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->phase = (std::remove_reference_t<decltype(data->phase)>)value;
#else
    data->phase = value;
#endif
}

RNA_EXTERN_C float FModifierNoise_offset_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->offset);
}

RNA_EXTERN_C void FModifierNoise_offset_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
#else
    data->offset = value;
#endif
}

RNA_EXTERN_C int FModifierNoise_depth_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (int)(data->depth);
}

RNA_EXTERN_C void FModifierNoise_depth_set(PointerRNA *ptr, int value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->depth = (std::remove_reference_t<decltype(data->depth)>)CLAMPIS(value, 0, 32767);
#else
    data->depth = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C float FModifierStepped_frame_step_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->step_size);
}

RNA_EXTERN_C void FModifierStepped_frame_step_set(PointerRNA *ptr, float value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->step_size = (std::remove_reference_t<decltype(data->step_size)>)value;
#else
    data->step_size = value;
#endif
}

RNA_EXTERN_C float FModifierStepped_frame_offset_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->offset);
}

RNA_EXTERN_C void FModifierStepped_frame_offset_set(PointerRNA *ptr, float value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
#ifdef __cplusplus
    data->offset = (std::remove_reference_t<decltype(data->offset)>)value;
#else
    data->offset = value;
#endif
}

RNA_EXTERN_C bool FModifierStepped_use_frame_start_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FModifierStepped_use_frame_start_set(PointerRNA *ptr, bool value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool FModifierStepped_use_frame_end_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void FModifierStepped_use_frame_end_set(PointerRNA *ptr, bool value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C float FModifierStepped_frame_start_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->start_frame);
}

RNA_EXTERN_C void FModifierStepped_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierStepped_frame_start_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FModifierStepped_frame_end_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->end_frame);
}

RNA_EXTERN_C void FModifierStepped_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_FModifierStepped_frame_end_set;
    fn(ptr, value);
}

RNA_EXTERN_C float FCurve_evaluate_func(struct FCurve *_self, float frame)
{
	return evaluate_fcurve(_self, frame);
}

static void FCurve_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float frame;
	float value;
	char *_data, *_retdata;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	value = evaluate_fcurve(_self, frame);
	*((float *)_retdata) = value;
}

RNA_EXTERN_C void FCurve_update_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FCurve_update_data_ex(_selfid, _self, bmain);
}

static void FCurve_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FCurve_update_data_ex(_selfid, _self, CTX_data_main(C));
}

RNA_EXTERN_C void FCurve_range_func(struct FCurve *_self, float range[2])
{
	rna_FCurve_range(_self, range);
}

static void FCurve_range_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float *range;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	range = ((float *)_data);
	
	rna_FCurve_range(_self, range);
}

RNA_EXTERN_C void FCurve_update_autoflags_func(struct FCurve *_self, bContext *C, ReportList *reports, struct PointerRNA *data)
{
	update_autoflags_fcurve(_self, C, reports, data);
}

static void FCurve_update_autoflags_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct PointerRNA *data;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	
	update_autoflags_fcurve(_self, C, reports, data);
}

RNA_EXTERN_C void FCurve_convert_to_samples_func(struct FCurve *_self, ReportList *reports, int start, int end)
{
	rna_FCurve_convert_to_samples(_self, reports, start, end);
}

static void FCurve_convert_to_samples_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	int start;
	int end;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	
	rna_FCurve_convert_to_samples(_self, reports, start, end);
}

RNA_EXTERN_C void FCurve_convert_to_keyframes_func(struct FCurve *_self, ReportList *reports, int start, int end)
{
	rna_FCurve_convert_to_keyframes(_self, reports, start, end);
}

static void FCurve_convert_to_keyframes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	int start;
	int end;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	
	rna_FCurve_convert_to_keyframes(_self, reports, start, end);
}

/* Repeated prototypes to detect errors */

float evaluate_fcurve(struct FCurve *_self, float frame);
void rna_FCurve_update_data_ex(struct ID *_selfid, struct FCurve *_self, Main *bmain);
void rna_FCurve_range(struct FCurve *_self, float range[2]);
void update_autoflags_fcurve(struct FCurve *_self, bContext *C, ReportList *reports, struct PointerRNA *data);
void rna_FCurve_convert_to_samples(struct FCurve *_self, ReportList *reports, int start, int end);
void rna_FCurve_convert_to_keyframes(struct FCurve *_self, ReportList *reports, int start, int end);

RNA_EXTERN_C struct BezTriple *FCurveKeyframePoints_insert_func(struct ID *_selfid, struct FCurve *_self, Main *bmain, float frame, float value, int options, int keyframe_type)
{
	return rna_FKeyframe_points_insert(_selfid, _self, bmain, frame, value, options, keyframe_type);
}

static void FCurveKeyframePoints_insert_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	float frame;
	float value;
	int options;
	int keyframe_type;
	struct BezTriple *keyframe;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	value = *((float *)_data);
	_data += 8;
	options = *((int *)_data);
	_data += 8;
	keyframe_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	keyframe = rna_FKeyframe_points_insert(_selfid, _self, CTX_data_main(C), frame, value, options, keyframe_type);
	*((struct BezTriple **)_retdata) = keyframe;
}

RNA_EXTERN_C void FCurveKeyframePoints_add_func(struct ID *_selfid, struct FCurve *_self, Main *bmain, int count)
{
	rna_FKeyframe_points_add(_selfid, _self, bmain, count);
}

static void FCurveKeyframePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_FKeyframe_points_add(_selfid, _self, CTX_data_main(C), count);
}

RNA_EXTERN_C void FCurveKeyframePoints_remove_func(struct ID *_selfid, struct FCurve *_self, Main *bmain, ReportList *reports, struct PointerRNA *keyframe, bool fast)
{
	rna_FKeyframe_points_remove(_selfid, _self, bmain, reports, keyframe, fast);
}

static void FCurveKeyframePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	struct PointerRNA *keyframe;
	bool fast;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	keyframe = *((struct PointerRNA **)_data);
	_data += 8;
	fast = *((bool *)_data);
	
	rna_FKeyframe_points_remove(_selfid, _self, CTX_data_main(C), reports, keyframe, fast);
}

RNA_EXTERN_C void FCurveKeyframePoints_clear_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_clear(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FKeyframe_points_clear(_selfid, _self, CTX_data_main(C));
}

RNA_EXTERN_C void FCurveKeyframePoints_sort_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_sort(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_sort_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FKeyframe_points_sort(_selfid, _self, CTX_data_main(C));
}

RNA_EXTERN_C void FCurveKeyframePoints_deduplicate_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_deduplicate(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_deduplicate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FKeyframe_points_deduplicate(_selfid, _self, CTX_data_main(C));
}

RNA_EXTERN_C void FCurveKeyframePoints_handles_recalc_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_handles_recalc(_selfid, _self, bmain);
}

static void FCurveKeyframePoints_handles_recalc_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FKeyframe_points_handles_recalc(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

struct BezTriple *rna_FKeyframe_points_insert(struct ID *_selfid, struct FCurve *_self, Main *bmain, float frame, float value, int options, int keyframe_type);
void rna_FKeyframe_points_add(struct ID *_selfid, struct FCurve *_self, Main *bmain, int count);
void rna_FKeyframe_points_remove(struct ID *_selfid, struct FCurve *_self, Main *bmain, ReportList *reports, struct PointerRNA *keyframe, bool fast);
void rna_FKeyframe_points_clear(struct ID *_selfid, struct FCurve *_self, Main *bmain);
void rna_FKeyframe_points_sort(struct ID *_selfid, struct FCurve *_self, Main *bmain);
void rna_FKeyframe_points_deduplicate(struct ID *_selfid, struct FCurve *_self, Main *bmain);
void rna_FKeyframe_points_handles_recalc(struct ID *_selfid, struct FCurve *_self, Main *bmain);

RNA_EXTERN_C struct FModifier *FCurveModifiers_new_func(struct FCurve *_self, int type)
{
	return rna_FCurve_modifiers_new(_self, type);
}

static void FCurveModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct FModifier *fmodifier;
	int type;
	char *_data, *_retdata;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	type = *((int *)_data);
	
	fmodifier = rna_FCurve_modifiers_new(_self, type);
	*((struct FModifier **)_retdata) = fmodifier;
}

RNA_EXTERN_C void FCurveModifiers_remove_func(struct FCurve *_self, ReportList *reports, struct PointerRNA *modifier)
{
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

static void FCurveModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct FModifier *rna_FCurve_modifiers_new(struct FCurve *_self, int type);
void rna_FCurve_modifiers_remove(struct FCurve *_self, ReportList *reports, struct PointerRNA *modifier);






RNA_EXTERN_C struct DriverVar *ChannelDriverVariables_new_func(struct ChannelDriver *_self)
{
	return rna_Driver_new_variable(_self);
}

static void ChannelDriverVariables_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ChannelDriver *_self;
	struct DriverVar *var;
	char *_data, *_retdata;
	
	_self = (struct ChannelDriver *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	var = rna_Driver_new_variable(_self);
	*((struct DriverVar **)_retdata) = var;
}

RNA_EXTERN_C void ChannelDriverVariables_remove_func(struct ChannelDriver *_self, ReportList *reports, struct PointerRNA *variable)
{
	rna_Driver_remove_variable(_self, reports, variable);
}

static void ChannelDriverVariables_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ChannelDriver *_self;
	struct PointerRNA *variable;
	char *_data;
	
	_self = (struct ChannelDriver *)_ptr->data;
	_data = (char *)_parms->data;
	variable = *((struct PointerRNA **)_data);
	
	rna_Driver_remove_variable(_self, reports, variable);
}

/* Repeated prototypes to detect errors */

struct DriverVar *rna_Driver_new_variable(struct ChannelDriver *_self);
void rna_Driver_remove_variable(struct ChannelDriver *_self, ReportList *reports, struct PointerRNA *variable);


RNA_EXTERN_C int FModifierGenerator_coefficients_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FModifierGenerator_coefficients_get_length(ptr, arraylen);
}




RNA_EXTERN_C struct FCM_EnvelopeData *FModifierEnvelopeControlPoints_add_func(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, float frame)
{
	return rna_FModifierEnvelope_points_add(_selfid, _self, bmain, reports, frame);
}

static void FModifierEnvelopeControlPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FModifier *_self;
	float frame;
	struct FCM_EnvelopeData *point;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FModifier *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = rna_FModifierEnvelope_points_add(_selfid, _self, CTX_data_main(C), reports, frame);
	*((struct FCM_EnvelopeData **)_retdata) = point;
}

RNA_EXTERN_C void FModifierEnvelopeControlPoints_remove_func(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, struct PointerRNA *point)
{
	rna_FModifierEnvelope_points_remove(_selfid, _self, bmain, reports, point);
}

static void FModifierEnvelopeControlPoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FModifier *_self;
	struct PointerRNA *point;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FModifier *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((struct PointerRNA *)_data);
	
	rna_FModifierEnvelope_points_remove(_selfid, _self, CTX_data_main(C), reports, point);
}

/* Repeated prototypes to detect errors */

struct FCM_EnvelopeData *rna_FModifierEnvelope_points_add(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, float frame);
void rna_FModifierEnvelope_points_remove(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, struct PointerRNA *point);







/* F-Curve */
CollectionPropertyRNA rna_FCurve_rna_properties = {
	{(PropertyRNA *)&rna_FCurve_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_rna_properties_begin, FCurve_rna_properties_next, FCurve_rna_properties_end, FCurve_rna_properties_get, nullptr, nullptr, FCurve_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FCurve_rna_type = {
	{(PropertyRNA *)&rna_FCurve_extrapolation, (PropertyRNA *)&rna_FCurve_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_FCurve_extrapolation_items[3] = {
	{0, "CONSTANT", 0, "Constant", "Hold values of endpoint keyframes"},
	{1, "LINEAR", 0, "Linear", "Use slope of curve leading in/out of endpoint keyframes"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FCurve_extrapolation = {
	{(PropertyRNA *)&rna_FCurve_driver, (PropertyRNA *)&rna_FCurve_rna_type,
	-1, "extrapolation", 3, 0, 0, 4, 0, "Extrapolation",
	"Method used for evaluating value of F-Curve outside first and last keyframes",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, extend), (RawPropertyType)1, nullptr},
	FCurve_extrapolation_get, FCurve_extrapolation_set, nullptr, nullptr, nullptr, rna_FCurve_extrapolation_items, 2, 0
};

PointerPropertyRNA rna_FCurve_driver = {
	{(PropertyRNA *)&rna_FCurve_group, (PropertyRNA *)&rna_FCurve_extrapolation,
	-1, "driver", 8388608, 1, 0, 0, 0, "Driver",
	"Channel Driver (only set for Driver F-Curves)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_driver_get, nullptr, nullptr, nullptr,&RNA_Driver
};

PointerPropertyRNA rna_FCurve_group = {
	{(PropertyRNA *)&rna_FCurve_data_path, (PropertyRNA *)&rna_FCurve_driver,
	-1, "group", 8388737, 0, 0, 0, 0, "Group",
	"Action Group that this F-Curve belongs to",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 251658240, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_group_get, FCurve_group_set, nullptr, nullptr,&RNA_ActionGroup
};

StringPropertyRNA rna_FCurve_data_path = {
	{(PropertyRNA *)&rna_FCurve_array_index, (PropertyRNA *)&rna_FCurve_group,
	-1, "data_path", 262145, 0, 0, 0, 0, "Data Path",
	"RNA Path to property affected by F-Curve",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data_relations, 251658240, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_data_path_get, FCurve_data_path_length, FCurve_data_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_FCurve_array_index = {
	{(PropertyRNA *)&rna_FCurve_color_mode, (PropertyRNA *)&rna_FCurve_data_path,
	-1, "array_index", 3, 0, 0, 4, 0, "RNA Array Index",
	"Index to the specific property affected by F-Curve if applicable",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data_relations, 251658240, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, array_index), (RawPropertyType)0, nullptr},
	FCurve_array_index_get, FCurve_array_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_FCurve_color_mode_items[5] = {
	{0, "AUTO_RAINBOW", 0, "Auto Rainbow", "Cycle through the rainbow, trying to give each curve a unique color"},
	{1, "AUTO_RGB", 0, "Auto XYZ to RGB", "Use axis colors for transform and color properties, and auto-rainbow for the rest"},
	{3, "AUTO_YRGB", 0, "Auto WXYZ to YRGB", "Use axis colors for XYZ parts of transform, and yellow for the \'W\' channel"},
	{2, "CUSTOM", 0, "User Defined", "Use custom hand-picked color for F-Curve"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FCurve_color_mode = {
	{(PropertyRNA *)&rna_FCurve_color, (PropertyRNA *)&rna_FCurve_array_index,
	-1, "color_mode", 3, 0, 0, 4, 0, "Color Mode",
	"Method used to determine color of F-Curve in Graph Editor",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 251658240, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, color_mode), (RawPropertyType)0, nullptr},
	FCurve_color_mode_get, FCurve_color_mode_set, nullptr, nullptr, nullptr, rna_FCurve_color_mode_items, 4, 0
};

static float rna_FCurve_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurve_color = {
	{(PropertyRNA *)&rna_FCurve_select, (PropertyRNA *)&rna_FCurve_color_mode,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Color of the F-Curve in the Graph Editor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 251658240, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FCurve_color_get, FCurve_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_FCurve_color_default
};

BoolPropertyRNA rna_FCurve_select = {
	{(PropertyRNA *)&rna_FCurve_lock, (PropertyRNA *)&rna_FCurve_color,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"F-Curve is selected for editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256245766, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_select_get, FCurve_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FCurve_lock = {
	{(PropertyRNA *)&rna_FCurve_mute, (PropertyRNA *)&rna_FCurve_select,
	-1, "lock", 3, 0, 0, 0, 0, "Lock",
	"F-Curve\'s settings cannot be edited",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_lock_get, FCurve_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FCurve_mute = {
	{(PropertyRNA *)&rna_FCurve_hide, (PropertyRNA *)&rna_FCurve_lock,
	-1, "mute", 3, 1, 0, 0, 0, "Muted",
	"Disable F-Curve evaluation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FCurve_update_eval, 256376833, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_mute_get, FCurve_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FCurve_hide = {
	{(PropertyRNA *)&rna_FCurve_auto_smoothing, (PropertyRNA *)&rna_FCurve_mute,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"F-Curve and its keyframes are hidden in the Graph Editor graphs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 269352960, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_hide_get, FCurve_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_FCurve_auto_smoothing = {
	{(PropertyRNA *)&rna_FCurve_is_valid, (PropertyRNA *)&rna_FCurve_hide,
	-1, "auto_smoothing", 3, 0, 0, 4, 0, "Auto Handle Smoothing",
	"Algorithm used to compute automatic handles",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, auto_smoothing), (RawPropertyType)2, nullptr},
	FCurve_auto_smoothing_get, FCurve_auto_smoothing_set, nullptr, nullptr, nullptr, rna_enum_fcurve_auto_smoothing_items, 2, 0
};

BoolPropertyRNA rna_FCurve_is_valid = {
	{(PropertyRNA *)&rna_FCurve_is_empty, (PropertyRNA *)&rna_FCurve_auto_smoothing,
	-1, "is_valid", 3, 0, 0, 0, 0, "Valid",
	"False when F-Curve could not be evaluated in past, so should be skipped when evaluating",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_is_valid_get, FCurve_is_valid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FCurve_is_empty = {
	{(PropertyRNA *)&rna_FCurve_sampled_points, (PropertyRNA *)&rna_FCurve_is_valid,
	-1, "is_empty", 2, 0, 0, 0, 0, "Empty",
	"True if the curve contributes no animation due to lack of keyframes or useful modifiers, and should be deleted",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_is_empty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_FCurve_sampled_points = {
	{(PropertyRNA *)&rna_FCurve_keyframe_points, (PropertyRNA *)&rna_FCurve_is_empty,
	-1, "sampled_points", 0, 0, 0, 8, 0, "Sampled Points",
	"Sampled animation data",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurve_sampled_points_begin, FCurve_sampled_points_next, FCurve_sampled_points_end, FCurve_sampled_points_get, FCurve_sampled_points_length, FCurve_sampled_points_lookup_int, nullptr, nullptr, &RNA_FCurveSample
};

CollectionPropertyRNA rna_FCurve_keyframe_points = {
	{(PropertyRNA *)&rna_FCurve_modifiers, (PropertyRNA *)&rna_FCurve_sampled_points,
	-1, "keyframe_points", 0, 0, 0, 8, 0, "Keyframes",
	"User-editable keyframes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_FCurveKeyframePoints},
	FCurve_keyframe_points_begin, FCurve_keyframe_points_next, FCurve_keyframe_points_end, FCurve_keyframe_points_get, FCurve_keyframe_points_length, FCurve_keyframe_points_lookup_int, nullptr, nullptr, &RNA_Keyframe
};

CollectionPropertyRNA rna_FCurve_modifiers = {
	{nullptr, (PropertyRNA *)&rna_FCurve_keyframe_points,
	-1, "modifiers", 0, 0, 0, 0, 0, "Modifiers",
	"Modifiers affecting the shape of the F-Curve",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_FCurveModifiers},
	FCurve_modifiers_begin, FCurve_modifiers_next, FCurve_modifiers_end, FCurve_modifiers_get, nullptr, FCurve_modifiers_lookup_int, FCurve_modifiers_lookup_string, nullptr, &RNA_FModifier
};

FloatPropertyRNA rna_FCurve_evaluate_frame = {
	{(PropertyRNA *)&rna_FCurve_evaluate_value, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Evaluate F-Curve at given frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_FCurve_evaluate_value = {
	{nullptr, (PropertyRNA *)&rna_FCurve_evaluate_frame,
	-1, "value", 3, 0, 2, 0, 0, "Value",
	"Value of F-Curve specific frame",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_FCurve_evaluate_func = {
	{(FunctionRNA *)&rna_FCurve_update_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_FCurve_evaluate_frame, (PropertyRNA *)&rna_FCurve_evaluate_value}},
	"evaluate", 0, "Evaluate F-Curve",
	FCurve_evaluate_call,
	(PropertyRNA *)&rna_FCurve_evaluate_value
};

FunctionRNA rna_FCurve_update_func = {
	{(FunctionRNA *)&rna_FCurve_range_func, (FunctionRNA *)&rna_FCurve_evaluate_func,
	nullptr,
	{nullptr, nullptr}},
	"update", 2052, "Ensure keyframes are sorted in chronological order and handles are set correctly",
	FCurve_update_call,
	nullptr
};

static float rna_FCurve_range_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurve_range_range = {
	{nullptr, nullptr,
	-1, "range", 8388611, 0, 2, 0, 0, "Range",
	"Min/Max values",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_FCurve_range_range_default
};

FunctionRNA rna_FCurve_range_func = {
	{(FunctionRNA *)&rna_FCurve_update_autoflags_func, (FunctionRNA *)&rna_FCurve_update_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurve_range_range, (PropertyRNA *)&rna_FCurve_range_range}},
	"range", 0, "Get the time extents for F-Curve",
	FCurve_range_call,
	nullptr
};

PointerPropertyRNA rna_FCurve_update_autoflags_data = {
	{nullptr, nullptr,
	-1, "data", 8650752, 0, 5, 0, 0, "Data",
	"Data containing the property controlled by given FCurve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AnyType
};

FunctionRNA rna_FCurve_update_autoflags_func = {
	{(FunctionRNA *)&rna_FCurve_convert_to_samples_func, (FunctionRNA *)&rna_FCurve_range_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurve_update_autoflags_data, (PropertyRNA *)&rna_FCurve_update_autoflags_data}},
	"update_autoflags", 24, "Update FCurve flags set automatically from affected property (currently, integer/discrete flags set when the property is not a float)",
	FCurve_update_autoflags_call,
	nullptr
};

IntPropertyRNA rna_FCurve_convert_to_samples_start = {
	{(PropertyRNA *)&rna_FCurve_convert_to_samples_end, nullptr,
	-1, "start", 3, 0, 1, 0, 0, "Start Frame",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_FCurve_convert_to_samples_end = {
	{nullptr, (PropertyRNA *)&rna_FCurve_convert_to_samples_start,
	-1, "end", 3, 0, 1, 0, 0, "End Frame",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

FunctionRNA rna_FCurve_convert_to_samples_func = {
	{(FunctionRNA *)&rna_FCurve_convert_to_keyframes_func, (FunctionRNA *)&rna_FCurve_update_autoflags_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurve_convert_to_samples_start, (PropertyRNA *)&rna_FCurve_convert_to_samples_end}},
	"convert_to_samples", 16, "Convert current FCurve from keyframes to sample points, if necessary",
	FCurve_convert_to_samples_call,
	nullptr
};

IntPropertyRNA rna_FCurve_convert_to_keyframes_start = {
	{(PropertyRNA *)&rna_FCurve_convert_to_keyframes_end, nullptr,
	-1, "start", 3, 0, 1, 0, 0, "Start Frame",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_FCurve_convert_to_keyframes_end = {
	{nullptr, (PropertyRNA *)&rna_FCurve_convert_to_keyframes_start,
	-1, "end", 3, 0, 1, 0, 0, "End Frame",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

FunctionRNA rna_FCurve_convert_to_keyframes_func = {
	{nullptr, (FunctionRNA *)&rna_FCurve_convert_to_samples_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurve_convert_to_keyframes_start, (PropertyRNA *)&rna_FCurve_convert_to_keyframes_end}},
	"convert_to_keyframes", 16, "Convert current FCurve from sample points to keyframes (linear interpolation), if necessary",
	FCurve_convert_to_keyframes_call,
	nullptr
};

StructRNA RNA_FCurve = {
	{(ContainerRNA *)&RNA_FCurveKeyframePoints, (ContainerRNA *)&RNA_DynamicPaintSurface,
	nullptr,
	{(PropertyRNA *)&rna_FCurve_rna_properties, (PropertyRNA *)&rna_FCurve_modifiers}},
	"FCurve", nullptr, nullptr, 516, nullptr, "F-Curve",
	"F-Curve defining values of a period of time",
	"*", 167,
	nullptr, (PropertyRNA *)&rna_FCurve_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_FCurve_evaluate_func, (FunctionRNA *)&rna_FCurve_convert_to_keyframes_func}
};

/* Keyframe Points */
CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveKeyframePoints_rna_properties_begin, FCurveKeyframePoints_rna_properties_next, FCurveKeyframePoints_rna_properties_end, FCurveKeyframePoints_rna_properties_get, nullptr, nullptr, FCurveKeyframePoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FCurveKeyframePoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveKeyframePoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_value, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "",
	"X Value of this keyframe point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FCurveKeyframePoints_insert_value = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_options, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_frame,
	-1, "value", 3, 0, 1, 0, 0, "",
	"Y Value of this keyframe point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_FCurveKeyframePoints_insert_options_items[4] = {
	{16, "REPLACE", 0, "Replace", "Don\'t add any new keyframes, but just replace existing ones"},
	{1, "NEEDED", 0, "Needed", "Only adds keyframes that are needed"},
	{4, "FAST", 0, "Fast", "Fast keyframe insertion to avoid recalculating the curve each time"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FCurveKeyframePoints_insert_options = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe_type, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_value,
	-1, "options", 2097155, 0, 0, 0, 0, "",
	"Keyframe options",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_FCurveKeyframePoints_insert_options_items, 3, 0
};

EnumPropertyRNA rna_FCurveKeyframePoints_insert_keyframe_type = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_options,
	-1, "keyframe_type", 3, 0, 0, 0, 0, "",
	"Type of keyframe to insert",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_beztriple_keyframe_type_items, 5, 0
};

PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe = {
	{nullptr, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe_type,
	-1, "keyframe", 8388608, 0, 2, 0, 0, "",
	"Newly created keyframe",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Keyframe
};

FunctionRNA rna_FCurveKeyframePoints_insert_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_add_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_frame, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe}},
	"insert", 2052, "Add a keyframe point to a F-Curve",
	FCurveKeyframePoints_insert_call,
	(PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe
};

IntPropertyRNA rna_FCurveKeyframePoints_add_count = {
	{nullptr, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the spline",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 1, nullptr
};

FunctionRNA rna_FCurveKeyframePoints_add_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_remove_func, (FunctionRNA *)&rna_FCurveKeyframePoints_insert_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_add_count, (PropertyRNA *)&rna_FCurveKeyframePoints_add_count}},
	"add", 2052, "Add a keyframe point to a F-Curve",
	FCurveKeyframePoints_add_call,
	nullptr
};

PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_remove_fast, nullptr,
	-1, "keyframe", 262144, 0, 5, 0, 0, "",
	"Keyframe to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Keyframe
};

BoolPropertyRNA rna_FCurveKeyframePoints_remove_fast = {
	{nullptr, (PropertyRNA *)&rna_FCurveKeyframePoints_remove_keyframe,
	-1, "fast", 3, 0, 0, 0, 0, "Fast",
	"Fast keyframe removal to avoid recalculating the curve each time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_FCurveKeyframePoints_remove_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_clear_func, (FunctionRNA *)&rna_FCurveKeyframePoints_add_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_remove_keyframe, (PropertyRNA *)&rna_FCurveKeyframePoints_remove_fast}},
	"remove", 2068, "Remove keyframe from an F-Curve",
	FCurveKeyframePoints_remove_call,
	nullptr
};

FunctionRNA rna_FCurveKeyframePoints_clear_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_sort_func, (FunctionRNA *)&rna_FCurveKeyframePoints_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 2052, "Remove all keyframes from an F-Curve",
	FCurveKeyframePoints_clear_call,
	nullptr
};

FunctionRNA rna_FCurveKeyframePoints_sort_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_deduplicate_func, (FunctionRNA *)&rna_FCurveKeyframePoints_clear_func,
	nullptr,
	{nullptr, nullptr}},
	"sort", 2052, "Ensure all keyframe points are chronologically sorted",
	FCurveKeyframePoints_sort_call,
	nullptr
};

FunctionRNA rna_FCurveKeyframePoints_deduplicate_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_handles_recalc_func, (FunctionRNA *)&rna_FCurveKeyframePoints_sort_func,
	nullptr,
	{nullptr, nullptr}},
	"deduplicate", 2052, "Ensure there are no duplicate keys. Assumes that the points have already been sorted",
	FCurveKeyframePoints_deduplicate_call,
	nullptr
};

FunctionRNA rna_FCurveKeyframePoints_handles_recalc_func = {
	{nullptr, (FunctionRNA *)&rna_FCurveKeyframePoints_deduplicate_func,
	nullptr,
	{nullptr, nullptr}},
	"handles_recalc", 2052, "Update handles after modifications to the keyframe points, to update things like auto-clamping",
	FCurveKeyframePoints_handles_recalc_call,
	nullptr
};

StructRNA RNA_FCurveKeyframePoints = {
	{(ContainerRNA *)&RNA_FCurveModifiers, (ContainerRNA *)&RNA_FCurve,
	nullptr,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties, (PropertyRNA *)&rna_FCurveKeyframePoints_rna_type}},
	"FCurveKeyframePoints", nullptr, nullptr, 516, nullptr, "Keyframe Points",
	"Collection of keyframe points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_FCurveKeyframePoints_insert_func, (FunctionRNA *)&rna_FCurveKeyframePoints_handles_recalc_func}
};

/* F-Curve Modifiers */
CollectionPropertyRNA rna_FCurveModifiers_rna_properties = {
	{(PropertyRNA *)&rna_FCurveModifiers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveModifiers_rna_properties_begin, FCurveModifiers_rna_properties_next, FCurveModifiers_rna_properties_end, FCurveModifiers_rna_properties_get, nullptr, nullptr, FCurveModifiers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FCurveModifiers_rna_type = {
	{(PropertyRNA *)&rna_FCurveModifiers_active, (PropertyRNA *)&rna_FCurveModifiers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveModifiers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_FCurveModifiers_active = {
	{nullptr, (PropertyRNA *)&rna_FCurveModifiers_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active F-Curve Modifier",
	"Active F-Curve Modifier",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveModifiers_active_get, FCurveModifiers_active_set, nullptr, nullptr,&RNA_FModifier
};

PointerPropertyRNA rna_FCurveModifiers_new_fmodifier = {
	{(PropertyRNA *)&rna_FCurveModifiers_new_type, nullptr,
	-1, "fmodifier", 8388608, 0, 2, 0, 0, "",
	"New fmodifier",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FModifier
};

EnumPropertyRNA rna_FCurveModifiers_new_type = {
	{nullptr, (PropertyRNA *)&rna_FCurveModifiers_new_fmodifier,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_fmodifier_type_items, 8, 1
};

FunctionRNA rna_FCurveModifiers_new_func = {
	{(FunctionRNA *)&rna_FCurveModifiers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_FCurveModifiers_new_fmodifier, (PropertyRNA *)&rna_FCurveModifiers_new_type}},
	"new", 0, "Add a constraint to this object",
	FCurveModifiers_new_call,
	(PropertyRNA *)&rna_FCurveModifiers_new_fmodifier
};

PointerPropertyRNA rna_FCurveModifiers_remove_modifier = {
	{nullptr, nullptr,
	-1, "modifier", 262144, 0, 5, 0, 0, "",
	"Removed modifier",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FModifier
};

FunctionRNA rna_FCurveModifiers_remove_func = {
	{nullptr, (FunctionRNA *)&rna_FCurveModifiers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_FCurveModifiers_remove_modifier, (PropertyRNA *)&rna_FCurveModifiers_remove_modifier}},
	"remove", 16, "Remove a modifier from this F-Curve",
	FCurveModifiers_remove_call,
	nullptr
};

StructRNA RNA_FCurveModifiers = {
	{(ContainerRNA *)&RNA_Keyframe, (ContainerRNA *)&RNA_FCurveKeyframePoints,
	nullptr,
	{(PropertyRNA *)&rna_FCurveModifiers_rna_properties, (PropertyRNA *)&rna_FCurveModifiers_active}},
	"FCurveModifiers", nullptr, nullptr, 516, nullptr, "F-Curve Modifiers",
	"Collection of F-Curve Modifiers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FCurveModifiers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_FCurveModifiers_new_func, (FunctionRNA *)&rna_FCurveModifiers_remove_func}
};

/* Keyframe */
CollectionPropertyRNA rna_Keyframe_rna_properties = {
	{(PropertyRNA *)&rna_Keyframe_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_rna_properties_begin, Keyframe_rna_properties_next, Keyframe_rna_properties_end, Keyframe_rna_properties_get, nullptr, nullptr, Keyframe_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Keyframe_rna_type = {
	{(PropertyRNA *)&rna_Keyframe_select_left_handle, (PropertyRNA *)&rna_Keyframe_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_Keyframe_select_left_handle = {
	{(PropertyRNA *)&rna_Keyframe_select_right_handle, (PropertyRNA *)&rna_Keyframe_rna_type,
	-1, "select_left_handle", 3, 0, 0, 0, 0, "Handle 1 selected",
	"Left handle selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256245766, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_select_left_handle_get, Keyframe_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Keyframe_select_right_handle = {
	{(PropertyRNA *)&rna_Keyframe_select_control_point, (PropertyRNA *)&rna_Keyframe_select_left_handle,
	-1, "select_right_handle", 3, 0, 0, 0, 0, "Handle 2 selected",
	"Right handle selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256245766, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_select_right_handle_get, Keyframe_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Keyframe_select_control_point = {
	{(PropertyRNA *)&rna_Keyframe_handle_left_type, (PropertyRNA *)&rna_Keyframe_select_right_handle,
	-1, "select_control_point", 3, 0, 0, 0, 0, "Select",
	"Control point selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256245766, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_select_control_point_get, Keyframe_select_control_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_Keyframe_handle_left_type = {
	{(PropertyRNA *)&rna_Keyframe_handle_right_type, (PropertyRNA *)&rna_Keyframe_select_control_point,
	-1, "handle_left_type", 3, 0, 0, 0, 0, "Left Handle Type",
	"Handle types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_handle_left_type_get, Keyframe_handle_left_type_set, nullptr, nullptr, nullptr, rna_enum_keyframe_handle_type_items, 5, 0
};

EnumPropertyRNA rna_Keyframe_handle_right_type = {
	{(PropertyRNA *)&rna_Keyframe_interpolation, (PropertyRNA *)&rna_Keyframe_handle_left_type,
	-1, "handle_right_type", 3, 0, 0, 0, 0, "Right Handle Type",
	"Handle types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Keyframe_handle_right_type_get, Keyframe_handle_right_type_set, nullptr, nullptr, nullptr, rna_enum_keyframe_handle_type_items, 5, 0
};

EnumPropertyRNA rna_Keyframe_interpolation = {
	{(PropertyRNA *)&rna_Keyframe_type, (PropertyRNA *)&rna_Keyframe_handle_right_type,
	-1, "interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation method to use for segment of the F-Curve from this Keyframe until the next Keyframe",
	0, "Action",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, ipo), (RawPropertyType)2, nullptr},
	Keyframe_interpolation_get, Keyframe_interpolation_set, nullptr, nullptr, nullptr, rna_enum_beztriple_interpolation_mode_items, 16, 0
};

EnumPropertyRNA rna_Keyframe_type = {
	{(PropertyRNA *)&rna_Keyframe_easing, (PropertyRNA *)&rna_Keyframe_interpolation,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Type of keyframe (for visual purposes only)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, hide), (RawPropertyType)2, nullptr},
	Keyframe_type_get, Keyframe_type_set, nullptr, nullptr, nullptr, rna_enum_beztriple_keyframe_type_items, 5, 0
};

EnumPropertyRNA rna_Keyframe_easing = {
	{(PropertyRNA *)&rna_Keyframe_back, (PropertyRNA *)&rna_Keyframe_type,
	-1, "easing", 3, 0, 0, 4, 0, "Easing",
	"Which ends of the segment between this and the next keyframe easing interpolation is applied to",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, easing), (RawPropertyType)2, nullptr},
	Keyframe_easing_get, Keyframe_easing_set, nullptr, nullptr, nullptr, rna_enum_beztriple_interpolation_easing_items, 4, 0
};

FloatPropertyRNA rna_Keyframe_back = {
	{(PropertyRNA *)&rna_Keyframe_amplitude, (PropertyRNA *)&rna_Keyframe_easing,
	-1, "back", 3, 0, 0, 4, 0, "Back",
	"Amount of overshoot for \'back\' easing",
	0, "Action",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, back), (RawPropertyType)5, nullptr},
	Keyframe_back_get, Keyframe_back_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Keyframe_amplitude = {
	{(PropertyRNA *)&rna_Keyframe_period, (PropertyRNA *)&rna_Keyframe_back,
	-1, "amplitude", 3, 0, 0, 4, 0, "Amplitude",
	"Amount to boost elastic bounces for \'elastic\' easing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, amplitude), (RawPropertyType)5, nullptr},
	Keyframe_amplitude_get, Keyframe_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Keyframe_period = {
	{(PropertyRNA *)&rna_Keyframe_handle_left, (PropertyRNA *)&rna_Keyframe_amplitude,
	-1, "period", 3, 0, 0, 4, 0, "Period",
	"Time between bounces for elastic easing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, period), (RawPropertyType)5, nullptr},
	Keyframe_period_get, Keyframe_period_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_Keyframe_handle_left_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_handle_left = {
	{(PropertyRNA *)&rna_Keyframe_co, (PropertyRNA *)&rna_Keyframe_period,
	-1, "handle_left", 3, 0, 0, 0, 0, "Left Handle",
	"Coordinates of the left handle (before the control point)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Keyframe_handle_left_get, Keyframe_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_handle_left_default
};

static float rna_Keyframe_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_co = {
	{(PropertyRNA *)&rna_Keyframe_co_ui, (PropertyRNA *)&rna_Keyframe_handle_left,
	-1, "co", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Keyframe_co_get, Keyframe_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_co_default
};

static float rna_Keyframe_co_ui_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_co_ui = {
	{(PropertyRNA *)&rna_Keyframe_handle_right, (PropertyRNA *)&rna_Keyframe_co,
	-1, "co_ui", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point. Note: Changing this value also updates the handles similar to using the graph editor transform operator",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Keyframe_co_ui_get, Keyframe_co_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_co_ui_default
};

static float rna_Keyframe_handle_right_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_handle_right = {
	{nullptr, (PropertyRNA *)&rna_Keyframe_co_ui,
	-1, "handle_right", 3, 0, 0, 0, 0, "Right Handle",
	"Coordinates of the right handle (after the control point)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Keyframe_handle_right_get, Keyframe_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_handle_right_default
};

StructRNA RNA_Keyframe = {
	{(ContainerRNA *)&RNA_FCurveSample, (ContainerRNA *)&RNA_FCurveModifiers,
	nullptr,
	{(PropertyRNA *)&rna_Keyframe_rna_properties, (PropertyRNA *)&rna_Keyframe_handle_right}},
	"Keyframe", nullptr, nullptr, 516, nullptr, "Keyframe",
	"Bezier curve point with two handles defining a Keyframe on an F-Curve",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Keyframe_rna_properties,
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

/* F-Curve Sample */
CollectionPropertyRNA rna_FCurveSample_rna_properties = {
	{(PropertyRNA *)&rna_FCurveSample_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveSample_rna_properties_begin, FCurveSample_rna_properties_next, FCurveSample_rna_properties_end, FCurveSample_rna_properties_get, nullptr, nullptr, FCurveSample_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FCurveSample_rna_type = {
	{(PropertyRNA *)&rna_FCurveSample_select, (PropertyRNA *)&rna_FCurveSample_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveSample_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_FCurveSample_select = {
	{(PropertyRNA *)&rna_FCurveSample_co, (PropertyRNA *)&rna_FCurveSample_rna_type,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 256245766, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FCurveSample_select_get, FCurveSample_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_FCurveSample_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurveSample_co = {
	{nullptr, (PropertyRNA *)&rna_FCurveSample_select,
	-1, "co", 3, 0, 0, 4, 0, "Point",
	"Point coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COORDS | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FPoint, vec), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FCurveSample_co_get, FCurveSample_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FCurveSample_co_default
};

StructRNA RNA_FCurveSample = {
	{(ContainerRNA *)&RNA_DriverTarget, (ContainerRNA *)&RNA_Keyframe,
	nullptr,
	{(PropertyRNA *)&rna_FCurveSample_rna_properties, (PropertyRNA *)&rna_FCurveSample_co}},
	"FCurveSample", nullptr, nullptr, 516, nullptr, "F-Curve Sample",
	"Sample point for F-Curve",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FCurveSample_rna_properties,
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

/* Driver Target */
CollectionPropertyRNA rna_DriverTarget_rna_properties = {
	{(PropertyRNA *)&rna_DriverTarget_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverTarget_rna_properties_begin, DriverTarget_rna_properties_next, DriverTarget_rna_properties_end, DriverTarget_rna_properties_get, nullptr, nullptr, DriverTarget_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DriverTarget_rna_type = {
	{(PropertyRNA *)&rna_DriverTarget_id, (PropertyRNA *)&rna_DriverTarget_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverTarget_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_DriverTarget_id = {
	{(PropertyRNA *)&rna_DriverTarget_id_type, (PropertyRNA *)&rna_DriverTarget_rna_type,
	-1, "id", 8388801, 1, 0, 0, 0, "ID",
	"ID-block that the specific property used can be found from (id_type property must be set first)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, rna_DriverTarget_id_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverTarget_id_get, DriverTarget_id_set, rna_DriverTarget_id_typef, nullptr,&RNA_ID
};

EnumPropertyRNA rna_DriverTarget_id_type = {
	{(PropertyRNA *)&rna_DriverTarget_data_path, (PropertyRNA *)&rna_DriverTarget_id,
	-1, "id_type", 3, 0, 0, 0, 0, "ID Type",
	"Type of ID-block that can be used",
	0, "ID",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, rna_DriverTarget_id_type_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverTarget_id_type_get, DriverTarget_id_type_set, nullptr, nullptr, nullptr, rna_enum_id_type_items, 38, 16975
};

StringPropertyRNA rna_DriverTarget_data_path = {
	{(PropertyRNA *)&rna_DriverTarget_bone_target, (PropertyRNA *)&rna_DriverTarget_id_type,
	-1, "data_path", 262145, 0, 0, 0, 0, "Data Path",
	"RNA Path (from ID-block) to property used",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverTarget_data_path_get, DriverTarget_data_path_length, DriverTarget_data_path_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_DriverTarget_bone_target = {
	{(PropertyRNA *)&rna_DriverTarget_transform_type, (PropertyRNA *)&rna_DriverTarget_data_path,
	-1, "bone_target", 262145, 0, 0, 0, 0, "Bone Name",
	"Name of PoseBone to use as target",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverTarget_bone_target_get, DriverTarget_bone_target_length, DriverTarget_bone_target_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static const EnumPropertyItem rna_DriverTarget_transform_type_items[14] = {
	{0, "LOC_X", 0, "X Location", ""},
	{1, "LOC_Y", 0, "Y Location", ""},
	{2, "LOC_Z", 0, "Z Location", ""},
	{0, "", 0, nullptr, nullptr},
	{3, "ROT_X", 0, "X Rotation", ""},
	{4, "ROT_Y", 0, "Y Rotation", ""},
	{5, "ROT_Z", 0, "Z Rotation", ""},
	{10, "ROT_W", 0, "W Rotation", ""},
	{0, "", 0, nullptr, nullptr},
	{6, "SCALE_X", 0, "X Scale", ""},
	{7, "SCALE_Y", 0, "Y Scale", ""},
	{8, "SCALE_Z", 0, "Z Scale", ""},
	{9, "SCALE_AVG", 0, "Average Scale", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DriverTarget_transform_type = {
	{(PropertyRNA *)&rna_DriverTarget_rotation_mode, (PropertyRNA *)&rna_DriverTarget_bone_target,
	-1, "transform_type", 3, 0, 0, 4, 0, "Type",
	"Driver variable type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, transChan), (RawPropertyType)1, nullptr},
	DriverTarget_transform_type_get, DriverTarget_transform_type_set, nullptr, nullptr, nullptr, rna_DriverTarget_transform_type_items, 13, 0
};

EnumPropertyRNA rna_DriverTarget_rotation_mode = {
	{(PropertyRNA *)&rna_DriverTarget_transform_space, (PropertyRNA *)&rna_DriverTarget_transform_type,
	-1, "rotation_mode", 3, 0, 0, 4, 0, "Rotation Mode",
	"Mode for calculating rotation channel values",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, rotation_mode), (RawPropertyType)2, nullptr},
	DriverTarget_rotation_mode_get, DriverTarget_rotation_mode_set, nullptr, nullptr, nullptr, rna_enum_driver_target_rotation_mode_items, 11, 0
};

static const EnumPropertyItem rna_DriverTarget_transform_space_items[4] = {
	{0, "WORLD_SPACE", 0, "World Space", "Transforms include effects of parenting/restpose and constraints"},
	{4, "TRANSFORM_SPACE", 0, "Transform Space", "Transforms don\'t include parenting/restpose or constraints"},
	{12, "LOCAL_SPACE", 0, "Local Space", "Transforms include effects of constraints but not parenting/restpose"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DriverTarget_transform_space = {
	{(PropertyRNA *)&rna_DriverTarget_context_property, (PropertyRNA *)&rna_DriverTarget_rotation_mode,
	-1, "transform_space", 3, 0, 0, 4, 0, "Transform Space",
	"Space in which transforms are used",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, flag), (RawPropertyType)1, nullptr},
	DriverTarget_transform_space_get, DriverTarget_transform_space_set, nullptr, nullptr, nullptr, rna_DriverTarget_transform_space_items, 3, 0
};

static const EnumPropertyItem rna_DriverTarget_context_property_items[3] = {
	{0, "ACTIVE_SCENE", 0, "Active Scene", "Currently evaluating scene"},
	{1, "ACTIVE_VIEW_LAYER", 0, "Active View Layer", "Currently evaluating view layer"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DriverTarget_context_property = {
	{nullptr, (PropertyRNA *)&rna_DriverTarget_transform_space,
	-1, "context_property", 3, 0, 0, 4, 0, "Context Property",
	"Type of a context-dependent data-block to access property from",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, context_property), (RawPropertyType)0, nullptr},
	DriverTarget_context_property_get, DriverTarget_context_property_set, nullptr, nullptr, nullptr, rna_DriverTarget_context_property_items, 2, 0
};

StructRNA RNA_DriverTarget = {
	{(ContainerRNA *)&RNA_DriverVariable, (ContainerRNA *)&RNA_FCurveSample,
	nullptr,
	{(PropertyRNA *)&rna_DriverTarget_rna_properties, (PropertyRNA *)&rna_DriverTarget_context_property}},
	"DriverTarget", nullptr, nullptr, 516, nullptr, "Driver Target",
	"Source of input values for driver variables",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_DriverTarget_rna_properties,
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

/* Driver Variable */
CollectionPropertyRNA rna_DriverVariable_rna_properties = {
	{(PropertyRNA *)&rna_DriverVariable_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverVariable_rna_properties_begin, DriverVariable_rna_properties_next, DriverVariable_rna_properties_end, DriverVariable_rna_properties_get, nullptr, nullptr, DriverVariable_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_DriverVariable_rna_type = {
	{(PropertyRNA *)&rna_DriverVariable_name, (PropertyRNA *)&rna_DriverVariable_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverVariable_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_DriverVariable_name = {
	{(PropertyRNA *)&rna_DriverVariable_type, (PropertyRNA *)&rna_DriverVariable_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name to use in scripted expressions/functions (no spaces or dots are allowed, and must start with a letter)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_DriverVariable_update_name, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverVariable_name_get, DriverVariable_name_length, DriverVariable_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static const EnumPropertyItem rna_DriverVariable_type_items[6] = {
	{0, "SINGLE_PROP", 206, "Single Property", "Use the value from some RNA property"},
	{3, "TRANSFORMS", 65, "Transform Channel", "Final transformation value of object or bone"},
	{1, "ROTATION_DIFF", 64, "Rotational Difference", "Use the angle between two bones"},
	{2, "LOC_DIFF", 63, "Distance", "Distance between two bones or objects"},
	{4, "CONTEXT_PROP", 206, "Context Property", "Use the value from some RNA property within the current evaluation context"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_DriverVariable_type = {
	{(PropertyRNA *)&rna_DriverVariable_targets, (PropertyRNA *)&rna_DriverVariable_name,
	-1, "type", 3, 0, 0, 0, 0, "Type",
	"Driver variable type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_DriverVariable_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverVariable_type_get, DriverVariable_type_set, nullptr, nullptr, nullptr, rna_DriverVariable_type_items, 5, 0
};

CollectionPropertyRNA rna_DriverVariable_targets = {
	{(PropertyRNA *)&rna_DriverVariable_is_name_valid, (PropertyRNA *)&rna_DriverVariable_type,
	-1, "targets", 0, 1, 0, 8, 0, "Targets",
	"Sources of input data for evaluating this variable",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {8, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverVariable_targets_begin, DriverVariable_targets_next, DriverVariable_targets_end, DriverVariable_targets_get, DriverVariable_targets_length, DriverVariable_targets_lookup_int, nullptr, nullptr, &RNA_DriverTarget
};

BoolPropertyRNA rna_DriverVariable_is_name_valid = {
	{nullptr, (PropertyRNA *)&rna_DriverVariable_targets,
	-1, "is_name_valid", 2, 0, 0, 0, 0, "Is Name Valid",
	"Is this a valid name for a driver variable",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	DriverVariable_is_name_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_DriverVariable = {
	{(ContainerRNA *)&RNA_Driver, (ContainerRNA *)&RNA_DriverTarget,
	nullptr,
	{(PropertyRNA *)&rna_DriverVariable_rna_properties, (PropertyRNA *)&rna_DriverVariable_is_name_valid}},
	"DriverVariable", nullptr, nullptr, 516, nullptr, "Driver Variable",
	"Variable from some source/target for driver relationship",
	"*", 17,
	(PropertyRNA *)&rna_DriverVariable_name, (PropertyRNA *)&rna_DriverVariable_rna_properties,
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

/* Driver */
CollectionPropertyRNA rna_Driver_rna_properties = {
	{(PropertyRNA *)&rna_Driver_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Driver_rna_properties_begin, Driver_rna_properties_next, Driver_rna_properties_end, Driver_rna_properties_get, nullptr, nullptr, Driver_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Driver_rna_type = {
	{(PropertyRNA *)&rna_Driver_type, (PropertyRNA *)&rna_Driver_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Driver_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_Driver_type_items[6] = {
	{0, "AVERAGE", 0, "Averaged Value", ""},
	{2, "SUM", 0, "Sum Values", ""},
	{1, "SCRIPTED", 0, "Scripted Expression", ""},
	{3, "MIN", 0, "Minimum Value", ""},
	{4, "MAX", 0, "Maximum Value", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Driver_type = {
	{(PropertyRNA *)&rna_Driver_expression, (PropertyRNA *)&rna_Driver_rna_type,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Driver type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ChannelDriver_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ChannelDriver, type), (RawPropertyType)0, nullptr},
	Driver_type_get, Driver_type_set, nullptr, nullptr, nullptr, rna_Driver_type_items, 5, 0
};

StringPropertyRNA rna_Driver_expression = {
	{(PropertyRNA *)&rna_Driver_variables, (PropertyRNA *)&rna_Driver_type,
	-1, "expression", 262145, 0, 0, 0, 0, "Expression",
	"Expression to use for Scripted Expression",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {256, 0, 0}, 0,
	rna_ChannelDriver_update_expr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Driver_expression_get, Driver_expression_length, Driver_expression_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 256, ""
};

CollectionPropertyRNA rna_Driver_variables = {
	{(PropertyRNA *)&rna_Driver_use_self, (PropertyRNA *)&rna_Driver_expression,
	-1, "variables", 0, 1, 0, 0, 0, "Variables",
	"Properties acting as inputs for this driver",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ChannelDriverVariables},
	Driver_variables_begin, Driver_variables_next, Driver_variables_end, Driver_variables_get, nullptr, Driver_variables_lookup_int, Driver_variables_lookup_string, nullptr, &RNA_DriverVariable
};

BoolPropertyRNA rna_Driver_use_self = {
	{(PropertyRNA *)&rna_Driver_is_valid, (PropertyRNA *)&rna_Driver_variables,
	-1, "use_self", 3, 0, 0, 0, 0, "Use Self",
	"Include a \'self\' variable in the name-space, so drivers can easily reference the data being modified (object, bone, etc...)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Driver_use_self_get, Driver_use_self_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Driver_is_valid = {
	{(PropertyRNA *)&rna_Driver_is_simple_expression, (PropertyRNA *)&rna_Driver_use_self,
	-1, "is_valid", 3, 0, 0, 0, 0, "Invalid",
	"Driver could not be evaluated in past, so should be skipped",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Driver_is_valid_get, Driver_is_valid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Driver_is_simple_expression = {
	{nullptr, (PropertyRNA *)&rna_Driver_is_valid,
	-1, "is_simple_expression", 2, 0, 0, 0, 0, "Simple Expression",
	"The scripted expression can be evaluated without using the full Python interpreter",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Driver_is_simple_expression_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_Driver = {
	{(ContainerRNA *)&RNA_ChannelDriverVariables, (ContainerRNA *)&RNA_DriverVariable,
	nullptr,
	{(PropertyRNA *)&rna_Driver_rna_properties, (PropertyRNA *)&rna_Driver_is_simple_expression}},
	"Driver", nullptr, nullptr, 516, nullptr, "Driver",
	"Driver for the value of a setting based on an external value",
	"*", 519,
	nullptr, (PropertyRNA *)&rna_Driver_rna_properties,
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

/* ChannelDriver Variables */
CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties = {
	{(PropertyRNA *)&rna_ChannelDriverVariables_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ChannelDriverVariables_rna_properties_begin, ChannelDriverVariables_rna_properties_next, ChannelDriverVariables_rna_properties_end, ChannelDriverVariables_rna_properties_get, nullptr, nullptr, ChannelDriverVariables_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ChannelDriverVariables_rna_type = {
	{nullptr, (PropertyRNA *)&rna_ChannelDriverVariables_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ChannelDriverVariables_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ChannelDriverVariables_new_var = {
	{nullptr, nullptr,
	-1, "var", 8388608, 0, 2, 0, 0, "",
	"Newly created Driver Variable",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_DriverVariable
};

FunctionRNA rna_ChannelDriverVariables_new_func = {
	{(FunctionRNA *)&rna_ChannelDriverVariables_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ChannelDriverVariables_new_var, (PropertyRNA *)&rna_ChannelDriverVariables_new_var}},
	"new", 0, "Add a new variable for the driver",
	ChannelDriverVariables_new_call,
	(PropertyRNA *)&rna_ChannelDriverVariables_new_var
};

PointerPropertyRNA rna_ChannelDriverVariables_remove_variable = {
	{nullptr, nullptr,
	-1, "variable", 262144, 0, 5, 0, 0, "",
	"Variable to remove from the driver",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_DriverVariable
};

FunctionRNA rna_ChannelDriverVariables_remove_func = {
	{nullptr, (FunctionRNA *)&rna_ChannelDriverVariables_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ChannelDriverVariables_remove_variable, (PropertyRNA *)&rna_ChannelDriverVariables_remove_variable}},
	"remove", 16, "Remove an existing variable from the driver",
	ChannelDriverVariables_remove_call,
	nullptr
};

StructRNA RNA_ChannelDriverVariables = {
	{(ContainerRNA *)&RNA_FModifier, (ContainerRNA *)&RNA_Driver,
	nullptr,
	{(PropertyRNA *)&rna_ChannelDriverVariables_rna_properties, (PropertyRNA *)&rna_ChannelDriverVariables_rna_type}},
	"ChannelDriverVariables", nullptr, nullptr, 516, nullptr, "ChannelDriver Variables",
	"Collection of channel driver Variables",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ChannelDriverVariables_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ChannelDriverVariables_new_func, (FunctionRNA *)&rna_ChannelDriverVariables_remove_func}
};

/* F-Modifier */
CollectionPropertyRNA rna_FModifier_rna_properties = {
	{(PropertyRNA *)&rna_FModifier_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_rna_properties_begin, FModifier_rna_properties_next, FModifier_rna_properties_end, FModifier_rna_properties_get, nullptr, nullptr, FModifier_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FModifier_rna_type = {
	{(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_FModifier_name = {
	{(PropertyRNA *)&rna_FModifier_type, (PropertyRNA *)&rna_FModifier_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"F-Curve Modifier name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 102236165, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_name_get, FModifier_name_length, FModifier_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_FModifier_type = {
	{(PropertyRNA *)&rna_FModifier_show_expanded, (PropertyRNA *)&rna_FModifier_name,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"F-Curve Modifier Type",
	0, "Action",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, type), (RawPropertyType)1, nullptr},
	FModifier_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_fmodifier_type_items, 8, 0
};

BoolPropertyRNA rna_FModifier_show_expanded = {
	{(PropertyRNA *)&rna_FModifier_mute, (PropertyRNA *)&rna_FModifier_type,
	-1, "show_expanded", 1073745923, 0, 0, 0, 0, "Expanded",
	"F-Curve Modifier\'s panel is expanded in UI",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_show_expanded_get, FModifier_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifier_mute = {
	{(PropertyRNA *)&rna_FModifier_is_valid, (PropertyRNA *)&rna_FModifier_show_expanded,
	-1, "mute", 4355, 1, 0, 0, 0, "Enabled",
	"Enable F-Curve modifier evaluation",
	39, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_mute_get, FModifier_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifier_is_valid = {
	{(PropertyRNA *)&rna_FModifier_active, (PropertyRNA *)&rna_FModifier_mute,
	-1, "is_valid", 2, 0, 0, 0, 0, "Disabled",
	"F-Curve Modifier has invalid settings and will not be evaluated",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifier_active = {
	{(PropertyRNA *)&rna_FModifier_use_restricted_range, (PropertyRNA *)&rna_FModifier_is_valid,
	-1, "active", 4099, 1, 0, 0, 0, "Active",
	"F-Curve modifier will show settings in the editor",
	12, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_active_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_active_get, FModifier_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifier_use_restricted_range = {
	{(PropertyRNA *)&rna_FModifier_frame_start, (PropertyRNA *)&rna_FModifier_active,
	-1, "use_restricted_range", 3, 1, 0, 0, 0, "Restrict Frame Range",
	"F-Curve Modifier is only applied for the specified frame range to help mask off effects in order to chain them",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_use_restricted_range_get, FModifier_use_restricted_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FModifier_frame_start = {
	{(PropertyRNA *)&rna_FModifier_frame_end, (PropertyRNA *)&rna_FModifier_use_restricted_range,
	-1, "frame_start", 3, 1, 0, 0, 0, "Start Frame",
	"Frame that modifier\'s influence starts (if Restrict Frame Range is in use)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_frame_start_get, FModifier_frame_start_set, nullptr, nullptr, rna_FModifier_start_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifier_frame_end = {
	{(PropertyRNA *)&rna_FModifier_blend_in, (PropertyRNA *)&rna_FModifier_frame_start,
	-1, "frame_end", 3, 1, 0, 0, 0, "End Frame",
	"Frame that modifier\'s influence ends (if Restrict Frame Range is in use)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_frame_end_get, FModifier_frame_end_set, nullptr, nullptr, rna_FModifier_end_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifier_blend_in = {
	{(PropertyRNA *)&rna_FModifier_blend_out, (PropertyRNA *)&rna_FModifier_frame_end,
	-1, "blend_in", 3, 1, 0, 4, 0, "Blend In",
	"Number of frames from start frame for influence to take effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, blendin), (RawPropertyType)5, nullptr},
	FModifier_blend_in_get, FModifier_blend_in_set, nullptr, nullptr, rna_FModifier_blending_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifier_blend_out = {
	{(PropertyRNA *)&rna_FModifier_use_influence, (PropertyRNA *)&rna_FModifier_blend_in,
	-1, "blend_out", 3, 1, 0, 4, 0, "Blend Out",
	"Number of frames from end frame for influence to fade out",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, blendout), (RawPropertyType)5, nullptr},
	FModifier_blend_out_get, FModifier_blend_out_set, nullptr, nullptr, rna_FModifier_blending_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_FModifier_use_influence = {
	{(PropertyRNA *)&rna_FModifier_influence, (PropertyRNA *)&rna_FModifier_blend_out,
	-1, "use_influence", 3, 1, 0, 0, 0, "Use Influence",
	"F-Curve Modifier\'s effects will be tempered by a default factor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifier_use_influence_get, FModifier_use_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FModifier_influence = {
	{nullptr, (PropertyRNA *)&rna_FModifier_use_influence,
	-1, "influence", 3, 1, 0, 4, 0, "Influence",
	"Amount of influence F-Curve Modifier will have when not fading in/out",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, influence), (RawPropertyType)5, nullptr},
	FModifier_influence_get, FModifier_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

StructRNA RNA_FModifier = {
	{(ContainerRNA *)&RNA_FModifierGenerator, (ContainerRNA *)&RNA_ChannelDriverVariables,
	nullptr,
	{(PropertyRNA *)&rna_FModifier_rna_properties, (PropertyRNA *)&rna_FModifier_influence}},
	"FModifier", nullptr, nullptr, 516, nullptr, "F-Modifier",
	"Modifier for values of F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	nullptr,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Generator F-Modifier */
BoolPropertyRNA rna_FModifierGenerator_use_additive = {
	{(PropertyRNA *)&rna_FModifierGenerator_mode, nullptr,
	-1, "use_additive", 3, 1, 0, 0, 0, "Additive",
	"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierGenerator_use_additive_get, FModifierGenerator_use_additive_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FModifierGenerator_mode_items[3] = {
	{0, "POLYNOMIAL", 0, "Expanded Polynomial", ""},
	{1, "POLYNOMIAL_FACTORISED", 0, "Factorized Polynomial", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FModifierGenerator_mode = {
	{(PropertyRNA *)&rna_FModifierGenerator_poly_order, (PropertyRNA *)&rna_FModifierGenerator_use_additive,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Type of generator to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_verify_data_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Generator, mode), (RawPropertyType)0, nullptr},
	FModifierGenerator_mode_get, FModifierGenerator_mode_set, nullptr, nullptr, nullptr, rna_FModifierGenerator_mode_items, 2, 0
};

IntPropertyRNA rna_FModifierGenerator_poly_order = {
	{(PropertyRNA *)&rna_FModifierGenerator_coefficients, (PropertyRNA *)&rna_FModifierGenerator_mode,
	-1, "poly_order", 3, 1, 0, 4, 0, "Polynomial Order",
	"The highest power of \'x\' for this polynomial (number of coefficients - 1)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_verify_data_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Generator, poly_order), (RawPropertyType)0, nullptr},
	FModifierGenerator_poly_order_get, FModifierGenerator_poly_order_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, 0, nullptr
};

static float rna_FModifierGenerator_coefficients_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FModifierGenerator_coefficients = {
	{nullptr, (PropertyRNA *)&rna_FModifierGenerator_poly_order,
	-1, "coefficients", 131075, 1, 0, 0, 0, "Coefficients",
	"Coefficients for \'x\' (starting from lowest power of x^0)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FModifierGenerator_coefficients_get_length, 1, {32, 0, 0}, 32,
	rna_FModifier_verify_data_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FModifierGenerator_coefficients_get, FModifierGenerator_coefficients_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FModifierGenerator_coefficients_default
};

StructRNA RNA_FModifierGenerator = {
	{(ContainerRNA *)&RNA_FModifierFunctionGenerator, (ContainerRNA *)&RNA_FModifier,
	nullptr,
	{(PropertyRNA *)&rna_FModifierGenerator_use_additive, (PropertyRNA *)&rna_FModifierGenerator_coefficients}},
	"FModifierGenerator", nullptr, nullptr, 516, nullptr, "Generator F-Modifier",
	"Deterministically generate values for the modified F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Built-In Function F-Modifier */
FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_phase_multiplier, nullptr,
	-1, "amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"Scale factor determining the maximum/minimum values",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, amplitude), (RawPropertyType)5, nullptr},
	FModifierFunctionGenerator_amplitude_get, FModifierFunctionGenerator_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_phase_offset, (PropertyRNA *)&rna_FModifierFunctionGenerator_amplitude,
	-1, "phase_multiplier", 3, 1, 0, 4, 0, "Phase Multiple",
	"Scale factor determining the \'speed\' of the function",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, phase_multiplier), (RawPropertyType)5, nullptr},
	FModifierFunctionGenerator_phase_multiplier_get, FModifierFunctionGenerator_phase_multiplier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_value_offset, (PropertyRNA *)&rna_FModifierFunctionGenerator_phase_multiplier,
	-1, "phase_offset", 3, 1, 0, 4, 0, "Phase Offset",
	"Constant factor to offset time by for function",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, phase_offset), (RawPropertyType)5, nullptr},
	FModifierFunctionGenerator_phase_offset_get, FModifierFunctionGenerator_phase_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_use_additive, (PropertyRNA *)&rna_FModifierFunctionGenerator_phase_offset,
	-1, "value_offset", 3, 1, 0, 4, 0, "Value Offset",
	"Constant factor to offset values by",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, value_offset), (RawPropertyType)5, nullptr},
	FModifierFunctionGenerator_value_offset_get, FModifierFunctionGenerator_value_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_FModifierFunctionGenerator_use_additive = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_function_type, (PropertyRNA *)&rna_FModifierFunctionGenerator_value_offset,
	-1, "use_additive", 3, 1, 0, 0, 0, "Additive",
	"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierFunctionGenerator_use_additive_get, FModifierFunctionGenerator_use_additive_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FModifierFunctionGenerator_function_type_items[7] = {
	{0, "SIN", 0, "Sine", ""},
	{1, "COS", 0, "Cosine", ""},
	{2, "TAN", 0, "Tangent", ""},
	{3, "SQRT", 0, "Square Root", ""},
	{4, "LN", 0, "Natural Logarithm", ""},
	{5, "SINC", 0, "Normalized Sine", "sin(x) / x"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FModifierFunctionGenerator_function_type = {
	{nullptr, (PropertyRNA *)&rna_FModifierFunctionGenerator_use_additive,
	-1, "function_type", 3, 1, 0, 4, 0, "Type",
	"Type of built-in function to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, type), (RawPropertyType)0, nullptr},
	FModifierFunctionGenerator_function_type_get, FModifierFunctionGenerator_function_type_set, nullptr, nullptr, nullptr, rna_FModifierFunctionGenerator_function_type_items, 6, 0
};

StructRNA RNA_FModifierFunctionGenerator = {
	{(ContainerRNA *)&RNA_FModifierEnvelope, (ContainerRNA *)&RNA_FModifierGenerator,
	nullptr,
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_amplitude, (PropertyRNA *)&rna_FModifierFunctionGenerator_function_type}},
	"FModifierFunctionGenerator", nullptr, nullptr, 516, nullptr, "Built-In Function F-Modifier",
	"Generate values using a built-in function",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Envelope F-Modifier */
CollectionPropertyRNA rna_FModifierEnvelope_control_points = {
	{(PropertyRNA *)&rna_FModifierEnvelope_reference_value, nullptr,
	-1, "control_points", 0, 1, 0, 8, 0, "Control Points",
	"Control points defining the shape of the envelope",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_FModifierEnvelopeControlPoints},
	FModifierEnvelope_control_points_begin, FModifierEnvelope_control_points_next, FModifierEnvelope_control_points_end, FModifierEnvelope_control_points_get, FModifierEnvelope_control_points_length, FModifierEnvelope_control_points_lookup_int, nullptr, nullptr, &RNA_FModifierEnvelopeControlPoint
};

FloatPropertyRNA rna_FModifierEnvelope_reference_value = {
	{(PropertyRNA *)&rna_FModifierEnvelope_default_min, (PropertyRNA *)&rna_FModifierEnvelope_control_points,
	-1, "reference_value", 3, 1, 0, 4, 0, "Reference Value",
	"Value that envelope\'s influence is centered around / based on",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Envelope, midval), (RawPropertyType)5, nullptr},
	FModifierEnvelope_reference_value_get, FModifierEnvelope_reference_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierEnvelope_default_min = {
	{(PropertyRNA *)&rna_FModifierEnvelope_default_max, (PropertyRNA *)&rna_FModifierEnvelope_reference_value,
	-1, "default_min", 3, 1, 0, 4, 0, "Default Minimum",
	"Lower distance from Reference Value for 1:1 default influence",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Envelope, min), (RawPropertyType)5, nullptr},
	FModifierEnvelope_default_min_get, FModifierEnvelope_default_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierEnvelope_default_max = {
	{nullptr, (PropertyRNA *)&rna_FModifierEnvelope_default_min,
	-1, "default_max", 3, 1, 0, 4, 0, "Default Maximum",
	"Upper distance from Reference Value for 1:1 default influence",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Envelope, max), (RawPropertyType)5, nullptr},
	FModifierEnvelope_default_max_get, FModifierEnvelope_default_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_FModifierEnvelope = {
	{(ContainerRNA *)&RNA_FModifierEnvelopeControlPoints, (ContainerRNA *)&RNA_FModifierFunctionGenerator,
	nullptr,
	{(PropertyRNA *)&rna_FModifierEnvelope_control_points, (PropertyRNA *)&rna_FModifierEnvelope_default_max}},
	"FModifierEnvelope", nullptr, nullptr, 516, nullptr, "Envelope F-Modifier",
	"Scale the values of the modified F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Control Points */
CollectionPropertyRNA rna_FModifierEnvelopeControlPoints_rna_properties = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierEnvelopeControlPoints_rna_properties_begin, FModifierEnvelopeControlPoints_rna_properties_next, FModifierEnvelopeControlPoints_rna_properties_end, FModifierEnvelopeControlPoints_rna_properties_get, nullptr, nullptr, FModifierEnvelopeControlPoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierEnvelopeControlPoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoints_add_frame = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_point, nullptr,
	-1, "frame", 3, 0, 1, 0, 0, "",
	"Frame to add this control-point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoints_add_point = {
	{nullptr, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_frame,
	-1, "point", 8388608, 0, 2, 0, 0, "",
	"Newly created control-point",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FModifierEnvelopeControlPoint
};

FunctionRNA rna_FModifierEnvelopeControlPoints_add_func = {
	{(FunctionRNA *)&rna_FModifierEnvelopeControlPoints_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_frame, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_point}},
	"add", 2068, "Add a control point to a FModifierEnvelope",
	FModifierEnvelopeControlPoints_add_call,
	(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_point
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoints_remove_point = {
	{nullptr, nullptr,
	-1, "point", 8650752, 0, 5, 0, 0, "",
	"Control-point to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FModifierEnvelopeControlPoint
};

FunctionRNA rna_FModifierEnvelopeControlPoints_remove_func = {
	{nullptr, (FunctionRNA *)&rna_FModifierEnvelopeControlPoints_add_func,
	nullptr,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_remove_point, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_remove_point}},
	"remove", 2068, "Remove a control-point from an FModifierEnvelope",
	FModifierEnvelopeControlPoints_remove_call,
	nullptr
};

StructRNA RNA_FModifierEnvelopeControlPoints = {
	{(ContainerRNA *)&RNA_FModifierEnvelopeControlPoint, (ContainerRNA *)&RNA_FModifierEnvelope,
	nullptr,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_type}},
	"FModifierEnvelopeControlPoints", nullptr, nullptr, 516, nullptr, "Control Points",
	"Control points defining the shape of the envelope",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_FModifierEnvelopeControlPoints_add_func, (FunctionRNA *)&rna_FModifierEnvelopeControlPoints_remove_func}
};

/* Envelope Control Point */
CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierEnvelopeControlPoint_rna_properties_begin, FModifierEnvelopeControlPoint_rna_properties_next, FModifierEnvelopeControlPoint_rna_properties_end, FModifierEnvelopeControlPoint_rna_properties_get, nullptr, nullptr, FModifierEnvelopeControlPoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_min, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierEnvelopeControlPoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_max, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_type,
	-1, "min", 3, 1, 0, 4, 0, "Minimum Value",
	"Lower bound of envelope at this control-point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCM_EnvelopeData, min), (RawPropertyType)5, nullptr},
	FModifierEnvelopeControlPoint_min_get, FModifierEnvelopeControlPoint_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_frame, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_min,
	-1, "max", 3, 1, 0, 4, 0, "Maximum Value",
	"Upper bound of envelope at this control-point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCM_EnvelopeData, max), (RawPropertyType)5, nullptr},
	FModifierEnvelopeControlPoint_max_get, FModifierEnvelopeControlPoint_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame = {
	{nullptr, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_max,
	-1, "frame", 3, 1, 0, 4, 0, "Frame",
	"Frame this control-point occurs on",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCM_EnvelopeData, time), (RawPropertyType)5, nullptr},
	FModifierEnvelopeControlPoint_frame_get, FModifierEnvelopeControlPoint_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_FModifierEnvelopeControlPoint = {
	{(ContainerRNA *)&RNA_FModifierCycles, (ContainerRNA *)&RNA_FModifierEnvelopeControlPoints,
	nullptr,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_frame}},
	"FModifierEnvelopeControlPoint", nullptr, nullptr, 516, nullptr, "Envelope Control Point",
	"Control point for envelope F-Modifier",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties,
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

/* Cycles F-Modifier */
static const EnumPropertyItem rna_FModifierCycles_mode_before_items[5] = {
	{0, "NONE", 0, "No Cycles", "Don\'t do anything"},
	{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"},
	{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between start and end values"},
	{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FModifierCycles_mode_before = {
	{(PropertyRNA *)&rna_FModifierCycles_cycles_before, nullptr,
	-1, "mode_before", 3, 1, 0, 4, 0, "Before Mode",
	"Cycling mode to use before first keyframe",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, before_mode), (RawPropertyType)1, nullptr},
	FModifierCycles_mode_before_get, FModifierCycles_mode_before_set, nullptr, nullptr, nullptr, rna_FModifierCycles_mode_before_items, 4, 0
};

IntPropertyRNA rna_FModifierCycles_cycles_before = {
	{(PropertyRNA *)&rna_FModifierCycles_mode_after, (PropertyRNA *)&rna_FModifierCycles_mode_before,
	-1, "cycles_before", 3, 1, 0, 4, 0, "Before Cycles",
	"Maximum number of cycles to allow before first keyframe (0 = infinite)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, before_cycles), (RawPropertyType)1, nullptr},
	FModifierCycles_cycles_before_get, FModifierCycles_cycles_before_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

static const EnumPropertyItem rna_FModifierCycles_mode_after_items[5] = {
	{0, "NONE", 0, "No Cycles", "Don\'t do anything"},
	{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"},
	{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between start and end values"},
	{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FModifierCycles_mode_after = {
	{(PropertyRNA *)&rna_FModifierCycles_cycles_after, (PropertyRNA *)&rna_FModifierCycles_cycles_before,
	-1, "mode_after", 3, 1, 0, 4, 0, "After Mode",
	"Cycling mode to use after last keyframe",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, after_mode), (RawPropertyType)1, nullptr},
	FModifierCycles_mode_after_get, FModifierCycles_mode_after_set, nullptr, nullptr, nullptr, rna_FModifierCycles_mode_after_items, 4, 0
};

IntPropertyRNA rna_FModifierCycles_cycles_after = {
	{nullptr, (PropertyRNA *)&rna_FModifierCycles_mode_after,
	-1, "cycles_after", 3, 1, 0, 4, 0, "After Cycles",
	"Maximum number of cycles to allow after last keyframe (0 = infinite)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, after_cycles), (RawPropertyType)1, nullptr},
	FModifierCycles_cycles_after_get, FModifierCycles_cycles_after_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

StructRNA RNA_FModifierCycles = {
	{(ContainerRNA *)&RNA_FModifierPython, (ContainerRNA *)&RNA_FModifierEnvelopeControlPoint,
	nullptr,
	{(PropertyRNA *)&rna_FModifierCycles_mode_before, (PropertyRNA *)&rna_FModifierCycles_cycles_after}},
	"FModifierCycles", nullptr, nullptr, 516, nullptr, "Cycles F-Modifier",
	"Repeat the values of the modified F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Python F-Modifier */
StructRNA RNA_FModifierPython = {
	{(ContainerRNA *)&RNA_FModifierLimits, (ContainerRNA *)&RNA_FModifierCycles,
	nullptr,
	{nullptr, nullptr}},
	"FModifierPython", nullptr, nullptr, 516, nullptr, "Python F-Modifier",
	"Perform user-defined operation on the modified F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Limit F-Modifier */
BoolPropertyRNA rna_FModifierLimits_use_min_x = {
	{(PropertyRNA *)&rna_FModifierLimits_use_min_y, nullptr,
	-1, "use_min_x", 3, 1, 0, 0, 0, "Minimum X",
	"Use the minimum X value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_use_min_x_get, FModifierLimits_use_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifierLimits_use_min_y = {
	{(PropertyRNA *)&rna_FModifierLimits_use_max_x, (PropertyRNA *)&rna_FModifierLimits_use_min_x,
	-1, "use_min_y", 3, 1, 0, 0, 0, "Minimum Y",
	"Use the minimum Y value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_use_min_y_get, FModifierLimits_use_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifierLimits_use_max_x = {
	{(PropertyRNA *)&rna_FModifierLimits_use_max_y, (PropertyRNA *)&rna_FModifierLimits_use_min_y,
	-1, "use_max_x", 3, 1, 0, 0, 0, "Maximum X",
	"Use the maximum X value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_use_max_x_get, FModifierLimits_use_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifierLimits_use_max_y = {
	{(PropertyRNA *)&rna_FModifierLimits_min_x, (PropertyRNA *)&rna_FModifierLimits_use_max_x,
	-1, "use_max_y", 3, 1, 0, 0, 0, "Maximum Y",
	"Use the maximum Y value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_use_max_y_get, FModifierLimits_use_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FModifierLimits_min_x = {
	{(PropertyRNA *)&rna_FModifierLimits_min_y, (PropertyRNA *)&rna_FModifierLimits_use_max_y,
	-1, "min_x", 3, 1, 0, 0, 0, "Minimum X",
	"Lowest X value to allow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_min_x_get, FModifierLimits_min_x_set, nullptr, nullptr, rna_FModifierLimits_minx_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierLimits_min_y = {
	{(PropertyRNA *)&rna_FModifierLimits_max_x, (PropertyRNA *)&rna_FModifierLimits_min_x,
	-1, "min_y", 3, 1, 0, 0, 0, "Minimum Y",
	"Lowest Y value to allow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_min_y_get, FModifierLimits_min_y_set, nullptr, nullptr, rna_FModifierLimits_miny_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierLimits_max_x = {
	{(PropertyRNA *)&rna_FModifierLimits_max_y, (PropertyRNA *)&rna_FModifierLimits_min_y,
	-1, "max_x", 3, 1, 0, 0, 0, "Maximum X",
	"Highest X value to allow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_max_x_get, FModifierLimits_max_x_set, nullptr, nullptr, rna_FModifierLimits_maxx_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierLimits_max_y = {
	{nullptr, (PropertyRNA *)&rna_FModifierLimits_max_x,
	-1, "max_y", 3, 1, 0, 0, 0, "Maximum Y",
	"Highest Y value to allow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierLimits_max_y_get, FModifierLimits_max_y_set, nullptr, nullptr, rna_FModifierLimits_maxy_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_FModifierLimits = {
	{(ContainerRNA *)&RNA_FModifierNoise, (ContainerRNA *)&RNA_FModifierPython,
	nullptr,
	{(PropertyRNA *)&rna_FModifierLimits_use_min_x, (PropertyRNA *)&rna_FModifierLimits_max_y}},
	"FModifierLimits", nullptr, nullptr, 516, nullptr, "Limit F-Modifier",
	"Limit the time/value ranges of the modified F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Noise F-Modifier */
static const EnumPropertyItem rna_FModifierNoise_blend_type_items[5] = {
	{0, "REPLACE", 0, "Replace", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "SUBTRACT", 0, "Subtract", ""},
	{3, "MULTIPLY", 0, "Multiply", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FModifierNoise_blend_type = {
	{(PropertyRNA *)&rna_FModifierNoise_scale, nullptr,
	-1, "blend_type", 3, 1, 0, 4, 0, "Blend Type",
	"Method of modifying the existing F-Curve",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, modification), (RawPropertyType)1, nullptr},
	FModifierNoise_blend_type_get, FModifierNoise_blend_type_set, nullptr, nullptr, nullptr, rna_FModifierNoise_blend_type_items, 4, 0
};

FloatPropertyRNA rna_FModifierNoise_scale = {
	{(PropertyRNA *)&rna_FModifierNoise_strength, (PropertyRNA *)&rna_FModifierNoise_blend_type,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Scaling (in time) of the noise",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, size), (RawPropertyType)5, nullptr},
	FModifierNoise_scale_get, FModifierNoise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierNoise_strength = {
	{(PropertyRNA *)&rna_FModifierNoise_phase, (PropertyRNA *)&rna_FModifierNoise_scale,
	-1, "strength", 3, 1, 0, 4, 0, "Strength",
	"Amplitude of the noise - the amount that it modifies the underlying curve",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, strength), (RawPropertyType)5, nullptr},
	FModifierNoise_strength_get, FModifierNoise_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierNoise_phase = {
	{(PropertyRNA *)&rna_FModifierNoise_offset, (PropertyRNA *)&rna_FModifierNoise_strength,
	-1, "phase", 3, 1, 0, 4, 0, "Phase",
	"A random seed for the noise effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, phase), (RawPropertyType)5, nullptr},
	FModifierNoise_phase_get, FModifierNoise_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierNoise_offset = {
	{(PropertyRNA *)&rna_FModifierNoise_depth, (PropertyRNA *)&rna_FModifierNoise_phase,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"Time offset for the noise effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, offset), (RawPropertyType)5, nullptr},
	FModifierNoise_offset_get, FModifierNoise_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_FModifierNoise_depth = {
	{nullptr, (PropertyRNA *)&rna_FModifierNoise_offset,
	-1, "depth", 3, 1, 0, 4, 0, "Depth",
	"Amount of fine level detail present in the noise",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, depth), (RawPropertyType)1, nullptr},
	FModifierNoise_depth_get, FModifierNoise_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

StructRNA RNA_FModifierNoise = {
	{(ContainerRNA *)&RNA_FModifierStepped, (ContainerRNA *)&RNA_FModifierLimits,
	nullptr,
	{(PropertyRNA *)&rna_FModifierNoise_blend_type, (PropertyRNA *)&rna_FModifierNoise_depth}},
	"FModifierNoise", nullptr, nullptr, 516, nullptr, "Noise F-Modifier",
	"Give randomness to the modified F-Curve",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Stepped Interpolation F-Modifier */
FloatPropertyRNA rna_FModifierStepped_frame_step = {
	{(PropertyRNA *)&rna_FModifierStepped_frame_offset, nullptr,
	-1, "frame_step", 3, 1, 0, 4, 0, "Step Size",
	"Number of frames to hold each value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Stepped, step_size), (RawPropertyType)5, nullptr},
	FModifierStepped_frame_step_get, FModifierStepped_frame_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierStepped_frame_offset = {
	{(PropertyRNA *)&rna_FModifierStepped_use_frame_start, (PropertyRNA *)&rna_FModifierStepped_frame_step,
	-1, "frame_offset", 3, 1, 0, 4, 0, "Offset",
	"Reference number of frames before frames get held (use to get hold for \'1-3\' vs \'5-7\' holding patterns)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Stepped, offset), (RawPropertyType)5, nullptr},
	FModifierStepped_frame_offset_get, FModifierStepped_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_FModifierStepped_use_frame_start = {
	{(PropertyRNA *)&rna_FModifierStepped_use_frame_end, (PropertyRNA *)&rna_FModifierStepped_frame_offset,
	-1, "use_frame_start", 3, 1, 0, 0, 0, "Use Start Frame",
	"Restrict modifier to only act after its \'start\' frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierStepped_use_frame_start_get, FModifierStepped_use_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FModifierStepped_use_frame_end = {
	{(PropertyRNA *)&rna_FModifierStepped_frame_start, (PropertyRNA *)&rna_FModifierStepped_use_frame_start,
	-1, "use_frame_end", 3, 1, 0, 0, 0, "Use End Frame",
	"Restrict modifier to only act before its \'end\' frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierStepped_use_frame_end_get, FModifierStepped_use_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FModifierStepped_frame_start = {
	{(PropertyRNA *)&rna_FModifierStepped_frame_end, (PropertyRNA *)&rna_FModifierStepped_use_frame_end,
	-1, "frame_start", 3, 1, 0, 0, 0, "Start Frame",
	"Frame that modifier\'s influence starts (if applicable)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierStepped_frame_start_get, FModifierStepped_frame_start_set, nullptr, nullptr, rna_FModifierStepped_start_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FModifierStepped_frame_end = {
	{nullptr, (PropertyRNA *)&rna_FModifierStepped_frame_start,
	-1, "frame_end", 3, 1, 0, 0, 0, "End Frame",
	"Frame that modifier\'s influence ends (if applicable)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FModifierStepped_frame_end_get, FModifierStepped_frame_end_set, nullptr, nullptr, rna_FModifierStepped_end_frame_range, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_FModifierStepped = {
	{(ContainerRNA *)&RNA_GreasePencil, (ContainerRNA *)&RNA_FModifierNoise,
	nullptr,
	{(PropertyRNA *)&rna_FModifierStepped_frame_step, (PropertyRNA *)&rna_FModifierStepped_frame_end}},
	"FModifierStepped", nullptr, nullptr, 516, nullptr, "Stepped Interpolation F-Modifier",
	"Hold each interpolated value from the F-Curve for several frames without changing the timing",
	"*", 17,
	(PropertyRNA *)&rna_FModifier_name, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	nullptr,
	rna_FModifierType_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

