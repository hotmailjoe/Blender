
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

#include "rna_wm_gizmo.cc"
#include "rna_wm_gizmo_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_GizmoGroup_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GizmoGroup_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_GizmoGroup_bl_idname;
RNA_EXTERN_C StringPropertyRNA rna_GizmoGroup_bl_label;
RNA_EXTERN_C EnumPropertyRNA rna_GizmoGroup_bl_space_type;
RNA_EXTERN_C EnumPropertyRNA rna_GizmoGroup_bl_region_type;
RNA_EXTERN_C StringPropertyRNA rna_GizmoGroup_bl_owner_id;
RNA_EXTERN_C EnumPropertyRNA rna_GizmoGroup_bl_options;
RNA_EXTERN_C StringPropertyRNA rna_GizmoGroup_name;
RNA_EXTERN_C BoolPropertyRNA rna_GizmoGroup_has_reports;
RNA_EXTERN_C CollectionPropertyRNA rna_GizmoGroup_gizmos;

extern FunctionRNA rna_GizmoGroup_poll_func;
extern BoolPropertyRNA rna_GizmoGroup_poll_visible;
extern PointerPropertyRNA rna_GizmoGroup_poll_context;

extern FunctionRNA rna_GizmoGroup_setup_keymap_func;
extern PointerPropertyRNA rna_GizmoGroup_setup_keymap_keyconfig;
extern PointerPropertyRNA rna_GizmoGroup_setup_keymap_keymap;

extern FunctionRNA rna_GizmoGroup_setup_func;
extern PointerPropertyRNA rna_GizmoGroup_setup_context;

extern FunctionRNA rna_GizmoGroup_refresh_func;
extern PointerPropertyRNA rna_GizmoGroup_refresh_context;

extern FunctionRNA rna_GizmoGroup_draw_prepare_func;
extern PointerPropertyRNA rna_GizmoGroup_draw_prepare_context;

extern FunctionRNA rna_GizmoGroup_invoke_prepare_func;
extern PointerPropertyRNA rna_GizmoGroup_invoke_prepare_context;
extern PointerPropertyRNA rna_GizmoGroup_invoke_prepare_gizmo;



RNA_EXTERN_C CollectionPropertyRNA rna_Gizmo_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Gizmo_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_Gizmo_properties;
RNA_EXTERN_C StringPropertyRNA rna_Gizmo_bl_idname;
RNA_EXTERN_C PointerPropertyRNA rna_Gizmo_group;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_color;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_color_highlight;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_alpha_highlight;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_matrix_space;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_matrix_basis;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_matrix_offset;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_matrix_world;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_scale_basis;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_line_width;
RNA_EXTERN_C FloatPropertyRNA rna_Gizmo_select_bias;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_hide;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_hide_select;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_hide_keymap;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_grab_cursor;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_draw_hover;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_draw_modal;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_draw_value;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_draw_offset_scale;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_draw_scale;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_select_background;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_operator_tool_properties;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_event_handle_all;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_use_tooltip;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_is_highlight;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_is_modal;
RNA_EXTERN_C BoolPropertyRNA rna_Gizmo_select;

extern FunctionRNA rna_Gizmo_draw_func;
extern PointerPropertyRNA rna_Gizmo_draw_context;

extern FunctionRNA rna_Gizmo_draw_select_func;
extern PointerPropertyRNA rna_Gizmo_draw_select_context;
extern IntPropertyRNA rna_Gizmo_draw_select_select_id;

extern FunctionRNA rna_Gizmo_test_select_func;
extern PointerPropertyRNA rna_Gizmo_test_select_context;
extern IntPropertyRNA rna_Gizmo_test_select_location;
extern IntPropertyRNA rna_Gizmo_test_select_intersect_id;

extern FunctionRNA rna_Gizmo_modal_func;
extern PointerPropertyRNA rna_Gizmo_modal_context;
extern PointerPropertyRNA rna_Gizmo_modal_event;
extern EnumPropertyRNA rna_Gizmo_modal_tweak;
extern EnumPropertyRNA rna_Gizmo_modal_result;

extern FunctionRNA rna_Gizmo_setup_func;
extern FunctionRNA rna_Gizmo_invoke_func;
extern PointerPropertyRNA rna_Gizmo_invoke_context;
extern PointerPropertyRNA rna_Gizmo_invoke_event;
extern EnumPropertyRNA rna_Gizmo_invoke_result;

extern FunctionRNA rna_Gizmo_exit_func;
extern PointerPropertyRNA rna_Gizmo_exit_context;
extern BoolPropertyRNA rna_Gizmo_exit_cancel;

extern FunctionRNA rna_Gizmo_select_refresh_func;
extern FunctionRNA rna_Gizmo_draw_preset_box_func;
extern FloatPropertyRNA rna_Gizmo_draw_preset_box_matrix;
extern IntPropertyRNA rna_Gizmo_draw_preset_box_select_id;

extern FunctionRNA rna_Gizmo_draw_preset_arrow_func;
extern FloatPropertyRNA rna_Gizmo_draw_preset_arrow_matrix;
extern EnumPropertyRNA rna_Gizmo_draw_preset_arrow_axis;
extern IntPropertyRNA rna_Gizmo_draw_preset_arrow_select_id;

extern FunctionRNA rna_Gizmo_draw_preset_circle_func;
extern FloatPropertyRNA rna_Gizmo_draw_preset_circle_matrix;
extern EnumPropertyRNA rna_Gizmo_draw_preset_circle_axis;
extern IntPropertyRNA rna_Gizmo_draw_preset_circle_select_id;

extern FunctionRNA rna_Gizmo_target_set_prop_func;
extern StringPropertyRNA rna_Gizmo_target_set_prop_target;
extern PointerPropertyRNA rna_Gizmo_target_set_prop_data;
extern StringPropertyRNA rna_Gizmo_target_set_prop_property;
extern IntPropertyRNA rna_Gizmo_target_set_prop_index;

extern FunctionRNA rna_Gizmo_target_set_operator_func;
extern StringPropertyRNA rna_Gizmo_target_set_operator_operator;
extern IntPropertyRNA rna_Gizmo_target_set_operator_index;
extern PointerPropertyRNA rna_Gizmo_target_set_operator_properties;

extern FunctionRNA rna_Gizmo_target_is_valid_func;
extern StringPropertyRNA rna_Gizmo_target_is_valid_property;
extern BoolPropertyRNA rna_Gizmo_target_is_valid_result;



RNA_EXTERN_C CollectionPropertyRNA rna_GizmoProperties_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GizmoProperties_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_Gizmos_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Gizmos_rna_type;

extern FunctionRNA rna_Gizmos_new_func;
extern StringPropertyRNA rna_Gizmos_new_type;
extern PointerPropertyRNA rna_Gizmos_new_gizmo;

extern FunctionRNA rna_Gizmos_remove_func;
extern PointerPropertyRNA rna_Gizmos_remove_gizmo;

extern FunctionRNA rna_Gizmos_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_GizmoGroupProperties_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GizmoGroupProperties_rna_type;

static PointerRNA GizmoGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GizmoGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GizmoGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GizmoGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GizmoGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GizmoGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void GizmoGroup_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

RNA_EXTERN_C int GizmoGroup_bl_idname_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->idname);
}

RNA_EXTERN_C void GizmoGroup_bl_idname_set(PointerRNA *ptr, const char *value)
{
    rna_GizmoGroup_bl_idname_set(ptr, value);
}

RNA_EXTERN_C void GizmoGroup_bl_label_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_assert(strlen(data->type->name) < 64);
    strcpy(value, data->type->name);
}

RNA_EXTERN_C int GizmoGroup_bl_label_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->name);
}

RNA_EXTERN_C void GizmoGroup_bl_label_set(PointerRNA *ptr, const char *value)
{
    rna_GizmoGroup_bl_label_set(ptr, value);
}

RNA_EXTERN_C int GizmoGroup_bl_space_type_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->gzmap_params.spaceid);
}

RNA_EXTERN_C void GizmoGroup_bl_space_type_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
#ifdef __cplusplus
    data->type->gzmap_params.spaceid = (std::remove_reference_t<decltype(data->type->gzmap_params.spaceid)>)value;
#else
    data->type->gzmap_params.spaceid = value;
#endif
}

RNA_EXTERN_C int GizmoGroup_bl_region_type_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->gzmap_params.regionid);
}

RNA_EXTERN_C void GizmoGroup_bl_region_type_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
#ifdef __cplusplus
    data->type->gzmap_params.regionid = (std::remove_reference_t<decltype(data->type->gzmap_params.regionid)>)value;
#else
    data->type->gzmap_params.regionid = value;
#endif
}

RNA_EXTERN_C void GizmoGroup_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_assert(strlen(data->type->owner_id) < sizeof(data->type->owner_id));
    strcpy(value, data->type->owner_id);
}

RNA_EXTERN_C int GizmoGroup_bl_owner_id_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->owner_id);
}

RNA_EXTERN_C void GizmoGroup_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_strncpy_utf8(data->type->owner_id, value, sizeof(data->type->owner_id));
}

RNA_EXTERN_C int GizmoGroup_bl_options_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->flag);
}

RNA_EXTERN_C void GizmoGroup_bl_options_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
#ifdef __cplusplus
    data->type->flag = (std::remove_reference_t<decltype(data->type->flag)>)value;
#else
    data->type->flag = value;
#endif
}

RNA_EXTERN_C void GizmoGroup_name_get(PointerRNA *ptr, char *value)
{
    rna_GizmoGroup_name_get(ptr, value);
}

RNA_EXTERN_C int GizmoGroup_name_length(PointerRNA *ptr)
{
    return rna_GizmoGroup_name_length(ptr);
}

RNA_EXTERN_C bool GizmoGroup_has_reports_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GizmoGroup_has_reports_get;
    return fn(ptr);
}

static PointerRNA GizmoGroup_gizmos_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Gizmo, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void GizmoGroup_gizmos_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoGroup_gizmos;

    rna_GizmoGroup_gizmos_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroup_gizmos_get(iter);
    }
}

RNA_EXTERN_C void GizmoGroup_gizmos_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroup_gizmos_get(iter);
    }
}

RNA_EXTERN_C void GizmoGroup_gizmos_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GizmoGroup_gizmos_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GizmoGroup_gizmos_begin(&iter, ptr);

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
        if (found) { *r_ptr = GizmoGroup_gizmos_get(&iter); }
    }

    GizmoGroup_gizmos_end(&iter);

    return found;
}

static PointerRNA Gizmo_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Gizmo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Gizmo_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Gizmo_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Gizmo_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Gizmo_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Gizmo_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Gizmo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Gizmo_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA Gizmo_properties_get(PointerRNA *ptr)
{
    return rna_Gizmo_properties_get(ptr);
}

RNA_EXTERN_C void Gizmo_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmGizmo *data = (wmGizmo *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

RNA_EXTERN_C int Gizmo_bl_idname_length(PointerRNA *ptr)
{
    wmGizmo *data = (wmGizmo *)(ptr->data);
    return strlen(data->type->idname);
}

RNA_EXTERN_C void Gizmo_bl_idname_set(PointerRNA *ptr, const char *value)
{
    rna_Gizmo_bl_idname_set(ptr, value);
}

RNA_EXTERN_C PointerRNA Gizmo_group_get(PointerRNA *ptr)
{
    return rna_Gizmo_group_get(ptr);
}

RNA_EXTERN_C void Gizmo_color_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_color_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_color_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Gizmo_color_set;
    fn(ptr, values);
}

RNA_EXTERN_C float Gizmo_alpha_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_alpha_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_alpha_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_alpha_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Gizmo_color_highlight_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_color_hi_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_color_highlight_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Gizmo_color_hi_set;
    fn(ptr, values);
}

RNA_EXTERN_C float Gizmo_alpha_highlight_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_alpha_hi_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_alpha_highlight_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_alpha_hi_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Gizmo_matrix_space_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_space_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_matrix_space_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Gizmo_matrix_space_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_basis_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Gizmo_matrix_basis_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_matrix_offset_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_offset_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_matrix_offset_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Gizmo_matrix_offset_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Gizmo_matrix_world_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_world_get;
    fn(ptr, values);
}

RNA_EXTERN_C float Gizmo_scale_basis_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_scale_basis_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_scale_basis_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_scale_basis_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Gizmo_line_width_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_line_width_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_line_width_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_line_width_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Gizmo_select_bias_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_select_bias_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_select_bias_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_select_bias_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_hide_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_hide_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_hide_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_hide_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_hide_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_hide_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_hide_keymap_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_hide_keymap_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_hide_keymap_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_hide_keymap_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_grab_cursor_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_grab_cursor_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_grab_cursor_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_grab_cursor_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_draw_hover_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_hover_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_draw_hover_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_hover_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_draw_modal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_modal_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_draw_modal_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_modal_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_draw_value_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_value_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_draw_value_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_value_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_draw_offset_scale_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_offset_scale_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_draw_offset_scale_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_offset_scale_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_draw_scale_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_scale_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_draw_scale_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_scale_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_select_background_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_select_background_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_select_background_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_select_background_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_operator_tool_properties_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_operator_tool_properties_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_operator_tool_properties_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_operator_tool_properties_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_event_handle_all_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_event_handle_all_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_event_handle_all_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_event_handle_all_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_use_tooltip_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_tooltip_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_use_tooltip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_tooltip_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Gizmo_is_highlight_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_state_is_highlight_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Gizmo_is_modal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_state_is_modal_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Gizmo_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_state_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void Gizmo_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_state_select_set;
    fn(ptr, value);
}

static PointerRNA GizmoProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GizmoProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GizmoProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GizmoProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GizmoProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GizmoProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Gizmos_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Gizmos_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Gizmos_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Gizmos_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Gizmos_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Gizmos_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Gizmos_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Gizmos_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Gizmos_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GizmoGroupProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GizmoGroupProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoGroupProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroupProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GizmoGroupProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroupProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GizmoGroupProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GizmoGroupProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GizmoGroupProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


RNA_EXTERN_C void Gizmo_draw_preset_box_func(struct wmGizmo *_self, float matrix[16], int select_id)
{
	rna_gizmo_draw_preset_box(_self, matrix, select_id);
}

static void Gizmo_draw_preset_box_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const float *matrix;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_box(_self, matrix, select_id);
}

RNA_EXTERN_C void Gizmo_draw_preset_arrow_func(struct wmGizmo *_self, float matrix[16], int axis, int select_id)
{
	rna_gizmo_draw_preset_arrow(_self, matrix, axis, select_id);
}

static void Gizmo_draw_preset_arrow_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const float *matrix;
	int axis;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	axis = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_arrow(_self, matrix, axis, select_id);
}

RNA_EXTERN_C void Gizmo_draw_preset_circle_func(struct wmGizmo *_self, float matrix[16], int axis, int select_id)
{
	rna_gizmo_draw_preset_circle(_self, matrix, axis, select_id);
}

static void Gizmo_draw_preset_circle_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const float *matrix;
	int axis;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	axis = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_circle(_self, matrix, axis, select_id);
}

RNA_EXTERN_C void Gizmo_target_set_prop_func(struct wmGizmo *_self, ReportList *reports, const char * target, struct PointerRNA *data, const char * property, int index)
{
	rna_gizmo_target_set_prop(_self, reports, target, data, property, index);
}

static void Gizmo_target_set_prop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const char * target;
	struct PointerRNA *data;
	const char * property;
	int index;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	target = *((const char * *)_data);
	_data += 8;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	
	rna_gizmo_target_set_prop(_self, reports, target, data, property, index);
}

RNA_EXTERN_C struct PointerRNA Gizmo_target_set_operator_func(struct wmGizmo *_self, ReportList *reports, const char * operator_value, int index)
{
	return rna_gizmo_target_set_operator(_self, reports, operator_value, index);
}

static void Gizmo_target_set_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const char * operator_value;
	int index;
	struct PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	operator_value = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	properties = rna_gizmo_target_set_operator(_self, reports, operator_value, index);
	*((struct PointerRNA *)_retdata) = properties;
}

RNA_EXTERN_C bool Gizmo_target_is_valid_func(struct wmGizmo *_self, ReportList *reports, const char * property)
{
	return rna_gizmo_target_is_valid(_self, reports, property);
}

static void Gizmo_target_is_valid_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const char * property;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	property = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_gizmo_target_is_valid(_self, reports, property);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_gizmo_draw_preset_box(struct wmGizmo *_self, float matrix[16], int select_id);
void rna_gizmo_draw_preset_arrow(struct wmGizmo *_self, float matrix[16], int axis, int select_id);
void rna_gizmo_draw_preset_circle(struct wmGizmo *_self, float matrix[16], int axis, int select_id);
void rna_gizmo_target_set_prop(struct wmGizmo *_self, ReportList *reports, const char * target, struct PointerRNA *data, const char * property, int index);
struct PointerRNA rna_gizmo_target_set_operator(struct wmGizmo *_self, ReportList *reports, const char * operator_value, int index);
bool rna_gizmo_target_is_valid(struct wmGizmo *_self, ReportList *reports, const char * property);


RNA_EXTERN_C struct wmGizmo *Gizmos_new_func(struct wmGizmoGroup *_self, ReportList *reports, const char * type)
{
	return rna_GizmoGroup_gizmo_new(_self, reports, type);
}

static void Gizmos_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmoGroup *_self;
	const char * type;
	struct wmGizmo *gizmo;
	char *_data, *_retdata;
	
	_self = (struct wmGizmoGroup *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	gizmo = rna_GizmoGroup_gizmo_new(_self, reports, type);
	*((struct wmGizmo **)_retdata) = gizmo;
}

RNA_EXTERN_C void Gizmos_remove_func(struct wmGizmoGroup *_self, bContext *C, struct wmGizmo *gizmo)
{
	rna_GizmoGroup_gizmo_remove(_self, C, gizmo);
}

static void Gizmos_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmoGroup *_self;
	struct wmGizmo *gizmo;
	char *_data;
	
	_self = (struct wmGizmoGroup *)_ptr->data;
	_data = (char *)_parms->data;
	gizmo = *((struct wmGizmo **)_data);
	
	rna_GizmoGroup_gizmo_remove(_self, C, gizmo);
}

RNA_EXTERN_C void Gizmos_clear_func(struct wmGizmoGroup *_self, bContext *C)
{
	rna_GizmoGroup_gizmo_clear(_self, C);
}

static void Gizmos_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmoGroup *_self;
	_self = (struct wmGizmoGroup *)_ptr->data;
	
	rna_GizmoGroup_gizmo_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct wmGizmo *rna_GizmoGroup_gizmo_new(struct wmGizmoGroup *_self, ReportList *reports, const char * type);
void rna_GizmoGroup_gizmo_remove(struct wmGizmoGroup *_self, bContext *C, struct wmGizmo *gizmo);
void rna_GizmoGroup_gizmo_clear(struct wmGizmoGroup *_self, bContext *C);


/* GizmoGroup */
CollectionPropertyRNA rna_GizmoGroup_rna_properties = {
	{(PropertyRNA *)&rna_GizmoGroup_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_rna_properties_begin, GizmoGroup_rna_properties_next, GizmoGroup_rna_properties_end, GizmoGroup_rna_properties_get, nullptr, nullptr, GizmoGroup_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GizmoGroup_rna_type = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_idname, (PropertyRNA *)&rna_GizmoGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_GizmoGroup_bl_idname = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_label, (PropertyRNA *)&rna_GizmoGroup_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_bl_idname_get, GizmoGroup_bl_idname_length, GizmoGroup_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_GizmoGroup_bl_label = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_space_type, (PropertyRNA *)&rna_GizmoGroup_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "bl_label",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_bl_label_get, GizmoGroup_bl_label_length, GizmoGroup_bl_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_GizmoGroup_bl_space_type = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_region_type, (PropertyRNA *)&rna_GizmoGroup_bl_label,
	-1, "bl_space_type", 19, 0, 0, 0, 0, "Space Type",
	"The space where the panel is going to be used in",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_bl_space_type_get, GizmoGroup_bl_space_type_set, nullptr, nullptr, nullptr, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_GizmoGroup_bl_region_type = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_owner_id, (PropertyRNA *)&rna_GizmoGroup_bl_space_type,
	-1, "bl_region_type", 19, 0, 0, 0, 0, "Region Type",
	"The region where the panel is going to be used in",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_bl_region_type_get, GizmoGroup_bl_region_type_set, nullptr, nullptr, nullptr, rna_enum_region_type_items, 16, 0
};

StringPropertyRNA rna_GizmoGroup_bl_owner_id = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_options, (PropertyRNA *)&rna_GizmoGroup_bl_region_type,
	-1, "bl_owner_id", 262193, 0, 0, 0, 0, "bl_owner_id",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_bl_owner_id_get, GizmoGroup_bl_owner_id_length, GizmoGroup_bl_owner_id_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

static const EnumPropertyItem rna_GizmoGroup_bl_options_items[11] = {
	{1, "3D", 0, "3D", "Use in 3D viewport"},
	{2, "SCALE", 0, "Scale", "Scale to respect zoom (otherwise zoom independent display size)"},
	{4, "DEPTH_3D", 0, "Depth 3D", "Supports culled depth by other objects in the view"},
	{8, "SELECT", 0, "Select", "Supports selection"},
	{16, "PERSISTENT", 0, "Persistent", ""},
	{32, "SHOW_MODAL_ALL", 0, "Show Modal All", "Show all while interacting, as well as this group when another is being interacted with"},
	{64, "EXCLUDE_MODAL", 0, "Exclude Modal", "Show all except this group while interacting"},
	{128, "TOOL_INIT", 0, "Tool Init", "Postpone running until tool operator run (when used with a tool)"},
	{256, "TOOL_FALLBACK_KEYMAP", 0, "Use fallback tools keymap", "Add fallback tools keymap to this gizmo type"},
	{1024, "VR_REDRAWS", 0, "VR Redraws", "The gizmos are made for use with virtual reality sessions and require special redraw management"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GizmoGroup_bl_options = {
	{(PropertyRNA *)&rna_GizmoGroup_name, (PropertyRNA *)&rna_GizmoGroup_bl_owner_id,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Options for this operator type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_bl_options_get, GizmoGroup_bl_options_set, nullptr, nullptr, nullptr, rna_GizmoGroup_bl_options_items, 10, 1
};

StringPropertyRNA rna_GizmoGroup_name = {
	{(PropertyRNA *)&rna_GizmoGroup_has_reports, (PropertyRNA *)&rna_GizmoGroup_bl_options,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_name_get, GizmoGroup_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_GizmoGroup_has_reports = {
	{(PropertyRNA *)&rna_GizmoGroup_gizmos, (PropertyRNA *)&rna_GizmoGroup_name,
	-1, "has_reports", 2, 0, 0, 0, 0, "Has Reports",
	"GizmoGroup has a set of reports (warnings and errors) from last execution",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroup_has_reports_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_GizmoGroup_gizmos = {
	{nullptr, (PropertyRNA *)&rna_GizmoGroup_has_reports,
	-1, "gizmos", 0, 0, 0, 0, 0, "Gizmos",
	"List of gizmos in the Gizmo Map",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_Gizmos},
	GizmoGroup_gizmos_begin, GizmoGroup_gizmos_next, GizmoGroup_gizmos_end, GizmoGroup_gizmos_get, nullptr, GizmoGroup_gizmos_lookup_int, nullptr, nullptr, &RNA_Gizmo
};

BoolPropertyRNA rna_GizmoGroup_poll_visible = {
	{(PropertyRNA *)&rna_GizmoGroup_poll_context, nullptr,
	-1, "visible", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_GizmoGroup_poll_context = {
	{nullptr, (PropertyRNA *)&rna_GizmoGroup_poll_visible,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_GizmoGroup_poll_func = {
	{(FunctionRNA *)&rna_GizmoGroup_setup_keymap_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_poll_visible, (PropertyRNA *)&rna_GizmoGroup_poll_context}},
	"poll", 97, "Test if the gizmo group can be called or not",
	nullptr,
	(PropertyRNA *)&rna_GizmoGroup_poll_visible
};

PointerPropertyRNA rna_GizmoGroup_setup_keymap_keyconfig = {
	{(PropertyRNA *)&rna_GizmoGroup_setup_keymap_keymap, nullptr,
	-1, "keyconfig", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyConfig
};

PointerPropertyRNA rna_GizmoGroup_setup_keymap_keymap = {
	{nullptr, (PropertyRNA *)&rna_GizmoGroup_setup_keymap_keyconfig,
	-1, "keymap", 8650752, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_GizmoGroup_setup_keymap_func = {
	{(FunctionRNA *)&rna_GizmoGroup_setup_func, (FunctionRNA *)&rna_GizmoGroup_poll_func,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_setup_keymap_keyconfig, (PropertyRNA *)&rna_GizmoGroup_setup_keymap_keymap}},
	"setup_keymap", 97, "Initialize keymaps for this gizmo group, use fallback keymap when not present",
	nullptr,
	(PropertyRNA *)&rna_GizmoGroup_setup_keymap_keymap
};

PointerPropertyRNA rna_GizmoGroup_setup_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_GizmoGroup_setup_func = {
	{(FunctionRNA *)&rna_GizmoGroup_refresh_func, (FunctionRNA *)&rna_GizmoGroup_setup_keymap_func,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_setup_context, (PropertyRNA *)&rna_GizmoGroup_setup_context}},
	"setup", 32, "Create gizmos function for the gizmo group",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_GizmoGroup_refresh_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_GizmoGroup_refresh_func = {
	{(FunctionRNA *)&rna_GizmoGroup_draw_prepare_func, (FunctionRNA *)&rna_GizmoGroup_setup_func,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_refresh_context, (PropertyRNA *)&rna_GizmoGroup_refresh_context}},
	"refresh", 96, "Refresh data (called on common state changes such as selection)",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_GizmoGroup_draw_prepare_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_GizmoGroup_draw_prepare_func = {
	{(FunctionRNA *)&rna_GizmoGroup_invoke_prepare_func, (FunctionRNA *)&rna_GizmoGroup_refresh_func,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_draw_prepare_context, (PropertyRNA *)&rna_GizmoGroup_draw_prepare_context}},
	"draw_prepare", 96, "Run before each redraw",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_GizmoGroup_invoke_prepare_context = {
	{(PropertyRNA *)&rna_GizmoGroup_invoke_prepare_gizmo, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_GizmoGroup_invoke_prepare_gizmo = {
	{nullptr, (PropertyRNA *)&rna_GizmoGroup_invoke_prepare_context,
	-1, "gizmo", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Gizmo
};

FunctionRNA rna_GizmoGroup_invoke_prepare_func = {
	{nullptr, (FunctionRNA *)&rna_GizmoGroup_draw_prepare_func,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_invoke_prepare_context, (PropertyRNA *)&rna_GizmoGroup_invoke_prepare_gizmo}},
	"invoke_prepare", 96, "Run before invoke",
	nullptr,
	nullptr
};

StructRNA RNA_GizmoGroup = {
	{(ContainerRNA *)&RNA_Gizmo, (ContainerRNA *)&RNA_KeyMapItem,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroup_rna_properties, (PropertyRNA *)&rna_GizmoGroup_gizmos}},
	"GizmoGroup", nullptr, nullptr, 516, nullptr, "GizmoGroup",
	"Storage of an operator being executed, or registered after execution",
	"Operator", 17,
	(PropertyRNA *)&rna_GizmoGroup_bl_idname, (PropertyRNA *)&rna_GizmoGroup_rna_properties,
	nullptr,
	nullptr,
	rna_GizmoGroup_refine,
	nullptr,
	rna_GizmoGroup_register,
	rna_GizmoGroup_unregister,
	rna_GizmoGroup_instance,
	nullptr,
	{(FunctionRNA *)&rna_GizmoGroup_poll_func, (FunctionRNA *)&rna_GizmoGroup_invoke_prepare_func}
};

/* Gizmo */
CollectionPropertyRNA rna_Gizmo_rna_properties = {
	{(PropertyRNA *)&rna_Gizmo_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_rna_properties_begin, Gizmo_rna_properties_next, Gizmo_rna_properties_end, Gizmo_rna_properties_get, nullptr, nullptr, Gizmo_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Gizmo_rna_type = {
	{(PropertyRNA *)&rna_Gizmo_properties, (PropertyRNA *)&rna_Gizmo_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Gizmo_properties = {
	{(PropertyRNA *)&rna_Gizmo_bl_idname, (PropertyRNA *)&rna_Gizmo_rna_type,
	-1, "properties", 8650752, 0, 0, 0, 0, "Properties",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_properties_get, nullptr, nullptr, nullptr,&RNA_GizmoProperties
};

StringPropertyRNA rna_Gizmo_bl_idname = {
	{(PropertyRNA *)&rna_Gizmo_group, (PropertyRNA *)&rna_Gizmo_properties,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_bl_idname_get, Gizmo_bl_idname_length, Gizmo_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_Gizmo_group = {
	{(PropertyRNA *)&rna_Gizmo_color, (PropertyRNA *)&rna_Gizmo_bl_idname,
	-1, "group", 8388608, 0, 0, 0, 0, "",
	"Gizmo group this gizmo is a member of",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_group_get, nullptr, nullptr, nullptr,&RNA_GizmoGroup
};

static float rna_Gizmo_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Gizmo_color = {
	{(PropertyRNA *)&rna_Gizmo_alpha, (PropertyRNA *)&rna_Gizmo_group,
	-1, "color", 3, 0, 0, 0, 0, "color",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Gizmo_color_get, Gizmo_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_color_default
};

FloatPropertyRNA rna_Gizmo_alpha = {
	{(PropertyRNA *)&rna_Gizmo_color_highlight, (PropertyRNA *)&rna_Gizmo_color,
	-1, "alpha", 3, 0, 0, 0, 0, "Alpha",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_alpha_get, Gizmo_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_Gizmo_color_highlight_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Gizmo_color_highlight = {
	{(PropertyRNA *)&rna_Gizmo_alpha_highlight, (PropertyRNA *)&rna_Gizmo_alpha,
	-1, "color_highlight", 3, 0, 0, 0, 0, "color_highlight",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Gizmo_color_highlight_get, Gizmo_color_highlight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_color_highlight_default
};

FloatPropertyRNA rna_Gizmo_alpha_highlight = {
	{(PropertyRNA *)&rna_Gizmo_matrix_space, (PropertyRNA *)&rna_Gizmo_color_highlight,
	-1, "alpha_highlight", 3, 0, 0, 0, 0, "Alpha",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_alpha_highlight_get, Gizmo_alpha_highlight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_Gizmo_matrix_space_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_space = {
	{(PropertyRNA *)&rna_Gizmo_matrix_basis, (PropertyRNA *)&rna_Gizmo_alpha_highlight,
	-1, "matrix_space", 3, 0, 0, 0, 0, "Space Matrix",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Gizmo_matrix_space_get, Gizmo_matrix_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_space_default
};

static float rna_Gizmo_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_basis = {
	{(PropertyRNA *)&rna_Gizmo_matrix_offset, (PropertyRNA *)&rna_Gizmo_matrix_space,
	-1, "matrix_basis", 3, 0, 0, 0, 0, "Basis Matrix",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Gizmo_matrix_basis_get, Gizmo_matrix_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_basis_default
};

static float rna_Gizmo_matrix_offset_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_offset = {
	{(PropertyRNA *)&rna_Gizmo_matrix_world, (PropertyRNA *)&rna_Gizmo_matrix_basis,
	-1, "matrix_offset", 3, 0, 0, 0, 0, "Offset Matrix",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Gizmo_matrix_offset_get, Gizmo_matrix_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_offset_default
};

static float rna_Gizmo_matrix_world_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_world = {
	{(PropertyRNA *)&rna_Gizmo_scale_basis, (PropertyRNA *)&rna_Gizmo_matrix_offset,
	-1, "matrix_world", 2, 0, 0, 0, 0, "Final World Matrix",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Gizmo_matrix_world_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_world_default
};

FloatPropertyRNA rna_Gizmo_scale_basis = {
	{(PropertyRNA *)&rna_Gizmo_line_width, (PropertyRNA *)&rna_Gizmo_matrix_world,
	-1, "scale_basis", 3, 0, 0, 0, 0, "Scale Basis",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_scale_basis_get, Gizmo_scale_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Gizmo_line_width = {
	{(PropertyRNA *)&rna_Gizmo_select_bias, (PropertyRNA *)&rna_Gizmo_scale_basis,
	-1, "line_width", 3, 0, 0, 0, 0, "Line Width",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_line_width_get, Gizmo_line_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Gizmo_select_bias = {
	{(PropertyRNA *)&rna_Gizmo_hide, (PropertyRNA *)&rna_Gizmo_line_width,
	-1, "select_bias", 3, 0, 0, 0, 0, "Select Bias",
	"Depth bias used for selection",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_select_bias_get, Gizmo_select_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_Gizmo_hide = {
	{(PropertyRNA *)&rna_Gizmo_hide_select, (PropertyRNA *)&rna_Gizmo_select_bias,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_hide_get, Gizmo_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_hide_select = {
	{(PropertyRNA *)&rna_Gizmo_hide_keymap, (PropertyRNA *)&rna_Gizmo_hide,
	-1, "hide_select", 3, 0, 0, 0, 0, "Hide Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_hide_select_get, Gizmo_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_hide_keymap = {
	{(PropertyRNA *)&rna_Gizmo_use_grab_cursor, (PropertyRNA *)&rna_Gizmo_hide_select,
	-1, "hide_keymap", 3, 0, 0, 0, 0, "Hide Keymap",
	"Ignore the key-map for this gizmo",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_hide_keymap_get, Gizmo_hide_keymap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_grab_cursor = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_hover, (PropertyRNA *)&rna_Gizmo_hide_keymap,
	-1, "use_grab_cursor", 3, 0, 0, 0, 0, "Grab Cursor",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_grab_cursor_get, Gizmo_use_grab_cursor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_draw_hover = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_modal, (PropertyRNA *)&rna_Gizmo_use_grab_cursor,
	-1, "use_draw_hover", 3, 0, 0, 0, 0, "Show Hover",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_draw_hover_get, Gizmo_use_draw_hover_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_draw_modal = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_value, (PropertyRNA *)&rna_Gizmo_use_draw_hover,
	-1, "use_draw_modal", 3, 0, 0, 0, 0, "Show Active",
	"Show while dragging",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_draw_modal_get, Gizmo_use_draw_modal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_draw_value = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_offset_scale, (PropertyRNA *)&rna_Gizmo_use_draw_modal,
	-1, "use_draw_value", 3, 0, 0, 0, 0, "Show Value",
	"Show an indicator for the current value while dragging",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_draw_value_get, Gizmo_use_draw_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_draw_offset_scale = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_scale, (PropertyRNA *)&rna_Gizmo_use_draw_value,
	-1, "use_draw_offset_scale", 3, 0, 0, 0, 0, "Scale Offset",
	"Scale the offset matrix (use to apply screen-space offset)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_draw_offset_scale_get, Gizmo_use_draw_offset_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_draw_scale = {
	{(PropertyRNA *)&rna_Gizmo_use_select_background, (PropertyRNA *)&rna_Gizmo_use_draw_offset_scale,
	-1, "use_draw_scale", 3, 0, 0, 0, 0, "Scale",
	"Use scale when calculating the matrix",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_draw_scale_get, Gizmo_use_draw_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_select_background = {
	{(PropertyRNA *)&rna_Gizmo_use_operator_tool_properties, (PropertyRNA *)&rna_Gizmo_use_draw_scale,
	-1, "use_select_background", 3, 0, 0, 0, 0, "Select Background",
	"Don\'t write into the depth buffer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_select_background_get, Gizmo_use_select_background_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_operator_tool_properties = {
	{(PropertyRNA *)&rna_Gizmo_use_event_handle_all, (PropertyRNA *)&rna_Gizmo_use_select_background,
	-1, "use_operator_tool_properties", 3, 0, 0, 0, 0, "Tool Property Init",
	"Merge active tool properties on activation (does not overwrite existing)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_operator_tool_properties_get, Gizmo_use_operator_tool_properties_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_event_handle_all = {
	{(PropertyRNA *)&rna_Gizmo_use_tooltip, (PropertyRNA *)&rna_Gizmo_use_operator_tool_properties,
	-1, "use_event_handle_all", 3, 0, 0, 0, 0, "Handle All Events",
	"When highlighted, do not pass events through to be handled by other keymaps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_event_handle_all_get, Gizmo_use_event_handle_all_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_use_tooltip = {
	{(PropertyRNA *)&rna_Gizmo_is_highlight, (PropertyRNA *)&rna_Gizmo_use_event_handle_all,
	-1, "use_tooltip", 3, 0, 0, 0, 0, "Use Tooltip",
	"Use tooltips when hovering over this gizmo",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_use_tooltip_get, Gizmo_use_tooltip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_is_highlight = {
	{(PropertyRNA *)&rna_Gizmo_is_modal, (PropertyRNA *)&rna_Gizmo_use_tooltip,
	-1, "is_highlight", 2, 0, 0, 0, 0, "Highlight",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_is_highlight_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_is_modal = {
	{(PropertyRNA *)&rna_Gizmo_select, (PropertyRNA *)&rna_Gizmo_is_highlight,
	-1, "is_modal", 2, 0, 0, 0, 0, "Highlight",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_is_modal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Gizmo_select = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_is_modal,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmo_select_get, Gizmo_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Gizmo_draw_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_Gizmo_draw_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_select_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_draw_context, (PropertyRNA *)&rna_Gizmo_draw_context}},
	"draw", 32, "",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_Gizmo_draw_select_context = {
	{(PropertyRNA *)&rna_Gizmo_draw_select_select_id, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

IntPropertyRNA rna_Gizmo_draw_select_select_id = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_draw_select_context,
	-1, "select_id", 3, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Gizmo_draw_select_func = {
	{(FunctionRNA *)&rna_Gizmo_test_select_func, (FunctionRNA *)&rna_Gizmo_draw_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_draw_select_context, (PropertyRNA *)&rna_Gizmo_draw_select_select_id}},
	"draw_select", 96, "",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_Gizmo_test_select_context = {
	{(PropertyRNA *)&rna_Gizmo_test_select_location, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

static int rna_Gizmo_test_select_location_default[2] = {
	0,
	0
};

IntPropertyRNA rna_Gizmo_test_select_location = {
	{(PropertyRNA *)&rna_Gizmo_test_select_intersect_id, (PropertyRNA *)&rna_Gizmo_test_select_context,
	-1, "location", 262147, 0, 1, 0, 0, "Location",
	"Region coordinates",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, rna_Gizmo_test_select_location_default
};

IntPropertyRNA rna_Gizmo_test_select_intersect_id = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_test_select_location,
	-1, "intersect_id", 3, 0, 2, 0, 0, "",
	"Use -1 to skip this gizmo",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_Gizmo_test_select_func = {
	{(FunctionRNA *)&rna_Gizmo_modal_func, (FunctionRNA *)&rna_Gizmo_draw_select_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_test_select_context, (PropertyRNA *)&rna_Gizmo_test_select_intersect_id}},
	"test_select", 96, "",
	nullptr,
	(PropertyRNA *)&rna_Gizmo_test_select_intersect_id
};

PointerPropertyRNA rna_Gizmo_modal_context = {
	{(PropertyRNA *)&rna_Gizmo_modal_event, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_Gizmo_modal_event = {
	{(PropertyRNA *)&rna_Gizmo_modal_tweak, (PropertyRNA *)&rna_Gizmo_modal_context,
	-1, "event", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

static const EnumPropertyItem rna_Gizmo_modal_tweak_items[3] = {
	{1, "PRECISE", 0, "Precise", ""},
	{2, "SNAP", 0, "Snap", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Gizmo_modal_tweak = {
	{(PropertyRNA *)&rna_Gizmo_modal_result, (PropertyRNA *)&rna_Gizmo_modal_event,
	-1, "tweak", 2097155, 0, 1, 0, 0, "Tweak",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_Gizmo_modal_tweak_items, 2, 0
};

EnumPropertyRNA rna_Gizmo_modal_result = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_modal_tweak,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Gizmo_modal_func = {
	{(FunctionRNA *)&rna_Gizmo_setup_func, (FunctionRNA *)&rna_Gizmo_test_select_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_modal_context, (PropertyRNA *)&rna_Gizmo_modal_result}},
	"modal", 4192, "",
	nullptr,
	(PropertyRNA *)&rna_Gizmo_modal_result
};

FunctionRNA rna_Gizmo_setup_func = {
	{(FunctionRNA *)&rna_Gizmo_invoke_func, (FunctionRNA *)&rna_Gizmo_modal_func,
	nullptr,
	{nullptr, nullptr}},
	"setup", 4192, "",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_Gizmo_invoke_context = {
	{(PropertyRNA *)&rna_Gizmo_invoke_event, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_Gizmo_invoke_event = {
	{(PropertyRNA *)&rna_Gizmo_invoke_result, (PropertyRNA *)&rna_Gizmo_invoke_context,
	-1, "event", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

EnumPropertyRNA rna_Gizmo_invoke_result = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_invoke_event,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Gizmo_invoke_func = {
	{(FunctionRNA *)&rna_Gizmo_exit_func, (FunctionRNA *)&rna_Gizmo_setup_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_invoke_context, (PropertyRNA *)&rna_Gizmo_invoke_result}},
	"invoke", 4192, "",
	nullptr,
	(PropertyRNA *)&rna_Gizmo_invoke_result
};

PointerPropertyRNA rna_Gizmo_exit_context = {
	{(PropertyRNA *)&rna_Gizmo_exit_cancel, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

BoolPropertyRNA rna_Gizmo_exit_cancel = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_exit_context,
	-1, "cancel", 3, 0, 1, 0, 0, "Cancel, otherwise confirm",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Gizmo_exit_func = {
	{(FunctionRNA *)&rna_Gizmo_select_refresh_func, (FunctionRNA *)&rna_Gizmo_invoke_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_exit_context, (PropertyRNA *)&rna_Gizmo_exit_cancel}},
	"exit", 4192, "",
	nullptr,
	nullptr
};

FunctionRNA rna_Gizmo_select_refresh_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_box_func, (FunctionRNA *)&rna_Gizmo_exit_func,
	nullptr,
	{nullptr, nullptr}},
	"select_refresh", 4192, "",
	nullptr,
	nullptr
};

static float rna_Gizmo_draw_preset_box_matrix_default[16] = {
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

FloatPropertyRNA rna_Gizmo_draw_preset_box_matrix = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_box_select_id, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_draw_preset_box_matrix_default
};

IntPropertyRNA rna_Gizmo_draw_preset_box_select_id = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_draw_preset_box_matrix,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable. Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_Gizmo_draw_preset_box_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_arrow_func, (FunctionRNA *)&rna_Gizmo_select_refresh_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_box_matrix, (PropertyRNA *)&rna_Gizmo_draw_preset_box_select_id}},
	"draw_preset_box", 0, "Draw a box",
	Gizmo_draw_preset_box_call,
	nullptr
};

static float rna_Gizmo_draw_preset_arrow_matrix_default[16] = {
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

FloatPropertyRNA rna_Gizmo_draw_preset_arrow_matrix = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_arrow_axis, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_draw_preset_arrow_matrix_default
};

EnumPropertyRNA rna_Gizmo_draw_preset_arrow_axis = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_arrow_select_id, (PropertyRNA *)&rna_Gizmo_draw_preset_arrow_matrix,
	-1, "axis", 3, 0, 0, 0, 0, "",
	"Arrow Orientation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 2
};

IntPropertyRNA rna_Gizmo_draw_preset_arrow_select_id = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_draw_preset_arrow_axis,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable. Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_Gizmo_draw_preset_arrow_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_circle_func, (FunctionRNA *)&rna_Gizmo_draw_preset_box_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_arrow_matrix, (PropertyRNA *)&rna_Gizmo_draw_preset_arrow_select_id}},
	"draw_preset_arrow", 0, "Draw a box",
	Gizmo_draw_preset_arrow_call,
	nullptr
};

static float rna_Gizmo_draw_preset_circle_matrix_default[16] = {
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

FloatPropertyRNA rna_Gizmo_draw_preset_circle_matrix = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_circle_axis, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_draw_preset_circle_matrix_default
};

EnumPropertyRNA rna_Gizmo_draw_preset_circle_axis = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_circle_select_id, (PropertyRNA *)&rna_Gizmo_draw_preset_circle_matrix,
	-1, "axis", 3, 0, 0, 0, 0, "",
	"Arrow Orientation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 2
};

IntPropertyRNA rna_Gizmo_draw_preset_circle_select_id = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_draw_preset_circle_axis,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable. Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_Gizmo_draw_preset_circle_func = {
	{(FunctionRNA *)&rna_Gizmo_target_set_prop_func, (FunctionRNA *)&rna_Gizmo_draw_preset_arrow_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_circle_matrix, (PropertyRNA *)&rna_Gizmo_draw_preset_circle_select_id}},
	"draw_preset_circle", 0, "Draw a box",
	Gizmo_draw_preset_circle_call,
	nullptr
};

StringPropertyRNA rna_Gizmo_target_set_prop_target = {
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_data, nullptr,
	-1, "target", 262145, 0, 1, 0, 0, "",
	"Target property",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Gizmo_target_set_prop_data = {
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_property, (PropertyRNA *)&rna_Gizmo_target_set_prop_target,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AnyType
};

StringPropertyRNA rna_Gizmo_target_set_prop_property = {
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_index, (PropertyRNA *)&rna_Gizmo_target_set_prop_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_Gizmo_target_set_prop_index = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_target_set_prop_property,
	-1, "index", 3, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_Gizmo_target_set_prop_func = {
	{(FunctionRNA *)&rna_Gizmo_target_set_operator_func, (FunctionRNA *)&rna_Gizmo_draw_preset_circle_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_target, (PropertyRNA *)&rna_Gizmo_target_set_prop_index}},
	"target_set_prop", 16, "",
	Gizmo_target_set_prop_call,
	nullptr
};

StringPropertyRNA rna_Gizmo_target_set_operator_operator = {
	{(PropertyRNA *)&rna_Gizmo_target_set_operator_index, nullptr,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"Target operator",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_Gizmo_target_set_operator_index = {
	{(PropertyRNA *)&rna_Gizmo_target_set_operator_properties, (PropertyRNA *)&rna_Gizmo_target_set_operator_operator,
	-1, "index", 3, 0, 0, 0, 0, "Part index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

PointerPropertyRNA rna_Gizmo_target_set_operator_properties = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_target_set_operator_index,
	-1, "properties", 8388608, 0, 7, 0, 0, "",
	"Operator properties to fill in",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

FunctionRNA rna_Gizmo_target_set_operator_func = {
	{(FunctionRNA *)&rna_Gizmo_target_is_valid_func, (FunctionRNA *)&rna_Gizmo_target_set_prop_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_target_set_operator_operator, (PropertyRNA *)&rna_Gizmo_target_set_operator_properties}},
	"target_set_operator", 16, "Operator to run when activating the gizmo (overrides property targets)",
	Gizmo_target_set_operator_call,
	(PropertyRNA *)&rna_Gizmo_target_set_operator_properties
};

StringPropertyRNA rna_Gizmo_target_is_valid_property = {
	{(PropertyRNA *)&rna_Gizmo_target_is_valid_result, nullptr,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Property identifier",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_Gizmo_target_is_valid_result = {
	{nullptr, (PropertyRNA *)&rna_Gizmo_target_is_valid_property,
	-1, "result", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Gizmo_target_is_valid_func = {
	{nullptr, (FunctionRNA *)&rna_Gizmo_target_set_operator_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_target_is_valid_property, (PropertyRNA *)&rna_Gizmo_target_is_valid_result}},
	"target_is_valid", 16, "",
	Gizmo_target_is_valid_call,
	(PropertyRNA *)&rna_Gizmo_target_is_valid_result
};

StructRNA RNA_Gizmo = {
	{(ContainerRNA *)&RNA_GizmoProperties, (ContainerRNA *)&RNA_GizmoGroup,
	nullptr,
	{(PropertyRNA *)&rna_Gizmo_rna_properties, (PropertyRNA *)&rna_Gizmo_select}},
	"Gizmo", nullptr, nullptr, 516, nullptr, "Gizmo",
	"Collection of gizmos",
	"Operator", 17,
	nullptr, (PropertyRNA *)&rna_Gizmo_rna_properties,
	nullptr,
	nullptr,
	rna_Gizmo_refine,
	nullptr,
	rna_Gizmo_register,
	rna_Gizmo_unregister,
	rna_Gizmo_instance,
	nullptr,
	{(FunctionRNA *)&rna_Gizmo_draw_func, (FunctionRNA *)&rna_Gizmo_target_is_valid_func}
};

/* Gizmo Properties */
CollectionPropertyRNA rna_GizmoProperties_rna_properties = {
	{(PropertyRNA *)&rna_GizmoProperties_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoProperties_rna_properties_begin, GizmoProperties_rna_properties_next, GizmoProperties_rna_properties_end, GizmoProperties_rna_properties_get, nullptr, nullptr, GizmoProperties_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GizmoProperties_rna_type = {
	{nullptr, (PropertyRNA *)&rna_GizmoProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoProperties_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_GizmoProperties = {
	{(ContainerRNA *)&RNA_Gizmos, (ContainerRNA *)&RNA_Gizmo,
	nullptr,
	{(PropertyRNA *)&rna_GizmoProperties_rna_properties, (PropertyRNA *)&rna_GizmoProperties_rna_type}},
	"GizmoProperties", nullptr, nullptr, 644, nullptr, "Gizmo Properties",
	"Input properties of a Gizmo",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GizmoProperties_rna_properties,
	nullptr,
	nullptr,
	rna_GizmoProperties_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rna_GizmoProperties_idprops,
	{nullptr, nullptr}
};

/* Gizmos */
CollectionPropertyRNA rna_Gizmos_rna_properties = {
	{(PropertyRNA *)&rna_Gizmos_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmos_rna_properties_begin, Gizmos_rna_properties_next, Gizmos_rna_properties_end, Gizmos_rna_properties_get, nullptr, nullptr, Gizmos_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Gizmos_rna_type = {
	{nullptr, (PropertyRNA *)&rna_Gizmos_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Gizmos_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Gizmos_new_type = {
	{(PropertyRNA *)&rna_Gizmos_new_gizmo, nullptr,
	-1, "type", 262145, 0, 1, 0, 0, "",
	"Gizmo identifier",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Type"
};

PointerPropertyRNA rna_Gizmos_new_gizmo = {
	{nullptr, (PropertyRNA *)&rna_Gizmos_new_type,
	-1, "gizmo", 8388608, 0, 2, 0, 0, "",
	"New gizmo",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Gizmo
};

FunctionRNA rna_Gizmos_new_func = {
	{(FunctionRNA *)&rna_Gizmos_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Gizmos_new_type, (PropertyRNA *)&rna_Gizmos_new_gizmo}},
	"new", 16, "Add gizmo",
	Gizmos_new_call,
	(PropertyRNA *)&rna_Gizmos_new_gizmo
};

PointerPropertyRNA rna_Gizmos_remove_gizmo = {
	{nullptr, nullptr,
	-1, "gizmo", 262144, 0, 1, 0, 0, "",
	"New gizmo",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Gizmo
};

FunctionRNA rna_Gizmos_remove_func = {
	{(FunctionRNA *)&rna_Gizmos_clear_func, (FunctionRNA *)&rna_Gizmos_new_func,
	nullptr,
	{(PropertyRNA *)&rna_Gizmos_remove_gizmo, (PropertyRNA *)&rna_Gizmos_remove_gizmo}},
	"remove", 8, "Delete gizmo",
	Gizmos_remove_call,
	nullptr
};

FunctionRNA rna_Gizmos_clear_func = {
	{nullptr, (FunctionRNA *)&rna_Gizmos_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 8, "Delete all gizmos",
	Gizmos_clear_call,
	nullptr
};

StructRNA RNA_Gizmos = {
	{(ContainerRNA *)&RNA_GizmoGroupProperties, (ContainerRNA *)&RNA_GizmoProperties,
	nullptr,
	{(PropertyRNA *)&rna_Gizmos_rna_properties, (PropertyRNA *)&rna_Gizmos_rna_type}},
	"Gizmos", nullptr, nullptr, 516, nullptr, "Gizmos",
	"Collection of gizmos",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Gizmos_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Gizmos_new_func, (FunctionRNA *)&rna_Gizmos_clear_func}
};

/* Gizmo Group Properties */
CollectionPropertyRNA rna_GizmoGroupProperties_rna_properties = {
	{(PropertyRNA *)&rna_GizmoGroupProperties_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroupProperties_rna_properties_begin, GizmoGroupProperties_rna_properties_next, GizmoGroupProperties_rna_properties_end, GizmoGroupProperties_rna_properties_get, nullptr, nullptr, GizmoGroupProperties_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GizmoGroupProperties_rna_type = {
	{nullptr, (PropertyRNA *)&rna_GizmoGroupProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GizmoGroupProperties_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_GizmoGroupProperties = {
	{(ContainerRNA *)&RNA_wmOwnerID, (ContainerRNA *)&RNA_Gizmos,
	nullptr,
	{(PropertyRNA *)&rna_GizmoGroupProperties_rna_properties, (PropertyRNA *)&rna_GizmoGroupProperties_rna_type}},
	"GizmoGroupProperties", nullptr, nullptr, 644, nullptr, "Gizmo Group Properties",
	"Input properties of a Gizmo Group",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GizmoGroupProperties_rna_properties,
	nullptr,
	nullptr,
	rna_GizmoGroupProperties_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rna_GizmoGroupProperties_idprops,
	{nullptr, nullptr}
};

