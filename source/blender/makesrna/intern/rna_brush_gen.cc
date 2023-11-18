
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

#include "rna_brush.cc"

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

RNA_EXTERN_C EnumPropertyRNA rna_Brush_blend;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_sculpt_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_uv_sculpt_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_vertex_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_weight_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_image_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_gpencil_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_gpencil_vertex_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_gpencil_sculpt_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_gpencil_weight_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_curves_sculpt_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_direction;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_stroke_method;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_sculpt_plane;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_mask_tool;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_curve_preset;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_deform_target;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_elastic_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_snake_hook_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_cloth_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_cloth_force_falloff_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_cloth_simulation_area_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_boundary_falloff_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_smooth_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_smear_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_slide_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_boundary_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_pose_deform_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_pose_origin_type;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_jitter_unit;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_falloff_shape;
RNA_EXTERN_C IntPropertyRNA rna_Brush_size;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_unprojected_radius;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_jitter;
RNA_EXTERN_C IntPropertyRNA rna_Brush_jitter_absolute;
RNA_EXTERN_C IntPropertyRNA rna_Brush_spacing;
RNA_EXTERN_C IntPropertyRNA rna_Brush_grad_spacing;
RNA_EXTERN_C IntPropertyRNA rna_Brush_smooth_stroke_radius;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_smooth_stroke_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_rate;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_color;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_secondary_color;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_weight;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_strength;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_flow;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_wet_mix;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_wet_persistence;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_density;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_tip_scale_x;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_hardness_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_invert_hardness_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_flow_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_invert_flow_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_wet_mix_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_invert_wet_mix_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_wet_persistence_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_invert_wet_persistence_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_density_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_invert_density_pressure;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_dash_ratio;
RNA_EXTERN_C IntPropertyRNA rna_Brush_dash_samples;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_plane_offset;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_plane_trim;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_height;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_texture_sample_bias;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_color_as_displacement;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_normal_weight;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_elastic_deform_volume_preservation;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_rake_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_crease_pinch_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_pose_offset;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_disconnected_distance_max;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_boundary_offset;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_surface_smooth_shape_preservation;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_surface_smooth_current_vertex;
RNA_EXTERN_C IntPropertyRNA rna_Brush_surface_smooth_iterations;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_multiplane_scrape_angle;
RNA_EXTERN_C IntPropertyRNA rna_Brush_pose_smooth_iterations;
RNA_EXTERN_C IntPropertyRNA rna_Brush_pose_ik_segments;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_tip_roundness;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cloth_mass;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cloth_damping;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cloth_sim_limit;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cloth_sim_falloff;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cloth_constraint_softbody_strength;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_hardness;
RNA_EXTERN_C IntPropertyRNA rna_Brush_automasking_boundary_edges_propagation_steps;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_auto_smooth_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_topology_rake_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_tilt_strength_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_normal_radius_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_area_radius_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_wet_paint_radius_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_stencil_pos;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_stencil_dimension;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_mask_stencil_pos;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_mask_stencil_dimension;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_sharp_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_fill_threshold;
RNA_EXTERN_C IntPropertyRNA rna_Brush_blur_kernel_radius;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_blur_mode;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_falloff_angle;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_airbrush;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_original_normal;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_original_plane;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_topology;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_face_sets;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_boundary_edges;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_boundary_face_sets;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_cavity;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_cavity_inverted;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_custom_cavity_curve;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_automasking_cavity_factor;
RNA_EXTERN_C IntPropertyRNA rna_Brush_automasking_cavity_blur_steps;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_automasking_cavity_curve;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_start_normal;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_view_normal;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_automasking_view_occlusion;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_use_scene_spacing;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_grab_active_vertex;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_grab_silhouette;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_antialiasing;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_multiplane_scrape_dynamic;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_show_multiplane_scrape_planes_preview;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pose_ik_anchored;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pose_lock_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_connected_only;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_cloth_pin_simulation_boundary;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_cloth_collision;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_invert_to_scrape_fill;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pressure_strength;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_offset_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pressure_area_radius;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pressure_size;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pressure_jitter;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_pressure_spacing;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_use_pressure_masking;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_plane_trim;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_frontface;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_frontface_falloff;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_anchor;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_space;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_line;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_curve;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_smooth_stroke;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_persistent;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_accumulate;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_space_attenuation;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_adaptive_space;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_use_locked_size;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_color_type;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_edge_to_edge;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_restore_mesh;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_alpha;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_curve;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_paint_curve;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_gradient;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_gradient_stroke_mode;
RNA_EXTERN_C EnumPropertyRNA rna_Brush_gradient_fill_mode;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_primary_overlay;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_secondary_overlay;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_cursor_overlay;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_cursor_overlay_override;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_primary_overlay_override;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_secondary_overlay_override;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_sculpt;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_uv_sculpt;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_vertex;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_weight;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_image;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_grease_pencil;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_vertex_grease_pencil;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_paint_sculpt_curves;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_texture_slot;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_texture;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_mask_texture_slot;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_mask_texture;
RNA_EXTERN_C IntPropertyRNA rna_Brush_texture_overlay_alpha;
RNA_EXTERN_C IntPropertyRNA rna_Brush_mask_overlay_alpha;
RNA_EXTERN_C IntPropertyRNA rna_Brush_cursor_overlay_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cursor_color_add;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_cursor_color_subtract;
RNA_EXTERN_C BoolPropertyRNA rna_Brush_use_custom_icon;
RNA_EXTERN_C StringPropertyRNA rna_Brush_icon_filepath;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_clone_image;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_clone_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_Brush_clone_offset;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_brush_capabilities;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_sculpt_capabilities;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_image_paint_capabilities;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_vertex_paint_capabilities;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_weight_paint_capabilities;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_gpencil_settings;
RNA_EXTERN_C PointerPropertyRNA rna_Brush_curves_sculpt_settings;

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



RNA_EXTERN_C CollectionPropertyRNA rna_BrushCapabilities_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCapabilities_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilities_has_overlay;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilities_has_spacing;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke;


RNA_EXTERN_C CollectionPropertyRNA rna_BrushCapabilitiesSculpt_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCapabilitiesSculpt_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_accumulate;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_auto_smooth;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_topology_rake;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_height;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_jitter;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_normal_weight;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_rake_factor;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_persistence;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_pinch_factor;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_offset;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_random_texture_angle;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_sculpt_plane;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_color;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_secondary_color;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_smooth_stroke;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_space_attenuation;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_strength_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_direction;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_gravity;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_tilt;


RNA_EXTERN_C CollectionPropertyRNA rna_BrushCapabilitiesImagePaint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCapabilitiesImagePaint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_accumulate;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_space_attenuation;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_radius;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_color;


RNA_EXTERN_C CollectionPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesVertexPaint_has_color;


RNA_EXTERN_C CollectionPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCapabilitiesWeightPaint_has_weight;


RNA_EXTERN_C CollectionPropertyRNA rna_BrushGpencilSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_pen_strength;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_pen_jitter;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_random_pressure;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_random_strength;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_angle;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_angle_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_pen_smooth_factor;
RNA_EXTERN_C IntPropertyRNA rna_BrushGpencilSettings_pen_smooth_steps;
RNA_EXTERN_C IntPropertyRNA rna_BrushGpencilSettings_pen_subdivision_steps;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_simplify_factor;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_sensitivity;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_strength;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_jitter;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_random_pressure;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_random_strength;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_random_uv;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_random_hue;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_random_saturation;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_curve_random_value;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_fill_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_fill_factor;
RNA_EXTERN_C IntPropertyRNA rna_BrushGpencilSettings_fill_simplify_level;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_uv_random;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_hardness;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_aspect;
RNA_EXTERN_C IntPropertyRNA rna_BrushGpencilSettings_input_samples;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_active_smooth_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_eraser_strength_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_eraser_thickness_factor;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_gpencil_paint_icon;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_gpencil_sculpt_icon;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_gpencil_weight_icon;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_gpencil_vertex_icon;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_vertex_mode;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_vertex_color_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_random_hue_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_random_saturation_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_random_value_factor;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_extend_stroke_factor;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_fill_extend_mode;
RNA_EXTERN_C IntPropertyRNA rna_BrushGpencilSettings_dilate;
RNA_EXTERN_C FloatPropertyRNA rna_BrushGpencilSettings_outline_thickness_factor;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_strength_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_jitter_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_hue;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_sat;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_val;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_radius;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_strength;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_uv;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_hue;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_sat;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_val;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_radius;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_strength;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_uv;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_settings_stabilizer;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_eraser_mode;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_caps_type;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_fill_draw_mode;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_fill_layer_mode;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_fill_direction;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_pin_draw_mode;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_brush_draw_mode;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_trim;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_settings_outline;
RNA_EXTERN_C EnumPropertyRNA rna_BrushGpencilSettings_direction;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_edit_position;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_edit_strength;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_edit_thickness;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_edit_uv;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_material;
RNA_EXTERN_C PointerPropertyRNA rna_BrushGpencilSettings_material_alt;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_show_fill_boundary;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_show_fill_extend;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_collide_strokes;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_show_fill;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_fill_limit;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_default_eraser;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_settings_postprocess;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_settings_random;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_material_pin;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_show_lasso;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_occlude_eraser;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_keep_caps_eraser;
RNA_EXTERN_C BoolPropertyRNA rna_BrushGpencilSettings_use_active_layer_only;


RNA_EXTERN_C CollectionPropertyRNA rna_BrushCurvesSculptSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCurvesSculptSettings_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_BrushCurvesSculptSettings_add_amount;
RNA_EXTERN_C IntPropertyRNA rna_BrushCurvesSculptSettings_points_per_curve;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCurvesSculptSettings_scale_uniform;
RNA_EXTERN_C FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_length;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_length;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_point_count;
RNA_EXTERN_C BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_shape;
RNA_EXTERN_C FloatPropertyRNA rna_BrushCurvesSculptSettings_curve_length;
RNA_EXTERN_C FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_distance;
RNA_EXTERN_C IntPropertyRNA rna_BrushCurvesSculptSettings_density_add_attempts;
RNA_EXTERN_C EnumPropertyRNA rna_BrushCurvesSculptSettings_density_mode;
RNA_EXTERN_C PointerPropertyRNA rna_BrushCurvesSculptSettings_curve_parameter_falloff;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_TextureSlot_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_TextureSlot_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_TextureSlot_texture;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_TextureSlot_name;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_TextureSlot_offset;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_TextureSlot_scale;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_TextureSlot_color;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_TextureSlot_blend_type;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_TextureSlot_default_value;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_TextureSlot_output_node;

RNA_EXTERN_C FloatPropertyRNA rna_BrushTextureSlot_angle;
RNA_EXTERN_C EnumPropertyRNA rna_BrushTextureSlot_map_mode;
RNA_EXTERN_C EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode;
RNA_EXTERN_C BoolPropertyRNA rna_BrushTextureSlot_use_rake;
RNA_EXTERN_C BoolPropertyRNA rna_BrushTextureSlot_use_random;
RNA_EXTERN_C FloatPropertyRNA rna_BrushTextureSlot_random_angle;
RNA_EXTERN_C BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle_source;
RNA_EXTERN_C BoolPropertyRNA rna_BrushTextureSlot_has_random_texture_angle;
RNA_EXTERN_C BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_PropertyGroup_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_PropertyGroup_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_PropertyGroup_name;

RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_location;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_mouse;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_mouse_event;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_pressure;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_size;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorStrokeElement_pen_flip;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_x_tilt;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_y_tilt;
RNA_EXTERN_C FloatPropertyRNA rna_OperatorStrokeElement_time;
RNA_EXTERN_C BoolPropertyRNA rna_OperatorStrokeElement_is_start;

RNA_EXTERN_C int Brush_blend_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blend);
}

RNA_EXTERN_C void Brush_blend_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->blend = (std::remove_reference_t<decltype(data->blend)>)value;
#else
    data->blend = value;
#endif
}

RNA_EXTERN_C int Brush_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->sculpt_tool);
}

RNA_EXTERN_C void Brush_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->sculpt_tool = (std::remove_reference_t<decltype(data->sculpt_tool)>)value;
#else
    data->sculpt_tool = value;
#endif
}

RNA_EXTERN_C int Brush_uv_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->uv_sculpt_tool);
}

RNA_EXTERN_C void Brush_uv_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->uv_sculpt_tool = (std::remove_reference_t<decltype(data->uv_sculpt_tool)>)value;
#else
    data->uv_sculpt_tool = value;
#endif
}

RNA_EXTERN_C int Brush_vertex_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->vertexpaint_tool);
}

RNA_EXTERN_C void Brush_vertex_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->vertexpaint_tool = (std::remove_reference_t<decltype(data->vertexpaint_tool)>)value;
#else
    data->vertexpaint_tool = value;
#endif
}

RNA_EXTERN_C int Brush_weight_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->weightpaint_tool);
}

RNA_EXTERN_C void Brush_weight_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->weightpaint_tool = (std::remove_reference_t<decltype(data->weightpaint_tool)>)value;
#else
    data->weightpaint_tool = value;
#endif
}

RNA_EXTERN_C int Brush_image_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->imagepaint_tool);
}

RNA_EXTERN_C void Brush_image_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->imagepaint_tool = (std::remove_reference_t<decltype(data->imagepaint_tool)>)value;
#else
    data->imagepaint_tool = value;
#endif
}

RNA_EXTERN_C int Brush_gpencil_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_tool);
}

RNA_EXTERN_C void Brush_gpencil_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gpencil_tool = (std::remove_reference_t<decltype(data->gpencil_tool)>)value;
#else
    data->gpencil_tool = value;
#endif
}

RNA_EXTERN_C int Brush_gpencil_vertex_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_vertex_tool);
}

RNA_EXTERN_C void Brush_gpencil_vertex_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gpencil_vertex_tool = (std::remove_reference_t<decltype(data->gpencil_vertex_tool)>)value;
#else
    data->gpencil_vertex_tool = value;
#endif
}

RNA_EXTERN_C int Brush_gpencil_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_sculpt_tool);
}

RNA_EXTERN_C void Brush_gpencil_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gpencil_sculpt_tool = (std::remove_reference_t<decltype(data->gpencil_sculpt_tool)>)value;
#else
    data->gpencil_sculpt_tool = value;
#endif
}

RNA_EXTERN_C int Brush_gpencil_weight_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_weight_tool);
}

RNA_EXTERN_C void Brush_gpencil_weight_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gpencil_weight_tool = (std::remove_reference_t<decltype(data->gpencil_weight_tool)>)value;
#else
    data->gpencil_weight_tool = value;
#endif
}

RNA_EXTERN_C int Brush_curves_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->curves_sculpt_tool);
}

RNA_EXTERN_C void Brush_curves_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->curves_sculpt_tool = (std::remove_reference_t<decltype(data->curves_sculpt_tool)>)value;
#else
    data->curves_sculpt_tool = value;
#endif
}

RNA_EXTERN_C int Brush_direction_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 512);
}

RNA_EXTERN_C void Brush_direction_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~512;
    data->flag |= value;
}

RNA_EXTERN_C int Brush_stroke_method_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & -1602222847);
}

RNA_EXTERN_C void Brush_stroke_method_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~-1602222847;
    data->flag |= value;
}

RNA_EXTERN_C int Brush_sculpt_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->sculpt_plane);
}

RNA_EXTERN_C void Brush_sculpt_plane_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->sculpt_plane = (std::remove_reference_t<decltype(data->sculpt_plane)>)value;
#else
    data->sculpt_plane = value;
#endif
}

RNA_EXTERN_C int Brush_mask_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_tool);
}

RNA_EXTERN_C void Brush_mask_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->mask_tool = (std::remove_reference_t<decltype(data->mask_tool)>)value;
#else
    data->mask_tool = value;
#endif
}

RNA_EXTERN_C int Brush_curve_preset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->curve_preset);
}

RNA_EXTERN_C void Brush_curve_preset_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->curve_preset = (std::remove_reference_t<decltype(data->curve_preset)>)value;
#else
    data->curve_preset = value;
#endif
}

RNA_EXTERN_C int Brush_deform_target_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->deform_target);
}

RNA_EXTERN_C void Brush_deform_target_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->deform_target = (std::remove_reference_t<decltype(data->deform_target)>)value;
#else
    data->deform_target = value;
#endif
}

RNA_EXTERN_C int Brush_elastic_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->elastic_deform_type);
}

RNA_EXTERN_C void Brush_elastic_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->elastic_deform_type = (std::remove_reference_t<decltype(data->elastic_deform_type)>)value;
#else
    data->elastic_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_snake_hook_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->snake_hook_deform_type);
}

RNA_EXTERN_C void Brush_snake_hook_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->snake_hook_deform_type = (std::remove_reference_t<decltype(data->snake_hook_deform_type)>)value;
#else
    data->snake_hook_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_cloth_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_deform_type);
}

RNA_EXTERN_C void Brush_cloth_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_deform_type = (std::remove_reference_t<decltype(data->cloth_deform_type)>)value;
#else
    data->cloth_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_cloth_force_falloff_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_force_falloff_type);
}

RNA_EXTERN_C void Brush_cloth_force_falloff_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_force_falloff_type = (std::remove_reference_t<decltype(data->cloth_force_falloff_type)>)value;
#else
    data->cloth_force_falloff_type = value;
#endif
}

RNA_EXTERN_C int Brush_cloth_simulation_area_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_simulation_area_type);
}

RNA_EXTERN_C void Brush_cloth_simulation_area_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_simulation_area_type = (std::remove_reference_t<decltype(data->cloth_simulation_area_type)>)value;
#else
    data->cloth_simulation_area_type = value;
#endif
}

RNA_EXTERN_C int Brush_boundary_falloff_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->boundary_falloff_type);
}

RNA_EXTERN_C void Brush_boundary_falloff_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->boundary_falloff_type = (std::remove_reference_t<decltype(data->boundary_falloff_type)>)value;
#else
    data->boundary_falloff_type = value;
#endif
}

RNA_EXTERN_C int Brush_smooth_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smooth_deform_type);
}

RNA_EXTERN_C void Brush_smooth_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->smooth_deform_type = (std::remove_reference_t<decltype(data->smooth_deform_type)>)value;
#else
    data->smooth_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_smear_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smear_deform_type);
}

RNA_EXTERN_C void Brush_smear_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->smear_deform_type = (std::remove_reference_t<decltype(data->smear_deform_type)>)value;
#else
    data->smear_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_slide_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->slide_deform_type);
}

RNA_EXTERN_C void Brush_slide_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->slide_deform_type = (std::remove_reference_t<decltype(data->slide_deform_type)>)value;
#else
    data->slide_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_boundary_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->boundary_deform_type);
}

RNA_EXTERN_C void Brush_boundary_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->boundary_deform_type = (std::remove_reference_t<decltype(data->boundary_deform_type)>)value;
#else
    data->boundary_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_pose_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_deform_type);
}

RNA_EXTERN_C void Brush_pose_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->pose_deform_type = (std::remove_reference_t<decltype(data->pose_deform_type)>)value;
#else
    data->pose_deform_type = value;
#endif
}

RNA_EXTERN_C int Brush_pose_origin_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_origin_type);
}

RNA_EXTERN_C void Brush_pose_origin_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->pose_origin_type = (std::remove_reference_t<decltype(data->pose_origin_type)>)value;
#else
    data->pose_origin_type = value;
#endif
}

RNA_EXTERN_C int Brush_jitter_unit_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 1073741824);
}

RNA_EXTERN_C void Brush_jitter_unit_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~1073741824;
    data->flag |= value;
}

RNA_EXTERN_C int Brush_falloff_shape_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->falloff_shape) & 1);
}

RNA_EXTERN_C void Brush_falloff_shape_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->falloff_shape &= ~1;
    data->falloff_shape |= value;
}

RNA_EXTERN_C int Brush_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->size);
}

RNA_EXTERN_C void Brush_size_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Brush_set_size;
    fn(ptr, value);
}

RNA_EXTERN_C float Brush_unprojected_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->unprojected_radius);
}

RNA_EXTERN_C void Brush_unprojected_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Brush_set_unprojected_radius;
    fn(ptr, value);
}

RNA_EXTERN_C float Brush_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->jitter);
}

RNA_EXTERN_C void Brush_jitter_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->jitter = (std::remove_reference_t<decltype(data->jitter)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->jitter = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C int Brush_jitter_absolute_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->jitter_absolute);
}

RNA_EXTERN_C void Brush_jitter_absolute_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->jitter_absolute = (std::remove_reference_t<decltype(data->jitter_absolute)>)CLAMPIS(value, 0, 1000000);
#else
    data->jitter_absolute = CLAMPIS(value, 0, 1000000);
#endif
}

RNA_EXTERN_C int Brush_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->spacing);
}

RNA_EXTERN_C void Brush_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->spacing = (std::remove_reference_t<decltype(data->spacing)>)CLAMPIS(value, 1, 1000);
#else
    data->spacing = CLAMPIS(value, 1, 1000);
#endif
}

RNA_EXTERN_C int Brush_grad_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_spacing);
}

RNA_EXTERN_C void Brush_grad_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gradient_spacing = (std::remove_reference_t<decltype(data->gradient_spacing)>)CLAMPIS(value, 1, 10000);
#else
    data->gradient_spacing = CLAMPIS(value, 1, 10000);
#endif
}

RNA_EXTERN_C int Brush_smooth_stroke_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smooth_stroke_radius);
}

RNA_EXTERN_C void Brush_smooth_stroke_radius_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->smooth_stroke_radius = (std::remove_reference_t<decltype(data->smooth_stroke_radius)>)CLAMPIS(value, 10, 200);
#else
    data->smooth_stroke_radius = CLAMPIS(value, 10, 200);
#endif
}

RNA_EXTERN_C float Brush_smooth_stroke_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->smooth_stroke_factor);
}

RNA_EXTERN_C void Brush_smooth_stroke_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->smooth_stroke_factor = (std::remove_reference_t<decltype(data->smooth_stroke_factor)>)CLAMPIS(value, 0.5000000000f, 0.9900000095f);
#else
    data->smooth_stroke_factor = CLAMPIS(value, 0.5000000000f, 0.9900000095f);
#endif
}

RNA_EXTERN_C float Brush_rate_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->rate);
}

RNA_EXTERN_C void Brush_rate_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->rate = (std::remove_reference_t<decltype(data->rate)>)CLAMPIS(value, 0.0001000000f, 10000.0f);
#else
    data->rate = CLAMPIS(value, 0.0001000000f, 10000.0f);
#endif
}

RNA_EXTERN_C void Brush_color_get(PointerRNA *ptr, float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rgb)[i]);
    }
}

RNA_EXTERN_C void Brush_color_set(PointerRNA *ptr, const float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C void Brush_secondary_color_get(PointerRNA *ptr, float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->secondary_rgb)[i]);
    }
}

RNA_EXTERN_C void Brush_secondary_color_set(PointerRNA *ptr, const float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->secondary_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float Brush_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void Brush_weight_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->alpha);
}

RNA_EXTERN_C void Brush_strength_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->alpha = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float Brush_flow_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->flow);
}

RNA_EXTERN_C void Brush_flow_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->flow = (std::remove_reference_t<decltype(data->flow)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->flow = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_wet_mix_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_mix);
}

RNA_EXTERN_C void Brush_wet_mix_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->wet_mix = (std::remove_reference_t<decltype(data->wet_mix)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wet_mix = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_wet_persistence_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_persistence);
}

RNA_EXTERN_C void Brush_wet_persistence_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->wet_persistence = (std::remove_reference_t<decltype(data->wet_persistence)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wet_persistence = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_density_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->density);
}

RNA_EXTERN_C void Brush_density_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->density = (std::remove_reference_t<decltype(data->density)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->density = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_tip_scale_x_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tip_scale_x);
}

RNA_EXTERN_C void Brush_tip_scale_x_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->tip_scale_x = (std::remove_reference_t<decltype(data->tip_scale_x)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->tip_scale_x = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool Brush_use_hardness_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_hardness_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 1; }
    else { data->paint_flags &= ~1; }
}

RNA_EXTERN_C bool Brush_invert_hardness_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 2) != 0);
}

RNA_EXTERN_C void Brush_invert_hardness_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 2; }
    else { data->paint_flags &= ~2; }
}

RNA_EXTERN_C bool Brush_use_flow_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 4) != 0);
}

RNA_EXTERN_C void Brush_use_flow_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 4; }
    else { data->paint_flags &= ~4; }
}

RNA_EXTERN_C bool Brush_invert_flow_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 8) != 0);
}

RNA_EXTERN_C void Brush_invert_flow_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 8; }
    else { data->paint_flags &= ~8; }
}

RNA_EXTERN_C bool Brush_use_wet_mix_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 16) != 0);
}

RNA_EXTERN_C void Brush_use_wet_mix_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 16; }
    else { data->paint_flags &= ~16; }
}

RNA_EXTERN_C bool Brush_invert_wet_mix_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 32) != 0);
}

RNA_EXTERN_C void Brush_invert_wet_mix_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 32; }
    else { data->paint_flags &= ~32; }
}

RNA_EXTERN_C bool Brush_use_wet_persistence_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 64) != 0);
}

RNA_EXTERN_C void Brush_use_wet_persistence_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 64; }
    else { data->paint_flags &= ~64; }
}

RNA_EXTERN_C bool Brush_invert_wet_persistence_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 128) != 0);
}

RNA_EXTERN_C void Brush_invert_wet_persistence_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 128; }
    else { data->paint_flags &= ~128; }
}

RNA_EXTERN_C bool Brush_use_density_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 256) != 0);
}

RNA_EXTERN_C void Brush_use_density_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 256; }
    else { data->paint_flags &= ~256; }
}

RNA_EXTERN_C bool Brush_invert_density_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 512) != 0);
}

RNA_EXTERN_C void Brush_invert_density_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 512; }
    else { data->paint_flags &= ~512; }
}

RNA_EXTERN_C float Brush_dash_ratio_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->dash_ratio);
}

RNA_EXTERN_C void Brush_dash_ratio_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->dash_ratio = (std::remove_reference_t<decltype(data->dash_ratio)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->dash_ratio = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int Brush_dash_samples_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->dash_samples);
}

RNA_EXTERN_C void Brush_dash_samples_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->dash_samples = (std::remove_reference_t<decltype(data->dash_samples)>)CLAMPIS(value, 1, 10000);
#else
    data->dash_samples = CLAMPIS(value, 1, 10000);
#endif
}

RNA_EXTERN_C float Brush_plane_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_offset);
}

RNA_EXTERN_C void Brush_plane_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->plane_offset = (std::remove_reference_t<decltype(data->plane_offset)>)CLAMPIS(value, -2.0f, 2.0f);
#else
    data->plane_offset = CLAMPIS(value, -2.0f, 2.0f);
#endif
}

RNA_EXTERN_C float Brush_plane_trim_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_trim);
}

RNA_EXTERN_C void Brush_plane_trim_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->plane_trim = (std::remove_reference_t<decltype(data->plane_trim)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->plane_trim = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_height_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->height);
}

RNA_EXTERN_C void Brush_height_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->height = (std::remove_reference_t<decltype(data->height)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->height = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_texture_sample_bias_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->texture_sample_bias);
}

RNA_EXTERN_C void Brush_texture_sample_bias_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->texture_sample_bias = (std::remove_reference_t<decltype(data->texture_sample_bias)>)CLAMPIS(value, -1.0f, 1.0f);
#else
    data->texture_sample_bias = CLAMPIS(value, -1.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool Brush_use_color_as_displacement_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 512) != 0);
}

RNA_EXTERN_C void Brush_use_color_as_displacement_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 512; }
    else { data->flag2 &= ~512; }
}

RNA_EXTERN_C float Brush_normal_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->normal_weight);
}

RNA_EXTERN_C void Brush_normal_weight_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->normal_weight = (std::remove_reference_t<decltype(data->normal_weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->normal_weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_elastic_deform_volume_preservation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->elastic_deform_volume_preservation);
}

RNA_EXTERN_C void Brush_elastic_deform_volume_preservation_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->elastic_deform_volume_preservation = (std::remove_reference_t<decltype(data->elastic_deform_volume_preservation)>)CLAMPIS(value, 0.0f, 0.8999999762f);
#else
    data->elastic_deform_volume_preservation = CLAMPIS(value, 0.0f, 0.8999999762f);
#endif
}

RNA_EXTERN_C float Brush_rake_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->rake_factor);
}

RNA_EXTERN_C void Brush_rake_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->rake_factor = (std::remove_reference_t<decltype(data->rake_factor)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->rake_factor = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float Brush_crease_pinch_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->crease_pinch_factor);
}

RNA_EXTERN_C void Brush_crease_pinch_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->crease_pinch_factor = (std::remove_reference_t<decltype(data->crease_pinch_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->crease_pinch_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_pose_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->pose_offset);
}

RNA_EXTERN_C void Brush_pose_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->pose_offset = (std::remove_reference_t<decltype(data->pose_offset)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->pose_offset = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C float Brush_disconnected_distance_max_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->disconnected_distance_max);
}

RNA_EXTERN_C void Brush_disconnected_distance_max_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->disconnected_distance_max = (std::remove_reference_t<decltype(data->disconnected_distance_max)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->disconnected_distance_max = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float Brush_boundary_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->boundary_offset);
}

RNA_EXTERN_C void Brush_boundary_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->boundary_offset = (std::remove_reference_t<decltype(data->boundary_offset)>)CLAMPIS(value, 0.0f, 30.0f);
#else
    data->boundary_offset = CLAMPIS(value, 0.0f, 30.0f);
#endif
}

RNA_EXTERN_C float Brush_surface_smooth_shape_preservation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->surface_smooth_shape_preservation);
}

RNA_EXTERN_C void Brush_surface_smooth_shape_preservation_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->surface_smooth_shape_preservation = (std::remove_reference_t<decltype(data->surface_smooth_shape_preservation)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->surface_smooth_shape_preservation = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_surface_smooth_current_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->surface_smooth_current_vertex);
}

RNA_EXTERN_C void Brush_surface_smooth_current_vertex_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->surface_smooth_current_vertex = (std::remove_reference_t<decltype(data->surface_smooth_current_vertex)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->surface_smooth_current_vertex = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int Brush_surface_smooth_iterations_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->surface_smooth_iterations);
}

RNA_EXTERN_C void Brush_surface_smooth_iterations_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->surface_smooth_iterations = (std::remove_reference_t<decltype(data->surface_smooth_iterations)>)CLAMPIS(value, 1, 10);
#else
    data->surface_smooth_iterations = CLAMPIS(value, 1, 10);
#endif
}

RNA_EXTERN_C float Brush_multiplane_scrape_angle_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->multiplane_scrape_angle);
}

RNA_EXTERN_C void Brush_multiplane_scrape_angle_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->multiplane_scrape_angle = (std::remove_reference_t<decltype(data->multiplane_scrape_angle)>)CLAMPIS(value, 0.0f, 160.0f);
#else
    data->multiplane_scrape_angle = CLAMPIS(value, 0.0f, 160.0f);
#endif
}

RNA_EXTERN_C int Brush_pose_smooth_iterations_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_smooth_iterations);
}

RNA_EXTERN_C void Brush_pose_smooth_iterations_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->pose_smooth_iterations = (std::remove_reference_t<decltype(data->pose_smooth_iterations)>)CLAMPIS(value, 0, 100);
#else
    data->pose_smooth_iterations = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int Brush_pose_ik_segments_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_ik_segments);
}

RNA_EXTERN_C void Brush_pose_ik_segments_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->pose_ik_segments = (std::remove_reference_t<decltype(data->pose_ik_segments)>)CLAMPIS(value, 1, 20);
#else
    data->pose_ik_segments = CLAMPIS(value, 1, 20);
#endif
}

RNA_EXTERN_C float Brush_tip_roundness_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tip_roundness);
}

RNA_EXTERN_C void Brush_tip_roundness_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->tip_roundness = (std::remove_reference_t<decltype(data->tip_roundness)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->tip_roundness = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_cloth_mass_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_mass);
}

RNA_EXTERN_C void Brush_cloth_mass_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_mass = (std::remove_reference_t<decltype(data->cloth_mass)>)CLAMPIS(value, 0.0099999998f, 2.0f);
#else
    data->cloth_mass = CLAMPIS(value, 0.0099999998f, 2.0f);
#endif
}

RNA_EXTERN_C float Brush_cloth_damping_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_damping);
}

RNA_EXTERN_C void Brush_cloth_damping_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_damping = (std::remove_reference_t<decltype(data->cloth_damping)>)CLAMPIS(value, 0.0099999998f, 1.0f);
#else
    data->cloth_damping = CLAMPIS(value, 0.0099999998f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_cloth_sim_limit_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_sim_limit);
}

RNA_EXTERN_C void Brush_cloth_sim_limit_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_sim_limit = (std::remove_reference_t<decltype(data->cloth_sim_limit)>)CLAMPIS(value, 0.1000000015f, 10.0f);
#else
    data->cloth_sim_limit = CLAMPIS(value, 0.1000000015f, 10.0f);
#endif
}

RNA_EXTERN_C float Brush_cloth_sim_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_sim_falloff);
}

RNA_EXTERN_C void Brush_cloth_sim_falloff_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_sim_falloff = (std::remove_reference_t<decltype(data->cloth_sim_falloff)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->cloth_sim_falloff = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_cloth_constraint_softbody_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_constraint_softbody_strength);
}

RNA_EXTERN_C void Brush_cloth_constraint_softbody_strength_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cloth_constraint_softbody_strength = (std::remove_reference_t<decltype(data->cloth_constraint_softbody_strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->cloth_constraint_softbody_strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_hardness_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->hardness);
}

RNA_EXTERN_C void Brush_hardness_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->hardness = (std::remove_reference_t<decltype(data->hardness)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->hardness = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int Brush_automasking_boundary_edges_propagation_steps_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->automasking_boundary_edges_propagation_steps);
}

RNA_EXTERN_C void Brush_automasking_boundary_edges_propagation_steps_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->automasking_boundary_edges_propagation_steps = (std::remove_reference_t<decltype(data->automasking_boundary_edges_propagation_steps)>)CLAMPIS(value, 1, 20);
#else
    data->automasking_boundary_edges_propagation_steps = CLAMPIS(value, 1, 20);
#endif
}

RNA_EXTERN_C float Brush_auto_smooth_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->autosmooth_factor);
}

RNA_EXTERN_C void Brush_auto_smooth_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->autosmooth_factor = (std::remove_reference_t<decltype(data->autosmooth_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->autosmooth_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_topology_rake_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->topology_rake_factor);
}

RNA_EXTERN_C void Brush_topology_rake_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->topology_rake_factor = (std::remove_reference_t<decltype(data->topology_rake_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->topology_rake_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_tilt_strength_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tilt_strength_factor);
}

RNA_EXTERN_C void Brush_tilt_strength_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->tilt_strength_factor = (std::remove_reference_t<decltype(data->tilt_strength_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->tilt_strength_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Brush_normal_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->normal_radius_factor);
}

RNA_EXTERN_C void Brush_normal_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->normal_radius_factor = (std::remove_reference_t<decltype(data->normal_radius_factor)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->normal_radius_factor = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C float Brush_area_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->area_radius_factor);
}

RNA_EXTERN_C void Brush_area_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->area_radius_factor = (std::remove_reference_t<decltype(data->area_radius_factor)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->area_radius_factor = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C float Brush_wet_paint_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_paint_radius_factor);
}

RNA_EXTERN_C void Brush_wet_paint_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->wet_paint_radius_factor = (std::remove_reference_t<decltype(data->wet_paint_radius_factor)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->wet_paint_radius_factor = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C void Brush_stencil_pos_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->stencil_pos)[i]);
    }
}

RNA_EXTERN_C void Brush_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->stencil_pos)[i] = values[i];
    }
}

RNA_EXTERN_C void Brush_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->stencil_dimension)[i]);
    }
}

RNA_EXTERN_C void Brush_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->stencil_dimension)[i] = values[i];
    }
}

RNA_EXTERN_C void Brush_mask_stencil_pos_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->mask_stencil_pos)[i]);
    }
}

RNA_EXTERN_C void Brush_mask_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->mask_stencil_pos)[i] = values[i];
    }
}

RNA_EXTERN_C void Brush_mask_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->mask_stencil_dimension)[i]);
    }
}

RNA_EXTERN_C void Brush_mask_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->mask_stencil_dimension)[i] = values[i];
    }
}

RNA_EXTERN_C float Brush_sharp_threshold_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->sharp_threshold);
}

RNA_EXTERN_C void Brush_sharp_threshold_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->sharp_threshold = (std::remove_reference_t<decltype(data->sharp_threshold)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->sharp_threshold = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float Brush_fill_threshold_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->fill_threshold);
}

RNA_EXTERN_C void Brush_fill_threshold_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->fill_threshold = (std::remove_reference_t<decltype(data->fill_threshold)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->fill_threshold = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int Brush_blur_kernel_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blur_kernel_radius);
}

RNA_EXTERN_C void Brush_blur_kernel_radius_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->blur_kernel_radius = (std::remove_reference_t<decltype(data->blur_kernel_radius)>)CLAMPIS(value, 1, 10000);
#else
    data->blur_kernel_radius = CLAMPIS(value, 1, 10000);
#endif
}

RNA_EXTERN_C int Brush_blur_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blur_mode);
}

RNA_EXTERN_C void Brush_blur_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->blur_mode = (std::remove_reference_t<decltype(data->blur_mode)>)value;
#else
    data->blur_mode = value;
#endif
}

RNA_EXTERN_C float Brush_falloff_angle_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->falloff_angle);
}

RNA_EXTERN_C void Brush_falloff_angle_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->falloff_angle = (std::remove_reference_t<decltype(data->falloff_angle)>)CLAMPIS(value, 0.0f, 1.5707963705f);
#else
    data->falloff_angle = CLAMPIS(value, 0.0f, 1.5707963705f);
#endif
}

RNA_EXTERN_C bool Brush_use_airbrush_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_airbrush_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool Brush_use_original_normal_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void Brush_use_original_normal_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

RNA_EXTERN_C bool Brush_use_original_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void Brush_use_original_plane_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool Brush_use_automasking_topology_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_topology_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 1; }
    else { data->automasking_flags &= ~1; }
}

RNA_EXTERN_C bool Brush_use_automasking_face_sets_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 2) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_face_sets_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 2; }
    else { data->automasking_flags &= ~2; }
}

RNA_EXTERN_C bool Brush_use_automasking_boundary_edges_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 4) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_boundary_edges_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 4; }
    else { data->automasking_flags &= ~4; }
}

RNA_EXTERN_C bool Brush_use_automasking_boundary_face_sets_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 8) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_boundary_face_sets_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 8; }
    else { data->automasking_flags &= ~8; }
}

RNA_EXTERN_C bool Brush_use_automasking_cavity_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 16) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_cavity_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Brush_automasking_cavity_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Brush_use_automasking_cavity_inverted_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 32) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_cavity_inverted_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Brush_automasking_invert_cavity_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Brush_use_automasking_custom_cavity_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 64) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_custom_cavity_curve_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 64; }
    else { data->automasking_flags &= ~64; }
}

RNA_EXTERN_C float Brush_automasking_cavity_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->automasking_cavity_factor);
}

RNA_EXTERN_C void Brush_automasking_cavity_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->automasking_cavity_factor = (std::remove_reference_t<decltype(data->automasking_cavity_factor)>)CLAMPIS(value, 0.0f, 5.0f);
#else
    data->automasking_cavity_factor = CLAMPIS(value, 0.0f, 5.0f);
#endif
}

RNA_EXTERN_C int Brush_automasking_cavity_blur_steps_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->automasking_cavity_blur_steps);
}

RNA_EXTERN_C void Brush_automasking_cavity_blur_steps_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->automasking_cavity_blur_steps = (std::remove_reference_t<decltype(data->automasking_cavity_blur_steps)>)CLAMPIS(value, 0, 25);
#else
    data->automasking_cavity_blur_steps = CLAMPIS(value, 0, 25);
#endif
}

RNA_EXTERN_C PointerRNA Brush_automasking_cavity_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->automasking_cavity_curve);
}

RNA_EXTERN_C bool Brush_use_automasking_start_normal_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 256) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_start_normal_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 256; }
    else { data->automasking_flags &= ~256; }
}

RNA_EXTERN_C bool Brush_use_automasking_view_normal_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 512) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_view_normal_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 512; }
    else { data->automasking_flags &= ~512; }
}

RNA_EXTERN_C bool Brush_use_automasking_view_occlusion_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 1024) != 0);
}

RNA_EXTERN_C void Brush_use_automasking_view_occlusion_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 1024; }
    else { data->automasking_flags &= ~1024; }
}

RNA_EXTERN_C int Brush_use_scene_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 131072);
}

RNA_EXTERN_C void Brush_use_scene_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~131072;
    data->flag |= value;
}

RNA_EXTERN_C bool Brush_use_grab_active_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void Brush_use_grab_active_vertex_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool Brush_use_grab_silhouette_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 256) != 0);
}

RNA_EXTERN_C void Brush_use_grab_silhouette_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 256; }
    else { data->flag2 &= ~256; }
}

RNA_EXTERN_C bool Brush_use_paint_antialiasing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->sampling_flag) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_paint_antialiasing_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->sampling_flag |= 1; }
    else { data->sampling_flag &= ~1; }
}

RNA_EXTERN_C bool Brush_use_multiplane_scrape_dynamic_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_multiplane_scrape_dynamic_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 1; }
    else { data->flag2 &= ~1; }
}

RNA_EXTERN_C bool Brush_show_multiplane_scrape_planes_preview_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 2) != 0);
}

RNA_EXTERN_C void Brush_show_multiplane_scrape_planes_preview_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 2; }
    else { data->flag2 &= ~2; }
}

RNA_EXTERN_C bool Brush_use_pose_ik_anchored_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 4) != 0);
}

RNA_EXTERN_C void Brush_use_pose_ik_anchored_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 4; }
    else { data->flag2 &= ~4; }
}

RNA_EXTERN_C bool Brush_use_pose_lock_rotation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 32) != 0);
}

RNA_EXTERN_C void Brush_use_pose_lock_rotation_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 32; }
    else { data->flag2 &= ~32; }
}

RNA_EXTERN_C bool Brush_use_connected_only_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 8) != 0);
}

RNA_EXTERN_C void Brush_use_connected_only_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 8; }
    else { data->flag2 &= ~8; }
}

RNA_EXTERN_C bool Brush_use_cloth_pin_simulation_boundary_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 16) != 0);
}

RNA_EXTERN_C void Brush_use_cloth_pin_simulation_boundary_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 16; }
    else { data->flag2 &= ~16; }
}

RNA_EXTERN_C bool Brush_use_cloth_collision_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 64) != 0);
}

RNA_EXTERN_C void Brush_use_cloth_collision_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 64; }
    else { data->flag2 &= ~64; }
}

RNA_EXTERN_C bool Brush_invert_to_scrape_fill_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Brush_invert_to_scrape_fill_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool Brush_use_pressure_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void Brush_use_pressure_strength_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool Brush_use_offset_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

RNA_EXTERN_C void Brush_use_offset_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

RNA_EXTERN_C bool Brush_use_pressure_area_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 128) != 0);
}

RNA_EXTERN_C void Brush_use_pressure_area_radius_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 128; }
    else { data->flag2 &= ~128; }
}

RNA_EXTERN_C bool Brush_use_pressure_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void Brush_use_pressure_size_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool Brush_use_pressure_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void Brush_use_pressure_jitter_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool Brush_use_pressure_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void Brush_use_pressure_spacing_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C int Brush_use_pressure_masking_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_pressure);
}

RNA_EXTERN_C void Brush_use_pressure_masking_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->mask_pressure = (std::remove_reference_t<decltype(data->mask_pressure)>)value;
#else
    data->mask_pressure = value;
#endif
}

RNA_EXTERN_C bool Brush_use_inverse_smooth_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 16777216) != 0);
}

RNA_EXTERN_C void Brush_use_inverse_smooth_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 16777216; }
    else { data->flag &= ~16777216; }
}

RNA_EXTERN_C bool Brush_use_plane_trim_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 67108864) != 0);
}

RNA_EXTERN_C void Brush_use_plane_trim_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 67108864; }
    else { data->flag &= ~67108864; }
}

RNA_EXTERN_C bool Brush_use_frontface_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 134217728) != 0);
}

RNA_EXTERN_C void Brush_use_frontface_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 134217728; }
    else { data->flag &= ~134217728; }
}

RNA_EXTERN_C bool Brush_use_frontface_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 33554432) != 0);
}

RNA_EXTERN_C void Brush_use_frontface_falloff_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 33554432; }
    else { data->flag &= ~33554432; }
}

RNA_EXTERN_C bool Brush_use_anchor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void Brush_use_anchor_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool Brush_use_space_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void Brush_use_space_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool Brush_use_line_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 536870912) != 0);
}

RNA_EXTERN_C void Brush_use_line_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 536870912; }
    else { data->flag &= ~536870912; }
}

RNA_EXTERN_C bool Brush_use_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & INT_MIN) != 0);
}

RNA_EXTERN_C void Brush_use_curve_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= INT_MIN; }
    else { data->flag &= ~INT_MIN; }
}

RNA_EXTERN_C bool Brush_use_smooth_stroke_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void Brush_use_smooth_stroke_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool Brush_use_persistent_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void Brush_use_persistent_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool Brush_use_accumulate_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void Brush_use_accumulate_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool Brush_use_space_attenuation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

RNA_EXTERN_C void Brush_use_space_attenuation_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

RNA_EXTERN_C bool Brush_use_adaptive_space_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

RNA_EXTERN_C void Brush_use_adaptive_space_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

RNA_EXTERN_C int Brush_use_locked_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 1048576);
}

RNA_EXTERN_C void Brush_use_locked_size_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~1048576;
    data->flag |= value;
}

RNA_EXTERN_C int Brush_color_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 2097152);
}

RNA_EXTERN_C void Brush_color_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Brush_use_gradient_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Brush_use_edge_to_edge_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 4194304) != 0);
}

RNA_EXTERN_C void Brush_use_edge_to_edge_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

RNA_EXTERN_C bool Brush_use_restore_mesh_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 8388608) != 0);
}

RNA_EXTERN_C void Brush_use_restore_mesh_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 8388608; }
    else { data->flag &= ~8388608; }
}

RNA_EXTERN_C bool Brush_use_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return !(((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void Brush_use_alpha_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (!value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C PointerRNA Brush_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

RNA_EXTERN_C PointerRNA Brush_paint_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PaintCurve, data->paint_curve);
}

RNA_EXTERN_C void Brush_paint_curve_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->paint_curve) {
        id_us_min((ID *)data->paint_curve);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->paint_curve = value.data;
}

RNA_EXTERN_C PointerRNA Brush_gradient_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->gradient);
}

RNA_EXTERN_C int Brush_gradient_stroke_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_stroke_mode);
}

RNA_EXTERN_C void Brush_gradient_stroke_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gradient_stroke_mode = (std::remove_reference_t<decltype(data->gradient_stroke_mode)>)value;
#else
    data->gradient_stroke_mode = value;
#endif
}

RNA_EXTERN_C int Brush_gradient_fill_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_fill_mode);
}

RNA_EXTERN_C void Brush_gradient_fill_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->gradient_fill_mode = (std::remove_reference_t<decltype(data->gradient_fill_mode)>)value;
#else
    data->gradient_fill_mode = value;
#endif
}

RNA_EXTERN_C bool Brush_use_primary_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 2) != 0);
}

RNA_EXTERN_C void Brush_use_primary_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 2; }
    else { data->overlay_flags &= ~2; }
}

RNA_EXTERN_C bool Brush_use_secondary_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 4) != 0);
}

RNA_EXTERN_C void Brush_use_secondary_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 4; }
    else { data->overlay_flags &= ~4; }
}

RNA_EXTERN_C bool Brush_use_cursor_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_cursor_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 1; }
    else { data->overlay_flags &= ~1; }
}

RNA_EXTERN_C bool Brush_use_cursor_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 8) != 0);
}

RNA_EXTERN_C void Brush_use_cursor_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 8; }
    else { data->overlay_flags &= ~8; }
}

RNA_EXTERN_C bool Brush_use_primary_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 16) != 0);
}

RNA_EXTERN_C void Brush_use_primary_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 16; }
    else { data->overlay_flags &= ~16; }
}

RNA_EXTERN_C bool Brush_use_secondary_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 32) != 0);
}

RNA_EXTERN_C void Brush_use_secondary_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 32; }
    else { data->overlay_flags &= ~32; }
}

RNA_EXTERN_C bool Brush_use_paint_sculpt_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 2) != 0);
}

RNA_EXTERN_C void Brush_use_paint_sculpt_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 2; }
    else { data->ob_mode &= ~2; }
}

RNA_EXTERN_C bool Brush_use_paint_uv_sculpt_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 1) != 0);
}

RNA_EXTERN_C void Brush_use_paint_uv_sculpt_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 1; }
    else { data->ob_mode &= ~1; }
}

RNA_EXTERN_C bool Brush_use_paint_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 4) != 0);
}

RNA_EXTERN_C void Brush_use_paint_vertex_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 4; }
    else { data->ob_mode &= ~4; }
}

RNA_EXTERN_C bool Brush_use_paint_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 8) != 0);
}

RNA_EXTERN_C void Brush_use_paint_weight_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 8; }
    else { data->ob_mode &= ~8; }
}

RNA_EXTERN_C bool Brush_use_paint_image_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 16) != 0);
}

RNA_EXTERN_C void Brush_use_paint_image_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 16; }
    else { data->ob_mode &= ~16; }
}

RNA_EXTERN_C bool Brush_use_paint_grease_pencil_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 256) != 0);
}

RNA_EXTERN_C void Brush_use_paint_grease_pencil_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 256; }
    else { data->ob_mode &= ~256; }
}

RNA_EXTERN_C bool Brush_use_vertex_grease_pencil_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 2048) != 0);
}

RNA_EXTERN_C void Brush_use_vertex_grease_pencil_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 2048; }
    else { data->ob_mode &= ~2048; }
}

RNA_EXTERN_C bool Brush_use_paint_sculpt_curves_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 4096) != 0);
}

RNA_EXTERN_C void Brush_use_paint_sculpt_curves_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 4096; }
    else { data->ob_mode &= ~4096; }
}

RNA_EXTERN_C PointerRNA Brush_texture_slot_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mtex);
}

RNA_EXTERN_C PointerRNA Brush_texture_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mtex.tex);
}

RNA_EXTERN_C void Brush_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->mtex.tex) {
        id_us_min((ID *)data->mtex.tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mtex.tex = value.data;
}

RNA_EXTERN_C PointerRNA Brush_mask_texture_slot_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mask_mtex);
}

RNA_EXTERN_C PointerRNA Brush_mask_texture_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mask_mtex.tex);
}

RNA_EXTERN_C void Brush_mask_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->mask_mtex.tex) {
        id_us_min((ID *)data->mask_mtex.tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mask_mtex.tex = value.data;
}

RNA_EXTERN_C int Brush_texture_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->texture_overlay_alpha);
}

RNA_EXTERN_C void Brush_texture_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->texture_overlay_alpha = (std::remove_reference_t<decltype(data->texture_overlay_alpha)>)CLAMPIS(value, 0, 100);
#else
    data->texture_overlay_alpha = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int Brush_mask_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_overlay_alpha);
}

RNA_EXTERN_C void Brush_mask_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->mask_overlay_alpha = (std::remove_reference_t<decltype(data->mask_overlay_alpha)>)CLAMPIS(value, 0, 100);
#else
    data->mask_overlay_alpha = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int Brush_cursor_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cursor_overlay_alpha);
}

RNA_EXTERN_C void Brush_cursor_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->cursor_overlay_alpha = (std::remove_reference_t<decltype(data->cursor_overlay_alpha)>)CLAMPIS(value, 0, 100);
#else
    data->cursor_overlay_alpha = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C void Brush_cursor_color_add_get(PointerRNA *ptr, float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->add_col)[i]);
    }
}

RNA_EXTERN_C void Brush_cursor_color_add_set(PointerRNA *ptr, const float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->add_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C void Brush_cursor_color_subtract_get(PointerRNA *ptr, float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->sub_col)[i]);
    }
}

RNA_EXTERN_C void Brush_cursor_color_subtract_set(PointerRNA *ptr, const float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->sub_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C bool Brush_use_custom_icon_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 268435456) != 0);
}

RNA_EXTERN_C void Brush_use_custom_icon_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 268435456; }
    else { data->flag &= ~268435456; }
}

RNA_EXTERN_C void Brush_icon_filepath_get(PointerRNA *ptr, char *value)
{
    Brush *data = (Brush *)(ptr->data);
    BLI_assert(strlen(data->icon_filepath) < 1024);
    strcpy(value, data->icon_filepath);
}

RNA_EXTERN_C int Brush_icon_filepath_length(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return strlen(data->icon_filepath);
}

RNA_EXTERN_C void Brush_icon_filepath_set(PointerRNA *ptr, const char *value)
{
    Brush *data = (Brush *)(ptr->data);
    BLI_strncpy(data->icon_filepath, value, 1024);
}

RNA_EXTERN_C PointerRNA Brush_clone_image_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone.image);
}

RNA_EXTERN_C void Brush_clone_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->clone.image) {
        id_us_min((ID *)data->clone.image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->clone.image = value.data;
}

RNA_EXTERN_C float Brush_clone_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->clone.alpha);
}

RNA_EXTERN_C void Brush_clone_alpha_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
#ifdef __cplusplus
    data->clone.alpha = (std::remove_reference_t<decltype(data->clone.alpha)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->clone.alpha = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void Brush_clone_offset_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->clone.offset)[i]);
    }
}

RNA_EXTERN_C void Brush_clone_offset_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->clone.offset)[i] = values[i];
    }
}

RNA_EXTERN_C PointerRNA Brush_brush_capabilities_get(PointerRNA *ptr)
{
    return rna_Brush_capabilities_get(ptr);
}

RNA_EXTERN_C PointerRNA Brush_sculpt_capabilities_get(PointerRNA *ptr)
{
    return rna_Sculpt_tool_capabilities_get(ptr);
}

RNA_EXTERN_C PointerRNA Brush_image_paint_capabilities_get(PointerRNA *ptr)
{
    return rna_Imapaint_tool_capabilities_get(ptr);
}

RNA_EXTERN_C PointerRNA Brush_vertex_paint_capabilities_get(PointerRNA *ptr)
{
    return rna_Vertexpaint_tool_capabilities_get(ptr);
}

RNA_EXTERN_C PointerRNA Brush_weight_paint_capabilities_get(PointerRNA *ptr)
{
    return rna_Weightpaint_tool_capabilities_get(ptr);
}

RNA_EXTERN_C PointerRNA Brush_gpencil_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushGpencilSettings, data->gpencil_settings);
}

RNA_EXTERN_C PointerRNA Brush_curves_sculpt_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushCurvesSculptSettings, data->curves_sculpt_settings);
}

static PointerRNA BrushCapabilities_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushCapabilities_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilities_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilities_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilities_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilities_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilities_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushCapabilities_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushCapabilities_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool BrushCapabilities_has_overlay_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_overlay_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilities_has_random_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_random_texture_angle_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilities_has_spacing_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_spacing_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilities_has_smooth_stroke_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilities_has_smooth_stroke_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesSculpt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushCapabilitiesSculpt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesSculpt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesSculpt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesSculpt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesSculpt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushCapabilitiesSculpt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushCapabilitiesSculpt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_accumulate_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_accumulate_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_auto_smooth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_auto_smooth_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_topology_rake_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_topology_rake_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_height_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_height_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_jitter_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_jitter_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_normal_weight_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_normal_weight_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_rake_factor_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_rake_factor_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_persistence_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_persistence_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_pinch_factor_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_pinch_factor_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_plane_offset_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_plane_offset_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_random_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_random_texture_angle_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_sculpt_plane_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_sculpt_plane_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_color_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_secondary_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_secondary_color_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_smooth_stroke_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_smooth_stroke_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_space_attenuation_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_space_attenuation_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_strength_pressure_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_strength_pressure_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_direction_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_direction_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_gravity_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_gravity_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesSculpt_has_tilt_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesSculpt_has_tilt_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesImagePaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushCapabilitiesImagePaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesImagePaint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesImagePaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesImagePaint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesImagePaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushCapabilitiesImagePaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushCapabilitiesImagePaint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesImagePaint_has_accumulate_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_accumulate_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesImagePaint_has_space_attenuation_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_space_attenuation_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesImagePaint_has_radius_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_radius_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesImagePaint_has_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesImagePaint_has_color_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesVertexPaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushCapabilitiesVertexPaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesVertexPaint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesVertexPaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesVertexPaint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesVertexPaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushCapabilitiesVertexPaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushCapabilitiesVertexPaint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesVertexPaint_has_color_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesVertexPaint_has_color_get;
    return fn(ptr);
}

static PointerRNA BrushCapabilitiesWeightPaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushCapabilitiesWeightPaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesWeightPaint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesWeightPaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesWeightPaint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCapabilitiesWeightPaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushCapabilitiesWeightPaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushCapabilitiesWeightPaint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool BrushCapabilitiesWeightPaint_has_weight_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BrushCapabilitiesWeightPaint_has_weight_get;
    return fn(ptr);
}

static PointerRNA BrushGpencilSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushGpencilSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushGpencilSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushGpencilSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushGpencilSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushGpencilSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushGpencilSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushGpencilSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float BrushGpencilSettings_pen_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_strength);
}

RNA_EXTERN_C void BrushGpencilSettings_pen_strength_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_strength = (std::remove_reference_t<decltype(data->draw_strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->draw_strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_pen_jitter_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_jitter);
}

RNA_EXTERN_C void BrushGpencilSettings_pen_jitter_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_jitter = (std::remove_reference_t<decltype(data->draw_jitter)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->draw_jitter = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_random_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_random_press);
}

RNA_EXTERN_C void BrushGpencilSettings_random_pressure_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_random_press = (std::remove_reference_t<decltype(data->draw_random_press)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->draw_random_press = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_random_strength);
}

RNA_EXTERN_C void BrushGpencilSettings_random_strength_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_random_strength = (std::remove_reference_t<decltype(data->draw_random_strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->draw_random_strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_angle_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_angle);
}

RNA_EXTERN_C void BrushGpencilSettings_angle_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_angle = (std::remove_reference_t<decltype(data->draw_angle)>)CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#else
    data->draw_angle = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_angle_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_angle_factor);
}

RNA_EXTERN_C void BrushGpencilSettings_angle_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_angle_factor = (std::remove_reference_t<decltype(data->draw_angle_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->draw_angle_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_pen_smooth_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_smoothfac);
}

RNA_EXTERN_C void BrushGpencilSettings_pen_smooth_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_smoothfac = (std::remove_reference_t<decltype(data->draw_smoothfac)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->draw_smoothfac = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_pen_smooth_steps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->draw_smoothlvl);
}

RNA_EXTERN_C void BrushGpencilSettings_pen_smooth_steps_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_smoothlvl = (std::remove_reference_t<decltype(data->draw_smoothlvl)>)CLAMPIS(value, 0, 100);
#else
    data->draw_smoothlvl = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_pen_subdivision_steps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->draw_subdivide);
}

RNA_EXTERN_C void BrushGpencilSettings_pen_subdivision_steps_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_subdivide = (std::remove_reference_t<decltype(data->draw_subdivide)>)CLAMPIS(value, 0, 3);
#else
    data->draw_subdivide = CLAMPIS(value, 0, 3);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_simplify_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->simplify_f);
}

RNA_EXTERN_C void BrushGpencilSettings_simplify_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->simplify_f = (std::remove_reference_t<decltype(data->simplify_f)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->simplify_f = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_sensitivity_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_sensitivity);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_strength);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_jitter_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_jitter);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_random_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_pressure);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_strength);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_random_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_uv);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_random_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_hue);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_random_saturation_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_saturation);
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_curve_random_value_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_value);
}

RNA_EXTERN_C float BrushGpencilSettings_fill_threshold_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_threshold);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_threshold_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_threshold = (std::remove_reference_t<decltype(data->fill_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->fill_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_fill_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_factor);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_factor = (std::remove_reference_t<decltype(data->fill_factor)>)CLAMPIS(value, 0.0500000007f, 8.0f);
#else
    data->fill_factor = CLAMPIS(value, 0.0500000007f, 8.0f);
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_fill_simplify_level_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_simplylvl);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_simplify_level_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_simplylvl = (std::remove_reference_t<decltype(data->fill_simplylvl)>)CLAMPIS(value, 0, 10);
#else
    data->fill_simplylvl = CLAMPIS(value, 0, 10);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_uv_random_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->uv_random);
}

RNA_EXTERN_C void BrushGpencilSettings_uv_random_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->uv_random = (std::remove_reference_t<decltype(data->uv_random)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->uv_random = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_hardness_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->hardness);
}

RNA_EXTERN_C void BrushGpencilSettings_hardness_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->hardness = (std::remove_reference_t<decltype(data->hardness)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->hardness = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C void BrushGpencilSettings_aspect_get(PointerRNA *ptr, float values[2])
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->aspect_ratio)[i]);
    }
}

RNA_EXTERN_C void BrushGpencilSettings_aspect_set(PointerRNA *ptr, const float values[2])
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->aspect_ratio)[i] = CLAMPIS(values[i], 0.0099999998f, 1.0f);
    }
}

RNA_EXTERN_C int BrushGpencilSettings_input_samples_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->input_samples);
}

RNA_EXTERN_C void BrushGpencilSettings_input_samples_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->input_samples = (std::remove_reference_t<decltype(data->input_samples)>)CLAMPIS(value, 0, 10);
#else
    data->input_samples = CLAMPIS(value, 0, 10);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_active_smooth_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->active_smooth);
}

RNA_EXTERN_C void BrushGpencilSettings_active_smooth_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->active_smooth = (std::remove_reference_t<decltype(data->active_smooth)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->active_smooth = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_eraser_strength_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->era_strength_f);
}

RNA_EXTERN_C void BrushGpencilSettings_eraser_strength_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->era_strength_f = (std::remove_reference_t<decltype(data->era_strength_f)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->era_strength_f = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_eraser_thickness_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->era_thickness_f);
}

RNA_EXTERN_C void BrushGpencilSettings_eraser_thickness_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->era_thickness_f = (std::remove_reference_t<decltype(data->era_thickness_f)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->era_thickness_f = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_gpencil_paint_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

RNA_EXTERN_C void BrushGpencilSettings_gpencil_paint_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->icon_id = (std::remove_reference_t<decltype(data->icon_id)>)value;
#else
    data->icon_id = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_gpencil_sculpt_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

RNA_EXTERN_C void BrushGpencilSettings_gpencil_sculpt_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->icon_id = (std::remove_reference_t<decltype(data->icon_id)>)value;
#else
    data->icon_id = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_gpencil_weight_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

RNA_EXTERN_C void BrushGpencilSettings_gpencil_weight_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->icon_id = (std::remove_reference_t<decltype(data->icon_id)>)value;
#else
    data->icon_id = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_gpencil_vertex_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

RNA_EXTERN_C void BrushGpencilSettings_gpencil_vertex_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->icon_id = (std::remove_reference_t<decltype(data->icon_id)>)value;
#else
    data->icon_id = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_vertex_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((data->vertex_mode) & 3);
}

RNA_EXTERN_C void BrushGpencilSettings_vertex_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->vertex_mode &= ~3;
    data->vertex_mode |= value;
}

RNA_EXTERN_C float BrushGpencilSettings_vertex_color_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->vertex_factor);
}

RNA_EXTERN_C void BrushGpencilSettings_vertex_color_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->vertex_factor = (std::remove_reference_t<decltype(data->vertex_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->vertex_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_random_hue_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_hue);
}

RNA_EXTERN_C void BrushGpencilSettings_random_hue_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->random_hue = (std::remove_reference_t<decltype(data->random_hue)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->random_hue = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_random_saturation_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_saturation);
}

RNA_EXTERN_C void BrushGpencilSettings_random_saturation_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->random_saturation = (std::remove_reference_t<decltype(data->random_saturation)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->random_saturation = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_random_value_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_value);
}

RNA_EXTERN_C void BrushGpencilSettings_random_value_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->random_value = (std::remove_reference_t<decltype(data->random_value)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->random_value = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_extend_stroke_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_extend_fac);
}

RNA_EXTERN_C void BrushGpencilSettings_extend_stroke_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_extend_fac = (std::remove_reference_t<decltype(data->fill_extend_fac)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->fill_extend_fac = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_fill_extend_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_extend_mode);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_extend_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_extend_mode = (std::remove_reference_t<decltype(data->fill_extend_mode)>)value;
#else
    data->fill_extend_mode = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_dilate_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->dilate_pixels);
}

RNA_EXTERN_C void BrushGpencilSettings_dilate_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->dilate_pixels = (std::remove_reference_t<decltype(data->dilate_pixels)>)CLAMPIS(value, -40, 40);
#else
    data->dilate_pixels = CLAMPIS(value, -40, 40);
#endif
}

RNA_EXTERN_C float BrushGpencilSettings_outline_thickness_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->outline_fac);
}

RNA_EXTERN_C void BrushGpencilSettings_outline_thickness_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->outline_fac = (std::remove_reference_t<decltype(data->outline_fac)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->outline_fac = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool BrushGpencilSettings_use_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_strength_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_strength_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_jitter_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_jitter_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_stroke_random_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 1) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_stroke_random_hue_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 1; }
    else { data->flag2 &= ~1; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_stroke_random_sat_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 2) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_stroke_random_sat_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 2; }
    else { data->flag2 &= ~2; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_stroke_random_val_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 4) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_stroke_random_val_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 4; }
    else { data->flag2 &= ~4; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_stroke_random_radius_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 8) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_stroke_random_radius_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 8; }
    else { data->flag2 &= ~8; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_stroke_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 16) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_stroke_random_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 16; }
    else { data->flag2 &= ~16; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_stroke_random_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 32) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_stroke_random_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 32; }
    else { data->flag2 &= ~32; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_random_press_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 64) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_random_press_hue_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 64; }
    else { data->flag2 &= ~64; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_random_press_sat_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 128) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_random_press_sat_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 128; }
    else { data->flag2 &= ~128; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_random_press_val_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 256) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_random_press_val_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 256; }
    else { data->flag2 &= ~256; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_random_press_radius_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 512) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_random_press_radius_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 512; }
    else { data->flag2 &= ~512; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_random_press_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 1024) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_random_press_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 1024; }
    else { data->flag2 &= ~1024; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_random_press_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 2048) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_random_press_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 2048; }
    else { data->flag2 &= ~2048; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_settings_stabilizer_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_settings_stabilizer_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C int BrushGpencilSettings_eraser_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->eraser_mode);
}

RNA_EXTERN_C void BrushGpencilSettings_eraser_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->eraser_mode = (std::remove_reference_t<decltype(data->eraser_mode)>)value;
#else
    data->eraser_mode = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_caps_type_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->caps_type);
}

RNA_EXTERN_C void BrushGpencilSettings_caps_type_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->caps_type = (std::remove_reference_t<decltype(data->caps_type)>)value;
#else
    data->caps_type = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_fill_draw_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_draw_mode);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_draw_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_draw_mode = (std::remove_reference_t<decltype(data->fill_draw_mode)>)value;
#else
    data->fill_draw_mode = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_fill_layer_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_layer_mode);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_layer_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_layer_mode = (std::remove_reference_t<decltype(data->fill_layer_mode)>)value;
#else
    data->fill_layer_mode = value;
#endif
}

RNA_EXTERN_C int BrushGpencilSettings_fill_direction_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_direction);
}

RNA_EXTERN_C void BrushGpencilSettings_fill_direction_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->fill_direction = (std::remove_reference_t<decltype(data->fill_direction)>)value;
#else
    data->fill_direction = value;
#endif
}

RNA_EXTERN_C bool BrushGpencilSettings_pin_draw_mode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GPencilBrush_pin_mode_get;
    return fn(ptr);
}

RNA_EXTERN_C void BrushGpencilSettings_pin_draw_mode_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GPencilBrush_pin_mode_set;
    fn(ptr, value);
}

RNA_EXTERN_C int BrushGpencilSettings_brush_draw_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->brush_draw_mode);
}

RNA_EXTERN_C void BrushGpencilSettings_brush_draw_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
#ifdef __cplusplus
    data->brush_draw_mode = (std::remove_reference_t<decltype(data->brush_draw_mode)>)value;
#else
    data->brush_draw_mode = value;
#endif
}

RNA_EXTERN_C bool BrushGpencilSettings_use_trim_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_trim_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_settings_outline_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_settings_outline_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

RNA_EXTERN_C int BrushGpencilSettings_direction_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((data->sculpt_flag) & 512);
}

RNA_EXTERN_C void BrushGpencilSettings_direction_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->sculpt_flag &= ~512;
    data->sculpt_flag |= value;
}

RNA_EXTERN_C bool BrushGpencilSettings_use_edit_position_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 1) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_edit_position_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 1; }
    else { data->sculpt_mode_flag &= ~1; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_edit_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 2) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_edit_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 2; }
    else { data->sculpt_mode_flag &= ~2; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_edit_thickness_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 4) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_edit_thickness_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 4; }
    else { data->sculpt_mode_flag &= ~4; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_edit_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 8) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_edit_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 8; }
    else { data->sculpt_mode_flag &= ~8; }
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_material_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Material, data->material);
}

RNA_EXTERN_C void BrushGpencilSettings_material_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->material) {
        id_us_min((ID *)data->material);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->material = value.data;
}

RNA_EXTERN_C PointerRNA BrushGpencilSettings_material_alt_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Material, data->material_alt);
}

RNA_EXTERN_C void BrushGpencilSettings_material_alt_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->material_alt) {
        id_us_min((ID *)data->material_alt);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->material_alt = value.data;
}

RNA_EXTERN_C bool BrushGpencilSettings_show_fill_boundary_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_show_fill_boundary_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool BrushGpencilSettings_show_fill_extend_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_show_fill_extend_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_collide_strokes_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_collide_strokes_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

RNA_EXTERN_C bool BrushGpencilSettings_show_fill_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_show_fill_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_fill_limit_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_fill_limit_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_default_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_default_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_settings_postprocess_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_settings_postprocess_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_settings_random_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_settings_random_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_material_pin_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_material_pin_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool BrushGpencilSettings_show_lasso_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return !(((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_show_lasso_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (!value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_occlude_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_occlude_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_keep_caps_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_keep_caps_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

RNA_EXTERN_C bool BrushGpencilSettings_use_active_layer_only_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 1048576) != 0);
}

RNA_EXTERN_C void BrushGpencilSettings_use_active_layer_only_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 1048576; }
    else { data->flag &= ~1048576; }
}

static PointerRNA BrushCurvesSculptSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCurvesSculptSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCurvesSculptSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCurvesSculptSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BrushCurvesSculptSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BrushCurvesSculptSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BrushCurvesSculptSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int BrushCurvesSculptSettings_add_amount_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->add_amount);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_add_amount_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->add_amount = (std::remove_reference_t<decltype(data->add_amount)>)CLAMPIS(value, 1, INT_MAX);
#else
    data->add_amount = CLAMPIS(value, 1, INT_MAX);
#endif
}

RNA_EXTERN_C int BrushCurvesSculptSettings_points_per_curve_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->points_per_curve);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_points_per_curve_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->points_per_curve = (std::remove_reference_t<decltype(data->points_per_curve)>)CLAMPIS(value, 2, INT_MAX);
#else
    data->points_per_curve = CLAMPIS(value, 2, INT_MAX);
#endif
}

RNA_EXTERN_C bool BrushCurvesSculptSettings_scale_uniform_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_scale_uniform_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C float BrushCurvesSculptSettings_minimum_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->minimum_length);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_minimum_length_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->minimum_length = (std::remove_reference_t<decltype(data->minimum_length)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->minimum_length = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool BrushCurvesSculptSettings_interpolate_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_interpolate_length_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool BrushCurvesSculptSettings_interpolate_point_count_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_interpolate_point_count_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool BrushCurvesSculptSettings_interpolate_shape_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_interpolate_shape_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C float BrushCurvesSculptSettings_curve_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->curve_length);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_curve_length_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->curve_length = (std::remove_reference_t<decltype(data->curve_length)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->curve_length = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float BrushCurvesSculptSettings_minimum_distance_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->minimum_distance);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_minimum_distance_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->minimum_distance = (std::remove_reference_t<decltype(data->minimum_distance)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->minimum_distance = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int BrushCurvesSculptSettings_density_add_attempts_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->density_add_attempts);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_density_add_attempts_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->density_add_attempts = (std::remove_reference_t<decltype(data->density_add_attempts)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->density_add_attempts = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C int BrushCurvesSculptSettings_density_mode_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->density_mode);
}

RNA_EXTERN_C void BrushCurvesSculptSettings_density_mode_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
#ifdef __cplusplus
    data->density_mode = (std::remove_reference_t<decltype(data->density_mode)>)value;
#else
    data->density_mode = value;
#endif
}

RNA_EXTERN_C PointerRNA BrushCurvesSculptSettings_curve_parameter_falloff_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_parameter_falloff);
}

RNA_EXTERN_C float BrushTextureSlot_angle_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->rot);
}

RNA_EXTERN_C void BrushTextureSlot_angle_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
#ifdef __cplusplus
    data->rot = (std::remove_reference_t<decltype(data->rot)>)CLAMPIS(value, 0.0f, 6.2831854820f);
#else
    data->rot = CLAMPIS(value, 0.0f, 6.2831854820f);
#endif
}

RNA_EXTERN_C int BrushTextureSlot_map_mode_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->brush_map_mode);
}

RNA_EXTERN_C void BrushTextureSlot_map_mode_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
#ifdef __cplusplus
    data->brush_map_mode = (std::remove_reference_t<decltype(data->brush_map_mode)>)value;
#else
    data->brush_map_mode = value;
#endif
}

RNA_EXTERN_C int BrushTextureSlot_mask_map_mode_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->brush_map_mode);
}

RNA_EXTERN_C void BrushTextureSlot_mask_map_mode_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
#ifdef __cplusplus
    data->brush_map_mode = (std::remove_reference_t<decltype(data->brush_map_mode)>)value;
#else
    data->brush_map_mode = value;
#endif
}

RNA_EXTERN_C bool BrushTextureSlot_use_rake_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->brush_angle_mode) & 2) != 0);
}

RNA_EXTERN_C void BrushTextureSlot_use_rake_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->brush_angle_mode |= 2; }
    else { data->brush_angle_mode &= ~2; }
}

RNA_EXTERN_C bool BrushTextureSlot_use_random_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->brush_angle_mode) & 1) != 0);
}

RNA_EXTERN_C void BrushTextureSlot_use_random_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->brush_angle_mode |= 1; }
    else { data->brush_angle_mode &= ~1; }
}

RNA_EXTERN_C float BrushTextureSlot_random_angle_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->random_angle);
}

RNA_EXTERN_C void BrushTextureSlot_random_angle_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
#ifdef __cplusplus
    data->random_angle = (std::remove_reference_t<decltype(data->random_angle)>)CLAMPIS(value, 0.0f, 6.2831854820f);
#else
    data->random_angle = CLAMPIS(value, 0.0f, 6.2831854820f);
#endif
}

RNA_EXTERN_C bool BrushTextureSlot_has_texture_angle_source_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextureCapabilities_has_texture_angle_source_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushTextureSlot_has_random_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextureCapabilities_has_random_texture_angle_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BrushTextureSlot_has_texture_angle_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_TextureCapabilities_has_texture_angle_get;
    return fn(ptr);
}











/* Brush */
static const EnumPropertyItem rna_Brush_blend_items[31] = {
	{0, "MIX", 0, "Mix", "Use Mix blending mode while painting"},
	{0, "", 0, nullptr, nullptr},
	{5, "DARKEN", 0, "Darken", "Use Darken blending mode while painting"},
	{3, "MUL", 0, "Multiply", "Use Multiply blending mode while painting"},
	{10, "COLORBURN", 0, "Color Burn", "Use Color Burn blending mode while painting"},
	{11, "LINEARBURN", 0, "Linear Burn", "Use Linear Burn blending mode while painting"},
	{0, "", 0, nullptr, nullptr},
	{4, "LIGHTEN", 0, "Lighten", "Use Lighten blending mode while painting"},
	{13, "SCREEN", 0, "Screen", "Use Screen blending mode while painting"},
	{12, "COLORDODGE", 0, "Color Dodge", "Use Color Dodge blending mode while painting"},
	{1, "ADD", 0, "Add", "Use Add blending mode while painting"},
	{0, "", 0, nullptr, nullptr},
	{8, "OVERLAY", 0, "Overlay", "Use Overlay blending mode while painting"},
	{14, "SOFTLIGHT", 0, "Soft Light", "Use Soft Light blending mode while painting"},
	{9, "HARDLIGHT", 0, "Hard Light", "Use Hard Light blending mode while painting"},
	{16, "VIVIDLIGHT", 0, "Vivid Light", "Use Vivid Light blending mode while painting"},
	{17, "LINEARLIGHT", 0, "Linear Light", "Use Linear Light blending mode while painting"},
	{15, "PINLIGHT", 0, "Pin Light", "Use Pin Light blending mode while painting"},
	{0, "", 0, nullptr, nullptr},
	{18, "DIFFERENCE", 0, "Difference", "Use Difference blending mode while painting"},
	{19, "EXCLUSION", 0, "Exclusion", "Use Exclusion blending mode while painting"},
	{2, "SUB", 0, "Subtract", "Use Subtract blending mode while painting"},
	{0, "", 0, nullptr, nullptr},
	{20, "HUE", 0, "Hue", "Use Hue blending mode while painting"},
	{21, "SATURATION", 0, "Saturation", "Use Saturation blending mode while painting"},
	{23, "COLOR", 0, "Color", "Use Color blending mode while painting"},
	{22, "LUMINOSITY", 0, "Value", "Use Value blending mode while painting"},
	{0, "", 0, nullptr, nullptr},
	{6, "ERASE_ALPHA", 0, "Erase Alpha", "Erase alpha while painting"},
	{7, "ADD_ALPHA", 0, "Add Alpha", "Add alpha while painting"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_blend = {
	{(PropertyRNA *)&rna_Brush_sculpt_tool, nullptr,
	-1, "blend", 3, 0, 0, 4, 0, "Blending Mode",
	"Brush blending mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, blend), (RawPropertyType)1, nullptr},
	Brush_blend_get, Brush_blend_set, nullptr, nullptr, nullptr, rna_Brush_blend_items, 30, 0
};

EnumPropertyRNA rna_Brush_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_uv_sculpt_tool, (PropertyRNA *)&rna_Brush_blend,
	-1, "sculpt_tool", 3, 0, 0, 4, 0, "Sculpt Tool",
	"",
	0, "Brush",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sculpt_tool), (RawPropertyType)2, nullptr},
	Brush_sculpt_tool_get, Brush_sculpt_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_sculpt_tool_items, 35, 1
};

EnumPropertyRNA rna_Brush_uv_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_vertex_tool, (PropertyRNA *)&rna_Brush_sculpt_tool,
	-1, "uv_sculpt_tool", 3, 0, 0, 4, 0, "Sculpt Tool",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, uv_sculpt_tool), (RawPropertyType)2, nullptr},
	Brush_uv_sculpt_tool_get, Brush_uv_sculpt_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_uv_sculpt_tool_items, 3, 0
};

EnumPropertyRNA rna_Brush_vertex_tool = {
	{(PropertyRNA *)&rna_Brush_weight_tool, (PropertyRNA *)&rna_Brush_uv_sculpt_tool,
	-1, "vertex_tool", 3, 0, 0, 4, 0, "Vertex Paint Tool",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, vertexpaint_tool), (RawPropertyType)2, nullptr},
	Brush_vertex_tool_get, Brush_vertex_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_vertex_tool_items, 4, 0
};

EnumPropertyRNA rna_Brush_weight_tool = {
	{(PropertyRNA *)&rna_Brush_image_tool, (PropertyRNA *)&rna_Brush_vertex_tool,
	-1, "weight_tool", 3, 0, 0, 4, 0, "Weight Paint Tool",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, weightpaint_tool), (RawPropertyType)2, nullptr},
	Brush_weight_tool_get, Brush_weight_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_weight_tool_items, 4, 0
};

EnumPropertyRNA rna_Brush_image_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_tool, (PropertyRNA *)&rna_Brush_weight_tool,
	-1, "image_tool", 3, 0, 0, 4, 0, "Image Paint Tool",
	"",
	0, "Brush",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 268697600, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, imagepaint_tool), (RawPropertyType)2, nullptr},
	Brush_image_tool_get, Brush_image_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_image_tool_items, 6, 0
};

EnumPropertyRNA rna_Brush_gpencil_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_vertex_tool, (PropertyRNA *)&rna_Brush_image_tool,
	-1, "gpencil_tool", 1, 0, 0, 4, 0, "Grease Pencil Draw Tool",
	"",
	0, "Brush",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_tool), (RawPropertyType)2, nullptr},
	Brush_gpencil_tool_get, Brush_gpencil_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_types_items, 4, 0
};

EnumPropertyRNA rna_Brush_gpencil_vertex_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_sculpt_tool, (PropertyRNA *)&rna_Brush_gpencil_tool,
	-1, "gpencil_vertex_tool", 1, 0, 0, 4, 0, "Grease Pencil Vertex Paint Tool",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_vertex_tool), (RawPropertyType)2, nullptr},
	Brush_gpencil_vertex_tool_get, Brush_gpencil_vertex_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_vertex_types_items, 5, 0
};

EnumPropertyRNA rna_Brush_gpencil_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_weight_tool, (PropertyRNA *)&rna_Brush_gpencil_vertex_tool,
	-1, "gpencil_sculpt_tool", 1, 0, 0, 4, 0, "Grease Pencil Sculpt Paint Tool",
	"",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_sculpt_tool), (RawPropertyType)2, nullptr},
	Brush_gpencil_sculpt_tool_get, Brush_gpencil_sculpt_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_sculpt_types_items, 9, 0
};

EnumPropertyRNA rna_Brush_gpencil_weight_tool = {
	{(PropertyRNA *)&rna_Brush_curves_sculpt_tool, (PropertyRNA *)&rna_Brush_gpencil_sculpt_tool,
	-1, "gpencil_weight_tool", 1, 0, 0, 4, 0, "Grease Pencil Weight Paint Tool",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_weight_tool), (RawPropertyType)2, nullptr},
	Brush_gpencil_weight_tool_get, Brush_gpencil_weight_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_gpencil_weight_types_items, 4, 0
};

EnumPropertyRNA rna_Brush_curves_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_direction, (PropertyRNA *)&rna_Brush_gpencil_weight_tool,
	-1, "curves_sculpt_tool", 1, 0, 0, 4, 0, "Curves Sculpt Tool",
	"",
	0, "Curves",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, curves_sculpt_tool), (RawPropertyType)2, nullptr},
	Brush_curves_sculpt_tool_get, Brush_curves_sculpt_tool_set, nullptr, nullptr, nullptr, rna_enum_brush_curves_sculpt_tool_items, 13, 0
};

static const EnumPropertyItem rna_Brush_direction_items[3] = {
	{0, "ADD", 31, "Add", "Add effect of brush"},
	{512, "SUBTRACT", 32, "Subtract", "Subtract effect of brush"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_direction = {
	{(PropertyRNA *)&rna_Brush_stroke_method, (PropertyRNA *)&rna_Brush_curves_sculpt_tool,
	-1, "direction", 3, 0, 0, 4, 0, "Direction",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), (RawPropertyType)0, nullptr},
	Brush_direction_get, Brush_direction_set, rna_Brush_direction_itemf, nullptr, nullptr, rna_Brush_direction_items, 2, 0
};

static const EnumPropertyItem rna_Brush_stroke_method_items[8] = {
	{0, "DOTS", 0, "Dots", "Apply paint on each mouse move step"},
	{8388608, "DRAG_DOT", 0, "Drag Dot", "Allows a single dot to be carefully positioned"},
	{1024, "SPACE", 0, "Space", "Limit brush application to the distance specified by spacing"},
	{1, "AIRBRUSH", 0, "Airbrush", "Keep applying paint effect while holding mouse (spray)"},
	{256, "ANCHORED", 0, "Anchored", "Keep the brush anchored to the initial location"},
	{536870912, "LINE", 0, "Line", "Draw a line with dabs separated according to spacing"},
	{-2147483648, "CURVE", 0, "Curve", "Define the stroke curve with a bezier curve (dabs are separated according to spacing)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_stroke_method = {
	{(PropertyRNA *)&rna_Brush_sculpt_plane, (PropertyRNA *)&rna_Brush_direction,
	-1, "stroke_method", 3, 0, 0, 4, 0, "Stroke Method",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_stroke_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), (RawPropertyType)0, nullptr},
	Brush_stroke_method_get, Brush_stroke_method_set, rna_Brush_stroke_itemf, nullptr, nullptr, rna_Brush_stroke_method_items, 7, 0
};

static const EnumPropertyItem rna_Brush_sculpt_plane_items[6] = {
	{0, "AREA", 0, "Area Plane", ""},
	{1, "VIEW", 0, "View Plane", ""},
	{2, "X", 0, "X Plane", ""},
	{3, "Y", 0, "Y Plane", ""},
	{4, "Z", 0, "Z Plane", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_sculpt_plane = {
	{(PropertyRNA *)&rna_Brush_mask_tool, (PropertyRNA *)&rna_Brush_stroke_method,
	-1, "sculpt_plane", 3, 0, 0, 4, 0, "Sculpt Plane",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sculpt_plane), (RawPropertyType)0, nullptr},
	Brush_sculpt_plane_get, Brush_sculpt_plane_set, nullptr, nullptr, nullptr, rna_Brush_sculpt_plane_items, 5, 0
};

static const EnumPropertyItem rna_Brush_mask_tool_items[3] = {
	{0, "DRAW", 0, "Draw", ""},
	{1, "SMOOTH", 0, "Smooth", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_mask_tool = {
	{(PropertyRNA *)&rna_Brush_curve_preset, (PropertyRNA *)&rna_Brush_sculpt_plane,
	-1, "mask_tool", 3, 0, 0, 4, 0, "Mask Tool",
	"",
	0, "Mask",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_tool), (RawPropertyType)2, nullptr},
	Brush_mask_tool_get, Brush_mask_tool_set, nullptr, nullptr, nullptr, rna_Brush_mask_tool_items, 2, 0
};

static const EnumPropertyItem rna_Brush_curve_preset_items[11] = {
	{0, "CUSTOM", 564, "Custom", ""},
	{1, "SMOOTH", 558, "Smooth", ""},
	{9, "SMOOTHER", 558, "Smoother", ""},
	{2, "SPHERE", 559, "Sphere", ""},
	{3, "ROOT", 557, "Root", ""},
	{4, "SHARP", 561, "Sharp", ""},
	{5, "LIN", 562, "Linear", ""},
	{6, "POW4", 561, "Sharper", ""},
	{7, "INVSQUARE", 560, "Inverse Square", ""},
	{8, "CONSTANT", 563, "Constant", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_curve_preset = {
	{(PropertyRNA *)&rna_Brush_deform_target, (PropertyRNA *)&rna_Brush_mask_tool,
	-1, "curve_preset", 3, 0, 0, 4, 0, "Curve Preset",
	"",
	0, "Curves",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, curve_preset), (RawPropertyType)0, nullptr},
	Brush_curve_preset_get, Brush_curve_preset_set, nullptr, nullptr, nullptr, rna_Brush_curve_preset_items, 10, 0
};

static const EnumPropertyItem rna_Brush_deform_target_items[3] = {
	{0, "GEOMETRY", 0, "Geometry", "Brush deformation displaces the vertices of the mesh"},
	{1, "CLOTH_SIM", 0, "Cloth Simulation", "Brush deforms the mesh by deforming the constraints of a cloth simulation"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_deform_target = {
	{(PropertyRNA *)&rna_Brush_elastic_deform_type, (PropertyRNA *)&rna_Brush_curve_preset,
	-1, "deform_target", 3, 0, 0, 4, 0, "Deformation Target",
	"How the deformation of the brush will affect the object",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, deform_target), (RawPropertyType)0, nullptr},
	Brush_deform_target_get, Brush_deform_target_set, nullptr, nullptr, nullptr, rna_Brush_deform_target_items, 2, 0
};

static const EnumPropertyItem rna_Brush_elastic_deform_type_items[6] = {
	{0, "GRAB", 0, "Grab", ""},
	{1, "GRAB_BISCALE", 0, "Bi-Scale Grab", ""},
	{2, "GRAB_TRISCALE", 0, "Tri-Scale Grab", ""},
	{3, "SCALE", 0, "Scale", ""},
	{4, "TWIST", 0, "Twist", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_elastic_deform_type = {
	{(PropertyRNA *)&rna_Brush_snake_hook_deform_type, (PropertyRNA *)&rna_Brush_deform_target,
	-1, "elastic_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "Brush",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, elastic_deform_type), (RawPropertyType)0, nullptr},
	Brush_elastic_deform_type_get, Brush_elastic_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_elastic_deform_type_items, 5, 0
};

static const EnumPropertyItem rna_Brush_snake_hook_deform_type_items[3] = {
	{0, "FALLOFF", 0, "Radius Falloff", "Applies the brush falloff in the tip of the brush"},
	{1, "ELASTIC", 0, "Elastic", "Modifies the entire mesh using elastic deform"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_snake_hook_deform_type = {
	{(PropertyRNA *)&rna_Brush_cloth_deform_type, (PropertyRNA *)&rna_Brush_elastic_deform_type,
	-1, "snake_hook_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, snake_hook_deform_type), (RawPropertyType)0, nullptr},
	Brush_snake_hook_deform_type_get, Brush_snake_hook_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_snake_hook_deform_type_items, 2, 0
};

static const EnumPropertyItem rna_Brush_cloth_deform_type_items[9] = {
	{0, "DRAG", 0, "Drag", ""},
	{1, "PUSH", 0, "Push", ""},
	{3, "PINCH_POINT", 0, "Pinch Point", ""},
	{4, "PINCH_PERPENDICULAR", 0, "Pinch Perpendicular", ""},
	{5, "INFLATE", 0, "Inflate", ""},
	{2, "GRAB", 0, "Grab", ""},
	{6, "EXPAND", 0, "Expand", ""},
	{7, "SNAKE_HOOK", 0, "Snake Hook", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_cloth_deform_type = {
	{(PropertyRNA *)&rna_Brush_cloth_force_falloff_type, (PropertyRNA *)&rna_Brush_snake_hook_deform_type,
	-1, "cloth_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_deform_type), (RawPropertyType)0, nullptr},
	Brush_cloth_deform_type_get, Brush_cloth_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_cloth_deform_type_items, 8, 0
};

static const EnumPropertyItem rna_Brush_cloth_force_falloff_type_items[3] = {
	{0, "RADIAL", 0, "Radial", ""},
	{1, "PLANE", 0, "Plane", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_cloth_force_falloff_type = {
	{(PropertyRNA *)&rna_Brush_cloth_simulation_area_type, (PropertyRNA *)&rna_Brush_cloth_deform_type,
	-1, "cloth_force_falloff_type", 3, 0, 0, 4, 0, "Force Falloff",
	"Shape used in the brush to apply force to the cloth",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_force_falloff_type), (RawPropertyType)0, nullptr},
	Brush_cloth_force_falloff_type_get, Brush_cloth_force_falloff_type_set, nullptr, nullptr, nullptr, rna_Brush_cloth_force_falloff_type_items, 2, 0
};

static const EnumPropertyItem rna_Brush_cloth_simulation_area_type_items[4] = {
	{0, "LOCAL", 0, "Local", "Simulates only a specific area around the brush limited by a fixed radius"},
	{1, "GLOBAL", 0, "Global", "Simulates the entire mesh"},
	{2, "DYNAMIC", 0, "Dynamic", "The active simulation area moves with the brush"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_cloth_simulation_area_type = {
	{(PropertyRNA *)&rna_Brush_boundary_falloff_type, (PropertyRNA *)&rna_Brush_cloth_force_falloff_type,
	-1, "cloth_simulation_area_type", 3, 0, 0, 4, 0, "Simulation Area",
	"Part of the mesh that is going to be simulated when the stroke is active",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_simulation_area_type), (RawPropertyType)0, nullptr},
	Brush_cloth_simulation_area_type_get, Brush_cloth_simulation_area_type_set, nullptr, nullptr, nullptr, rna_Brush_cloth_simulation_area_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_boundary_falloff_type_items[5] = {
	{0, "CONSTANT", 0, "Constant", "Applies the same deformation in the entire boundary"},
	{1, "RADIUS", 0, "Brush Radius", "Applies the deformation in a localized area limited by the brush radius"},
	{2, "LOOP", 0, "Loop", "Applies the brush falloff in a loop pattern"},
	{3, "LOOP_INVERT", 0, "Loop and Invert", "Applies the falloff radius in a loop pattern, inverting the displacement direction in each pattern repetition"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_boundary_falloff_type = {
	{(PropertyRNA *)&rna_Brush_smooth_deform_type, (PropertyRNA *)&rna_Brush_cloth_simulation_area_type,
	-1, "boundary_falloff_type", 3, 0, 0, 4, 0, "Boundary Falloff",
	"How the brush falloff is applied across the boundary",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, boundary_falloff_type), (RawPropertyType)0, nullptr},
	Brush_boundary_falloff_type_get, Brush_boundary_falloff_type_set, nullptr, nullptr, nullptr, rna_Brush_boundary_falloff_type_items, 4, 0
};

static const EnumPropertyItem rna_Brush_smooth_deform_type_items[3] = {
	{0, "LAPLACIAN", 0, "Laplacian", "Smooths the surface and the volume"},
	{1, "SURFACE", 0, "Surface", "Smooths the surface of the mesh, preserving the volume"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_smooth_deform_type = {
	{(PropertyRNA *)&rna_Brush_smear_deform_type, (PropertyRNA *)&rna_Brush_boundary_falloff_type,
	-1, "smooth_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smooth_deform_type), (RawPropertyType)0, nullptr},
	Brush_smooth_deform_type_get, Brush_smooth_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_smooth_deform_type_items, 2, 0
};

static const EnumPropertyItem rna_Brush_smear_deform_type_items[4] = {
	{0, "DRAG", 0, "Drag", ""},
	{1, "PINCH", 0, "Pinch", ""},
	{2, "EXPAND", 0, "Expand", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_smear_deform_type = {
	{(PropertyRNA *)&rna_Brush_slide_deform_type, (PropertyRNA *)&rna_Brush_smooth_deform_type,
	-1, "smear_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smear_deform_type), (RawPropertyType)0, nullptr},
	Brush_smear_deform_type_get, Brush_smear_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_smear_deform_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_slide_deform_type_items[4] = {
	{0, "DRAG", 0, "Drag", ""},
	{1, "PINCH", 0, "Pinch", ""},
	{2, "EXPAND", 0, "Expand", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_slide_deform_type = {
	{(PropertyRNA *)&rna_Brush_boundary_deform_type, (PropertyRNA *)&rna_Brush_smear_deform_type,
	-1, "slide_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, slide_deform_type), (RawPropertyType)0, nullptr},
	Brush_slide_deform_type_get, Brush_slide_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_slide_deform_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_boundary_deform_type_items[7] = {
	{0, "BEND", 0, "Bend", ""},
	{1, "EXPAND", 0, "Expand", ""},
	{2, "INFLATE", 0, "Inflate", ""},
	{3, "GRAB", 0, "Grab", ""},
	{4, "TWIST", 0, "Twist", ""},
	{5, "SMOOTH", 0, "Smooth", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_boundary_deform_type = {
	{(PropertyRNA *)&rna_Brush_pose_deform_type, (PropertyRNA *)&rna_Brush_slide_deform_type,
	-1, "boundary_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "Brush",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, boundary_deform_type), (RawPropertyType)0, nullptr},
	Brush_boundary_deform_type_get, Brush_boundary_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_boundary_deform_type_items, 6, 0
};

static const EnumPropertyItem rna_Brush_pose_deform_type_items[4] = {
	{0, "ROTATE_TWIST", 0, "Rotate/Twist", ""},
	{1, "SCALE_TRANSLATE", 0, "Scale/Translate", ""},
	{2, "SQUASH_STRETCH", 0, "Squash & Stretch", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_pose_deform_type = {
	{(PropertyRNA *)&rna_Brush_pose_origin_type, (PropertyRNA *)&rna_Brush_boundary_deform_type,
	-1, "pose_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_deform_type), (RawPropertyType)0, nullptr},
	Brush_pose_deform_type_get, Brush_pose_deform_type_set, nullptr, nullptr, nullptr, rna_Brush_pose_deform_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_pose_origin_type_items[4] = {
	{0, "TOPOLOGY", 0, "Topology", "Sets the rotation origin automatically using the topology and shape of the mesh as a guide"},
	{1, "FACE_SETS", 0, "Face Sets", "Creates a pose segment per face sets, starting from the active face set"},
	{2, "FACE_SETS_FK", 0, "Face Sets FK", "Simulates an FK deformation using the Face Set under the cursor as control"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_pose_origin_type = {
	{(PropertyRNA *)&rna_Brush_jitter_unit, (PropertyRNA *)&rna_Brush_pose_deform_type,
	-1, "pose_origin_type", 3, 0, 0, 4, 0, "Rotation Origins",
	"Method to set the rotation origins for the segments of the brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_origin_type), (RawPropertyType)0, nullptr},
	Brush_pose_origin_type_get, Brush_pose_origin_type_set, nullptr, nullptr, nullptr, rna_Brush_pose_origin_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_jitter_unit_items[3] = {
	{1073741824, "VIEW", 0, "View", "Jittering happens in screen space, in pixels"},
	{0, "BRUSH", 0, "Brush", "Jittering happens relative to the brush size"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_jitter_unit = {
	{(PropertyRNA *)&rna_Brush_falloff_shape, (PropertyRNA *)&rna_Brush_pose_origin_type,
	-1, "jitter_unit", 3, 0, 0, 4, 0, "Jitter Unit",
	"Jitter in screen space or relative to brush size",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), (RawPropertyType)0, nullptr},
	Brush_jitter_unit_get, Brush_jitter_unit_set, nullptr, nullptr, nullptr, rna_Brush_jitter_unit_items, 2, 0
};

static const EnumPropertyItem rna_Brush_falloff_shape_items[3] = {
	{0, "SPHERE", 0, "Sphere", "Apply brush influence in a Sphere, outwards from the center"},
	{1, "PROJECTED", 0, "Projected", "Apply brush influence in a 2D circle, projected from the view"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_falloff_shape = {
	{(PropertyRNA *)&rna_Brush_size, (PropertyRNA *)&rna_Brush_jitter_unit,
	-1, "falloff_shape", 3, 0, 0, 4, 0, "Falloff Shape",
	"Use projected or spherical falloff",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, falloff_shape), (RawPropertyType)2, nullptr},
	Brush_falloff_shape_get, Brush_falloff_shape_set, nullptr, nullptr, nullptr, rna_Brush_falloff_shape_items, 2, 0
};

IntPropertyRNA rna_Brush_size = {
	{(PropertyRNA *)&rna_Brush_unprojected_radius, (PropertyRNA *)&rna_Brush_falloff_shape,
	-1, "size", 3, 0, 0, 0, 0, "Radius",
	"Radius of the brush in pixels",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_size_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_size_get, Brush_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 500, 1, 5000, 1, 35, nullptr
};

FloatPropertyRNA rna_Brush_unprojected_radius = {
	{(PropertyRNA *)&rna_Brush_jitter, (PropertyRNA *)&rna_Brush_size,
	-1, "unprojected_radius", 3, 0, 0, 0, 0, "Unprojected Radius",
	"Radius of brush in Blender units",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_size_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_unprojected_radius_get, Brush_unprojected_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 1.0f, -1, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_jitter = {
	{(PropertyRNA *)&rna_Brush_jitter_absolute, (PropertyRNA *)&rna_Brush_unprojected_radius,
	-1, "jitter", 3, 0, 0, 4, 0, "Jitter",
	"Jitter the position of the brush while painting",
	0, "Brush",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, jitter), (RawPropertyType)5, nullptr},
	Brush_jitter_get, Brush_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 1000.0f, 0.1000000015f, 4, 0.0f, nullptr
};

IntPropertyRNA rna_Brush_jitter_absolute = {
	{(PropertyRNA *)&rna_Brush_spacing, (PropertyRNA *)&rna_Brush_jitter,
	-1, "jitter_absolute", 3, 0, 0, 4, 0, "Jitter",
	"Jitter the position of the brush in pixels while painting",
	0, "Brush",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, jitter_absolute), (RawPropertyType)0, nullptr},
	Brush_jitter_absolute_get, Brush_jitter_absolute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1000000, 0, 1000000, 1, 0, nullptr
};

IntPropertyRNA rna_Brush_spacing = {
	{(PropertyRNA *)&rna_Brush_grad_spacing, (PropertyRNA *)&rna_Brush_jitter_absolute,
	-1, "spacing", 3, 0, 0, 4, 0, "Spacing",
	"Spacing between brush daubs as a percentage of brush diameter",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, spacing), (RawPropertyType)0, nullptr},
	Brush_spacing_get, Brush_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 500, 1, 1000, 5, 10, nullptr
};

IntPropertyRNA rna_Brush_grad_spacing = {
	{(PropertyRNA *)&rna_Brush_smooth_stroke_radius, (PropertyRNA *)&rna_Brush_spacing,
	-1, "grad_spacing", 3, 0, 0, 4, 0, "Gradient Spacing",
	"Spacing before brush gradient goes full circle",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gradient_spacing), (RawPropertyType)0, nullptr},
	Brush_grad_spacing_get, Brush_grad_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, 0, nullptr
};

IntPropertyRNA rna_Brush_smooth_stroke_radius = {
	{(PropertyRNA *)&rna_Brush_smooth_stroke_factor, (PropertyRNA *)&rna_Brush_grad_spacing,
	-1, "smooth_stroke_radius", 3, 0, 0, 4, 0, "Smooth Stroke Radius",
	"Minimum distance from last point before stroke continues",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smooth_stroke_radius), (RawPropertyType)0, nullptr},
	Brush_smooth_stroke_radius_get, Brush_smooth_stroke_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 10, 200, 10, 200, 1, 75, nullptr
};

FloatPropertyRNA rna_Brush_smooth_stroke_factor = {
	{(PropertyRNA *)&rna_Brush_rate, (PropertyRNA *)&rna_Brush_smooth_stroke_radius,
	-1, "smooth_stroke_factor", 3, 0, 0, 4, 0, "Smooth Stroke Factor",
	"Higher values give a smoother stroke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smooth_stroke_factor), (RawPropertyType)5, nullptr},
	Brush_smooth_stroke_factor_get, Brush_smooth_stroke_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 0.9900000095f, 0.5000000000f, 0.9900000095f, 10.0f, 3, 0.8999999762f, nullptr
};

FloatPropertyRNA rna_Brush_rate = {
	{(PropertyRNA *)&rna_Brush_color, (PropertyRNA *)&rna_Brush_smooth_stroke_factor,
	-1, "rate", 3, 0, 0, 4, 0, "Rate",
	"Interval between paints for Airbrush",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, rate), (RawPropertyType)5, nullptr},
	Brush_rate_get, Brush_rate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 0.1000000015f, nullptr
};

static float rna_Brush_color_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Brush_color = {
	{(PropertyRNA *)&rna_Brush_secondary_color, (PropertyRNA *)&rna_Brush_rate,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, rgb), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_color_get, Brush_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_color_default
};

static float rna_Brush_secondary_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_secondary_color = {
	{(PropertyRNA *)&rna_Brush_weight, (PropertyRNA *)&rna_Brush_color,
	-1, "secondary_color", 3, 0, 0, 4, 0, "Secondary Color",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, secondary_rgb), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_secondary_color_get, Brush_secondary_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_secondary_color_default
};

FloatPropertyRNA rna_Brush_weight = {
	{(PropertyRNA *)&rna_Brush_strength, (PropertyRNA *)&rna_Brush_secondary_color,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Vertex weight when brush is applied",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, weight), (RawPropertyType)5, nullptr},
	Brush_weight_get, Brush_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Brush_strength = {
	{(PropertyRNA *)&rna_Brush_flow, (PropertyRNA *)&rna_Brush_weight,
	-1, "strength", 3, 0, 0, 4, 0, "Strength",
	"How powerful the effect of the brush is when applied",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, alpha), (RawPropertyType)5, nullptr},
	Brush_strength_get, Brush_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Brush_flow = {
	{(PropertyRNA *)&rna_Brush_wet_mix, (PropertyRNA *)&rna_Brush_strength,
	-1, "flow", 3, 0, 0, 4, 0, "Flow",
	"Amount of paint that is applied per stroke sample",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flow), (RawPropertyType)5, nullptr},
	Brush_flow_get, Brush_flow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_wet_mix = {
	{(PropertyRNA *)&rna_Brush_wet_persistence, (PropertyRNA *)&rna_Brush_flow,
	-1, "wet_mix", 3, 0, 0, 4, 0, "Wet Mix",
	"Amount of paint that is picked from the surface into the brush color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, wet_mix), (RawPropertyType)5, nullptr},
	Brush_wet_mix_get, Brush_wet_mix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_wet_persistence = {
	{(PropertyRNA *)&rna_Brush_density, (PropertyRNA *)&rna_Brush_wet_mix,
	-1, "wet_persistence", 3, 0, 0, 4, 0, "Wet Persistence",
	"Amount of wet paint that stays in the brush after applying paint to the surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, wet_persistence), (RawPropertyType)5, nullptr},
	Brush_wet_persistence_get, Brush_wet_persistence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_density = {
	{(PropertyRNA *)&rna_Brush_tip_scale_x, (PropertyRNA *)&rna_Brush_wet_persistence,
	-1, "density", 3, 0, 0, 4, 0, "Density",
	"Amount of random elements that are going to be affected by the brush",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, density), (RawPropertyType)5, nullptr},
	Brush_density_get, Brush_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_tip_scale_x = {
	{(PropertyRNA *)&rna_Brush_use_hardness_pressure, (PropertyRNA *)&rna_Brush_density,
	-1, "tip_scale_x", 3, 0, 0, 4, 0, "Tip Scale X",
	"Scale of the brush tip in the X axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, tip_scale_x), (RawPropertyType)5, nullptr},
	Brush_tip_scale_x_get, Brush_tip_scale_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_Brush_use_hardness_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_hardness_pressure, (PropertyRNA *)&rna_Brush_tip_scale_x,
	-1, "use_hardness_pressure", 1, 0, 0, 0, 0, "Use Pressure for Hardness",
	"Use pressure to modulate hardness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_hardness_pressure_get, Brush_use_hardness_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_invert_hardness_pressure = {
	{(PropertyRNA *)&rna_Brush_use_flow_pressure, (PropertyRNA *)&rna_Brush_use_hardness_pressure,
	-1, "invert_hardness_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Hardness",
	"Invert the modulation of pressure in hardness",
	8, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_invert_hardness_pressure_get, Brush_invert_hardness_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_flow_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_flow_pressure, (PropertyRNA *)&rna_Brush_invert_hardness_pressure,
	-1, "use_flow_pressure", 1, 0, 0, 0, 0, "Use Pressure for Flow",
	"Use pressure to modulate flow",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_flow_pressure_get, Brush_use_flow_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_invert_flow_pressure = {
	{(PropertyRNA *)&rna_Brush_use_wet_mix_pressure, (PropertyRNA *)&rna_Brush_use_flow_pressure,
	-1, "invert_flow_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Flow",
	"Invert the modulation of pressure in flow",
	8, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_invert_flow_pressure_get, Brush_invert_flow_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_wet_mix_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_wet_mix_pressure, (PropertyRNA *)&rna_Brush_invert_flow_pressure,
	-1, "use_wet_mix_pressure", 1, 0, 0, 0, 0, "Use Pressure for Wet Mix",
	"Use pressure to modulate wet mix",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_wet_mix_pressure_get, Brush_use_wet_mix_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_invert_wet_mix_pressure = {
	{(PropertyRNA *)&rna_Brush_use_wet_persistence_pressure, (PropertyRNA *)&rna_Brush_use_wet_mix_pressure,
	-1, "invert_wet_mix_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Wet Mix",
	"Invert the modulation of pressure in wet mix",
	8, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_invert_wet_mix_pressure_get, Brush_invert_wet_mix_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_wet_persistence_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_wet_persistence_pressure, (PropertyRNA *)&rna_Brush_invert_wet_mix_pressure,
	-1, "use_wet_persistence_pressure", 1, 0, 0, 0, 0, "Use Pressure for Wet Persistence",
	"Use pressure to modulate wet persistence",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_wet_persistence_pressure_get, Brush_use_wet_persistence_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_invert_wet_persistence_pressure = {
	{(PropertyRNA *)&rna_Brush_use_density_pressure, (PropertyRNA *)&rna_Brush_use_wet_persistence_pressure,
	-1, "invert_wet_persistence_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Wet Persistence",
	"Invert the modulation of pressure in wet persistence",
	8, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_invert_wet_persistence_pressure_get, Brush_invert_wet_persistence_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_density_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_density_pressure, (PropertyRNA *)&rna_Brush_invert_wet_persistence_pressure,
	-1, "use_density_pressure", 1, 0, 0, 0, 0, "Use Pressure for Density",
	"Use pressure to modulate density",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_density_pressure_get, Brush_use_density_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_invert_density_pressure = {
	{(PropertyRNA *)&rna_Brush_dash_ratio, (PropertyRNA *)&rna_Brush_use_density_pressure,
	-1, "invert_density_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Density",
	"Invert the modulation of pressure in density",
	8, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_invert_density_pressure_get, Brush_invert_density_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Brush_dash_ratio = {
	{(PropertyRNA *)&rna_Brush_dash_samples, (PropertyRNA *)&rna_Brush_invert_density_pressure,
	-1, "dash_ratio", 3, 0, 0, 4, 0, "Dash Ratio",
	"Ratio of samples in a cycle that the brush is enabled",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, dash_ratio), (RawPropertyType)5, nullptr},
	Brush_dash_ratio_get, Brush_dash_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_Brush_dash_samples = {
	{(PropertyRNA *)&rna_Brush_plane_offset, (PropertyRNA *)&rna_Brush_dash_ratio,
	-1, "dash_samples", 3, 0, 0, 4, 0, "Dash Length",
	"Length of a dash cycle measured in stroke samples",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, dash_samples), (RawPropertyType)0, nullptr},
	Brush_dash_samples_get, Brush_dash_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, 20, nullptr
};

FloatPropertyRNA rna_Brush_plane_offset = {
	{(PropertyRNA *)&rna_Brush_plane_trim, (PropertyRNA *)&rna_Brush_dash_samples,
	-1, "plane_offset", 3, 0, 0, 4, 0, "Plane Offset",
	"Adjust plane on which the brush acts towards or away from the object surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, plane_offset), (RawPropertyType)5, nullptr},
	Brush_plane_offset_get, Brush_plane_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.5000000000f, 0.5000000000f, -2.0f, 2.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_plane_trim = {
	{(PropertyRNA *)&rna_Brush_height, (PropertyRNA *)&rna_Brush_plane_offset,
	-1, "plane_trim", 3, 0, 0, 4, 0, "Plane Trim",
	"If a vertex is further away from offset plane than this, then it is not affected",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, plane_trim), (RawPropertyType)5, nullptr},
	Brush_plane_trim_get, Brush_plane_trim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Brush_height = {
	{(PropertyRNA *)&rna_Brush_texture_sample_bias, (PropertyRNA *)&rna_Brush_plane_trim,
	-1, "height", 3, 0, 0, 4, 0, "Brush Height",
	"Affectable height of brush (layer height for layer tool, i.e.)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, height), (RawPropertyType)5, nullptr},
	Brush_height_get, Brush_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.2000000030f, 0.0f, 1.0f, 1.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Brush_texture_sample_bias = {
	{(PropertyRNA *)&rna_Brush_use_color_as_displacement, (PropertyRNA *)&rna_Brush_height,
	-1, "texture_sample_bias", 3, 0, 0, 4, 0, "Texture Sample Bias",
	"Value added to texture samples",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, texture_sample_bias), (RawPropertyType)5, nullptr},
	Brush_texture_sample_bias_get, Brush_texture_sample_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_Brush_use_color_as_displacement = {
	{(PropertyRNA *)&rna_Brush_normal_weight, (PropertyRNA *)&rna_Brush_texture_sample_bias,
	-1, "use_color_as_displacement", 3, 0, 0, 0, 0, "Vector Displacement",
	"Handles each pixel color as individual vector for displacement. Works only with area plane mapping",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_color_as_displacement_get, Brush_use_color_as_displacement_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Brush_normal_weight = {
	{(PropertyRNA *)&rna_Brush_elastic_deform_volume_preservation, (PropertyRNA *)&rna_Brush_use_color_as_displacement,
	-1, "normal_weight", 3, 0, 0, 4, 0, "Normal Weight",
	"How much grab will pull vertices out of surface during a grab",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, normal_weight), (RawPropertyType)5, nullptr},
	Brush_normal_weight_get, Brush_normal_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_elastic_deform_volume_preservation = {
	{(PropertyRNA *)&rna_Brush_rake_factor, (PropertyRNA *)&rna_Brush_normal_weight,
	-1, "elastic_deform_volume_preservation", 3, 0, 0, 4, 0, "Volume Preservation",
	"Poisson ratio for elastic deformation. Higher values preserve volume more, but also lead to more bulging",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, elastic_deform_volume_preservation), (RawPropertyType)5, nullptr},
	Brush_elastic_deform_volume_preservation_get, Brush_elastic_deform_volume_preservation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.8999999762f, 0.0f, 0.8999999762f, 0.0099999998f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_rake_factor = {
	{(PropertyRNA *)&rna_Brush_crease_pinch_factor, (PropertyRNA *)&rna_Brush_elastic_deform_volume_preservation,
	-1, "rake_factor", 3, 0, 0, 4, 0, "Rake",
	"How much grab will follow cursor rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, rake_factor), (RawPropertyType)5, nullptr},
	Brush_rake_factor_get, Brush_rake_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_crease_pinch_factor = {
	{(PropertyRNA *)&rna_Brush_pose_offset, (PropertyRNA *)&rna_Brush_rake_factor,
	-1, "crease_pinch_factor", 3, 0, 0, 4, 0, "Crease Brush Pinch Factor",
	"How much the crease brush pinches",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, crease_pinch_factor), (RawPropertyType)5, nullptr},
	Brush_crease_pinch_factor_get, Brush_crease_pinch_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Brush_pose_offset = {
	{(PropertyRNA *)&rna_Brush_disconnected_distance_max, (PropertyRNA *)&rna_Brush_crease_pinch_factor,
	-1, "pose_offset", 3, 0, 0, 4, 0, "Pose Origin Offset",
	"Offset of the pose origin in relation to the brush radius",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_offset), (RawPropertyType)5, nullptr},
	Brush_pose_offset_get, Brush_pose_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_disconnected_distance_max = {
	{(PropertyRNA *)&rna_Brush_boundary_offset, (PropertyRNA *)&rna_Brush_pose_offset,
	-1, "disconnected_distance_max", 3, 0, 0, 4, 0, "Max Element Distance",
	"Maximum distance to search for disconnected loose parts in the mesh",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, disconnected_distance_max), (RawPropertyType)5, nullptr},
	Brush_disconnected_distance_max_get, Brush_disconnected_distance_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_Brush_boundary_offset = {
	{(PropertyRNA *)&rna_Brush_surface_smooth_shape_preservation, (PropertyRNA *)&rna_Brush_disconnected_distance_max,
	-1, "boundary_offset", 3, 0, 0, 4, 0, "Boundary Origin Offset",
	"Offset of the boundary origin in relation to the brush radius",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, boundary_offset), (RawPropertyType)5, nullptr},
	Brush_boundary_offset_get, Brush_boundary_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 30.0f, 0.0f, 30.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_surface_smooth_shape_preservation = {
	{(PropertyRNA *)&rna_Brush_surface_smooth_current_vertex, (PropertyRNA *)&rna_Brush_boundary_offset,
	-1, "surface_smooth_shape_preservation", 3, 0, 0, 4, 0, "Shape Preservation",
	"How much of the original shape is preserved when smoothing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, surface_smooth_shape_preservation), (RawPropertyType)5, nullptr},
	Brush_surface_smooth_shape_preservation_get, Brush_surface_smooth_shape_preservation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_surface_smooth_current_vertex = {
	{(PropertyRNA *)&rna_Brush_surface_smooth_iterations, (PropertyRNA *)&rna_Brush_surface_smooth_shape_preservation,
	-1, "surface_smooth_current_vertex", 3, 0, 0, 4, 0, "Per Vertex Displacement",
	"How much the position of each individual vertex influences the final result",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, surface_smooth_current_vertex), (RawPropertyType)5, nullptr},
	Brush_surface_smooth_current_vertex_get, Brush_surface_smooth_current_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Brush_surface_smooth_iterations = {
	{(PropertyRNA *)&rna_Brush_multiplane_scrape_angle, (PropertyRNA *)&rna_Brush_surface_smooth_current_vertex,
	-1, "surface_smooth_iterations", 3, 0, 0, 4, 0, "Iterations",
	"Number of smoothing iterations per brush step",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, surface_smooth_iterations), (RawPropertyType)0, nullptr},
	Brush_surface_smooth_iterations_get, Brush_surface_smooth_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 10, 1, 0, nullptr
};

FloatPropertyRNA rna_Brush_multiplane_scrape_angle = {
	{(PropertyRNA *)&rna_Brush_pose_smooth_iterations, (PropertyRNA *)&rna_Brush_surface_smooth_iterations,
	-1, "multiplane_scrape_angle", 3, 0, 0, 4, 0, "Plane Angle",
	"Angle between the planes of the crease",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, multiplane_scrape_angle), (RawPropertyType)5, nullptr},
	Brush_multiplane_scrape_angle_get, Brush_multiplane_scrape_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 160.0f, 0.0f, 160.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Brush_pose_smooth_iterations = {
	{(PropertyRNA *)&rna_Brush_pose_ik_segments, (PropertyRNA *)&rna_Brush_multiplane_scrape_angle,
	-1, "pose_smooth_iterations", 3, 0, 0, 4, 0, "Smooth Iterations",
	"Smooth iterations applied after calculating the pose factor of each vertex",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_smooth_iterations), (RawPropertyType)0, nullptr},
	Brush_pose_smooth_iterations_get, Brush_pose_smooth_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 4, nullptr
};

IntPropertyRNA rna_Brush_pose_ik_segments = {
	{(PropertyRNA *)&rna_Brush_tip_roundness, (PropertyRNA *)&rna_Brush_pose_smooth_iterations,
	-1, "pose_ik_segments", 3, 0, 0, 4, 0, "Pose IK Segments",
	"Number of segments of the inverse kinematics chain that will deform the mesh",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_ik_segments), (RawPropertyType)0, nullptr},
	Brush_pose_ik_segments_get, Brush_pose_ik_segments_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, 1, nullptr
};

FloatPropertyRNA rna_Brush_tip_roundness = {
	{(PropertyRNA *)&rna_Brush_cloth_mass, (PropertyRNA *)&rna_Brush_pose_ik_segments,
	-1, "tip_roundness", 3, 0, 0, 4, 0, "Tip Roundness",
	"Roundness of the brush tip",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, tip_roundness), (RawPropertyType)5, nullptr},
	Brush_tip_roundness_get, Brush_tip_roundness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Brush_cloth_mass = {
	{(PropertyRNA *)&rna_Brush_cloth_damping, (PropertyRNA *)&rna_Brush_tip_roundness,
	-1, "cloth_mass", 3, 0, 0, 4, 0, "Cloth Mass",
	"Mass of each simulation particle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_mass), (RawPropertyType)5, nullptr},
	Brush_cloth_mass_get, Brush_cloth_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, 2.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Brush_cloth_damping = {
	{(PropertyRNA *)&rna_Brush_cloth_sim_limit, (PropertyRNA *)&rna_Brush_cloth_mass,
	-1, "cloth_damping", 3, 0, 0, 4, 0, "Cloth Damping",
	"How much the applied forces are propagated through the cloth",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_damping), (RawPropertyType)5, nullptr},
	Brush_cloth_damping_get, Brush_cloth_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 0.0099999998f, nullptr
};

FloatPropertyRNA rna_Brush_cloth_sim_limit = {
	{(PropertyRNA *)&rna_Brush_cloth_sim_falloff, (PropertyRNA *)&rna_Brush_cloth_damping,
	-1, "cloth_sim_limit", 3, 0, 0, 4, 0, "Simulation Limit",
	"Factor added relative to the size of the radius to limit the cloth simulation effects",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_sim_limit), (RawPropertyType)5, nullptr},
	Brush_cloth_sim_limit_get, Brush_cloth_sim_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 2.5000000000f, nullptr
};

FloatPropertyRNA rna_Brush_cloth_sim_falloff = {
	{(PropertyRNA *)&rna_Brush_cloth_constraint_softbody_strength, (PropertyRNA *)&rna_Brush_cloth_sim_limit,
	-1, "cloth_sim_falloff", 3, 0, 0, 4, 0, "Simulation Falloff",
	"Area to apply deformation falloff to the effects of the simulation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_sim_falloff), (RawPropertyType)5, nullptr},
	Brush_cloth_sim_falloff_get, Brush_cloth_sim_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.7500000000f, nullptr
};

FloatPropertyRNA rna_Brush_cloth_constraint_softbody_strength = {
	{(PropertyRNA *)&rna_Brush_hardness, (PropertyRNA *)&rna_Brush_cloth_sim_falloff,
	-1, "cloth_constraint_softbody_strength", 3, 0, 0, 4, 0, "Soft Body Plasticity",
	"How much the cloth preserves the original shape, acting as a soft body",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_constraint_softbody_strength), (RawPropertyType)5, nullptr},
	Brush_cloth_constraint_softbody_strength_get, Brush_cloth_constraint_softbody_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_hardness = {
	{(PropertyRNA *)&rna_Brush_automasking_boundary_edges_propagation_steps, (PropertyRNA *)&rna_Brush_cloth_constraint_softbody_strength,
	-1, "hardness", 3, 0, 0, 4, 0, "Hardness",
	"How close the brush falloff starts from the edge of the brush",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, hardness), (RawPropertyType)5, nullptr},
	Brush_hardness_get, Brush_hardness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Brush_automasking_boundary_edges_propagation_steps = {
	{(PropertyRNA *)&rna_Brush_auto_smooth_factor, (PropertyRNA *)&rna_Brush_hardness,
	-1, "automasking_boundary_edges_propagation_steps", 3, 0, 0, 4, 0, "Propagation Steps",
	"Distance where boundary edge automasking is going to protect vertices from the fully masked edge",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, automasking_boundary_edges_propagation_steps), (RawPropertyType)0, nullptr},
	Brush_automasking_boundary_edges_propagation_steps_get, Brush_automasking_boundary_edges_propagation_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, 1, nullptr
};

FloatPropertyRNA rna_Brush_auto_smooth_factor = {
	{(PropertyRNA *)&rna_Brush_topology_rake_factor, (PropertyRNA *)&rna_Brush_automasking_boundary_edges_propagation_steps,
	-1, "auto_smooth_factor", 3, 0, 0, 4, 0, "Auto-Smooth",
	"Amount of smoothing to automatically apply to each stroke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, autosmooth_factor), (RawPropertyType)5, nullptr},
	Brush_auto_smooth_factor_get, Brush_auto_smooth_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_topology_rake_factor = {
	{(PropertyRNA *)&rna_Brush_tilt_strength_factor, (PropertyRNA *)&rna_Brush_auto_smooth_factor,
	-1, "topology_rake_factor", 3, 0, 0, 4, 0, "Topology Rake",
	"Automatically align edges to the brush direction to generate cleaner topology and define sharp features. Best used on low-poly meshes as it has a performance impact",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, topology_rake_factor), (RawPropertyType)5, nullptr},
	Brush_topology_rake_factor_get, Brush_topology_rake_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_tilt_strength_factor = {
	{(PropertyRNA *)&rna_Brush_normal_radius_factor, (PropertyRNA *)&rna_Brush_topology_rake_factor,
	-1, "tilt_strength_factor", 3, 0, 0, 4, 0, "Tilt Strength",
	"How much the tilt of the pen will affect the brush",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, tilt_strength_factor), (RawPropertyType)5, nullptr},
	Brush_tilt_strength_factor_get, Brush_tilt_strength_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_normal_radius_factor = {
	{(PropertyRNA *)&rna_Brush_area_radius_factor, (PropertyRNA *)&rna_Brush_tilt_strength_factor,
	-1, "normal_radius_factor", 3, 0, 0, 4, 0, "Normal Radius",
	"Ratio between the brush radius and the radius that is going to be used to sample the normal",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, normal_radius_factor), (RawPropertyType)5, nullptr},
	Brush_normal_radius_factor_get, Brush_normal_radius_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Brush_area_radius_factor = {
	{(PropertyRNA *)&rna_Brush_wet_paint_radius_factor, (PropertyRNA *)&rna_Brush_normal_radius_factor,
	-1, "area_radius_factor", 3, 0, 0, 4, 0, "Area Radius",
	"Ratio between the brush radius and the radius that is going to be used to sample the area center",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, area_radius_factor), (RawPropertyType)5, nullptr},
	Brush_area_radius_factor_get, Brush_area_radius_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_Brush_wet_paint_radius_factor = {
	{(PropertyRNA *)&rna_Brush_stencil_pos, (PropertyRNA *)&rna_Brush_area_radius_factor,
	-1, "wet_paint_radius_factor", 3, 0, 0, 4, 0, "Wet Paint Radius",
	"Ratio between the brush radius and the radius that is going to be used to sample the color to blend in wet paint",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, wet_paint_radius_factor), (RawPropertyType)5, nullptr},
	Brush_wet_paint_radius_factor_get, Brush_wet_paint_radius_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, 0.5000000000f, nullptr
};

static float rna_Brush_stencil_pos_default[2] = {
	256.0f,
	256.0f
};

FloatPropertyRNA rna_Brush_stencil_pos = {
	{(PropertyRNA *)&rna_Brush_stencil_dimension, (PropertyRNA *)&rna_Brush_wet_paint_radius_factor,
	-1, "stencil_pos", 3, 0, 0, 4, 0, "Stencil Position",
	"Position of stencil in viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, stencil_pos), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_stencil_pos_get, Brush_stencil_pos_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_stencil_pos_default
};

static float rna_Brush_stencil_dimension_default[2] = {
	256.0f,
	256.0f
};

FloatPropertyRNA rna_Brush_stencil_dimension = {
	{(PropertyRNA *)&rna_Brush_mask_stencil_pos, (PropertyRNA *)&rna_Brush_stencil_pos,
	-1, "stencil_dimension", 3, 0, 0, 4, 0, "Stencil Dimensions",
	"Dimensions of stencil in viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, stencil_dimension), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_stencil_dimension_get, Brush_stencil_dimension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_stencil_dimension_default
};

static float rna_Brush_mask_stencil_pos_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_mask_stencil_pos = {
	{(PropertyRNA *)&rna_Brush_mask_stencil_dimension, (PropertyRNA *)&rna_Brush_stencil_dimension,
	-1, "mask_stencil_pos", 3, 0, 0, 4, 0, "Mask Stencil Position",
	"Position of mask stencil in viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_stencil_pos), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_mask_stencil_pos_get, Brush_mask_stencil_pos_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_mask_stencil_pos_default
};

static float rna_Brush_mask_stencil_dimension_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_mask_stencil_dimension = {
	{(PropertyRNA *)&rna_Brush_sharp_threshold, (PropertyRNA *)&rna_Brush_mask_stencil_pos,
	-1, "mask_stencil_dimension", 3, 0, 0, 4, 0, "Mask Stencil Dimensions",
	"Dimensions of mask stencil in viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_stencil_dimension), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_mask_stencil_dimension_get, Brush_mask_stencil_dimension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_mask_stencil_dimension_default
};

FloatPropertyRNA rna_Brush_sharp_threshold = {
	{(PropertyRNA *)&rna_Brush_fill_threshold, (PropertyRNA *)&rna_Brush_mask_stencil_dimension,
	-1, "sharp_threshold", 3, 0, 0, 4, 0, "Sharp Threshold",
	"Threshold below which, no sharpening is done",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sharp_threshold), (RawPropertyType)5, nullptr},
	Brush_sharp_threshold_get, Brush_sharp_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Brush_fill_threshold = {
	{(PropertyRNA *)&rna_Brush_blur_kernel_radius, (PropertyRNA *)&rna_Brush_sharp_threshold,
	-1, "fill_threshold", 3, 0, 0, 4, 0, "Fill Threshold",
	"Threshold above which filling is not propagated",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, fill_threshold), (RawPropertyType)5, nullptr},
	Brush_fill_threshold_get, Brush_fill_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, 0.2000000030f, nullptr
};

IntPropertyRNA rna_Brush_blur_kernel_radius = {
	{(PropertyRNA *)&rna_Brush_blur_mode, (PropertyRNA *)&rna_Brush_fill_threshold,
	-1, "blur_kernel_radius", 3, 0, 0, 4, 0, "Kernel Radius",
	"Radius of kernel used for soften and sharpen in pixels",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, blur_kernel_radius), (RawPropertyType)0, nullptr},
	Brush_blur_kernel_radius_get, Brush_blur_kernel_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 50, 1, 10000, 1, 2, nullptr
};

static const EnumPropertyItem rna_Brush_blur_mode_items[3] = {
	{1, "BOX", 0, "Box", ""},
	{0, "GAUSSIAN", 0, "Gaussian", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_blur_mode = {
	{(PropertyRNA *)&rna_Brush_falloff_angle, (PropertyRNA *)&rna_Brush_blur_kernel_radius,
	-1, "blur_mode", 3, 0, 0, 4, 0, "Blur Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, blur_mode), (RawPropertyType)0, nullptr},
	Brush_blur_mode_get, Brush_blur_mode_set, nullptr, nullptr, nullptr, rna_Brush_blur_mode_items, 2, 0
};

FloatPropertyRNA rna_Brush_falloff_angle = {
	{(PropertyRNA *)&rna_Brush_use_airbrush, (PropertyRNA *)&rna_Brush_blur_mode,
	-1, "falloff_angle", 3, 0, 0, 4, 0, "Falloff Angle",
	"Paint most on faces pointing towards the view according to this angle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, falloff_angle), (RawPropertyType)5, nullptr},
	Brush_falloff_angle_get, Brush_falloff_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_Brush_use_airbrush = {
	{(PropertyRNA *)&rna_Brush_use_original_normal, (PropertyRNA *)&rna_Brush_falloff_angle,
	-1, "use_airbrush", 3, 0, 0, 0, 0, "Airbrush",
	"Keep applying paint effect while holding mouse (spray)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_airbrush_get, Brush_use_airbrush_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_original_normal = {
	{(PropertyRNA *)&rna_Brush_use_original_plane, (PropertyRNA *)&rna_Brush_use_airbrush,
	-1, "use_original_normal", 3, 0, 0, 0, 0, "Original Normal",
	"When locked keep using normal of surface where stroke was initiated",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_original_normal_get, Brush_use_original_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_original_plane = {
	{(PropertyRNA *)&rna_Brush_use_automasking_topology, (PropertyRNA *)&rna_Brush_use_original_normal,
	-1, "use_original_plane", 3, 0, 0, 0, 0, "Original Plane",
	"When locked keep using the plane origin of surface where stroke was initiated",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_original_plane_get, Brush_use_original_plane_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_topology = {
	{(PropertyRNA *)&rna_Brush_use_automasking_face_sets, (PropertyRNA *)&rna_Brush_use_original_plane,
	-1, "use_automasking_topology", 3, 0, 0, 0, 0, "Topology",
	"Affect only vertices connected to the active vertex under the brush",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_topology_get, Brush_use_automasking_topology_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_face_sets = {
	{(PropertyRNA *)&rna_Brush_use_automasking_boundary_edges, (PropertyRNA *)&rna_Brush_use_automasking_topology,
	-1, "use_automasking_face_sets", 3, 0, 0, 0, 0, "Face Sets",
	"Affect only vertices that share Face Sets with the active vertex",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_face_sets_get, Brush_use_automasking_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_boundary_edges = {
	{(PropertyRNA *)&rna_Brush_use_automasking_boundary_face_sets, (PropertyRNA *)&rna_Brush_use_automasking_face_sets,
	-1, "use_automasking_boundary_edges", 3, 0, 0, 0, 0, "Mesh Boundary Auto-Masking",
	"Do not affect non manifold boundary edges",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_boundary_edges_get, Brush_use_automasking_boundary_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_boundary_face_sets = {
	{(PropertyRNA *)&rna_Brush_use_automasking_cavity, (PropertyRNA *)&rna_Brush_use_automasking_boundary_edges,
	-1, "use_automasking_boundary_face_sets", 3, 0, 0, 0, 0, "Face Sets Boundary Automasking",
	"Do not affect vertices that belong to a Face Set boundary",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_boundary_face_sets_get, Brush_use_automasking_boundary_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_cavity = {
	{(PropertyRNA *)&rna_Brush_use_automasking_cavity_inverted, (PropertyRNA *)&rna_Brush_use_automasking_boundary_face_sets,
	-1, "use_automasking_cavity", 3, 0, 0, 0, 0, "Cavity Mask",
	"Do not affect vertices on peaks, based on the surface curvature",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_cavity_get, Brush_use_automasking_cavity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_cavity_inverted = {
	{(PropertyRNA *)&rna_Brush_use_automasking_custom_cavity_curve, (PropertyRNA *)&rna_Brush_use_automasking_cavity,
	-1, "use_automasking_cavity_inverted", 3, 0, 0, 0, 0, "Inverted Cavity Mask",
	"Do not affect vertices within crevices, based on the surface curvature",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_cavity_inverted_get, Brush_use_automasking_cavity_inverted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_custom_cavity_curve = {
	{(PropertyRNA *)&rna_Brush_automasking_cavity_factor, (PropertyRNA *)&rna_Brush_use_automasking_cavity_inverted,
	-1, "use_automasking_custom_cavity_curve", 3, 0, 0, 0, 0, "Custom Cavity Curve",
	"Use custom curve",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_custom_cavity_curve_get, Brush_use_automasking_custom_cavity_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Brush_automasking_cavity_factor = {
	{(PropertyRNA *)&rna_Brush_automasking_cavity_blur_steps, (PropertyRNA *)&rna_Brush_use_automasking_custom_cavity_curve,
	-1, "automasking_cavity_factor", 3, 1, 0, 4, 0, "Cavity Factor",
	"The contrast of the cavity mask",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, automasking_cavity_factor), (RawPropertyType)5, nullptr},
	Brush_automasking_cavity_factor_get, Brush_automasking_cavity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 5.0f, 0.1000000015f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_Brush_automasking_cavity_blur_steps = {
	{(PropertyRNA *)&rna_Brush_automasking_cavity_curve, (PropertyRNA *)&rna_Brush_automasking_cavity_factor,
	-1, "automasking_cavity_blur_steps", 3, 1, 0, 4, 0, "Blur Steps",
	"The number of times the cavity mask is blurred",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, automasking_cavity_blur_steps), (RawPropertyType)0, nullptr},
	Brush_automasking_cavity_blur_steps_get, Brush_automasking_cavity_blur_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 25, 1, 0, nullptr
};

PointerPropertyRNA rna_Brush_automasking_cavity_curve = {
	{(PropertyRNA *)&rna_Brush_use_automasking_start_normal, (PropertyRNA *)&rna_Brush_automasking_cavity_blur_steps,
	-1, "automasking_cavity_curve", 8388608, 1, 0, 0, 0, "Cavity Curve",
	"Curve used for the sensitivity",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_automasking_cavity_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

BoolPropertyRNA rna_Brush_use_automasking_start_normal = {
	{(PropertyRNA *)&rna_Brush_use_automasking_view_normal, (PropertyRNA *)&rna_Brush_automasking_cavity_curve,
	-1, "use_automasking_start_normal", 3, 0, 0, 0, 0, "Area Normal",
	"Affect only vertices with a similar normal to where the stroke starts",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_start_normal_get, Brush_use_automasking_start_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_view_normal = {
	{(PropertyRNA *)&rna_Brush_use_automasking_view_occlusion, (PropertyRNA *)&rna_Brush_use_automasking_start_normal,
	-1, "use_automasking_view_normal", 3, 0, 0, 0, 0, "View Normal",
	"Affect only vertices with a normal that faces the viewer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_view_normal_get, Brush_use_automasking_view_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_automasking_view_occlusion = {
	{(PropertyRNA *)&rna_Brush_use_scene_spacing, (PropertyRNA *)&rna_Brush_use_automasking_view_normal,
	-1, "use_automasking_view_occlusion", 3, 0, 0, 0, 0, "Occlusion",
	"Only affect vertices that are not occluded by other faces. (Slower performance)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_automasking_view_occlusion_get, Brush_use_automasking_view_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Brush_use_scene_spacing_items[3] = {
	{0, "VIEW", 0, "View", "Calculate brush spacing relative to the view"},
	{131072, "SCENE", 0, "Scene", "Calculate brush spacing relative to the scene using the stroke location"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_use_scene_spacing = {
	{(PropertyRNA *)&rna_Brush_use_grab_active_vertex, (PropertyRNA *)&rna_Brush_use_automasking_view_occlusion,
	-1, "use_scene_spacing", 3, 0, 0, 4, 0, "Spacing Distance",
	"Calculate the brush spacing using view or scene distance",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), (RawPropertyType)0, nullptr},
	Brush_use_scene_spacing_get, Brush_use_scene_spacing_set, nullptr, nullptr, nullptr, rna_Brush_use_scene_spacing_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_grab_active_vertex = {
	{(PropertyRNA *)&rna_Brush_use_grab_silhouette, (PropertyRNA *)&rna_Brush_use_scene_spacing,
	-1, "use_grab_active_vertex", 3, 0, 0, 0, 0, "Grab Active Vertex",
	"Apply the maximum grab strength to the active vertex instead of the cursor location",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_grab_active_vertex_get, Brush_use_grab_active_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_grab_silhouette = {
	{(PropertyRNA *)&rna_Brush_use_paint_antialiasing, (PropertyRNA *)&rna_Brush_use_grab_active_vertex,
	-1, "use_grab_silhouette", 3, 0, 0, 0, 0, "Grab Silhouette",
	"Grabs trying to automask the silhouette of the object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_grab_silhouette_get, Brush_use_grab_silhouette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_antialiasing = {
	{(PropertyRNA *)&rna_Brush_use_multiplane_scrape_dynamic, (PropertyRNA *)&rna_Brush_use_grab_silhouette,
	-1, "use_paint_antialiasing", 3, 0, 0, 0, 0, "Anti-Aliasing",
	"Smooths the edges of the strokes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_antialiasing_get, Brush_use_paint_antialiasing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_multiplane_scrape_dynamic = {
	{(PropertyRNA *)&rna_Brush_show_multiplane_scrape_planes_preview, (PropertyRNA *)&rna_Brush_use_paint_antialiasing,
	-1, "use_multiplane_scrape_dynamic", 3, 0, 0, 0, 0, "Dynamic Mode",
	"The angle between the planes changes during the stroke to fit the surface under the cursor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_multiplane_scrape_dynamic_get, Brush_use_multiplane_scrape_dynamic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_show_multiplane_scrape_planes_preview = {
	{(PropertyRNA *)&rna_Brush_use_pose_ik_anchored, (PropertyRNA *)&rna_Brush_use_multiplane_scrape_dynamic,
	-1, "show_multiplane_scrape_planes_preview", 3, 0, 0, 0, 0, "Show Cursor Preview",
	"Preview the scrape planes in the cursor during the stroke",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_show_multiplane_scrape_planes_preview_get, Brush_show_multiplane_scrape_planes_preview_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pose_ik_anchored = {
	{(PropertyRNA *)&rna_Brush_use_pose_lock_rotation, (PropertyRNA *)&rna_Brush_show_multiplane_scrape_planes_preview,
	-1, "use_pose_ik_anchored", 3, 0, 0, 0, 0, "Keep Anchor Point",
	"Keep the position of the last segment in the IK chain fixed",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pose_ik_anchored_get, Brush_use_pose_ik_anchored_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pose_lock_rotation = {
	{(PropertyRNA *)&rna_Brush_use_connected_only, (PropertyRNA *)&rna_Brush_use_pose_ik_anchored,
	-1, "use_pose_lock_rotation", 3, 0, 0, 0, 0, "Lock Rotation When Scaling",
	"Do not rotate the segment when using the scale deform mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pose_lock_rotation_get, Brush_use_pose_lock_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_connected_only = {
	{(PropertyRNA *)&rna_Brush_use_cloth_pin_simulation_boundary, (PropertyRNA *)&rna_Brush_use_pose_lock_rotation,
	-1, "use_connected_only", 3, 0, 0, 0, 0, "Connected Only",
	"Affect only topologically connected elements",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_connected_only_get, Brush_use_connected_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_cloth_pin_simulation_boundary = {
	{(PropertyRNA *)&rna_Brush_use_cloth_collision, (PropertyRNA *)&rna_Brush_use_connected_only,
	-1, "use_cloth_pin_simulation_boundary", 3, 0, 0, 0, 0, "Pin Simulation Boundary",
	"Lock the position of the vertices in the simulation falloff area to avoid artifacts and create a softer transition with unaffected areas",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_cloth_pin_simulation_boundary_get, Brush_use_cloth_pin_simulation_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_cloth_collision = {
	{(PropertyRNA *)&rna_Brush_invert_to_scrape_fill, (PropertyRNA *)&rna_Brush_use_cloth_pin_simulation_boundary,
	-1, "use_cloth_collision", 3, 0, 0, 0, 0, "Enable Collision",
	"Collide with objects during the simulation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_cloth_collision_get, Brush_use_cloth_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_invert_to_scrape_fill = {
	{(PropertyRNA *)&rna_Brush_use_pressure_strength, (PropertyRNA *)&rna_Brush_use_cloth_collision,
	-1, "invert_to_scrape_fill", 3, 0, 0, 0, 0, "Invert to Scrape or Fill",
	"Use Scrape or Fill tool when inverting this brush instead of inverting its displacement direction",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_invert_to_scrape_fill_get, Brush_invert_to_scrape_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pressure_strength = {
	{(PropertyRNA *)&rna_Brush_use_offset_pressure, (PropertyRNA *)&rna_Brush_invert_to_scrape_fill,
	-1, "use_pressure_strength", 3, 0, 0, 0, 0, "Strength Pressure",
	"Enable tablet pressure sensitivity for strength",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pressure_strength_get, Brush_use_pressure_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_offset_pressure = {
	{(PropertyRNA *)&rna_Brush_use_pressure_area_radius, (PropertyRNA *)&rna_Brush_use_pressure_strength,
	-1, "use_offset_pressure", 3, 0, 0, 0, 0, "Plane Offset Pressure",
	"Enable tablet pressure sensitivity for offset",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_offset_pressure_get, Brush_use_offset_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pressure_area_radius = {
	{(PropertyRNA *)&rna_Brush_use_pressure_size, (PropertyRNA *)&rna_Brush_use_offset_pressure,
	-1, "use_pressure_area_radius", 3, 0, 0, 0, 0, "Area Radius Pressure",
	"Enable tablet pressure sensitivity for area radius",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pressure_area_radius_get, Brush_use_pressure_area_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pressure_size = {
	{(PropertyRNA *)&rna_Brush_use_pressure_jitter, (PropertyRNA *)&rna_Brush_use_pressure_area_radius,
	-1, "use_pressure_size", 3, 0, 0, 0, 0, "Size Pressure",
	"Enable tablet pressure sensitivity for size",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pressure_size_get, Brush_use_pressure_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pressure_jitter = {
	{(PropertyRNA *)&rna_Brush_use_pressure_spacing, (PropertyRNA *)&rna_Brush_use_pressure_size,
	-1, "use_pressure_jitter", 3, 0, 0, 0, 0, "Jitter Pressure",
	"Enable tablet pressure sensitivity for jitter",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pressure_jitter_get, Brush_use_pressure_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_pressure_spacing = {
	{(PropertyRNA *)&rna_Brush_use_pressure_masking, (PropertyRNA *)&rna_Brush_use_pressure_jitter,
	-1, "use_pressure_spacing", 3, 0, 0, 0, 0, "Spacing Pressure",
	"Enable tablet pressure sensitivity for spacing",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_pressure_spacing_get, Brush_use_pressure_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Brush_use_pressure_masking_items[4] = {
	{0, "NONE", 0, "Off", ""},
	{2, "RAMP", 67, "Ramp", ""},
	{4, "CUTOFF", 67, "Cutoff", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_use_pressure_masking = {
	{(PropertyRNA *)&rna_Brush_use_inverse_smooth_pressure, (PropertyRNA *)&rna_Brush_use_pressure_spacing,
	-1, "use_pressure_masking", 3, 0, 0, 4, 0, "Mask Pressure Mode",
	"Pen pressure makes texture influence smaller",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_pressure), (RawPropertyType)0, nullptr},
	Brush_use_pressure_masking_get, Brush_use_pressure_masking_set, nullptr, nullptr, nullptr, rna_Brush_use_pressure_masking_items, 3, 0
};

BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure = {
	{(PropertyRNA *)&rna_Brush_use_plane_trim, (PropertyRNA *)&rna_Brush_use_pressure_masking,
	-1, "use_inverse_smooth_pressure", 3, 0, 0, 0, 0, "Inverse Smooth Pressure",
	"Lighter pressure causes more smoothing to be applied",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_inverse_smooth_pressure_get, Brush_use_inverse_smooth_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_plane_trim = {
	{(PropertyRNA *)&rna_Brush_use_frontface, (PropertyRNA *)&rna_Brush_use_inverse_smooth_pressure,
	-1, "use_plane_trim", 3, 0, 0, 0, 0, "Use Plane Trim",
	"Limit the distance from the offset plane that a vertex can be affected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_plane_trim_get, Brush_use_plane_trim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_frontface = {
	{(PropertyRNA *)&rna_Brush_use_frontface_falloff, (PropertyRNA *)&rna_Brush_use_plane_trim,
	-1, "use_frontface", 3, 0, 0, 0, 0, "Use Front-Face",
	"Brush only affects vertices that face the viewer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_frontface_get, Brush_use_frontface_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_frontface_falloff = {
	{(PropertyRNA *)&rna_Brush_use_anchor, (PropertyRNA *)&rna_Brush_use_frontface,
	-1, "use_frontface_falloff", 3, 0, 0, 0, 0, "Use Front-Face Falloff",
	"Blend brush influence by how much they face the front",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_frontface_falloff_get, Brush_use_frontface_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_anchor = {
	{(PropertyRNA *)&rna_Brush_use_space, (PropertyRNA *)&rna_Brush_use_frontface_falloff,
	-1, "use_anchor", 3, 0, 0, 0, 0, "Anchored",
	"Keep the brush anchored to the initial location",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_anchor_get, Brush_use_anchor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_space = {
	{(PropertyRNA *)&rna_Brush_use_line, (PropertyRNA *)&rna_Brush_use_anchor,
	-1, "use_space", 3, 0, 0, 0, 0, "Space",
	"Limit brush application to the distance specified by spacing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_space_get, Brush_use_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_line = {
	{(PropertyRNA *)&rna_Brush_use_curve, (PropertyRNA *)&rna_Brush_use_space,
	-1, "use_line", 3, 0, 0, 0, 0, "Line",
	"Draw a line with dabs separated according to spacing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_line_get, Brush_use_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_curve = {
	{(PropertyRNA *)&rna_Brush_use_smooth_stroke, (PropertyRNA *)&rna_Brush_use_line,
	-1, "use_curve", 3, 0, 0, 0, 0, "Curve",
	"Define the stroke curve with a bezier curve. Dabs are separated according to spacing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_curve_get, Brush_use_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_smooth_stroke = {
	{(PropertyRNA *)&rna_Brush_use_persistent, (PropertyRNA *)&rna_Brush_use_curve,
	-1, "use_smooth_stroke", 3, 0, 0, 0, 0, "Smooth Stroke",
	"Brush lags behind mouse and follows a smoother path",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_smooth_stroke_get, Brush_use_smooth_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_persistent = {
	{(PropertyRNA *)&rna_Brush_use_accumulate, (PropertyRNA *)&rna_Brush_use_smooth_stroke,
	-1, "use_persistent", 3, 0, 0, 0, 0, "Persistent",
	"Sculpt on a persistent layer of the mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_persistent_get, Brush_use_persistent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_accumulate = {
	{(PropertyRNA *)&rna_Brush_use_space_attenuation, (PropertyRNA *)&rna_Brush_use_persistent,
	-1, "use_accumulate", 3, 0, 0, 0, 0, "Accumulate",
	"Accumulate stroke daubs on top of each other",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_accumulate_get, Brush_use_accumulate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_space_attenuation = {
	{(PropertyRNA *)&rna_Brush_use_adaptive_space, (PropertyRNA *)&rna_Brush_use_accumulate,
	-1, "use_space_attenuation", 3, 0, 0, 0, 0, "Adjust Strength for Spacing",
	"Automatically adjust strength to give consistent results for different spacings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_space_attenuation_get, Brush_use_space_attenuation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_adaptive_space = {
	{(PropertyRNA *)&rna_Brush_use_locked_size, (PropertyRNA *)&rna_Brush_use_space_attenuation,
	-1, "use_adaptive_space", 3, 0, 0, 0, 0, "Adaptive Spacing",
	"Space daubs according to surface orientation instead of screen space",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_adaptive_space_get, Brush_use_adaptive_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Brush_use_locked_size_items[3] = {
	{0, "VIEW", 0, "View", "Measure brush size relative to the view"},
	{1048576, "SCENE", 0, "Scene", "Measure brush size relative to the scene"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_use_locked_size = {
	{(PropertyRNA *)&rna_Brush_color_type, (PropertyRNA *)&rna_Brush_use_adaptive_space,
	-1, "use_locked_size", 3, 0, 0, 4, 0, "Radius Unit",
	"Measure brush size relative to the view or the scene",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), (RawPropertyType)0, nullptr},
	Brush_use_locked_size_get, Brush_use_locked_size_set, nullptr, nullptr, nullptr, rna_Brush_use_locked_size_items, 2, 0
};

static const EnumPropertyItem rna_Brush_color_type_items[3] = {
	{0, "COLOR", 0, "Color", "Paint with a single color"},
	{2097152, "GRADIENT", 0, "Gradient", "Paint with a gradient"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_color_type = {
	{(PropertyRNA *)&rna_Brush_use_edge_to_edge, (PropertyRNA *)&rna_Brush_use_locked_size,
	-1, "color_type", 3, 0, 0, 0, 0, "Color Type",
	"Use single color or gradient when painting",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_color_type_get, Brush_color_type_set, nullptr, nullptr, nullptr, rna_Brush_color_type_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_edge_to_edge = {
	{(PropertyRNA *)&rna_Brush_use_restore_mesh, (PropertyRNA *)&rna_Brush_color_type,
	-1, "use_edge_to_edge", 3, 0, 0, 0, 0, "Edge-to-Edge",
	"Drag anchor brush from edge-to-edge",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_edge_to_edge_get, Brush_use_edge_to_edge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_restore_mesh = {
	{(PropertyRNA *)&rna_Brush_use_alpha, (PropertyRNA *)&rna_Brush_use_edge_to_edge,
	-1, "use_restore_mesh", 3, 0, 0, 0, 0, "Restore Mesh",
	"Allow a single dot to be carefully positioned",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_restore_mesh_get, Brush_use_restore_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_alpha = {
	{(PropertyRNA *)&rna_Brush_curve, (PropertyRNA *)&rna_Brush_use_restore_mesh,
	-1, "use_alpha", 3, 0, 0, 0, 0, "Affect Alpha",
	"When this is disabled, lock alpha while painting",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_alpha_get, Brush_use_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Brush_curve = {
	{(PropertyRNA *)&rna_Brush_paint_curve, (PropertyRNA *)&rna_Brush_use_alpha,
	-1, "curve", 8650752, 0, 0, 0, 0, "Curve",
	"Editable falloff curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_Brush_paint_curve = {
	{(PropertyRNA *)&rna_Brush_gradient, (PropertyRNA *)&rna_Brush_curve,
	-1, "paint_curve", 8388801, 0, 0, 0, 0, "Paint Curve",
	"Active paint curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_paint_curve_get, Brush_paint_curve_set, nullptr, nullptr,&RNA_PaintCurve
};

PointerPropertyRNA rna_Brush_gradient = {
	{(PropertyRNA *)&rna_Brush_gradient_stroke_mode, (PropertyRNA *)&rna_Brush_paint_curve,
	-1, "gradient", 8388608, 0, 0, 0, 0, "Gradient",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_gradient_get, nullptr, nullptr, nullptr,&RNA_ColorRamp
};

static const EnumPropertyItem rna_Brush_gradient_stroke_mode_items[4] = {
	{0, "PRESSURE", 0, "Pressure", ""},
	{1, "SPACING_REPEAT", 0, "Repeat", ""},
	{2, "SPACING_CLAMP", 0, "Clamp", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_gradient_stroke_mode = {
	{(PropertyRNA *)&rna_Brush_gradient_fill_mode, (PropertyRNA *)&rna_Brush_gradient,
	-1, "gradient_stroke_mode", 3, 0, 0, 4, 0, "Gradient Stroke Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gradient_stroke_mode), (RawPropertyType)2, nullptr},
	Brush_gradient_stroke_mode_get, Brush_gradient_stroke_mode_set, nullptr, nullptr, nullptr, rna_Brush_gradient_stroke_mode_items, 3, 0
};

static const EnumPropertyItem rna_Brush_gradient_fill_mode_items[3] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "RADIAL", 0, "Radial", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Brush_gradient_fill_mode = {
	{(PropertyRNA *)&rna_Brush_use_primary_overlay, (PropertyRNA *)&rna_Brush_gradient_stroke_mode,
	-1, "gradient_fill_mode", 3, 0, 0, 4, 0, "Gradient Fill Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gradient_fill_mode), (RawPropertyType)2, nullptr},
	Brush_gradient_fill_mode_get, Brush_gradient_fill_mode_set, nullptr, nullptr, nullptr, rna_Brush_gradient_fill_mode_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_primary_overlay = {
	{(PropertyRNA *)&rna_Brush_use_secondary_overlay, (PropertyRNA *)&rna_Brush_gradient_fill_mode,
	-1, "use_primary_overlay", 3, 0, 0, 0, 0, "Use Texture Overlay",
	"Show texture in viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_primary_overlay_get, Brush_use_primary_overlay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_secondary_overlay = {
	{(PropertyRNA *)&rna_Brush_use_cursor_overlay, (PropertyRNA *)&rna_Brush_use_primary_overlay,
	-1, "use_secondary_overlay", 3, 0, 0, 0, 0, "Use Texture Overlay",
	"Show texture in viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_secondary_overlay_get, Brush_use_secondary_overlay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_cursor_overlay = {
	{(PropertyRNA *)&rna_Brush_use_cursor_overlay_override, (PropertyRNA *)&rna_Brush_use_secondary_overlay,
	-1, "use_cursor_overlay", 3, 0, 0, 0, 0, "Use Cursor Overlay",
	"Show cursor in viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_cursor_overlay_get, Brush_use_cursor_overlay_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_cursor_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_primary_overlay_override, (PropertyRNA *)&rna_Brush_use_cursor_overlay,
	-1, "use_cursor_overlay_override", 3, 0, 0, 0, 0, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_cursor_overlay_override_get, Brush_use_cursor_overlay_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_primary_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_secondary_overlay_override, (PropertyRNA *)&rna_Brush_use_cursor_overlay_override,
	-1, "use_primary_overlay_override", 3, 0, 0, 0, 0, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_primary_overlay_override_get, Brush_use_primary_overlay_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_secondary_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_paint_sculpt, (PropertyRNA *)&rna_Brush_use_primary_overlay_override,
	-1, "use_secondary_overlay_override", 3, 0, 0, 0, 0, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_secondary_overlay_override_get, Brush_use_secondary_overlay_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_sculpt = {
	{(PropertyRNA *)&rna_Brush_use_paint_uv_sculpt, (PropertyRNA *)&rna_Brush_use_secondary_overlay_override,
	-1, "use_paint_sculpt", 3, 0, 0, 0, 0, "Use Sculpt",
	"Use this brush in sculpt mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_sculpt_get, Brush_use_paint_sculpt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_uv_sculpt = {
	{(PropertyRNA *)&rna_Brush_use_paint_vertex, (PropertyRNA *)&rna_Brush_use_paint_sculpt,
	-1, "use_paint_uv_sculpt", 3, 0, 0, 0, 0, "Use UV Sculpt",
	"Use this brush in UV sculpt mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_uv_sculpt_get, Brush_use_paint_uv_sculpt_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_vertex = {
	{(PropertyRNA *)&rna_Brush_use_paint_weight, (PropertyRNA *)&rna_Brush_use_paint_uv_sculpt,
	-1, "use_paint_vertex", 3, 0, 0, 0, 0, "Use Vertex",
	"Use this brush in vertex paint mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_vertex_get, Brush_use_paint_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_weight = {
	{(PropertyRNA *)&rna_Brush_use_paint_image, (PropertyRNA *)&rna_Brush_use_paint_vertex,
	-1, "use_paint_weight", 3, 0, 0, 0, 0, "Use Weight",
	"Use this brush in weight paint mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_weight_get, Brush_use_paint_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_image = {
	{(PropertyRNA *)&rna_Brush_use_paint_grease_pencil, (PropertyRNA *)&rna_Brush_use_paint_weight,
	-1, "use_paint_image", 3, 0, 0, 0, 0, "Use Texture",
	"Use this brush in texture paint mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_image_get, Brush_use_paint_image_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_grease_pencil = {
	{(PropertyRNA *)&rna_Brush_use_vertex_grease_pencil, (PropertyRNA *)&rna_Brush_use_paint_image,
	-1, "use_paint_grease_pencil", 3, 0, 0, 0, 0, "Use Paint",
	"Use this brush in grease pencil drawing mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_grease_pencil_get, Brush_use_paint_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_vertex_grease_pencil = {
	{(PropertyRNA *)&rna_Brush_use_paint_sculpt_curves, (PropertyRNA *)&rna_Brush_use_paint_grease_pencil,
	-1, "use_vertex_grease_pencil", 3, 0, 0, 0, 0, "Use Vertex",
	"Use this brush in grease pencil vertex color mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_vertex_grease_pencil_get, Brush_use_vertex_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Brush_use_paint_sculpt_curves = {
	{(PropertyRNA *)&rna_Brush_texture_slot, (PropertyRNA *)&rna_Brush_use_vertex_grease_pencil,
	-1, "use_paint_sculpt_curves", 3, 0, 0, 0, 0, "Use Sculpt",
	"Use this brush in sculpt curves mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_paint_sculpt_curves_get, Brush_use_paint_sculpt_curves_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Brush_texture_slot = {
	{(PropertyRNA *)&rna_Brush_texture, (PropertyRNA *)&rna_Brush_use_paint_sculpt_curves,
	-1, "texture_slot", 8388608, 0, 0, 0, 0, "Texture Slot",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_texture_slot_get, nullptr, nullptr, nullptr,&RNA_BrushTextureSlot
};

PointerPropertyRNA rna_Brush_texture = {
	{(PropertyRNA *)&rna_Brush_mask_texture_slot, (PropertyRNA *)&rna_Brush_texture_slot,
	-1, "texture", 12583105, 0, 0, 0, 0, "Texture",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Brush_main_tex_update, 134217728, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_texture_get, Brush_texture_set, nullptr, nullptr,&RNA_Texture
};

PointerPropertyRNA rna_Brush_mask_texture_slot = {
	{(PropertyRNA *)&rna_Brush_mask_texture, (PropertyRNA *)&rna_Brush_texture,
	-1, "mask_texture_slot", 8388608, 0, 0, 0, 0, "Mask Texture Slot",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_mask_texture_slot_get, nullptr, nullptr, nullptr,&RNA_BrushTextureSlot
};

PointerPropertyRNA rna_Brush_mask_texture = {
	{(PropertyRNA *)&rna_Brush_texture_overlay_alpha, (PropertyRNA *)&rna_Brush_mask_texture_slot,
	-1, "mask_texture", 12583105, 0, 0, 0, 0, "Mask Texture",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Brush_secondary_tex_update, 134217728, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_mask_texture_get, Brush_mask_texture_set, nullptr, nullptr,&RNA_Texture
};

IntPropertyRNA rna_Brush_texture_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_mask_overlay_alpha, (PropertyRNA *)&rna_Brush_mask_texture,
	-1, "texture_overlay_alpha", 3, 0, 0, 4, 0, "Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, texture_overlay_alpha), (RawPropertyType)0, nullptr},
	Brush_texture_overlay_alpha_get, Brush_texture_overlay_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 33, nullptr
};

IntPropertyRNA rna_Brush_mask_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_cursor_overlay_alpha, (PropertyRNA *)&rna_Brush_texture_overlay_alpha,
	-1, "mask_overlay_alpha", 3, 0, 0, 4, 0, "Mask Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_overlay_alpha), (RawPropertyType)0, nullptr},
	Brush_mask_overlay_alpha_get, Brush_mask_overlay_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 33, nullptr
};

IntPropertyRNA rna_Brush_cursor_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_cursor_color_add, (PropertyRNA *)&rna_Brush_mask_overlay_alpha,
	-1, "cursor_overlay_alpha", 3, 0, 0, 4, 0, "Mask Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cursor_overlay_alpha), (RawPropertyType)0, nullptr},
	Brush_cursor_overlay_alpha_get, Brush_cursor_overlay_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 33, nullptr
};

static float rna_Brush_cursor_color_add_default[4] = {
	1.0f,
	0.3899999857f,
	0.3899999857f,
	0.8999999762f
};

FloatPropertyRNA rna_Brush_cursor_color_add = {
	{(PropertyRNA *)&rna_Brush_cursor_color_subtract, (PropertyRNA *)&rna_Brush_cursor_overlay_alpha,
	-1, "cursor_color_add", 3, 0, 0, 4, 0, "Add Color",
	"Color of cursor when adding",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, add_col), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_cursor_color_add_get, Brush_cursor_color_add_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_add_default
};

static float rna_Brush_cursor_color_subtract_default[4] = {
	0.3899999857f,
	0.3899999857f,
	1.0f,
	0.8999999762f
};

FloatPropertyRNA rna_Brush_cursor_color_subtract = {
	{(PropertyRNA *)&rna_Brush_use_custom_icon, (PropertyRNA *)&rna_Brush_cursor_color_add,
	-1, "cursor_color_subtract", 3, 0, 0, 4, 0, "Subtract Color",
	"Color of cursor when subtracting",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sub_col), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_cursor_color_subtract_get, Brush_cursor_color_subtract_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_subtract_default
};

BoolPropertyRNA rna_Brush_use_custom_icon = {
	{(PropertyRNA *)&rna_Brush_icon_filepath, (PropertyRNA *)&rna_Brush_cursor_color_subtract,
	-1, "use_custom_icon", 3, 0, 0, 0, 0, "Custom Icon",
	"Set the brush icon from an image file",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_icon_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_use_custom_icon_get, Brush_use_custom_icon_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_Brush_icon_filepath = {
	{(PropertyRNA *)&rna_Brush_clone_image, (PropertyRNA *)&rna_Brush_use_custom_icon,
	-1, "icon_filepath", 262145, 0, 0, 0, 0, "Brush Icon Filepath",
	"File path to brush icon",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Brush_icon_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_icon_filepath_get, Brush_icon_filepath_length, Brush_icon_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_Brush_clone_image = {
	{(PropertyRNA *)&rna_Brush_clone_alpha, (PropertyRNA *)&rna_Brush_icon_filepath,
	-1, "clone_image", 8388801, 0, 0, 0, 0, "Clone Image",
	"Image for clone tool",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 268697600, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_clone_image_get, Brush_clone_image_set, nullptr, rna_Brush_imagetype_poll,&RNA_Image
};

FloatPropertyRNA rna_Brush_clone_alpha = {
	{(PropertyRNA *)&rna_Brush_clone_offset, (PropertyRNA *)&rna_Brush_clone_image,
	-1, "clone_alpha", 3, 0, 0, 4, 0, "Clone Alpha",
	"Opacity of clone image display",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Brush_update, 268697600, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, clone.alpha), (RawPropertyType)5, nullptr},
	Brush_clone_alpha_get, Brush_clone_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

static float rna_Brush_clone_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_clone_offset = {
	{(PropertyRNA *)&rna_Brush_brush_capabilities, (PropertyRNA *)&rna_Brush_clone_alpha,
	-1, "clone_offset", 3, 0, 0, 4, 0, "Clone Offset",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Brush_update, 268697600, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, clone.offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Brush_clone_offset_get, Brush_clone_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_clone_offset_default
};

PointerPropertyRNA rna_Brush_brush_capabilities = {
	{(PropertyRNA *)&rna_Brush_sculpt_capabilities, (PropertyRNA *)&rna_Brush_clone_offset,
	-1, "brush_capabilities", 8650752, 0, 0, 0, 0, "Brush Capabilities",
	"Brush\'s capabilities",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_brush_capabilities_get, nullptr, nullptr, nullptr,&RNA_BrushCapabilities
};

PointerPropertyRNA rna_Brush_sculpt_capabilities = {
	{(PropertyRNA *)&rna_Brush_image_paint_capabilities, (PropertyRNA *)&rna_Brush_brush_capabilities,
	-1, "sculpt_capabilities", 8650752, 0, 0, 0, 0, "Sculpt Capabilities",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_sculpt_capabilities_get, nullptr, nullptr, nullptr,&RNA_BrushCapabilitiesSculpt
};

PointerPropertyRNA rna_Brush_image_paint_capabilities = {
	{(PropertyRNA *)&rna_Brush_vertex_paint_capabilities, (PropertyRNA *)&rna_Brush_sculpt_capabilities,
	-1, "image_paint_capabilities", 8650752, 0, 0, 0, 0, "Image Paint Capabilities",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_image_paint_capabilities_get, nullptr, nullptr, nullptr,&RNA_BrushCapabilitiesImagePaint
};

PointerPropertyRNA rna_Brush_vertex_paint_capabilities = {
	{(PropertyRNA *)&rna_Brush_weight_paint_capabilities, (PropertyRNA *)&rna_Brush_image_paint_capabilities,
	-1, "vertex_paint_capabilities", 8650752, 0, 0, 0, 0, "Vertex Paint Capabilities",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_vertex_paint_capabilities_get, nullptr, nullptr, nullptr,&RNA_BrushCapabilitiesVertexPaint
};

PointerPropertyRNA rna_Brush_weight_paint_capabilities = {
	{(PropertyRNA *)&rna_Brush_gpencil_settings, (PropertyRNA *)&rna_Brush_vertex_paint_capabilities,
	-1, "weight_paint_capabilities", 8650752, 0, 0, 0, 0, "Weight Paint Capabilities",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_weight_paint_capabilities_get, nullptr, nullptr, nullptr,&RNA_BrushCapabilitiesWeightPaint
};

PointerPropertyRNA rna_Brush_gpencil_settings = {
	{(PropertyRNA *)&rna_Brush_curves_sculpt_settings, (PropertyRNA *)&rna_Brush_weight_paint_capabilities,
	-1, "gpencil_settings", 8388608, 0, 0, 0, 0, "Gpencil Settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_gpencil_settings_get, nullptr, nullptr, nullptr,&RNA_BrushGpencilSettings
};

PointerPropertyRNA rna_Brush_curves_sculpt_settings = {
	{nullptr, (PropertyRNA *)&rna_Brush_gpencil_settings,
	-1, "curves_sculpt_settings", 8388608, 0, 0, 0, 0, "Curves Sculpt Settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Brush_curves_sculpt_settings_get, nullptr, nullptr, nullptr,&RNA_BrushCurvesSculptSettings
};

StructRNA RNA_Brush = {
	{(ContainerRNA *)&RNA_BrushCapabilities, (ContainerRNA *)&RNA_BoidSettings,
	nullptr,
	{(PropertyRNA *)&rna_Brush_blend, (PropertyRNA *)&rna_Brush_curves_sculpt_settings}},
	"Brush", nullptr, nullptr, 519, nullptr, "Brush",
	"Brush data-block for storing brush settings for painting and sculpting",
	"*", 182,
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

/* Brush Capabilities */
CollectionPropertyRNA rna_BrushCapabilities_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilities_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilities_rna_properties_begin, BrushCapabilities_rna_properties_next, BrushCapabilities_rna_properties_end, BrushCapabilities_rna_properties_get, nullptr, nullptr, BrushCapabilities_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilities_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_overlay, (PropertyRNA *)&rna_BrushCapabilities_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilities_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilities_has_overlay = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_random_texture_angle, (PropertyRNA *)&rna_BrushCapabilities_rna_type,
	-1, "has_overlay", 2, 0, 0, 0, 0, "Has Overlay",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilities_has_overlay_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_spacing, (PropertyRNA *)&rna_BrushCapabilities_has_overlay,
	-1, "has_random_texture_angle", 2, 0, 0, 0, 0, "Has Random Texture Angle",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilities_has_random_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilities_has_spacing = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_smooth_stroke, (PropertyRNA *)&rna_BrushCapabilities_has_random_texture_angle,
	-1, "has_spacing", 2, 0, 0, 0, 0, "Has Spacing",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilities_has_spacing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke = {
	{nullptr, (PropertyRNA *)&rna_BrushCapabilities_has_spacing,
	-1, "has_smooth_stroke", 2, 0, 0, 0, 0, "Has Smooth Stroke",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilities_has_smooth_stroke_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushCapabilities = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesSculpt, (ContainerRNA *)&RNA_Brush,
	nullptr,
	{(PropertyRNA *)&rna_BrushCapabilities_rna_properties, (PropertyRNA *)&rna_BrushCapabilities_has_smooth_stroke}},
	"BrushCapabilities", nullptr, nullptr, 516, nullptr, "Brush Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushCapabilities_rna_properties,
	nullptr,
	&RNA_Brush,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Sculpt Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesSculpt_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_rna_properties_begin, BrushCapabilitiesSculpt_rna_properties_next, BrushCapabilitiesSculpt_rna_properties_end, BrushCapabilitiesSculpt_rna_properties_get, nullptr, nullptr, BrushCapabilitiesSculpt_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesSculpt_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_accumulate, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_accumulate = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_auto_smooth, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_type,
	-1, "has_accumulate", 2, 0, 0, 0, 0, "Has Accumulate",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_accumulate_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_auto_smooth = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_topology_rake, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_accumulate,
	-1, "has_auto_smooth", 2, 0, 0, 0, 0, "Has Auto Smooth",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_auto_smooth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_topology_rake = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_height, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_auto_smooth,
	-1, "has_topology_rake", 2, 0, 0, 0, 0, "Has Topology Rake",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_topology_rake_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_height = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_jitter, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_topology_rake,
	-1, "has_height", 2, 0, 0, 0, 0, "Has Height",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_jitter = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_normal_weight, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_height,
	-1, "has_jitter", 2, 0, 0, 0, 0, "Has Jitter",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_jitter_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_normal_weight = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_rake_factor, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_jitter,
	-1, "has_normal_weight", 2, 0, 0, 0, 0, "Has Crease/Pinch Factor",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_normal_weight_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_rake_factor = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_persistence, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_normal_weight,
	-1, "has_rake_factor", 2, 0, 0, 0, 0, "Has Rake Factor",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_rake_factor_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_persistence = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_pinch_factor, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_rake_factor,
	-1, "has_persistence", 2, 0, 0, 0, 0, "Has Persistence",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_persistence_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_pinch_factor = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_plane_offset, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_persistence,
	-1, "has_pinch_factor", 2, 0, 0, 0, 0, "Has Pinch Factor",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_pinch_factor_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_offset = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_random_texture_angle, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_pinch_factor,
	-1, "has_plane_offset", 2, 0, 0, 0, 0, "Has Plane Offset",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_plane_offset_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_sculpt_plane, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_plane_offset,
	-1, "has_random_texture_angle", 2, 0, 0, 0, 0, "Has Random Texture Angle",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_random_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_sculpt_plane = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_color, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_random_texture_angle,
	-1, "has_sculpt_plane", 2, 0, 0, 0, 0, "Has Sculpt Plane",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_sculpt_plane_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_color = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_secondary_color, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_sculpt_plane,
	-1, "has_color", 2, 0, 0, 0, 0, "Has Color",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_secondary_color = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_smooth_stroke, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_color,
	-1, "has_secondary_color", 2, 0, 0, 0, 0, "Has Secondary Color",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_secondary_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_smooth_stroke = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_space_attenuation, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_secondary_color,
	-1, "has_smooth_stroke", 2, 0, 0, 0, 0, "Has Smooth Stroke",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_smooth_stroke_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_space_attenuation = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_strength_pressure, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_smooth_stroke,
	-1, "has_space_attenuation", 2, 0, 0, 0, 0, "Has Space Attenuation",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_space_attenuation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_strength_pressure = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_direction, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_space_attenuation,
	-1, "has_strength_pressure", 2, 0, 0, 0, 0, "Has Strength Pressure",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_strength_pressure_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_direction = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_gravity, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_strength_pressure,
	-1, "has_direction", 2, 0, 0, 0, 0, "Has Direction",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_direction_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_gravity = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_tilt, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_direction,
	-1, "has_gravity", 2, 0, 0, 0, 0, "Has Gravity",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_gravity_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_tilt = {
	{nullptr, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_gravity,
	-1, "has_tilt", 2, 0, 0, 0, 0, "Has Tilt",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesSculpt_has_tilt_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushCapabilitiesSculpt = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesImagePaint, (ContainerRNA *)&RNA_BrushCapabilities,
	nullptr,
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_tilt}},
	"BrushCapabilitiesSculpt", nullptr, nullptr, 516, nullptr, "Sculpt Capabilities",
	"Read-only indications of which brush operations are supported by the current sculpt tool",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties,
	nullptr,
	&RNA_Brush,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Image Paint Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesImagePaint_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesImagePaint_rna_properties_begin, BrushCapabilitiesImagePaint_rna_properties_next, BrushCapabilitiesImagePaint_rna_properties_end, BrushCapabilitiesImagePaint_rna_properties_get, nullptr, nullptr, BrushCapabilitiesImagePaint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesImagePaint_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_accumulate, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesImagePaint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_accumulate = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_space_attenuation, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_type,
	-1, "has_accumulate", 2, 0, 0, 0, 0, "Has Accumulate",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesImagePaint_has_accumulate_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_space_attenuation = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_radius, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_accumulate,
	-1, "has_space_attenuation", 2, 0, 0, 0, 0, "Has Space Attenuation",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesImagePaint_has_space_attenuation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_radius = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_color, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_space_attenuation,
	-1, "has_radius", 2, 0, 0, 0, 0, "Has Radius",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesImagePaint_has_radius_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_color = {
	{nullptr, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_radius,
	-1, "has_color", 2, 0, 0, 0, 0, "Has Color",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesImagePaint_has_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushCapabilitiesImagePaint = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesVertexPaint, (ContainerRNA *)&RNA_BrushCapabilitiesSculpt,
	nullptr,
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_color}},
	"BrushCapabilitiesImagePaint", nullptr, nullptr, 516, nullptr, "Image Paint Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties,
	nullptr,
	&RNA_Brush,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Vertex Paint Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesVertexPaint_rna_properties_begin, BrushCapabilitiesVertexPaint_rna_properties_next, BrushCapabilitiesVertexPaint_rna_properties_end, BrushCapabilitiesVertexPaint_rna_properties_get, nullptr, nullptr, BrushCapabilitiesVertexPaint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_has_color, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesVertexPaint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesVertexPaint_has_color = {
	{nullptr, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_type,
	-1, "has_color", 2, 0, 0, 0, 0, "Has Color",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesVertexPaint_has_color_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushCapabilitiesVertexPaint = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesWeightPaint, (ContainerRNA *)&RNA_BrushCapabilitiesImagePaint,
	nullptr,
	{(PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_has_color}},
	"BrushCapabilitiesVertexPaint", nullptr, nullptr, 516, nullptr, "Vertex Paint Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties,
	nullptr,
	&RNA_Brush,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Weight Paint Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesWeightPaint_rna_properties_begin, BrushCapabilitiesWeightPaint_rna_properties_next, BrushCapabilitiesWeightPaint_rna_properties_end, BrushCapabilitiesWeightPaint_rna_properties_get, nullptr, nullptr, BrushCapabilitiesWeightPaint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_has_weight, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesWeightPaint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesWeightPaint_has_weight = {
	{nullptr, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_type,
	-1, "has_weight", 2, 0, 0, 0, 0, "Has Weight",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCapabilitiesWeightPaint_has_weight_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushCapabilitiesWeightPaint = {
	{(ContainerRNA *)&RNA_BrushGpencilSettings, (ContainerRNA *)&RNA_BrushCapabilitiesVertexPaint,
	nullptr,
	{(PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_has_weight}},
	"BrushCapabilitiesWeightPaint", nullptr, nullptr, 516, nullptr, "Weight Paint Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties,
	nullptr,
	&RNA_Brush,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Brush Settings */
CollectionPropertyRNA rna_BrushGpencilSettings_rna_properties = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_rna_properties_begin, BrushGpencilSettings_rna_properties_next, BrushGpencilSettings_rna_properties_end, BrushGpencilSettings_rna_properties_get, nullptr, nullptr, BrushGpencilSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushGpencilSettings_rna_type = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_strength, (PropertyRNA *)&rna_BrushGpencilSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_BrushGpencilSettings_pen_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_jitter, (PropertyRNA *)&rna_BrushGpencilSettings_rna_type,
	-1, "pen_strength", 1, 0, 0, 4, 0, "Strength",
	"Color strength for new strokes (affect alpha factor of color)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_strength), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_pen_strength_get, BrushGpencilSettings_pen_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_pen_jitter = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_pen_strength,
	-1, "pen_jitter", 1, 0, 0, 4, 0, "Jitter",
	"Jitter factor for new strokes",
	0, "Brush",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_jitter), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_pen_jitter_get, BrushGpencilSettings_pen_jitter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_random_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_strength, (PropertyRNA *)&rna_BrushGpencilSettings_pen_jitter,
	-1, "random_pressure", 1, 0, 0, 4, 0, "Pressure Randomness",
	"Randomness factor for pressure in new strokes",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_random_press), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_random_pressure_get, BrushGpencilSettings_random_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_random_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_angle, (PropertyRNA *)&rna_BrushGpencilSettings_random_pressure,
	-1, "random_strength", 1, 0, 0, 4, 0, "Strength Randomness",
	"Randomness factor strength in new strokes",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_random_strength), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_random_strength_get, BrushGpencilSettings_random_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_angle = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_angle_factor, (PropertyRNA *)&rna_BrushGpencilSettings_random_strength,
	-1, "angle", 1, 0, 0, 4, 0, "Angle",
	"Direction of the stroke at which brush gives maximal thickness (0° for horizontal)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_angle), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_angle_get, BrushGpencilSettings_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_angle_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_factor, (PropertyRNA *)&rna_BrushGpencilSettings_angle,
	-1, "angle_factor", 1, 0, 0, 4, 0, "Angle Factor",
	"Reduce brush thickness by this factor when stroke is perpendicular to \'Angle\' direction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_angle_factor), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_angle_factor_get, BrushGpencilSettings_angle_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_pen_smooth_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_steps, (PropertyRNA *)&rna_BrushGpencilSettings_angle_factor,
	-1, "pen_smooth_factor", 1, 0, 0, 4, 0, "Smooth",
	"Amount of smoothing to apply after finish newly created strokes, to reduce jitter/noise",
	0, "Amount",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_smoothfac), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_pen_smooth_factor_get, BrushGpencilSettings_pen_smooth_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_BrushGpencilSettings_pen_smooth_steps = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_subdivision_steps, (PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_factor,
	-1, "pen_smooth_steps", 1, 0, 0, 4, 0, "Iterations",
	"Number of times to smooth newly created strokes",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_smoothlvl), (RawPropertyType)1, nullptr},
	BrushGpencilSettings_pen_smooth_steps_get, BrushGpencilSettings_pen_smooth_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 0, nullptr
};

IntPropertyRNA rna_BrushGpencilSettings_pen_subdivision_steps = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_simplify_factor, (PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_steps,
	-1, "pen_subdivision_steps", 1, 0, 0, 4, 0, "Subdivision Steps",
	"Number of times to subdivide newly created strokes, for less jagged strokes",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_subdivide), (RawPropertyType)1, nullptr},
	BrushGpencilSettings_pen_subdivision_steps_get, BrushGpencilSettings_pen_subdivision_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 3, 0, 3, 1, 0, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_simplify_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_sensitivity, (PropertyRNA *)&rna_BrushGpencilSettings_pen_subdivision_steps,
	-1, "simplify_factor", 1, 0, 0, 4, 0, "Simplify",
	"Factor of Simplify using adaptive algorithm",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, simplify_f), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_simplify_factor_get, BrushGpencilSettings_simplify_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_sensitivity = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_strength, (PropertyRNA *)&rna_BrushGpencilSettings_simplify_factor,
	-1, "curve_sensitivity", 8388608, 0, 0, 0, 0, "Curve Sensitivity",
	"Curve used for the sensitivity",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_sensitivity_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_jitter, (PropertyRNA *)&rna_BrushGpencilSettings_curve_sensitivity,
	-1, "curve_strength", 8388608, 0, 0, 0, 0, "Curve Strength",
	"Curve used for the strength",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_strength_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_jitter = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_curve_strength,
	-1, "curve_jitter", 8388608, 0, 0, 0, 0, "Curve Jitter",
	"Curve used for the jitter effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_jitter_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_strength, (PropertyRNA *)&rna_BrushGpencilSettings_curve_jitter,
	-1, "curve_random_pressure", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_random_pressure_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_uv, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_pressure,
	-1, "curve_random_strength", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_random_strength_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_hue, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_strength,
	-1, "curve_random_uv", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_random_uv_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_hue = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_saturation, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_uv,
	-1, "curve_random_hue", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_random_hue_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_saturation = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_value, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_hue,
	-1, "curve_random_saturation", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_random_saturation_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_value = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_threshold, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_saturation,
	-1, "curve_random_value", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_curve_random_value_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

FloatPropertyRNA rna_BrushGpencilSettings_fill_threshold = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_factor, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_value,
	-1, "fill_threshold", 1, 0, 0, 4, 0, "Threshold",
	"Threshold to consider color transparent for filling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_threshold), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_fill_threshold_get, BrushGpencilSettings_fill_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_fill_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_simplify_level, (PropertyRNA *)&rna_BrushGpencilSettings_fill_threshold,
	-1, "fill_factor", 1, 0, 0, 4, 0, "Precision",
	"Factor for fill boundary accuracy, higher values are more accurate but slower",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_factor), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_fill_factor_get, BrushGpencilSettings_fill_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0500000007f, 8.0f, 0.0500000007f, 8.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_BrushGpencilSettings_fill_simplify_level = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_uv_random, (PropertyRNA *)&rna_BrushGpencilSettings_fill_factor,
	-1, "fill_simplify_level", 1, 0, 0, 4, 0, "Simplify",
	"Number of simplify steps (large values reduce fill accuracy)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_simplylvl), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_fill_simplify_level_get, BrushGpencilSettings_fill_simplify_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 10, 1, 0, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_uv_random = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_hardness, (PropertyRNA *)&rna_BrushGpencilSettings_fill_simplify_level,
	-1, "uv_random", 1, 0, 0, 4, 0, "UV Random",
	"Random factor for auto-generated UV rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, uv_random), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_uv_random_get, BrushGpencilSettings_uv_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_hardness = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_aspect, (PropertyRNA *)&rna_BrushGpencilSettings_uv_random,
	-1, "hardness", 1, 0, 0, 4, 0, "Hardness",
	"Gradient from the center of Dot and Box strokes (set to 1 for a solid stroke)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, hardness), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_hardness_get, BrushGpencilSettings_hardness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

static float rna_BrushGpencilSettings_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_BrushGpencilSettings_aspect = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_input_samples, (PropertyRNA *)&rna_BrushGpencilSettings_hardness,
	-1, "aspect", 1, 0, 0, 4, 0, "Aspect",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, aspect_ratio), (RawPropertyType)5, nullptr},
	nullptr, nullptr, BrushGpencilSettings_aspect_get, BrushGpencilSettings_aspect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 1.0f, rna_BrushGpencilSettings_aspect_default
};

IntPropertyRNA rna_BrushGpencilSettings_input_samples = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_active_smooth_factor, (PropertyRNA *)&rna_BrushGpencilSettings_aspect,
	-1, "input_samples", 1, 0, 0, 4, 0, "Input Samples",
	"Generate intermediate points for very fast mouse movements. Set to 0 to disable",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, input_samples), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_input_samples_get, BrushGpencilSettings_input_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 10, 1, 0, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_active_smooth_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_eraser_strength_factor, (PropertyRNA *)&rna_BrushGpencilSettings_input_samples,
	-1, "active_smooth_factor", 1, 0, 0, 4, 0, "Active Smooth",
	"Amount of smoothing while drawing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, active_smooth), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_active_smooth_factor_get, BrushGpencilSettings_active_smooth_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_eraser_strength_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_eraser_thickness_factor, (PropertyRNA *)&rna_BrushGpencilSettings_active_smooth_factor,
	-1, "eraser_strength_factor", 1, 0, 0, 4, 0, "Affect Stroke Strength",
	"Amount of erasing for strength",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, era_strength_f), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_eraser_strength_factor_get, BrushGpencilSettings_eraser_strength_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_eraser_thickness_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_paint_icon, (PropertyRNA *)&rna_BrushGpencilSettings_eraser_strength_factor,
	-1, "eraser_thickness_factor", 1, 0, 0, 4, 0, "Affect Stroke Thickness",
	"Amount of erasing for thickness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, era_thickness_f), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_eraser_thickness_factor_get, BrushGpencilSettings_eraser_thickness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, nullptr
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_paint_icon_items[13] = {
	{1, "PENCIL", 817, "Pencil", ""},
	{2, "PEN", 818, "Pen", ""},
	{3, "INK", 819, "Ink", ""},
	{4, "INKNOISE", 820, "Ink Noise", ""},
	{5, "BLOCK", 821, "Block", ""},
	{6, "MARKER", 822, "Marker", ""},
	{11, "AIRBRUSH", 824, "Airbrush", ""},
	{12, "CHISEL", 825, "Chisel", ""},
	{7, "FILL", 823, "Fill", ""},
	{8, "SOFT", 826, "Eraser Soft", ""},
	{9, "HARD", 827, "Eraser Hard", ""},
	{10, "STROKE", 828, "Eraser Stroke", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_paint_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_sculpt_icon, (PropertyRNA *)&rna_BrushGpencilSettings_eraser_thickness_factor,
	-1, "gpencil_paint_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_gpencil_paint_icon_get, BrushGpencilSettings_gpencil_paint_icon_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_gpencil_paint_icon_items, 12, 1
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_sculpt_icon_items[10] = {
	{19, "SMOOTH", 807, "Smooth", ""},
	{20, "THICKNESS", 808, "Thickness", ""},
	{21, "STRENGTH", 809, "Strength", ""},
	{22, "RANDOMIZE", 814, "Randomize", ""},
	{23, "GRAB", 810, "Grab", ""},
	{24, "PUSH", 811, "Push", ""},
	{25, "TWIST", 812, "Twist", ""},
	{26, "PINCH", 813, "Pinch", ""},
	{27, "CLONE", 815, "Clone", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_sculpt_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_weight_icon, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_paint_icon,
	-1, "gpencil_sculpt_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_gpencil_sculpt_icon_get, BrushGpencilSettings_gpencil_sculpt_icon_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_gpencil_sculpt_icon_items, 9, 19
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_weight_icon_items[5] = {
	{28, "DRAW", 816, "Draw", ""},
	{29, "BLUR", 781, "Blur", ""},
	{30, "AVERAGE", 781, "Average", ""},
	{31, "SMEAR", 781, "Smear", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_weight_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_vertex_icon, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_sculpt_icon,
	-1, "gpencil_weight_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_gpencil_weight_icon_get, BrushGpencilSettings_gpencil_weight_icon_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_gpencil_weight_icon_items, 4, 28
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_vertex_icon_items[6] = {
	{14, "DRAW", 792, "Draw", ""},
	{15, "BLUR", 781, "Blur", ""},
	{16, "AVERAGE", 781, "Average", ""},
	{17, "SMEAR", 781, "Smear", ""},
	{18, "REPLACE", 792, "Replace", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_vertex_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_vertex_mode, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_weight_icon,
	-1, "gpencil_vertex_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_gpencil_vertex_icon_get, BrushGpencilSettings_gpencil_vertex_icon_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_gpencil_vertex_icon_items, 5, 14
};

static const EnumPropertyItem rna_BrushGpencilSettings_vertex_mode_items[4] = {
	{0, "STROKE", 0, "Stroke", "Vertex Color affects to Stroke only"},
	{1, "FILL", 0, "Fill", "Vertex Color affects to Fill only"},
	{2, "BOTH", 0, "Stroke & Fill", "Vertex Color affects to Stroke and Fill"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_vertex_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_vertex_color_factor, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_vertex_icon,
	-1, "vertex_mode", 1, 0, 0, 4, 0, "Mode Type",
	"Defines how vertex color affect to the strokes",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, vertex_mode), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_vertex_mode_get, BrushGpencilSettings_vertex_mode_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_vertex_mode_items, 3, 0
};

FloatPropertyRNA rna_BrushGpencilSettings_vertex_color_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_hue_factor, (PropertyRNA *)&rna_BrushGpencilSettings_vertex_mode,
	-1, "vertex_color_factor", 1, 0, 0, 4, 0, "Vertex Color Factor",
	"Factor used to mix vertex color to get final color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, vertex_factor), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_vertex_color_factor_get, BrushGpencilSettings_vertex_color_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_random_hue_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_saturation_factor, (PropertyRNA *)&rna_BrushGpencilSettings_vertex_color_factor,
	-1, "random_hue_factor", 1, 0, 0, 4, 0, "Hue",
	"Random factor to modify original hue",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, random_hue), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_random_hue_factor_get, BrushGpencilSettings_random_hue_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_random_saturation_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_value_factor, (PropertyRNA *)&rna_BrushGpencilSettings_random_hue_factor,
	-1, "random_saturation_factor", 1, 0, 0, 4, 0, "Saturation",
	"Random factor to modify original saturation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, random_saturation), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_random_saturation_factor_get, BrushGpencilSettings_random_saturation_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_random_value_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_extend_stroke_factor, (PropertyRNA *)&rna_BrushGpencilSettings_random_saturation_factor,
	-1, "random_value_factor", 1, 0, 0, 4, 0, "Value",
	"Random factor to modify original value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, random_value), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_random_value_factor_get, BrushGpencilSettings_random_value_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_extend_stroke_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_extend_mode, (PropertyRNA *)&rna_BrushGpencilSettings_random_value_factor,
	-1, "extend_stroke_factor", 1, 0, 0, 4, 0, "Closure Size",
	"Strokes end extension for closing gaps, use zero to disable",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_extend_fac), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_extend_stroke_factor_get, BrushGpencilSettings_extend_stroke_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_extend_mode_items[3] = {
	{0, "EXTEND", 0, "Extend", "Extend strokes in straight lines"},
	{1, "RADIUS", 0, "Radius", "Connect endpoints that are close together"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_extend_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_dilate, (PropertyRNA *)&rna_BrushGpencilSettings_extend_stroke_factor,
	-1, "fill_extend_mode", 1, 0, 0, 4, 0, "Closure Mode",
	"Types of stroke extensions used for closing gaps",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_extend_mode), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_fill_extend_mode_get, BrushGpencilSettings_fill_extend_mode_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_extend_mode_items, 2, 0
};

IntPropertyRNA rna_BrushGpencilSettings_dilate = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_outline_thickness_factor, (PropertyRNA *)&rna_BrushGpencilSettings_fill_extend_mode,
	-1, "dilate", 1, 0, 0, 4, 0, "Dilate/Contract",
	"Number of pixels to expand or contract fill area",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, dilate_pixels), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_dilate_get, BrushGpencilSettings_dilate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -40, 40, -40, 40, 1, 1, nullptr
};

FloatPropertyRNA rna_BrushGpencilSettings_outline_thickness_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_dilate,
	-1, "outline_thickness_factor", 1, 0, 0, 4, 0, "Thickness",
	"Thickness of the outline stroke relative to current brush thickness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, outline_fac), (RawPropertyType)5, nullptr},
	BrushGpencilSettings_outline_thickness_factor_get, BrushGpencilSettings_outline_thickness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_strength_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_outline_thickness_factor,
	-1, "use_pressure", 1, 0, 0, 0, 0, "Use Pressure",
	"Use tablet pressure",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_pressure_get, BrushGpencilSettings_use_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_strength_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_jitter_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_use_pressure,
	-1, "use_strength_pressure", 1, 0, 0, 0, 0, "Use Pressure Strength",
	"Use tablet pressure for color strength",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_strength_pressure_get, BrushGpencilSettings_use_strength_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_jitter_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_hue, (PropertyRNA *)&rna_BrushGpencilSettings_use_strength_pressure,
	-1, "use_jitter_pressure", 1, 0, 0, 0, 0, "Use Pressure Jitter",
	"Use tablet pressure for jitter",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_jitter_pressure_get, BrushGpencilSettings_use_jitter_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_hue = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_sat, (PropertyRNA *)&rna_BrushGpencilSettings_use_jitter_pressure,
	-1, "use_stroke_random_hue", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_stroke_random_hue_get, BrushGpencilSettings_use_stroke_random_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_sat = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_val, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_hue,
	-1, "use_stroke_random_sat", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_stroke_random_sat_get, BrushGpencilSettings_use_stroke_random_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_val = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_radius, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_sat,
	-1, "use_stroke_random_val", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_stroke_random_val_get, BrushGpencilSettings_use_stroke_random_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_radius = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_strength, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_val,
	-1, "use_stroke_random_radius", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_stroke_random_radius_get, BrushGpencilSettings_use_stroke_random_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_uv, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_radius,
	-1, "use_stroke_random_strength", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_stroke_random_strength_get, BrushGpencilSettings_use_stroke_random_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_hue, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_strength,
	-1, "use_stroke_random_uv", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_stroke_random_uv_get, BrushGpencilSettings_use_stroke_random_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_hue = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_sat, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_uv,
	-1, "use_random_press_hue", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_random_press_hue_get, BrushGpencilSettings_use_random_press_hue_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_sat = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_val, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_hue,
	-1, "use_random_press_sat", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_random_press_sat_get, BrushGpencilSettings_use_random_press_sat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_val = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_radius, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_sat,
	-1, "use_random_press_val", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_random_press_val_get, BrushGpencilSettings_use_random_press_val_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_radius = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_strength, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_val,
	-1, "use_random_press_radius", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_random_press_radius_get, BrushGpencilSettings_use_random_press_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_uv, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_radius,
	-1, "use_random_press_strength", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_random_press_strength_get, BrushGpencilSettings_use_random_press_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_stabilizer, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_strength,
	-1, "use_random_press_uv", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_random_press_uv_get, BrushGpencilSettings_use_random_press_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_stabilizer = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_eraser_mode, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_uv,
	-1, "use_settings_stabilizer", 1, 0, 0, 0, 0, "Use Stabilizer",
	"Draw lines with a delay to allow smooth strokes. Press Shift key to override while drawing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_settings_stabilizer_get, BrushGpencilSettings_use_settings_stabilizer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static const EnumPropertyItem rna_BrushGpencilSettings_eraser_mode_items[4] = {
	{0, "SOFT", 0, "Dissolve", "Erase strokes, fading their points strength and thickness"},
	{1, "HARD", 0, "Point", "Erase stroke points"},
	{2, "STROKE", 0, "Stroke", "Erase entire strokes"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_eraser_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_caps_type, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_stabilizer,
	-1, "eraser_mode", 1, 0, 0, 4, 0, "Mode",
	"Eraser Mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_BrushGpencilSettings_eraser_mode_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, eraser_mode), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_eraser_mode_get, BrushGpencilSettings_eraser_mode_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_eraser_mode_items, 3, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_caps_type_items[3] = {
	{0, "ROUND", 616, "Round", ""},
	{1, "FLAT", 615, "Flat", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_caps_type = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_draw_mode, (PropertyRNA *)&rna_BrushGpencilSettings_eraser_mode,
	-1, "caps_type", 1, 0, 0, 0, 0, "Caps Type",
	"The shape of the start and end of the stroke",
	0, "GPencil",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_caps_type_get, BrushGpencilSettings_caps_type_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_caps_type_items, 2, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_draw_mode_items[4] = {
	{0, "BOTH", 0, "All", "Use both visible strokes and edit lines as fill boundary limits"},
	{1, "STROKE", 0, "Strokes", "Use visible strokes as fill boundary limits"},
	{2, "CONTROL", 0, "Edit Lines", "Use edit lines as fill boundary limits"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_draw_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_layer_mode, (PropertyRNA *)&rna_BrushGpencilSettings_caps_type,
	-1, "fill_draw_mode", 1, 0, 0, 4, 0, "Mode",
	"Mode to draw boundary limits",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_draw_mode), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_fill_draw_mode_get, BrushGpencilSettings_fill_draw_mode_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_draw_mode_items, 3, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_layer_mode_items[7] = {
	{0, "VISIBLE", 0, "Visible", "Visible layers"},
	{1, "ACTIVE", 0, "Active", "Only active layer"},
	{4, "ABOVE", 0, "Layer Above", "Layer above active"},
	{5, "BELOW", 0, "Layer Below", "Layer below active"},
	{2, "ALL_ABOVE", 0, "All Above", "All layers above active"},
	{3, "ALL_BELOW", 0, "All Below", "All layers below active"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_layer_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_direction, (PropertyRNA *)&rna_BrushGpencilSettings_fill_draw_mode,
	-1, "fill_layer_mode", 1, 0, 0, 4, 0, "Layer Mode",
	"Layers used as boundaries",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_layer_mode), (RawPropertyType)1, nullptr},
	BrushGpencilSettings_fill_layer_mode_get, BrushGpencilSettings_fill_layer_mode_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_layer_mode_items, 6, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_direction_items[3] = {
	{0, "NORMAL", 31, "Normal", "Fill internal area"},
	{512, "INVERT", 32, "Inverted", "Fill inverted area"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_direction = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pin_draw_mode, (PropertyRNA *)&rna_BrushGpencilSettings_fill_layer_mode,
	-1, "fill_direction", 1, 0, 0, 4, 0, "Direction",
	"Direction of the fill",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_direction), (RawPropertyType)1, nullptr},
	BrushGpencilSettings_fill_direction_get, BrushGpencilSettings_fill_direction_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_fill_direction_items, 2, 0
};

BoolPropertyRNA rna_BrushGpencilSettings_pin_draw_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_brush_draw_mode, (PropertyRNA *)&rna_BrushGpencilSettings_fill_direction,
	-1, "pin_draw_mode", 4198401, 0, 0, 0, 0, "Pin Mode",
	"Pin the mode to the brush",
	42, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_GPencilBrush_pin_mode_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_pin_draw_mode_get, BrushGpencilSettings_pin_draw_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_BrushGpencilSettings_brush_draw_mode_items[4] = {
	{0, "ACTIVE", 0, "Active", "Use current mode"},
	{1, "MATERIAL", 0, "Material", "Use always material mode"},
	{2, "VERTEXCOLOR", 0, "Vertex Color", "Use always Vertex Color mode"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_brush_draw_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_trim, (PropertyRNA *)&rna_BrushGpencilSettings_pin_draw_mode,
	-1, "brush_draw_mode", 1, 0, 0, 4, 0, "Mode",
	"Preselected mode when using this brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, brush_draw_mode), (RawPropertyType)1, nullptr},
	BrushGpencilSettings_brush_draw_mode_get, BrushGpencilSettings_brush_draw_mode_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_brush_draw_mode_items, 3, 0
};

BoolPropertyRNA rna_BrushGpencilSettings_use_trim = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_outline, (PropertyRNA *)&rna_BrushGpencilSettings_brush_draw_mode,
	-1, "use_trim", 1, 0, 0, 0, 0, "Trim Stroke Ends",
	"Trim intersecting stroke ends",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_trim_get, BrushGpencilSettings_use_trim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_outline = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_direction, (PropertyRNA *)&rna_BrushGpencilSettings_use_trim,
	-1, "use_settings_outline", 1, 0, 0, 0, 0, "Outline",
	"Convert stroke to perimeter",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_settings_outline_get, BrushGpencilSettings_use_settings_outline_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_BrushGpencilSettings_direction_items[3] = {
	{0, "ADD", 31, "Add", "Add effect of brush"},
	{512, "SUBTRACT", 32, "Subtract", "Subtract effect of brush"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushGpencilSettings_direction = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_position, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_outline,
	-1, "direction", 1, 0, 0, 4, 0, "Direction",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, sculpt_flag), (RawPropertyType)0, nullptr},
	BrushGpencilSettings_direction_get, BrushGpencilSettings_direction_set, nullptr, nullptr, nullptr, rna_BrushGpencilSettings_direction_items, 2, 0
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_position = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_strength, (PropertyRNA *)&rna_BrushGpencilSettings_direction,
	-1, "use_edit_position", 1, 0, 0, 0, 0, "Affect Position",
	"The brush affects the position of the point",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_edit_position_get, BrushGpencilSettings_use_edit_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_thickness, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_position,
	-1, "use_edit_strength", 1, 0, 0, 0, 0, "Affect Strength",
	"The brush affects the color strength of the point",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_edit_strength_get, BrushGpencilSettings_use_edit_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_thickness = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_uv, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_strength,
	-1, "use_edit_thickness", 1, 0, 0, 0, 0, "Affect Thickness",
	"The brush affects the thickness of the point",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_edit_thickness_get, BrushGpencilSettings_use_edit_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_material, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_thickness,
	-1, "use_edit_uv", 1, 0, 0, 0, 0, "Affect UV",
	"The brush affects the UV rotation of the point",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_edit_uv_get, BrushGpencilSettings_use_edit_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BrushGpencilSettings_material = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_material_alt, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_uv,
	-1, "material", 13631681, 0, 0, 0, 0, "Material",
	"Material used for strokes drawn using this brush",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Brush_material_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_material_get, BrushGpencilSettings_material_set, nullptr, rna_BrushGpencilSettings_material_poll,&RNA_Material
};

PointerPropertyRNA rna_BrushGpencilSettings_material_alt = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_fill_boundary, (PropertyRNA *)&rna_BrushGpencilSettings_material,
	-1, "material_alt", 13631681, 0, 0, 0, 0, "Material",
	"Material used for secondary uses for this brush",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Brush_material_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_material_alt_get, BrushGpencilSettings_material_alt_set, nullptr, rna_BrushGpencilSettings_material_poll,&RNA_Material
};

BoolPropertyRNA rna_BrushGpencilSettings_show_fill_boundary = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_fill_extend, (PropertyRNA *)&rna_BrushGpencilSettings_material_alt,
	-1, "show_fill_boundary", 1, 0, 0, 0, 0, "Show Lines",
	"Show help lines for filling to see boundaries",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_show_fill_boundary_get, BrushGpencilSettings_show_fill_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_show_fill_extend = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_collide_strokes, (PropertyRNA *)&rna_BrushGpencilSettings_show_fill_boundary,
	-1, "show_fill_extend", 1, 0, 0, 0, 0, "Visual Aids",
	"Show help lines for stroke extension",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_show_fill_extend_get, BrushGpencilSettings_show_fill_extend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_collide_strokes = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_fill, (PropertyRNA *)&rna_BrushGpencilSettings_show_fill_extend,
	-1, "use_collide_strokes", 1, 0, 0, 0, 0, "Strokes Collision",
	"Check if extend lines collide with strokes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_collide_strokes_get, BrushGpencilSettings_use_collide_strokes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_show_fill = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_fill_limit, (PropertyRNA *)&rna_BrushGpencilSettings_use_collide_strokes,
	-1, "show_fill", 1, 0, 0, 0, 0, "Show Fill",
	"Show transparent lines to use as boundary for filling",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_show_fill_get, BrushGpencilSettings_show_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_fill_limit = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_default_eraser, (PropertyRNA *)&rna_BrushGpencilSettings_show_fill,
	-1, "use_fill_limit", 1, 0, 0, 0, 0, "Limit to Viewport",
	"Fill only visible areas in viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_fill_limit_get, BrushGpencilSettings_use_fill_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_default_eraser = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_postprocess, (PropertyRNA *)&rna_BrushGpencilSettings_use_fill_limit,
	-1, "use_default_eraser", 4097, 0, 0, 0, 0, "Default Eraser",
	"Use this brush when enable eraser with fast switch key",
	42, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_BrushGpencilSettings_default_eraser_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_default_eraser_get, BrushGpencilSettings_use_default_eraser_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_postprocess = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_random, (PropertyRNA *)&rna_BrushGpencilSettings_use_default_eraser,
	-1, "use_settings_postprocess", 1, 0, 0, 0, 0, "Use Post-Process Settings",
	"Additional post processing options for new strokes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_settings_postprocess_get, BrushGpencilSettings_use_settings_postprocess_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_random = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_material_pin, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_postprocess,
	-1, "use_settings_random", 1, 0, 0, 0, 0, "Random Settings",
	"Random brush settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_settings_random_get, BrushGpencilSettings_use_settings_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_material_pin = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_lasso, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_random,
	-1, "use_material_pin", 4198401, 0, 0, 0, 0, "Pin Material",
	"Keep material assigned to brush",
	42, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_BrushGpencilSettings_use_material_pin_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_material_pin_get, BrushGpencilSettings_use_material_pin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_show_lasso = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_occlude_eraser, (PropertyRNA *)&rna_BrushGpencilSettings_use_material_pin,
	-1, "show_lasso", 1, 0, 0, 0, 0, "Show Lasso",
	"Do not display fill color while drawing the stroke",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_show_lasso_get, BrushGpencilSettings_show_lasso_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_occlude_eraser = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_keep_caps_eraser, (PropertyRNA *)&rna_BrushGpencilSettings_show_lasso,
	-1, "use_occlude_eraser", 1, 0, 0, 0, 0, "Occlude Eraser",
	"Erase only strokes visible and not occluded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_occlude_eraser_get, BrushGpencilSettings_use_occlude_eraser_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_keep_caps_eraser = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_active_layer_only, (PropertyRNA *)&rna_BrushGpencilSettings_use_occlude_eraser,
	-1, "use_keep_caps_eraser", 1, 0, 0, 0, 0, "Keep caps",
	"Keep the caps as they are and don\'t flatten them when erasing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_keep_caps_eraser_get, BrushGpencilSettings_use_keep_caps_eraser_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushGpencilSettings_use_active_layer_only = {
	{nullptr, (PropertyRNA *)&rna_BrushGpencilSettings_use_keep_caps_eraser,
	-1, "use_active_layer_only", 1, 0, 0, 0, 0, "Active Layer",
	"Only edit the active layer of the object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushGpencilSettings_use_active_layer_only_get, BrushGpencilSettings_use_active_layer_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushGpencilSettings = {
	{(ContainerRNA *)&RNA_BrushCurvesSculptSettings, (ContainerRNA *)&RNA_BrushCapabilitiesWeightPaint,
	nullptr,
	{(PropertyRNA *)&rna_BrushGpencilSettings_rna_properties, (PropertyRNA *)&rna_BrushGpencilSettings_use_active_layer_only}},
	"BrushGpencilSettings", nullptr, nullptr, 516, nullptr, "Grease Pencil Brush Settings",
	"Settings for grease pencil brush",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushGpencilSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_BrushGpencilSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Curves Sculpt Brush Settings */
CollectionPropertyRNA rna_BrushCurvesSculptSettings_rna_properties = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_rna_properties_begin, BrushCurvesSculptSettings_rna_properties_next, BrushCurvesSculptSettings_rna_properties_end, BrushCurvesSculptSettings_rna_properties_get, nullptr, nullptr, BrushCurvesSculptSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BrushCurvesSculptSettings_rna_type = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_add_amount, (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_BrushCurvesSculptSettings_add_amount = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_points_per_curve, (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_type,
	-1, "add_amount", 3, 0, 0, 4, 0, "Count",
	"Number of curves added by the Add brush",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, add_amount), (RawPropertyType)0, nullptr},
	BrushCurvesSculptSettings_add_amount_get, BrushCurvesSculptSettings_add_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_BrushCurvesSculptSettings_points_per_curve = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_scale_uniform, (PropertyRNA *)&rna_BrushCurvesSculptSettings_add_amount,
	-1, "points_per_curve", 3, 0, 0, 4, 0, "Points per Curve",
	"Number of control points in a newly added curve",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, points_per_curve), (RawPropertyType)0, nullptr},
	BrushCurvesSculptSettings_points_per_curve_get, BrushCurvesSculptSettings_points_per_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 2, INT_MAX, 2, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_scale_uniform = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_length, (PropertyRNA *)&rna_BrushCurvesSculptSettings_points_per_curve,
	-1, "scale_uniform", 3, 0, 0, 0, 0, "Scale Uniform",
	"Grow or shrink curves by changing their size uniformly instead of using trimming or extrapolation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_scale_uniform_get, BrushCurvesSculptSettings_scale_uniform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_length = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_length, (PropertyRNA *)&rna_BrushCurvesSculptSettings_scale_uniform,
	-1, "minimum_length", 3, 0, 0, 4, 0, "Minimum Length",
	"Avoid shrinking curves shorter than this length",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, minimum_length), (RawPropertyType)5, nullptr},
	BrushCurvesSculptSettings_minimum_length_get, BrushCurvesSculptSettings_minimum_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_length = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_point_count, (PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_length,
	-1, "interpolate_length", 3, 0, 0, 0, 0, "Interpolate Length",
	"Use length of the curves in close proximity",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_interpolate_length_get, BrushCurvesSculptSettings_interpolate_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_point_count = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_shape, (PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_length,
	-1, "interpolate_point_count", 3, 0, 0, 0, 0, "Interpolate Point Count",
	"Use the number of points from the curves in close proximity",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_interpolate_point_count_get, BrushCurvesSculptSettings_interpolate_point_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_shape = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_curve_length, (PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_point_count,
	-1, "interpolate_shape", 3, 0, 0, 0, 0, "Interpolate Shape",
	"Use shape of the curves in close proximity",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_interpolate_shape_get, BrushCurvesSculptSettings_interpolate_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_BrushCurvesSculptSettings_curve_length = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_distance, (PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_shape,
	-1, "curve_length", 3, 0, 0, 4, 0, "Curve Length",
	"Length of newly added curves when it is not interpolated from other curves",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, curve_length), (RawPropertyType)5, nullptr},
	BrushCurvesSculptSettings_curve_length_get, BrushCurvesSculptSettings_curve_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_distance = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_density_add_attempts, (PropertyRNA *)&rna_BrushCurvesSculptSettings_curve_length,
	-1, "minimum_distance", 3, 0, 0, 4, 0, "Minimum Distance",
	"Goal distance between curve roots for the Density brush",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, minimum_distance), (RawPropertyType)5, nullptr},
	BrushCurvesSculptSettings_minimum_distance_get, BrushCurvesSculptSettings_minimum_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 0.0010000000f, 2, 0.0f, nullptr
};

IntPropertyRNA rna_BrushCurvesSculptSettings_density_add_attempts = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_density_mode, (PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_distance,
	-1, "density_add_attempts", 3, 0, 0, 4, 0, "Density Add Attempts",
	"How many times the Density brush tries to add a new curve",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, density_add_attempts), (RawPropertyType)0, nullptr},
	BrushCurvesSculptSettings_density_add_attempts_get, BrushCurvesSculptSettings_density_add_attempts_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_BrushCurvesSculptSettings_density_mode_items[4] = {
	{0, "AUTO", 37, "Auto", "Either add or remove curves depending on the minimum distance of the curves under the cursor"},
	{1, "ADD", 31, "Add", "Add new curves between existing curves, taking the minimum distance into account"},
	{2, "REMOVE", 32, "Remove", "Remove curves whose root points are too close"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushCurvesSculptSettings_density_mode = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_curve_parameter_falloff, (PropertyRNA *)&rna_BrushCurvesSculptSettings_density_add_attempts,
	-1, "density_mode", 3, 0, 0, 0, 0, "Density Mode",
	"Determines whether the brush adds or removes curves",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_density_mode_get, BrushCurvesSculptSettings_density_mode_set, nullptr, nullptr, nullptr, rna_BrushCurvesSculptSettings_density_mode_items, 3, 0
};

PointerPropertyRNA rna_BrushCurvesSculptSettings_curve_parameter_falloff = {
	{nullptr, (PropertyRNA *)&rna_BrushCurvesSculptSettings_density_mode,
	-1, "curve_parameter_falloff", 8388608, 0, 0, 0, 0, "Curve Parameter Falloff",
	"Falloff that is applied from the tip to the root of each curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushCurvesSculptSettings_curve_parameter_falloff_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

StructRNA RNA_BrushCurvesSculptSettings = {
	{(ContainerRNA *)&RNA_BrushTextureSlot, (ContainerRNA *)&RNA_BrushGpencilSettings,
	nullptr,
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties, (PropertyRNA *)&rna_BrushCurvesSculptSettings_curve_parameter_falloff}},
	"BrushCurvesSculptSettings", nullptr, nullptr, 516, nullptr, "Curves Sculpt Brush Settings",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_BrushCurvesSculptSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Brush Texture Slot */
FloatPropertyRNA rna_BrushTextureSlot_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_map_mode, nullptr,
	-1, "angle", 4194307, 0, 0, 4, 0, "Angle",
	"Brush texture rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_TextureSlot_brush_angle_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, rot), (RawPropertyType)5, nullptr},
	BrushTextureSlot_angle_get, BrushTextureSlot_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_BrushTextureSlot_map_mode_items[7] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{3, "AREA_PLANE", 0, "Area Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{2, "3D", 0, "3D", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushTextureSlot_map_mode = {
	{(PropertyRNA *)&rna_BrushTextureSlot_mask_map_mode, (PropertyRNA *)&rna_BrushTextureSlot_angle,
	-1, "map_mode", 4194307, 0, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, brush_map_mode), (RawPropertyType)2, nullptr},
	BrushTextureSlot_map_mode_get, BrushTextureSlot_map_mode_set, rna_BrushTextureSlot_map_mode_itemf, nullptr, nullptr, rna_BrushTextureSlot_map_mode_items, 6, 1
};

static const EnumPropertyItem rna_BrushTextureSlot_mask_map_mode_items[5] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode = {
	{(PropertyRNA *)&rna_BrushTextureSlot_use_rake, (PropertyRNA *)&rna_BrushTextureSlot_map_mode,
	-1, "mask_map_mode", 4194307, 0, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, brush_map_mode), (RawPropertyType)2, nullptr},
	BrushTextureSlot_mask_map_mode_get, BrushTextureSlot_mask_map_mode_set, nullptr, nullptr, nullptr, rna_BrushTextureSlot_mask_map_mode_items, 4, 1
};

BoolPropertyRNA rna_BrushTextureSlot_use_rake = {
	{(PropertyRNA *)&rna_BrushTextureSlot_use_random, (PropertyRNA *)&rna_BrushTextureSlot_mask_map_mode,
	-1, "use_rake", 4194307, 0, 0, 0, 0, "Rake",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushTextureSlot_use_rake_get, BrushTextureSlot_use_rake_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushTextureSlot_use_random = {
	{(PropertyRNA *)&rna_BrushTextureSlot_random_angle, (PropertyRNA *)&rna_BrushTextureSlot_use_rake,
	-1, "use_random", 4194307, 0, 0, 0, 0, "Random",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushTextureSlot_use_random_get, BrushTextureSlot_use_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_BrushTextureSlot_random_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle_source, (PropertyRNA *)&rna_BrushTextureSlot_use_random,
	-1, "random_angle", 4194307, 0, 0, 4, 0, "Random Angle",
	"Brush texture random angle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_TextureSlot_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, random_angle), (RawPropertyType)5, nullptr},
	BrushTextureSlot_random_angle_get, BrushTextureSlot_random_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, 6.2831854820f, nullptr
};

BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle_source = {
	{(PropertyRNA *)&rna_BrushTextureSlot_has_random_texture_angle, (PropertyRNA *)&rna_BrushTextureSlot_random_angle,
	-1, "has_texture_angle_source", 2, 0, 0, 0, 0, "Has Texture Angle Source",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushTextureSlot_has_texture_angle_source_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushTextureSlot_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle, (PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle_source,
	-1, "has_random_texture_angle", 2, 0, 0, 0, 0, "Has Random Texture Angle",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushTextureSlot_has_random_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle = {
	{nullptr, (PropertyRNA *)&rna_BrushTextureSlot_has_random_texture_angle,
	-1, "has_texture_angle", 2, 0, 0, 0, 0, "Has Texture Angle Source",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BrushTextureSlot_has_texture_angle_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BrushTextureSlot = {
	{(ContainerRNA *)&RNA_OperatorStrokeElement, (ContainerRNA *)&RNA_BrushCurvesSculptSettings,
	nullptr,
	{(PropertyRNA *)&rna_BrushTextureSlot_angle, (PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle}},
	"BrushTextureSlot", nullptr, nullptr, 516, nullptr, "Brush Texture Slot",
	"Texture slot for textures in a Brush data-block",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	nullptr,
	nullptr,
	rna_TextureSlot_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Operator Stroke Element */
static float rna_OperatorStrokeElement_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_location = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_mouse, nullptr,
	-1, "location", 1027, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_location_default
};

static float rna_OperatorStrokeElement_mouse_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_mouse = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_mouse_event, (PropertyRNA *)&rna_OperatorStrokeElement_location,
	-1, "mouse", 1027, 0, 0, 0, 0, "Mouse",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_mouse_default
};

static float rna_OperatorStrokeElement_mouse_event_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_mouse_event = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_pressure, (PropertyRNA *)&rna_OperatorStrokeElement_mouse,
	-1, "mouse_event", 1027, 0, 0, 0, 0, "Mouse Event",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_mouse_event_default
};

FloatPropertyRNA rna_OperatorStrokeElement_pressure = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_size, (PropertyRNA *)&rna_OperatorStrokeElement_mouse_event,
	-1, "pressure", 1027, 0, 0, 0, 0, "Pressure",
	"Tablet pressure",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_OperatorStrokeElement_size = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_pen_flip, (PropertyRNA *)&rna_OperatorStrokeElement_pressure,
	-1, "size", 1027, 0, 0, 0, 0, "Brush Size",
	"Brush size in screen space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_OperatorStrokeElement_pen_flip = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_x_tilt, (PropertyRNA *)&rna_OperatorStrokeElement_size,
	-1, "pen_flip", 1027, 0, 0, 0, 0, "Flip",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_OperatorStrokeElement_x_tilt = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_y_tilt, (PropertyRNA *)&rna_OperatorStrokeElement_pen_flip,
	-1, "x_tilt", 1027, 0, 0, 0, 0, "Tilt X",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_OperatorStrokeElement_y_tilt = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_time, (PropertyRNA *)&rna_OperatorStrokeElement_x_tilt,
	-1, "y_tilt", 1027, 0, 0, 0, 0, "Tilt Y",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_OperatorStrokeElement_time = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_is_start, (PropertyRNA *)&rna_OperatorStrokeElement_y_tilt,
	-1, "time", 1027, 0, 0, 0, 0, "Time",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_OperatorStrokeElement_is_start = {
	{nullptr, (PropertyRNA *)&rna_OperatorStrokeElement_time,
	-1, "is_start", 1027, 0, 0, 0, 0, "Is Stroke Start",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_OperatorStrokeElement = {
	{(ContainerRNA *)&RNA_CacheFile, (ContainerRNA *)&RNA_BrushTextureSlot,
	nullptr,
	{(PropertyRNA *)&rna_OperatorStrokeElement_location, (PropertyRNA *)&rna_OperatorStrokeElement_is_start}},
	"OperatorStrokeElement", nullptr, nullptr, 516, nullptr, "Operator Stroke Element",
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

