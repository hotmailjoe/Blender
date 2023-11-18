
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

#include "rna_shader_fx.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFx_show_expanded;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxBlur_size;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxBlur_samples;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxBlur_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxBlur_use_dof_mode;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxColorize_factor;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxColorize_low_color;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxColorize_high_color;
RNA_EXTERN_C EnumPropertyRNA rna_ShaderFxColorize_mode;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C EnumPropertyRNA rna_ShaderFxWave_orientation;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxWave_amplitude;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxWave_period;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxWave_phase;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C IntPropertyRNA rna_ShaderFxPixel_size;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxPixel_use_antialiasing;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C IntPropertyRNA rna_ShaderFxRim_offset;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxRim_rim_color;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxRim_mask_color;
RNA_EXTERN_C EnumPropertyRNA rna_ShaderFxRim_mode;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxRim_blur;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxRim_samples;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C PointerPropertyRNA rna_ShaderFxShadow_object;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxShadow_offset;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxShadow_scale;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxShadow_shadow_color;
RNA_EXTERN_C EnumPropertyRNA rna_ShaderFxShadow_orientation;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxShadow_amplitude;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxShadow_period;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxShadow_phase;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxShadow_rotation;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxShadow_blur;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxShadow_samples;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxShadow_use_object;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxShadow_use_wave;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxGlow_glow_color;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxGlow_opacity;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxGlow_select_color;
RNA_EXTERN_C EnumPropertyRNA rna_ShaderFxGlow_mode;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxGlow_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxGlow_size;
RNA_EXTERN_C IntPropertyRNA rna_ShaderFxGlow_samples;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxGlow_use_glow_under;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxGlow_rotation;
RNA_EXTERN_C EnumPropertyRNA rna_ShaderFxGlow_blend_mode;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C IntPropertyRNA rna_ShaderFxSwirl_radius;
RNA_EXTERN_C FloatPropertyRNA rna_ShaderFxSwirl_angle;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxSwirl_use_transparent;
RNA_EXTERN_C PointerPropertyRNA rna_ShaderFxSwirl_object;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_ShaderFx_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_ShaderFx_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_ShaderFx_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_ShaderFx_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_viewport;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_render;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_in_editmode;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_ShaderFx_show_expanded;

RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxFlip_use_flip_x;
RNA_EXTERN_C BoolPropertyRNA rna_ShaderFxFlip_use_flip_y;

static PointerRNA ShaderFx_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ShaderFx_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShaderFx_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShaderFx_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShaderFx_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShaderFx_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ShaderFx_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ShaderFx_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ShaderFx_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ShaderFx_name_get(PointerRNA *ptr, char *value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int ShaderFx_name_length(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void ShaderFx_name_set(PointerRNA *ptr, const char *value)
{
    rna_ShaderFx_name_set(ptr, value);
}

RNA_EXTERN_C int ShaderFx_type_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C bool ShaderFx_show_viewport_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

RNA_EXTERN_C void ShaderFx_show_viewport_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

RNA_EXTERN_C bool ShaderFx_show_render_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (((data->mode) & 2) != 0);
}

RNA_EXTERN_C void ShaderFx_show_render_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode |= 2; }
    else { data->mode &= ~2; }
}

RNA_EXTERN_C bool ShaderFx_show_in_editmode_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (((data->mode) & 4) != 0);
}

RNA_EXTERN_C void ShaderFx_show_in_editmode_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode |= 4; }
    else { data->mode &= ~4; }
}

RNA_EXTERN_C bool ShaderFx_show_expanded_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

RNA_EXTERN_C void ShaderFx_show_expanded_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->ui_expand_flag = (std::remove_reference_t<decltype(data->ui_expand_flag)>)value;
#else
    data->ui_expand_flag = value;
#endif
}

RNA_EXTERN_C void ShaderFxBlur_size_get(PointerRNA *ptr, float values[2])
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->radius)[i]);
    }
}

RNA_EXTERN_C void ShaderFxBlur_size_set(PointerRNA *ptr, const float values[2])
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->radius)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C int ShaderFxBlur_samples_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

RNA_EXTERN_C void ShaderFxBlur_samples_set(PointerRNA *ptr, int value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->samples = (std::remove_reference_t<decltype(data->samples)>)CLAMPIS(value, 0, 32);
#else
    data->samples = CLAMPIS(value, 0, 32);
#endif
}

RNA_EXTERN_C float ShaderFxBlur_rotation_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

RNA_EXTERN_C void ShaderFxBlur_rotation_set(PointerRNA *ptr, float value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
#else
    data->rotation = value;
#endif
}

RNA_EXTERN_C bool ShaderFxBlur_use_dof_mode_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShaderFxBlur_use_dof_mode_set(PointerRNA *ptr, bool value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C float ShaderFxColorize_factor_get(PointerRNA *ptr)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    return (float)(data->factor);
}

RNA_EXTERN_C void ShaderFxColorize_factor_set(PointerRNA *ptr, float value)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->factor = (std::remove_reference_t<decltype(data->factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void ShaderFxColorize_low_color_get(PointerRNA *ptr, float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->low_color)[i]);
    }
}

RNA_EXTERN_C void ShaderFxColorize_low_color_set(PointerRNA *ptr, const float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->low_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void ShaderFxColorize_high_color_get(PointerRNA *ptr, float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->high_color)[i]);
    }
}

RNA_EXTERN_C void ShaderFxColorize_high_color_set(PointerRNA *ptr, const float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->high_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int ShaderFxColorize_mode_get(PointerRNA *ptr)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void ShaderFxColorize_mode_set(PointerRNA *ptr, int value)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C int ShaderFxWave_orientation_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (int)(data->orientation);
}

RNA_EXTERN_C void ShaderFxWave_orientation_set(PointerRNA *ptr, int value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->orientation = (std::remove_reference_t<decltype(data->orientation)>)value;
#else
    data->orientation = value;
#endif
}

RNA_EXTERN_C float ShaderFxWave_amplitude_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->amplitude);
}

RNA_EXTERN_C void ShaderFxWave_amplitude_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->amplitude = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float ShaderFxWave_period_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->period);
}

RNA_EXTERN_C void ShaderFxWave_period_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->period = (std::remove_reference_t<decltype(data->period)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->period = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float ShaderFxWave_phase_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->phase);
}

RNA_EXTERN_C void ShaderFxWave_phase_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->phase = (std::remove_reference_t<decltype(data->phase)>)value;
#else
    data->phase = value;
#endif
}

RNA_EXTERN_C void ShaderFxPixel_size_get(PointerRNA *ptr, int values[2])
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->size)[i]);
    }
}

RNA_EXTERN_C void ShaderFxPixel_size_set(PointerRNA *ptr, const int values[2])
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->size)[i] = CLAMPIS(values[i], 1, 32767);
    }
}

RNA_EXTERN_C bool ShaderFxPixel_use_antialiasing_get(PointerRNA *ptr)
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShaderFxPixel_use_antialiasing_set(PointerRNA *ptr, bool value)
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C void ShaderFxRim_offset_get(PointerRNA *ptr, int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->offset)[i]);
    }
}

RNA_EXTERN_C void ShaderFxRim_offset_set(PointerRNA *ptr, const int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->offset)[i] = CLAMPIS(values[i], -32768, 32767);
    }
}

RNA_EXTERN_C void ShaderFxRim_rim_color_get(PointerRNA *ptr, float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rim_rgb)[i]);
    }
}

RNA_EXTERN_C void ShaderFxRim_rim_color_set(PointerRNA *ptr, const float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rim_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void ShaderFxRim_mask_color_get(PointerRNA *ptr, float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->mask_rgb)[i]);
    }
}

RNA_EXTERN_C void ShaderFxRim_mask_color_set(PointerRNA *ptr, const float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->mask_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int ShaderFxRim_mode_get(PointerRNA *ptr)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void ShaderFxRim_mode_set(PointerRNA *ptr, int value)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C void ShaderFxRim_blur_get(PointerRNA *ptr, int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->blur)[i]);
    }
}

RNA_EXTERN_C void ShaderFxRim_blur_set(PointerRNA *ptr, const int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->blur)[i] = CLAMPIS(values[i], 0, 32767);
    }
}

RNA_EXTERN_C int ShaderFxRim_samples_get(PointerRNA *ptr)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

RNA_EXTERN_C void ShaderFxRim_samples_set(PointerRNA *ptr, int value)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->samples = (std::remove_reference_t<decltype(data->samples)>)CLAMPIS(value, 0, 32);
#else
    data->samples = CLAMPIS(value, 0, 32);
#endif
}

RNA_EXTERN_C PointerRNA ShaderFxShadow_object_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

RNA_EXTERN_C void ShaderFxShadow_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ShadowShaderFx_object_set(ptr, value, reports);
}

RNA_EXTERN_C void ShaderFxShadow_offset_get(PointerRNA *ptr, int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->offset)[i]);
    }
}

RNA_EXTERN_C void ShaderFxShadow_offset_set(PointerRNA *ptr, const int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->offset)[i] = CLAMPIS(values[i], -32768, 32767);
    }
}

RNA_EXTERN_C void ShaderFxShadow_scale_get(PointerRNA *ptr, float values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

RNA_EXTERN_C void ShaderFxShadow_scale_set(PointerRNA *ptr, const float values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

RNA_EXTERN_C void ShaderFxShadow_shadow_color_get(PointerRNA *ptr, float values[4])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->shadow_rgba)[i]);
    }
}

RNA_EXTERN_C void ShaderFxShadow_shadow_color_set(PointerRNA *ptr, const float values[4])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->shadow_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int ShaderFxShadow_orientation_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (int)(data->orientation);
}

RNA_EXTERN_C void ShaderFxShadow_orientation_set(PointerRNA *ptr, int value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->orientation = (std::remove_reference_t<decltype(data->orientation)>)value;
#else
    data->orientation = value;
#endif
}

RNA_EXTERN_C float ShaderFxShadow_amplitude_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->amplitude);
}

RNA_EXTERN_C void ShaderFxShadow_amplitude_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->amplitude = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float ShaderFxShadow_period_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->period);
}

RNA_EXTERN_C void ShaderFxShadow_period_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->period = (std::remove_reference_t<decltype(data->period)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->period = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float ShaderFxShadow_phase_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->phase);
}

RNA_EXTERN_C void ShaderFxShadow_phase_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->phase = (std::remove_reference_t<decltype(data->phase)>)value;
#else
    data->phase = value;
#endif
}

RNA_EXTERN_C float ShaderFxShadow_rotation_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

RNA_EXTERN_C void ShaderFxShadow_rotation_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->rotation = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C void ShaderFxShadow_blur_get(PointerRNA *ptr, int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->blur)[i]);
    }
}

RNA_EXTERN_C void ShaderFxShadow_blur_set(PointerRNA *ptr, const int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->blur)[i] = CLAMPIS(values[i], 0, 32767);
    }
}

RNA_EXTERN_C int ShaderFxShadow_samples_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

RNA_EXTERN_C void ShaderFxShadow_samples_set(PointerRNA *ptr, int value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->samples = (std::remove_reference_t<decltype(data->samples)>)CLAMPIS(value, 0, 32);
#else
    data->samples = CLAMPIS(value, 0, 32);
#endif
}

RNA_EXTERN_C bool ShaderFxShadow_use_object_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShaderFxShadow_use_object_set(PointerRNA *ptr, bool value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool ShaderFxShadow_use_wave_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void ShaderFxShadow_use_wave_set(PointerRNA *ptr, bool value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C void ShaderFxGlow_glow_color_get(PointerRNA *ptr, float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->glow_color)[i]);
    }
}

RNA_EXTERN_C void ShaderFxGlow_glow_color_set(PointerRNA *ptr, const float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->glow_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float ShaderFxGlow_opacity_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->glow_color[3]);
}

RNA_EXTERN_C void ShaderFxGlow_opacity_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->glow_color[3] = (std::remove_reference_t<decltype(data->glow_color[3])>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->glow_color[3] = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void ShaderFxGlow_select_color_get(PointerRNA *ptr, float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->select_color)[i]);
    }
}

RNA_EXTERN_C void ShaderFxGlow_select_color_set(PointerRNA *ptr, const float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->select_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C int ShaderFxGlow_mode_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void ShaderFxGlow_mode_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C float ShaderFxGlow_threshold_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->threshold);
}

RNA_EXTERN_C void ShaderFxGlow_threshold_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->threshold = (std::remove_reference_t<decltype(data->threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void ShaderFxGlow_size_get(PointerRNA *ptr, float values[2])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->blur)[i]);
    }
}

RNA_EXTERN_C void ShaderFxGlow_size_set(PointerRNA *ptr, const float values[2])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->blur)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C int ShaderFxGlow_samples_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

RNA_EXTERN_C void ShaderFxGlow_samples_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->samples = (std::remove_reference_t<decltype(data->samples)>)CLAMPIS(value, 1, 32);
#else
    data->samples = CLAMPIS(value, 1, 32);
#endif
}

RNA_EXTERN_C bool ShaderFxGlow_use_glow_under_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShaderFxGlow_use_glow_under_set(PointerRNA *ptr, bool value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C float ShaderFxGlow_rotation_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

RNA_EXTERN_C void ShaderFxGlow_rotation_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
#else
    data->rotation = value;
#endif
}

RNA_EXTERN_C int ShaderFxGlow_blend_mode_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->blend_mode);
}

RNA_EXTERN_C void ShaderFxGlow_blend_mode_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->blend_mode = (std::remove_reference_t<decltype(data->blend_mode)>)value;
#else
    data->blend_mode = value;
#endif
}

RNA_EXTERN_C int ShaderFxSwirl_radius_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (int)(data->radius);
}

RNA_EXTERN_C void ShaderFxSwirl_radius_set(PointerRNA *ptr, int value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0, 32767);
#else
    data->radius = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C float ShaderFxSwirl_angle_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (float)(data->angle);
}

RNA_EXTERN_C void ShaderFxSwirl_angle_set(PointerRNA *ptr, float value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
#ifdef __cplusplus
    data->angle = (std::remove_reference_t<decltype(data->angle)>)CLAMPIS(value, -31.4159259796f, 31.4159259796f);
#else
    data->angle = CLAMPIS(value, -31.4159259796f, 31.4159259796f);
#endif
}

RNA_EXTERN_C bool ShaderFxSwirl_use_transparent_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShaderFxSwirl_use_transparent_set(PointerRNA *ptr, bool value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C PointerRNA ShaderFxSwirl_object_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

RNA_EXTERN_C void ShaderFxSwirl_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_SwirlShaderFx_object_set(ptr, value, reports);
}

RNA_EXTERN_C bool ShaderFxFlip_use_flip_x_get(PointerRNA *ptr)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ShaderFxFlip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool ShaderFxFlip_use_flip_y_get(PointerRNA *ptr)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void ShaderFxFlip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}











/* ShaderFx */
CollectionPropertyRNA rna_ShaderFx_rna_properties = {
	{(PropertyRNA *)&rna_ShaderFx_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFx_rna_properties_begin, ShaderFx_rna_properties_next, ShaderFx_rna_properties_end, ShaderFx_rna_properties_get, nullptr, nullptr, ShaderFx_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ShaderFx_rna_type = {
	{(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFx_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ShaderFx_name = {
	{(PropertyRNA *)&rna_ShaderFx_type, (PropertyRNA *)&rna_ShaderFx_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Effect name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 102760453, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFx_name_get, ShaderFx_name_length, ShaderFx_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_ShaderFx_type = {
	{(PropertyRNA *)&rna_ShaderFx_show_viewport, (PropertyRNA *)&rna_ShaderFx_name,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"",
	0, "ID",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShaderFxData, type), (RawPropertyType)0, nullptr},
	ShaderFx_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_object_shaderfx_type_items, 9, 1
};

BoolPropertyRNA rna_ShaderFx_show_viewport = {
	{(PropertyRNA *)&rna_ShaderFx_show_render, (PropertyRNA *)&rna_ShaderFx_type,
	-1, "show_viewport", 69635, 1, 0, 0, 0, "Realtime",
	"Display effect in viewport",
	283, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFx_show_viewport_get, ShaderFx_show_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ShaderFx_show_render = {
	{(PropertyRNA *)&rna_ShaderFx_show_in_editmode, (PropertyRNA *)&rna_ShaderFx_show_viewport,
	-1, "show_render", 4099, 1, 0, 0, 0, "Render",
	"Use effect during render",
	257, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFx_show_render_get, ShaderFx_show_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ShaderFx_show_in_editmode = {
	{(PropertyRNA *)&rna_ShaderFx_show_expanded, (PropertyRNA *)&rna_ShaderFx_show_render,
	-1, "show_in_editmode", 3, 0, 0, 0, 0, "Edit Mode",
	"Display effect in Edit mode",
	131, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFx_show_in_editmode_get, ShaderFx_show_in_editmode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ShaderFx_show_expanded = {
	{nullptr, (PropertyRNA *)&rna_ShaderFx_show_in_editmode,
	-1, "show_expanded", 1073745923, 1, 0, 4, 0, "Expanded",
	"Set effect expansion in the user interface",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShaderFxData, ui_expand_flag), (RawPropertyType)1, nullptr},
	ShaderFx_show_expanded_get, ShaderFx_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ShaderFx = {
	{(ContainerRNA *)&RNA_ShaderFxBlur, (ContainerRNA *)&RNA_EnvelopeGpencilModifier,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFx_rna_properties, (PropertyRNA *)&rna_ShaderFx_show_expanded}},
	"ShaderFx", nullptr, nullptr, 516, nullptr, "ShaderFx",
	"Effect affecting the grease pencil object",
	"*", 17,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	nullptr,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Gaussian Blur Effect */
static float rna_ShaderFxBlur_size_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxBlur_size = {
	{(PropertyRNA *)&rna_ShaderFxBlur_samples, nullptr,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Factor of Blur",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BlurShaderFxData, radius), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxBlur_size_get, ShaderFxBlur_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ShaderFxBlur_size_default
};

IntPropertyRNA rna_ShaderFxBlur_samples = {
	{(PropertyRNA *)&rna_ShaderFxBlur_rotation, (PropertyRNA *)&rna_ShaderFxBlur_size,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples (zero, disable blur)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BlurShaderFxData, samples), (RawPropertyType)0, nullptr},
	ShaderFxBlur_samples_get, ShaderFxBlur_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32, 0, 32, 2, 4, nullptr
};

FloatPropertyRNA rna_ShaderFxBlur_rotation = {
	{(PropertyRNA *)&rna_ShaderFxBlur_use_dof_mode, (PropertyRNA *)&rna_ShaderFxBlur_samples,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation of the effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BlurShaderFxData, rotation), (RawPropertyType)5, nullptr},
	ShaderFxBlur_rotation_get, ShaderFxBlur_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_ShaderFxBlur_use_dof_mode = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxBlur_rotation,
	-1, "use_dof_mode", 3, 1, 0, 0, 0, "Use as Depth Of Field",
	"Blur using camera depth of field",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxBlur_use_dof_mode_get, ShaderFxBlur_use_dof_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ShaderFxBlur = {
	{(ContainerRNA *)&RNA_ShaderFxColorize, (ContainerRNA *)&RNA_ShaderFx,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxBlur_size, (PropertyRNA *)&rna_ShaderFxBlur_use_dof_mode}},
	"ShaderFxBlur", nullptr, nullptr, 516, nullptr, "Gaussian Blur Effect",
	"Gaussian Blur effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Colorize Effect */
FloatPropertyRNA rna_ShaderFxColorize_factor = {
	{(PropertyRNA *)&rna_ShaderFxColorize_low_color, nullptr,
	-1, "factor", 3, 1, 0, 4, 0, "Factor",
	"Mix factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, factor), (RawPropertyType)5, nullptr},
	ShaderFxColorize_factor_get, ShaderFxColorize_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_ShaderFxColorize_low_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxColorize_low_color = {
	{(PropertyRNA *)&rna_ShaderFxColorize_high_color, (PropertyRNA *)&rna_ShaderFxColorize_factor,
	-1, "low_color", 3, 1, 0, 4, 0, "Low Color",
	"First color used for effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, low_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxColorize_low_color_get, ShaderFxColorize_low_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxColorize_low_color_default
};

static float rna_ShaderFxColorize_high_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxColorize_high_color = {
	{(PropertyRNA *)&rna_ShaderFxColorize_mode, (PropertyRNA *)&rna_ShaderFxColorize_low_color,
	-1, "high_color", 3, 1, 0, 4, 0, "High Color",
	"Second color used for effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, high_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxColorize_high_color_get, ShaderFxColorize_high_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxColorize_high_color_default
};

static const EnumPropertyItem rna_ShaderFxColorize_mode_items[6] = {
	{0, "GRAYSCALE", 0, "Gray Scale", ""},
	{1, "SEPIA", 0, "Sepia", ""},
	{2, "DUOTONE", 0, "Duotone", ""},
	{4, "TRANSPARENT", 0, "Transparent", ""},
	{3, "CUSTOM", 0, "Custom", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShaderFxColorize_mode = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxColorize_high_color,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Effect mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, mode), (RawPropertyType)0, nullptr},
	ShaderFxColorize_mode_get, ShaderFxColorize_mode_set, nullptr, nullptr, nullptr, rna_ShaderFxColorize_mode_items, 5, 0
};

StructRNA RNA_ShaderFxColorize = {
	{(ContainerRNA *)&RNA_ShaderFxWave, (ContainerRNA *)&RNA_ShaderFxBlur,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxColorize_factor, (PropertyRNA *)&rna_ShaderFxColorize_mode}},
	"ShaderFxColorize", nullptr, nullptr, 516, nullptr, "Colorize Effect",
	"Colorize effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Wave Deformation Effect */
static const EnumPropertyItem rna_ShaderFxWave_orientation_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "VERTICAL", 0, "Vertical", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShaderFxWave_orientation = {
	{(PropertyRNA *)&rna_ShaderFxWave_amplitude, nullptr,
	-1, "orientation", 3, 1, 0, 4, 0, "Orientation",
	"Direction of the wave",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, orientation), (RawPropertyType)0, nullptr},
	ShaderFxWave_orientation_get, ShaderFxWave_orientation_set, nullptr, nullptr, nullptr, rna_ShaderFxWave_orientation_items, 2, 0
};

FloatPropertyRNA rna_ShaderFxWave_amplitude = {
	{(PropertyRNA *)&rna_ShaderFxWave_period, (PropertyRNA *)&rna_ShaderFxWave_orientation,
	-1, "amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"Amplitude of Wave",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, amplitude), (RawPropertyType)5, nullptr},
	ShaderFxWave_amplitude_get, ShaderFxWave_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShaderFxWave_period = {
	{(PropertyRNA *)&rna_ShaderFxWave_phase, (PropertyRNA *)&rna_ShaderFxWave_amplitude,
	-1, "period", 3, 1, 0, 4, 0, "Period",
	"Period of Wave",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, period), (RawPropertyType)5, nullptr},
	ShaderFxWave_period_get, ShaderFxWave_period_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShaderFxWave_phase = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxWave_period,
	-1, "phase", 3, 1, 0, 4, 0, "Phase",
	"Phase Shift of Wave",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, phase), (RawPropertyType)5, nullptr},
	ShaderFxWave_phase_get, ShaderFxWave_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_ShaderFxWave = {
	{(ContainerRNA *)&RNA_ShaderFxPixel, (ContainerRNA *)&RNA_ShaderFxColorize,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxWave_orientation, (PropertyRNA *)&rna_ShaderFxWave_phase}},
	"ShaderFxWave", nullptr, nullptr, 516, nullptr, "Wave Deformation Effect",
	"Wave Deformation effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Pixelate Effect */
static int rna_ShaderFxPixel_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxPixel_size = {
	{(PropertyRNA *)&rna_ShaderFxPixel_use_antialiasing, nullptr,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Pixel size",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PixelShaderFxData, size), (RawPropertyType)0, nullptr},
	nullptr, nullptr, ShaderFxPixel_size_get, ShaderFxPixel_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 32767, 1, 32767, 1, 0, rna_ShaderFxPixel_size_default
};

BoolPropertyRNA rna_ShaderFxPixel_use_antialiasing = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxPixel_size,
	-1, "use_antialiasing", 3, 1, 0, 0, 0, "Antialiasing",
	"Antialias pixels",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxPixel_use_antialiasing_get, ShaderFxPixel_use_antialiasing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ShaderFxPixel = {
	{(ContainerRNA *)&RNA_ShaderFxRim, (ContainerRNA *)&RNA_ShaderFxWave,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxPixel_size, (PropertyRNA *)&rna_ShaderFxPixel_use_antialiasing}},
	"ShaderFxPixel", nullptr, nullptr, 516, nullptr, "Pixelate Effect",
	"Pixelate effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Rim Effect */
static int rna_ShaderFxRim_offset_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxRim_offset = {
	{(PropertyRNA *)&rna_ShaderFxRim_rim_color, nullptr,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"Offset of the rim",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, offset), (RawPropertyType)0, nullptr},
	nullptr, nullptr, ShaderFxRim_offset_get, ShaderFxRim_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, rna_ShaderFxRim_offset_default
};

static float rna_ShaderFxRim_rim_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxRim_rim_color = {
	{(PropertyRNA *)&rna_ShaderFxRim_mask_color, (PropertyRNA *)&rna_ShaderFxRim_offset,
	-1, "rim_color", 3, 1, 0, 4, 0, "Rim Color",
	"Color used for Rim",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, rim_rgb), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxRim_rim_color_get, ShaderFxRim_rim_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxRim_rim_color_default
};

static float rna_ShaderFxRim_mask_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxRim_mask_color = {
	{(PropertyRNA *)&rna_ShaderFxRim_mode, (PropertyRNA *)&rna_ShaderFxRim_rim_color,
	-1, "mask_color", 3, 1, 0, 4, 0, "Mask Color",
	"Color that must be kept",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, mask_rgb), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxRim_mask_color_get, ShaderFxRim_mask_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxRim_mask_color_default
};

static const EnumPropertyItem rna_ShaderFxRim_mode_items[7] = {
	{0, "NORMAL", 0, "Regular", ""},
	{1, "OVERLAY", 0, "Overlay", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "MULTIPLY", 0, "Multiply", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShaderFxRim_mode = {
	{(PropertyRNA *)&rna_ShaderFxRim_blur, (PropertyRNA *)&rna_ShaderFxRim_mask_color,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Blend mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, mode), (RawPropertyType)0, nullptr},
	ShaderFxRim_mode_get, ShaderFxRim_mode_set, nullptr, nullptr, nullptr, rna_ShaderFxRim_mode_items, 6, 0
};

static int rna_ShaderFxRim_blur_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxRim_blur = {
	{(PropertyRNA *)&rna_ShaderFxRim_samples, (PropertyRNA *)&rna_ShaderFxRim_mode,
	-1, "blur", 3, 1, 0, 4, 0, "Blur",
	"Number of pixels for blurring rim (set to 0 to disable)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, blur), (RawPropertyType)0, nullptr},
	nullptr, nullptr, ShaderFxRim_blur_get, ShaderFxRim_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, rna_ShaderFxRim_blur_default
};

IntPropertyRNA rna_ShaderFxRim_samples = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxRim_blur,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples (zero, disable blur)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, samples), (RawPropertyType)0, nullptr},
	ShaderFxRim_samples_get, ShaderFxRim_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32, 0, 32, 2, 4, nullptr
};

StructRNA RNA_ShaderFxRim = {
	{(ContainerRNA *)&RNA_ShaderFxShadow, (ContainerRNA *)&RNA_ShaderFxPixel,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxRim_offset, (PropertyRNA *)&rna_ShaderFxRim_samples}},
	"ShaderFxRim", nullptr, nullptr, 516, nullptr, "Rim Effect",
	"Rim effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Shadow Effect */
PointerPropertyRNA rna_ShaderFxShadow_object = {
	{(PropertyRNA *)&rna_ShaderFxShadow_offset, nullptr,
	-1, "object", 9437313, 1, 0, 0, 0, "Object",
	"Object to determine center of rotation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxShadow_object_get, ShaderFxShadow_object_set, nullptr, nullptr,&RNA_Object
};

static int rna_ShaderFxShadow_offset_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxShadow_offset = {
	{(PropertyRNA *)&rna_ShaderFxShadow_scale, (PropertyRNA *)&rna_ShaderFxShadow_object,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"Offset of the shadow",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, offset), (RawPropertyType)0, nullptr},
	nullptr, nullptr, ShaderFxShadow_offset_get, ShaderFxShadow_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, rna_ShaderFxShadow_offset_default
};

static float rna_ShaderFxShadow_scale_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxShadow_scale = {
	{(PropertyRNA *)&rna_ShaderFxShadow_shadow_color, (PropertyRNA *)&rna_ShaderFxShadow_offset,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Scale of the shadow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, scale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxShadow_scale_get, ShaderFxShadow_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShaderFxShadow_scale_default
};

static float rna_ShaderFxShadow_shadow_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxShadow_shadow_color = {
	{(PropertyRNA *)&rna_ShaderFxShadow_orientation, (PropertyRNA *)&rna_ShaderFxShadow_scale,
	-1, "shadow_color", 3, 1, 0, 4, 0, "Shadow Color",
	"Color used for Shadow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, shadow_rgba), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxShadow_shadow_color_get, ShaderFxShadow_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxShadow_shadow_color_default
};

static const EnumPropertyItem rna_ShaderFxShadow_orientation_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "VERTICAL", 0, "Vertical", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShaderFxShadow_orientation = {
	{(PropertyRNA *)&rna_ShaderFxShadow_amplitude, (PropertyRNA *)&rna_ShaderFxShadow_shadow_color,
	-1, "orientation", 3, 1, 0, 4, 0, "Orientation",
	"Direction of the wave",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, orientation), (RawPropertyType)0, nullptr},
	ShaderFxShadow_orientation_get, ShaderFxShadow_orientation_set, nullptr, nullptr, nullptr, rna_ShaderFxShadow_orientation_items, 2, 0
};

FloatPropertyRNA rna_ShaderFxShadow_amplitude = {
	{(PropertyRNA *)&rna_ShaderFxShadow_period, (PropertyRNA *)&rna_ShaderFxShadow_orientation,
	-1, "amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"Amplitude of Wave",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, amplitude), (RawPropertyType)5, nullptr},
	ShaderFxShadow_amplitude_get, ShaderFxShadow_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShaderFxShadow_period = {
	{(PropertyRNA *)&rna_ShaderFxShadow_phase, (PropertyRNA *)&rna_ShaderFxShadow_amplitude,
	-1, "period", 3, 1, 0, 4, 0, "Period",
	"Period of Wave",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, period), (RawPropertyType)5, nullptr},
	ShaderFxShadow_period_get, ShaderFxShadow_period_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShaderFxShadow_phase = {
	{(PropertyRNA *)&rna_ShaderFxShadow_rotation, (PropertyRNA *)&rna_ShaderFxShadow_period,
	-1, "phase", 3, 1, 0, 4, 0, "Phase",
	"Phase Shift of Wave",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, phase), (RawPropertyType)5, nullptr},
	ShaderFxShadow_phase_get, ShaderFxShadow_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ShaderFxShadow_rotation = {
	{(PropertyRNA *)&rna_ShaderFxShadow_blur, (PropertyRNA *)&rna_ShaderFxShadow_phase,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation around center or object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, rotation), (RawPropertyType)5, nullptr},
	ShaderFxShadow_rotation_get, ShaderFxShadow_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 5.0f, 2, 0.0f, nullptr
};

static int rna_ShaderFxShadow_blur_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxShadow_blur = {
	{(PropertyRNA *)&rna_ShaderFxShadow_samples, (PropertyRNA *)&rna_ShaderFxShadow_rotation,
	-1, "blur", 3, 1, 0, 4, 0, "Blur",
	"Number of pixels for blurring shadow (set to 0 to disable)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, blur), (RawPropertyType)0, nullptr},
	nullptr, nullptr, ShaderFxShadow_blur_get, ShaderFxShadow_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, rna_ShaderFxShadow_blur_default
};

IntPropertyRNA rna_ShaderFxShadow_samples = {
	{(PropertyRNA *)&rna_ShaderFxShadow_use_object, (PropertyRNA *)&rna_ShaderFxShadow_blur,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples (zero, disable blur)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, samples), (RawPropertyType)0, nullptr},
	ShaderFxShadow_samples_get, ShaderFxShadow_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32, 0, 32, 2, 4, nullptr
};

BoolPropertyRNA rna_ShaderFxShadow_use_object = {
	{(PropertyRNA *)&rna_ShaderFxShadow_use_wave, (PropertyRNA *)&rna_ShaderFxShadow_samples,
	-1, "use_object", 3, 1, 0, 0, 0, "Use Object",
	"Use object as center of rotation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxShadow_use_object_get, ShaderFxShadow_use_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ShaderFxShadow_use_wave = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxShadow_use_object,
	-1, "use_wave", 3, 1, 0, 0, 0, "Wave",
	"Use wave effect",
	0, "GPencil",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxShadow_use_wave_get, ShaderFxShadow_use_wave_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ShaderFxShadow = {
	{(ContainerRNA *)&RNA_ShaderFxGlow, (ContainerRNA *)&RNA_ShaderFxRim,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxShadow_object, (PropertyRNA *)&rna_ShaderFxShadow_use_wave}},
	"ShaderFxShadow", nullptr, nullptr, 516, nullptr, "Shadow Effect",
	"Shadow effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Glow Effect */
static float rna_ShaderFxGlow_glow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxGlow_glow_color = {
	{(PropertyRNA *)&rna_ShaderFxGlow_opacity, nullptr,
	-1, "glow_color", 3, 1, 0, 4, 0, "Glow Color",
	"Color used for generated glow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, glow_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxGlow_glow_color_get, ShaderFxGlow_glow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxGlow_glow_color_default
};

FloatPropertyRNA rna_ShaderFxGlow_opacity = {
	{(PropertyRNA *)&rna_ShaderFxGlow_select_color, (PropertyRNA *)&rna_ShaderFxGlow_glow_color,
	-1, "opacity", 3, 1, 0, 4, 0, "Opacity",
	"Effect Opacity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, glow_color[3]), (RawPropertyType)5, nullptr},
	ShaderFxGlow_opacity_get, ShaderFxGlow_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_ShaderFxGlow_select_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxGlow_select_color = {
	{(PropertyRNA *)&rna_ShaderFxGlow_mode, (PropertyRNA *)&rna_ShaderFxGlow_opacity,
	-1, "select_color", 3, 1, 0, 4, 0, "Select Color",
	"Color selected to apply glow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, select_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxGlow_select_color_get, ShaderFxGlow_select_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxGlow_select_color_default
};

static const EnumPropertyItem rna_ShaderFxGlow_mode_items[3] = {
	{0, "LUMINANCE", 0, "Luminance", ""},
	{1, "COLOR", 0, "Color", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShaderFxGlow_mode = {
	{(PropertyRNA *)&rna_ShaderFxGlow_threshold, (PropertyRNA *)&rna_ShaderFxGlow_select_color,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Glow mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, mode), (RawPropertyType)0, nullptr},
	ShaderFxGlow_mode_get, ShaderFxGlow_mode_set, nullptr, nullptr, nullptr, rna_ShaderFxGlow_mode_items, 2, 0
};

FloatPropertyRNA rna_ShaderFxGlow_threshold = {
	{(PropertyRNA *)&rna_ShaderFxGlow_size, (PropertyRNA *)&rna_ShaderFxGlow_mode,
	-1, "threshold", 3, 1, 0, 4, 0, "Threshold",
	"Limit to select color for glow effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, threshold), (RawPropertyType)5, nullptr},
	ShaderFxGlow_threshold_get, ShaderFxGlow_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, nullptr
};

static float rna_ShaderFxGlow_size_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxGlow_size = {
	{(PropertyRNA *)&rna_ShaderFxGlow_samples, (PropertyRNA *)&rna_ShaderFxGlow_threshold,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Size of the effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, blur), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ShaderFxGlow_size_get, ShaderFxGlow_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ShaderFxGlow_size_default
};

IntPropertyRNA rna_ShaderFxGlow_samples = {
	{(PropertyRNA *)&rna_ShaderFxGlow_use_glow_under, (PropertyRNA *)&rna_ShaderFxGlow_size,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, samples), (RawPropertyType)0, nullptr},
	ShaderFxGlow_samples_get, ShaderFxGlow_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 32, 1, 32, 2, 4, nullptr
};

BoolPropertyRNA rna_ShaderFxGlow_use_glow_under = {
	{(PropertyRNA *)&rna_ShaderFxGlow_rotation, (PropertyRNA *)&rna_ShaderFxGlow_samples,
	-1, "use_glow_under", 3, 1, 0, 0, 0, "Glow Under",
	"Glow only areas with alpha (not supported with Regular blend mode)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxGlow_use_glow_under_get, ShaderFxGlow_use_glow_under_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_ShaderFxGlow_rotation = {
	{(PropertyRNA *)&rna_ShaderFxGlow_blend_mode, (PropertyRNA *)&rna_ShaderFxGlow_use_glow_under,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation of the effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, rotation), (RawPropertyType)5, nullptr},
	ShaderFxGlow_rotation_get, ShaderFxGlow_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_ShaderFxGlow_blend_mode_items[6] = {
	{0, "REGULAR", 0, "Regular", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "MULTIPLY", 0, "Multiply", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ShaderFxGlow_blend_mode = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxGlow_rotation,
	-1, "blend_mode", 3, 1, 0, 4, 0, "Blend Mode",
	"Blend mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, blend_mode), (RawPropertyType)0, nullptr},
	ShaderFxGlow_blend_mode_get, ShaderFxGlow_blend_mode_set, nullptr, nullptr, nullptr, rna_ShaderFxGlow_blend_mode_items, 5, 0
};

StructRNA RNA_ShaderFxGlow = {
	{(ContainerRNA *)&RNA_ShaderFxSwirl, (ContainerRNA *)&RNA_ShaderFxShadow,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxGlow_glow_color, (PropertyRNA *)&rna_ShaderFxGlow_blend_mode}},
	"ShaderFxGlow", nullptr, nullptr, 516, nullptr, "Glow Effect",
	"Glow effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Swirl Effect */
IntPropertyRNA rna_ShaderFxSwirl_radius = {
	{(PropertyRNA *)&rna_ShaderFxSwirl_angle, nullptr,
	-1, "radius", 3, 1, 0, 4, 0, "Radius",
	"Radius to apply",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SwirlShaderFxData, radius), (RawPropertyType)0, nullptr},
	ShaderFxSwirl_radius_get, ShaderFxSwirl_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

FloatPropertyRNA rna_ShaderFxSwirl_angle = {
	{(PropertyRNA *)&rna_ShaderFxSwirl_use_transparent, (PropertyRNA *)&rna_ShaderFxSwirl_radius,
	-1, "angle", 3, 1, 0, 4, 0, "Angle",
	"Angle of rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SwirlShaderFxData, angle), (RawPropertyType)5, nullptr},
	ShaderFxSwirl_angle_get, ShaderFxSwirl_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -31.4159259796f, 31.4159259796f, -31.4159259796f, 31.4159259796f, 5.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_ShaderFxSwirl_use_transparent = {
	{(PropertyRNA *)&rna_ShaderFxSwirl_object, (PropertyRNA *)&rna_ShaderFxSwirl_angle,
	-1, "use_transparent", 3, 1, 0, 0, 0, "Transparent",
	"Make image transparent outside of radius",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxSwirl_use_transparent_get, ShaderFxSwirl_use_transparent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ShaderFxSwirl_object = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxSwirl_use_transparent,
	-1, "object", 9437313, 1, 0, 0, 0, "Object",
	"Object to determine center location",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxSwirl_object_get, ShaderFxSwirl_object_set, nullptr, nullptr,&RNA_Object
};

StructRNA RNA_ShaderFxSwirl = {
	{(ContainerRNA *)&RNA_ShaderFxFlip, (ContainerRNA *)&RNA_ShaderFxGlow,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxSwirl_radius, (PropertyRNA *)&rna_ShaderFxSwirl_object}},
	"ShaderFxSwirl", nullptr, nullptr, 516, nullptr, "Swirl Effect",
	"Swirl effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Flip Effect */
BoolPropertyRNA rna_ShaderFxFlip_use_flip_x = {
	{(PropertyRNA *)&rna_ShaderFxFlip_use_flip_y, nullptr,
	-1, "use_flip_x", 3, 1, 0, 0, 0, "Horizontal",
	"Flip image horizontally",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxFlip_use_flip_x_get, ShaderFxFlip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ShaderFxFlip_use_flip_y = {
	{nullptr, (PropertyRNA *)&rna_ShaderFxFlip_use_flip_x,
	-1, "use_flip_y", 3, 1, 0, 0, 0, "Vertical",
	"Flip image vertically",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ShaderFxFlip_use_flip_y_get, ShaderFxFlip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ShaderFxFlip = {
	{(ContainerRNA *)&RNA_NlaTrack, (ContainerRNA *)&RNA_ShaderFxSwirl,
	nullptr,
	{(PropertyRNA *)&rna_ShaderFxFlip_use_flip_x, (PropertyRNA *)&rna_ShaderFxFlip_use_flip_y}},
	"ShaderFxFlip", nullptr, nullptr, 516, nullptr, "Flip Effect",
	"Flip effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	nullptr,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

