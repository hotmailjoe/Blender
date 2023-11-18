
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

#include "rna_curve.cc"
#include "rna_curve_api.cc"

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

RNA_EXTERN_C PointerPropertyRNA rna_Curve_shape_keys;
RNA_EXTERN_C CollectionPropertyRNA rna_Curve_splines;
RNA_EXTERN_C IntPropertyRNA rna_Curve_path_duration;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_path;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_path_follow;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_path_clamp;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_stretch;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_deform_bounds;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_radius;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_bevel_mode;
RNA_EXTERN_C PointerPropertyRNA rna_Curve_bevel_profile;
RNA_EXTERN_C IntPropertyRNA rna_Curve_bevel_resolution;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_offset;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_extrude;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_bevel_depth;
RNA_EXTERN_C IntPropertyRNA rna_Curve_resolution_u;
RNA_EXTERN_C IntPropertyRNA rna_Curve_resolution_v;
RNA_EXTERN_C IntPropertyRNA rna_Curve_render_resolution_u;
RNA_EXTERN_C IntPropertyRNA rna_Curve_render_resolution_v;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_eval_time;
RNA_EXTERN_C PointerPropertyRNA rna_Curve_bevel_object;
RNA_EXTERN_C PointerPropertyRNA rna_Curve_taper_object;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_dimensions;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_fill_mode;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_twist_mode;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_taper_radius_mode;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_bevel_factor_mapping_start;
RNA_EXTERN_C EnumPropertyRNA rna_Curve_bevel_factor_mapping_end;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_twist_smooth;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_fill_caps;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_map_taper;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_use_auto_texspace;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_texspace_location;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_texspace_size;
RNA_EXTERN_C CollectionPropertyRNA rna_Curve_materials;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_bevel_factor_start;
RNA_EXTERN_C FloatPropertyRNA rna_Curve_bevel_factor_end;
RNA_EXTERN_C BoolPropertyRNA rna_Curve_is_editmode;
RNA_EXTERN_C PointerPropertyRNA rna_Curve_animation_data;

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


extern FunctionRNA rna_Curve_transform_func;
extern FloatPropertyRNA rna_Curve_transform_matrix;
extern BoolPropertyRNA rna_Curve_transform_shape_keys;

extern FunctionRNA rna_Curve_validate_material_indices_func;
extern BoolPropertyRNA rna_Curve_validate_material_indices_result;

extern FunctionRNA rna_Curve_update_gpu_tag_func;


RNA_EXTERN_C CollectionPropertyRNA rna_CurveSplines_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveSplines_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_CurveSplines_active;

extern FunctionRNA rna_CurveSplines_new_func;
extern EnumPropertyRNA rna_CurveSplines_new_type;
extern PointerPropertyRNA rna_CurveSplines_new_spline;

extern FunctionRNA rna_CurveSplines_remove_func;
extern PointerPropertyRNA rna_CurveSplines_remove_spline;

extern FunctionRNA rna_CurveSplines_clear_func;


RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_shape_keys;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Curve_splines;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_path_duration;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_path;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_path_follow;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_path_clamp;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_stretch;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_deform_bounds;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_radius;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_bevel_mode;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_bevel_profile;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_bevel_resolution;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_offset;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_extrude;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_bevel_depth;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_resolution_u;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_resolution_v;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_render_resolution_u;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_render_resolution_v;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_eval_time;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_bevel_object;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_taper_object;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_dimensions;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_fill_mode;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_twist_mode;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_taper_radius_mode;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_bevel_factor_mapping_start;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_bevel_factor_mapping_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_twist_smooth;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_fill_caps;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_map_taper;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_auto_texspace;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_texspace_location;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_texspace_size;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Curve_materials;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_bevel_factor_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_bevel_factor_end;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_is_editmode;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_animation_data;

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

extern FunctionRNA rna_Curve_transform_func;
extern FloatPropertyRNA rna_Curve_transform_matrix;
extern BoolPropertyRNA rna_Curve_transform_shape_keys;

extern FunctionRNA rna_Curve_validate_material_indices_func;
extern BoolPropertyRNA rna_Curve_validate_material_indices_result;

extern FunctionRNA rna_Curve_update_gpu_tag_func;

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



RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_shape_keys;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Curve_splines;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_path_duration;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_path;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_path_follow;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_path_clamp;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_stretch;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_deform_bounds;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_radius;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_bevel_mode;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_bevel_profile;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_bevel_resolution;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_offset;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_extrude;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_bevel_depth;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_resolution_u;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_resolution_v;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_render_resolution_u;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Curve_render_resolution_v;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_eval_time;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_bevel_object;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_taper_object;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_dimensions;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_fill_mode;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_twist_mode;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_taper_radius_mode;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_bevel_factor_mapping_start;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Curve_bevel_factor_mapping_end;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_twist_smooth;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_fill_caps;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_map_taper;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_use_auto_texspace;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_texspace_location;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_texspace_size;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Curve_materials;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_bevel_factor_start;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Curve_bevel_factor_end;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Curve_is_editmode;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Curve_animation_data;

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

RNA_EXTERN_C EnumPropertyRNA rna_TextCurve_align_x;
RNA_EXTERN_C EnumPropertyRNA rna_TextCurve_align_y;
RNA_EXTERN_C EnumPropertyRNA rna_TextCurve_overflow;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_size;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_small_caps_scale;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_space_line;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_space_word;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_space_character;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_shear;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_offset_x;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_offset_y;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_underline_position;
RNA_EXTERN_C FloatPropertyRNA rna_TextCurve_underline_height;
RNA_EXTERN_C CollectionPropertyRNA rna_TextCurve_text_boxes;
RNA_EXTERN_C IntPropertyRNA rna_TextCurve_active_textbox;
RNA_EXTERN_C StringPropertyRNA rna_TextCurve_family;
RNA_EXTERN_C StringPropertyRNA rna_TextCurve_body;
RNA_EXTERN_C CollectionPropertyRNA rna_TextCurve_body_format;
RNA_EXTERN_C PointerPropertyRNA rna_TextCurve_follow_curve;
RNA_EXTERN_C PointerPropertyRNA rna_TextCurve_font;
RNA_EXTERN_C PointerPropertyRNA rna_TextCurve_font_bold;
RNA_EXTERN_C PointerPropertyRNA rna_TextCurve_font_italic;
RNA_EXTERN_C PointerPropertyRNA rna_TextCurve_font_bold_italic;
RNA_EXTERN_C PointerPropertyRNA rna_TextCurve_edit_format;
RNA_EXTERN_C BoolPropertyRNA rna_TextCurve_use_fast_edit;
RNA_EXTERN_C BoolPropertyRNA rna_TextCurve_is_select_bold;
RNA_EXTERN_C BoolPropertyRNA rna_TextCurve_is_select_italic;
RNA_EXTERN_C BoolPropertyRNA rna_TextCurve_is_select_underline;
RNA_EXTERN_C BoolPropertyRNA rna_TextCurve_is_select_smallcaps;
RNA_EXTERN_C BoolPropertyRNA rna_TextCurve_has_selection;

extern FunctionRNA rna_Curve_transform_func;
extern FloatPropertyRNA rna_Curve_transform_matrix;
extern BoolPropertyRNA rna_Curve_transform_shape_keys;

extern FunctionRNA rna_Curve_validate_material_indices_func;
extern BoolPropertyRNA rna_Curve_validate_material_indices_result;

extern FunctionRNA rna_Curve_update_gpu_tag_func;

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



RNA_EXTERN_C CollectionPropertyRNA rna_TextBox_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_TextBox_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_TextBox_x;
RNA_EXTERN_C FloatPropertyRNA rna_TextBox_y;
RNA_EXTERN_C FloatPropertyRNA rna_TextBox_width;
RNA_EXTERN_C FloatPropertyRNA rna_TextBox_height;


RNA_EXTERN_C CollectionPropertyRNA rna_TextCharacterFormat_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_TextCharacterFormat_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_TextCharacterFormat_use_bold;
RNA_EXTERN_C BoolPropertyRNA rna_TextCharacterFormat_use_italic;
RNA_EXTERN_C BoolPropertyRNA rna_TextCharacterFormat_use_underline;
RNA_EXTERN_C BoolPropertyRNA rna_TextCharacterFormat_use_small_caps;
RNA_EXTERN_C IntPropertyRNA rna_TextCharacterFormat_material_index;
RNA_EXTERN_C FloatPropertyRNA rna_TextCharacterFormat_kerning;


RNA_EXTERN_C CollectionPropertyRNA rna_SplinePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_SplinePoint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_SplinePoint_select;
RNA_EXTERN_C BoolPropertyRNA rna_SplinePoint_hide;
RNA_EXTERN_C FloatPropertyRNA rna_SplinePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_SplinePoint_weight;
RNA_EXTERN_C FloatPropertyRNA rna_SplinePoint_tilt;
RNA_EXTERN_C FloatPropertyRNA rna_SplinePoint_weight_softbody;
RNA_EXTERN_C FloatPropertyRNA rna_SplinePoint_radius;


RNA_EXTERN_C CollectionPropertyRNA rna_BezierSplinePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BezierSplinePoint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_BezierSplinePoint_select_left_handle;
RNA_EXTERN_C BoolPropertyRNA rna_BezierSplinePoint_select_right_handle;
RNA_EXTERN_C BoolPropertyRNA rna_BezierSplinePoint_select_control_point;
RNA_EXTERN_C BoolPropertyRNA rna_BezierSplinePoint_hide;
RNA_EXTERN_C EnumPropertyRNA rna_BezierSplinePoint_handle_left_type;
RNA_EXTERN_C EnumPropertyRNA rna_BezierSplinePoint_handle_right_type;
RNA_EXTERN_C FloatPropertyRNA rna_BezierSplinePoint_handle_left;
RNA_EXTERN_C FloatPropertyRNA rna_BezierSplinePoint_co;
RNA_EXTERN_C FloatPropertyRNA rna_BezierSplinePoint_handle_right;
RNA_EXTERN_C FloatPropertyRNA rna_BezierSplinePoint_tilt;
RNA_EXTERN_C FloatPropertyRNA rna_BezierSplinePoint_weight_softbody;
RNA_EXTERN_C FloatPropertyRNA rna_BezierSplinePoint_radius;


RNA_EXTERN_C CollectionPropertyRNA rna_Spline_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Spline_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_Spline_points;
RNA_EXTERN_C CollectionPropertyRNA rna_Spline_bezier_points;
RNA_EXTERN_C EnumPropertyRNA rna_Spline_tilt_interpolation;
RNA_EXTERN_C EnumPropertyRNA rna_Spline_radius_interpolation;
RNA_EXTERN_C EnumPropertyRNA rna_Spline_type;
RNA_EXTERN_C IntPropertyRNA rna_Spline_point_count_u;
RNA_EXTERN_C IntPropertyRNA rna_Spline_point_count_v;
RNA_EXTERN_C IntPropertyRNA rna_Spline_order_u;
RNA_EXTERN_C IntPropertyRNA rna_Spline_order_v;
RNA_EXTERN_C IntPropertyRNA rna_Spline_resolution_u;
RNA_EXTERN_C IntPropertyRNA rna_Spline_resolution_v;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_cyclic_u;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_cyclic_v;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_endpoint_u;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_endpoint_v;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_bezier_u;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_bezier_v;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_use_smooth;
RNA_EXTERN_C BoolPropertyRNA rna_Spline_hide;
RNA_EXTERN_C IntPropertyRNA rna_Spline_material_index;
RNA_EXTERN_C IntPropertyRNA rna_Spline_character_index;

extern FunctionRNA rna_Spline_calc_length_func;
extern IntPropertyRNA rna_Spline_calc_length_resolution;
extern FloatPropertyRNA rna_Spline_calc_length_length;

extern FunctionRNA rna_Spline_valid_message_func;
extern IntPropertyRNA rna_Spline_valid_message_direction;
extern StringPropertyRNA rna_Spline_valid_message_result;



RNA_EXTERN_C CollectionPropertyRNA rna_SplinePoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_SplinePoints_rna_type;

extern FunctionRNA rna_SplinePoints_add_func;
extern IntPropertyRNA rna_SplinePoints_add_count;



RNA_EXTERN_C CollectionPropertyRNA rna_SplineBezierPoints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_SplineBezierPoints_rna_type;

extern FunctionRNA rna_SplineBezierPoints_add_func;
extern IntPropertyRNA rna_SplineBezierPoints_add_count;


RNA_EXTERN_C PointerRNA Curve_shape_keys_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

static PointerRNA Curve_splines_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Spline, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Curve_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curve_splines;

    rna_Curve_splines_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curve_splines_get(iter);
    }
}

RNA_EXTERN_C void Curve_splines_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Curve_splines_get(iter);
    }
}

RNA_EXTERN_C void Curve_splines_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Curve_path_duration_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->pathlen);
}

RNA_EXTERN_C void Curve_path_duration_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->pathlen = (std::remove_reference_t<decltype(data->pathlen)>)CLAMPIS(value, 1, 1048574);
#else
    data->pathlen = CLAMPIS(value, 1, 1048574);
#endif
}

RNA_EXTERN_C bool Curve_use_path_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void Curve_use_path_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool Curve_use_path_follow_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void Curve_use_path_follow_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool Curve_use_path_clamp_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void Curve_use_path_clamp_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool Curve_use_stretch_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void Curve_use_stretch_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool Curve_use_deform_bounds_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

RNA_EXTERN_C void Curve_use_deform_bounds_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool Curve_use_radius_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void Curve_use_radius_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C int Curve_bevel_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevel_mode);
}

RNA_EXTERN_C void Curve_bevel_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Curve_bevel_mode_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA Curve_bevel_profile_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveProfile, data->bevel_profile);
}

RNA_EXTERN_C int Curve_bevel_resolution_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevresol);
}

RNA_EXTERN_C void Curve_bevel_resolution_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->bevresol = (std::remove_reference_t<decltype(data->bevresol)>)CLAMPIS(value, 0, 32);
#else
    data->bevresol = CLAMPIS(value, 0, 32);
#endif
}

RNA_EXTERN_C float Curve_offset_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Curve_offset_get;
    return fn(ptr);
}

RNA_EXTERN_C void Curve_offset_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Curve_offset_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Curve_extrude_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->extrude);
}

RNA_EXTERN_C void Curve_extrude_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->extrude = (std::remove_reference_t<decltype(data->extrude)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->extrude = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Curve_bevel_depth_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevel_radius);
}

RNA_EXTERN_C void Curve_bevel_depth_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->bevel_radius = (std::remove_reference_t<decltype(data->bevel_radius)>)value;
#else
    data->bevel_radius = value;
#endif
}

RNA_EXTERN_C int Curve_resolution_u_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolu);
}

RNA_EXTERN_C void Curve_resolution_u_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->resolu = (std::remove_reference_t<decltype(data->resolu)>)CLAMPIS(value, 1, 1024);
#else
    data->resolu = CLAMPIS(value, 1, 1024);
#endif
}

RNA_EXTERN_C int Curve_resolution_v_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolv);
}

RNA_EXTERN_C void Curve_resolution_v_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->resolv = (std::remove_reference_t<decltype(data->resolv)>)CLAMPIS(value, 1, 1024);
#else
    data->resolv = CLAMPIS(value, 1, 1024);
#endif
}

RNA_EXTERN_C int Curve_render_resolution_u_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolu_ren);
}

RNA_EXTERN_C void Curve_render_resolution_u_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->resolu_ren = (std::remove_reference_t<decltype(data->resolu_ren)>)CLAMPIS(value, 0, 1024);
#else
    data->resolu_ren = CLAMPIS(value, 0, 1024);
#endif
}

RNA_EXTERN_C int Curve_render_resolution_v_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolv_ren);
}

RNA_EXTERN_C void Curve_render_resolution_v_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->resolv_ren = (std::remove_reference_t<decltype(data->resolv_ren)>)CLAMPIS(value, 0, 1024);
#else
    data->resolv_ren = CLAMPIS(value, 0, 1024);
#endif
}

RNA_EXTERN_C float Curve_eval_time_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ctime);
}

RNA_EXTERN_C void Curve_eval_time_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->ctime = (std::remove_reference_t<decltype(data->ctime)>)value;
#else
    data->ctime = value;
#endif
}

RNA_EXTERN_C PointerRNA Curve_bevel_object_get(PointerRNA *ptr)
{
    return rna_Curve_bevelObject_get(ptr);
}

RNA_EXTERN_C void Curve_bevel_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Curve_bevelObject_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA Curve_taper_object_get(PointerRNA *ptr)
{
    return rna_Curve_taperObject_get(ptr);
}

RNA_EXTERN_C void Curve_taper_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Curve_taperObject_set(ptr, value, reports);
}

RNA_EXTERN_C int Curve_dimensions_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((data->flag) & 1);
}

RNA_EXTERN_C void Curve_dimensions_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Curve_dimension_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Curve_fill_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((data->flag) & 6);
}

RNA_EXTERN_C void Curve_fill_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->flag &= ~6;
    data->flag |= value;
}

RNA_EXTERN_C int Curve_twist_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->twist_mode);
}

RNA_EXTERN_C void Curve_twist_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->twist_mode = (std::remove_reference_t<decltype(data->twist_mode)>)value;
#else
    data->twist_mode = value;
#endif
}

RNA_EXTERN_C int Curve_taper_radius_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->taper_radius_mode);
}

RNA_EXTERN_C void Curve_taper_radius_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->taper_radius_mode = (std::remove_reference_t<decltype(data->taper_radius_mode)>)value;
#else
    data->taper_radius_mode = value;
#endif
}

RNA_EXTERN_C int Curve_bevel_factor_mapping_start_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevfac1_mapping);
}

RNA_EXTERN_C void Curve_bevel_factor_mapping_start_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->bevfac1_mapping = (std::remove_reference_t<decltype(data->bevfac1_mapping)>)value;
#else
    data->bevfac1_mapping = value;
#endif
}

RNA_EXTERN_C int Curve_bevel_factor_mapping_end_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevfac2_mapping);
}

RNA_EXTERN_C void Curve_bevel_factor_mapping_end_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->bevfac2_mapping = (std::remove_reference_t<decltype(data->bevfac2_mapping)>)value;
#else
    data->bevfac2_mapping = value;
#endif
}

RNA_EXTERN_C float Curve_twist_smooth_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->twist_smooth);
}

RNA_EXTERN_C void Curve_twist_smooth_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->twist_smooth = (std::remove_reference_t<decltype(data->twist_smooth)>)value;
#else
    data->twist_smooth = value;
#endif
}

RNA_EXTERN_C bool Curve_use_fill_caps_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void Curve_use_fill_caps_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C bool Curve_use_map_taper_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void Curve_use_map_taper_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

RNA_EXTERN_C bool Curve_use_auto_texspace_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->texspace_flag) & 1) != 0);
}

RNA_EXTERN_C void Curve_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->texspace_flag |= 1; }
    else { data->texspace_flag &= ~1; }
}

RNA_EXTERN_C void Curve_texspace_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Curve_texspace_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Curve_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Curve_texspace_location_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Curve_texspace_size_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Curve_texspace_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Curve_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Curve_texspace_size_set;
    fn(ptr, values);
}

RNA_EXTERN_C int Curve_materials_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Curve_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void Curve_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curve_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Curve_materials_get(iter);
    }
}

RNA_EXTERN_C void Curve_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curve_materials_get(iter);
    }
}

RNA_EXTERN_C void Curve_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curve_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Curve_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curve_materials_get(&iter); }
    }

    Curve_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Curve_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Curve_materials_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ID_name_get(&iter.ptr, name);
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
        Curve_materials_next(&iter);
    }
    Curve_materials_end(&iter);

    return found;
}

RNA_EXTERN_C float Curve_bevel_factor_start_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevfac1);
}

RNA_EXTERN_C void Curve_bevel_factor_start_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->bevfac1 = (std::remove_reference_t<decltype(data->bevfac1)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->bevfac1 = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Curve_bevel_factor_end_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevfac2);
}

RNA_EXTERN_C void Curve_bevel_factor_end_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->bevfac2 = (std::remove_reference_t<decltype(data->bevfac2)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->bevfac2 = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool Curve_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Curve_is_editmode_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Curve_animation_data_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA CurveSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveSplines_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSplines_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveSplines_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveSplines_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA CurveSplines_active_get(PointerRNA *ptr)
{
    return rna_Curve_active_spline_get(ptr);
}

RNA_EXTERN_C void CurveSplines_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Curve_active_spline_set(ptr, value, reports);
}

RNA_EXTERN_C int TextCurve_align_x_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->spacemode);
}

RNA_EXTERN_C void TextCurve_align_x_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->spacemode = (std::remove_reference_t<decltype(data->spacemode)>)value;
#else
    data->spacemode = value;
#endif
}

RNA_EXTERN_C int TextCurve_align_y_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->align_y);
}

RNA_EXTERN_C void TextCurve_align_y_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->align_y = (std::remove_reference_t<decltype(data->align_y)>)value;
#else
    data->align_y = value;
#endif
}

RNA_EXTERN_C int TextCurve_overflow_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->overflow);
}

RNA_EXTERN_C void TextCurve_overflow_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->overflow = (std::remove_reference_t<decltype(data->overflow)>)value;
#else
    data->overflow = value;
#endif
}

RNA_EXTERN_C float TextCurve_size_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->fsize);
}

RNA_EXTERN_C void TextCurve_size_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->fsize = (std::remove_reference_t<decltype(data->fsize)>)CLAMPIS(value, 0.0001000000f, 10000.0f);
#else
    data->fsize = CLAMPIS(value, 0.0001000000f, 10000.0f);
#endif
}

RNA_EXTERN_C float TextCurve_small_caps_scale_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->smallcaps_scale);
}

RNA_EXTERN_C void TextCurve_small_caps_scale_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->smallcaps_scale = (std::remove_reference_t<decltype(data->smallcaps_scale)>)value;
#else
    data->smallcaps_scale = value;
#endif
}

RNA_EXTERN_C float TextCurve_space_line_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->linedist);
}

RNA_EXTERN_C void TextCurve_space_line_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->linedist = (std::remove_reference_t<decltype(data->linedist)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->linedist = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float TextCurve_space_word_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->wordspace);
}

RNA_EXTERN_C void TextCurve_space_word_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->wordspace = (std::remove_reference_t<decltype(data->wordspace)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->wordspace = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float TextCurve_space_character_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->spacing);
}

RNA_EXTERN_C void TextCurve_space_character_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->spacing = (std::remove_reference_t<decltype(data->spacing)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->spacing = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float TextCurve_shear_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->shear);
}

RNA_EXTERN_C void TextCurve_shear_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->shear = (std::remove_reference_t<decltype(data->shear)>)CLAMPIS(value, -1.0f, 1.0f);
#else
    data->shear = CLAMPIS(value, -1.0f, 1.0f);
#endif
}

RNA_EXTERN_C float TextCurve_offset_x_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->xof);
}

RNA_EXTERN_C void TextCurve_offset_x_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->xof = (std::remove_reference_t<decltype(data->xof)>)value;
#else
    data->xof = value;
#endif
}

RNA_EXTERN_C float TextCurve_offset_y_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->yof);
}

RNA_EXTERN_C void TextCurve_offset_y_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->yof = (std::remove_reference_t<decltype(data->yof)>)value;
#else
    data->yof = value;
#endif
}

RNA_EXTERN_C float TextCurve_underline_position_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ulpos);
}

RNA_EXTERN_C void TextCurve_underline_position_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->ulpos = (std::remove_reference_t<decltype(data->ulpos)>)CLAMPIS(value, -0.2000000030f, 0.8000000119f);
#else
    data->ulpos = CLAMPIS(value, -0.2000000030f, 0.8000000119f);
#endif
}

RNA_EXTERN_C float TextCurve_underline_height_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ulheight);
}

RNA_EXTERN_C void TextCurve_underline_height_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
#ifdef __cplusplus
    data->ulheight = (std::remove_reference_t<decltype(data->ulheight)>)CLAMPIS(value, 0.0f, 0.8000000119f);
#else
    data->ulheight = CLAMPIS(value, 0.0f, 0.8000000119f);
#endif
}

RNA_EXTERN_C int TextCurve_text_boxes_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->tb == nullptr) ? 0 : data->totbox;
}

static PointerRNA TextCurve_text_boxes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TextBox, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void TextCurve_text_boxes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextCurve_text_boxes;

    rna_iterator_array_begin(iter, data->tb, sizeof(data->tb[0]), data->totbox, 0, nullptr);

    if (iter->valid) {
        iter->ptr = TextCurve_text_boxes_get(iter);
    }
}

RNA_EXTERN_C void TextCurve_text_boxes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = TextCurve_text_boxes_get(iter);
    }
}

RNA_EXTERN_C void TextCurve_text_boxes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int TextCurve_text_boxes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    TextCurve_text_boxes_begin(&iter, ptr);

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
        if (found) { *r_ptr = TextCurve_text_boxes_get(&iter); }
    }

    TextCurve_text_boxes_end(&iter);

    return found;
}

RNA_EXTERN_C int TextCurve_active_textbox_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->actbox);
}

RNA_EXTERN_C void TextCurve_active_textbox_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_Curve_active_textbox_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->actbox = (std::remove_reference_t<decltype(data->actbox)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->actbox = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C void TextCurve_family_get(PointerRNA *ptr, char *value)
{
    Curve *data = (Curve *)(ptr->data);
    BLI_assert(strlen(data->family) < 64);
    strcpy(value, data->family);
}

RNA_EXTERN_C int TextCurve_family_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return strlen(data->family);
}

RNA_EXTERN_C void TextCurve_family_set(PointerRNA *ptr, const char *value)
{
    Curve *data = (Curve *)(ptr->data);
    BLI_strncpy_utf8(data->family, value, 64);
}

RNA_EXTERN_C void TextCurve_body_get(PointerRNA *ptr, char *value)
{
    rna_Curve_body_get(ptr, value);
}

RNA_EXTERN_C int TextCurve_body_length(PointerRNA *ptr)
{
    return rna_Curve_body_length(ptr);
}

RNA_EXTERN_C void TextCurve_body_set(PointerRNA *ptr, const char *value)
{
    rna_Curve_body_set(ptr, value);
}

RNA_EXTERN_C int TextCurve_body_format_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->strinfo == nullptr) ? 0 : data->len_char32;
}

static PointerRNA TextCurve_body_format_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TextCharacterFormat, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void TextCurve_body_format_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextCurve_body_format;

    rna_iterator_array_begin(iter, data->strinfo, sizeof(data->strinfo[0]), data->len_char32, 0, nullptr);

    if (iter->valid) {
        iter->ptr = TextCurve_body_format_get(iter);
    }
}

RNA_EXTERN_C void TextCurve_body_format_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = TextCurve_body_format_get(iter);
    }
}

RNA_EXTERN_C void TextCurve_body_format_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int TextCurve_body_format_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    TextCurve_body_format_begin(&iter, ptr);

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
        if (found) { *r_ptr = TextCurve_body_format_get(&iter); }
    }

    TextCurve_body_format_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA TextCurve_follow_curve_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->textoncurve);
}

RNA_EXTERN_C void TextCurve_follow_curve_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->textoncurve = value.data;
}

RNA_EXTERN_C PointerRNA TextCurve_font_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfont);
}

RNA_EXTERN_C void TextCurve_font_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfont) {
        id_us_min((ID *)data->vfont);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfont = value.data;
}

RNA_EXTERN_C PointerRNA TextCurve_font_bold_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfontb);
}

RNA_EXTERN_C void TextCurve_font_bold_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfontb) {
        id_us_min((ID *)data->vfontb);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfontb = value.data;
}

RNA_EXTERN_C PointerRNA TextCurve_font_italic_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfonti);
}

RNA_EXTERN_C void TextCurve_font_italic_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfonti) {
        id_us_min((ID *)data->vfonti);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfonti = value.data;
}

RNA_EXTERN_C PointerRNA TextCurve_font_bold_italic_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfontbi);
}

RNA_EXTERN_C void TextCurve_font_bold_italic_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfontbi) {
        id_us_min((ID *)data->vfontbi);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->vfontbi = value.data;
}

RNA_EXTERN_C PointerRNA TextCurve_edit_format_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_TextCharacterFormat, &data->curinfo);
}

RNA_EXTERN_C bool TextCurve_use_fast_edit_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void TextCurve_use_fast_edit_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool TextCurve_is_select_bold_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_bold_get;
    return fn(ptr);
}

RNA_EXTERN_C bool TextCurve_is_select_italic_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_italic_get;
    return fn(ptr);
}

RNA_EXTERN_C bool TextCurve_is_select_underline_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_underline_get;
    return fn(ptr);
}

RNA_EXTERN_C bool TextCurve_is_select_smallcaps_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_is_select_smallcaps_get;
    return fn(ptr);
}

RNA_EXTERN_C bool TextCurve_has_selection_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextCurve_has_selection_get;
    return fn(ptr);
}

static PointerRNA TextBox_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void TextBox_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextBox_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextBox_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TextBox_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TextBox_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TextBox_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int TextBox_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA TextBox_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float TextBox_x_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->x);
}

RNA_EXTERN_C void TextBox_x_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
#ifdef __cplusplus
    data->x = (std::remove_reference_t<decltype(data->x)>)value;
#else
    data->x = value;
#endif
}

RNA_EXTERN_C float TextBox_y_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->y);
}

RNA_EXTERN_C void TextBox_y_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
#ifdef __cplusplus
    data->y = (std::remove_reference_t<decltype(data->y)>)value;
#else
    data->y = value;
#endif
}

RNA_EXTERN_C float TextBox_width_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->w);
}

RNA_EXTERN_C void TextBox_width_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
#ifdef __cplusplus
    data->w = (std::remove_reference_t<decltype(data->w)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->w = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float TextBox_height_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->h);
}

RNA_EXTERN_C void TextBox_height_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
#ifdef __cplusplus
    data->h = (std::remove_reference_t<decltype(data->h)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->h = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

static PointerRNA TextCharacterFormat_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void TextCharacterFormat_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextCharacterFormat_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextCharacterFormat_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TextCharacterFormat_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TextCharacterFormat_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TextCharacterFormat_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int TextCharacterFormat_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA TextCharacterFormat_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool TextCharacterFormat_use_bold_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void TextCharacterFormat_use_bold_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool TextCharacterFormat_use_italic_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void TextCharacterFormat_use_italic_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool TextCharacterFormat_use_underline_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void TextCharacterFormat_use_underline_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool TextCharacterFormat_use_small_caps_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void TextCharacterFormat_use_small_caps_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C int TextCharacterFormat_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ChariInfo_material_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void TextCharacterFormat_material_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ChariInfo_material_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C float TextCharacterFormat_kerning_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (float)(data->kern);
}

RNA_EXTERN_C void TextCharacterFormat_kerning_set(PointerRNA *ptr, float value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
#ifdef __cplusplus
    data->kern = (std::remove_reference_t<decltype(data->kern)>)value;
#else
    data->kern = value;
#endif
}

static PointerRNA SplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void SplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SplinePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplinePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SplinePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int SplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA SplinePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool SplinePoint_select_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

RNA_EXTERN_C void SplinePoint_select_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

RNA_EXTERN_C bool SplinePoint_hide_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (bool)(data->hide);
}

RNA_EXTERN_C void SplinePoint_hide_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
#ifdef __cplusplus
    data->hide = (std::remove_reference_t<decltype(data->hide)>)value;
#else
    data->hide = value;
#endif
}

RNA_EXTERN_C void SplinePoint_co_get(PointerRNA *ptr, float values[4])
{
    BPoint *data = (BPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

RNA_EXTERN_C void SplinePoint_co_set(PointerRNA *ptr, const float values[4])
{
    BPoint *data = (BPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

RNA_EXTERN_C float SplinePoint_weight_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->vec[3]);
}

RNA_EXTERN_C void SplinePoint_weight_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
#ifdef __cplusplus
    data->vec[3] = (std::remove_reference_t<decltype(data->vec[3])>)value;
#else
    data->vec[3] = value;
#endif
}

RNA_EXTERN_C float SplinePoint_tilt_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->tilt);
}

RNA_EXTERN_C void SplinePoint_tilt_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
#ifdef __cplusplus
    data->tilt = (std::remove_reference_t<decltype(data->tilt)>)CLAMPIS(value, -376.9911193848f, 376.9911193848f);
#else
    data->tilt = CLAMPIS(value, -376.9911193848f, 376.9911193848f);
#endif
}

RNA_EXTERN_C float SplinePoint_weight_softbody_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void SplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0099999998f, 100.0f);
#else
    data->weight = CLAMPIS(value, 0.0099999998f, 100.0f);
#endif
}

RNA_EXTERN_C float SplinePoint_radius_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->radius);
}

RNA_EXTERN_C void SplinePoint_radius_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

static PointerRNA BezierSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BezierSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BezierSplinePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BezierSplinePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BezierSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BezierSplinePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BezierSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BezierSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BezierSplinePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool BezierSplinePoint_select_left_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

RNA_EXTERN_C void BezierSplinePoint_select_left_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

RNA_EXTERN_C bool BezierSplinePoint_select_right_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f3) & 1) != 0);
}

RNA_EXTERN_C void BezierSplinePoint_select_right_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f3 |= 1; }
    else { data->f3 &= ~1; }
}

RNA_EXTERN_C bool BezierSplinePoint_select_control_point_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f2) & 1) != 0);
}

RNA_EXTERN_C void BezierSplinePoint_select_control_point_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f2 |= 1; }
    else { data->f2 &= ~1; }
}

RNA_EXTERN_C bool BezierSplinePoint_hide_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (bool)(data->hide);
}

RNA_EXTERN_C void BezierSplinePoint_hide_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->hide = (std::remove_reference_t<decltype(data->hide)>)value;
#else
    data->hide = value;
#endif
}

RNA_EXTERN_C int BezierSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h1);
}

RNA_EXTERN_C void BezierSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->h1 = (std::remove_reference_t<decltype(data->h1)>)value;
#else
    data->h1 = value;
#endif
}

RNA_EXTERN_C int BezierSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h2);
}

RNA_EXTERN_C void BezierSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->h2 = (std::remove_reference_t<decltype(data->h2)>)value;
#else
    data->h2 = value;
#endif
}

RNA_EXTERN_C void BezierSplinePoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_BezTriple_handle1_get;
    fn(ptr, values);
}

RNA_EXTERN_C void BezierSplinePoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_BezTriple_handle1_set;
    fn(ptr, values);
}

RNA_EXTERN_C void BezierSplinePoint_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_BezTriple_ctrlpoint_get;
    fn(ptr, values);
}

RNA_EXTERN_C void BezierSplinePoint_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_BezTriple_ctrlpoint_set;
    fn(ptr, values);
}

RNA_EXTERN_C void BezierSplinePoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_BezTriple_handle2_get;
    fn(ptr, values);
}

RNA_EXTERN_C void BezierSplinePoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_BezTriple_handle2_set;
    fn(ptr, values);
}

RNA_EXTERN_C float BezierSplinePoint_tilt_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->tilt);
}

RNA_EXTERN_C void BezierSplinePoint_tilt_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->tilt = (std::remove_reference_t<decltype(data->tilt)>)CLAMPIS(value, -376.9911193848f, 376.9911193848f);
#else
    data->tilt = CLAMPIS(value, -376.9911193848f, 376.9911193848f);
#endif
}

RNA_EXTERN_C float BezierSplinePoint_weight_softbody_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void BezierSplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0099999998f, 100.0f);
#else
    data->weight = CLAMPIS(value, 0.0099999998f, 100.0f);
#endif
}

RNA_EXTERN_C float BezierSplinePoint_radius_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->radius);
}

RNA_EXTERN_C void BezierSplinePoint_radius_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

static PointerRNA Spline_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Spline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Spline_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Spline_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Spline_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Spline_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Spline_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Spline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Spline_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int Spline_points_length(PointerRNA *ptr)
{
    return rna_Nurb_length(ptr);
}

static PointerRNA Spline_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_SplinePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Spline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Spline_points;

    rna_BPoint_array_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Spline_points_get(iter);
    }
}

RNA_EXTERN_C void Spline_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Spline_points_get(iter);
    }
}

RNA_EXTERN_C void Spline_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Spline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Spline_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = Spline_points_get(&iter); }
    }

    Spline_points_end(&iter);

    return found;
}

RNA_EXTERN_C int Spline_bezier_points_length(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (data->bezt == nullptr) ? 0 : data->pntsu;
}

static PointerRNA Spline_bezier_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BezierSplinePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Spline_bezier_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Spline_bezier_points;

    rna_iterator_array_begin(iter, data->bezt, sizeof(data->bezt[0]), data->pntsu, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Spline_bezier_points_get(iter);
    }
}

RNA_EXTERN_C void Spline_bezier_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Spline_bezier_points_get(iter);
    }
}

RNA_EXTERN_C void Spline_bezier_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Spline_bezier_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Spline_bezier_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = Spline_bezier_points_get(&iter); }
    }

    Spline_bezier_points_end(&iter);

    return found;
}

RNA_EXTERN_C int Spline_tilt_interpolation_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->tilt_interp);
}

RNA_EXTERN_C void Spline_tilt_interpolation_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
#ifdef __cplusplus
    data->tilt_interp = (std::remove_reference_t<decltype(data->tilt_interp)>)value;
#else
    data->tilt_interp = value;
#endif
}

RNA_EXTERN_C int Spline_radius_interpolation_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->radius_interp);
}

RNA_EXTERN_C void Spline_radius_interpolation_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
#ifdef __cplusplus
    data->radius_interp = (std::remove_reference_t<decltype(data->radius_interp)>)value;
#else
    data->radius_interp = value;
#endif
}

RNA_EXTERN_C int Spline_type_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void Spline_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Nurb_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Spline_point_count_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->pntsu);
}

RNA_EXTERN_C int Spline_point_count_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->pntsv);
}

RNA_EXTERN_C int Spline_order_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->orderu);
}

RNA_EXTERN_C void Spline_order_u_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
#ifdef __cplusplus
    data->orderu = (std::remove_reference_t<decltype(data->orderu)>)CLAMPIS(value, 2, 64);
#else
    data->orderu = CLAMPIS(value, 2, 64);
#endif
}

RNA_EXTERN_C int Spline_order_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->orderv);
}

RNA_EXTERN_C void Spline_order_v_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
#ifdef __cplusplus
    data->orderv = (std::remove_reference_t<decltype(data->orderv)>)CLAMPIS(value, 2, 64);
#else
    data->orderv = CLAMPIS(value, 2, 64);
#endif
}

RNA_EXTERN_C int Spline_resolution_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->resolu);
}

RNA_EXTERN_C void Spline_resolution_u_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
#ifdef __cplusplus
    data->resolu = (std::remove_reference_t<decltype(data->resolu)>)CLAMPIS(value, 1, 1024);
#else
    data->resolu = CLAMPIS(value, 1, 1024);
#endif
}

RNA_EXTERN_C int Spline_resolution_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->resolv);
}

RNA_EXTERN_C void Spline_resolution_v_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
#ifdef __cplusplus
    data->resolv = (std::remove_reference_t<decltype(data->resolv)>)CLAMPIS(value, 1, 1024);
#else
    data->resolv = CLAMPIS(value, 1, 1024);
#endif
}

RNA_EXTERN_C bool Spline_use_cyclic_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagu) & 1) != 0);
}

RNA_EXTERN_C void Spline_use_cyclic_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu |= 1; }
    else { data->flagu &= ~1; }
}

RNA_EXTERN_C bool Spline_use_cyclic_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagv) & 1) != 0);
}

RNA_EXTERN_C void Spline_use_cyclic_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv |= 1; }
    else { data->flagv &= ~1; }
}

RNA_EXTERN_C bool Spline_use_endpoint_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagu) & 2) != 0);
}

RNA_EXTERN_C void Spline_use_endpoint_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu |= 2; }
    else { data->flagu &= ~2; }
}

RNA_EXTERN_C bool Spline_use_endpoint_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagv) & 2) != 0);
}

RNA_EXTERN_C void Spline_use_endpoint_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv |= 2; }
    else { data->flagv &= ~2; }
}

RNA_EXTERN_C bool Spline_use_bezier_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagu) & 4) != 0);
}

RNA_EXTERN_C void Spline_use_bezier_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu |= 4; }
    else { data->flagu &= ~4; }
}

RNA_EXTERN_C bool Spline_use_bezier_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagv) & 4) != 0);
}

RNA_EXTERN_C void Spline_use_bezier_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv |= 4; }
    else { data->flagv &= ~4; }
}

RNA_EXTERN_C bool Spline_use_smooth_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Spline_use_smooth_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool Spline_hide_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->hide) & 1) != 0);
}

RNA_EXTERN_C void Spline_hide_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->hide |= 1; }
    else { data->hide &= ~1; }
}

RNA_EXTERN_C int Spline_material_index_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->mat_nr);
}

RNA_EXTERN_C void Spline_material_index_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_Curve_material_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->mat_nr = (std::remove_reference_t<decltype(data->mat_nr)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->mat_nr = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C int Spline_character_index_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->charidx);
}

static PointerRNA SplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void SplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SplinePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplinePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SplinePoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int SplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA SplinePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA SplineBezierPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void SplineBezierPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SplineBezierPoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplineBezierPoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SplineBezierPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SplineBezierPoints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SplineBezierPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int SplineBezierPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA SplineBezierPoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Curve_transform_func(struct Curve *_self, float matrix[16], bool shape_keys)
{
	rna_Curve_transform(_self, matrix, shape_keys);
}

static void Curve_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	const float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Curve_transform(_self, matrix, shape_keys);
}

RNA_EXTERN_C bool Curve_validate_material_indices_func(struct Curve *_self)
{
	return BKE_curve_material_index_validate(_self);
}

static void Curve_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = BKE_curve_material_index_validate(_self);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Curve_update_gpu_tag_func(struct Curve *_self)
{
	rna_Curve_update_gpu_tag(_self);
}

static void Curve_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	_self = (struct Curve *)_ptr->data;
	
	rna_Curve_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Curve_transform(struct Curve *_self, float matrix[16], bool shape_keys);
bool BKE_curve_material_index_validate(struct Curve *_self);
void rna_Curve_update_gpu_tag(struct Curve *_self);

RNA_EXTERN_C struct Nurb *CurveSplines_new_func(struct Curve *_self, int type)
{
	return rna_Curve_spline_new(_self, type);
}

static void CurveSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	int type;
	struct Nurb *spline;
	char *_data, *_retdata;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	spline = rna_Curve_spline_new(_self, type);
	*((struct Nurb **)_retdata) = spline;
}

RNA_EXTERN_C void CurveSplines_remove_func(struct Curve *_self, ReportList *reports, struct PointerRNA *spline)
{
	rna_Curve_spline_remove(_self, reports, spline);
}

static void CurveSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	struct PointerRNA *spline;
	char *_data;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((struct PointerRNA **)_data);
	
	rna_Curve_spline_remove(_self, reports, spline);
}

RNA_EXTERN_C void CurveSplines_clear_func(struct Curve *_self)
{
	rna_Curve_spline_clear(_self);
}

static void CurveSplines_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	_self = (struct Curve *)_ptr->data;
	
	rna_Curve_spline_clear(_self);
}

/* Repeated prototypes to detect errors */

struct Nurb *rna_Curve_spline_new(struct Curve *_self, int type);
void rna_Curve_spline_remove(struct Curve *_self, ReportList *reports, struct PointerRNA *spline);
void rna_Curve_spline_clear(struct Curve *_self);







RNA_EXTERN_C float Spline_calc_length_func(struct Nurb *_self, int resolution)
{
	return rna_Nurb_calc_length(_self, resolution);
}

static void Spline_calc_length_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Nurb *_self;
	int resolution;
	float length;
	char *_data, *_retdata;
	
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	resolution = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	length = rna_Nurb_calc_length(_self, resolution);
	*((float *)_retdata) = length;
}

RNA_EXTERN_C void Spline_valid_message_func(struct Nurb *_self, int direction, int *result_num, const char * *result)
{
	rna_Nurb_valid_message(_self, direction, result, result_num);
}

static void Spline_valid_message_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Nurb *_self;
	int direction;
	int *result_num;
	const char * *result;
	char *_data;
	
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	direction = *((int *)_data);
	_data += 8;
	result_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	result = ((const char * *)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Nurb_valid_message(_self, direction, result, result_num);
}

/* Repeated prototypes to detect errors */

float rna_Nurb_calc_length(struct Nurb *_self, int resolution);
void rna_Nurb_valid_message(struct Nurb *_self, int direction, int *result_num, const char * *result);

RNA_EXTERN_C void SplinePoints_add_func(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count)
{
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

static void SplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Nurb *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_points_add(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count);

RNA_EXTERN_C void SplineBezierPoints_add_func(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count)
{
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

static void SplineBezierPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Nurb *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_bezpoints_add(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count);

/* Curve */
PointerPropertyRNA rna_Curve_shape_keys = {
	{(PropertyRNA *)&rna_Curve_splines, nullptr,
	-1, "shape_keys", 8388672, 1, 0, 32, 0, "Shape Keys",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_shape_keys_get, nullptr, nullptr, nullptr,&RNA_Key
};

CollectionPropertyRNA rna_Curve_splines = {
	{(PropertyRNA *)&rna_Curve_path_duration, (PropertyRNA *)&rna_Curve_shape_keys,
	-1, "splines", 0, 0, 0, 0, 0, "Splines",
	"Collection of splines in this curve data object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_CurveSplines},
	Curve_splines_begin, Curve_splines_next, Curve_splines_end, Curve_splines_get, nullptr, nullptr, nullptr, nullptr, &RNA_Spline
};

IntPropertyRNA rna_Curve_path_duration = {
	{(PropertyRNA *)&rna_Curve_use_path, (PropertyRNA *)&rna_Curve_splines,
	-1, "path_duration", 3, 0, 0, 4, 0, "Path Duration",
	"The number of frames that are needed to traverse the path, defining the maximum value for the \'Evaluation Time\' setting",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, pathlen), (RawPropertyType)0, nullptr},
	Curve_path_duration_get, Curve_path_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, 100, nullptr
};

BoolPropertyRNA rna_Curve_use_path = {
	{(PropertyRNA *)&rna_Curve_use_path_follow, (PropertyRNA *)&rna_Curve_path_duration,
	-1, "use_path", 3, 0, 0, 0, 0, "Path",
	"Enable the curve to become a translation path",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_path_get, Curve_use_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curve_use_path_follow = {
	{(PropertyRNA *)&rna_Curve_use_path_clamp, (PropertyRNA *)&rna_Curve_use_path,
	-1, "use_path_follow", 3, 0, 0, 0, 0, "Follow",
	"Make curve path children rotate along the path",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_path_follow_get, Curve_use_path_follow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curve_use_path_clamp = {
	{(PropertyRNA *)&rna_Curve_use_stretch, (PropertyRNA *)&rna_Curve_use_path_follow,
	-1, "use_path_clamp", 3, 0, 0, 0, 0, "Clamp",
	"Clamp the curve path children so they can\'t travel past the start/end point of the curve",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_path_clamp_get, Curve_use_path_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curve_use_stretch = {
	{(PropertyRNA *)&rna_Curve_use_deform_bounds, (PropertyRNA *)&rna_Curve_use_path_clamp,
	-1, "use_stretch", 3, 0, 0, 0, 0, "Stretch",
	"Option for curve-deform: make deformed child stretch along entire path",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_stretch_get, Curve_use_stretch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curve_use_deform_bounds = {
	{(PropertyRNA *)&rna_Curve_use_radius, (PropertyRNA *)&rna_Curve_use_stretch,
	-1, "use_deform_bounds", 3, 0, 0, 0, 0, "Bounds Clamp",
	"Option for curve-deform: Use the mesh bounds to clamp the deformation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_deform_bounds_get, Curve_use_deform_bounds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Curve_use_radius = {
	{(PropertyRNA *)&rna_Curve_bevel_mode, (PropertyRNA *)&rna_Curve_use_deform_bounds,
	-1, "use_radius", 3, 0, 0, 0, 0, "Radius",
	"Option for paths and curve-deform: apply the curve radius to objects following it and to deformed objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_radius_get, Curve_use_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static const EnumPropertyItem rna_Curve_bevel_mode_items[4] = {
	{0, "ROUND", 0, "Round", "Use circle for the section of the curve\'s bevel geometry"},
	{1, "OBJECT", 0, "Object", "Use an object for the section of the curve\'s bevel geometry segment"},
	{2, "PROFILE", 0, "Profile", "Use a custom profile for each quarter of curve\'s bevel geometry"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_bevel_mode = {
	{(PropertyRNA *)&rna_Curve_bevel_profile, (PropertyRNA *)&rna_Curve_use_radius,
	-1, "bevel_mode", 3, 0, 0, 0, 0, "Bevel Mode",
	"Determine how to build the curve\'s bevel geometry",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_bevel_resolution_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_bevel_mode_get, Curve_bevel_mode_set, nullptr, nullptr, nullptr, rna_Curve_bevel_mode_items, 3, 0
};

PointerPropertyRNA rna_Curve_bevel_profile = {
	{(PropertyRNA *)&rna_Curve_bevel_resolution, (PropertyRNA *)&rna_Curve_bevel_mode,
	-1, "bevel_profile", 8388608, 0, 0, 0, 0, "Custom Profile Path",
	"The path for the curve\'s custom profile",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_bevel_profile_get, nullptr, nullptr, nullptr,&RNA_CurveProfile
};

IntPropertyRNA rna_Curve_bevel_resolution = {
	{(PropertyRNA *)&rna_Curve_offset, (PropertyRNA *)&rna_Curve_bevel_profile,
	-1, "bevel_resolution", 3, 0, 0, 4, 0, "Bevel Resolution",
	"The number of segments in each quarter-circle of the bevel",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_bevel_resolution_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevresol), (RawPropertyType)1, nullptr},
	Curve_bevel_resolution_get, Curve_bevel_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32, 0, 32, 1, 4, nullptr
};

FloatPropertyRNA rna_Curve_offset = {
	{(PropertyRNA *)&rna_Curve_extrude, (PropertyRNA *)&rna_Curve_bevel_resolution,
	-1, "offset", 3, 0, 0, 0, 0, "Offset",
	"Distance to move the curve parallel to its normals",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_offset_get, Curve_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Curve_extrude = {
	{(PropertyRNA *)&rna_Curve_bevel_depth, (PropertyRNA *)&rna_Curve_offset,
	-1, "extrude", 3, 0, 0, 4, 0, "Extrude",
	"Length of the depth added in the local Z direction along the curve, perpendicular to its normals",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, extrude), (RawPropertyType)5, nullptr},
	Curve_extrude_get, Curve_extrude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Curve_bevel_depth = {
	{(PropertyRNA *)&rna_Curve_resolution_u, (PropertyRNA *)&rna_Curve_extrude,
	-1, "bevel_depth", 3, 0, 0, 4, 0, "Bevel Depth",
	"Radius of the bevel geometry, not including extrusion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevel_radius), (RawPropertyType)5, nullptr},
	Curve_bevel_depth_get, Curve_bevel_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Curve_resolution_u = {
	{(PropertyRNA *)&rna_Curve_resolution_v, (PropertyRNA *)&rna_Curve_bevel_depth,
	-1, "resolution_u", 1, 0, 0, 4, 0, "Resolution U",
	"Number of computed points in the U direction between every pair of control points",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_resolution_u_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolu), (RawPropertyType)1, nullptr},
	Curve_resolution_u_get, Curve_resolution_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 1024, 1, 12, nullptr
};

IntPropertyRNA rna_Curve_resolution_v = {
	{(PropertyRNA *)&rna_Curve_render_resolution_u, (PropertyRNA *)&rna_Curve_resolution_u,
	-1, "resolution_v", 1, 0, 0, 4, 0, "Resolution V",
	"The number of computed points in the V direction between every pair of control points",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_resolution_v_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolv), (RawPropertyType)1, nullptr},
	Curve_resolution_v_get, Curve_resolution_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 1024, 1, 1024, 1, 12, nullptr
};

IntPropertyRNA rna_Curve_render_resolution_u = {
	{(PropertyRNA *)&rna_Curve_render_resolution_v, (PropertyRNA *)&rna_Curve_resolution_v,
	-1, "render_resolution_u", 3, 0, 0, 4, 0, "Render Resolution U",
	"Surface resolution in U direction used while rendering (zero uses preview resolution)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolu_ren), (RawPropertyType)1, nullptr},
	Curve_render_resolution_u_get, Curve_render_resolution_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 64, 0, 1024, 1, 0, nullptr
};

IntPropertyRNA rna_Curve_render_resolution_v = {
	{(PropertyRNA *)&rna_Curve_eval_time, (PropertyRNA *)&rna_Curve_render_resolution_u,
	-1, "render_resolution_v", 3, 0, 0, 4, 0, "Render Resolution V",
	"Surface resolution in V direction used while rendering (zero uses preview resolution)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolv_ren), (RawPropertyType)1, nullptr},
	Curve_render_resolution_v_get, Curve_render_resolution_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1024, 0, 1024, 1, 0, nullptr
};

FloatPropertyRNA rna_Curve_eval_time = {
	{(PropertyRNA *)&rna_Curve_bevel_object, (PropertyRNA *)&rna_Curve_render_resolution_v,
	-1, "eval_time", 3, 0, 0, 4, 0, "Evaluation Time",
	"Parametric position along the length of the curve that Objects \'following\' it should be at (position is evaluated by dividing by the \'Path Length\' value)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, ctime), (RawPropertyType)5, nullptr},
	Curve_eval_time_get, Curve_eval_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_Curve_bevel_object = {
	{(PropertyRNA *)&rna_Curve_taper_object, (PropertyRNA *)&rna_Curve_eval_time,
	-1, "bevel_object", 8388737, 1, 0, 0, 0, "Bevel Object",
	"The name of the Curve object that defines the bevel shape",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_bevel_object_get, Curve_bevel_object_set, nullptr, rna_Curve_otherObject_poll,&RNA_Object
};

PointerPropertyRNA rna_Curve_taper_object = {
	{(PropertyRNA *)&rna_Curve_dimensions, (PropertyRNA *)&rna_Curve_bevel_object,
	-1, "taper_object", 8388737, 1, 0, 0, 0, "Taper Object",
	"Curve object name that defines the taper (width)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_taper_object_get, Curve_taper_object_set, nullptr, rna_Curve_otherObject_poll,&RNA_Object
};

static const EnumPropertyItem rna_Curve_dimensions_items[3] = {
	{0, "2D", 0, "2D", "Clamp the Z axis of the curve"},
	{1, "3D", 0, "3D", "Allow editing on the Z axis of this curve, also allows tilt and curve radius to be used"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_dimensions = {
	{(PropertyRNA *)&rna_Curve_fill_mode, (PropertyRNA *)&rna_Curve_taper_object,
	-1, "dimensions", 3, 0, 0, 0, 0, "Dimensions",
	"Select 2D or 3D curve type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_dimensions_get, Curve_dimensions_set, nullptr, nullptr, nullptr, rna_Curve_dimensions_items, 2, 0
};

static const EnumPropertyItem rna_Curve_fill_mode_items[5] = {
	{0, "FULL", 0, "Full", ""},
	{4, "BACK", 0, "Back", ""},
	{2, "FRONT", 0, "Front", ""},
	{6, "HALF", 0, "Half", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_fill_mode = {
	{(PropertyRNA *)&rna_Curve_twist_mode, (PropertyRNA *)&rna_Curve_dimensions,
	-1, "fill_mode", 3, 0, 0, 4, 0, "Fill Mode",
	"Mode of filling curve",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, flag), (RawPropertyType)0, nullptr},
	Curve_fill_mode_get, Curve_fill_mode_set, rna_Curve_fill_mode_itemf, nullptr, nullptr, rna_Curve_fill_mode_items, 4, 0
};

static const EnumPropertyItem rna_Curve_twist_mode_items[4] = {
	{0, "Z_UP", 0, "Z-Up", "Use Z-Up axis to calculate the curve twist at each point"},
	{3, "MINIMUM", 0, "Minimum", "Use the least twist over the entire curve"},
	{4, "TANGENT", 0, "Tangent", "Use the tangent to calculate twist"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_twist_mode = {
	{(PropertyRNA *)&rna_Curve_taper_radius_mode, (PropertyRNA *)&rna_Curve_fill_mode,
	-1, "twist_mode", 3, 0, 0, 4, 0, "Twist Method",
	"The type of tilt calculation for 3D Curves",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, twist_mode), (RawPropertyType)1, nullptr},
	Curve_twist_mode_get, Curve_twist_mode_set, nullptr, nullptr, nullptr, rna_Curve_twist_mode_items, 3, 3
};

static const EnumPropertyItem rna_Curve_taper_radius_mode_items[4] = {
	{0, "OVERRIDE", 0, "Override", "Override the radius of the spline point with the taper radius"},
	{1, "MULTIPLY", 0, "Multiply", "Multiply the radius of the spline point by the taper radius"},
	{2, "ADD", 0, "Add", "Add the radius of the bevel point to the taper radius"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_taper_radius_mode = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_mapping_start, (PropertyRNA *)&rna_Curve_twist_mode,
	-1, "taper_radius_mode", 3, 0, 0, 4, 0, "Taper Radius",
	"Determine how the effective radius of the spline point is computed when a taper object is specified",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, taper_radius_mode), (RawPropertyType)2, nullptr},
	Curve_taper_radius_mode_get, Curve_taper_radius_mode_set, nullptr, nullptr, nullptr, rna_Curve_taper_radius_mode_items, 3, 0
};

static const EnumPropertyItem rna_Curve_bevel_factor_mapping_start_items[4] = {
	{0, "RESOLUTION", 0, "Resolution", "Map the geometry factor to the number of subdivisions of a spline (U resolution)"},
	{1, "SEGMENTS", 0, "Segments", "Map the geometry factor to the length of a segment and to the number of subdivisions of a segment"},
	{2, "SPLINE", 0, "Spline", "Map the geometry factor to the length of a spline"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_bevel_factor_mapping_start = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_mapping_end, (PropertyRNA *)&rna_Curve_taper_radius_mode,
	-1, "bevel_factor_mapping_start", 3, 0, 0, 4, 0, "Start Mapping Type",
	"Determine how the geometry start factor is mapped to a spline",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac1_mapping), (RawPropertyType)2, nullptr},
	Curve_bevel_factor_mapping_start_get, Curve_bevel_factor_mapping_start_set, nullptr, nullptr, nullptr, rna_Curve_bevel_factor_mapping_start_items, 3, 0
};

static const EnumPropertyItem rna_Curve_bevel_factor_mapping_end_items[4] = {
	{0, "RESOLUTION", 0, "Resolution", "Map the geometry factor to the number of subdivisions of a spline (U resolution)"},
	{1, "SEGMENTS", 0, "Segments", "Map the geometry factor to the length of a segment and to the number of subdivisions of a segment"},
	{2, "SPLINE", 0, "Spline", "Map the geometry factor to the length of a spline"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Curve_bevel_factor_mapping_end = {
	{(PropertyRNA *)&rna_Curve_twist_smooth, (PropertyRNA *)&rna_Curve_bevel_factor_mapping_start,
	-1, "bevel_factor_mapping_end", 3, 0, 0, 4, 0, "End Mapping Type",
	"Determine how the geometry end factor is mapped to a spline",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac2_mapping), (RawPropertyType)2, nullptr},
	Curve_bevel_factor_mapping_end_get, Curve_bevel_factor_mapping_end_set, nullptr, nullptr, nullptr, rna_Curve_bevel_factor_mapping_end_items, 3, 0
};

FloatPropertyRNA rna_Curve_twist_smooth = {
	{(PropertyRNA *)&rna_Curve_use_fill_caps, (PropertyRNA *)&rna_Curve_bevel_factor_mapping_end,
	-1, "twist_smooth", 3, 0, 0, 4, 0, "Twist Smooth",
	"Smoothing iteration for tangents",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, twist_smooth), (RawPropertyType)5, nullptr},
	Curve_twist_smooth_get, Curve_twist_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_Curve_use_fill_caps = {
	{(PropertyRNA *)&rna_Curve_use_map_taper, (PropertyRNA *)&rna_Curve_twist_smooth,
	-1, "use_fill_caps", 3, 0, 0, 0, 0, "Fill Caps",
	"Fill caps for beveled curves",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_fill_caps_get, Curve_use_fill_caps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curve_use_map_taper = {
	{(PropertyRNA *)&rna_Curve_use_auto_texspace, (PropertyRNA *)&rna_Curve_use_fill_caps,
	-1, "use_map_taper", 3, 0, 0, 0, 0, "Map Taper",
	"Map effect of the taper object to the beveled part of the curve",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_map_taper_get, Curve_use_map_taper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curve_use_auto_texspace = {
	{(PropertyRNA *)&rna_Curve_texspace_location, (PropertyRNA *)&rna_Curve_use_map_taper,
	-1, "use_auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_texspace_set, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_use_auto_texspace_get, Curve_use_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static float rna_Curve_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Curve_texspace_location = {
	{(PropertyRNA *)&rna_Curve_texspace_size, (PropertyRNA *)&rna_Curve_use_auto_texspace,
	-1, "texspace_location", 3, 0, 0, 0, 0, "Texture Space Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Curve_update_data, 0, rna_Curve_texspace_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Curve_texspace_location_get, Curve_texspace_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Curve_texspace_location_default
};

static float rna_Curve_texspace_size_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Curve_texspace_size = {
	{(PropertyRNA *)&rna_Curve_materials, (PropertyRNA *)&rna_Curve_texspace_location,
	-1, "texspace_size", 67108867, 0, 0, 0, 0, "Texture Space Size",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Curve_update_data, 0, rna_Curve_texspace_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Curve_texspace_size_get, Curve_texspace_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Curve_texspace_size_default
};

CollectionPropertyRNA rna_Curve_materials = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_start, (PropertyRNA *)&rna_Curve_texspace_size,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDMaterials},
	Curve_materials_begin, Curve_materials_next, Curve_materials_end, Curve_materials_get, Curve_materials_length, Curve_materials_lookup_int, Curve_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

FloatPropertyRNA rna_Curve_bevel_factor_start = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_end, (PropertyRNA *)&rna_Curve_materials,
	-1, "bevel_factor_start", 3, 0, 0, 4, 0, "Geometry Start Factor",
	"Define where along the spline the curve geometry starts (0 for the beginning, 1 for the end)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac1), (RawPropertyType)5, nullptr},
	Curve_bevel_factor_start_get, Curve_bevel_factor_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Curve_bevel_factor_end = {
	{(PropertyRNA *)&rna_Curve_is_editmode, (PropertyRNA *)&rna_Curve_bevel_factor_start,
	-1, "bevel_factor_end", 3, 0, 0, 4, 0, "Geometry End Factor",
	"Define where along the spline the curve geometry ends (0 for the beginning, 1 for the end)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac2), (RawPropertyType)5, nullptr},
	Curve_bevel_factor_end_get, Curve_bevel_factor_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_Curve_is_editmode = {
	{(PropertyRNA *)&rna_Curve_animation_data, (PropertyRNA *)&rna_Curve_bevel_factor_end,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curve_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Curve_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Curve_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Curve_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

static float rna_Curve_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Curve_transform_matrix = {
	{(PropertyRNA *)&rna_Curve_transform_shape_keys, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Curve_transform_matrix_default
};

BoolPropertyRNA rna_Curve_transform_shape_keys = {
	{nullptr, (PropertyRNA *)&rna_Curve_transform_matrix,
	-1, "shape_keys", 3, 0, 0, 0, 0, "",
	"Transform Shape Keys",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Curve_transform_func = {
	{(FunctionRNA *)&rna_Curve_validate_material_indices_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Curve_transform_matrix, (PropertyRNA *)&rna_Curve_transform_shape_keys}},
	"transform", 0, "Transform curve by a matrix",
	Curve_transform_call,
	nullptr
};

BoolPropertyRNA rna_Curve_validate_material_indices_result = {
	{nullptr, nullptr,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Curve_validate_material_indices_func = {
	{(FunctionRNA *)&rna_Curve_update_gpu_tag_func, (FunctionRNA *)&rna_Curve_transform_func,
	nullptr,
	{(PropertyRNA *)&rna_Curve_validate_material_indices_result, (PropertyRNA *)&rna_Curve_validate_material_indices_result}},
	"validate_material_indices", 0, "Validate material indices of splines or letters, return True when the curve has had invalid indices corrected (to default 0)",
	Curve_validate_material_indices_call,
	(PropertyRNA *)&rna_Curve_validate_material_indices_result
};

FunctionRNA rna_Curve_update_gpu_tag_func = {
	{nullptr, (FunctionRNA *)&rna_Curve_validate_material_indices_func,
	nullptr,
	{nullptr, nullptr}},
	"update_gpu_tag", 0, "update_gpu_tag",
	Curve_update_gpu_tag_call,
	nullptr
};

StructRNA RNA_Curve = {
	{(ContainerRNA *)&RNA_CurveSplines, (ContainerRNA *)&RNA_Context,
	nullptr,
	{(PropertyRNA *)&rna_Curve_shape_keys, (PropertyRNA *)&rna_Curve_animation_data}},
	"Curve", nullptr, nullptr, 519, nullptr, "Curve",
	"Curve data-block storing curves, splines and NURBS",
	"*", 161,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_Curve_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Curve_transform_func, (FunctionRNA *)&rna_Curve_update_gpu_tag_func}
};

/* Curve Splines */
CollectionPropertyRNA rna_CurveSplines_rna_properties = {
	{(PropertyRNA *)&rna_CurveSplines_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSplines_rna_properties_begin, CurveSplines_rna_properties_next, CurveSplines_rna_properties_end, CurveSplines_rna_properties_get, nullptr, nullptr, CurveSplines_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveSplines_rna_type = {
	{(PropertyRNA *)&rna_CurveSplines_active, (PropertyRNA *)&rna_CurveSplines_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSplines_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_CurveSplines_active = {
	{nullptr, (PropertyRNA *)&rna_CurveSplines_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Spline",
	"Active curve spline",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSplines_active_get, CurveSplines_active_set, nullptr, nullptr,&RNA_Spline
};

static const EnumPropertyItem rna_CurveSplines_new_type_items[4] = {
	{0, "POLY", 0, "Poly", ""},
	{1, "BEZIER", 0, "Bezier", ""},
	{4, "NURBS", 0, "Ease", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_CurveSplines_new_type = {
	{(PropertyRNA *)&rna_CurveSplines_new_spline, nullptr,
	-1, "type", 3, 0, 1, 0, 0, "",
	"type for the new spline",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveSplines_new_type_items, 3, 0
};

PointerPropertyRNA rna_CurveSplines_new_spline = {
	{nullptr, (PropertyRNA *)&rna_CurveSplines_new_type,
	-1, "spline", 8388608, 0, 2, 0, 0, "",
	"The newly created spline",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Spline
};

FunctionRNA rna_CurveSplines_new_func = {
	{(FunctionRNA *)&rna_CurveSplines_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_CurveSplines_new_type, (PropertyRNA *)&rna_CurveSplines_new_spline}},
	"new", 0, "Add a new spline to the curve",
	CurveSplines_new_call,
	(PropertyRNA *)&rna_CurveSplines_new_spline
};

PointerPropertyRNA rna_CurveSplines_remove_spline = {
	{nullptr, nullptr,
	-1, "spline", 262144, 0, 5, 0, 0, "",
	"The spline to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Spline
};

FunctionRNA rna_CurveSplines_remove_func = {
	{(FunctionRNA *)&rna_CurveSplines_clear_func, (FunctionRNA *)&rna_CurveSplines_new_func,
	nullptr,
	{(PropertyRNA *)&rna_CurveSplines_remove_spline, (PropertyRNA *)&rna_CurveSplines_remove_spline}},
	"remove", 16, "Remove a spline from a curve",
	CurveSplines_remove_call,
	nullptr
};

FunctionRNA rna_CurveSplines_clear_func = {
	{nullptr, (FunctionRNA *)&rna_CurveSplines_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove all splines from a curve",
	CurveSplines_clear_call,
	nullptr
};

StructRNA RNA_CurveSplines = {
	{(ContainerRNA *)&RNA_SurfaceCurve, (ContainerRNA *)&RNA_Curve,
	nullptr,
	{(PropertyRNA *)&rna_CurveSplines_rna_properties, (PropertyRNA *)&rna_CurveSplines_active}},
	"CurveSplines", nullptr, nullptr, 516, nullptr, "Curve Splines",
	"Collection of curve splines",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveSplines_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_CurveSplines_new_func, (FunctionRNA *)&rna_CurveSplines_clear_func}
};

/* Surface Curve */
StructRNA RNA_SurfaceCurve = {
	{(ContainerRNA *)&RNA_TextCurve, (ContainerRNA *)&RNA_CurveSplines,
	nullptr,
	{nullptr, nullptr}},
	"SurfaceCurve", nullptr, nullptr, 519, nullptr, "Surface Curve",
	"Curve data-block used for storing surfaces",
	"*", 188,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Curve,
	nullptr,
	rna_Curve_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

/* Text Curve */
static const EnumPropertyItem rna_TextCurve_align_x_items[6] = {
	{0, "LEFT", 390, "Left", "Align text to the left"},
	{1, "CENTER", 391, "Center", "Center text"},
	{2, "RIGHT", 392, "Right", "Align text to the right"},
	{3, "JUSTIFY", 393, "Justify", "Align to the left and the right"},
	{4, "FLUSH", 394, "Flush", "Align to the left and the right, with equal character spacing"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_TextCurve_align_x = {
	{(PropertyRNA *)&rna_TextCurve_align_y, nullptr,
	-1, "align_x", 3, 0, 0, 4, 0, "Horizontal Alignment",
	"Text horizontal alignment from the object center",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, spacemode), (RawPropertyType)2, nullptr},
	TextCurve_align_x_get, TextCurve_align_x_set, nullptr, nullptr, nullptr, rna_TextCurve_align_x_items, 5, 0
};

static const EnumPropertyItem rna_TextCurve_align_y_items[6] = {
	{1, "TOP", 395, "Top", "Align text to the top"},
	{0, "TOP_BASELINE", 395, "Top Baseline", "Align text to the top line\'s baseline"},
	{2, "CENTER", 396, "Middle", "Align text to the middle"},
	{3, "BOTTOM_BASELINE", 397, "Bottom Baseline", "Align text to the bottom line\'s baseline"},
	{4, "BOTTOM", 397, "Bottom", "Align text to the bottom"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_TextCurve_align_y = {
	{(PropertyRNA *)&rna_TextCurve_overflow, (PropertyRNA *)&rna_TextCurve_align_x,
	-1, "align_y", 3, 0, 0, 4, 0, "Vertical Alignment",
	"Text vertical alignment from the object center",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, align_y), (RawPropertyType)2, nullptr},
	TextCurve_align_y_get, TextCurve_align_y_set, nullptr, nullptr, nullptr, rna_TextCurve_align_y_items, 5, 0
};

static const EnumPropertyItem rna_TextCurve_overflow_items[4] = {
	{0, "NONE", 0, "Overflow", "Let the text overflow outside the text boxes"},
	{1, "SCALE", 0, "Scale to Fit", "Scale down the text to fit inside the text boxes"},
	{2, "TRUNCATE", 0, "Truncate", "Truncate the text that would go outside the text boxes"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_TextCurve_overflow = {
	{(PropertyRNA *)&rna_TextCurve_size, (PropertyRNA *)&rna_TextCurve_align_y,
	-1, "overflow", 3, 0, 0, 4, 0, "Textbox Overflow",
	"Handle the text behavior when it doesn\'t fit in the text boxes",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, overflow), (RawPropertyType)2, nullptr},
	TextCurve_overflow_get, TextCurve_overflow_set, nullptr, nullptr, nullptr, rna_TextCurve_overflow_items, 3, 0
};

FloatPropertyRNA rna_TextCurve_size = {
	{(PropertyRNA *)&rna_TextCurve_small_caps_scale, (PropertyRNA *)&rna_TextCurve_overflow,
	-1, "size", 3, 0, 0, 4, 0, "Font Size",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, fsize), (RawPropertyType)5, nullptr},
	TextCurve_size_get, TextCurve_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_small_caps_scale = {
	{(PropertyRNA *)&rna_TextCurve_space_line, (PropertyRNA *)&rna_TextCurve_size,
	-1, "small_caps_scale", 3, 0, 0, 4, 0, "Small Caps",
	"Scale of small capitals",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, smallcaps_scale), (RawPropertyType)5, nullptr},
	TextCurve_small_caps_scale_get, TextCurve_small_caps_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.7500000000f, nullptr
};

FloatPropertyRNA rna_TextCurve_space_line = {
	{(PropertyRNA *)&rna_TextCurve_space_word, (PropertyRNA *)&rna_TextCurve_small_caps_scale,
	-1, "space_line", 3, 0, 0, 4, 0, "Distance between lines of text",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, linedist), (RawPropertyType)5, nullptr},
	TextCurve_space_line_get, TextCurve_space_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_space_word = {
	{(PropertyRNA *)&rna_TextCurve_space_character, (PropertyRNA *)&rna_TextCurve_space_line,
	-1, "space_word", 3, 0, 0, 4, 0, "Spacing between words",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, wordspace), (RawPropertyType)5, nullptr},
	TextCurve_space_word_get, TextCurve_space_word_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_space_character = {
	{(PropertyRNA *)&rna_TextCurve_shear, (PropertyRNA *)&rna_TextCurve_space_word,
	-1, "space_character", 3, 0, 0, 4, 0, "Global spacing between characters",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, spacing), (RawPropertyType)5, nullptr},
	TextCurve_space_character_get, TextCurve_space_character_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_shear = {
	{(PropertyRNA *)&rna_TextCurve_offset_x, (PropertyRNA *)&rna_TextCurve_space_character,
	-1, "shear", 3, 0, 0, 4, 0, "Shear",
	"Italic angle of the characters",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, shear), (RawPropertyType)5, nullptr},
	TextCurve_shear_get, TextCurve_shear_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_offset_x = {
	{(PropertyRNA *)&rna_TextCurve_offset_y, (PropertyRNA *)&rna_TextCurve_shear,
	-1, "offset_x", 3, 0, 0, 4, 0, "X Offset",
	"Horizontal offset from the object origin",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, xof), (RawPropertyType)5, nullptr},
	TextCurve_offset_x_get, TextCurve_offset_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_offset_y = {
	{(PropertyRNA *)&rna_TextCurve_underline_position, (PropertyRNA *)&rna_TextCurve_offset_x,
	-1, "offset_y", 3, 0, 0, 4, 0, "Y Offset",
	"Vertical offset from the object origin",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, yof), (RawPropertyType)5, nullptr},
	TextCurve_offset_y_get, TextCurve_offset_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_underline_position = {
	{(PropertyRNA *)&rna_TextCurve_underline_height, (PropertyRNA *)&rna_TextCurve_offset_y,
	-1, "underline_position", 3, 0, 0, 4, 0, "Underline Position",
	"Vertical position of underline",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, ulpos), (RawPropertyType)5, nullptr},
	TextCurve_underline_position_get, TextCurve_underline_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.2000000030f, 0.8000000119f, -0.2000000030f, 0.8000000119f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextCurve_underline_height = {
	{(PropertyRNA *)&rna_TextCurve_text_boxes, (PropertyRNA *)&rna_TextCurve_underline_position,
	-1, "underline_height", 3, 0, 0, 4, 0, "Underline Thickness",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, ulheight), (RawPropertyType)5, nullptr},
	TextCurve_underline_height_get, TextCurve_underline_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.8000000119f, 0.0f, 0.8000000119f, 10.0f, 3, 0.0500000007f, nullptr
};

CollectionPropertyRNA rna_TextCurve_text_boxes = {
	{(PropertyRNA *)&rna_TextCurve_active_textbox, (PropertyRNA *)&rna_TextCurve_underline_height,
	-1, "text_boxes", 0, 0, 0, 8, 0, "Textboxes",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_text_boxes_begin, TextCurve_text_boxes_next, TextCurve_text_boxes_end, TextCurve_text_boxes_get, TextCurve_text_boxes_length, TextCurve_text_boxes_lookup_int, nullptr, nullptr, &RNA_TextBox
};

IntPropertyRNA rna_TextCurve_active_textbox = {
	{(PropertyRNA *)&rna_TextCurve_family, (PropertyRNA *)&rna_TextCurve_text_boxes,
	-1, "active_textbox", 3, 0, 0, 4, 0, "Active Text Box",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, actbox), (RawPropertyType)0, nullptr},
	TextCurve_active_textbox_get, TextCurve_active_textbox_set, nullptr, nullptr, rna_Curve_active_textbox_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_TextCurve_family = {
	{(PropertyRNA *)&rna_TextCurve_body, (PropertyRNA *)&rna_TextCurve_active_textbox,
	-1, "family", 262145, 0, 0, 0, 0, "Object Font",
	"Use objects as font characters (give font objects a common name followed by the character they represent, eg. \'family-a\', \'family-b\', etc, set this setting to \'family-\', and turn on Vertex Instancing)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_family_get, TextCurve_family_length, TextCurve_family_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_TextCurve_body = {
	{(PropertyRNA *)&rna_TextCurve_body_format, (PropertyRNA *)&rna_TextCurve_family,
	-1, "body", 262145, 0, 0, 0, 0, "Body Text",
	"Content of this text object",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_body_get, TextCurve_body_length, TextCurve_body_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 8192, ""
};

CollectionPropertyRNA rna_TextCurve_body_format = {
	{(PropertyRNA *)&rna_TextCurve_follow_curve, (PropertyRNA *)&rna_TextCurve_body,
	-1, "body_format", 0, 0, 0, 8, 0, "Character Info",
	"Stores the style of each character",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_body_format_begin, TextCurve_body_format_next, TextCurve_body_format_end, TextCurve_body_format_get, TextCurve_body_format_length, TextCurve_body_format_lookup_int, nullptr, nullptr, &RNA_TextCharacterFormat
};

PointerPropertyRNA rna_TextCurve_follow_curve = {
	{(PropertyRNA *)&rna_TextCurve_font, (PropertyRNA *)&rna_TextCurve_body_format,
	-1, "follow_curve", 8388737, 1, 0, 0, 0, "Text on Curve",
	"Curve deforming text object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_follow_curve_get, TextCurve_follow_curve_set, nullptr, rna_Curve_otherObject_poll,&RNA_Object
};

PointerPropertyRNA rna_TextCurve_font = {
	{(PropertyRNA *)&rna_TextCurve_font_bold, (PropertyRNA *)&rna_TextCurve_follow_curve,
	-1, "font", 8388801, 1, 0, 0, 0, "Font",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_font_get, TextCurve_font_set, nullptr, nullptr,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_bold = {
	{(PropertyRNA *)&rna_TextCurve_font_italic, (PropertyRNA *)&rna_TextCurve_font,
	-1, "font_bold", 8388801, 1, 0, 0, 0, "Font Bold",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_font_bold_get, TextCurve_font_bold_set, nullptr, nullptr,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_italic = {
	{(PropertyRNA *)&rna_TextCurve_font_bold_italic, (PropertyRNA *)&rna_TextCurve_font_bold,
	-1, "font_italic", 8388801, 1, 0, 0, 0, "Font Italic",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_font_italic_get, TextCurve_font_italic_set, nullptr, nullptr,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_bold_italic = {
	{(PropertyRNA *)&rna_TextCurve_edit_format, (PropertyRNA *)&rna_TextCurve_font_italic,
	-1, "font_bold_italic", 8388801, 1, 0, 0, 0, "Font Bold Italic",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_font_bold_italic_get, TextCurve_font_bold_italic_set, nullptr, nullptr,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_edit_format = {
	{(PropertyRNA *)&rna_TextCurve_use_fast_edit, (PropertyRNA *)&rna_TextCurve_font_bold_italic,
	-1, "edit_format", 8388608, 0, 0, 0, 0, "Edit Format",
	"Editing settings character formatting",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_edit_format_get, nullptr, nullptr, nullptr,&RNA_TextCharacterFormat
};

BoolPropertyRNA rna_TextCurve_use_fast_edit = {
	{(PropertyRNA *)&rna_TextCurve_is_select_bold, (PropertyRNA *)&rna_TextCurve_edit_format,
	-1, "use_fast_edit", 3, 0, 0, 0, 0, "Fast Editing",
	"Don\'t fill polygons while editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_use_fast_edit_get, TextCurve_use_fast_edit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCurve_is_select_bold = {
	{(PropertyRNA *)&rna_TextCurve_is_select_italic, (PropertyRNA *)&rna_TextCurve_use_fast_edit,
	-1, "is_select_bold", 2, 0, 0, 0, 0, "Selected Bold",
	"Whether the selected text is bold",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_is_select_bold_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCurve_is_select_italic = {
	{(PropertyRNA *)&rna_TextCurve_is_select_underline, (PropertyRNA *)&rna_TextCurve_is_select_bold,
	-1, "is_select_italic", 2, 0, 0, 0, 0, "Selected Italic",
	"Whether the selected text is italics",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_is_select_italic_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCurve_is_select_underline = {
	{(PropertyRNA *)&rna_TextCurve_is_select_smallcaps, (PropertyRNA *)&rna_TextCurve_is_select_italic,
	-1, "is_select_underline", 2, 0, 0, 0, 0, "Selected Underline",
	"Whether the selected text is underlined",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_is_select_underline_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCurve_is_select_smallcaps = {
	{(PropertyRNA *)&rna_TextCurve_has_selection, (PropertyRNA *)&rna_TextCurve_is_select_underline,
	-1, "is_select_smallcaps", 2, 0, 0, 0, 0, "Selected Small Caps",
	"Whether the selected text is small caps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_is_select_smallcaps_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCurve_has_selection = {
	{nullptr, (PropertyRNA *)&rna_TextCurve_is_select_smallcaps,
	-1, "has_selection", 2, 0, 0, 0, 0, "Text Selected",
	"Whether there is any text selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCurve_has_selection_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_TextCurve = {
	{(ContainerRNA *)&RNA_TextBox, (ContainerRNA *)&RNA_SurfaceCurve,
	nullptr,
	{(PropertyRNA *)&rna_TextCurve_align_x, (PropertyRNA *)&rna_TextCurve_has_selection}},
	"TextCurve", nullptr, nullptr, 519, nullptr, "Text Curve",
	"Curve data-block used for storing text",
	"*", 186,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Curve,
	nullptr,
	rna_Curve_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

/* Text Box */
CollectionPropertyRNA rna_TextBox_rna_properties = {
	{(PropertyRNA *)&rna_TextBox_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextBox_rna_properties_begin, TextBox_rna_properties_next, TextBox_rna_properties_end, TextBox_rna_properties_get, nullptr, nullptr, TextBox_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_TextBox_rna_type = {
	{(PropertyRNA *)&rna_TextBox_x, (PropertyRNA *)&rna_TextBox_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextBox_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_TextBox_x = {
	{(PropertyRNA *)&rna_TextBox_y, (PropertyRNA *)&rna_TextBox_rna_type,
	-1, "x", 3, 0, 0, 4, 0, "Textbox X Offset",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, x), (RawPropertyType)5, nullptr},
	TextBox_x_get, TextBox_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextBox_y = {
	{(PropertyRNA *)&rna_TextBox_width, (PropertyRNA *)&rna_TextBox_x,
	-1, "y", 3, 0, 0, 4, 0, "Textbox Y Offset",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, y), (RawPropertyType)5, nullptr},
	TextBox_y_get, TextBox_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextBox_width = {
	{(PropertyRNA *)&rna_TextBox_height, (PropertyRNA *)&rna_TextBox_y,
	-1, "width", 3, 0, 0, 4, 0, "Textbox Width",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, w), (RawPropertyType)5, nullptr},
	TextBox_width_get, TextBox_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_TextBox_height = {
	{nullptr, (PropertyRNA *)&rna_TextBox_width,
	-1, "height", 3, 0, 0, 4, 0, "Textbox Height",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, h), (RawPropertyType)5, nullptr},
	TextBox_height_get, TextBox_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_TextBox = {
	{(ContainerRNA *)&RNA_TextCharacterFormat, (ContainerRNA *)&RNA_TextCurve,
	nullptr,
	{(PropertyRNA *)&rna_TextBox_rna_properties, (PropertyRNA *)&rna_TextBox_height}},
	"TextBox", nullptr, nullptr, 516, nullptr, "Text Box",
	"Text bounding box for layout",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_TextBox_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_TextBox_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Text Character Format */
CollectionPropertyRNA rna_TextCharacterFormat_rna_properties = {
	{(PropertyRNA *)&rna_TextCharacterFormat_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_rna_properties_begin, TextCharacterFormat_rna_properties_next, TextCharacterFormat_rna_properties_end, TextCharacterFormat_rna_properties_get, nullptr, nullptr, TextCharacterFormat_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_TextCharacterFormat_rna_type = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_bold, (PropertyRNA *)&rna_TextCharacterFormat_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_TextCharacterFormat_use_bold = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_italic, (PropertyRNA *)&rna_TextCharacterFormat_rna_type,
	-1, "use_bold", 3, 0, 0, 0, 0, "Bold",
	"",
	398, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_use_bold_get, TextCharacterFormat_use_bold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCharacterFormat_use_italic = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_underline, (PropertyRNA *)&rna_TextCharacterFormat_use_bold,
	-1, "use_italic", 3, 0, 0, 0, 0, "Italic",
	"",
	399, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_use_italic_get, TextCharacterFormat_use_italic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCharacterFormat_use_underline = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_small_caps, (PropertyRNA *)&rna_TextCharacterFormat_use_italic,
	-1, "use_underline", 3, 0, 0, 0, 0, "Underline",
	"",
	400, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_use_underline_get, TextCharacterFormat_use_underline_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_TextCharacterFormat_use_small_caps = {
	{(PropertyRNA *)&rna_TextCharacterFormat_material_index, (PropertyRNA *)&rna_TextCharacterFormat_use_underline,
	-1, "use_small_caps", 3, 0, 0, 0, 0, "Small Caps",
	"",
	401, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_use_small_caps_get, TextCharacterFormat_use_small_caps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_TextCharacterFormat_material_index = {
	{(PropertyRNA *)&rna_TextCharacterFormat_kerning, (PropertyRNA *)&rna_TextCharacterFormat_use_small_caps,
	-1, "material_index", 3, 0, 0, 0, 0, "Material Index",
	"Material slot index of this character",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextCharacterFormat_material_index_get, TextCharacterFormat_material_index_set, nullptr, nullptr, rna_Curve_material_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_TextCharacterFormat_kerning = {
	{nullptr, (PropertyRNA *)&rna_TextCharacterFormat_material_index,
	-1, "kerning", 3, 0, 0, 4, 0, "Kerning",
	"Spacing between characters",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CharInfo, kern), (RawPropertyType)5, nullptr},
	TextCharacterFormat_kerning_get, TextCharacterFormat_kerning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_TextCharacterFormat = {
	{(ContainerRNA *)&RNA_SplinePoint, (ContainerRNA *)&RNA_TextBox,
	nullptr,
	{(PropertyRNA *)&rna_TextCharacterFormat_rna_properties, (PropertyRNA *)&rna_TextCharacterFormat_kerning}},
	"TextCharacterFormat", nullptr, nullptr, 516, nullptr, "Text Character Format",
	"Text character formatting settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_TextCharacterFormat_rna_properties,
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

/* SplinePoint */
CollectionPropertyRNA rna_SplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_SplinePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplinePoint_rna_properties_begin, SplinePoint_rna_properties_next, SplinePoint_rna_properties_end, SplinePoint_rna_properties_get, nullptr, nullptr, SplinePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_SplinePoint_rna_type = {
	{(PropertyRNA *)&rna_SplinePoint_select, (PropertyRNA *)&rna_SplinePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplinePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_SplinePoint_select = {
	{(PropertyRNA *)&rna_SplinePoint_hide, (PropertyRNA *)&rna_SplinePoint_rna_type,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplinePoint_select_get, SplinePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SplinePoint_hide = {
	{(PropertyRNA *)&rna_SplinePoint_co, (PropertyRNA *)&rna_SplinePoint_select,
	-1, "hide", 3, 0, 0, 4, 0, "Hide",
	"Visibility status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, hide), (RawPropertyType)1, nullptr},
	SplinePoint_hide_get, SplinePoint_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_SplinePoint_co_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SplinePoint_co = {
	{(PropertyRNA *)&rna_SplinePoint_weight, (PropertyRNA *)&rna_SplinePoint_hide,
	-1, "co", 3, 0, 0, 4, 0, "Point",
	"Point coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {4, 0, 0}, 4,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, vec), (RawPropertyType)5, nullptr},
	nullptr, nullptr, SplinePoint_co_get, SplinePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_SplinePoint_co_default
};

FloatPropertyRNA rna_SplinePoint_weight = {
	{(PropertyRNA *)&rna_SplinePoint_tilt, (PropertyRNA *)&rna_SplinePoint_co,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"NURBS weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, vec[3]), (RawPropertyType)5, nullptr},
	SplinePoint_weight_get, SplinePoint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SplinePoint_tilt = {
	{(PropertyRNA *)&rna_SplinePoint_weight_softbody, (PropertyRNA *)&rna_SplinePoint_weight,
	-1, "tilt", 3, 0, 0, 4, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, tilt), (RawPropertyType)5, nullptr},
	SplinePoint_tilt_get, SplinePoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SplinePoint_weight_softbody = {
	{(PropertyRNA *)&rna_SplinePoint_radius, (PropertyRNA *)&rna_SplinePoint_tilt,
	-1, "weight_softbody", 3, 0, 0, 4, 0, "Weight",
	"Softbody goal weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, weight), (RawPropertyType)5, nullptr},
	SplinePoint_weight_softbody_get, SplinePoint_weight_softbody_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SplinePoint_radius = {
	{nullptr, (PropertyRNA *)&rna_SplinePoint_weight_softbody,
	-1, "radius", 3, 0, 0, 4, 0, "Bevel Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, radius), (RawPropertyType)5, nullptr},
	SplinePoint_radius_get, SplinePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_SplinePoint = {
	{(ContainerRNA *)&RNA_BezierSplinePoint, (ContainerRNA *)&RNA_TextCharacterFormat,
	nullptr,
	{(PropertyRNA *)&rna_SplinePoint_rna_properties, (PropertyRNA *)&rna_SplinePoint_radius}},
	"SplinePoint", nullptr, nullptr, 516, nullptr, "SplinePoint",
	"Spline point without handles",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_SplinePoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_Curve_spline_point_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Bezier Curve Point */
CollectionPropertyRNA rna_BezierSplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_BezierSplinePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_rna_properties_begin, BezierSplinePoint_rna_properties_next, BezierSplinePoint_rna_properties_end, BezierSplinePoint_rna_properties_get, nullptr, nullptr, BezierSplinePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BezierSplinePoint_rna_type = {
	{(PropertyRNA *)&rna_BezierSplinePoint_select_left_handle, (PropertyRNA *)&rna_BezierSplinePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BezierSplinePoint_select_left_handle = {
	{(PropertyRNA *)&rna_BezierSplinePoint_select_right_handle, (PropertyRNA *)&rna_BezierSplinePoint_rna_type,
	-1, "select_left_handle", 3, 0, 0, 0, 0, "Handle 1 selected",
	"Handle 1 selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_select_left_handle_get, BezierSplinePoint_select_left_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BezierSplinePoint_select_right_handle = {
	{(PropertyRNA *)&rna_BezierSplinePoint_select_control_point, (PropertyRNA *)&rna_BezierSplinePoint_select_left_handle,
	-1, "select_right_handle", 3, 0, 0, 0, 0, "Handle 2 selected",
	"Handle 2 selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_select_right_handle_get, BezierSplinePoint_select_right_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BezierSplinePoint_select_control_point = {
	{(PropertyRNA *)&rna_BezierSplinePoint_hide, (PropertyRNA *)&rna_BezierSplinePoint_select_right_handle,
	-1, "select_control_point", 3, 0, 0, 0, 0, "Control Point selected",
	"Control point selection status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_select_control_point_get, BezierSplinePoint_select_control_point_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BezierSplinePoint_hide = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_left_type, (PropertyRNA *)&rna_BezierSplinePoint_select_control_point,
	-1, "hide", 3, 0, 0, 4, 0, "Hide",
	"Visibility status",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, hide), (RawPropertyType)2, nullptr},
	BezierSplinePoint_hide_get, BezierSplinePoint_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_BezierSplinePoint_handle_left_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{1, "AUTO", 0, "Auto", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BezierSplinePoint_handle_left_type = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_right_type, (PropertyRNA *)&rna_BezierSplinePoint_hide,
	-1, "handle_left_type", 3, 0, 0, 0, 0, "Handle 1 Type",
	"Handle types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_points, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_handle_left_type_get, BezierSplinePoint_handle_left_type_set, nullptr, nullptr, nullptr, rna_BezierSplinePoint_handle_left_type_items, 4, 0
};

static const EnumPropertyItem rna_BezierSplinePoint_handle_right_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{1, "AUTO", 0, "Auto", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BezierSplinePoint_handle_right_type = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_left, (PropertyRNA *)&rna_BezierSplinePoint_handle_left_type,
	-1, "handle_right_type", 3, 0, 0, 0, 0, "Handle 2 Type",
	"Handle types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_points, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BezierSplinePoint_handle_right_type_get, BezierSplinePoint_handle_right_type_set, nullptr, nullptr, nullptr, rna_BezierSplinePoint_handle_right_type_items, 4, 0
};

static float rna_BezierSplinePoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_handle_left = {
	{(PropertyRNA *)&rna_BezierSplinePoint_co, (PropertyRNA *)&rna_BezierSplinePoint_handle_right_type,
	-1, "handle_left", 3, 0, 0, 0, 0, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, BezierSplinePoint_handle_left_get, BezierSplinePoint_handle_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_BezierSplinePoint_handle_left_default
};

static float rna_BezierSplinePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_co = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_right, (PropertyRNA *)&rna_BezierSplinePoint_handle_left,
	-1, "co", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, BezierSplinePoint_co_get, BezierSplinePoint_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_BezierSplinePoint_co_default
};

static float rna_BezierSplinePoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_handle_right = {
	{(PropertyRNA *)&rna_BezierSplinePoint_tilt, (PropertyRNA *)&rna_BezierSplinePoint_co,
	-1, "handle_right", 3, 0, 0, 0, 0, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, BezierSplinePoint_handle_right_get, BezierSplinePoint_handle_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_BezierSplinePoint_handle_right_default
};

FloatPropertyRNA rna_BezierSplinePoint_tilt = {
	{(PropertyRNA *)&rna_BezierSplinePoint_weight_softbody, (PropertyRNA *)&rna_BezierSplinePoint_handle_right,
	-1, "tilt", 3, 0, 0, 4, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, tilt), (RawPropertyType)5, nullptr},
	BezierSplinePoint_tilt_get, BezierSplinePoint_tilt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BezierSplinePoint_weight_softbody = {
	{(PropertyRNA *)&rna_BezierSplinePoint_radius, (PropertyRNA *)&rna_BezierSplinePoint_tilt,
	-1, "weight_softbody", 3, 0, 0, 4, 0, "Weight",
	"Softbody goal weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, weight), (RawPropertyType)5, nullptr},
	BezierSplinePoint_weight_softbody_get, BezierSplinePoint_weight_softbody_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BezierSplinePoint_radius = {
	{nullptr, (PropertyRNA *)&rna_BezierSplinePoint_weight_softbody,
	-1, "radius", 3, 0, 0, 4, 0, "Bevel Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, radius), (RawPropertyType)5, nullptr},
	BezierSplinePoint_radius_get, BezierSplinePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_BezierSplinePoint = {
	{(ContainerRNA *)&RNA_Spline, (ContainerRNA *)&RNA_SplinePoint,
	nullptr,
	{(PropertyRNA *)&rna_BezierSplinePoint_rna_properties, (PropertyRNA *)&rna_BezierSplinePoint_radius}},
	"BezierSplinePoint", nullptr, nullptr, 516, nullptr, "Bezier Curve Point",
	"Bezier curve point with two handles",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BezierSplinePoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_Curve_spline_point_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Spline */
CollectionPropertyRNA rna_Spline_rna_properties = {
	{(PropertyRNA *)&rna_Spline_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_rna_properties_begin, Spline_rna_properties_next, Spline_rna_properties_end, Spline_rna_properties_get, nullptr, nullptr, Spline_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Spline_rna_type = {
	{(PropertyRNA *)&rna_Spline_points, (PropertyRNA *)&rna_Spline_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_Spline_points = {
	{(PropertyRNA *)&rna_Spline_bezier_points, (PropertyRNA *)&rna_Spline_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Collection of points that make up this poly or nurbs spline",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_SplinePoints},
	Spline_points_begin, Spline_points_next, Spline_points_end, Spline_points_get, Spline_points_length, Spline_points_lookup_int, nullptr, nullptr, &RNA_SplinePoint
};

CollectionPropertyRNA rna_Spline_bezier_points = {
	{(PropertyRNA *)&rna_Spline_tilt_interpolation, (PropertyRNA *)&rna_Spline_points,
	-1, "bezier_points", 0, 0, 0, 8, 0, "Bezier Points",
	"Collection of points for Bezier curves only",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_SplineBezierPoints},
	Spline_bezier_points_begin, Spline_bezier_points_next, Spline_bezier_points_end, Spline_bezier_points_get, Spline_bezier_points_length, Spline_bezier_points_lookup_int, nullptr, nullptr, &RNA_BezierSplinePoint
};

static const EnumPropertyItem rna_Spline_tilt_interpolation_items[5] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "CARDINAL", 0, "Cardinal", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "EASE", 0, "Ease", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Spline_tilt_interpolation = {
	{(PropertyRNA *)&rna_Spline_radius_interpolation, (PropertyRNA *)&rna_Spline_bezier_points,
	-1, "tilt_interpolation", 3, 0, 0, 4, 0, "Tilt Interpolation",
	"The type of tilt interpolation for 3D, Bezier curves",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, tilt_interp), (RawPropertyType)1, nullptr},
	Spline_tilt_interpolation_get, Spline_tilt_interpolation_set, nullptr, nullptr, nullptr, rna_Spline_tilt_interpolation_items, 4, 0
};

static const EnumPropertyItem rna_Spline_radius_interpolation_items[5] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "CARDINAL", 0, "Cardinal", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "EASE", 0, "Ease", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Spline_radius_interpolation = {
	{(PropertyRNA *)&rna_Spline_type, (PropertyRNA *)&rna_Spline_tilt_interpolation,
	-1, "radius_interpolation", 3, 0, 0, 4, 0, "Radius Interpolation",
	"The type of radius interpolation for Bezier curves",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, radius_interp), (RawPropertyType)1, nullptr},
	Spline_radius_interpolation_get, Spline_radius_interpolation_set, nullptr, nullptr, nullptr, rna_Spline_radius_interpolation_items, 4, 0
};

static const EnumPropertyItem rna_Spline_type_items[4] = {
	{0, "POLY", 0, "Poly", ""},
	{1, "BEZIER", 0, "Bezier", ""},
	{4, "NURBS", 0, "Ease", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Spline_type = {
	{(PropertyRNA *)&rna_Spline_point_count_u, (PropertyRNA *)&rna_Spline_radius_interpolation,
	-1, "type", 3, 0, 0, 0, 0, "Type",
	"The interpolation type for this curve element",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_type_get, Spline_type_set, nullptr, nullptr, nullptr, rna_Spline_type_items, 3, 0
};

IntPropertyRNA rna_Spline_point_count_u = {
	{(PropertyRNA *)&rna_Spline_point_count_v, (PropertyRNA *)&rna_Spline_type,
	-1, "point_count_u", 2, 0, 0, 4, 0, "Points U",
	"Total number points for the curve or surface in the U direction",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, pntsu), (RawPropertyType)0, nullptr},
	Spline_point_count_u_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_point_count_v = {
	{(PropertyRNA *)&rna_Spline_order_u, (PropertyRNA *)&rna_Spline_point_count_u,
	-1, "point_count_v", 2, 0, 0, 4, 0, "Points V",
	"Total number points for the surface on the V direction",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, pntsv), (RawPropertyType)0, nullptr},
	Spline_point_count_v_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_order_u = {
	{(PropertyRNA *)&rna_Spline_order_v, (PropertyRNA *)&rna_Spline_point_count_v,
	-1, "order_u", 1, 0, 0, 4, 0, "Order U",
	"NURBS order in the U direction. Higher values make each point influence a greater area, but have worse performance",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, orderu), (RawPropertyType)1, nullptr},
	Spline_order_u_get, Spline_order_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 2, 6, 2, 64, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_order_v = {
	{(PropertyRNA *)&rna_Spline_resolution_u, (PropertyRNA *)&rna_Spline_order_u,
	-1, "order_v", 1, 0, 0, 4, 0, "Order V",
	"NURBS order in the V direction. Higher values make each point influence a greater area, but have worse performance",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, orderv), (RawPropertyType)1, nullptr},
	Spline_order_v_get, Spline_order_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 2, 6, 2, 64, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_resolution_u = {
	{(PropertyRNA *)&rna_Spline_resolution_v, (PropertyRNA *)&rna_Spline_order_v,
	-1, "resolution_u", 1, 0, 0, 4, 0, "Resolution U",
	"Curve or Surface subdivisions per segment",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, resolu), (RawPropertyType)1, nullptr},
	Spline_resolution_u_get, Spline_resolution_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 1024, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_resolution_v = {
	{(PropertyRNA *)&rna_Spline_use_cyclic_u, (PropertyRNA *)&rna_Spline_resolution_u,
	-1, "resolution_v", 1, 0, 0, 4, 0, "Resolution V",
	"Surface subdivisions per segment",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, resolv), (RawPropertyType)1, nullptr},
	Spline_resolution_v_get, Spline_resolution_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 1, 1024, 1, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_cyclic_u = {
	{(PropertyRNA *)&rna_Spline_use_cyclic_v, (PropertyRNA *)&rna_Spline_resolution_v,
	-1, "use_cyclic_u", 1, 0, 0, 0, 0, "Cyclic U",
	"Make this curve or surface a closed loop in the U direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_cyclic_u, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_cyclic_u_get, Spline_use_cyclic_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_cyclic_v = {
	{(PropertyRNA *)&rna_Spline_use_endpoint_u, (PropertyRNA *)&rna_Spline_use_cyclic_u,
	-1, "use_cyclic_v", 1, 0, 0, 0, 0, "Cyclic V",
	"Make this surface a closed loop in the V direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_cyclic_v, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_cyclic_v_get, Spline_use_cyclic_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_endpoint_u = {
	{(PropertyRNA *)&rna_Spline_use_endpoint_v, (PropertyRNA *)&rna_Spline_use_cyclic_v,
	-1, "use_endpoint_u", 1, 0, 0, 0, 0, "Endpoint U",
	"Make this nurbs curve or surface meet the endpoints in the U direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_endpoint_u_get, Spline_use_endpoint_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_endpoint_v = {
	{(PropertyRNA *)&rna_Spline_use_bezier_u, (PropertyRNA *)&rna_Spline_use_endpoint_u,
	-1, "use_endpoint_v", 1, 0, 0, 0, 0, "Endpoint V",
	"Make this nurbs surface meet the endpoints in the V direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_endpoint_v_get, Spline_use_endpoint_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_bezier_u = {
	{(PropertyRNA *)&rna_Spline_use_bezier_v, (PropertyRNA *)&rna_Spline_use_endpoint_v,
	-1, "use_bezier_u", 1, 0, 0, 0, 0, "Bezier U",
	"Make this nurbs curve or surface act like a Bezier spline in the U direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_bezier_u_get, Spline_use_bezier_u_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_bezier_v = {
	{(PropertyRNA *)&rna_Spline_use_smooth, (PropertyRNA *)&rna_Spline_use_bezier_u,
	-1, "use_bezier_v", 1, 0, 0, 0, 0, "Bezier V",
	"Make this nurbs surface act like a Bezier spline in the V direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_bezier_v_get, Spline_use_bezier_v_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_use_smooth = {
	{(PropertyRNA *)&rna_Spline_hide, (PropertyRNA *)&rna_Spline_use_bezier_v,
	-1, "use_smooth", 3, 0, 0, 0, 0, "Smooth",
	"Smooth the normals of the surface or beveled curve",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_use_smooth_get, Spline_use_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Spline_hide = {
	{(PropertyRNA *)&rna_Spline_material_index, (PropertyRNA *)&rna_Spline_use_smooth,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"Hide this curve in Edit mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Spline_hide_get, Spline_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Spline_material_index = {
	{(PropertyRNA *)&rna_Spline_character_index, (PropertyRNA *)&rna_Spline_hide,
	-1, "material_index", 3, 0, 0, 4, 0, "Material Index",
	"Material slot index of this curve",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, mat_nr), (RawPropertyType)1, nullptr},
	Spline_material_index_get, Spline_material_index_set, nullptr, nullptr, rna_Curve_material_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_character_index = {
	{nullptr, (PropertyRNA *)&rna_Spline_material_index,
	-1, "character_index", 2, 0, 0, 4, 0, "Character Index",
	"Location of this character in the text data (only for text curves)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, charidx), (RawPropertyType)0, nullptr},
	Spline_character_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Spline_calc_length_resolution = {
	{(PropertyRNA *)&rna_Spline_calc_length_length, nullptr,
	-1, "resolution", 3, 0, 0, 0, 0, "Resolution",
	"Spline resolution to be used, 0 defaults to the resolution_u",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 64, 0, 1024, 1, 0, nullptr
};

FloatPropertyRNA rna_Spline_calc_length_length = {
	{nullptr, (PropertyRNA *)&rna_Spline_calc_length_resolution,
	-1, "length", 3, 0, 2, 0, 0, "Length",
	"Length of the polygonaly approximated spline",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_Spline_calc_length_func = {
	{(FunctionRNA *)&rna_Spline_valid_message_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Spline_calc_length_resolution, (PropertyRNA *)&rna_Spline_calc_length_length}},
	"calc_length", 0, "Calculate spline length",
	Spline_calc_length_call,
	(PropertyRNA *)&rna_Spline_calc_length_length
};

IntPropertyRNA rna_Spline_valid_message_direction = {
	{(PropertyRNA *)&rna_Spline_valid_message_result, nullptr,
	-1, "direction", 3, 0, 1, 0, 0, "Direction",
	"The direction where 0-1 maps to U-V",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1, 0, 1, 1, 0, nullptr
};

StringPropertyRNA rna_Spline_valid_message_result = {
	{nullptr, (PropertyRNA *)&rna_Spline_valid_message_direction,
	-1, "result", 131073, 0, 2, 0, 0, "Return value",
	"The message or an empty string when there is no error",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, "nothing"
};

FunctionRNA rna_Spline_valid_message_func = {
	{nullptr, (FunctionRNA *)&rna_Spline_calc_length_func,
	nullptr,
	{(PropertyRNA *)&rna_Spline_valid_message_direction, (PropertyRNA *)&rna_Spline_valid_message_result}},
	"valid_message", 0, "Return the message",
	Spline_valid_message_call,
	nullptr
};

StructRNA RNA_Spline = {
	{(ContainerRNA *)&RNA_SplinePoints, (ContainerRNA *)&RNA_BezierSplinePoint,
	nullptr,
	{(PropertyRNA *)&rna_Spline_rna_properties, (PropertyRNA *)&rna_Spline_character_index}},
	"Spline", nullptr, nullptr, 516, nullptr, "Spline",
	"Element of a curve, either NURBS, Bezier or Polyline or a character with text objects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Spline_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_Curve_spline_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Spline_calc_length_func, (FunctionRNA *)&rna_Spline_valid_message_func}
};

/* Spline Points */
CollectionPropertyRNA rna_SplinePoints_rna_properties = {
	{(PropertyRNA *)&rna_SplinePoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplinePoints_rna_properties_begin, SplinePoints_rna_properties_next, SplinePoints_rna_properties_end, SplinePoints_rna_properties_get, nullptr, nullptr, SplinePoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_SplinePoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_SplinePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplinePoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_SplinePoints_add_count = {
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

FunctionRNA rna_SplinePoints_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_SplinePoints_add_count, (PropertyRNA *)&rna_SplinePoints_add_count}},
	"add", 2064, "Add a number of points to this spline",
	SplinePoints_add_call,
	nullptr
};

StructRNA RNA_SplinePoints = {
	{(ContainerRNA *)&RNA_SplineBezierPoints, (ContainerRNA *)&RNA_Spline,
	nullptr,
	{(PropertyRNA *)&rna_SplinePoints_rna_properties, (PropertyRNA *)&rna_SplinePoints_rna_type}},
	"SplinePoints", nullptr, nullptr, 516, nullptr, "Spline Points",
	"Collection of spline points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_SplinePoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_SplinePoints_add_func, (FunctionRNA *)&rna_SplinePoints_add_func}
};

/* Spline Bezier Points */
CollectionPropertyRNA rna_SplineBezierPoints_rna_properties = {
	{(PropertyRNA *)&rna_SplineBezierPoints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplineBezierPoints_rna_properties_begin, SplineBezierPoints_rna_properties_next, SplineBezierPoints_rna_properties_end, SplineBezierPoints_rna_properties_get, nullptr, nullptr, SplineBezierPoints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_SplineBezierPoints_rna_type = {
	{nullptr, (PropertyRNA *)&rna_SplineBezierPoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SplineBezierPoints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_SplineBezierPoints_add_count = {
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

FunctionRNA rna_SplineBezierPoints_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_SplineBezierPoints_add_count, (PropertyRNA *)&rna_SplineBezierPoints_add_count}},
	"add", 2064, "Add a number of points to this spline",
	SplineBezierPoints_add_call,
	nullptr
};

StructRNA RNA_SplineBezierPoints = {
	{(ContainerRNA *)&RNA_DynamicPaintCanvasSettings, (ContainerRNA *)&RNA_SplinePoints,
	nullptr,
	{(PropertyRNA *)&rna_SplineBezierPoints_rna_properties, (PropertyRNA *)&rna_SplineBezierPoints_rna_type}},
	"SplineBezierPoints", nullptr, nullptr, 516, nullptr, "Spline Bezier Points",
	"Collection of spline Bezier points",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_SplineBezierPoints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_SplineBezierPoints_add_func, (FunctionRNA *)&rna_SplineBezierPoints_add_func}
};

