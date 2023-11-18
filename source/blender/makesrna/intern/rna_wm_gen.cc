
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

#include "rna_wm.cc"
#include "rna_wm_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_Operator_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Operator_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_Operator_name;
RNA_EXTERN_C PointerPropertyRNA rna_Operator_properties;
RNA_EXTERN_C BoolPropertyRNA rna_Operator_has_reports;
RNA_EXTERN_C StringPropertyRNA rna_Operator_bl_idname;
RNA_EXTERN_C StringPropertyRNA rna_Operator_bl_label;
RNA_EXTERN_C StringPropertyRNA rna_Operator_bl_translation_context;
RNA_EXTERN_C StringPropertyRNA rna_Operator_bl_description;
RNA_EXTERN_C StringPropertyRNA rna_Operator_bl_undo_group;
RNA_EXTERN_C EnumPropertyRNA rna_Operator_bl_options;
RNA_EXTERN_C EnumPropertyRNA rna_Operator_bl_cursor_pending;
RNA_EXTERN_C PointerPropertyRNA rna_Operator_layout;
RNA_EXTERN_C PointerPropertyRNA rna_Operator_options;
RNA_EXTERN_C CollectionPropertyRNA rna_Operator_macros;

extern FunctionRNA rna_Operator_report_func;
extern EnumPropertyRNA rna_Operator_report_type;
extern StringPropertyRNA rna_Operator_report_message;

extern FunctionRNA rna_Operator_is_repeat_func;
extern BoolPropertyRNA rna_Operator_is_repeat_result;

extern FunctionRNA rna_Operator_poll_func;
extern BoolPropertyRNA rna_Operator_poll_visible;
extern PointerPropertyRNA rna_Operator_poll_context;

extern FunctionRNA rna_Operator_execute_func;
extern PointerPropertyRNA rna_Operator_execute_context;
extern EnumPropertyRNA rna_Operator_execute_result;

extern FunctionRNA rna_Operator_check_func;
extern PointerPropertyRNA rna_Operator_check_context;
extern BoolPropertyRNA rna_Operator_check_result;

extern FunctionRNA rna_Operator_invoke_func;
extern PointerPropertyRNA rna_Operator_invoke_context;
extern PointerPropertyRNA rna_Operator_invoke_event;
extern EnumPropertyRNA rna_Operator_invoke_result;

extern FunctionRNA rna_Operator_modal_func;
extern PointerPropertyRNA rna_Operator_modal_context;
extern PointerPropertyRNA rna_Operator_modal_event;
extern EnumPropertyRNA rna_Operator_modal_result;

extern FunctionRNA rna_Operator_draw_func;
extern PointerPropertyRNA rna_Operator_draw_context;

extern FunctionRNA rna_Operator_cancel_func;
extern PointerPropertyRNA rna_Operator_cancel_context;

extern FunctionRNA rna_Operator_description_func;
extern StringPropertyRNA rna_Operator_description_result;
extern PointerPropertyRNA rna_Operator_description_context;
extern PointerPropertyRNA rna_Operator_description_properties;



RNA_EXTERN_C CollectionPropertyRNA rna_OperatorProperties_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_OperatorProperties_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_OperatorOptions_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_OperatorOptions_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorOptions_is_grab_cursor;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorOptions_is_invoke;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorOptions_is_repeat;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorOptions_is_repeat_last;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorOptions_use_cursor_region;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_PropertyGroup_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_PropertyGroup_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_PropertyGroup_name;

RNA_EXTERN_C FloatPropertyRNA rna_OperatorMousePath_loc;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorMousePath_time;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_PropertyGroup_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_PropertyGroup_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_PropertyGroup_name;

RNA_EXTERN_C StringPropertyRNA rna_OperatorFileListElement_name;


RNA_EXTERN_C CollectionPropertyRNA rna_Macro_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Macro_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_Macro_name;
RNA_EXTERN_C PointerPropertyRNA rna_Macro_properties;
RNA_EXTERN_C BoolPropertyRNA rna_Macro_has_reports;
RNA_EXTERN_C StringPropertyRNA rna_Macro_bl_idname;
RNA_EXTERN_C StringPropertyRNA rna_Macro_bl_label;
RNA_EXTERN_C StringPropertyRNA rna_Macro_bl_translation_context;
RNA_EXTERN_C StringPropertyRNA rna_Macro_bl_description;
RNA_EXTERN_C StringPropertyRNA rna_Macro_bl_undo_group;
RNA_EXTERN_C EnumPropertyRNA rna_Macro_bl_options;
RNA_EXTERN_C EnumPropertyRNA rna_Macro_bl_cursor_pending;

extern FunctionRNA rna_Macro_report_func;
extern EnumPropertyRNA rna_Macro_report_type;
extern StringPropertyRNA rna_Macro_report_message;

extern FunctionRNA rna_Macro_poll_func;
extern BoolPropertyRNA rna_Macro_poll_visible;
extern PointerPropertyRNA rna_Macro_poll_context;

extern FunctionRNA rna_Macro_draw_func;
extern PointerPropertyRNA rna_Macro_draw_context;



RNA_EXTERN_C CollectionPropertyRNA rna_OperatorMacro_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_OperatorMacro_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_OperatorMacro_properties;


RNA_EXTERN_C CollectionPropertyRNA rna_Event_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Event_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_Event_ascii;
RNA_EXTERN_C StringPropertyRNA rna_Event_unicode;
RNA_EXTERN_C EnumPropertyRNA rna_Event_value;
RNA_EXTERN_C EnumPropertyRNA rna_Event_value_prev;
RNA_EXTERN_C EnumPropertyRNA rna_Event_type;
RNA_EXTERN_C EnumPropertyRNA rna_Event_type_prev;
RNA_EXTERN_C EnumPropertyRNA rna_Event_direction;
RNA_EXTERN_C BoolPropertyRNA rna_Event_is_repeat;
RNA_EXTERN_C BoolPropertyRNA rna_Event_is_consecutive;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_x;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_y;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_region_x;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_region_y;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_prev_x;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_prev_y;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_prev_press_x;
RNA_EXTERN_C IntPropertyRNA rna_Event_mouse_prev_press_y;
RNA_EXTERN_C FloatPropertyRNA rna_Event_pressure;
RNA_EXTERN_C FloatPropertyRNA rna_Event_tilt;
RNA_EXTERN_C BoolPropertyRNA rna_Event_is_tablet;
RNA_EXTERN_C BoolPropertyRNA rna_Event_is_mouse_absolute;
RNA_EXTERN_C PointerPropertyRNA rna_Event_xr;
RNA_EXTERN_C BoolPropertyRNA rna_Event_shift;
RNA_EXTERN_C BoolPropertyRNA rna_Event_ctrl;
RNA_EXTERN_C BoolPropertyRNA rna_Event_alt;
RNA_EXTERN_C BoolPropertyRNA rna_Event_oskey;


RNA_EXTERN_C CollectionPropertyRNA rna_Timer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Timer_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_Timer_time_step;
RNA_EXTERN_C FloatPropertyRNA rna_Timer_time_delta;
RNA_EXTERN_C FloatPropertyRNA rna_Timer_time_duration;


RNA_EXTERN_C CollectionPropertyRNA rna_UIPopupMenu_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UIPopupMenu_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_UIPopupMenu_layout;


RNA_EXTERN_C CollectionPropertyRNA rna_UIPopover_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UIPopover_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_UIPopover_layout;


RNA_EXTERN_C CollectionPropertyRNA rna_UIPieMenu_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UIPieMenu_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_UIPieMenu_layout;


RNA_EXTERN_C CollectionPropertyRNA rna_Window_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Window_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_Window_parent;
RNA_EXTERN_C PointerPropertyRNA rna_Window_scene;
RNA_EXTERN_C PointerPropertyRNA rna_Window_workspace;
RNA_EXTERN_C PointerPropertyRNA rna_Window_screen;
RNA_EXTERN_C PointerPropertyRNA rna_Window_view_layer;
RNA_EXTERN_C IntPropertyRNA rna_Window_x;
RNA_EXTERN_C IntPropertyRNA rna_Window_y;
RNA_EXTERN_C IntPropertyRNA rna_Window_width;
RNA_EXTERN_C IntPropertyRNA rna_Window_height;
RNA_EXTERN_C PointerPropertyRNA rna_Window_stereo_3d_display;

extern FunctionRNA rna_Window_cursor_warp_func;
extern IntPropertyRNA rna_Window_cursor_warp_x;
extern IntPropertyRNA rna_Window_cursor_warp_y;

extern FunctionRNA rna_Window_cursor_set_func;
extern EnumPropertyRNA rna_Window_cursor_set_cursor;

extern FunctionRNA rna_Window_cursor_modal_set_func;
extern EnumPropertyRNA rna_Window_cursor_modal_set_cursor;

extern FunctionRNA rna_Window_cursor_modal_restore_func;
extern FunctionRNA rna_Window_event_simulate_func;
extern EnumPropertyRNA rna_Window_event_simulate_type;
extern EnumPropertyRNA rna_Window_event_simulate_value;
extern StringPropertyRNA rna_Window_event_simulate_unicode;
extern IntPropertyRNA rna_Window_event_simulate_x;
extern IntPropertyRNA rna_Window_event_simulate_y;
extern BoolPropertyRNA rna_Window_event_simulate_shift;
extern BoolPropertyRNA rna_Window_event_simulate_ctrl;
extern BoolPropertyRNA rna_Window_event_simulate_alt;
extern BoolPropertyRNA rna_Window_event_simulate_oskey;
extern PointerPropertyRNA rna_Window_event_simulate_event;



RNA_EXTERN_C CollectionPropertyRNA rna_Stereo3dDisplay_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Stereo3dDisplay_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_Stereo3dDisplay_display_mode;
RNA_EXTERN_C EnumPropertyRNA rna_Stereo3dDisplay_anaglyph_type;
RNA_EXTERN_C EnumPropertyRNA rna_Stereo3dDisplay_interlace_type;
RNA_EXTERN_C BoolPropertyRNA rna_Stereo3dDisplay_use_interlace_swap;
RNA_EXTERN_C BoolPropertyRNA rna_Stereo3dDisplay_use_sidebyside_crosseyed;


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

RNA_EXTERN_C CollectionPropertyRNA rna_WindowManager_operators;
RNA_EXTERN_C CollectionPropertyRNA rna_WindowManager_windows;
RNA_EXTERN_C CollectionPropertyRNA rna_WindowManager_keyconfigs;
RNA_EXTERN_C PointerPropertyRNA rna_WindowManager_xr_session_settings;
RNA_EXTERN_C PointerPropertyRNA rna_WindowManager_xr_session_state;
RNA_EXTERN_C BoolPropertyRNA rna_WindowManager_is_interface_locked;

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


extern FunctionRNA rna_WindowManager_fileselect_add_func;
extern PointerPropertyRNA rna_WindowManager_fileselect_add_operator;

extern FunctionRNA rna_WindowManager_modal_handler_add_func;
extern PointerPropertyRNA rna_WindowManager_modal_handler_add_operator;
extern BoolPropertyRNA rna_WindowManager_modal_handler_add_handle;

extern FunctionRNA rna_WindowManager_event_timer_add_func;
extern FloatPropertyRNA rna_WindowManager_event_timer_add_time_step;
extern PointerPropertyRNA rna_WindowManager_event_timer_add_window;
extern PointerPropertyRNA rna_WindowManager_event_timer_add_result;

extern FunctionRNA rna_WindowManager_event_timer_remove_func;
extern PointerPropertyRNA rna_WindowManager_event_timer_remove_timer;

extern FunctionRNA rna_WindowManager_gizmo_group_type_ensure_func;
extern StringPropertyRNA rna_WindowManager_gizmo_group_type_ensure_identifier;

extern FunctionRNA rna_WindowManager_gizmo_group_type_unlink_delayed_func;
extern StringPropertyRNA rna_WindowManager_gizmo_group_type_unlink_delayed_identifier;

extern FunctionRNA rna_WindowManager_progress_begin_func;
extern FloatPropertyRNA rna_WindowManager_progress_begin_min;
extern FloatPropertyRNA rna_WindowManager_progress_begin_max;

extern FunctionRNA rna_WindowManager_progress_update_func;
extern FloatPropertyRNA rna_WindowManager_progress_update_value;

extern FunctionRNA rna_WindowManager_progress_end_func;
extern FunctionRNA rna_WindowManager_invoke_props_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator;
extern PointerPropertyRNA rna_WindowManager_invoke_props_popup_event;
extern EnumPropertyRNA rna_WindowManager_invoke_props_popup_result;

extern FunctionRNA rna_WindowManager_invoke_props_dialog_func;
extern PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator;
extern IntPropertyRNA rna_WindowManager_invoke_props_dialog_width;
extern EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result;

extern FunctionRNA rna_WindowManager_invoke_search_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator;

extern FunctionRNA rna_WindowManager_invoke_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_popup_operator;
extern IntPropertyRNA rna_WindowManager_invoke_popup_width;
extern EnumPropertyRNA rna_WindowManager_invoke_popup_result;

extern FunctionRNA rna_WindowManager_invoke_confirm_func;
extern PointerPropertyRNA rna_WindowManager_invoke_confirm_operator;
extern PointerPropertyRNA rna_WindowManager_invoke_confirm_event;
extern EnumPropertyRNA rna_WindowManager_invoke_confirm_result;

extern FunctionRNA rna_WindowManager_popmenu_begin__internal_func;
extern StringPropertyRNA rna_WindowManager_popmenu_begin__internal_title;
extern EnumPropertyRNA rna_WindowManager_popmenu_begin__internal_icon;
extern PointerPropertyRNA rna_WindowManager_popmenu_begin__internal_menu;

extern FunctionRNA rna_WindowManager_popmenu_end__internal_func;
extern PointerPropertyRNA rna_WindowManager_popmenu_end__internal_menu;

extern FunctionRNA rna_WindowManager_popover_begin__internal_func;
extern IntPropertyRNA rna_WindowManager_popover_begin__internal_ui_units_x;
extern PointerPropertyRNA rna_WindowManager_popover_begin__internal_menu;
extern BoolPropertyRNA rna_WindowManager_popover_begin__internal_from_active_button;

extern FunctionRNA rna_WindowManager_popover_end__internal_func;
extern PointerPropertyRNA rna_WindowManager_popover_end__internal_menu;
extern PointerPropertyRNA rna_WindowManager_popover_end__internal_keymap;

extern FunctionRNA rna_WindowManager_piemenu_begin__internal_func;
extern StringPropertyRNA rna_WindowManager_piemenu_begin__internal_title;
extern EnumPropertyRNA rna_WindowManager_piemenu_begin__internal_icon;
extern PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_event;
extern PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_menu_pie;

extern FunctionRNA rna_WindowManager_piemenu_end__internal_func;
extern PointerPropertyRNA rna_WindowManager_piemenu_end__internal_menu;

extern FunctionRNA rna_WindowManager_operator_properties_last_func;
extern StringPropertyRNA rna_WindowManager_operator_properties_last_operator;
extern PointerPropertyRNA rna_WindowManager_operator_properties_last_result;

extern FunctionRNA rna_WindowManager_print_undo_steps_func;
extern FunctionRNA rna_WindowManager_tag_script_reload_func;


RNA_EXTERN_C CollectionPropertyRNA rna_KeyConfigurations_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfigurations_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfigurations_active;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfigurations_default;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfigurations_addon;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfigurations_user;

extern FunctionRNA rna_KeyConfigurations_new_func;
extern StringPropertyRNA rna_KeyConfigurations_new_name;
extern PointerPropertyRNA rna_KeyConfigurations_new_keyconfig;

extern FunctionRNA rna_KeyConfigurations_remove_func;
extern PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig;

extern FunctionRNA rna_KeyConfigurations_find_item_from_operator_func;
extern StringPropertyRNA rna_KeyConfigurations_find_item_from_operator_idname;
extern EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_context;
extern PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_properties;
extern EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_include;
extern EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_exclude;
extern PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_keymap;
extern PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_item;

extern FunctionRNA rna_KeyConfigurations_update_func;
extern BoolPropertyRNA rna_KeyConfigurations_update_keep_properties;



RNA_EXTERN_C CollectionPropertyRNA rna_KeyConfigPreferences_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfigPreferences_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyConfigPreferences_bl_idname;


RNA_EXTERN_C CollectionPropertyRNA rna_KeyConfig_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfig_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyConfig_name;
RNA_EXTERN_C CollectionPropertyRNA rna_KeyConfig_keymaps;
RNA_EXTERN_C BoolPropertyRNA rna_KeyConfig_is_user_defined;
RNA_EXTERN_C PointerPropertyRNA rna_KeyConfig_preferences;


RNA_EXTERN_C CollectionPropertyRNA rna_KeyMaps_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyMaps_rna_type;

extern FunctionRNA rna_KeyMaps_new_func;
extern StringPropertyRNA rna_KeyMaps_new_name;
extern EnumPropertyRNA rna_KeyMaps_new_space_type;
extern EnumPropertyRNA rna_KeyMaps_new_region_type;
extern BoolPropertyRNA rna_KeyMaps_new_modal;
extern BoolPropertyRNA rna_KeyMaps_new_tool;
extern PointerPropertyRNA rna_KeyMaps_new_keymap;

extern FunctionRNA rna_KeyMaps_remove_func;
extern PointerPropertyRNA rna_KeyMaps_remove_keymap;

extern FunctionRNA rna_KeyMaps_clear_func;
extern FunctionRNA rna_KeyMaps_find_func;
extern StringPropertyRNA rna_KeyMaps_find_name;
extern EnumPropertyRNA rna_KeyMaps_find_space_type;
extern EnumPropertyRNA rna_KeyMaps_find_region_type;
extern PointerPropertyRNA rna_KeyMaps_find_keymap;

extern FunctionRNA rna_KeyMaps_find_modal_func;
extern StringPropertyRNA rna_KeyMaps_find_modal_name;
extern PointerPropertyRNA rna_KeyMaps_find_modal_keymap;



RNA_EXTERN_C CollectionPropertyRNA rna_KeyMap_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyMap_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyMap_name;
RNA_EXTERN_C StringPropertyRNA rna_KeyMap_bl_owner_id;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMap_space_type;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMap_region_type;
RNA_EXTERN_C CollectionPropertyRNA rna_KeyMap_keymap_items;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMap_is_user_modified;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMap_is_modal;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMap_show_expanded_items;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMap_show_expanded_children;
RNA_EXTERN_C CollectionPropertyRNA rna_KeyMap_modal_event_values;

extern FunctionRNA rna_KeyMap_active_func;
extern PointerPropertyRNA rna_KeyMap_active_keymap;

extern FunctionRNA rna_KeyMap_restore_to_default_func;
extern FunctionRNA rna_KeyMap_restore_item_to_default_func;
extern PointerPropertyRNA rna_KeyMap_restore_item_to_default_item;



RNA_EXTERN_C CollectionPropertyRNA rna_KeyMapItems_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyMapItems_rna_type;

extern FunctionRNA rna_KeyMapItems_new_func;
extern StringPropertyRNA rna_KeyMapItems_new_idname;
extern EnumPropertyRNA rna_KeyMapItems_new_type;
extern EnumPropertyRNA rna_KeyMapItems_new_value;
extern BoolPropertyRNA rna_KeyMapItems_new_any;
extern IntPropertyRNA rna_KeyMapItems_new_shift;
extern IntPropertyRNA rna_KeyMapItems_new_ctrl;
extern IntPropertyRNA rna_KeyMapItems_new_alt;
extern IntPropertyRNA rna_KeyMapItems_new_oskey;
extern EnumPropertyRNA rna_KeyMapItems_new_key_modifier;
extern EnumPropertyRNA rna_KeyMapItems_new_direction;
extern BoolPropertyRNA rna_KeyMapItems_new_repeat;
extern BoolPropertyRNA rna_KeyMapItems_new_head;
extern PointerPropertyRNA rna_KeyMapItems_new_item;

extern FunctionRNA rna_KeyMapItems_new_modal_func;
extern StringPropertyRNA rna_KeyMapItems_new_modal_propvalue;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_type;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_value;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_any;
extern IntPropertyRNA rna_KeyMapItems_new_modal_shift;
extern IntPropertyRNA rna_KeyMapItems_new_modal_ctrl;
extern IntPropertyRNA rna_KeyMapItems_new_modal_alt;
extern IntPropertyRNA rna_KeyMapItems_new_modal_oskey;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_direction;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_repeat;
extern PointerPropertyRNA rna_KeyMapItems_new_modal_item;

extern FunctionRNA rna_KeyMapItems_new_from_item_func;
extern PointerPropertyRNA rna_KeyMapItems_new_from_item_item;
extern BoolPropertyRNA rna_KeyMapItems_new_from_item_head;
extern PointerPropertyRNA rna_KeyMapItems_new_from_item_result;

extern FunctionRNA rna_KeyMapItems_remove_func;
extern PointerPropertyRNA rna_KeyMapItems_remove_item;

extern FunctionRNA rna_KeyMapItems_from_id_func;
extern IntPropertyRNA rna_KeyMapItems_from_id_id;
extern PointerPropertyRNA rna_KeyMapItems_from_id_item;

extern FunctionRNA rna_KeyMapItems_find_from_operator_func;
extern StringPropertyRNA rna_KeyMapItems_find_from_operator_idname;
extern PointerPropertyRNA rna_KeyMapItems_find_from_operator_properties;
extern EnumPropertyRNA rna_KeyMapItems_find_from_operator_include;
extern EnumPropertyRNA rna_KeyMapItems_find_from_operator_exclude;
extern PointerPropertyRNA rna_KeyMapItems_find_from_operator_item;

extern FunctionRNA rna_KeyMapItems_match_event_func;
extern PointerPropertyRNA rna_KeyMapItems_match_event_event;
extern PointerPropertyRNA rna_KeyMapItems_match_event_item;



RNA_EXTERN_C CollectionPropertyRNA rna_KeyMapItem_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_KeyMapItem_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_KeyMapItem_idname;
RNA_EXTERN_C StringPropertyRNA rna_KeyMapItem_name;
RNA_EXTERN_C PointerPropertyRNA rna_KeyMapItem_properties;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMapItem_map_type;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMapItem_type;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMapItem_value;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMapItem_direction;
RNA_EXTERN_C IntPropertyRNA rna_KeyMapItem_id;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_any;
RNA_EXTERN_C IntPropertyRNA rna_KeyMapItem_shift;
RNA_EXTERN_C IntPropertyRNA rna_KeyMapItem_ctrl;
RNA_EXTERN_C IntPropertyRNA rna_KeyMapItem_alt;
RNA_EXTERN_C IntPropertyRNA rna_KeyMapItem_oskey;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_shift_ui;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_ctrl_ui;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_alt_ui;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_oskey_ui;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMapItem_key_modifier;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_repeat;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_show_expanded;
RNA_EXTERN_C EnumPropertyRNA rna_KeyMapItem_propvalue;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_active;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_is_user_modified;
RNA_EXTERN_C BoolPropertyRNA rna_KeyMapItem_is_user_defined;

extern FunctionRNA rna_KeyMapItem_compare_func;
extern PointerPropertyRNA rna_KeyMapItem_compare_item;
extern BoolPropertyRNA rna_KeyMapItem_compare_result;

extern FunctionRNA rna_KeyMapItem_to_string_func;
extern BoolPropertyRNA rna_KeyMapItem_to_string_compact;
extern StringPropertyRNA rna_KeyMapItem_to_string_result;


static PointerRNA Operator_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Operator_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Operator_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Operator_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Operator_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Operator_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Operator_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Operator_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Operator_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Operator_name_get(PointerRNA *ptr, char *value)
{
    rna_Operator_name_get(ptr, value);
}

RNA_EXTERN_C int Operator_name_length(PointerRNA *ptr)
{
    return rna_Operator_name_length(ptr);
}

RNA_EXTERN_C PointerRNA Operator_properties_get(PointerRNA *ptr)
{
    return rna_Operator_properties_get(ptr);
}

RNA_EXTERN_C bool Operator_has_reports_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Operator_has_reports_get;
    return fn(ptr);
}

RNA_EXTERN_C void Operator_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

RNA_EXTERN_C int Operator_bl_idname_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->idname);
}

RNA_EXTERN_C void Operator_bl_idname_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_idname_set(ptr, value);
}

RNA_EXTERN_C void Operator_bl_label_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->name) < 64);
    strcpy(value, data->type->name);
}

RNA_EXTERN_C int Operator_bl_label_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->name);
}

RNA_EXTERN_C void Operator_bl_label_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_label_set(ptr, value);
}

RNA_EXTERN_C void Operator_bl_translation_context_get(PointerRNA *ptr, char *value)
{
    rna_Operator_bl_translation_context_get(ptr, value);
}

RNA_EXTERN_C int Operator_bl_translation_context_length(PointerRNA *ptr)
{
    return rna_Operator_bl_translation_context_length(ptr);
}

RNA_EXTERN_C void Operator_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_translation_context_set(ptr, value);
}

RNA_EXTERN_C void Operator_bl_description_get(PointerRNA *ptr, char *value)
{
    rna_Operator_bl_description_get(ptr, value);
}

RNA_EXTERN_C int Operator_bl_description_length(PointerRNA *ptr)
{
    return rna_Operator_bl_description_length(ptr);
}

RNA_EXTERN_C void Operator_bl_description_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_description_set(ptr, value);
}

RNA_EXTERN_C void Operator_bl_undo_group_get(PointerRNA *ptr, char *value)
{
    rna_Operator_bl_undo_group_get(ptr, value);
}

RNA_EXTERN_C int Operator_bl_undo_group_length(PointerRNA *ptr)
{
    return rna_Operator_bl_undo_group_length(ptr);
}

RNA_EXTERN_C void Operator_bl_undo_group_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_undo_group_set(ptr, value);
}

RNA_EXTERN_C int Operator_bl_options_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->flag);
}

RNA_EXTERN_C void Operator_bl_options_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
#ifdef __cplusplus
    data->type->flag = (std::remove_reference_t<decltype(data->type->flag)>)value;
#else
    data->type->flag = value;
#endif
}

RNA_EXTERN_C int Operator_bl_cursor_pending_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->cursor_pending);
}

RNA_EXTERN_C void Operator_bl_cursor_pending_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
#ifdef __cplusplus
    data->type->cursor_pending = (std::remove_reference_t<decltype(data->type->cursor_pending)>)value;
#else
    data->type->cursor_pending = value;
#endif
}

RNA_EXTERN_C PointerRNA Operator_layout_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

RNA_EXTERN_C PointerRNA Operator_options_get(PointerRNA *ptr)
{
    return rna_Operator_options_get(ptr);
}

static PointerRNA Operator_macros_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Macro, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Operator_macros_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Operator_macros;

    rna_iterator_listbase_begin(iter, &data->macro, nullptr);

    if (iter->valid) {
        iter->ptr = Operator_macros_get(iter);
    }
}

RNA_EXTERN_C void Operator_macros_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Operator_macros_get(iter);
    }
}

RNA_EXTERN_C void Operator_macros_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Operator_macros_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Operator_macros_begin(&iter, ptr);

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
        if (found) { *r_ptr = Operator_macros_get(&iter); }
    }

    Operator_macros_end(&iter);

    return found;
}

RNA_EXTERN_C int Macro_bl_idname_length(PointerRNA *);
RNA_EXTERN_C void Macro_bl_idname_get(PointerRNA *, char *);

RNA_EXTERN_C int Operator_macros_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Operator_macros_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Macro_bl_idname_length(&iter.ptr);
            if (namelen < 1024) {
                Macro_bl_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Macro_bl_idname_get(&iter.ptr, name);
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
        Operator_macros_next(&iter);
    }
    Operator_macros_end(&iter);

    return found;
}

static PointerRNA OperatorProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void OperatorProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_OperatorProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = OperatorProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void OperatorProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = OperatorProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void OperatorProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int OperatorProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA OperatorProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA OperatorOptions_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void OperatorOptions_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_OperatorOptions_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = OperatorOptions_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void OperatorOptions_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = OperatorOptions_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void OperatorOptions_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int OperatorOptions_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA OperatorOptions_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool OperatorOptions_is_grab_cursor_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C bool OperatorOptions_is_invoke_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool OperatorOptions_is_repeat_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C bool OperatorOptions_is_repeat_last_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C bool OperatorOptions_use_cursor_region_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void OperatorOptions_use_cursor_region_set(PointerRNA *ptr, bool value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA Macro_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Macro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Macro_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Macro_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Macro_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Macro_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Macro_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Macro_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Macro_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Macro_name_get(PointerRNA *ptr, char *value)
{
    rna_Operator_name_get(ptr, value);
}

RNA_EXTERN_C int Macro_name_length(PointerRNA *ptr)
{
    return rna_Operator_name_length(ptr);
}

RNA_EXTERN_C PointerRNA Macro_properties_get(PointerRNA *ptr)
{
    return rna_Operator_properties_get(ptr);
}

RNA_EXTERN_C bool Macro_has_reports_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Operator_has_reports_get;
    return fn(ptr);
}

RNA_EXTERN_C void Macro_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

RNA_EXTERN_C int Macro_bl_idname_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->idname);
}

RNA_EXTERN_C void Macro_bl_idname_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_idname_set(ptr, value);
}

RNA_EXTERN_C void Macro_bl_label_get(PointerRNA *ptr, char *value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    BLI_assert(strlen(data->type->name) < 64);
    strcpy(value, data->type->name);
}

RNA_EXTERN_C int Macro_bl_label_length(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return strlen(data->type->name);
}

RNA_EXTERN_C void Macro_bl_label_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_label_set(ptr, value);
}

RNA_EXTERN_C void Macro_bl_translation_context_get(PointerRNA *ptr, char *value)
{
    rna_Operator_bl_translation_context_get(ptr, value);
}

RNA_EXTERN_C int Macro_bl_translation_context_length(PointerRNA *ptr)
{
    return rna_Operator_bl_translation_context_length(ptr);
}

RNA_EXTERN_C void Macro_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_translation_context_set(ptr, value);
}

RNA_EXTERN_C void Macro_bl_description_get(PointerRNA *ptr, char *value)
{
    rna_Operator_bl_description_get(ptr, value);
}

RNA_EXTERN_C int Macro_bl_description_length(PointerRNA *ptr)
{
    return rna_Operator_bl_description_length(ptr);
}

RNA_EXTERN_C void Macro_bl_description_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_description_set(ptr, value);
}

RNA_EXTERN_C void Macro_bl_undo_group_get(PointerRNA *ptr, char *value)
{
    rna_Operator_bl_undo_group_get(ptr, value);
}

RNA_EXTERN_C int Macro_bl_undo_group_length(PointerRNA *ptr)
{
    return rna_Operator_bl_undo_group_length(ptr);
}

RNA_EXTERN_C void Macro_bl_undo_group_set(PointerRNA *ptr, const char *value)
{
    rna_Operator_bl_undo_group_set(ptr, value);
}

RNA_EXTERN_C int Macro_bl_options_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->flag);
}

RNA_EXTERN_C void Macro_bl_options_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
#ifdef __cplusplus
    data->type->flag = (std::remove_reference_t<decltype(data->type->flag)>)value;
#else
    data->type->flag = value;
#endif
}

RNA_EXTERN_C int Macro_bl_cursor_pending_get(PointerRNA *ptr)
{
    wmOperator *data = (wmOperator *)(ptr->data);
    return (int)(data->type->cursor_pending);
}

RNA_EXTERN_C void Macro_bl_cursor_pending_set(PointerRNA *ptr, int value)
{
    wmOperator *data = (wmOperator *)(ptr->data);
#ifdef __cplusplus
    data->type->cursor_pending = (std::remove_reference_t<decltype(data->type->cursor_pending)>)value;
#else
    data->type->cursor_pending = value;
#endif
}

static PointerRNA OperatorMacro_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void OperatorMacro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_OperatorMacro_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = OperatorMacro_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void OperatorMacro_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = OperatorMacro_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void OperatorMacro_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int OperatorMacro_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA OperatorMacro_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA OperatorMacro_properties_get(PointerRNA *ptr)
{
    return rna_OperatorMacro_properties_get(ptr);
}

static PointerRNA Event_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Event_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Event_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Event_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Event_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Event_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Event_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Event_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Event_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Event_ascii_get(PointerRNA *ptr, char *value)
{
    rna_Event_ascii_get(ptr, value);
}

RNA_EXTERN_C int Event_ascii_length(PointerRNA *ptr)
{
    return rna_Event_ascii_length(ptr);
}

RNA_EXTERN_C void Event_unicode_get(PointerRNA *ptr, char *value)
{
    rna_Event_unicode_get(ptr, value);
}

RNA_EXTERN_C int Event_unicode_length(PointerRNA *ptr)
{
    return rna_Event_unicode_length(ptr);
}

RNA_EXTERN_C int Event_value_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->val);
}

RNA_EXTERN_C int Event_value_prev_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_val);
}

RNA_EXTERN_C int Event_type_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C int Event_type_prev_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_type);
}

RNA_EXTERN_C int Event_direction_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->direction);
}

RNA_EXTERN_C bool Event_is_repeat_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Event_is_repeat_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Event_is_consecutive_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Event_is_consecutive_get;
    return fn(ptr);
}

RNA_EXTERN_C int Event_mouse_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->xy[0]);
}

RNA_EXTERN_C int Event_mouse_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->xy[1]);
}

RNA_EXTERN_C int Event_mouse_region_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->mval[0]);
}

RNA_EXTERN_C int Event_mouse_region_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->mval[1]);
}

RNA_EXTERN_C int Event_mouse_prev_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_xy[0]);
}

RNA_EXTERN_C int Event_mouse_prev_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_xy[1]);
}

RNA_EXTERN_C int Event_mouse_prev_press_x_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_press_xy[0]);
}

RNA_EXTERN_C int Event_mouse_prev_press_y_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (int)(data->prev_press_xy[1]);
}

RNA_EXTERN_C float Event_pressure_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Event_pressure_get;
    return fn(ptr);
}

RNA_EXTERN_C void Event_tilt_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_Event_tilt_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool Event_is_tablet_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Event_is_tablet_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Event_is_mouse_absolute_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (((data->tablet.is_motion_absolute) & 1) != 0);
}

RNA_EXTERN_C PointerRNA Event_xr_get(PointerRNA *ptr)
{
    return rna_Event_xr_get(ptr);
}

RNA_EXTERN_C bool Event_shift_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (((data->modifier) & 1) != 0);
}

RNA_EXTERN_C bool Event_ctrl_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (((data->modifier) & 2) != 0);
}

RNA_EXTERN_C bool Event_alt_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (((data->modifier) & 4) != 0);
}

RNA_EXTERN_C bool Event_oskey_get(PointerRNA *ptr)
{
    wmEvent *data = (wmEvent *)(ptr->data);
    return (((data->modifier) & 8) != 0);
}

static PointerRNA Timer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Timer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Timer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Timer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Timer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Timer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Timer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Timer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Timer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float Timer_time_step_get(PointerRNA *ptr)
{
    wmTimer *data = (wmTimer *)(ptr->data);
    return (float)(data->time_step);
}

RNA_EXTERN_C float Timer_time_delta_get(PointerRNA *ptr)
{
    wmTimer *data = (wmTimer *)(ptr->data);
    return (float)(data->time_delta);
}

RNA_EXTERN_C float Timer_time_duration_get(PointerRNA *ptr)
{
    wmTimer *data = (wmTimer *)(ptr->data);
    return (float)(data->time_duration);
}

static PointerRNA UIPopupMenu_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UIPopupMenu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UIPopupMenu_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIPopupMenu_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UIPopupMenu_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UIPopupMenu_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UIPopupMenu_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UIPopupMenu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UIPopupMenu_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA UIPopupMenu_layout_get(PointerRNA *ptr)
{
    return rna_PopupMenu_layout_get(ptr);
}

static PointerRNA UIPopover_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UIPopover_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UIPopover_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIPopover_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UIPopover_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UIPopover_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UIPopover_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UIPopover_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UIPopover_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA UIPopover_layout_get(PointerRNA *ptr)
{
    return rna_PopoverMenu_layout_get(ptr);
}

static PointerRNA UIPieMenu_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UIPieMenu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UIPieMenu_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIPieMenu_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UIPieMenu_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UIPieMenu_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UIPieMenu_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UIPieMenu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UIPieMenu_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA UIPieMenu_layout_get(PointerRNA *ptr)
{
    return rna_PieMenu_layout_get(ptr);
}

static PointerRNA Window_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Window_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Window_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Window_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Window_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Window_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Window_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Window_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Window_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA Window_parent_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Window, data->parent);
}

RNA_EXTERN_C PointerRNA Window_scene_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Scene, data->scene);
}

RNA_EXTERN_C void Window_scene_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Window_scene_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA Window_workspace_get(PointerRNA *ptr)
{
    return rna_Window_workspace_get(ptr);
}

RNA_EXTERN_C void Window_workspace_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Window_workspace_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA Window_screen_get(PointerRNA *ptr)
{
    return rna_Window_screen_get(ptr);
}

RNA_EXTERN_C void Window_screen_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Window_screen_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA Window_view_layer_get(PointerRNA *ptr)
{
    return rna_Window_view_layer_get(ptr);
}

RNA_EXTERN_C void Window_view_layer_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Window_view_layer_set(ptr, value, reports);
}

RNA_EXTERN_C int Window_x_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->posx);
}

RNA_EXTERN_C int Window_y_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->posy);
}

RNA_EXTERN_C int Window_width_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->sizex);
}

RNA_EXTERN_C int Window_height_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return (int)(data->sizey);
}

RNA_EXTERN_C PointerRNA Window_stereo_3d_display_get(PointerRNA *ptr)
{
    wmWindow *data = (wmWindow *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Stereo3dDisplay, data->stereo3d_format);
}

static PointerRNA Stereo3dDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Stereo3dDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Stereo3dDisplay_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Stereo3dDisplay_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Stereo3dDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Stereo3dDisplay_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Stereo3dDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Stereo3dDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Stereo3dDisplay_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int Stereo3dDisplay_display_mode_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (int)(data->display_mode);
}

RNA_EXTERN_C void Stereo3dDisplay_display_mode_set(PointerRNA *ptr, int value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
#ifdef __cplusplus
    data->display_mode = (std::remove_reference_t<decltype(data->display_mode)>)value;
#else
    data->display_mode = value;
#endif
}

RNA_EXTERN_C int Stereo3dDisplay_anaglyph_type_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (int)(data->anaglyph_type);
}

RNA_EXTERN_C void Stereo3dDisplay_anaglyph_type_set(PointerRNA *ptr, int value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
#ifdef __cplusplus
    data->anaglyph_type = (std::remove_reference_t<decltype(data->anaglyph_type)>)value;
#else
    data->anaglyph_type = value;
#endif
}

RNA_EXTERN_C int Stereo3dDisplay_interlace_type_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (int)(data->interlace_type);
}

RNA_EXTERN_C void Stereo3dDisplay_interlace_type_set(PointerRNA *ptr, int value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
#ifdef __cplusplus
    data->interlace_type = (std::remove_reference_t<decltype(data->interlace_type)>)value;
#else
    data->interlace_type = value;
#endif
}

RNA_EXTERN_C bool Stereo3dDisplay_use_interlace_swap_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Stereo3dDisplay_use_interlace_swap_set(PointerRNA *ptr, bool value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool Stereo3dDisplay_use_sidebyside_crosseyed_get(PointerRNA *ptr)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Stereo3dDisplay_use_sidebyside_crosseyed_set(PointerRNA *ptr, bool value)
{
    Stereo3dFormat *data = (Stereo3dFormat *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA WindowManager_operators_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Operator, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void WindowManager_operators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WindowManager_operators;

    rna_iterator_listbase_begin(iter, &data->operators, nullptr);

    if (iter->valid) {
        iter->ptr = WindowManager_operators_get(iter);
    }
}

RNA_EXTERN_C void WindowManager_operators_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_operators_get(iter);
    }
}

RNA_EXTERN_C void WindowManager_operators_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WindowManager_operators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WindowManager_operators_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_operators_get(&iter); }
    }

    WindowManager_operators_end(&iter);

    return found;
}

RNA_EXTERN_C int Operator_bl_idname_length(PointerRNA *);
RNA_EXTERN_C void Operator_bl_idname_get(PointerRNA *, char *);

RNA_EXTERN_C int WindowManager_operators_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WindowManager_operators_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Operator_bl_idname_length(&iter.ptr);
            if (namelen < 1024) {
                Operator_bl_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Operator_bl_idname_get(&iter.ptr, name);
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
        WindowManager_operators_next(&iter);
    }
    WindowManager_operators_end(&iter);

    return found;
}

static PointerRNA WindowManager_windows_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Window, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void WindowManager_windows_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WindowManager_windows;

    rna_iterator_listbase_begin(iter, &data->windows, nullptr);

    if (iter->valid) {
        iter->ptr = WindowManager_windows_get(iter);
    }
}

RNA_EXTERN_C void WindowManager_windows_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_windows_get(iter);
    }
}

RNA_EXTERN_C void WindowManager_windows_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WindowManager_windows_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WindowManager_windows_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_windows_get(&iter); }
    }

    WindowManager_windows_end(&iter);

    return found;
}

static PointerRNA WindowManager_keyconfigs_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyConfig, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void WindowManager_keyconfigs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WindowManager_keyconfigs;

    rna_iterator_listbase_begin(iter, &data->keyconfigs, nullptr);

    if (iter->valid) {
        iter->ptr = WindowManager_keyconfigs_get(iter);
    }
}

RNA_EXTERN_C void WindowManager_keyconfigs_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WindowManager_keyconfigs_get(iter);
    }
}

RNA_EXTERN_C void WindowManager_keyconfigs_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int WindowManager_keyconfigs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WindowManager_keyconfigs_begin(&iter, ptr);

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
        if (found) { *r_ptr = WindowManager_keyconfigs_get(&iter); }
    }

    WindowManager_keyconfigs_end(&iter);

    return found;
}

RNA_EXTERN_C int KeyConfig_name_length(PointerRNA *);
RNA_EXTERN_C void KeyConfig_name_get(PointerRNA *, char *);

RNA_EXTERN_C int WindowManager_keyconfigs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WindowManager_keyconfigs_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyConfig_name_length(&iter.ptr);
            if (namelen < 1024) {
                KeyConfig_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                KeyConfig_name_get(&iter.ptr, name);
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
        WindowManager_keyconfigs_next(&iter);
    }
    WindowManager_keyconfigs_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA WindowManager_xr_session_settings_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_XrSessionSettings, &data->xr.session_settings);
}

RNA_EXTERN_C PointerRNA WindowManager_xr_session_state_get(PointerRNA *ptr)
{
    return rna_WindowManager_xr_session_state_get(ptr);
}

RNA_EXTERN_C bool WindowManager_is_interface_locked_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return (bool)(data->is_interface_locked);
}

static PointerRNA KeyConfigurations_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyConfigurations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyConfigurations_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyConfigurations_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyConfigurations_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyConfigurations_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyConfigurations_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyConfigurations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyConfigurations_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA KeyConfigurations_active_get(PointerRNA *ptr)
{
    return rna_WindowManager_active_keyconfig_get(ptr);
}

RNA_EXTERN_C void KeyConfigurations_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_WindowManager_active_keyconfig_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA KeyConfigurations_default_value_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->defaultconf);
}

RNA_EXTERN_C PointerRNA KeyConfigurations_addon_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->addonconf);
}

RNA_EXTERN_C PointerRNA KeyConfigurations_user_get(PointerRNA *ptr)
{
    wmWindowManager *data = (wmWindowManager *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->userconf);
}

static PointerRNA KeyConfigPreferences_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyConfigPreferences_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyConfigPreferences_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyConfigPreferences_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyConfigPreferences_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyConfigPreferences_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyConfigPreferences_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyConfigPreferences_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyConfigPreferences_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void KeyConfigPreferences_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmKeyConfigPref *data = (wmKeyConfigPref *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

RNA_EXTERN_C int KeyConfigPreferences_bl_idname_length(PointerRNA *ptr)
{
    wmKeyConfigPref *data = (wmKeyConfigPref *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void KeyConfigPreferences_bl_idname_set(PointerRNA *ptr, const char *value)
{
    wmKeyConfigPref *data = (wmKeyConfigPref *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

static PointerRNA KeyConfig_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyConfig_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyConfig_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyConfig_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyConfig_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyConfig_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyConfig_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyConfig_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyConfig_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void KeyConfig_name_get(PointerRNA *ptr, char *value)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

RNA_EXTERN_C int KeyConfig_name_length(PointerRNA *ptr)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void KeyConfig_name_set(PointerRNA *ptr, const char *value)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

static PointerRNA KeyConfig_keymaps_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyMap, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void KeyConfig_keymaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyConfig_keymaps;

    rna_iterator_listbase_begin(iter, &data->keymaps, nullptr);

    if (iter->valid) {
        iter->ptr = KeyConfig_keymaps_get(iter);
    }
}

RNA_EXTERN_C void KeyConfig_keymaps_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = KeyConfig_keymaps_get(iter);
    }
}

RNA_EXTERN_C void KeyConfig_keymaps_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyConfig_keymaps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    KeyConfig_keymaps_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyConfig_keymaps_get(&iter); }
    }

    KeyConfig_keymaps_end(&iter);

    return found;
}

RNA_EXTERN_C int KeyMap_name_length(PointerRNA *);
RNA_EXTERN_C void KeyMap_name_get(PointerRNA *, char *);

RNA_EXTERN_C int KeyConfig_keymaps_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyConfig_keymaps_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyMap_name_length(&iter.ptr);
            if (namelen < 1024) {
                KeyMap_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                KeyMap_name_get(&iter.ptr, name);
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
        KeyConfig_keymaps_next(&iter);
    }
    KeyConfig_keymaps_end(&iter);

    return found;
}

RNA_EXTERN_C bool KeyConfig_is_user_defined_get(PointerRNA *ptr)
{
    wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C PointerRNA KeyConfig_preferences_get(PointerRNA *ptr)
{
    return rna_wmKeyConfig_preferences_get(ptr);
}

static PointerRNA KeyMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyMaps_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMaps_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyMaps_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyMaps_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA KeyMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyMap_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMap_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyMap_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyMap_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void KeyMap_name_get(PointerRNA *ptr, char *value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

RNA_EXTERN_C int KeyMap_name_length(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return strlen(data->idname);
}

RNA_EXTERN_C void KeyMap_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    BLI_assert(strlen(data->owner_id) < 64);
    strcpy(value, data->owner_id);
}

RNA_EXTERN_C int KeyMap_bl_owner_id_length(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return strlen(data->owner_id);
}

RNA_EXTERN_C void KeyMap_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    BLI_strncpy_utf8(data->owner_id, value, 64);
}

RNA_EXTERN_C int KeyMap_space_type_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (int)(data->spaceid);
}

RNA_EXTERN_C int KeyMap_region_type_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (int)(data->regionid);
}

static PointerRNA KeyMap_keymap_items_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyMapItem, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void KeyMap_keymap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyMap_keymap_items;

    rna_iterator_listbase_begin(iter, &data->items, nullptr);

    if (iter->valid) {
        iter->ptr = KeyMap_keymap_items_get(iter);
    }
}

RNA_EXTERN_C void KeyMap_keymap_items_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = KeyMap_keymap_items_get(iter);
    }
}

RNA_EXTERN_C void KeyMap_keymap_items_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyMap_keymap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    KeyMap_keymap_items_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyMap_keymap_items_get(&iter); }
    }

    KeyMap_keymap_items_end(&iter);

    return found;
}

RNA_EXTERN_C int KeyMapItem_idname_length(PointerRNA *);
RNA_EXTERN_C void KeyMapItem_idname_get(PointerRNA *, char *);

RNA_EXTERN_C int KeyMap_keymap_items_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyMap_keymap_items_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyMapItem_idname_length(&iter.ptr);
            if (namelen < 1024) {
                KeyMapItem_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                KeyMapItem_idname_get(&iter.ptr, name);
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
        KeyMap_keymap_items_next(&iter);
    }
    KeyMap_keymap_items_end(&iter);

    return found;
}

RNA_EXTERN_C bool KeyMap_is_user_modified_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void KeyMap_is_user_modified_set(PointerRNA *ptr, bool value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool KeyMap_is_modal_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool KeyMap_show_expanded_items_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void KeyMap_show_expanded_items_set(PointerRNA *ptr, bool value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool KeyMap_show_expanded_children_get(PointerRNA *ptr)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void KeyMap_show_expanded_children_set(PointerRNA *ptr, bool value)
{
    wmKeyMap *data = (wmKeyMap *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA KeyMap_modal_event_values_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void KeyMap_modal_event_values_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyMap_modal_event_values;

    rna_KeyMap_modal_event_values_items_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMap_modal_event_values_get(iter);
    }
}

RNA_EXTERN_C void KeyMap_modal_event_values_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = KeyMap_modal_event_values_get(iter);
    }
}

RNA_EXTERN_C void KeyMap_modal_event_values_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA KeyMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyMapItems_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMapItems_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyMapItems_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyMapItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyMapItems_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA KeyMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void KeyMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyMapItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyMapItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyMapItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void KeyMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int KeyMapItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA KeyMapItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void KeyMapItem_idname_get(PointerRNA *ptr, char *value)
{
    rna_wmKeyMapItem_idname_get(ptr, value);
}

RNA_EXTERN_C int KeyMapItem_idname_length(PointerRNA *ptr)
{
    return rna_wmKeyMapItem_idname_length(ptr);
}

RNA_EXTERN_C void KeyMapItem_idname_set(PointerRNA *ptr, const char *value)
{
    rna_wmKeyMapItem_idname_set(ptr, value);
}

RNA_EXTERN_C void KeyMapItem_idname_search(const bContext *C, PointerRNA *ptr, PropertyRNA *prop, const char *edit_text, StringPropertySearchVisitFunc visit_fn, void *visit_user_data)
{

    WM_operatortype_idname_visit_for_search(C, ptr, prop, edit_text, visit_fn, visit_user_data);
}

RNA_EXTERN_C void KeyMapItem_name_get(PointerRNA *ptr, char *value)
{
    rna_wmKeyMapItem_name_get(ptr, value);
}

RNA_EXTERN_C int KeyMapItem_name_length(PointerRNA *ptr)
{
    return rna_wmKeyMapItem_name_length(ptr);
}

RNA_EXTERN_C PointerRNA KeyMapItem_properties_get(PointerRNA *ptr)
{
    return rna_KeyMapItem_properties_get(ptr);
}

RNA_EXTERN_C int KeyMapItem_map_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_wmKeyMapItem_map_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyMapItem_map_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_wmKeyMapItem_map_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int KeyMapItem_type_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void KeyMapItem_type_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C int KeyMapItem_value_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->val);
}

RNA_EXTERN_C void KeyMapItem_value_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->val = (std::remove_reference_t<decltype(data->val)>)value;
#else
    data->val = value;
#endif
}

RNA_EXTERN_C int KeyMapItem_direction_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->direction);
}

RNA_EXTERN_C void KeyMapItem_direction_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->direction = (std::remove_reference_t<decltype(data->direction)>)value;
#else
    data->direction = value;
#endif
}

RNA_EXTERN_C int KeyMapItem_id_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->id);
}

RNA_EXTERN_C bool KeyMapItem_any_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_any_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyMapItem_any_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_KeyMapItem_any_set;
    fn(ptr, value);
}

RNA_EXTERN_C int KeyMapItem_shift_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->shift);
}

RNA_EXTERN_C void KeyMapItem_shift_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->shift = (std::remove_reference_t<decltype(data->shift)>)CLAMPIS(value, -1, 1);
#else
    data->shift = CLAMPIS(value, -1, 1);
#endif
}

RNA_EXTERN_C int KeyMapItem_ctrl_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->ctrl);
}

RNA_EXTERN_C void KeyMapItem_ctrl_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->ctrl = (std::remove_reference_t<decltype(data->ctrl)>)CLAMPIS(value, -1, 1);
#else
    data->ctrl = CLAMPIS(value, -1, 1);
#endif
}

RNA_EXTERN_C int KeyMapItem_alt_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->alt);
}

RNA_EXTERN_C void KeyMapItem_alt_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->alt = (std::remove_reference_t<decltype(data->alt)>)CLAMPIS(value, -1, 1);
#else
    data->alt = CLAMPIS(value, -1, 1);
#endif
}

RNA_EXTERN_C int KeyMapItem_oskey_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->oskey);
}

RNA_EXTERN_C void KeyMapItem_oskey_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->oskey = (std::remove_reference_t<decltype(data->oskey)>)CLAMPIS(value, -1, 1);
#else
    data->oskey = CLAMPIS(value, -1, 1);
#endif
}

RNA_EXTERN_C bool KeyMapItem_shift_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_shift_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyMapItem_shift_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->shift = (std::remove_reference_t<decltype(data->shift)>)value;
#else
    data->shift = value;
#endif
}

RNA_EXTERN_C bool KeyMapItem_ctrl_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_ctrl_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyMapItem_ctrl_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->ctrl = (std::remove_reference_t<decltype(data->ctrl)>)value;
#else
    data->ctrl = value;
#endif
}

RNA_EXTERN_C bool KeyMapItem_alt_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_alt_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyMapItem_alt_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->alt = (std::remove_reference_t<decltype(data->alt)>)value;
#else
    data->alt = value;
#endif
}

RNA_EXTERN_C bool KeyMapItem_oskey_ui_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_oskey_get;
    return fn(ptr);
}

RNA_EXTERN_C void KeyMapItem_oskey_ui_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->oskey = (std::remove_reference_t<decltype(data->oskey)>)value;
#else
    data->oskey = value;
#endif
}

RNA_EXTERN_C int KeyMapItem_key_modifier_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->keymodifier);
}

RNA_EXTERN_C void KeyMapItem_key_modifier_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_wmKeyMapItem_keymodifier_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool KeyMapItem_repeat_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return !(((data->flag) & 16) != 0);
}

RNA_EXTERN_C void KeyMapItem_repeat_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    if (!value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool KeyMapItem_show_expanded_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void KeyMapItem_show_expanded_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C int KeyMapItem_propvalue_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (int)(data->propvalue);
}

RNA_EXTERN_C void KeyMapItem_propvalue_set(PointerRNA *ptr, int value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
#ifdef __cplusplus
    data->propvalue = (std::remove_reference_t<decltype(data->propvalue)>)value;
#else
    data->propvalue = value;
#endif
}

RNA_EXTERN_C bool KeyMapItem_active_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void KeyMapItem_active_set(PointerRNA *ptr, bool value)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool KeyMapItem_is_user_modified_get(PointerRNA *ptr)
{
    wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C bool KeyMapItem_is_user_defined_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_KeyMapItem_userdefined_get;
    return fn(ptr);
}

RNA_EXTERN_C void Operator_report_func(struct wmOperator *_self, int type, const char * message)
{
	rna_Operator_report(_self, type, message);
}

static void Operator_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (struct wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	rna_Operator_report(_self, type, message);
}

RNA_EXTERN_C bool Operator_is_repeat_func(struct wmOperator *_self, bContext *C)
{
	return rna_Operator_is_repeat(_self, C);
}

static void Operator_is_repeat_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_Operator_is_repeat(_self, C);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(struct wmOperator *_self, int type, const char * message);
bool rna_Operator_is_repeat(struct wmOperator *_self, bContext *C);





RNA_EXTERN_C void Macro_report_func(struct wmOperator *_self, int type, const char * message)
{
	rna_Operator_report(_self, type, message);
}

static void Macro_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (struct wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	rna_Operator_report(_self, type, message);
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(struct wmOperator *_self, int type, const char * message);







RNA_EXTERN_C void Window_cursor_warp_func(struct wmWindow *_self, int x, int y)
{
	WM_cursor_warp(_self, x, y);
}

static void Window_cursor_warp_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int x;
	int y;
	char *_data;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	
	WM_cursor_warp(_self, x, y);
}

RNA_EXTERN_C void Window_cursor_set_func(struct wmWindow *_self, int cursor)
{
	WM_cursor_set(_self, cursor);
}

static void Window_cursor_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int cursor;
	char *_data;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	cursor = *((int *)_data);
	
	WM_cursor_set(_self, cursor);
}

RNA_EXTERN_C void Window_cursor_modal_set_func(struct wmWindow *_self, int cursor)
{
	WM_cursor_modal_set(_self, cursor);
}

static void Window_cursor_modal_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int cursor;
	char *_data;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	cursor = *((int *)_data);
	
	WM_cursor_modal_set(_self, cursor);
}

RNA_EXTERN_C void Window_cursor_modal_restore_func(struct wmWindow *_self)
{
	WM_cursor_modal_restore(_self);
}

static void Window_cursor_modal_restore_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	_self = (struct wmWindow *)_ptr->data;
	
	WM_cursor_modal_restore(_self);
}

RNA_EXTERN_C struct wmEvent *Window_event_simulate_func(struct wmWindow *_self, ReportList *reports, int type, int value, const char * unicode, int x, int y, bool shift, bool ctrl, bool alt, bool oskey)
{
	return rna_Window_event_add_simulate(_self, reports, type, value, unicode, x, y, shift, ctrl, alt, oskey);
}

static void Window_event_simulate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int type;
	int value;
	const char * unicode;
	int x;
	int y;
	bool shift;
	bool ctrl;
	bool alt;
	bool oskey;
	struct wmEvent *event;
	char *_data, *_retdata;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	value = *((int *)_data);
	_data += 8;
	unicode = *((const char * *)_data);
	_data += 8;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	shift = *((bool *)_data);
	_data += 8;
	ctrl = *((bool *)_data);
	_data += 8;
	alt = *((bool *)_data);
	_data += 8;
	oskey = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	event = rna_Window_event_add_simulate(_self, reports, type, value, unicode, x, y, shift, ctrl, alt, oskey);
	*((struct wmEvent **)_retdata) = event;
}

/* Repeated prototypes to detect errors */

void WM_cursor_warp(struct wmWindow *_self, int x, int y);
void WM_cursor_set(struct wmWindow *_self, int cursor);
void WM_cursor_modal_set(struct wmWindow *_self, int cursor);
void WM_cursor_modal_restore(struct wmWindow *_self);
struct wmEvent *rna_Window_event_add_simulate(struct wmWindow *_self, ReportList *reports, int type, int value, const char * unicode, int x, int y, bool shift, bool ctrl, bool alt, bool oskey);


RNA_EXTERN_C void WindowManager_fileselect_add_func(bContext *C, struct wmOperator *operator_value)
{
	WM_event_add_fileselect(C, operator_value);
}

static void WindowManager_fileselect_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	char *_data;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	
	WM_event_add_fileselect(C, operator_value);
}

RNA_EXTERN_C bool WindowManager_modal_handler_add_func(bContext *C, ReportList *reports, struct wmOperator *operator_value)
{
	return rna_event_modal_handler_add(C, reports, operator_value);
}

static void WindowManager_modal_handler_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	bool handle;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	_data += 8;
	_retdata = _data;
	
	handle = rna_event_modal_handler_add(C, reports, operator_value);
	*((bool *)_retdata) = handle;
}

RNA_EXTERN_C struct wmTimer *WindowManager_event_timer_add_func(struct wmWindowManager *_self, float time_step, struct wmWindow *window)
{
	return rna_event_timer_add(_self, time_step, window);
}

static void WindowManager_event_timer_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	float time_step;
	struct wmWindow *window;
	struct wmTimer *result;
	char *_data, *_retdata;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	time_step = *((float *)_data);
	_data += 8;
	window = *((struct wmWindow **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_event_timer_add(_self, time_step, window);
	*((struct wmTimer **)_retdata) = result;
}

RNA_EXTERN_C void WindowManager_event_timer_remove_func(struct wmWindowManager *_self, struct wmTimer *timer)
{
	rna_event_timer_remove(_self, timer);
}

static void WindowManager_event_timer_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	struct wmTimer *timer;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	timer = *((struct wmTimer **)_data);
	
	rna_event_timer_remove(_self, timer);
}

RNA_EXTERN_C void WindowManager_gizmo_group_type_ensure_func(ReportList *reports, const char * identifier)
{
	rna_gizmo_group_type_ensure(reports, identifier);
}

static void WindowManager_gizmo_group_type_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * identifier;
	char *_data;
	
	_data = (char *)_parms->data;
	identifier = *((const char * *)_data);
	
	rna_gizmo_group_type_ensure(reports, identifier);
}

RNA_EXTERN_C void WindowManager_gizmo_group_type_unlink_delayed_func(ReportList *reports, const char * identifier)
{
	rna_gizmo_group_type_unlink_delayed(reports, identifier);
}

static void WindowManager_gizmo_group_type_unlink_delayed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * identifier;
	char *_data;
	
	_data = (char *)_parms->data;
	identifier = *((const char * *)_data);
	
	rna_gizmo_group_type_unlink_delayed(reports, identifier);
}

RNA_EXTERN_C void WindowManager_progress_begin_func(struct wmWindowManager *_self, float min, float max)
{
	rna_progress_begin(_self, min, max);
}

static void WindowManager_progress_begin_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	float min;
	float max;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	min = *((float *)_data);
	_data += 8;
	max = *((float *)_data);
	
	rna_progress_begin(_self, min, max);
}

RNA_EXTERN_C void WindowManager_progress_update_func(struct wmWindowManager *_self, float value)
{
	rna_progress_update(_self, value);
}

static void WindowManager_progress_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	float value;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((float *)_data);
	
	rna_progress_update(_self, value);
}

RNA_EXTERN_C void WindowManager_progress_end_func(struct wmWindowManager *_self)
{
	rna_progress_end(_self);
}

static void WindowManager_progress_end_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	_self = (struct wmWindowManager *)_ptr->data;
	
	rna_progress_end(_self);
}

RNA_EXTERN_C int WindowManager_invoke_props_popup_func(bContext *C, struct wmOperator *operator_value, struct wmEvent *event)
{
	return rna_Operator_props_popup(C, operator_value, event);
}

static void WindowManager_invoke_props_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	struct wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	_data += 8;
	event = *((struct wmEvent **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Operator_props_popup(C, operator_value, event);
	*((int *)_retdata) = result;
}

RNA_EXTERN_C int WindowManager_invoke_props_dialog_func(bContext *C, struct wmOperator *operator_value, int width)
{
	return WM_operator_props_dialog_popup(C, operator_value, width);
}

static void WindowManager_invoke_props_dialog_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	int width;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = WM_operator_props_dialog_popup(C, operator_value, width);
	*((int *)_retdata) = result;
}

RNA_EXTERN_C void WindowManager_invoke_search_popup_func(bContext *C, struct wmOperator *operator_value)
{
	rna_Operator_enum_search_invoke(C, operator_value);
}

static void WindowManager_invoke_search_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	char *_data;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	
	rna_Operator_enum_search_invoke(C, operator_value);
}

RNA_EXTERN_C int WindowManager_invoke_popup_func(bContext *C, struct wmOperator *operator_value, int width)
{
	return WM_operator_ui_popup(C, operator_value, width);
}

static void WindowManager_invoke_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	int width;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = WM_operator_ui_popup(C, operator_value, width);
	*((int *)_retdata) = result;
}

RNA_EXTERN_C int WindowManager_invoke_confirm_func(bContext *C, struct wmOperator *operator_value, struct wmEvent *event)
{
	return rna_Operator_confirm(C, operator_value, event);
}

static void WindowManager_invoke_confirm_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator_value;
	struct wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((struct wmOperator **)_data);
	_data += 8;
	event = *((struct wmEvent **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Operator_confirm(C, operator_value, event);
	*((int *)_retdata) = result;
}

RNA_EXTERN_C struct PointerRNA WindowManager_popmenu_begin__internal_func(bContext *C, const char * title, int icon)
{
	return rna_PopMenuBegin(C, title, icon);
}

static void WindowManager_popmenu_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * title;
	int icon;
	struct PointerRNA menu;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	title = *((const char * *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	menu = rna_PopMenuBegin(C, title, icon);
	*((struct PointerRNA *)_retdata) = menu;
}

RNA_EXTERN_C void WindowManager_popmenu_end__internal_func(bContext *C, struct PointerRNA *menu)
{
	rna_PopMenuEnd(C, menu);
}

static void WindowManager_popmenu_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *menu;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((struct PointerRNA *)_data);
	
	rna_PopMenuEnd(C, menu);
}

RNA_EXTERN_C struct PointerRNA WindowManager_popover_begin__internal_func(bContext *C, int ui_units_x, bool from_active_button)
{
	return rna_PopoverBegin(C, ui_units_x, from_active_button);
}

static void WindowManager_popover_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	int ui_units_x;
	struct PointerRNA menu;
	bool from_active_button;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	ui_units_x = *((int *)_data);
	_data += 8;
	_retdata = _data;
	_data += 24;
	from_active_button = *((bool *)_data);
	
	menu = rna_PopoverBegin(C, ui_units_x, from_active_button);
	*((struct PointerRNA *)_retdata) = menu;
}

RNA_EXTERN_C void WindowManager_popover_end__internal_func(bContext *C, struct PointerRNA *menu, struct wmKeyMap *keymap)
{
	rna_PopoverEnd(C, menu, keymap);
}

static void WindowManager_popover_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *menu;
	struct wmKeyMap *keymap;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((struct PointerRNA *)_data);
	_data += 24;
	keymap = *((struct wmKeyMap **)_data);
	
	rna_PopoverEnd(C, menu, keymap);
}

RNA_EXTERN_C struct PointerRNA WindowManager_piemenu_begin__internal_func(bContext *C, const char * title, int icon, struct PointerRNA *event)
{
	return rna_PieMenuBegin(C, title, icon, event);
}

static void WindowManager_piemenu_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * title;
	int icon;
	struct PointerRNA *event;
	struct PointerRNA menu_pie;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	title = *((const char * *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	event = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	menu_pie = rna_PieMenuBegin(C, title, icon, event);
	*((struct PointerRNA *)_retdata) = menu_pie;
}

RNA_EXTERN_C void WindowManager_piemenu_end__internal_func(bContext *C, struct PointerRNA *menu)
{
	rna_PieMenuEnd(C, menu);
}

static void WindowManager_piemenu_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *menu;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((struct PointerRNA *)_data);
	
	rna_PieMenuEnd(C, menu);
}

RNA_EXTERN_C struct PointerRNA WindowManager_operator_properties_last_func(const char * operator_value)
{
	return rna_WindoManager_operator_properties_last(operator_value);
}

static void WindowManager_operator_properties_last_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * operator_value;
	struct PointerRNA result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator_value = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WindoManager_operator_properties_last(operator_value);
	*((struct PointerRNA *)_retdata) = result;
}

RNA_EXTERN_C void WindowManager_print_undo_steps_func(struct wmWindowManager *_self)
{
	rna_WindowManager_print_undo_steps(_self);
}

static void WindowManager_print_undo_steps_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	_self = (struct wmWindowManager *)_ptr->data;
	
	rna_WindowManager_print_undo_steps(_self);
}

RNA_EXTERN_C void WindowManager_tag_script_reload_func(void)
{
	rna_WindowManager_tag_script_reload();
}

static void WindowManager_tag_script_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	
	rna_WindowManager_tag_script_reload();
}

/* Repeated prototypes to detect errors */

void WM_event_add_fileselect(bContext *C, struct wmOperator *operator_value);
bool rna_event_modal_handler_add(bContext *C, ReportList *reports, struct wmOperator *operator_value);
struct wmTimer *rna_event_timer_add(struct wmWindowManager *_self, float time_step, struct wmWindow *window);
void rna_event_timer_remove(struct wmWindowManager *_self, struct wmTimer *timer);
void rna_gizmo_group_type_ensure(ReportList *reports, const char * identifier);
void rna_gizmo_group_type_unlink_delayed(ReportList *reports, const char * identifier);
void rna_progress_begin(struct wmWindowManager *_self, float min, float max);
void rna_progress_update(struct wmWindowManager *_self, float value);
void rna_progress_end(struct wmWindowManager *_self);
int rna_Operator_props_popup(bContext *C, struct wmOperator *operator_value, struct wmEvent *event);
int WM_operator_props_dialog_popup(bContext *C, struct wmOperator *operator_value, int width);
void rna_Operator_enum_search_invoke(bContext *C, struct wmOperator *operator_value);
int WM_operator_ui_popup(bContext *C, struct wmOperator *operator_value, int width);
int rna_Operator_confirm(bContext *C, struct wmOperator *operator_value, struct wmEvent *event);
struct PointerRNA rna_PopMenuBegin(bContext *C, const char * title, int icon);
void rna_PopMenuEnd(bContext *C, struct PointerRNA *menu);
struct PointerRNA rna_PopoverBegin(bContext *C, int ui_units_x, bool from_active_button);
void rna_PopoverEnd(bContext *C, struct PointerRNA *menu, struct wmKeyMap *keymap);
struct PointerRNA rna_PieMenuBegin(bContext *C, const char * title, int icon, struct PointerRNA *event);
void rna_PieMenuEnd(bContext *C, struct PointerRNA *menu);
struct PointerRNA rna_WindoManager_operator_properties_last(const char * operator_value);
void rna_WindowManager_print_undo_steps(struct wmWindowManager *_self);
void rna_WindowManager_tag_script_reload(void);

RNA_EXTERN_C struct wmKeyConfig *KeyConfigurations_new_func(struct wmWindowManager *_self, const char * name)
{
	return rna_KeyConfig_new(_self, name);
}

static void KeyConfigurations_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	const char * name;
	struct wmKeyConfig *keyconfig;
	char *_data, *_retdata;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	keyconfig = rna_KeyConfig_new(_self, name);
	*((struct wmKeyConfig **)_retdata) = keyconfig;
}

RNA_EXTERN_C void KeyConfigurations_remove_func(struct wmWindowManager *_self, ReportList *reports, struct PointerRNA *keyconfig)
{
	rna_KeyConfig_remove(_self, reports, keyconfig);
}

static void KeyConfigurations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	struct PointerRNA *keyconfig;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	keyconfig = *((struct PointerRNA **)_data);
	
	rna_KeyConfig_remove(_self, reports, keyconfig);
}

RNA_EXTERN_C struct PointerRNA KeyConfigurations_find_item_from_operator_func(struct wmWindowManager *_self, bContext *C, const char * idname, int context, struct PointerRNA *properties, int include, int exclude, struct PointerRNA *keymap)
{
	return rna_KeyConfig_find_item_from_operator(_self, C, idname, context, properties, include, exclude, keymap);
}

static void KeyConfigurations_find_item_from_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	const char * idname;
	int context;
	struct PointerRNA *properties;
	int include;
	int exclude;
	struct PointerRNA *keymap;
	struct PointerRNA item;
	char *_data, *_retdata;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	context = *((int *)_data);
	_data += 8;
	properties = ((struct PointerRNA *)_data);
	_data += 24;
	include = *((int *)_data);
	_data += 8;
	exclude = *((int *)_data);
	_data += 8;
	keymap = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	item = rna_KeyConfig_find_item_from_operator(_self, C, idname, context, properties, include, exclude, keymap);
	*((struct PointerRNA *)_retdata) = item;
}

RNA_EXTERN_C void KeyConfigurations_update_func(struct wmWindowManager *_self, bool keep_properties)
{
	rna_KeyConfig_update(_self, keep_properties);
}

static void KeyConfigurations_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	bool keep_properties;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	keep_properties = *((bool *)_data);
	
	rna_KeyConfig_update(_self, keep_properties);
}

/* Repeated prototypes to detect errors */

struct wmKeyConfig *rna_KeyConfig_new(struct wmWindowManager *_self, const char * name);
void rna_KeyConfig_remove(struct wmWindowManager *_self, ReportList *reports, struct PointerRNA *keyconfig);
struct PointerRNA rna_KeyConfig_find_item_from_operator(struct wmWindowManager *_self, bContext *C, const char * idname, int context, struct PointerRNA *properties, int include, int exclude, struct PointerRNA *keymap);
void rna_KeyConfig_update(struct wmWindowManager *_self, bool keep_properties);



RNA_EXTERN_C struct wmKeyMap *KeyMaps_new_func(struct wmKeyConfig *_self, ReportList *reports, const char * name, int space_type, int region_type, bool modal, bool tool)
{
	return rna_KeyMaps_new(_self, reports, name, space_type, region_type, modal, tool);
}

static void KeyMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char * name;
	int space_type;
	int region_type;
	bool modal;
	bool tool;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	space_type = *((int *)_data);
	_data += 8;
	region_type = *((int *)_data);
	_data += 8;
	modal = *((bool *)_data);
	_data += 8;
	tool = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	keymap = rna_KeyMaps_new(_self, reports, name, space_type, region_type, modal, tool);
	*((struct wmKeyMap **)_retdata) = keymap;
}

RNA_EXTERN_C void KeyMaps_remove_func(struct wmKeyConfig *_self, ReportList *reports, struct PointerRNA *keymap)
{
	rna_KeyMaps_remove(_self, reports, keymap);
}

static void KeyMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	struct PointerRNA *keymap;
	char *_data;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	keymap = *((struct PointerRNA **)_data);
	
	rna_KeyMaps_remove(_self, reports, keymap);
}

RNA_EXTERN_C void KeyMaps_clear_func(struct wmKeyConfig *_self)
{
	rna_KeyMaps_clear(_self);
}

static void KeyMaps_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	_self = (struct wmKeyConfig *)_ptr->data;
	
	rna_KeyMaps_clear(_self);
}

RNA_EXTERN_C struct wmKeyMap *KeyMaps_find_func(struct wmKeyConfig *_self, const char * name, int space_type, int region_type)
{
	return rna_KeyMaps_find(_self, name, space_type, region_type);
}

static void KeyMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char * name;
	int space_type;
	int region_type;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	space_type = *((int *)_data);
	_data += 8;
	region_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	keymap = rna_KeyMaps_find(_self, name, space_type, region_type);
	*((struct wmKeyMap **)_retdata) = keymap;
}

RNA_EXTERN_C struct wmKeyMap *KeyMaps_find_modal_func(struct wmKeyConfig *_self, const char * name)
{
	return rna_KeyMaps_find_modal(_self, name);
}

static void KeyMaps_find_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char * name;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	keymap = rna_KeyMaps_find_modal(_self, name);
	*((struct wmKeyMap **)_retdata) = keymap;
}

/* Repeated prototypes to detect errors */

struct wmKeyMap *rna_KeyMaps_new(struct wmKeyConfig *_self, ReportList *reports, const char * name, int space_type, int region_type, bool modal, bool tool);
void rna_KeyMaps_remove(struct wmKeyConfig *_self, ReportList *reports, struct PointerRNA *keymap);
void rna_KeyMaps_clear(struct wmKeyConfig *_self);
struct wmKeyMap *rna_KeyMaps_find(struct wmKeyConfig *_self, const char * name, int space_type, int region_type);
struct wmKeyMap *rna_KeyMaps_find_modal(struct wmKeyConfig *_self, const char * name);

RNA_EXTERN_C struct wmKeyMap *KeyMap_active_func(struct wmKeyMap *_self, bContext *C)
{
	return rna_keymap_active(_self, C);
}

static void KeyMap_active_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	keymap = rna_keymap_active(_self, C);
	*((struct wmKeyMap **)_retdata) = keymap;
}

RNA_EXTERN_C void KeyMap_restore_to_default_func(struct wmKeyMap *_self, bContext *C)
{
	rna_keymap_restore_to_default(_self, C);
}

static void KeyMap_restore_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	_self = (struct wmKeyMap *)_ptr->data;
	
	rna_keymap_restore_to_default(_self, C);
}

RNA_EXTERN_C void KeyMap_restore_item_to_default_func(struct wmKeyMap *_self, bContext *C, struct wmKeyMapItem *item)
{
	rna_keymap_restore_item_to_default(_self, C, item);
}

static void KeyMap_restore_item_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMapItem *item;
	char *_data;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct wmKeyMapItem **)_data);
	
	rna_keymap_restore_item_to_default(_self, C, item);
}

/* Repeated prototypes to detect errors */

struct wmKeyMap *rna_keymap_active(struct wmKeyMap *_self, bContext *C);
void rna_keymap_restore_to_default(struct wmKeyMap *_self, bContext *C);
void rna_keymap_restore_item_to_default(struct wmKeyMap *_self, bContext *C, struct wmKeyMapItem *item);

RNA_EXTERN_C struct wmKeyMapItem *KeyMapItems_new_func(struct wmKeyMap *_self, ReportList *reports, const char * idname, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int key_modifier, int direction, bool repeat, bool head)
{
	return rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, key_modifier, direction, repeat, head);
}

static void KeyMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	const char * idname;
	int type;
	int value;
	bool any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int key_modifier;
	int direction;
	bool repeat;
	bool head;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	value = *((int *)_data);
	_data += 8;
	any = *((bool *)_data);
	_data += 8;
	shift = *((int *)_data);
	_data += 8;
	ctrl = *((int *)_data);
	_data += 8;
	alt = *((int *)_data);
	_data += 8;
	oskey = *((int *)_data);
	_data += 8;
	key_modifier = *((int *)_data);
	_data += 8;
	direction = *((int *)_data);
	_data += 8;
	repeat = *((bool *)_data);
	_data += 8;
	head = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, key_modifier, direction, repeat, head);
	*((struct wmKeyMapItem **)_retdata) = item;
}

RNA_EXTERN_C struct wmKeyMapItem *KeyMapItems_new_modal_func(struct wmKeyMap *_self, ReportList *reports, const char * propvalue, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int key_modifier, int direction, bool repeat)
{
	return rna_KeyMap_item_new_modal(_self, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, key_modifier, direction, repeat);
}

static void KeyMapItems_new_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	const char * propvalue;
	int type;
	int value;
	bool any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int key_modifier;
	int direction;
	bool repeat;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	propvalue = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	value = *((int *)_data);
	_data += 8;
	any = *((bool *)_data);
	_data += 8;
	shift = *((int *)_data);
	_data += 8;
	ctrl = *((int *)_data);
	_data += 8;
	alt = *((int *)_data);
	_data += 8;
	oskey = *((int *)_data);
	_data += 8;
	key_modifier = *((int *)_data);
	_data += 8;
	direction = *((int *)_data);
	_data += 8;
	repeat = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_new_modal(_self, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, key_modifier, direction, repeat);
	*((struct wmKeyMapItem **)_retdata) = item;
}

RNA_EXTERN_C struct wmKeyMapItem *KeyMapItems_new_from_item_func(struct wmKeyMap *_self, ReportList *reports, struct wmKeyMapItem *item, bool head)
{
	return rna_KeyMap_item_new_from_item(_self, reports, item, head);
}

static void KeyMapItems_new_from_item_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMapItem *item;
	bool head;
	struct wmKeyMapItem *result;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct wmKeyMapItem **)_data);
	_data += 8;
	head = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_KeyMap_item_new_from_item(_self, reports, item, head);
	*((struct wmKeyMapItem **)_retdata) = result;
}

RNA_EXTERN_C void KeyMapItems_remove_func(struct wmKeyMap *_self, ReportList *reports, struct PointerRNA *item)
{
	rna_KeyMap_item_remove(_self, reports, item);
}

static void KeyMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct PointerRNA *item;
	char *_data;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct PointerRNA **)_data);
	
	rna_KeyMap_item_remove(_self, reports, item);
}

RNA_EXTERN_C struct wmKeyMapItem *KeyMapItems_from_id_func(struct wmKeyMap *_self, int id)
{
	return WM_keymap_item_find_id(_self, id);
}

static void KeyMapItems_from_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	int id;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	item = WM_keymap_item_find_id(_self, id);
	*((struct wmKeyMapItem **)_retdata) = item;
}

RNA_EXTERN_C struct PointerRNA KeyMapItems_find_from_operator_func(struct ID *_selfid, struct wmKeyMap *_self, const char * idname, struct PointerRNA *properties, int include, int exclude)
{
	return rna_KeyMap_item_find_from_operator(_selfid, _self, idname, properties, include, exclude);
}

static void KeyMapItems_find_from_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct wmKeyMap *_self;
	const char * idname;
	struct PointerRNA *properties;
	int include;
	int exclude;
	struct PointerRNA item;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	properties = ((struct PointerRNA *)_data);
	_data += 24;
	include = *((int *)_data);
	_data += 8;
	exclude = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_find_from_operator(_selfid, _self, idname, properties, include, exclude);
	*((struct PointerRNA *)_retdata) = item;
}

RNA_EXTERN_C struct PointerRNA KeyMapItems_match_event_func(struct ID *_selfid, struct wmKeyMap *_self, bContext *C, struct wmEvent *event)
{
	return rna_KeyMap_item_match_event(_selfid, _self, C, event);
}

static void KeyMapItems_match_event_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct wmKeyMap *_self;
	struct wmEvent *event;
	struct PointerRNA item;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	event = *((struct wmEvent **)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_KeyMap_item_match_event(_selfid, _self, C, event);
	*((struct PointerRNA *)_retdata) = item;
}

/* Repeated prototypes to detect errors */

struct wmKeyMapItem *rna_KeyMap_item_new(struct wmKeyMap *_self, ReportList *reports, const char * idname, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int key_modifier, int direction, bool repeat, bool head);
struct wmKeyMapItem *rna_KeyMap_item_new_modal(struct wmKeyMap *_self, ReportList *reports, const char * propvalue, int type, int value, bool any, int shift, int ctrl, int alt, int oskey, int key_modifier, int direction, bool repeat);
struct wmKeyMapItem *rna_KeyMap_item_new_from_item(struct wmKeyMap *_self, ReportList *reports, struct wmKeyMapItem *item, bool head);
void rna_KeyMap_item_remove(struct wmKeyMap *_self, ReportList *reports, struct PointerRNA *item);
struct wmKeyMapItem *WM_keymap_item_find_id(struct wmKeyMap *_self, int id);
struct PointerRNA rna_KeyMap_item_find_from_operator(struct ID *_selfid, struct wmKeyMap *_self, const char * idname, struct PointerRNA *properties, int include, int exclude);
struct PointerRNA rna_KeyMap_item_match_event(struct ID *_selfid, struct wmKeyMap *_self, bContext *C, struct wmEvent *event);

RNA_EXTERN_C bool KeyMapItem_compare_func(struct wmKeyMapItem *_self, struct wmKeyMapItem *item)
{
	return rna_KeyMapItem_compare(_self, item);
}

static void KeyMapItem_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMapItem *_self;
	struct wmKeyMapItem *item;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct wmKeyMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_KeyMapItem_compare(_self, item);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void KeyMapItem_to_string_func(struct wmKeyMapItem *_self, bool compact, char * result)
{
	rna_KeyMapItem_to_string(_self, compact, result);
}

static void KeyMapItem_to_string_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMapItem *_self;
	bool compact;
	char * result;
	char *_data;
	
	_self = (struct wmKeyMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	compact = *((bool *)_data);
	_data += 8;
	result = ((char * )_data);
	
	rna_KeyMapItem_to_string(_self, compact, result);
}

/* Repeated prototypes to detect errors */

bool rna_KeyMapItem_compare(struct wmKeyMapItem *_self, struct wmKeyMapItem *item);
void rna_KeyMapItem_to_string(struct wmKeyMapItem *_self, bool compact, char * result);

/* Operator */
CollectionPropertyRNA rna_Operator_rna_properties = {
	{(PropertyRNA *)&rna_Operator_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_rna_properties_begin, Operator_rna_properties_next, Operator_rna_properties_end, Operator_rna_properties_get, nullptr, nullptr, Operator_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Operator_rna_type = {
	{(PropertyRNA *)&rna_Operator_name, (PropertyRNA *)&rna_Operator_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Operator_name = {
	{(PropertyRNA *)&rna_Operator_properties, (PropertyRNA *)&rna_Operator_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_name_get, Operator_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Operator_properties = {
	{(PropertyRNA *)&rna_Operator_has_reports, (PropertyRNA *)&rna_Operator_name,
	-1, "properties", 8650752, 0, 0, 0, 0, "Properties",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_properties_get, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

BoolPropertyRNA rna_Operator_has_reports = {
	{(PropertyRNA *)&rna_Operator_bl_idname, (PropertyRNA *)&rna_Operator_properties,
	-1, "has_reports", 2, 0, 0, 0, 0, "Has Reports",
	"Operator has a set of reports (warnings and errors) from last execution",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_has_reports_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_Operator_bl_idname = {
	{(PropertyRNA *)&rna_Operator_bl_label, (PropertyRNA *)&rna_Operator_has_reports,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_idname_get, Operator_bl_idname_length, Operator_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_Operator_bl_label = {
	{(PropertyRNA *)&rna_Operator_bl_translation_context, (PropertyRNA *)&rna_Operator_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "bl_label",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_label_get, Operator_bl_label_length, Operator_bl_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_Operator_bl_translation_context = {
	{(PropertyRNA *)&rna_Operator_bl_description, (PropertyRNA *)&rna_Operator_bl_label,
	-1, "bl_translation_context", 262193, 0, 0, 0, 0, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_translation_context_get, Operator_bl_translation_context_length, Operator_bl_translation_context_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, "Operator"
};

StringPropertyRNA rna_Operator_bl_description = {
	{(PropertyRNA *)&rna_Operator_bl_undo_group, (PropertyRNA *)&rna_Operator_bl_translation_context,
	-1, "bl_description", 262193, 0, 0, 0, 0, "bl_description",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_description_get, Operator_bl_description_length, Operator_bl_description_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_Operator_bl_undo_group = {
	{(PropertyRNA *)&rna_Operator_bl_options, (PropertyRNA *)&rna_Operator_bl_description,
	-1, "bl_undo_group", 262193, 0, 0, 0, 0, "bl_undo_group",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_undo_group_get, Operator_bl_undo_group_length, Operator_bl_undo_group_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_Operator_bl_options = {
	{(PropertyRNA *)&rna_Operator_bl_cursor_pending, (PropertyRNA *)&rna_Operator_bl_undo_group,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Options for this operator type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_options_get, Operator_bl_options_set, nullptr, nullptr, nullptr, rna_enum_operator_type_flag_items, 11, 1
};

EnumPropertyRNA rna_Operator_bl_cursor_pending = {
	{(PropertyRNA *)&rna_Operator_layout, (PropertyRNA *)&rna_Operator_bl_options,
	-1, "bl_cursor_pending", 51, 0, 0, 0, 0, "Idle Cursor",
	"Cursor to use when waiting for the user to select a location to activate the operator (when ``bl_options`` has ``DEPENDS_ON_CURSOR`` set)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_bl_cursor_pending_get, Operator_bl_cursor_pending_set, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 24, 1
};

PointerPropertyRNA rna_Operator_layout = {
	{(PropertyRNA *)&rna_Operator_options, (PropertyRNA *)&rna_Operator_bl_cursor_pending,
	-1, "layout", 8388608, 0, 0, 0, 0, "layout",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_layout_get, nullptr, nullptr, nullptr,&RNA_UILayout
};

PointerPropertyRNA rna_Operator_options = {
	{(PropertyRNA *)&rna_Operator_macros, (PropertyRNA *)&rna_Operator_layout,
	-1, "options", 8650752, 0, 0, 0, 0, "Options",
	"Runtime options",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_options_get, nullptr, nullptr, nullptr,&RNA_OperatorOptions
};

CollectionPropertyRNA rna_Operator_macros = {
	{nullptr, (PropertyRNA *)&rna_Operator_options,
	-1, "macros", 0, 0, 0, 0, 0, "Macros",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Operator_macros_begin, Operator_macros_next, Operator_macros_end, Operator_macros_get, nullptr, Operator_macros_lookup_int, Operator_macros_lookup_string, nullptr, &RNA_Macro
};

EnumPropertyRNA rna_Operator_report_type = {
	{(PropertyRNA *)&rna_Operator_report_message, nullptr,
	-1, "type", 2097155, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_wm_report_items, 9, 0
};

StringPropertyRNA rna_Operator_report_message = {
	{nullptr, (PropertyRNA *)&rna_Operator_report_type,
	-1, "message", 262145, 0, 1, 0, 0, "Report Message",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_Operator_report_func = {
	{(FunctionRNA *)&rna_Operator_is_repeat_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Operator_report_type, (PropertyRNA *)&rna_Operator_report_message}},
	"report", 0, "report",
	Operator_report_call,
	nullptr
};

BoolPropertyRNA rna_Operator_is_repeat_result = {
	{nullptr, nullptr,
	-1, "result", 3, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Operator_is_repeat_func = {
	{(FunctionRNA *)&rna_Operator_poll_func, (FunctionRNA *)&rna_Operator_report_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_is_repeat_result, (PropertyRNA *)&rna_Operator_is_repeat_result}},
	"is_repeat", 8, "is_repeat",
	Operator_is_repeat_call,
	(PropertyRNA *)&rna_Operator_is_repeat_result
};

BoolPropertyRNA rna_Operator_poll_visible = {
	{(PropertyRNA *)&rna_Operator_poll_context, nullptr,
	-1, "visible", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_Operator_poll_context = {
	{nullptr, (PropertyRNA *)&rna_Operator_poll_visible,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_Operator_poll_func = {
	{(FunctionRNA *)&rna_Operator_execute_func, (FunctionRNA *)&rna_Operator_is_repeat_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_poll_visible, (PropertyRNA *)&rna_Operator_poll_context}},
	"poll", 97, "Test if the operator can be called or not",
	nullptr,
	(PropertyRNA *)&rna_Operator_poll_visible
};

PointerPropertyRNA rna_Operator_execute_context = {
	{(PropertyRNA *)&rna_Operator_execute_result, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

EnumPropertyRNA rna_Operator_execute_result = {
	{nullptr, (PropertyRNA *)&rna_Operator_execute_context,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Operator_execute_func = {
	{(FunctionRNA *)&rna_Operator_check_func, (FunctionRNA *)&rna_Operator_poll_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_execute_context, (PropertyRNA *)&rna_Operator_execute_result}},
	"execute", 4192, "Execute the operator",
	nullptr,
	(PropertyRNA *)&rna_Operator_execute_result
};

PointerPropertyRNA rna_Operator_check_context = {
	{(PropertyRNA *)&rna_Operator_check_result, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

BoolPropertyRNA rna_Operator_check_result = {
	{nullptr, (PropertyRNA *)&rna_Operator_check_context,
	-1, "result", 3, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Operator_check_func = {
	{(FunctionRNA *)&rna_Operator_invoke_func, (FunctionRNA *)&rna_Operator_execute_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_check_context, (PropertyRNA *)&rna_Operator_check_result}},
	"check", 4192, "Check the operator settings, return True to signal a change to redraw",
	nullptr,
	(PropertyRNA *)&rna_Operator_check_result
};

PointerPropertyRNA rna_Operator_invoke_context = {
	{(PropertyRNA *)&rna_Operator_invoke_event, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_Operator_invoke_event = {
	{(PropertyRNA *)&rna_Operator_invoke_result, (PropertyRNA *)&rna_Operator_invoke_context,
	-1, "event", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

EnumPropertyRNA rna_Operator_invoke_result = {
	{nullptr, (PropertyRNA *)&rna_Operator_invoke_event,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Operator_invoke_func = {
	{(FunctionRNA *)&rna_Operator_modal_func, (FunctionRNA *)&rna_Operator_check_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_invoke_context, (PropertyRNA *)&rna_Operator_invoke_result}},
	"invoke", 4192, "Invoke the operator",
	nullptr,
	(PropertyRNA *)&rna_Operator_invoke_result
};

PointerPropertyRNA rna_Operator_modal_context = {
	{(PropertyRNA *)&rna_Operator_modal_event, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_Operator_modal_event = {
	{(PropertyRNA *)&rna_Operator_modal_result, (PropertyRNA *)&rna_Operator_modal_context,
	-1, "event", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

EnumPropertyRNA rna_Operator_modal_result = {
	{nullptr, (PropertyRNA *)&rna_Operator_modal_event,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Operator_modal_func = {
	{(FunctionRNA *)&rna_Operator_draw_func, (FunctionRNA *)&rna_Operator_invoke_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_modal_context, (PropertyRNA *)&rna_Operator_modal_result}},
	"modal", 4192, "Modal operator function",
	nullptr,
	(PropertyRNA *)&rna_Operator_modal_result
};

PointerPropertyRNA rna_Operator_draw_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_Operator_draw_func = {
	{(FunctionRNA *)&rna_Operator_cancel_func, (FunctionRNA *)&rna_Operator_modal_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_draw_context, (PropertyRNA *)&rna_Operator_draw_context}},
	"draw", 96, "Draw function for the operator",
	nullptr,
	nullptr
};

PointerPropertyRNA rna_Operator_cancel_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_Operator_cancel_func = {
	{(FunctionRNA *)&rna_Operator_description_func, (FunctionRNA *)&rna_Operator_draw_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_cancel_context, (PropertyRNA *)&rna_Operator_cancel_context}},
	"cancel", 4192, "Called when the operator is canceled",
	nullptr,
	nullptr
};

StringPropertyRNA rna_Operator_description_result = {
	{(PropertyRNA *)&rna_Operator_description_context, nullptr,
	-1, "result", 8388609, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 4096, ""
};

PointerPropertyRNA rna_Operator_description_context = {
	{(PropertyRNA *)&rna_Operator_description_properties, (PropertyRNA *)&rna_Operator_description_result,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

PointerPropertyRNA rna_Operator_description_properties = {
	{nullptr, (PropertyRNA *)&rna_Operator_description_context,
	-1, "properties", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

FunctionRNA rna_Operator_description_func = {
	{nullptr, (FunctionRNA *)&rna_Operator_cancel_func,
	nullptr,
	{(PropertyRNA *)&rna_Operator_description_result, (PropertyRNA *)&rna_Operator_description_properties}},
	"description", 97, "Compute a description string that depends on parameters",
	nullptr,
	nullptr
};

StructRNA RNA_Operator = {
	{(ContainerRNA *)&RNA_OperatorProperties, (ContainerRNA *)&RNA_VolumeGrids,
	nullptr,
	{(PropertyRNA *)&rna_Operator_rna_properties, (PropertyRNA *)&rna_Operator_macros}},
	"Operator", nullptr, nullptr, 1540, nullptr, "Operator",
	"Storage of an operator being executed, or registered after execution",
	"Operator", 17,
	(PropertyRNA *)&rna_Operator_bl_idname, (PropertyRNA *)&rna_Operator_rna_properties,
	nullptr,
	nullptr,
	rna_Operator_refine,
	nullptr,
	rna_Operator_register,
	rna_Operator_unregister,
	rna_Operator_instance,
	nullptr,
	{(FunctionRNA *)&rna_Operator_report_func, (FunctionRNA *)&rna_Operator_description_func}
};

/* Operator Properties */
CollectionPropertyRNA rna_OperatorProperties_rna_properties = {
	{(PropertyRNA *)&rna_OperatorProperties_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorProperties_rna_properties_begin, OperatorProperties_rna_properties_next, OperatorProperties_rna_properties_end, OperatorProperties_rna_properties_get, nullptr, nullptr, OperatorProperties_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_OperatorProperties_rna_type = {
	{nullptr, (PropertyRNA *)&rna_OperatorProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorProperties_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_OperatorProperties = {
	{(ContainerRNA *)&RNA_OperatorOptions, (ContainerRNA *)&RNA_Operator,
	nullptr,
	{(PropertyRNA *)&rna_OperatorProperties_rna_properties, (PropertyRNA *)&rna_OperatorProperties_rna_type}},
	"OperatorProperties", nullptr, nullptr, 2688, nullptr, "Operator Properties",
	"Input properties of an operator",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_OperatorProperties_rna_properties,
	nullptr,
	nullptr,
	rna_OperatorProperties_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rna_OperatorProperties_idprops,
	{nullptr, nullptr}
};

/* Operator Options */
CollectionPropertyRNA rna_OperatorOptions_rna_properties = {
	{(PropertyRNA *)&rna_OperatorOptions_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_rna_properties_begin, OperatorOptions_rna_properties_next, OperatorOptions_rna_properties_end, OperatorOptions_rna_properties_get, nullptr, nullptr, OperatorOptions_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_OperatorOptions_rna_type = {
	{(PropertyRNA *)&rna_OperatorOptions_is_grab_cursor, (PropertyRNA *)&rna_OperatorOptions_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_OperatorOptions_is_grab_cursor = {
	{(PropertyRNA *)&rna_OperatorOptions_is_invoke, (PropertyRNA *)&rna_OperatorOptions_rna_type,
	-1, "is_grab_cursor", 2, 0, 0, 0, 0, "Grab Cursor",
	"True when the cursor is grabbed",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_is_grab_cursor_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_OperatorOptions_is_invoke = {
	{(PropertyRNA *)&rna_OperatorOptions_is_repeat, (PropertyRNA *)&rna_OperatorOptions_is_grab_cursor,
	-1, "is_invoke", 2, 0, 0, 0, 0, "Invoke",
	"True when invoked (even if only the execute callbacks available)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_is_invoke_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_OperatorOptions_is_repeat = {
	{(PropertyRNA *)&rna_OperatorOptions_is_repeat_last, (PropertyRNA *)&rna_OperatorOptions_is_invoke,
	-1, "is_repeat", 2, 0, 0, 0, 0, "Repeat",
	"True when run from the \'Adjust Last Operation\' panel",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_is_repeat_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_OperatorOptions_is_repeat_last = {
	{(PropertyRNA *)&rna_OperatorOptions_use_cursor_region, (PropertyRNA *)&rna_OperatorOptions_is_repeat,
	-1, "is_repeat_last", 2, 0, 0, 0, 0, "Repeat Call",
	"True when run from the operator \'Repeat Last\'",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_is_repeat_last_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_OperatorOptions_use_cursor_region = {
	{nullptr, (PropertyRNA *)&rna_OperatorOptions_is_repeat_last,
	-1, "use_cursor_region", 3, 0, 0, 0, 0, "Focus Region",
	"Enable to use the region under the cursor for modal execution",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorOptions_use_cursor_region_get, OperatorOptions_use_cursor_region_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_OperatorOptions = {
	{(ContainerRNA *)&RNA_OperatorMousePath, (ContainerRNA *)&RNA_OperatorProperties,
	nullptr,
	{(PropertyRNA *)&rna_OperatorOptions_rna_properties, (PropertyRNA *)&rna_OperatorOptions_use_cursor_region}},
	"OperatorOptions", nullptr, nullptr, 516, nullptr, "Operator Options",
	"Runtime options",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_OperatorOptions_rna_properties,
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

/* Operator Mouse Path */
static float rna_OperatorMousePath_loc_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorMousePath_loc = {
	{(PropertyRNA *)&rna_OperatorMousePath_time, nullptr,
	-1, "loc", 1027, 0, 0, 0, 0, "Location",
	"Mouse location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorMousePath_loc_default
};

FloatPropertyRNA rna_OperatorMousePath_time = {
	{nullptr, (PropertyRNA *)&rna_OperatorMousePath_loc,
	-1, "time", 1027, 0, 0, 0, 0, "Time",
	"Time of mouse location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_OperatorMousePath = {
	{(ContainerRNA *)&RNA_OperatorFileListElement, (ContainerRNA *)&RNA_OperatorOptions,
	nullptr,
	{(PropertyRNA *)&rna_OperatorMousePath_loc, (PropertyRNA *)&rna_OperatorMousePath_time}},
	"OperatorMousePath", nullptr, nullptr, 516, nullptr, "Operator Mouse Path",
	"Mouse path values for operators that record such paths",
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

/* Operator File List Element */
StringPropertyRNA rna_OperatorFileListElement_name = {
	{nullptr, nullptr,
	-1, "name", 263169, 0, 0, 0, 0, "Name",
	"Name of a file or directory within a file list",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILENAME | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_OperatorFileListElement = {
	{(ContainerRNA *)&RNA_Macro, (ContainerRNA *)&RNA_OperatorMousePath,
	nullptr,
	{(PropertyRNA *)&rna_OperatorFileListElement_name, (PropertyRNA *)&rna_OperatorFileListElement_name}},
	"OperatorFileListElement", nullptr, nullptr, 516, nullptr, "Operator File List Element",
	"",
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

/* Macro Operator */
CollectionPropertyRNA rna_Macro_rna_properties = {
	{(PropertyRNA *)&rna_Macro_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_rna_properties_begin, Macro_rna_properties_next, Macro_rna_properties_end, Macro_rna_properties_get, nullptr, nullptr, Macro_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Macro_rna_type = {
	{(PropertyRNA *)&rna_Macro_name, (PropertyRNA *)&rna_Macro_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Macro_name = {
	{(PropertyRNA *)&rna_Macro_properties, (PropertyRNA *)&rna_Macro_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_name_get, Macro_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Macro_properties = {
	{(PropertyRNA *)&rna_Macro_has_reports, (PropertyRNA *)&rna_Macro_name,
	-1, "properties", 8650752, 0, 0, 0, 0, "Properties",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_properties_get, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

BoolPropertyRNA rna_Macro_has_reports = {
	{(PropertyRNA *)&rna_Macro_bl_idname, (PropertyRNA *)&rna_Macro_properties,
	-1, "has_reports", 2, 0, 0, 0, 0, "Has Reports",
	"Operator has a set of reports (warnings and errors) from last execution",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_has_reports_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_Macro_bl_idname = {
	{(PropertyRNA *)&rna_Macro_bl_label, (PropertyRNA *)&rna_Macro_has_reports,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_idname_get, Macro_bl_idname_length, Macro_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_Macro_bl_label = {
	{(PropertyRNA *)&rna_Macro_bl_translation_context, (PropertyRNA *)&rna_Macro_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "bl_label",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_label_get, Macro_bl_label_length, Macro_bl_label_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_Macro_bl_translation_context = {
	{(PropertyRNA *)&rna_Macro_bl_description, (PropertyRNA *)&rna_Macro_bl_label,
	-1, "bl_translation_context", 262193, 0, 0, 0, 0, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_translation_context_get, Macro_bl_translation_context_length, Macro_bl_translation_context_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, "Operator"
};

StringPropertyRNA rna_Macro_bl_description = {
	{(PropertyRNA *)&rna_Macro_bl_undo_group, (PropertyRNA *)&rna_Macro_bl_translation_context,
	-1, "bl_description", 262193, 0, 0, 0, 0, "bl_description",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_description_get, Macro_bl_description_length, Macro_bl_description_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_Macro_bl_undo_group = {
	{(PropertyRNA *)&rna_Macro_bl_options, (PropertyRNA *)&rna_Macro_bl_description,
	-1, "bl_undo_group", 262193, 0, 0, 0, 0, "bl_undo_group",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_undo_group_get, Macro_bl_undo_group_length, Macro_bl_undo_group_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_Macro_bl_options = {
	{(PropertyRNA *)&rna_Macro_bl_cursor_pending, (PropertyRNA *)&rna_Macro_bl_undo_group,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Options for this operator type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_options_get, Macro_bl_options_set, nullptr, nullptr, nullptr, rna_enum_operator_type_flag_items, 11, 1
};

EnumPropertyRNA rna_Macro_bl_cursor_pending = {
	{nullptr, (PropertyRNA *)&rna_Macro_bl_options,
	-1, "bl_cursor_pending", 51, 0, 0, 0, 0, "Idle Cursor",
	"Cursor to use when waiting for the user to select a location to activate the operator (when ``bl_options`` has ``DEPENDS_ON_CURSOR`` set)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Macro_bl_cursor_pending_get, Macro_bl_cursor_pending_set, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 24, 1
};

EnumPropertyRNA rna_Macro_report_type = {
	{(PropertyRNA *)&rna_Macro_report_message, nullptr,
	-1, "type", 2097155, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_wm_report_items, 9, 0
};

StringPropertyRNA rna_Macro_report_message = {
	{nullptr, (PropertyRNA *)&rna_Macro_report_type,
	-1, "message", 262145, 0, 1, 0, 0, "Report Message",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_Macro_report_func = {
	{(FunctionRNA *)&rna_Macro_poll_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Macro_report_type, (PropertyRNA *)&rna_Macro_report_message}},
	"report", 0, "report",
	Macro_report_call,
	nullptr
};

BoolPropertyRNA rna_Macro_poll_visible = {
	{(PropertyRNA *)&rna_Macro_poll_context, nullptr,
	-1, "visible", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_Macro_poll_context = {
	{nullptr, (PropertyRNA *)&rna_Macro_poll_visible,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_Macro_poll_func = {
	{(FunctionRNA *)&rna_Macro_draw_func, (FunctionRNA *)&rna_Macro_report_func,
	nullptr,
	{(PropertyRNA *)&rna_Macro_poll_visible, (PropertyRNA *)&rna_Macro_poll_context}},
	"poll", 97, "Test if the operator can be called or not",
	nullptr,
	(PropertyRNA *)&rna_Macro_poll_visible
};

PointerPropertyRNA rna_Macro_draw_context = {
	{nullptr, nullptr,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Context
};

FunctionRNA rna_Macro_draw_func = {
	{nullptr, (FunctionRNA *)&rna_Macro_poll_func,
	nullptr,
	{(PropertyRNA *)&rna_Macro_draw_context, (PropertyRNA *)&rna_Macro_draw_context}},
	"draw", 96, "Draw function for the operator",
	nullptr,
	nullptr
};

StructRNA RNA_Macro = {
	{(ContainerRNA *)&RNA_OperatorMacro, (ContainerRNA *)&RNA_OperatorFileListElement,
	nullptr,
	{(PropertyRNA *)&rna_Macro_rna_properties, (PropertyRNA *)&rna_Macro_bl_cursor_pending}},
	"Macro", nullptr, nullptr, 1540, nullptr, "Macro Operator",
	"Storage of a macro operator being executed, or registered after execution",
	"Operator", 17,
	(PropertyRNA *)&rna_Macro_bl_idname, (PropertyRNA *)&rna_Macro_rna_properties,
	nullptr,
	nullptr,
	rna_MacroOperator_refine,
	nullptr,
	rna_MacroOperator_register,
	rna_Operator_unregister,
	rna_Operator_instance,
	nullptr,
	{(FunctionRNA *)&rna_Macro_report_func, (FunctionRNA *)&rna_Macro_draw_func}
};

/* Operator Macro */
CollectionPropertyRNA rna_OperatorMacro_rna_properties = {
	{(PropertyRNA *)&rna_OperatorMacro_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorMacro_rna_properties_begin, OperatorMacro_rna_properties_next, OperatorMacro_rna_properties_end, OperatorMacro_rna_properties_get, nullptr, nullptr, OperatorMacro_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_OperatorMacro_rna_type = {
	{(PropertyRNA *)&rna_OperatorMacro_properties, (PropertyRNA *)&rna_OperatorMacro_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorMacro_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_OperatorMacro_properties = {
	{nullptr, (PropertyRNA *)&rna_OperatorMacro_rna_type,
	-1, "properties", 8650752, 0, 0, 0, 0, "Properties",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	OperatorMacro_properties_get, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

StructRNA RNA_OperatorMacro = {
	{(ContainerRNA *)&RNA_Event, (ContainerRNA *)&RNA_Macro,
	nullptr,
	{(PropertyRNA *)&rna_OperatorMacro_rna_properties, (PropertyRNA *)&rna_OperatorMacro_properties}},
	"OperatorMacro", nullptr, nullptr, 516, nullptr, "Operator Macro",
	"Storage of a sub operator in a macro after it has been added",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_OperatorMacro_rna_properties,
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

/* Event */
CollectionPropertyRNA rna_Event_rna_properties = {
	{(PropertyRNA *)&rna_Event_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_rna_properties_begin, Event_rna_properties_next, Event_rna_properties_end, Event_rna_properties_get, nullptr, nullptr, Event_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Event_rna_type = {
	{(PropertyRNA *)&rna_Event_ascii, (PropertyRNA *)&rna_Event_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_Event_ascii = {
	{(PropertyRNA *)&rna_Event_unicode, (PropertyRNA *)&rna_Event_rna_type,
	-1, "ascii", 262144, 0, 0, 0, 0, "ASCII",
	"Single ASCII character for this event",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_ascii_get, Event_ascii_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_Event_unicode = {
	{(PropertyRNA *)&rna_Event_value, (PropertyRNA *)&rna_Event_ascii,
	-1, "unicode", 262144, 0, 0, 0, 0, "Unicode",
	"Single unicode character for this event",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_unicode_get, Event_unicode_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_Event_value = {
	{(PropertyRNA *)&rna_Event_value_prev, (PropertyRNA *)&rna_Event_unicode,
	-1, "value", 2, 0, 0, 0, 0, "Value",
	"The type of event, only applies to some",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_value_get, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
};

EnumPropertyRNA rna_Event_value_prev = {
	{(PropertyRNA *)&rna_Event_type, (PropertyRNA *)&rna_Event_value,
	-1, "value_prev", 2, 0, 0, 0, 0, "Previous Value",
	"The type of event, only applies to some",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_value_prev_get, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
};

EnumPropertyRNA rna_Event_type = {
	{(PropertyRNA *)&rna_Event_type_prev, (PropertyRNA *)&rna_Event_value_prev,
	-1, "type", 2, 0, 0, 0, 0, "Type",
	"",
	0, "UI_Events_KeyMaps",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_Event_type_prev = {
	{(PropertyRNA *)&rna_Event_direction, (PropertyRNA *)&rna_Event_type,
	-1, "type_prev", 2, 0, 0, 0, 0, "Previous Type",
	"",
	0, "UI_Events_KeyMaps",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_type_prev_get, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_Event_direction = {
	{(PropertyRNA *)&rna_Event_is_repeat, (PropertyRNA *)&rna_Event_type_prev,
	-1, "direction", 2, 0, 0, 0, 0, "Direction",
	"The direction (only applies to drag events)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_direction_get, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
};

BoolPropertyRNA rna_Event_is_repeat = {
	{(PropertyRNA *)&rna_Event_is_consecutive, (PropertyRNA *)&rna_Event_direction,
	-1, "is_repeat", 2, 0, 0, 0, 0, "Is Repeat",
	"The event is generated by holding a key down",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_is_repeat_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Event_is_consecutive = {
	{(PropertyRNA *)&rna_Event_mouse_x, (PropertyRNA *)&rna_Event_is_repeat,
	-1, "is_consecutive", 2, 0, 0, 0, 0, "Is Consecutive",
	"Part of a track-pad or NDOF motion, interrupted by cursor motion, button or key press events",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_is_consecutive_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_x = {
	{(PropertyRNA *)&rna_Event_mouse_y, (PropertyRNA *)&rna_Event_is_consecutive,
	-1, "mouse_x", 2, 0, 0, 0, 0, "Mouse X Position",
	"The window relative horizontal location of the mouse",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_y = {
	{(PropertyRNA *)&rna_Event_mouse_region_x, (PropertyRNA *)&rna_Event_mouse_x,
	-1, "mouse_y", 2, 0, 0, 0, 0, "Mouse Y Position",
	"The window relative vertical location of the mouse",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_region_x = {
	{(PropertyRNA *)&rna_Event_mouse_region_y, (PropertyRNA *)&rna_Event_mouse_y,
	-1, "mouse_region_x", 2, 0, 0, 0, 0, "Mouse X Position",
	"The region relative horizontal location of the mouse",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_region_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_region_y = {
	{(PropertyRNA *)&rna_Event_mouse_prev_x, (PropertyRNA *)&rna_Event_mouse_region_x,
	-1, "mouse_region_y", 2, 0, 0, 0, 0, "Mouse Y Position",
	"The region relative vertical location of the mouse",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_region_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_prev_x = {
	{(PropertyRNA *)&rna_Event_mouse_prev_y, (PropertyRNA *)&rna_Event_mouse_region_y,
	-1, "mouse_prev_x", 2, 0, 0, 0, 0, "Mouse Previous X Position",
	"The window relative horizontal location of the mouse",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_prev_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_prev_y = {
	{(PropertyRNA *)&rna_Event_mouse_prev_press_x, (PropertyRNA *)&rna_Event_mouse_prev_x,
	-1, "mouse_prev_y", 2, 0, 0, 0, 0, "Mouse Previous Y Position",
	"The window relative vertical location of the mouse",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_prev_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_prev_press_x = {
	{(PropertyRNA *)&rna_Event_mouse_prev_press_y, (PropertyRNA *)&rna_Event_mouse_prev_y,
	-1, "mouse_prev_press_x", 2, 0, 0, 0, 0, "Mouse Previous X Press Position",
	"The window relative horizontal location of the last press event",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_prev_press_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Event_mouse_prev_press_y = {
	{(PropertyRNA *)&rna_Event_pressure, (PropertyRNA *)&rna_Event_mouse_prev_press_x,
	-1, "mouse_prev_press_y", 2, 0, 0, 0, 0, "Mouse Previous Y Press Position",
	"The window relative vertical location of the last press event",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_mouse_prev_press_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_Event_pressure = {
	{(PropertyRNA *)&rna_Event_tilt, (PropertyRNA *)&rna_Event_mouse_prev_press_y,
	-1, "pressure", 2, 0, 0, 0, 0, "Tablet Pressure",
	"The pressure of the tablet or 1.0 if no tablet present",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

static float rna_Event_tilt_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Event_tilt = {
	{(PropertyRNA *)&rna_Event_is_tablet, (PropertyRNA *)&rna_Event_pressure,
	-1, "tilt", 2, 0, 0, 0, 0, "Tablet Tilt",
	"The pressure of the tablet or zeroes if no tablet present",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_LENGTH), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Event_tilt_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Event_tilt_default
};

BoolPropertyRNA rna_Event_is_tablet = {
	{(PropertyRNA *)&rna_Event_is_mouse_absolute, (PropertyRNA *)&rna_Event_tilt,
	-1, "is_tablet", 2, 0, 0, 0, 0, "Is Tablet",
	"The event has tablet data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_is_tablet_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Event_is_mouse_absolute = {
	{(PropertyRNA *)&rna_Event_xr, (PropertyRNA *)&rna_Event_is_tablet,
	-1, "is_mouse_absolute", 2, 0, 0, 0, 0, "Absolute Motion",
	"The last motion event was an absolute input",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_is_mouse_absolute_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Event_xr = {
	{(PropertyRNA *)&rna_Event_shift, (PropertyRNA *)&rna_Event_is_mouse_absolute,
	-1, "xr", 8388608, 0, 0, 0, 0, "XR",
	"XR event data",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_xr_get, nullptr, nullptr, nullptr,&RNA_XrEventData
};

BoolPropertyRNA rna_Event_shift = {
	{(PropertyRNA *)&rna_Event_ctrl, (PropertyRNA *)&rna_Event_xr,
	-1, "shift", 2, 0, 0, 0, 0, "Shift",
	"True when the Shift key is held",
	0, "WindowManager",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_shift_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Event_ctrl = {
	{(PropertyRNA *)&rna_Event_alt, (PropertyRNA *)&rna_Event_shift,
	-1, "ctrl", 2, 0, 0, 0, 0, "Ctrl",
	"True when the Ctrl key is held",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_ctrl_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Event_alt = {
	{(PropertyRNA *)&rna_Event_oskey, (PropertyRNA *)&rna_Event_ctrl,
	-1, "alt", 2, 0, 0, 0, 0, "Alt",
	"True when the Alt/Option key is held",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_alt_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Event_oskey = {
	{nullptr, (PropertyRNA *)&rna_Event_alt,
	-1, "oskey", 2, 0, 0, 0, 0, "OS Key",
	"True when the Cmd key is held",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Event_oskey_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_Event = {
	{(ContainerRNA *)&RNA_Timer, (ContainerRNA *)&RNA_OperatorMacro,
	nullptr,
	{(PropertyRNA *)&rna_Event_rna_properties, (PropertyRNA *)&rna_Event_oskey}},
	"Event", nullptr, nullptr, 516, nullptr, "Event",
	"Window Manager Event",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Event_rna_properties,
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

/* Timer */
CollectionPropertyRNA rna_Timer_rna_properties = {
	{(PropertyRNA *)&rna_Timer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Timer_rna_properties_begin, Timer_rna_properties_next, Timer_rna_properties_end, Timer_rna_properties_get, nullptr, nullptr, Timer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Timer_rna_type = {
	{(PropertyRNA *)&rna_Timer_time_step, (PropertyRNA *)&rna_Timer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Timer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_Timer_time_step = {
	{(PropertyRNA *)&rna_Timer_time_delta, (PropertyRNA *)&rna_Timer_rna_type,
	-1, "time_step", 2, 0, 0, 0, 0, "Time Step",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Timer_time_step_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Timer_time_delta = {
	{(PropertyRNA *)&rna_Timer_time_duration, (PropertyRNA *)&rna_Timer_time_step,
	-1, "time_delta", 2, 0, 0, 0, 0, "Delta",
	"Time since last step in seconds",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Timer_time_delta_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Timer_time_duration = {
	{nullptr, (PropertyRNA *)&rna_Timer_time_delta,
	-1, "time_duration", 2, 0, 0, 0, 0, "Delta",
	"Time since the timer started seconds",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Timer_time_duration_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_Timer = {
	{(ContainerRNA *)&RNA_UIPopupMenu, (ContainerRNA *)&RNA_Event,
	nullptr,
	{(PropertyRNA *)&rna_Timer_rna_properties, (PropertyRNA *)&rna_Timer_time_duration}},
	"Timer", nullptr, nullptr, 516, nullptr, "Timer",
	"Window event timer",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Timer_rna_properties,
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

/* UIPopupMenu */
CollectionPropertyRNA rna_UIPopupMenu_rna_properties = {
	{(PropertyRNA *)&rna_UIPopupMenu_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPopupMenu_rna_properties_begin, UIPopupMenu_rna_properties_next, UIPopupMenu_rna_properties_end, UIPopupMenu_rna_properties_get, nullptr, nullptr, UIPopupMenu_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UIPopupMenu_rna_type = {
	{(PropertyRNA *)&rna_UIPopupMenu_layout, (PropertyRNA *)&rna_UIPopupMenu_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPopupMenu_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_UIPopupMenu_layout = {
	{nullptr, (PropertyRNA *)&rna_UIPopupMenu_rna_type,
	-1, "layout", 8388608, 0, 0, 0, 0, "layout",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPopupMenu_layout_get, nullptr, nullptr, nullptr,&RNA_UILayout
};

StructRNA RNA_UIPopupMenu = {
	{(ContainerRNA *)&RNA_UIPopover, (ContainerRNA *)&RNA_Timer,
	nullptr,
	{(PropertyRNA *)&rna_UIPopupMenu_rna_properties, (PropertyRNA *)&rna_UIPopupMenu_layout}},
	"UIPopupMenu", nullptr, nullptr, 516, nullptr, "UIPopupMenu",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UIPopupMenu_rna_properties,
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

/* UIPopover */
CollectionPropertyRNA rna_UIPopover_rna_properties = {
	{(PropertyRNA *)&rna_UIPopover_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPopover_rna_properties_begin, UIPopover_rna_properties_next, UIPopover_rna_properties_end, UIPopover_rna_properties_get, nullptr, nullptr, UIPopover_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UIPopover_rna_type = {
	{(PropertyRNA *)&rna_UIPopover_layout, (PropertyRNA *)&rna_UIPopover_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPopover_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_UIPopover_layout = {
	{nullptr, (PropertyRNA *)&rna_UIPopover_rna_type,
	-1, "layout", 8388608, 0, 0, 0, 0, "layout",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPopover_layout_get, nullptr, nullptr, nullptr,&RNA_UILayout
};

StructRNA RNA_UIPopover = {
	{(ContainerRNA *)&RNA_UIPieMenu, (ContainerRNA *)&RNA_UIPopupMenu,
	nullptr,
	{(PropertyRNA *)&rna_UIPopover_rna_properties, (PropertyRNA *)&rna_UIPopover_layout}},
	"UIPopover", nullptr, nullptr, 516, nullptr, "UIPopover",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UIPopover_rna_properties,
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

/* UIPieMenu */
CollectionPropertyRNA rna_UIPieMenu_rna_properties = {
	{(PropertyRNA *)&rna_UIPieMenu_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPieMenu_rna_properties_begin, UIPieMenu_rna_properties_next, UIPieMenu_rna_properties_end, UIPieMenu_rna_properties_get, nullptr, nullptr, UIPieMenu_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UIPieMenu_rna_type = {
	{(PropertyRNA *)&rna_UIPieMenu_layout, (PropertyRNA *)&rna_UIPieMenu_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPieMenu_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_UIPieMenu_layout = {
	{nullptr, (PropertyRNA *)&rna_UIPieMenu_rna_type,
	-1, "layout", 8388608, 0, 0, 0, 0, "layout",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UIPieMenu_layout_get, nullptr, nullptr, nullptr,&RNA_UILayout
};

StructRNA RNA_UIPieMenu = {
	{(ContainerRNA *)&RNA_Window, (ContainerRNA *)&RNA_UIPopover,
	nullptr,
	{(PropertyRNA *)&rna_UIPieMenu_rna_properties, (PropertyRNA *)&rna_UIPieMenu_layout}},
	"UIPieMenu", nullptr, nullptr, 516, nullptr, "UIPieMenu",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UIPieMenu_rna_properties,
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

/* Window */
CollectionPropertyRNA rna_Window_rna_properties = {
	{(PropertyRNA *)&rna_Window_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_rna_properties_begin, Window_rna_properties_next, Window_rna_properties_end, Window_rna_properties_get, nullptr, nullptr, Window_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Window_rna_type = {
	{(PropertyRNA *)&rna_Window_parent, (PropertyRNA *)&rna_Window_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Window_parent = {
	{(PropertyRNA *)&rna_Window_scene, (PropertyRNA *)&rna_Window_rna_type,
	-1, "parent", 8388608, 0, 0, 0, 0, "Parent Window",
	"Active workspace and scene follow this window",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_parent_get, nullptr, nullptr, nullptr,&RNA_Window
};

PointerPropertyRNA rna_Window_scene = {
	{(PropertyRNA *)&rna_Window_workspace, (PropertyRNA *)&rna_Window_parent,
	-1, "scene", 12845185, 0, 0, 0, 0, "Scene",
	"Active scene to be edited in the window",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Window_scene_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_scene_get, Window_scene_set, nullptr, nullptr,&RNA_Scene
};

PointerPropertyRNA rna_Window_workspace = {
	{(PropertyRNA *)&rna_Window_screen, (PropertyRNA *)&rna_Window_scene,
	-1, "workspace", 12845185, 0, 0, 0, 0, "Workspace",
	"Active workspace showing in the window",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Window_workspace_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_workspace_get, Window_workspace_set, nullptr, nullptr,&RNA_WorkSpace
};

PointerPropertyRNA rna_Window_screen = {
	{(PropertyRNA *)&rna_Window_view_layer, (PropertyRNA *)&rna_Window_workspace,
	-1, "screen", 12845249, 0, 0, 0, 0, "Screen",
	"Active workspace screen showing in the window",
	0, "Screen",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_workspace_screen_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_screen_get, Window_screen_set, nullptr, rna_Window_screen_assign_poll,&RNA_Screen
};

PointerPropertyRNA rna_Window_view_layer = {
	{(PropertyRNA *)&rna_Window_x, (PropertyRNA *)&rna_Window_screen,
	-1, "view_layer", 8650753, 0, 0, 0, 0, "Active View Layer",
	"The active workspace view layer showing in the window",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 68157440, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_view_layer_get, Window_view_layer_set, nullptr, nullptr,&RNA_ViewLayer
};

IntPropertyRNA rna_Window_x = {
	{(PropertyRNA *)&rna_Window_y, (PropertyRNA *)&rna_Window_view_layer,
	-1, "x", 2, 0, 0, 4, 0, "X Position",
	"Horizontal location of the window",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmWindow, posx), (RawPropertyType)1, nullptr},
	Window_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Window_y = {
	{(PropertyRNA *)&rna_Window_width, (PropertyRNA *)&rna_Window_x,
	-1, "y", 2, 0, 0, 4, 0, "Y Position",
	"Vertical location of the window",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmWindow, posy), (RawPropertyType)1, nullptr},
	Window_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Window_width = {
	{(PropertyRNA *)&rna_Window_height, (PropertyRNA *)&rna_Window_y,
	-1, "width", 2, 0, 0, 4, 0, "Width",
	"Window width",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmWindow, sizex), (RawPropertyType)1, nullptr},
	Window_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Window_height = {
	{(PropertyRNA *)&rna_Window_stereo_3d_display, (PropertyRNA *)&rna_Window_width,
	-1, "height", 2, 0, 0, 4, 0, "Height",
	"Window height",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmWindow, sizey), (RawPropertyType)1, nullptr},
	Window_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

PointerPropertyRNA rna_Window_stereo_3d_display = {
	{nullptr, (PropertyRNA *)&rna_Window_height,
	-1, "stereo_3d_display", 8650752, 0, 0, 0, 0, "Stereo 3D Display",
	"Settings for stereo 3D display",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Window_stereo_3d_display_get, nullptr, nullptr, nullptr,&RNA_Stereo3dDisplay
};

IntPropertyRNA rna_Window_cursor_warp_x = {
	{(PropertyRNA *)&rna_Window_cursor_warp_y, nullptr,
	-1, "x", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Window_cursor_warp_y = {
	{nullptr, (PropertyRNA *)&rna_Window_cursor_warp_x,
	-1, "y", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Window_cursor_warp_func = {
	{(FunctionRNA *)&rna_Window_cursor_set_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Window_cursor_warp_x, (PropertyRNA *)&rna_Window_cursor_warp_y}},
	"cursor_warp", 0, "Set the cursor position",
	Window_cursor_warp_call,
	nullptr
};

EnumPropertyRNA rna_Window_cursor_set_cursor = {
	{nullptr, nullptr,
	-1, "cursor", 3, 0, 1, 0, 0, "cursor",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 24, 1
};

FunctionRNA rna_Window_cursor_set_func = {
	{(FunctionRNA *)&rna_Window_cursor_modal_set_func, (FunctionRNA *)&rna_Window_cursor_warp_func,
	nullptr,
	{(PropertyRNA *)&rna_Window_cursor_set_cursor, (PropertyRNA *)&rna_Window_cursor_set_cursor}},
	"cursor_set", 0, "Set the cursor",
	Window_cursor_set_call,
	nullptr
};

EnumPropertyRNA rna_Window_cursor_modal_set_cursor = {
	{nullptr, nullptr,
	-1, "cursor", 3, 0, 1, 0, 0, "cursor",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_window_cursor_items, 24, 1
};

FunctionRNA rna_Window_cursor_modal_set_func = {
	{(FunctionRNA *)&rna_Window_cursor_modal_restore_func, (FunctionRNA *)&rna_Window_cursor_set_func,
	nullptr,
	{(PropertyRNA *)&rna_Window_cursor_modal_set_cursor, (PropertyRNA *)&rna_Window_cursor_modal_set_cursor}},
	"cursor_modal_set", 0, "Restore the previous cursor after calling ``cursor_modal_set``",
	Window_cursor_modal_set_call,
	nullptr
};

FunctionRNA rna_Window_cursor_modal_restore_func = {
	{(FunctionRNA *)&rna_Window_event_simulate_func, (FunctionRNA *)&rna_Window_cursor_modal_set_func,
	nullptr,
	{nullptr, nullptr}},
	"cursor_modal_restore", 0, "cursor_modal_restore",
	Window_cursor_modal_restore_call,
	nullptr
};

EnumPropertyRNA rna_Window_event_simulate_type = {
	{(PropertyRNA *)&rna_Window_event_simulate_value, nullptr,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_Window_event_simulate_value = {
	{(PropertyRNA *)&rna_Window_event_simulate_unicode, (PropertyRNA *)&rna_Window_event_simulate_type,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
};

StringPropertyRNA rna_Window_event_simulate_unicode = {
	{(PropertyRNA *)&rna_Window_event_simulate_x, (PropertyRNA *)&rna_Window_event_simulate_value,
	-1, "unicode", 1, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_Window_event_simulate_x = {
	{(PropertyRNA *)&rna_Window_event_simulate_y, (PropertyRNA *)&rna_Window_event_simulate_unicode,
	-1, "x", 3, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Window_event_simulate_y = {
	{(PropertyRNA *)&rna_Window_event_simulate_shift, (PropertyRNA *)&rna_Window_event_simulate_x,
	-1, "y", 3, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_Window_event_simulate_shift = {
	{(PropertyRNA *)&rna_Window_event_simulate_ctrl, (PropertyRNA *)&rna_Window_event_simulate_y,
	-1, "shift", 3, 0, 0, 0, 0, "Shift",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Window_event_simulate_ctrl = {
	{(PropertyRNA *)&rna_Window_event_simulate_alt, (PropertyRNA *)&rna_Window_event_simulate_shift,
	-1, "ctrl", 3, 0, 0, 0, 0, "Ctrl",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Window_event_simulate_alt = {
	{(PropertyRNA *)&rna_Window_event_simulate_oskey, (PropertyRNA *)&rna_Window_event_simulate_ctrl,
	-1, "alt", 3, 0, 0, 0, 0, "Alt",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Window_event_simulate_oskey = {
	{(PropertyRNA *)&rna_Window_event_simulate_event, (PropertyRNA *)&rna_Window_event_simulate_alt,
	-1, "oskey", 3, 0, 0, 0, 0, "OS Key",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Window_event_simulate_event = {
	{nullptr, (PropertyRNA *)&rna_Window_event_simulate_oskey,
	-1, "event", 8388608, 0, 2, 0, 0, "Item",
	"Added key map item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

FunctionRNA rna_Window_event_simulate_func = {
	{nullptr, (FunctionRNA *)&rna_Window_cursor_modal_restore_func,
	nullptr,
	{(PropertyRNA *)&rna_Window_event_simulate_type, (PropertyRNA *)&rna_Window_event_simulate_event}},
	"event_simulate", 16, "event_simulate",
	Window_event_simulate_call,
	(PropertyRNA *)&rna_Window_event_simulate_event
};

StructRNA RNA_Window = {
	{(ContainerRNA *)&RNA_Stereo3dDisplay, (ContainerRNA *)&RNA_UIPieMenu,
	nullptr,
	{(PropertyRNA *)&rna_Window_rna_properties, (PropertyRNA *)&rna_Window_stereo_3d_display}},
	"Window", nullptr, nullptr, 516, nullptr, "Window",
	"Open window",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Window_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Window_cursor_warp_func, (FunctionRNA *)&rna_Window_event_simulate_func}
};

/* Stereo 3D Display */
CollectionPropertyRNA rna_Stereo3dDisplay_rna_properties = {
	{(PropertyRNA *)&rna_Stereo3dDisplay_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Stereo3dDisplay_rna_properties_begin, Stereo3dDisplay_rna_properties_next, Stereo3dDisplay_rna_properties_end, Stereo3dDisplay_rna_properties_get, nullptr, nullptr, Stereo3dDisplay_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Stereo3dDisplay_rna_type = {
	{(PropertyRNA *)&rna_Stereo3dDisplay_display_mode, (PropertyRNA *)&rna_Stereo3dDisplay_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Stereo3dDisplay_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_Stereo3dDisplay_display_mode = {
	{(PropertyRNA *)&rna_Stereo3dDisplay_anaglyph_type, (PropertyRNA *)&rna_Stereo3dDisplay_rna_type,
	-1, "display_mode", 3, 0, 0, 4, 0, "Display Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Stereo3dFormat, display_mode), (RawPropertyType)2, nullptr},
	Stereo3dDisplay_display_mode_get, Stereo3dDisplay_display_mode_set, nullptr, nullptr, nullptr, rna_enum_stereo3d_display_items, 5, 0
};

EnumPropertyRNA rna_Stereo3dDisplay_anaglyph_type = {
	{(PropertyRNA *)&rna_Stereo3dDisplay_interlace_type, (PropertyRNA *)&rna_Stereo3dDisplay_display_mode,
	-1, "anaglyph_type", 3, 0, 0, 4, 0, "Anaglyph Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Stereo3dFormat, anaglyph_type), (RawPropertyType)2, nullptr},
	Stereo3dDisplay_anaglyph_type_get, Stereo3dDisplay_anaglyph_type_set, nullptr, nullptr, nullptr, rna_enum_stereo3d_anaglyph_type_items, 3, 0
};

EnumPropertyRNA rna_Stereo3dDisplay_interlace_type = {
	{(PropertyRNA *)&rna_Stereo3dDisplay_use_interlace_swap, (PropertyRNA *)&rna_Stereo3dDisplay_anaglyph_type,
	-1, "interlace_type", 3, 0, 0, 4, 0, "Interlace Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Stereo3dFormat, interlace_type), (RawPropertyType)2, nullptr},
	Stereo3dDisplay_interlace_type_get, Stereo3dDisplay_interlace_type_set, nullptr, nullptr, nullptr, rna_enum_stereo3d_interlace_type_items, 3, 0
};

BoolPropertyRNA rna_Stereo3dDisplay_use_interlace_swap = {
	{(PropertyRNA *)&rna_Stereo3dDisplay_use_sidebyside_crosseyed, (PropertyRNA *)&rna_Stereo3dDisplay_interlace_type,
	-1, "use_interlace_swap", 3, 0, 0, 0, 0, "Swap Left/Right",
	"Swap left and right stereo channels",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Stereo3dDisplay_use_interlace_swap_get, Stereo3dDisplay_use_interlace_swap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Stereo3dDisplay_use_sidebyside_crosseyed = {
	{nullptr, (PropertyRNA *)&rna_Stereo3dDisplay_use_interlace_swap,
	-1, "use_sidebyside_crosseyed", 3, 0, 0, 0, 0, "Cross-Eyed",
	"Right eye should see left image and vice versa",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Stereo3dDisplay_use_sidebyside_crosseyed_get, Stereo3dDisplay_use_sidebyside_crosseyed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_Stereo3dDisplay = {
	{(ContainerRNA *)&RNA_WindowManager, (ContainerRNA *)&RNA_Window,
	nullptr,
	{(PropertyRNA *)&rna_Stereo3dDisplay_rna_properties, (PropertyRNA *)&rna_Stereo3dDisplay_use_sidebyside_crosseyed}},
	"Stereo3dDisplay", nullptr, nullptr, 512, nullptr, "Stereo 3D Display",
	"Settings for stereo 3D display",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Stereo3dDisplay_rna_properties,
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

/* Window Manager */
CollectionPropertyRNA rna_WindowManager_operators = {
	{(PropertyRNA *)&rna_WindowManager_windows, nullptr,
	-1, "operators", 0, 0, 0, 0, 0, "Operators",
	"Operator registry",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WindowManager_operators_begin, WindowManager_operators_next, WindowManager_operators_end, WindowManager_operators_get, nullptr, WindowManager_operators_lookup_int, WindowManager_operators_lookup_string, nullptr, &RNA_Operator
};

CollectionPropertyRNA rna_WindowManager_windows = {
	{(PropertyRNA *)&rna_WindowManager_keyconfigs, (PropertyRNA *)&rna_WindowManager_operators,
	-1, "windows", 0, 0, 0, 0, 0, "Windows",
	"Open windows",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WindowManager_windows_begin, WindowManager_windows_next, WindowManager_windows_end, WindowManager_windows_get, nullptr, WindowManager_windows_lookup_int, nullptr, nullptr, &RNA_Window
};

CollectionPropertyRNA rna_WindowManager_keyconfigs = {
	{(PropertyRNA *)&rna_WindowManager_xr_session_settings, (PropertyRNA *)&rna_WindowManager_windows,
	-1, "keyconfigs", 0, 0, 0, 0, 0, "Key Configurations",
	"Registered key configurations",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_KeyConfigurations},
	WindowManager_keyconfigs_begin, WindowManager_keyconfigs_next, WindowManager_keyconfigs_end, WindowManager_keyconfigs_get, nullptr, WindowManager_keyconfigs_lookup_int, WindowManager_keyconfigs_lookup_string, nullptr, &RNA_KeyConfig
};

PointerPropertyRNA rna_WindowManager_xr_session_settings = {
	{(PropertyRNA *)&rna_WindowManager_xr_session_state, (PropertyRNA *)&rna_WindowManager_keyconfigs,
	-1, "xr_session_settings", 8650752, 0, 0, 0, 0, "XR Session Settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WindowManager_xr_session_settings_get, nullptr, nullptr, nullptr,&RNA_XrSessionSettings
};

PointerPropertyRNA rna_WindowManager_xr_session_state = {
	{(PropertyRNA *)&rna_WindowManager_is_interface_locked, (PropertyRNA *)&rna_WindowManager_xr_session_settings,
	-1, "xr_session_state", 8388608, 0, 0, 0, 0, "XR Session State",
	"Runtime state information about the VR session",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	WindowManager_xr_session_state_get, nullptr, nullptr, nullptr,&RNA_XrSessionState
};

BoolPropertyRNA rna_WindowManager_is_interface_locked = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_xr_session_state,
	-1, "is_interface_locked", 2, 0, 0, 4, 0, "Is Interface Locked",
	"If true, the interface is currently locked by a running job and data shouldn\'t be modified from application timers. Otherwise, the running job might conflict with the handler causing unexpected results or even crashes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmWindowManager, is_interface_locked), (RawPropertyType)2, nullptr},
	WindowManager_is_interface_locked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_WindowManager_fileselect_add_operator = {
	{nullptr, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

FunctionRNA rna_WindowManager_fileselect_add_func = {
	{(FunctionRNA *)&rna_WindowManager_modal_handler_add_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_fileselect_add_operator, (PropertyRNA *)&rna_WindowManager_fileselect_add_operator}},
	"fileselect_add", 9, "Opens a file selector with an operator. The string properties \'filepath\', \'filename\', \'directory\' and a \'files\' collection are assigned when present in the operator",
	WindowManager_fileselect_add_call,
	nullptr
};

PointerPropertyRNA rna_WindowManager_modal_handler_add_operator = {
	{(PropertyRNA *)&rna_WindowManager_modal_handler_add_handle, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

BoolPropertyRNA rna_WindowManager_modal_handler_add_handle = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_modal_handler_add_operator,
	-1, "handle", 3, 0, 2, 0, 0, "",
	"Whether adding the handler was successful",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_WindowManager_modal_handler_add_func = {
	{(FunctionRNA *)&rna_WindowManager_event_timer_add_func, (FunctionRNA *)&rna_WindowManager_fileselect_add_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_modal_handler_add_operator, (PropertyRNA *)&rna_WindowManager_modal_handler_add_handle}},
	"modal_handler_add", 25, "Add a modal handler to the window manager, for the given modal operator (called by invoke() with self, just before returning {\'RUNNING_MODAL\'})",
	WindowManager_modal_handler_add_call,
	(PropertyRNA *)&rna_WindowManager_modal_handler_add_handle
};

FloatPropertyRNA rna_WindowManager_event_timer_add_time_step = {
	{(PropertyRNA *)&rna_WindowManager_event_timer_add_window, nullptr,
	-1, "time_step", 3, 0, 1, 0, 0, "Time Step",
	"Interval in seconds between timer events",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_WindowManager_event_timer_add_window = {
	{(PropertyRNA *)&rna_WindowManager_event_timer_add_result, (PropertyRNA *)&rna_WindowManager_event_timer_add_time_step,
	-1, "window", 8388608, 0, 0, 0, 0, "",
	"Window to attach the timer to, or None",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Window
};

PointerPropertyRNA rna_WindowManager_event_timer_add_result = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_event_timer_add_window,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Timer
};

FunctionRNA rna_WindowManager_event_timer_add_func = {
	{(FunctionRNA *)&rna_WindowManager_event_timer_remove_func, (FunctionRNA *)&rna_WindowManager_modal_handler_add_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_event_timer_add_time_step, (PropertyRNA *)&rna_WindowManager_event_timer_add_result}},
	"event_timer_add", 0, "Add a timer to the given window, to generate periodic \'TIMER\' events",
	WindowManager_event_timer_add_call,
	(PropertyRNA *)&rna_WindowManager_event_timer_add_result
};

PointerPropertyRNA rna_WindowManager_event_timer_remove_timer = {
	{nullptr, nullptr,
	-1, "timer", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Timer
};

FunctionRNA rna_WindowManager_event_timer_remove_func = {
	{(FunctionRNA *)&rna_WindowManager_gizmo_group_type_ensure_func, (FunctionRNA *)&rna_WindowManager_event_timer_add_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_event_timer_remove_timer, (PropertyRNA *)&rna_WindowManager_event_timer_remove_timer}},
	"event_timer_remove", 0, "event_timer_remove",
	WindowManager_event_timer_remove_call,
	nullptr
};

StringPropertyRNA rna_WindowManager_gizmo_group_type_ensure_identifier = {
	{nullptr, nullptr,
	-1, "identifier", 262145, 0, 1, 0, 0, "",
	"Gizmo group type name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_WindowManager_gizmo_group_type_ensure_func = {
	{(FunctionRNA *)&rna_WindowManager_gizmo_group_type_unlink_delayed_func, (FunctionRNA *)&rna_WindowManager_event_timer_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_gizmo_group_type_ensure_identifier, (PropertyRNA *)&rna_WindowManager_gizmo_group_type_ensure_identifier}},
	"gizmo_group_type_ensure", 17, "Activate an existing widget group (when the persistent option isn\'t set)",
	WindowManager_gizmo_group_type_ensure_call,
	nullptr
};

StringPropertyRNA rna_WindowManager_gizmo_group_type_unlink_delayed_identifier = {
	{nullptr, nullptr,
	-1, "identifier", 262145, 0, 1, 0, 0, "",
	"Gizmo group type name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_WindowManager_gizmo_group_type_unlink_delayed_func = {
	{(FunctionRNA *)&rna_WindowManager_progress_begin_func, (FunctionRNA *)&rna_WindowManager_gizmo_group_type_ensure_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_gizmo_group_type_unlink_delayed_identifier, (PropertyRNA *)&rna_WindowManager_gizmo_group_type_unlink_delayed_identifier}},
	"gizmo_group_type_unlink_delayed", 17, "Unlink a widget group (when the persistent option is set)",
	WindowManager_gizmo_group_type_unlink_delayed_call,
	nullptr
};

FloatPropertyRNA rna_WindowManager_progress_begin_min = {
	{(PropertyRNA *)&rna_WindowManager_progress_begin_max, nullptr,
	-1, "min", 3, 0, 1, 0, 0, "min",
	"any value in range [0,9999]",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_WindowManager_progress_begin_max = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_progress_begin_min,
	-1, "max", 3, 0, 1, 0, 0, "max",
	"any value in range [min+1,9998]",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_WindowManager_progress_begin_func = {
	{(FunctionRNA *)&rna_WindowManager_progress_update_func, (FunctionRNA *)&rna_WindowManager_gizmo_group_type_unlink_delayed_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_progress_begin_min, (PropertyRNA *)&rna_WindowManager_progress_begin_max}},
	"progress_begin", 0, "Start progress report",
	WindowManager_progress_begin_call,
	nullptr
};

FloatPropertyRNA rna_WindowManager_progress_update_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "value",
	"Any value between min and max as set in progress_begin()",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_WindowManager_progress_update_func = {
	{(FunctionRNA *)&rna_WindowManager_progress_end_func, (FunctionRNA *)&rna_WindowManager_progress_begin_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_progress_update_value, (PropertyRNA *)&rna_WindowManager_progress_update_value}},
	"progress_update", 0, "Update the progress feedback",
	WindowManager_progress_update_call,
	nullptr
};

FunctionRNA rna_WindowManager_progress_end_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_props_popup_func, (FunctionRNA *)&rna_WindowManager_progress_update_func,
	nullptr,
	{nullptr, nullptr}},
	"progress_end", 0, "Terminate progress report",
	WindowManager_progress_end_call,
	nullptr
};

PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_popup_event, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

PointerPropertyRNA rna_WindowManager_invoke_props_popup_event = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_popup_result, (PropertyRNA *)&rna_WindowManager_invoke_props_popup_operator,
	-1, "event", 8388608, 0, 1, 0, 0, "",
	"Event",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

EnumPropertyRNA rna_WindowManager_invoke_props_popup_result = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_invoke_props_popup_event,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_WindowManager_invoke_props_popup_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_props_dialog_func, (FunctionRNA *)&rna_WindowManager_progress_end_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_invoke_props_popup_operator, (PropertyRNA *)&rna_WindowManager_invoke_props_popup_result}},
	"invoke_props_popup", 9, "Operator popup invoke (show operator properties and execute it automatically on changes)",
	WindowManager_invoke_props_popup_call,
	(PropertyRNA *)&rna_WindowManager_invoke_props_popup_result
};

PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_width, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

IntPropertyRNA rna_WindowManager_invoke_props_dialog_width = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_result, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_operator,
	-1, "width", 3, 0, 0, 0, 0, "",
	"Width of the popup",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 300, nullptr
};

EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_width,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_WindowManager_invoke_props_dialog_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_search_popup_func, (FunctionRNA *)&rna_WindowManager_invoke_props_popup_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_operator, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_result}},
	"invoke_props_dialog", 9, "Operator dialog (non-autoexec popup) invoke (show operator properties and only execute it on click on OK button)",
	WindowManager_invoke_props_dialog_call,
	(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_result
};

PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator = {
	{nullptr, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

FunctionRNA rna_WindowManager_invoke_search_popup_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_popup_func, (FunctionRNA *)&rna_WindowManager_invoke_props_dialog_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_invoke_search_popup_operator, (PropertyRNA *)&rna_WindowManager_invoke_search_popup_operator}},
	"invoke_search_popup", 9, "Operator search popup invoke which searches values of the operator\'s :class:`bpy.types.Operator.bl_property` (which must be an EnumProperty), executing it on confirmation",
	WindowManager_invoke_search_popup_call,
	nullptr
};

PointerPropertyRNA rna_WindowManager_invoke_popup_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_width, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

IntPropertyRNA rna_WindowManager_invoke_popup_width = {
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_result, (PropertyRNA *)&rna_WindowManager_invoke_popup_operator,
	-1, "width", 3, 0, 0, 0, 0, "",
	"Width of the popup",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 300, nullptr
};

EnumPropertyRNA rna_WindowManager_invoke_popup_result = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_invoke_popup_width,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_WindowManager_invoke_popup_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_confirm_func, (FunctionRNA *)&rna_WindowManager_invoke_search_popup_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_operator, (PropertyRNA *)&rna_WindowManager_invoke_popup_result}},
	"invoke_popup", 9, "Operator popup invoke (only shows operator\'s properties, without executing it)",
	WindowManager_invoke_popup_call,
	(PropertyRNA *)&rna_WindowManager_invoke_popup_result
};

PointerPropertyRNA rna_WindowManager_invoke_confirm_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_confirm_event, nullptr,
	-1, "operator", 8388608, 0, 1, 0, 0, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Operator
};

PointerPropertyRNA rna_WindowManager_invoke_confirm_event = {
	{(PropertyRNA *)&rna_WindowManager_invoke_confirm_result, (PropertyRNA *)&rna_WindowManager_invoke_confirm_operator,
	-1, "event", 8388608, 0, 1, 0, 0, "",
	"Event",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

EnumPropertyRNA rna_WindowManager_invoke_confirm_result = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_invoke_confirm_event,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_WindowManager_invoke_confirm_func = {
	{(FunctionRNA *)&rna_WindowManager_popmenu_begin__internal_func, (FunctionRNA *)&rna_WindowManager_invoke_popup_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_invoke_confirm_operator, (PropertyRNA *)&rna_WindowManager_invoke_confirm_result}},
	"invoke_confirm", 9, "Operator confirmation popup (only to let user confirm the execution, no operator properties shown)",
	WindowManager_invoke_confirm_call,
	(PropertyRNA *)&rna_WindowManager_invoke_confirm_result
};

StringPropertyRNA rna_WindowManager_popmenu_begin__internal_title = {
	{(PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_icon, nullptr,
	-1, "title", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_WindowManager_popmenu_begin__internal_icon = {
	{(PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_menu, (PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_title,
	-1, "icon", 3, 0, 0, 0, 0, "icon",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 838, 0
};

PointerPropertyRNA rna_WindowManager_popmenu_begin__internal_menu = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_icon,
	-1, "menu", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UIPopupMenu
};

FunctionRNA rna_WindowManager_popmenu_begin__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_popmenu_end__internal_func, (FunctionRNA *)&rna_WindowManager_invoke_confirm_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_title, (PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_menu}},
	"popmenu_begin__internal", 9, "popmenu_begin__internal",
	WindowManager_popmenu_begin__internal_call,
	(PropertyRNA *)&rna_WindowManager_popmenu_begin__internal_menu
};

PointerPropertyRNA rna_WindowManager_popmenu_end__internal_menu = {
	{nullptr, nullptr,
	-1, "menu", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UIPopupMenu
};

FunctionRNA rna_WindowManager_popmenu_end__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_popover_begin__internal_func, (FunctionRNA *)&rna_WindowManager_popmenu_begin__internal_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_popmenu_end__internal_menu, (PropertyRNA *)&rna_WindowManager_popmenu_end__internal_menu}},
	"popmenu_end__internal", 9, "popmenu_end__internal",
	WindowManager_popmenu_end__internal_call,
	nullptr
};

IntPropertyRNA rna_WindowManager_popover_begin__internal_ui_units_x = {
	{(PropertyRNA *)&rna_WindowManager_popover_begin__internal_menu, nullptr,
	-1, "ui_units_x", 3, 0, 0, 0, 0, "ui_units_x",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_WindowManager_popover_begin__internal_menu = {
	{(PropertyRNA *)&rna_WindowManager_popover_begin__internal_from_active_button, (PropertyRNA *)&rna_WindowManager_popover_begin__internal_ui_units_x,
	-1, "menu", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UIPopover
};

BoolPropertyRNA rna_WindowManager_popover_begin__internal_from_active_button = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_popover_begin__internal_menu,
	-1, "from_active_button", 3, 0, 0, 0, 0, "Use Button",
	"Use the active button for positioning",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_WindowManager_popover_begin__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_popover_end__internal_func, (FunctionRNA *)&rna_WindowManager_popmenu_end__internal_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_popover_begin__internal_ui_units_x, (PropertyRNA *)&rna_WindowManager_popover_begin__internal_from_active_button}},
	"popover_begin__internal", 9, "popover_begin__internal",
	WindowManager_popover_begin__internal_call,
	(PropertyRNA *)&rna_WindowManager_popover_begin__internal_menu
};

PointerPropertyRNA rna_WindowManager_popover_end__internal_menu = {
	{(PropertyRNA *)&rna_WindowManager_popover_end__internal_keymap, nullptr,
	-1, "menu", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UIPopover
};

PointerPropertyRNA rna_WindowManager_popover_end__internal_keymap = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_popover_end__internal_menu,
	-1, "keymap", 8388608, 0, 0, 0, 0, "Key Map",
	"Active key map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_WindowManager_popover_end__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_piemenu_begin__internal_func, (FunctionRNA *)&rna_WindowManager_popover_begin__internal_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_popover_end__internal_menu, (PropertyRNA *)&rna_WindowManager_popover_end__internal_keymap}},
	"popover_end__internal", 9, "popover_end__internal",
	WindowManager_popover_end__internal_call,
	nullptr
};

StringPropertyRNA rna_WindowManager_piemenu_begin__internal_title = {
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_icon, nullptr,
	-1, "title", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_WindowManager_piemenu_begin__internal_icon = {
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_event, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_title,
	-1, "icon", 3, 0, 0, 0, 0, "icon",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 838, 0
};

PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_event = {
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_menu_pie, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_icon,
	-1, "event", 8650752, 0, 4, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_menu_pie = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_event,
	-1, "menu_pie", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UIPieMenu
};

FunctionRNA rna_WindowManager_piemenu_begin__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_piemenu_end__internal_func, (FunctionRNA *)&rna_WindowManager_popover_end__internal_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_title, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_menu_pie}},
	"piemenu_begin__internal", 9, "piemenu_begin__internal",
	WindowManager_piemenu_begin__internal_call,
	(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_menu_pie
};

PointerPropertyRNA rna_WindowManager_piemenu_end__internal_menu = {
	{nullptr, nullptr,
	-1, "menu", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_UIPieMenu
};

FunctionRNA rna_WindowManager_piemenu_end__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_operator_properties_last_func, (FunctionRNA *)&rna_WindowManager_piemenu_begin__internal_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_piemenu_end__internal_menu, (PropertyRNA *)&rna_WindowManager_piemenu_end__internal_menu}},
	"piemenu_end__internal", 9, "piemenu_end__internal",
	WindowManager_piemenu_end__internal_call,
	nullptr
};

StringPropertyRNA rna_WindowManager_operator_properties_last_operator = {
	{(PropertyRNA *)&rna_WindowManager_operator_properties_last_result, nullptr,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_WindowManager_operator_properties_last_result = {
	{nullptr, (PropertyRNA *)&rna_WindowManager_operator_properties_last_operator,
	-1, "result", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

FunctionRNA rna_WindowManager_operator_properties_last_func = {
	{(FunctionRNA *)&rna_WindowManager_print_undo_steps_func, (FunctionRNA *)&rna_WindowManager_piemenu_end__internal_func,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_operator_properties_last_operator, (PropertyRNA *)&rna_WindowManager_operator_properties_last_result}},
	"operator_properties_last", 1, "operator_properties_last",
	WindowManager_operator_properties_last_call,
	(PropertyRNA *)&rna_WindowManager_operator_properties_last_result
};

FunctionRNA rna_WindowManager_print_undo_steps_func = {
	{(FunctionRNA *)&rna_WindowManager_tag_script_reload_func, (FunctionRNA *)&rna_WindowManager_operator_properties_last_func,
	nullptr,
	{nullptr, nullptr}},
	"print_undo_steps", 0, "print_undo_steps",
	WindowManager_print_undo_steps_call,
	nullptr
};

FunctionRNA rna_WindowManager_tag_script_reload_func = {
	{nullptr, (FunctionRNA *)&rna_WindowManager_print_undo_steps_func,
	nullptr,
	{nullptr, nullptr}},
	"tag_script_reload", 1, "Tag for refreshing the interface after scripts have been reloaded",
	WindowManager_tag_script_reload_call,
	nullptr
};

StructRNA RNA_WindowManager = {
	{(ContainerRNA *)&RNA_KeyConfigurations, (ContainerRNA *)&RNA_Stereo3dDisplay,
	nullptr,
	{(PropertyRNA *)&rna_WindowManager_operators, (PropertyRNA *)&rna_WindowManager_is_interface_locked}},
	"WindowManager", nullptr, nullptr, 517, nullptr, "Window Manager",
	"Window manager data-block defining open windows and other user interface data",
	"*", 17,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_WindowManager_fileselect_add_func, (FunctionRNA *)&rna_WindowManager_tag_script_reload_func}
};

/* KeyConfigs */
CollectionPropertyRNA rna_KeyConfigurations_rna_properties = {
	{(PropertyRNA *)&rna_KeyConfigurations_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigurations_rna_properties_begin, KeyConfigurations_rna_properties_next, KeyConfigurations_rna_properties_end, KeyConfigurations_rna_properties_get, nullptr, nullptr, KeyConfigurations_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyConfigurations_rna_type = {
	{(PropertyRNA *)&rna_KeyConfigurations_active, (PropertyRNA *)&rna_KeyConfigurations_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigurations_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_KeyConfigurations_active = {
	{(PropertyRNA *)&rna_KeyConfigurations_default, (PropertyRNA *)&rna_KeyConfigurations_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active KeyConfig",
	"Active key configuration (preset)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigurations_active_get, KeyConfigurations_active_set, nullptr, nullptr,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_default = {
	{(PropertyRNA *)&rna_KeyConfigurations_addon, (PropertyRNA *)&rna_KeyConfigurations_active,
	-1, "default", 8388608, 0, 0, 0, 0, "Default Key Configuration",
	"Default builtin key configuration",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigurations_default_value_get, nullptr, nullptr, nullptr,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_addon = {
	{(PropertyRNA *)&rna_KeyConfigurations_user, (PropertyRNA *)&rna_KeyConfigurations_default,
	-1, "addon", 8388608, 0, 0, 0, 0, "Add-on Key Configuration",
	"Key configuration that can be extended by add-ons, and is added to the active configuration when handling events",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigurations_addon_get, nullptr, nullptr, nullptr,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_user = {
	{nullptr, (PropertyRNA *)&rna_KeyConfigurations_addon,
	-1, "user", 8388608, 0, 0, 0, 0, "User Key Configuration",
	"Final key configuration that combines keymaps from the active and add-on configurations, and can be edited by the user",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigurations_user_get, nullptr, nullptr, nullptr,&RNA_KeyConfig
};

StringPropertyRNA rna_KeyConfigurations_new_name = {
	{(PropertyRNA *)&rna_KeyConfigurations_new_keyconfig, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_KeyConfigurations_new_keyconfig = {
	{nullptr, (PropertyRNA *)&rna_KeyConfigurations_new_name,
	-1, "keyconfig", 8388608, 0, 2, 0, 0, "Key Configuration",
	"Added key configuration",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyConfig
};

FunctionRNA rna_KeyConfigurations_new_func = {
	{(FunctionRNA *)&rna_KeyConfigurations_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfigurations_new_name, (PropertyRNA *)&rna_KeyConfigurations_new_keyconfig}},
	"new", 0, "new",
	KeyConfigurations_new_call,
	(PropertyRNA *)&rna_KeyConfigurations_new_keyconfig
};

PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig = {
	{nullptr, nullptr,
	-1, "keyconfig", 262144, 0, 5, 0, 0, "Key Configuration",
	"Removed key configuration",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyConfig
};

FunctionRNA rna_KeyConfigurations_remove_func = {
	{(FunctionRNA *)&rna_KeyConfigurations_find_item_from_operator_func, (FunctionRNA *)&rna_KeyConfigurations_new_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfigurations_remove_keyconfig, (PropertyRNA *)&rna_KeyConfigurations_remove_keyconfig}},
	"remove", 16, "remove",
	KeyConfigurations_remove_call,
	nullptr
};

StringPropertyRNA rna_KeyConfigurations_find_item_from_operator_idname = {
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_context, nullptr,
	-1, "idname", 262145, 0, 1, 0, 0, "Operator Identifier",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_context = {
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_properties, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_idname,
	-1, "context", 3, 0, 0, 0, 0, "context",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_context_items, 12, 0
};

PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_properties = {
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_include, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_context,
	-1, "properties", 8388608, 0, 4, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_include = {
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_exclude, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_properties,
	-1, "include", 2097155, 0, 0, 0, 0, "Include",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 226
};

EnumPropertyRNA rna_KeyConfigurations_find_item_from_operator_exclude = {
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_keymap, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_include,
	-1, "exclude", 2097155, 0, 0, 0, 0, "Exclude",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 0
};

PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_keymap = {
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_item, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_exclude,
	-1, "keymap", 8388608, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

PointerPropertyRNA rna_KeyConfigurations_find_item_from_operator_item = {
	{nullptr, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_keymap,
	-1, "item", 8388608, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyConfigurations_find_item_from_operator_func = {
	{(FunctionRNA *)&rna_KeyConfigurations_update_func, (FunctionRNA *)&rna_KeyConfigurations_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_idname, (PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_item}},
	"find_item_from_operator", 8, "find_item_from_operator",
	KeyConfigurations_find_item_from_operator_call,
	(PropertyRNA *)&rna_KeyConfigurations_find_item_from_operator_item
};

BoolPropertyRNA rna_KeyConfigurations_update_keep_properties = {
	{nullptr, nullptr,
	-1, "keep_properties", 3, 0, 0, 0, 0, "Keep Properties",
	"Operator properties are kept to allow the operators to be registered again in the future",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_KeyConfigurations_update_func = {
	{nullptr, (FunctionRNA *)&rna_KeyConfigurations_find_item_from_operator_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfigurations_update_keep_properties, (PropertyRNA *)&rna_KeyConfigurations_update_keep_properties}},
	"update", 0, "update",
	KeyConfigurations_update_call,
	nullptr
};

StructRNA RNA_KeyConfigurations = {
	{(ContainerRNA *)&RNA_KeyConfigPreferences, (ContainerRNA *)&RNA_WindowManager,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfigurations_rna_properties, (PropertyRNA *)&rna_KeyConfigurations_user}},
	"KeyConfigurations", nullptr, nullptr, 516, nullptr, "KeyConfigs",
	"Collection of KeyConfigs",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_KeyConfigurations_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyConfigurations_new_func, (FunctionRNA *)&rna_KeyConfigurations_update_func}
};

/* Key-Config Preferences */
CollectionPropertyRNA rna_KeyConfigPreferences_rna_properties = {
	{(PropertyRNA *)&rna_KeyConfigPreferences_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigPreferences_rna_properties_begin, KeyConfigPreferences_rna_properties_next, KeyConfigPreferences_rna_properties_end, KeyConfigPreferences_rna_properties_get, nullptr, nullptr, KeyConfigPreferences_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyConfigPreferences_rna_type = {
	{(PropertyRNA *)&rna_KeyConfigPreferences_bl_idname, (PropertyRNA *)&rna_KeyConfigPreferences_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigPreferences_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyConfigPreferences_bl_idname = {
	{nullptr, (PropertyRNA *)&rna_KeyConfigPreferences_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfigPreferences_bl_idname_get, KeyConfigPreferences_bl_idname_length, KeyConfigPreferences_bl_idname_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StructRNA RNA_KeyConfigPreferences = {
	{(ContainerRNA *)&RNA_KeyConfig, (ContainerRNA *)&RNA_KeyConfigurations,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfigPreferences_rna_properties, (PropertyRNA *)&rna_KeyConfigPreferences_bl_idname}},
	"KeyConfigPreferences", nullptr, nullptr, 644, nullptr, "Key-Config Preferences",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_KeyConfigPreferences_rna_properties,
	nullptr,
	nullptr,
	rna_wmKeyConfigPref_refine,
	nullptr,
	rna_wmKeyConfigPref_register,
	rna_wmKeyConfigPref_unregister,
	nullptr,
	rna_wmKeyConfigPref_idprops,
	{nullptr, nullptr}
};

/* Key Configuration */
CollectionPropertyRNA rna_KeyConfig_rna_properties = {
	{(PropertyRNA *)&rna_KeyConfig_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfig_rna_properties_begin, KeyConfig_rna_properties_next, KeyConfig_rna_properties_end, KeyConfig_rna_properties_get, nullptr, nullptr, KeyConfig_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyConfig_rna_type = {
	{(PropertyRNA *)&rna_KeyConfig_name, (PropertyRNA *)&rna_KeyConfig_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfig_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyConfig_name = {
	{(PropertyRNA *)&rna_KeyConfig_keymaps, (PropertyRNA *)&rna_KeyConfig_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the key configuration",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfig_name_get, KeyConfig_name_length, KeyConfig_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

CollectionPropertyRNA rna_KeyConfig_keymaps = {
	{(PropertyRNA *)&rna_KeyConfig_is_user_defined, (PropertyRNA *)&rna_KeyConfig_name,
	-1, "keymaps", 0, 0, 0, 0, 0, "Key Maps",
	"Key maps configured as part of this configuration",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_KeyMaps},
	KeyConfig_keymaps_begin, KeyConfig_keymaps_next, KeyConfig_keymaps_end, KeyConfig_keymaps_get, nullptr, KeyConfig_keymaps_lookup_int, KeyConfig_keymaps_lookup_string, nullptr, &RNA_KeyMap
};

BoolPropertyRNA rna_KeyConfig_is_user_defined = {
	{(PropertyRNA *)&rna_KeyConfig_preferences, (PropertyRNA *)&rna_KeyConfig_keymaps,
	-1, "is_user_defined", 2, 0, 0, 0, 0, "User Defined",
	"Indicates that a keyconfig was defined by the user",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfig_is_user_defined_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_KeyConfig_preferences = {
	{nullptr, (PropertyRNA *)&rna_KeyConfig_is_user_defined,
	-1, "preferences", 8388608, 0, 0, 0, 0, "preferences",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyConfig_preferences_get, nullptr, nullptr, nullptr,&RNA_KeyConfigPreferences
};

StructRNA RNA_KeyConfig = {
	{(ContainerRNA *)&RNA_KeyMaps, (ContainerRNA *)&RNA_KeyConfigPreferences,
	nullptr,
	{(PropertyRNA *)&rna_KeyConfig_rna_properties, (PropertyRNA *)&rna_KeyConfig_preferences}},
	"KeyConfig", nullptr, nullptr, 516, nullptr, "Key Configuration",
	"Input configuration, including keymaps",
	"*", 17,
	(PropertyRNA *)&rna_KeyConfig_name, (PropertyRNA *)&rna_KeyConfig_rna_properties,
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

/* Key Maps */
CollectionPropertyRNA rna_KeyMaps_rna_properties = {
	{(PropertyRNA *)&rna_KeyMaps_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMaps_rna_properties_begin, KeyMaps_rna_properties_next, KeyMaps_rna_properties_end, KeyMaps_rna_properties_get, nullptr, nullptr, KeyMaps_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyMaps_rna_type = {
	{nullptr, (PropertyRNA *)&rna_KeyMaps_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMaps_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyMaps_new_name = {
	{(PropertyRNA *)&rna_KeyMaps_new_space_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_KeyMaps_new_space_type = {
	{(PropertyRNA *)&rna_KeyMaps_new_region_type, (PropertyRNA *)&rna_KeyMaps_new_name,
	-1, "space_type", 3, 0, 0, 0, 0, "Space Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_KeyMaps_new_region_type = {
	{(PropertyRNA *)&rna_KeyMaps_new_modal, (PropertyRNA *)&rna_KeyMaps_new_space_type,
	-1, "region_type", 3, 0, 0, 0, 0, "Region Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 16, 0
};

BoolPropertyRNA rna_KeyMaps_new_modal = {
	{(PropertyRNA *)&rna_KeyMaps_new_tool, (PropertyRNA *)&rna_KeyMaps_new_region_type,
	-1, "modal", 3, 0, 0, 0, 0, "Modal",
	"Keymap for modal operators",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMaps_new_tool = {
	{(PropertyRNA *)&rna_KeyMaps_new_keymap, (PropertyRNA *)&rna_KeyMaps_new_modal,
	-1, "tool", 3, 0, 0, 0, 0, "Tool",
	"Keymap for active tools",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_KeyMaps_new_keymap = {
	{nullptr, (PropertyRNA *)&rna_KeyMaps_new_tool,
	-1, "keymap", 8388608, 0, 2, 0, 0, "Key Map",
	"Added key map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_new_func = {
	{(FunctionRNA *)&rna_KeyMaps_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyMaps_new_name, (PropertyRNA *)&rna_KeyMaps_new_keymap}},
	"new", 16, "Ensure the keymap exists. This will return the one with the given name/space type/region type, or create a new one if it does not exist yet.",
	KeyMaps_new_call,
	(PropertyRNA *)&rna_KeyMaps_new_keymap
};

PointerPropertyRNA rna_KeyMaps_remove_keymap = {
	{nullptr, nullptr,
	-1, "keymap", 262144, 0, 5, 0, 0, "Key Map",
	"Removed key map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_remove_func = {
	{(FunctionRNA *)&rna_KeyMaps_clear_func, (FunctionRNA *)&rna_KeyMaps_new_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMaps_remove_keymap, (PropertyRNA *)&rna_KeyMaps_remove_keymap}},
	"remove", 16, "remove",
	KeyMaps_remove_call,
	nullptr
};

FunctionRNA rna_KeyMaps_clear_func = {
	{(FunctionRNA *)&rna_KeyMaps_find_func, (FunctionRNA *)&rna_KeyMaps_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all keymaps.",
	KeyMaps_clear_call,
	nullptr
};

StringPropertyRNA rna_KeyMaps_find_name = {
	{(PropertyRNA *)&rna_KeyMaps_find_space_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_KeyMaps_find_space_type = {
	{(PropertyRNA *)&rna_KeyMaps_find_region_type, (PropertyRNA *)&rna_KeyMaps_find_name,
	-1, "space_type", 3, 0, 0, 0, 0, "Space Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_KeyMaps_find_region_type = {
	{(PropertyRNA *)&rna_KeyMaps_find_keymap, (PropertyRNA *)&rna_KeyMaps_find_space_type,
	-1, "region_type", 3, 0, 0, 0, 0, "Region Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 16, 0
};

PointerPropertyRNA rna_KeyMaps_find_keymap = {
	{nullptr, (PropertyRNA *)&rna_KeyMaps_find_region_type,
	-1, "keymap", 8388608, 0, 2, 0, 0, "Key Map",
	"Corresponding key map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_find_func = {
	{(FunctionRNA *)&rna_KeyMaps_find_modal_func, (FunctionRNA *)&rna_KeyMaps_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMaps_find_name, (PropertyRNA *)&rna_KeyMaps_find_keymap}},
	"find", 0, "find",
	KeyMaps_find_call,
	(PropertyRNA *)&rna_KeyMaps_find_keymap
};

StringPropertyRNA rna_KeyMaps_find_modal_name = {
	{(PropertyRNA *)&rna_KeyMaps_find_modal_keymap, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Operator Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_KeyMaps_find_modal_keymap = {
	{nullptr, (PropertyRNA *)&rna_KeyMaps_find_modal_name,
	-1, "keymap", 8388608, 0, 2, 0, 0, "Key Map",
	"Corresponding key map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_find_modal_func = {
	{nullptr, (FunctionRNA *)&rna_KeyMaps_find_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMaps_find_modal_name, (PropertyRNA *)&rna_KeyMaps_find_modal_keymap}},
	"find_modal", 0, "find_modal",
	KeyMaps_find_modal_call,
	(PropertyRNA *)&rna_KeyMaps_find_modal_keymap
};

StructRNA RNA_KeyMaps = {
	{(ContainerRNA *)&RNA_KeyMap, (ContainerRNA *)&RNA_KeyConfig,
	nullptr,
	{(PropertyRNA *)&rna_KeyMaps_rna_properties, (PropertyRNA *)&rna_KeyMaps_rna_type}},
	"KeyMaps", nullptr, nullptr, 516, nullptr, "Key Maps",
	"Collection of keymaps",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_KeyMaps_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyMaps_new_func, (FunctionRNA *)&rna_KeyMaps_find_modal_func}
};

/* Key Map */
CollectionPropertyRNA rna_KeyMap_rna_properties = {
	{(PropertyRNA *)&rna_KeyMap_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_rna_properties_begin, KeyMap_rna_properties_next, KeyMap_rna_properties_end, KeyMap_rna_properties_get, nullptr, nullptr, KeyMap_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyMap_rna_type = {
	{(PropertyRNA *)&rna_KeyMap_name, (PropertyRNA *)&rna_KeyMap_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyMap_name = {
	{(PropertyRNA *)&rna_KeyMap_bl_owner_id, (PropertyRNA *)&rna_KeyMap_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Name of the key map",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_name_get, KeyMap_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_KeyMap_bl_owner_id = {
	{(PropertyRNA *)&rna_KeyMap_space_type, (PropertyRNA *)&rna_KeyMap_name,
	-1, "bl_owner_id", 262145, 0, 0, 0, 0, "Owner",
	"Internal owner",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_bl_owner_id_get, KeyMap_bl_owner_id_length, KeyMap_bl_owner_id_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

EnumPropertyRNA rna_KeyMap_space_type = {
	{(PropertyRNA *)&rna_KeyMap_region_type, (PropertyRNA *)&rna_KeyMap_bl_owner_id,
	-1, "space_type", 2, 0, 0, 4, 0, "Space Type",
	"Optional space type keymap is associated with",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMap, spaceid), (RawPropertyType)1, nullptr},
	KeyMap_space_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_KeyMap_region_type = {
	{(PropertyRNA *)&rna_KeyMap_keymap_items, (PropertyRNA *)&rna_KeyMap_space_type,
	-1, "region_type", 2, 0, 0, 4, 0, "Region Type",
	"Optional region type keymap is associated with",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMap, regionid), (RawPropertyType)1, nullptr},
	KeyMap_region_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 16, 0
};

CollectionPropertyRNA rna_KeyMap_keymap_items = {
	{(PropertyRNA *)&rna_KeyMap_is_user_modified, (PropertyRNA *)&rna_KeyMap_region_type,
	-1, "keymap_items", 0, 0, 0, 0, 0, "Items",
	"Items in the keymap, linking an operator to an input event",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_KeyMapItems},
	KeyMap_keymap_items_begin, KeyMap_keymap_items_next, KeyMap_keymap_items_end, KeyMap_keymap_items_get, nullptr, KeyMap_keymap_items_lookup_int, KeyMap_keymap_items_lookup_string, nullptr, &RNA_KeyMapItem
};

BoolPropertyRNA rna_KeyMap_is_user_modified = {
	{(PropertyRNA *)&rna_KeyMap_is_modal, (PropertyRNA *)&rna_KeyMap_keymap_items,
	-1, "is_user_modified", 3, 0, 0, 0, 0, "User Defined",
	"Keymap is defined by the user",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_is_user_modified_get, KeyMap_is_user_modified_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMap_is_modal = {
	{(PropertyRNA *)&rna_KeyMap_show_expanded_items, (PropertyRNA *)&rna_KeyMap_is_user_modified,
	-1, "is_modal", 2, 0, 0, 0, 0, "Modal Keymap",
	"Indicates that a keymap is used for translate modal events for an operator",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_is_modal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMap_show_expanded_items = {
	{(PropertyRNA *)&rna_KeyMap_show_expanded_children, (PropertyRNA *)&rna_KeyMap_is_modal,
	-1, "show_expanded_items", 4099, 0, 0, 0, 0, "Items Expanded",
	"Expanded in the user interface",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_show_expanded_items_get, KeyMap_show_expanded_items_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMap_show_expanded_children = {
	{(PropertyRNA *)&rna_KeyMap_modal_event_values, (PropertyRNA *)&rna_KeyMap_show_expanded_items,
	-1, "show_expanded_children", 4099, 0, 0, 0, 0, "Children Expanded",
	"Children expanded in the user interface",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_show_expanded_children_get, KeyMap_show_expanded_children_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_KeyMap_modal_event_values = {
	{nullptr, (PropertyRNA *)&rna_KeyMap_show_expanded_children,
	-1, "modal_event_values", 0, 0, 0, 8, 0, "Modal Events",
	"Give access to the possible event values of this modal keymap\'s items (#KeyMapItem.propvalue), for API introspection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMap_modal_event_values_begin, KeyMap_modal_event_values_next, KeyMap_modal_event_values_end, KeyMap_modal_event_values_get, nullptr, nullptr, nullptr, nullptr, &RNA_EnumPropertyItem
};

PointerPropertyRNA rna_KeyMap_active_keymap = {
	{nullptr, nullptr,
	-1, "keymap", 8388608, 0, 2, 0, 0, "Key Map",
	"Active key map",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMap
};

FunctionRNA rna_KeyMap_active_func = {
	{(FunctionRNA *)&rna_KeyMap_restore_to_default_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyMap_active_keymap, (PropertyRNA *)&rna_KeyMap_active_keymap}},
	"active", 8, "active",
	KeyMap_active_call,
	(PropertyRNA *)&rna_KeyMap_active_keymap
};

FunctionRNA rna_KeyMap_restore_to_default_func = {
	{(FunctionRNA *)&rna_KeyMap_restore_item_to_default_func, (FunctionRNA *)&rna_KeyMap_active_func,
	nullptr,
	{nullptr, nullptr}},
	"restore_to_default", 8, "restore_to_default",
	KeyMap_restore_to_default_call,
	nullptr
};

PointerPropertyRNA rna_KeyMap_restore_item_to_default_item = {
	{nullptr, nullptr,
	-1, "item", 8650752, 0, 1, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMap_restore_item_to_default_func = {
	{nullptr, (FunctionRNA *)&rna_KeyMap_restore_to_default_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMap_restore_item_to_default_item, (PropertyRNA *)&rna_KeyMap_restore_item_to_default_item}},
	"restore_item_to_default", 8, "restore_item_to_default",
	KeyMap_restore_item_to_default_call,
	nullptr
};

StructRNA RNA_KeyMap = {
	{(ContainerRNA *)&RNA_KeyMapItems, (ContainerRNA *)&RNA_KeyMaps,
	nullptr,
	{(PropertyRNA *)&rna_KeyMap_rna_properties, (PropertyRNA *)&rna_KeyMap_modal_event_values}},
	"KeyMap", nullptr, nullptr, 516, nullptr, "Key Map",
	"Input configuration, including keymaps",
	"*", 17,
	(PropertyRNA *)&rna_KeyMap_name, (PropertyRNA *)&rna_KeyMap_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyMap_active_func, (FunctionRNA *)&rna_KeyMap_restore_item_to_default_func}
};

/* KeyMap Items */
CollectionPropertyRNA rna_KeyMapItems_rna_properties = {
	{(PropertyRNA *)&rna_KeyMapItems_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItems_rna_properties_begin, KeyMapItems_rna_properties_next, KeyMapItems_rna_properties_end, KeyMapItems_rna_properties_get, nullptr, nullptr, KeyMapItems_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyMapItems_rna_type = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItems_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyMapItems_new_idname = {
	{(PropertyRNA *)&rna_KeyMapItems_new_type, nullptr,
	-1, "idname", 262145, 0, 1, 0, 0, "Operator Identifier",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_KeyMapItems_new_type = {
	{(PropertyRNA *)&rna_KeyMapItems_new_value, (PropertyRNA *)&rna_KeyMapItems_new_idname,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_KeyMapItems_new_value = {
	{(PropertyRNA *)&rna_KeyMapItems_new_any, (PropertyRNA *)&rna_KeyMapItems_new_type,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
};

BoolPropertyRNA rna_KeyMapItems_new_any = {
	{(PropertyRNA *)&rna_KeyMapItems_new_shift, (PropertyRNA *)&rna_KeyMapItems_new_value,
	-1, "any", 3, 0, 0, 0, 0, "Any",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_shift = {
	{(PropertyRNA *)&rna_KeyMapItems_new_ctrl, (PropertyRNA *)&rna_KeyMapItems_new_any,
	-1, "shift", 3, 0, 0, 0, 0, "Shift",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_ctrl = {
	{(PropertyRNA *)&rna_KeyMapItems_new_alt, (PropertyRNA *)&rna_KeyMapItems_new_shift,
	-1, "ctrl", 3, 0, 0, 0, 0, "Ctrl",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_alt = {
	{(PropertyRNA *)&rna_KeyMapItems_new_oskey, (PropertyRNA *)&rna_KeyMapItems_new_ctrl,
	-1, "alt", 3, 0, 0, 0, 0, "Alt",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_oskey = {
	{(PropertyRNA *)&rna_KeyMapItems_new_key_modifier, (PropertyRNA *)&rna_KeyMapItems_new_alt,
	-1, "oskey", 3, 0, 0, 0, 0, "OS Key",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

EnumPropertyRNA rna_KeyMapItems_new_key_modifier = {
	{(PropertyRNA *)&rna_KeyMapItems_new_direction, (PropertyRNA *)&rna_KeyMapItems_new_oskey,
	-1, "key_modifier", 3, 0, 0, 0, 0, "Key Modifier",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_KeyMapItems_new_direction = {
	{(PropertyRNA *)&rna_KeyMapItems_new_repeat, (PropertyRNA *)&rna_KeyMapItems_new_key_modifier,
	-1, "direction", 3, 0, 0, 0, 0, "Direction",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
};

BoolPropertyRNA rna_KeyMapItems_new_repeat = {
	{(PropertyRNA *)&rna_KeyMapItems_new_head, (PropertyRNA *)&rna_KeyMapItems_new_direction,
	-1, "repeat", 3, 0, 0, 0, 0, "Repeat",
	"When set, accept key-repeat events",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItems_new_head = {
	{(PropertyRNA *)&rna_KeyMapItems_new_item, (PropertyRNA *)&rna_KeyMapItems_new_repeat,
	-1, "head", 3, 0, 0, 0, 0, "At Head",
	"Force item to be added at start (not end) of key map so that it doesn\'t get blocked by an existing key map item",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_KeyMapItems_new_item = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_new_head,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"Added key map item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_func = {
	{(FunctionRNA *)&rna_KeyMapItems_new_modal_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_new_idname, (PropertyRNA *)&rna_KeyMapItems_new_item}},
	"new", 16, "new",
	KeyMapItems_new_call,
	(PropertyRNA *)&rna_KeyMapItems_new_item
};

StringPropertyRNA rna_KeyMapItems_new_modal_propvalue = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_type, nullptr,
	-1, "propvalue", 262145, 0, 1, 0, 0, "Property Value",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

EnumPropertyRNA rna_KeyMapItems_new_modal_type = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_value, (PropertyRNA *)&rna_KeyMapItems_new_modal_propvalue,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_KeyMapItems_new_modal_value = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_any, (PropertyRNA *)&rna_KeyMapItems_new_modal_type,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
};

BoolPropertyRNA rna_KeyMapItems_new_modal_any = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_shift, (PropertyRNA *)&rna_KeyMapItems_new_modal_value,
	-1, "any", 3, 0, 0, 0, 0, "Any",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_modal_shift = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_ctrl, (PropertyRNA *)&rna_KeyMapItems_new_modal_any,
	-1, "shift", 3, 0, 0, 0, 0, "Shift",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_modal_ctrl = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_alt, (PropertyRNA *)&rna_KeyMapItems_new_modal_shift,
	-1, "ctrl", 3, 0, 0, 0, 0, "Ctrl",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_modal_alt = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_oskey, (PropertyRNA *)&rna_KeyMapItems_new_modal_ctrl,
	-1, "alt", 3, 0, 0, 0, 0, "Alt",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItems_new_modal_oskey = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_key_modifier, (PropertyRNA *)&rna_KeyMapItems_new_modal_alt,
	-1, "oskey", 3, 0, 0, 0, 0, "OS Key",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_direction, (PropertyRNA *)&rna_KeyMapItems_new_modal_oskey,
	-1, "key_modifier", 3, 0, 0, 0, 0, "Key Modifier",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_KeyMapItems_new_modal_direction = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_repeat, (PropertyRNA *)&rna_KeyMapItems_new_modal_key_modifier,
	-1, "direction", 3, 0, 0, 0, 0, "Direction",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
};

BoolPropertyRNA rna_KeyMapItems_new_modal_repeat = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_item, (PropertyRNA *)&rna_KeyMapItems_new_modal_direction,
	-1, "repeat", 3, 0, 0, 0, 0, "Repeat",
	"When set, accept key-repeat events",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_KeyMapItems_new_modal_item = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_new_modal_repeat,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"Added key map item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_modal_func = {
	{(FunctionRNA *)&rna_KeyMapItems_new_from_item_func, (FunctionRNA *)&rna_KeyMapItems_new_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_propvalue, (PropertyRNA *)&rna_KeyMapItems_new_modal_item}},
	"new_modal", 16, "new_modal",
	KeyMapItems_new_modal_call,
	(PropertyRNA *)&rna_KeyMapItems_new_modal_item
};

PointerPropertyRNA rna_KeyMapItems_new_from_item_item = {
	{(PropertyRNA *)&rna_KeyMapItems_new_from_item_head, nullptr,
	-1, "item", 8650752, 0, 1, 0, 0, "Item",
	"Item to use as a reference",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

BoolPropertyRNA rna_KeyMapItems_new_from_item_head = {
	{(PropertyRNA *)&rna_KeyMapItems_new_from_item_result, (PropertyRNA *)&rna_KeyMapItems_new_from_item_item,
	-1, "head", 3, 0, 0, 0, 0, "At Head",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_KeyMapItems_new_from_item_result = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_new_from_item_head,
	-1, "result", 8388608, 0, 2, 0, 0, "Item",
	"Added key map item",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_from_item_func = {
	{(FunctionRNA *)&rna_KeyMapItems_remove_func, (FunctionRNA *)&rna_KeyMapItems_new_modal_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_new_from_item_item, (PropertyRNA *)&rna_KeyMapItems_new_from_item_result}},
	"new_from_item", 16, "new_from_item",
	KeyMapItems_new_from_item_call,
	(PropertyRNA *)&rna_KeyMapItems_new_from_item_result
};

PointerPropertyRNA rna_KeyMapItems_remove_item = {
	{nullptr, nullptr,
	-1, "item", 262144, 0, 5, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_remove_func = {
	{(FunctionRNA *)&rna_KeyMapItems_from_id_func, (FunctionRNA *)&rna_KeyMapItems_new_from_item_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_remove_item, (PropertyRNA *)&rna_KeyMapItems_remove_item}},
	"remove", 16, "remove",
	KeyMapItems_remove_call,
	nullptr
};

IntPropertyRNA rna_KeyMapItems_from_id_id = {
	{(PropertyRNA *)&rna_KeyMapItems_from_id_item, nullptr,
	-1, "id", 3, 0, 1, 0, 0, "id",
	"ID of the item",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_KeyMapItems_from_id_item = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_from_id_id,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_from_id_func = {
	{(FunctionRNA *)&rna_KeyMapItems_find_from_operator_func, (FunctionRNA *)&rna_KeyMapItems_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_from_id_id, (PropertyRNA *)&rna_KeyMapItems_from_id_item}},
	"from_id", 0, "from_id",
	KeyMapItems_from_id_call,
	(PropertyRNA *)&rna_KeyMapItems_from_id_item
};

StringPropertyRNA rna_KeyMapItems_find_from_operator_idname = {
	{(PropertyRNA *)&rna_KeyMapItems_find_from_operator_properties, nullptr,
	-1, "idname", 262145, 0, 1, 0, 0, "Operator Identifier",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_KeyMapItems_find_from_operator_properties = {
	{(PropertyRNA *)&rna_KeyMapItems_find_from_operator_include, (PropertyRNA *)&rna_KeyMapItems_find_from_operator_idname,
	-1, "properties", 8388608, 0, 4, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

EnumPropertyRNA rna_KeyMapItems_find_from_operator_include = {
	{(PropertyRNA *)&rna_KeyMapItems_find_from_operator_exclude, (PropertyRNA *)&rna_KeyMapItems_find_from_operator_properties,
	-1, "include", 2097155, 0, 0, 0, 0, "Include",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 226
};

EnumPropertyRNA rna_KeyMapItems_find_from_operator_exclude = {
	{(PropertyRNA *)&rna_KeyMapItems_find_from_operator_item, (PropertyRNA *)&rna_KeyMapItems_find_from_operator_include,
	-1, "exclude", 2097155, 0, 0, 0, 0, "Exclude",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_event_type_mask_items, 8, 0
};

PointerPropertyRNA rna_KeyMapItems_find_from_operator_item = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_find_from_operator_exclude,
	-1, "item", 8388608, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_find_from_operator_func = {
	{(FunctionRNA *)&rna_KeyMapItems_match_event_func, (FunctionRNA *)&rna_KeyMapItems_from_id_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_find_from_operator_idname, (PropertyRNA *)&rna_KeyMapItems_find_from_operator_item}},
	"find_from_operator", 2048, "find_from_operator",
	KeyMapItems_find_from_operator_call,
	(PropertyRNA *)&rna_KeyMapItems_find_from_operator_item
};

PointerPropertyRNA rna_KeyMapItems_match_event_event = {
	{(PropertyRNA *)&rna_KeyMapItems_match_event_item, nullptr,
	-1, "event", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Event
};

PointerPropertyRNA rna_KeyMapItems_match_event_item = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItems_match_event_event,
	-1, "item", 8388608, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_match_event_func = {
	{nullptr, (FunctionRNA *)&rna_KeyMapItems_find_from_operator_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_match_event_event, (PropertyRNA *)&rna_KeyMapItems_match_event_item}},
	"match_event", 2056, "match_event",
	KeyMapItems_match_event_call,
	(PropertyRNA *)&rna_KeyMapItems_match_event_item
};

StructRNA RNA_KeyMapItems = {
	{(ContainerRNA *)&RNA_KeyMapItem, (ContainerRNA *)&RNA_KeyMap,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItems_rna_properties, (PropertyRNA *)&rna_KeyMapItems_rna_type}},
	"KeyMapItems", nullptr, nullptr, 516, nullptr, "KeyMap Items",
	"Collection of keymap items",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_KeyMapItems_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyMapItems_new_func, (FunctionRNA *)&rna_KeyMapItems_match_event_func}
};

/* Key Map Item */
CollectionPropertyRNA rna_KeyMapItem_rna_properties = {
	{(PropertyRNA *)&rna_KeyMapItem_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_rna_properties_begin, KeyMapItem_rna_properties_next, KeyMapItem_rna_properties_end, KeyMapItem_rna_properties_get, nullptr, nullptr, KeyMapItem_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_KeyMapItem_rna_type = {
	{(PropertyRNA *)&rna_KeyMapItem_idname, (PropertyRNA *)&rna_KeyMapItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_KeyMapItem_idname = {
	{(PropertyRNA *)&rna_KeyMapItem_name, (PropertyRNA *)&rna_KeyMapItem_rna_type,
	-1, "idname", 262145, 0, 0, 0, 0, "Identifier",
	"Identifier of operator to call on input event",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_idname_get, KeyMapItem_idname_length, KeyMapItem_idname_set, nullptr, nullptr, nullptr, KeyMapItem_idname_search, (eStringPropertySearchFlag)7, 64, ""
};

StringPropertyRNA rna_KeyMapItem_name = {
	{(PropertyRNA *)&rna_KeyMapItem_properties, (PropertyRNA *)&rna_KeyMapItem_idname,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Name of operator (translated) to call on input event",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_name_get, KeyMapItem_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_KeyMapItem_properties = {
	{(PropertyRNA *)&rna_KeyMapItem_map_type, (PropertyRNA *)&rna_KeyMapItem_name,
	-1, "properties", 8388608, 0, 0, 0, 0, "Properties",
	"Properties to set when the operator is called",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_properties_get, nullptr, nullptr, nullptr,&RNA_OperatorProperties
};

static const EnumPropertyItem rna_KeyMapItem_map_type_items[6] = {
	{0, "KEYBOARD", 0, "Keyboard", ""},
	{1, "MOUSE", 0, "Mouse", ""},
	{5, "NDOF", 0, "NDOF", ""},
	{3, "TEXTINPUT", 0, "Text Input", ""},
	{4, "TIMER", 0, "Timer", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_KeyMapItem_map_type = {
	{(PropertyRNA *)&rna_KeyMapItem_type, (PropertyRNA *)&rna_KeyMapItem_properties,
	-1, "map_type", 3, 0, 0, 0, 0, "Map Type",
	"Type of event mapping",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_map_type_get, KeyMapItem_map_type_set, nullptr, nullptr, nullptr, rna_KeyMapItem_map_type_items, 5, 0
};

EnumPropertyRNA rna_KeyMapItem_type = {
	{(PropertyRNA *)&rna_KeyMapItem_value, (PropertyRNA *)&rna_KeyMapItem_map_type,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Type of event",
	0, "UI_Events_KeyMaps",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, type), (RawPropertyType)1, nullptr},
	KeyMapItem_type_get, KeyMapItem_type_set, rna_KeyMapItem_type_itemf, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

EnumPropertyRNA rna_KeyMapItem_value = {
	{(PropertyRNA *)&rna_KeyMapItem_direction, (PropertyRNA *)&rna_KeyMapItem_type,
	-1, "value", 3, 0, 0, 0, 0, "Value",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_value_get, KeyMapItem_value_set, nullptr, nullptr, nullptr, rna_enum_event_value_items, 7, 0
};

EnumPropertyRNA rna_KeyMapItem_direction = {
	{(PropertyRNA *)&rna_KeyMapItem_id, (PropertyRNA *)&rna_KeyMapItem_value,
	-1, "direction", 3, 0, 0, 0, 0, "Direction",
	"The direction (only applies to drag events)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_direction_get, KeyMapItem_direction_set, nullptr, nullptr, nullptr, rna_enum_event_direction_items, 9, -1
};

IntPropertyRNA rna_KeyMapItem_id = {
	{(PropertyRNA *)&rna_KeyMapItem_any, (PropertyRNA *)&rna_KeyMapItem_direction,
	-1, "id", 2, 0, 0, 4, 0, "ID",
	"ID of the item",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, id), (RawPropertyType)1, nullptr},
	KeyMapItem_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_any = {
	{(PropertyRNA *)&rna_KeyMapItem_shift, (PropertyRNA *)&rna_KeyMapItem_id,
	-1, "any", 3, 0, 0, 0, 0, "Any",
	"Any modifier keys pressed",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_any_get, KeyMapItem_any_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_KeyMapItem_shift = {
	{(PropertyRNA *)&rna_KeyMapItem_ctrl, (PropertyRNA *)&rna_KeyMapItem_any,
	-1, "shift", 3, 0, 0, 4, 0, "Shift",
	"Shift key pressed, -1 for any state",
	0, "WindowManager",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, shift), (RawPropertyType)1, nullptr},
	KeyMapItem_shift_get, KeyMapItem_shift_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItem_ctrl = {
	{(PropertyRNA *)&rna_KeyMapItem_alt, (PropertyRNA *)&rna_KeyMapItem_shift,
	-1, "ctrl", 3, 0, 0, 4, 0, "Ctrl",
	"Control key pressed, -1 for any state",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, ctrl), (RawPropertyType)1, nullptr},
	KeyMapItem_ctrl_get, KeyMapItem_ctrl_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItem_alt = {
	{(PropertyRNA *)&rna_KeyMapItem_oskey, (PropertyRNA *)&rna_KeyMapItem_ctrl,
	-1, "alt", 3, 0, 0, 4, 0, "Alt",
	"Alt key pressed, -1 for any state",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, alt), (RawPropertyType)1, nullptr},
	KeyMapItem_alt_get, KeyMapItem_alt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

IntPropertyRNA rna_KeyMapItem_oskey = {
	{(PropertyRNA *)&rna_KeyMapItem_shift_ui, (PropertyRNA *)&rna_KeyMapItem_alt,
	-1, "oskey", 3, 0, 0, 4, 0, "OS Key",
	"Operating system key pressed, -1 for any state",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, oskey), (RawPropertyType)1, nullptr},
	KeyMapItem_oskey_get, KeyMapItem_oskey_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 1, -1, 1, 1, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_shift_ui = {
	{(PropertyRNA *)&rna_KeyMapItem_ctrl_ui, (PropertyRNA *)&rna_KeyMapItem_oskey,
	-1, "shift_ui", 3, 0, 0, 0, 0, "Shift",
	"Shift key pressed",
	0, "WindowManager",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_shift_ui_get, KeyMapItem_shift_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_ctrl_ui = {
	{(PropertyRNA *)&rna_KeyMapItem_alt_ui, (PropertyRNA *)&rna_KeyMapItem_shift_ui,
	-1, "ctrl_ui", 3, 0, 0, 0, 0, "Ctrl",
	"Control key pressed",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_ctrl_ui_get, KeyMapItem_ctrl_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_alt_ui = {
	{(PropertyRNA *)&rna_KeyMapItem_oskey_ui, (PropertyRNA *)&rna_KeyMapItem_ctrl_ui,
	-1, "alt_ui", 3, 0, 0, 0, 0, "Alt",
	"Alt key pressed",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_alt_ui_get, KeyMapItem_alt_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_oskey_ui = {
	{(PropertyRNA *)&rna_KeyMapItem_key_modifier, (PropertyRNA *)&rna_KeyMapItem_alt_ui,
	-1, "oskey_ui", 3, 0, 0, 0, 0, "OS Key",
	"Operating system key pressed",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_oskey_ui_get, KeyMapItem_oskey_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_KeyMapItem_key_modifier = {
	{(PropertyRNA *)&rna_KeyMapItem_repeat, (PropertyRNA *)&rna_KeyMapItem_oskey_ui,
	-1, "key_modifier", 3, 0, 0, 0, 0, "Key Modifier",
	"Regular key pressed as a modifier",
	0, "UI_Events_KeyMaps",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_key_modifier_get, KeyMapItem_key_modifier_set, nullptr, nullptr, nullptr, rna_enum_event_type_items, 201, 0
};

BoolPropertyRNA rna_KeyMapItem_repeat = {
	{(PropertyRNA *)&rna_KeyMapItem_show_expanded, (PropertyRNA *)&rna_KeyMapItem_key_modifier,
	-1, "repeat", 1073741827, 0, 0, 0, 0, "Repeat",
	"Active on key-repeat events (when a key is held)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_repeat_get, KeyMapItem_repeat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_show_expanded = {
	{(PropertyRNA *)&rna_KeyMapItem_propvalue, (PropertyRNA *)&rna_KeyMapItem_repeat,
	-1, "show_expanded", 1073745923, 0, 0, 0, 0, "Expanded",
	"Show key map event and property details in the user interface",
	10, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_show_expanded_get, KeyMapItem_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_KeyMapItem_propvalue = {
	{(PropertyRNA *)&rna_KeyMapItem_active, (PropertyRNA *)&rna_KeyMapItem_show_expanded,
	-1, "propvalue", 3, 0, 0, 4, 0, "Property Value",
	"The value this event translates to in a modal keymap",
	0, "WindowManager",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(wmKeyMapItem, propvalue), (RawPropertyType)1, nullptr},
	KeyMapItem_propvalue_get, KeyMapItem_propvalue_set, rna_KeyMapItem_propvalue_itemf, nullptr, nullptr, rna_enum_keymap_propvalue_items, 1, 0
};

BoolPropertyRNA rna_KeyMapItem_active = {
	{(PropertyRNA *)&rna_KeyMapItem_is_user_modified, (PropertyRNA *)&rna_KeyMapItem_propvalue,
	-1, "active", 4099, 0, 0, 0, 0, "Active",
	"Activate or deactivate item",
	38, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_active_get, KeyMapItem_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_is_user_modified = {
	{(PropertyRNA *)&rna_KeyMapItem_is_user_defined, (PropertyRNA *)&rna_KeyMapItem_active,
	-1, "is_user_modified", 2, 0, 0, 0, 0, "User Modified",
	"Is this keymap item modified by the user",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_is_user_modified_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_KeyMapItem_is_user_defined = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItem_is_user_modified,
	-1, "is_user_defined", 2, 0, 0, 0, 0, "User Defined",
	"Is this keymap item user defined (doesn\'t just replace a builtin item)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	KeyMapItem_is_user_defined_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_KeyMapItem_compare_item = {
	{(PropertyRNA *)&rna_KeyMapItem_compare_result, nullptr,
	-1, "item", 8388608, 0, 1, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_KeyMapItem
};

BoolPropertyRNA rna_KeyMapItem_compare_result = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItem_compare_item,
	-1, "result", 3, 0, 2, 0, 0, "Comparison result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_KeyMapItem_compare_func = {
	{(FunctionRNA *)&rna_KeyMapItem_to_string_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItem_compare_item, (PropertyRNA *)&rna_KeyMapItem_compare_result}},
	"compare", 0, "compare",
	KeyMapItem_compare_call,
	(PropertyRNA *)&rna_KeyMapItem_compare_result
};

BoolPropertyRNA rna_KeyMapItem_to_string_compact = {
	{(PropertyRNA *)&rna_KeyMapItem_to_string_result, nullptr,
	-1, "compact", 3, 0, 0, 0, 0, "Compact",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_KeyMapItem_to_string_result = {
	{nullptr, (PropertyRNA *)&rna_KeyMapItem_to_string_compact,
	-1, "result", 8650753, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FunctionRNA rna_KeyMapItem_to_string_func = {
	{nullptr, (FunctionRNA *)&rna_KeyMapItem_compare_func,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItem_to_string_compact, (PropertyRNA *)&rna_KeyMapItem_to_string_result}},
	"to_string", 0, "to_string",
	KeyMapItem_to_string_call,
	nullptr
};

StructRNA RNA_KeyMapItem = {
	{(ContainerRNA *)&RNA_GizmoGroup, (ContainerRNA *)&RNA_KeyMapItems,
	nullptr,
	{(PropertyRNA *)&rna_KeyMapItem_rna_properties, (PropertyRNA *)&rna_KeyMapItem_is_user_defined}},
	"KeyMapItem", nullptr, nullptr, 516, nullptr, "Key Map Item",
	"Item in a Key Map",
	"*", 17,
	(PropertyRNA *)&rna_KeyMapItem_idname, (PropertyRNA *)&rna_KeyMapItem_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_KeyMapItem_compare_func, (FunctionRNA *)&rna_KeyMapItem_to_string_func}
};

