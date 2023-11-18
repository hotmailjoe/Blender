
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

#include "rna_object.cc"
#include "rna_object_api.cc"

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

RNA_EXTERN_C PointerPropertyRNA rna_Object_data;
RNA_EXTERN_C EnumPropertyRNA rna_Object_type;
RNA_EXTERN_C EnumPropertyRNA rna_Object_mode;
RNA_EXTERN_C FloatPropertyRNA rna_Object_bound_box;
RNA_EXTERN_C PointerPropertyRNA rna_Object_parent;
RNA_EXTERN_C EnumPropertyRNA rna_Object_parent_type;
RNA_EXTERN_C IntPropertyRNA rna_Object_parent_vertices;
RNA_EXTERN_C StringPropertyRNA rna_Object_parent_bone;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_camera_lock_parent;
RNA_EXTERN_C EnumPropertyRNA rna_Object_track_axis;
RNA_EXTERN_C EnumPropertyRNA rna_Object_up_axis;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_material_slots;
RNA_EXTERN_C PointerPropertyRNA rna_Object_active_material;
RNA_EXTERN_C IntPropertyRNA rna_Object_active_material_index;
RNA_EXTERN_C FloatPropertyRNA rna_Object_location;
RNA_EXTERN_C FloatPropertyRNA rna_Object_rotation_quaternion;
RNA_EXTERN_C FloatPropertyRNA rna_Object_rotation_axis_angle;
RNA_EXTERN_C FloatPropertyRNA rna_Object_rotation_euler;
RNA_EXTERN_C EnumPropertyRNA rna_Object_rotation_mode;
RNA_EXTERN_C FloatPropertyRNA rna_Object_scale;
RNA_EXTERN_C FloatPropertyRNA rna_Object_dimensions;
RNA_EXTERN_C FloatPropertyRNA rna_Object_delta_location;
RNA_EXTERN_C FloatPropertyRNA rna_Object_delta_rotation_euler;
RNA_EXTERN_C FloatPropertyRNA rna_Object_delta_rotation_quaternion;
RNA_EXTERN_C FloatPropertyRNA rna_Object_delta_scale;
RNA_EXTERN_C BoolPropertyRNA rna_Object_lock_location;
RNA_EXTERN_C BoolPropertyRNA rna_Object_lock_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_Object_lock_rotation_w;
RNA_EXTERN_C BoolPropertyRNA rna_Object_lock_rotations_4d;
RNA_EXTERN_C BoolPropertyRNA rna_Object_lock_scale;
RNA_EXTERN_C FloatPropertyRNA rna_Object_matrix_world;
RNA_EXTERN_C FloatPropertyRNA rna_Object_matrix_local;
RNA_EXTERN_C FloatPropertyRNA rna_Object_matrix_basis;
RNA_EXTERN_C FloatPropertyRNA rna_Object_matrix_parent_inverse;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_modifiers;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_grease_pencil_modifiers;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_shader_effects;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_constraints;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_vertex_groups;
RNA_EXTERN_C EnumPropertyRNA rna_Object_empty_display_type;
RNA_EXTERN_C FloatPropertyRNA rna_Object_empty_display_size;
RNA_EXTERN_C FloatPropertyRNA rna_Object_empty_image_offset;
RNA_EXTERN_C PointerPropertyRNA rna_Object_image_user;
RNA_EXTERN_C EnumPropertyRNA rna_Object_empty_image_depth;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_empty_image_perspective;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_empty_image_orthographic;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_empty_image_only_axis_aligned;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_empty_image_alpha;
RNA_EXTERN_C EnumPropertyRNA rna_Object_empty_image_side;
RNA_EXTERN_C BoolPropertyRNA rna_Object_add_rest_position_attribute;
RNA_EXTERN_C IntPropertyRNA rna_Object_pass_index;
RNA_EXTERN_C FloatPropertyRNA rna_Object_color;
RNA_EXTERN_C PointerPropertyRNA rna_Object_field;
RNA_EXTERN_C PointerPropertyRNA rna_Object_collision;
RNA_EXTERN_C PointerPropertyRNA rna_Object_soft_body;
RNA_EXTERN_C CollectionPropertyRNA rna_Object_particle_systems;
RNA_EXTERN_C PointerPropertyRNA rna_Object_rigid_body;
RNA_EXTERN_C PointerPropertyRNA rna_Object_rigid_body_constraint;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_simulation_cache;
RNA_EXTERN_C BoolPropertyRNA rna_Object_hide_viewport;
RNA_EXTERN_C BoolPropertyRNA rna_Object_hide_select;
RNA_EXTERN_C BoolPropertyRNA rna_Object_hide_render;
RNA_EXTERN_C BoolPropertyRNA rna_Object_hide_probe_volume;
RNA_EXTERN_C BoolPropertyRNA rna_Object_hide_probe_cubemap;
RNA_EXTERN_C BoolPropertyRNA rna_Object_hide_probe_planar;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_instancer_for_render;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_instancer_for_viewport;
RNA_EXTERN_C BoolPropertyRNA rna_Object_visible_camera;
RNA_EXTERN_C BoolPropertyRNA rna_Object_visible_diffuse;
RNA_EXTERN_C BoolPropertyRNA rna_Object_visible_glossy;
RNA_EXTERN_C BoolPropertyRNA rna_Object_visible_transmission;
RNA_EXTERN_C BoolPropertyRNA rna_Object_visible_volume_scatter;
RNA_EXTERN_C BoolPropertyRNA rna_Object_visible_shadow;
RNA_EXTERN_C BoolPropertyRNA rna_Object_is_holdout;
RNA_EXTERN_C BoolPropertyRNA rna_Object_is_shadow_catcher;
RNA_EXTERN_C EnumPropertyRNA rna_Object_instance_type;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_instance_vertices_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_instance_faces_scale;
RNA_EXTERN_C FloatPropertyRNA rna_Object_instance_faces_scale;
RNA_EXTERN_C PointerPropertyRNA rna_Object_instance_collection;
RNA_EXTERN_C BoolPropertyRNA rna_Object_is_instancer;
RNA_EXTERN_C EnumPropertyRNA rna_Object_display_type;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_bounds;
RNA_EXTERN_C EnumPropertyRNA rna_Object_display_bounds_type;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_name;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_axis;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_texture_space;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_wire;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_all_edges;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_grease_pencil_lights;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_transparent;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_in_front;
RNA_EXTERN_C PointerPropertyRNA rna_Object_pose;
RNA_EXTERN_C BoolPropertyRNA rna_Object_show_only_shape_key;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_shape_key_edit_mode;
RNA_EXTERN_C PointerPropertyRNA rna_Object_active_shape_key;
RNA_EXTERN_C IntPropertyRNA rna_Object_active_shape_key_index;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_dynamic_topology_sculpting;
RNA_EXTERN_C BoolPropertyRNA rna_Object_is_from_instancer;
RNA_EXTERN_C BoolPropertyRNA rna_Object_is_from_set;
RNA_EXTERN_C PointerPropertyRNA rna_Object_display;
RNA_EXTERN_C PointerPropertyRNA rna_Object_lineart;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_mesh_mirror_x;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_mesh_mirror_y;
RNA_EXTERN_C BoolPropertyRNA rna_Object_use_mesh_mirror_z;
RNA_EXTERN_C StringPropertyRNA rna_Object_lightgroup;
RNA_EXTERN_C PointerPropertyRNA rna_Object_light_linking;
RNA_EXTERN_C PointerPropertyRNA rna_Object_animation_data;
RNA_EXTERN_C PointerPropertyRNA rna_Object_animation_visualization;
RNA_EXTERN_C PointerPropertyRNA rna_Object_motion_path;

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


extern FunctionRNA rna_Object_select_get_func;
extern PointerPropertyRNA rna_Object_select_get_view_layer;
extern BoolPropertyRNA rna_Object_select_get_result;

extern FunctionRNA rna_Object_select_set_func;
extern BoolPropertyRNA rna_Object_select_set_state;
extern PointerPropertyRNA rna_Object_select_set_view_layer;

extern FunctionRNA rna_Object_hide_get_func;
extern PointerPropertyRNA rna_Object_hide_get_view_layer;
extern BoolPropertyRNA rna_Object_hide_get_result;

extern FunctionRNA rna_Object_hide_set_func;
extern BoolPropertyRNA rna_Object_hide_set_state;
extern PointerPropertyRNA rna_Object_hide_set_view_layer;

extern FunctionRNA rna_Object_visible_get_func;
extern PointerPropertyRNA rna_Object_visible_get_view_layer;
extern PointerPropertyRNA rna_Object_visible_get_viewport;
extern BoolPropertyRNA rna_Object_visible_get_result;

extern FunctionRNA rna_Object_holdout_get_func;
extern PointerPropertyRNA rna_Object_holdout_get_view_layer;
extern BoolPropertyRNA rna_Object_holdout_get_result;

extern FunctionRNA rna_Object_indirect_only_get_func;
extern PointerPropertyRNA rna_Object_indirect_only_get_view_layer;
extern BoolPropertyRNA rna_Object_indirect_only_get_result;

extern FunctionRNA rna_Object_local_view_get_func;
extern PointerPropertyRNA rna_Object_local_view_get_viewport;
extern BoolPropertyRNA rna_Object_local_view_get_result;

extern FunctionRNA rna_Object_local_view_set_func;
extern PointerPropertyRNA rna_Object_local_view_set_viewport;
extern BoolPropertyRNA rna_Object_local_view_set_state;

extern FunctionRNA rna_Object_visible_in_viewport_get_func;
extern PointerPropertyRNA rna_Object_visible_in_viewport_get_viewport;
extern BoolPropertyRNA rna_Object_visible_in_viewport_get_result;

extern FunctionRNA rna_Object_convert_space_func;
extern PointerPropertyRNA rna_Object_convert_space_pose_bone;
extern FloatPropertyRNA rna_Object_convert_space_matrix;
extern FloatPropertyRNA rna_Object_convert_space_matrix_return;
extern EnumPropertyRNA rna_Object_convert_space_from_space;
extern EnumPropertyRNA rna_Object_convert_space_to_space;

extern FunctionRNA rna_Object_calc_matrix_camera_func;
extern PointerPropertyRNA rna_Object_calc_matrix_camera_depsgraph;
extern FloatPropertyRNA rna_Object_calc_matrix_camera_result;
extern IntPropertyRNA rna_Object_calc_matrix_camera_x;
extern IntPropertyRNA rna_Object_calc_matrix_camera_y;
extern FloatPropertyRNA rna_Object_calc_matrix_camera_scale_x;
extern FloatPropertyRNA rna_Object_calc_matrix_camera_scale_y;

extern FunctionRNA rna_Object_camera_fit_coords_func;
extern PointerPropertyRNA rna_Object_camera_fit_coords_depsgraph;
extern FloatPropertyRNA rna_Object_camera_fit_coords_coordinates;
extern FloatPropertyRNA rna_Object_camera_fit_coords_co_return;
extern FloatPropertyRNA rna_Object_camera_fit_coords_scale_return;

extern FunctionRNA rna_Object_crazyspace_eval_func;
extern PointerPropertyRNA rna_Object_crazyspace_eval_depsgraph;
extern PointerPropertyRNA rna_Object_crazyspace_eval_scene;

extern FunctionRNA rna_Object_crazyspace_displacement_to_deformed_func;
extern IntPropertyRNA rna_Object_crazyspace_displacement_to_deformed_vertex_index;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement_deformed;

extern FunctionRNA rna_Object_crazyspace_displacement_to_original_func;
extern IntPropertyRNA rna_Object_crazyspace_displacement_to_original_vertex_index;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement_original;

extern FunctionRNA rna_Object_crazyspace_eval_clear_func;
extern FunctionRNA rna_Object_to_mesh_func;
extern BoolPropertyRNA rna_Object_to_mesh_preserve_all_data_layers;
extern PointerPropertyRNA rna_Object_to_mesh_depsgraph;
extern PointerPropertyRNA rna_Object_to_mesh_mesh;

extern FunctionRNA rna_Object_to_mesh_clear_func;
extern FunctionRNA rna_Object_to_curve_func;
extern PointerPropertyRNA rna_Object_to_curve_depsgraph;
extern BoolPropertyRNA rna_Object_to_curve_apply_modifiers;
extern PointerPropertyRNA rna_Object_to_curve_curve;

extern FunctionRNA rna_Object_to_curve_clear_func;
extern FunctionRNA rna_Object_find_armature_func;
extern PointerPropertyRNA rna_Object_find_armature_ob_arm;

extern FunctionRNA rna_Object_shape_key_add_func;
extern StringPropertyRNA rna_Object_shape_key_add_name;
extern BoolPropertyRNA rna_Object_shape_key_add_from_mix;
extern PointerPropertyRNA rna_Object_shape_key_add_key;

extern FunctionRNA rna_Object_shape_key_remove_func;
extern PointerPropertyRNA rna_Object_shape_key_remove_key;

extern FunctionRNA rna_Object_shape_key_clear_func;
extern FunctionRNA rna_Object_ray_cast_func;
extern FloatPropertyRNA rna_Object_ray_cast_origin;
extern FloatPropertyRNA rna_Object_ray_cast_direction;
extern FloatPropertyRNA rna_Object_ray_cast_distance;
extern PointerPropertyRNA rna_Object_ray_cast_depsgraph;
extern BoolPropertyRNA rna_Object_ray_cast_result;
extern FloatPropertyRNA rna_Object_ray_cast_location;
extern FloatPropertyRNA rna_Object_ray_cast_normal;
extern IntPropertyRNA rna_Object_ray_cast_index;

extern FunctionRNA rna_Object_closest_point_on_mesh_func;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_origin;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_distance;
extern PointerPropertyRNA rna_Object_closest_point_on_mesh_depsgraph;
extern BoolPropertyRNA rna_Object_closest_point_on_mesh_result;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_location;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_normal;
extern IntPropertyRNA rna_Object_closest_point_on_mesh_index;

extern FunctionRNA rna_Object_is_modified_func;
extern PointerPropertyRNA rna_Object_is_modified_scene;
extern EnumPropertyRNA rna_Object_is_modified_settings;
extern BoolPropertyRNA rna_Object_is_modified_result;

extern FunctionRNA rna_Object_is_deform_modified_func;
extern PointerPropertyRNA rna_Object_is_deform_modified_scene;
extern EnumPropertyRNA rna_Object_is_deform_modified_settings;
extern BoolPropertyRNA rna_Object_is_deform_modified_result;

extern FunctionRNA rna_Object_dm_info_func;
extern EnumPropertyRNA rna_Object_dm_info_type;
extern PointerPropertyRNA rna_Object_dm_info_depsgraph;
extern StringPropertyRNA rna_Object_dm_info_result;

extern FunctionRNA rna_Object_update_from_editmode_func;
extern BoolPropertyRNA rna_Object_update_from_editmode_result;

extern FunctionRNA rna_Object_cache_release_func;
extern FunctionRNA rna_Object_generate_gpencil_strokes_func;
extern PointerPropertyRNA rna_Object_generate_gpencil_strokes_grease_pencil_object;
extern BoolPropertyRNA rna_Object_generate_gpencil_strokes_use_collections;
extern FloatPropertyRNA rna_Object_generate_gpencil_strokes_scale_thickness;
extern FloatPropertyRNA rna_Object_generate_gpencil_strokes_sample;
extern BoolPropertyRNA rna_Object_generate_gpencil_strokes_result;



RNA_EXTERN_C CollectionPropertyRNA rna_ObjectModifiers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectModifiers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectModifiers_active;

extern FunctionRNA rna_ObjectModifiers_new_func;
extern StringPropertyRNA rna_ObjectModifiers_new_name;
extern EnumPropertyRNA rna_ObjectModifiers_new_type;
extern PointerPropertyRNA rna_ObjectModifiers_new_modifier;

extern FunctionRNA rna_ObjectModifiers_remove_func;
extern PointerPropertyRNA rna_ObjectModifiers_remove_modifier;

extern FunctionRNA rna_ObjectModifiers_clear_func;
extern FunctionRNA rna_ObjectModifiers_move_func;
extern IntPropertyRNA rna_ObjectModifiers_move_from_index;
extern IntPropertyRNA rna_ObjectModifiers_move_to_index;



RNA_EXTERN_C CollectionPropertyRNA rna_ObjectGpencilModifiers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectGpencilModifiers_rna_type;

extern FunctionRNA rna_ObjectGpencilModifiers_new_func;
extern StringPropertyRNA rna_ObjectGpencilModifiers_new_name;
extern EnumPropertyRNA rna_ObjectGpencilModifiers_new_type;
extern PointerPropertyRNA rna_ObjectGpencilModifiers_new_greasepencil_modifier;

extern FunctionRNA rna_ObjectGpencilModifiers_remove_func;
extern PointerPropertyRNA rna_ObjectGpencilModifiers_remove_greasepencil_modifier;

extern FunctionRNA rna_ObjectGpencilModifiers_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_ObjectShaderFx_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectShaderFx_rna_type;

extern FunctionRNA rna_ObjectShaderFx_new_func;
extern StringPropertyRNA rna_ObjectShaderFx_new_name;
extern EnumPropertyRNA rna_ObjectShaderFx_new_type;
extern PointerPropertyRNA rna_ObjectShaderFx_new_shader_fx;

extern FunctionRNA rna_ObjectShaderFx_remove_func;
extern PointerPropertyRNA rna_ObjectShaderFx_remove_shader_fx;

extern FunctionRNA rna_ObjectShaderFx_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_ObjectConstraints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectConstraints_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectConstraints_active;

extern FunctionRNA rna_ObjectConstraints_new_func;
extern EnumPropertyRNA rna_ObjectConstraints_new_type;
extern PointerPropertyRNA rna_ObjectConstraints_new_constraint;

extern FunctionRNA rna_ObjectConstraints_remove_func;
extern PointerPropertyRNA rna_ObjectConstraints_remove_constraint;

extern FunctionRNA rna_ObjectConstraints_clear_func;
extern FunctionRNA rna_ObjectConstraints_move_func;
extern IntPropertyRNA rna_ObjectConstraints_move_from_index;
extern IntPropertyRNA rna_ObjectConstraints_move_to_index;

extern FunctionRNA rna_ObjectConstraints_copy_func;
extern PointerPropertyRNA rna_ObjectConstraints_copy_constraint;
extern PointerPropertyRNA rna_ObjectConstraints_copy_new_constraint;



RNA_EXTERN_C CollectionPropertyRNA rna_VertexGroups_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VertexGroups_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_VertexGroups_active;
RNA_EXTERN_C IntPropertyRNA rna_VertexGroups_active_index;

extern FunctionRNA rna_VertexGroups_new_func;
extern StringPropertyRNA rna_VertexGroups_new_name;
extern PointerPropertyRNA rna_VertexGroups_new_group;

extern FunctionRNA rna_VertexGroups_remove_func;
extern PointerPropertyRNA rna_VertexGroups_remove_group;

extern FunctionRNA rna_VertexGroups_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_ParticleSystems_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleSystems_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleSystems_active;
RNA_EXTERN_C IntPropertyRNA rna_ParticleSystems_active_index;


RNA_EXTERN_C CollectionPropertyRNA rna_VertexGroup_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VertexGroup_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_VertexGroup_name;
RNA_EXTERN_C BoolPropertyRNA rna_VertexGroup_lock_weight;
RNA_EXTERN_C IntPropertyRNA rna_VertexGroup_index;

extern FunctionRNA rna_VertexGroup_add_func;
extern IntPropertyRNA rna_VertexGroup_add_index;
extern FloatPropertyRNA rna_VertexGroup_add_weight;
extern EnumPropertyRNA rna_VertexGroup_add_type;

extern FunctionRNA rna_VertexGroup_remove_func;
extern IntPropertyRNA rna_VertexGroup_remove_index;

extern FunctionRNA rna_VertexGroup_weight_func;
extern IntPropertyRNA rna_VertexGroup_weight_index;
extern FloatPropertyRNA rna_VertexGroup_weight_weight;



RNA_EXTERN_C CollectionPropertyRNA rna_MaterialSlot_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MaterialSlot_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_MaterialSlot_link;
RNA_EXTERN_C PointerPropertyRNA rna_MaterialSlot_material;
RNA_EXTERN_C IntPropertyRNA rna_MaterialSlot_slot_index;
RNA_EXTERN_C StringPropertyRNA rna_MaterialSlot_name;


RNA_EXTERN_C CollectionPropertyRNA rna_ObjectDisplay_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectDisplay_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_ObjectDisplay_show_shadows;


RNA_EXTERN_C CollectionPropertyRNA rna_ObjectLineArt_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectLineArt_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ObjectLineArt_usage;
RNA_EXTERN_C BoolPropertyRNA rna_ObjectLineArt_use_crease_override;
RNA_EXTERN_C FloatPropertyRNA rna_ObjectLineArt_crease_threshold;
RNA_EXTERN_C BoolPropertyRNA rna_ObjectLineArt_use_intersection_priority_override;
RNA_EXTERN_C IntPropertyRNA rna_ObjectLineArt_intersection_priority;


RNA_EXTERN_C CollectionPropertyRNA rna_ObjectLightLinking_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectLightLinking_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectLightLinking_receiver_collection;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectLightLinking_blocker_collection;

RNA_EXTERN_C PointerRNA Object_data_get(PointerRNA *ptr)
{
    return rna_Object_data_get(ptr);
}

RNA_EXTERN_C void Object_data_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_data_set(ptr, value, reports);
}

RNA_EXTERN_C int Object_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C int Object_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void Object_bound_box_get(PointerRNA *ptr, float values[24])
{
    PropFloatArrayGetFunc fn = rna_Object_boundbox_get;
    fn(ptr, values);
}

RNA_EXTERN_C PointerRNA Object_parent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

RNA_EXTERN_C void Object_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_parent_set(ptr, value, reports);
}

RNA_EXTERN_C int Object_parent_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((data->partype) & 7);
}

RNA_EXTERN_C void Object_parent_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Object_parent_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Object_parent_vertices_get(PointerRNA *ptr, int values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)((&data->par1)[i]);
    }
}

RNA_EXTERN_C void Object_parent_vertices_set(PointerRNA *ptr, const int values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->par1)[i] = CLAMPIS(values[i], 0, INT_MAX);
    }
}

RNA_EXTERN_C void Object_parent_bone_get(PointerRNA *ptr, char *value)
{
    Object *data = (Object *)(ptr->data);
    BLI_assert(strlen(data->parsubstr) < 64);
    strcpy(value, data->parsubstr);
}

RNA_EXTERN_C int Object_parent_bone_length(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return strlen(data->parsubstr);
}

RNA_EXTERN_C void Object_parent_bone_set(PointerRNA *ptr, const char *value)
{
    rna_Object_parent_bone_set(ptr, value);
}

RNA_EXTERN_C bool Object_use_camera_lock_parent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 1) != 0);
}

RNA_EXTERN_C void Object_use_camera_lock_parent_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag |= 1; }
    else { data->transflag &= ~1; }
}

RNA_EXTERN_C int Object_track_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->trackflag);
}

RNA_EXTERN_C void Object_track_axis_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->trackflag = (std::remove_reference_t<decltype(data->trackflag)>)value;
#else
    data->trackflag = value;
#endif
}

RNA_EXTERN_C int Object_up_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->upflag);
}

RNA_EXTERN_C void Object_up_axis_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->upflag = (std::remove_reference_t<decltype(data->upflag)>)value;
#else
    data->upflag = value;
#endif
}

RNA_EXTERN_C int Object_material_slots_length(PointerRNA *ptr)
{
    return rna_Object_material_slots_length(ptr);
}

static PointerRNA Object_material_slots_get(CollectionPropertyIterator *iter)
{
    return rna_Object_material_slots_get(iter);
}

RNA_EXTERN_C void Object_material_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_material_slots;

    rna_Object_material_slots_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Object_material_slots_get(iter);
    }
}

RNA_EXTERN_C void Object_material_slots_next(CollectionPropertyIterator *iter)
{
    rna_Object_material_slots_next(iter);

    if (iter->valid) {
        iter->ptr = Object_material_slots_get(iter);
    }
}

RNA_EXTERN_C void Object_material_slots_end(CollectionPropertyIterator *iter)
{
    rna_Object_material_slots_end(iter);
}

RNA_EXTERN_C PointerRNA Object_active_material_get(PointerRNA *ptr)
{
    return rna_Object_active_material_get(ptr);
}

RNA_EXTERN_C void Object_active_material_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_material_set(ptr, value, reports);
}

RNA_EXTERN_C int Object_active_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_material_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Object_active_material_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_material_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Object_location_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

RNA_EXTERN_C void Object_location_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

RNA_EXTERN_C void Object_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_Object_rotation_axis_angle_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_Object_rotation_axis_angle_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rot)[i]);
    }
}

RNA_EXTERN_C void Object_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rot)[i] = values[i];
    }
}

RNA_EXTERN_C int Object_rotation_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->rotmode);
}

RNA_EXTERN_C void Object_rotation_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Object_rotation_mode_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Object_scale_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

RNA_EXTERN_C void Object_scale_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_dimensions_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Object_dimensions_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_dimensions_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Object_dimensions_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_delta_location_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->dloc)[i]);
    }
}

RNA_EXTERN_C void Object_delta_location_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->dloc)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_delta_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->drot)[i]);
    }
}

RNA_EXTERN_C void Object_delta_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->drot)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_delta_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->dquat)[i]);
    }
}

RNA_EXTERN_C void Object_delta_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->dquat)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_delta_scale_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->dscale)[i]);
    }
}

RNA_EXTERN_C void Object_delta_scale_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->dscale)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_lock_location_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void Object_lock_location_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (1 << i); }
        else { data->protectflag &= ~(1 << i); }
    }
}

RNA_EXTERN_C void Object_lock_rotation_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (8 << i)) != 0);
    }
}

RNA_EXTERN_C void Object_lock_rotation_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (8 << i); }
        else { data->protectflag &= ~(8 << i); }
    }
}

RNA_EXTERN_C bool Object_lock_rotation_w_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->protectflag) & 512) != 0);
}

RNA_EXTERN_C void Object_lock_rotation_w_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->protectflag |= 512; }
    else { data->protectflag &= ~512; }
}

RNA_EXTERN_C bool Object_lock_rotations_4d_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->protectflag) & 1024) != 0);
}

RNA_EXTERN_C void Object_lock_rotations_4d_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->protectflag |= 1024; }
    else { data->protectflag &= ~1024; }
}

RNA_EXTERN_C void Object_lock_scale_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (64 << i)) != 0);
    }
}

RNA_EXTERN_C void Object_lock_scale_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (64 << i); }
        else { data->protectflag &= ~(64 << i); }
    }
}

RNA_EXTERN_C void Object_matrix_world_get(PointerRNA *ptr, float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->object_to_world)[i]);
    }
}

RNA_EXTERN_C void Object_matrix_world_set(PointerRNA *ptr, const float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        ((float *)data->object_to_world)[i] = values[i];
    }
}

RNA_EXTERN_C void Object_matrix_local_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Object_matrix_local_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_matrix_local_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Object_matrix_local_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Object_matrix_basis_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Object_matrix_basis_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Object_matrix_parent_inverse_get(PointerRNA *ptr, float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->parentinv)[i]);
    }
}

RNA_EXTERN_C void Object_matrix_parent_inverse_set(PointerRNA *ptr, const float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        ((float *)data->parentinv)[i] = values[i];
    }
}

static PointerRNA Object_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Modifier, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Object_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_modifiers;

    rna_iterator_listbase_begin(iter, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = Object_modifiers_get(iter);
    }
}

RNA_EXTERN_C void Object_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_modifiers_get(iter);
    }
}

RNA_EXTERN_C void Object_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Object_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_modifiers_get(&iter); }
    }

    Object_modifiers_end(&iter);

    return found;
}

RNA_EXTERN_C int Modifier_name_length(PointerRNA *);
RNA_EXTERN_C void Modifier_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Object_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Modifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                Modifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Modifier_name_get(&iter.ptr, name);
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
        Object_modifiers_next(&iter);
    }
    Object_modifiers_end(&iter);

    return found;
}

static PointerRNA Object_grease_pencil_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GpencilModifier, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Object_grease_pencil_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_grease_pencil_modifiers;

    rna_iterator_listbase_begin(iter, &data->greasepencil_modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = Object_grease_pencil_modifiers_get(iter);
    }
}

RNA_EXTERN_C void Object_grease_pencil_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_grease_pencil_modifiers_get(iter);
    }
}

RNA_EXTERN_C void Object_grease_pencil_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Object_grease_pencil_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_grease_pencil_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_grease_pencil_modifiers_get(&iter); }
    }

    Object_grease_pencil_modifiers_end(&iter);

    return found;
}

RNA_EXTERN_C int GpencilModifier_name_length(PointerRNA *);
RNA_EXTERN_C void GpencilModifier_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Object_grease_pencil_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_grease_pencil_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GpencilModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                GpencilModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                GpencilModifier_name_get(&iter.ptr, name);
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
        Object_grease_pencil_modifiers_next(&iter);
    }
    Object_grease_pencil_modifiers_end(&iter);

    return found;
}

static PointerRNA Object_shader_effects_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ShaderFx, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Object_shader_effects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_shader_effects;

    rna_iterator_listbase_begin(iter, &data->shader_fx, nullptr);

    if (iter->valid) {
        iter->ptr = Object_shader_effects_get(iter);
    }
}

RNA_EXTERN_C void Object_shader_effects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_shader_effects_get(iter);
    }
}

RNA_EXTERN_C void Object_shader_effects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Object_shader_effects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_shader_effects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_shader_effects_get(&iter); }
    }

    Object_shader_effects_end(&iter);

    return found;
}

RNA_EXTERN_C int ShaderFx_name_length(PointerRNA *);
RNA_EXTERN_C void ShaderFx_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Object_shader_effects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_shader_effects_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ShaderFx_name_length(&iter.ptr);
            if (namelen < 1024) {
                ShaderFx_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ShaderFx_name_get(&iter.ptr, name);
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
        Object_shader_effects_next(&iter);
    }
    Object_shader_effects_end(&iter);

    return found;
}

static PointerRNA Object_constraints_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Constraint, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Object_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_constraints;

    rna_iterator_listbase_begin(iter, &data->constraints, nullptr);

    if (iter->valid) {
        iter->ptr = Object_constraints_get(iter);
    }
}

RNA_EXTERN_C void Object_constraints_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_constraints_get(iter);
    }
}

RNA_EXTERN_C void Object_constraints_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Object_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_constraints_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_constraints_get(&iter); }
    }

    Object_constraints_end(&iter);

    return found;
}

RNA_EXTERN_C int Constraint_name_length(PointerRNA *);
RNA_EXTERN_C void Constraint_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Object_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_constraints_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Constraint_name_length(&iter.ptr);
            if (namelen < 1024) {
                Constraint_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Constraint_name_get(&iter.ptr, name);
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
        Object_constraints_next(&iter);
    }
    Object_constraints_end(&iter);

    return found;
}

static PointerRNA Object_vertex_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroup, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Object_vertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_vertex_groups;

    rna_Object_vertex_groups_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Object_vertex_groups_get(iter);
    }
}

RNA_EXTERN_C void Object_vertex_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_vertex_groups_get(iter);
    }
}

RNA_EXTERN_C void Object_vertex_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Object_empty_display_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->empty_drawtype);
}

RNA_EXTERN_C void Object_empty_display_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Object_empty_display_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C float Object_empty_display_size_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->empty_drawsize);
}

RNA_EXTERN_C void Object_empty_display_size_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->empty_drawsize = (std::remove_reference_t<decltype(data->empty_drawsize)>)CLAMPIS(value, 0.0001000000f, 1000.0f);
#else
    data->empty_drawsize = CLAMPIS(value, 0.0001000000f, 1000.0f);
#endif
}

RNA_EXTERN_C void Object_empty_image_offset_get(PointerRNA *ptr, float values[2])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->ima_ofs)[i]);
    }
}

RNA_EXTERN_C void Object_empty_image_offset_set(PointerRNA *ptr, const float values[2])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->ima_ofs)[i] = values[i];
    }
}

RNA_EXTERN_C PointerRNA Object_image_user_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, data->iuser);
}

RNA_EXTERN_C int Object_empty_image_depth_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->empty_image_depth);
}

RNA_EXTERN_C void Object_empty_image_depth_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->empty_image_depth = (std::remove_reference_t<decltype(data->empty_image_depth)>)value;
#else
    data->empty_image_depth = value;
#endif
}

RNA_EXTERN_C bool Object_show_empty_image_perspective_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->empty_image_visibility_flag) & 1) != 0);
}

RNA_EXTERN_C void Object_show_empty_image_perspective_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->empty_image_visibility_flag |= 1; }
    else { data->empty_image_visibility_flag &= ~1; }
}

RNA_EXTERN_C bool Object_show_empty_image_orthographic_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->empty_image_visibility_flag) & 2) != 0);
}

RNA_EXTERN_C void Object_show_empty_image_orthographic_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->empty_image_visibility_flag |= 2; }
    else { data->empty_image_visibility_flag &= ~2; }
}

RNA_EXTERN_C bool Object_show_empty_image_only_axis_aligned_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->empty_image_visibility_flag) & 16) != 0);
}

RNA_EXTERN_C void Object_show_empty_image_only_axis_aligned_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->empty_image_visibility_flag |= 16; }
    else { data->empty_image_visibility_flag &= ~16; }
}

RNA_EXTERN_C bool Object_use_empty_image_alpha_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->empty_image_flag) & 1) != 0);
}

RNA_EXTERN_C void Object_use_empty_image_alpha_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->empty_image_flag |= 1; }
    else { data->empty_image_flag &= ~1; }
}

RNA_EXTERN_C int Object_empty_image_side_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((data->empty_image_visibility_flag) & 12);
}

RNA_EXTERN_C void Object_empty_image_side_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_image_visibility_flag &= ~12;
    data->empty_image_visibility_flag |= value;
}

RNA_EXTERN_C bool Object_add_rest_position_attribute_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->modifier_flag) & 1) != 0);
}

RNA_EXTERN_C void Object_add_rest_position_attribute_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->modifier_flag |= 1; }
    else { data->modifier_flag &= ~1; }
}

RNA_EXTERN_C int Object_pass_index_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->index);
}

RNA_EXTERN_C void Object_pass_index_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->index = (std::remove_reference_t<decltype(data->index)>)CLAMPIS(value, 0, 32767);
#else
    data->index = CLAMPIS(value, 0, 32767);
#endif
}

RNA_EXTERN_C void Object_color_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void Object_color_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C PointerRNA Object_field_get(PointerRNA *ptr)
{
    return rna_Object_field_get(ptr);
}

RNA_EXTERN_C PointerRNA Object_collision_get(PointerRNA *ptr)
{
    return rna_Object_collision_get(ptr);
}

RNA_EXTERN_C PointerRNA Object_soft_body_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_SoftBodySettings, data->soft);
}

static PointerRNA Object_particle_systems_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSystem, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Object_particle_systems_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_particle_systems;

    rna_iterator_listbase_begin(iter, &data->particlesystem, nullptr);

    if (iter->valid) {
        iter->ptr = Object_particle_systems_get(iter);
    }
}

RNA_EXTERN_C void Object_particle_systems_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_particle_systems_get(iter);
    }
}

RNA_EXTERN_C void Object_particle_systems_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Object_particle_systems_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_particle_systems_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_particle_systems_get(&iter); }
    }

    Object_particle_systems_end(&iter);

    return found;
}

RNA_EXTERN_C int ParticleSystem_name_length(PointerRNA *);
RNA_EXTERN_C void ParticleSystem_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Object_particle_systems_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_particle_systems_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleSystem_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleSystem_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ParticleSystem_name_get(&iter.ptr, name);
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
        Object_particle_systems_next(&iter);
    }
    Object_particle_systems_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Object_rigid_body_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_RigidBodyObject, data->rigidbody_object);
}

RNA_EXTERN_C PointerRNA Object_rigid_body_constraint_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_RigidBodyConstraint, data->rigidbody_constraint);
}

RNA_EXTERN_C bool Object_use_simulation_cache_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void Object_use_simulation_cache_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool Object_hide_viewport_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 1) != 0);
}

RNA_EXTERN_C void Object_hide_viewport_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 1; }
    else { data->visibility_flag &= ~1; }
}

RNA_EXTERN_C bool Object_hide_select_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 2) != 0);
}

RNA_EXTERN_C void Object_hide_select_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 2; }
    else { data->visibility_flag &= ~2; }
}

RNA_EXTERN_C bool Object_hide_render_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 4) != 0);
}

RNA_EXTERN_C void Object_hide_render_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 4; }
    else { data->visibility_flag &= ~4; }
}

RNA_EXTERN_C bool Object_hide_probe_volume_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 2048) != 0);
}

RNA_EXTERN_C void Object_hide_probe_volume_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 2048; }
    else { data->visibility_flag &= ~2048; }
}

RNA_EXTERN_C bool Object_hide_probe_cubemap_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 4096) != 0);
}

RNA_EXTERN_C void Object_hide_probe_cubemap_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 4096; }
    else { data->visibility_flag &= ~4096; }
}

RNA_EXTERN_C bool Object_hide_probe_planar_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 8192) != 0);
}

RNA_EXTERN_C void Object_hide_probe_planar_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 8192; }
    else { data->visibility_flag &= ~8192; }
}

RNA_EXTERN_C bool Object_show_instancer_for_render_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->duplicator_visibility_flag) & 2) != 0);
}

RNA_EXTERN_C void Object_show_instancer_for_render_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->duplicator_visibility_flag |= 2; }
    else { data->duplicator_visibility_flag &= ~2; }
}

RNA_EXTERN_C bool Object_show_instancer_for_viewport_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->duplicator_visibility_flag) & 1) != 0);
}

RNA_EXTERN_C void Object_show_instancer_for_viewport_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->duplicator_visibility_flag |= 1; }
    else { data->duplicator_visibility_flag &= ~1; }
}

RNA_EXTERN_C bool Object_visible_camera_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 8) != 0);
}

RNA_EXTERN_C void Object_visible_camera_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 8; }
    else { data->visibility_flag &= ~8; }
}

RNA_EXTERN_C bool Object_visible_diffuse_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 16) != 0);
}

RNA_EXTERN_C void Object_visible_diffuse_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 16; }
    else { data->visibility_flag &= ~16; }
}

RNA_EXTERN_C bool Object_visible_glossy_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 32) != 0);
}

RNA_EXTERN_C void Object_visible_glossy_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 32; }
    else { data->visibility_flag &= ~32; }
}

RNA_EXTERN_C bool Object_visible_transmission_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 64) != 0);
}

RNA_EXTERN_C void Object_visible_transmission_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 64; }
    else { data->visibility_flag &= ~64; }
}

RNA_EXTERN_C bool Object_visible_volume_scatter_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 128) != 0);
}

RNA_EXTERN_C void Object_visible_volume_scatter_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 128; }
    else { data->visibility_flag &= ~128; }
}

RNA_EXTERN_C bool Object_visible_shadow_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 256) != 0);
}

RNA_EXTERN_C void Object_visible_shadow_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 256; }
    else { data->visibility_flag &= ~256; }
}

RNA_EXTERN_C bool Object_is_holdout_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 512) != 0);
}

RNA_EXTERN_C void Object_is_holdout_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 512; }
    else { data->visibility_flag &= ~512; }
}

RNA_EXTERN_C bool Object_is_shadow_catcher_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 1024) != 0);
}

RNA_EXTERN_C void Object_is_shadow_catcher_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 1024; }
    else { data->visibility_flag &= ~1024; }
}

RNA_EXTERN_C int Object_instance_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((data->transflag) & 784);
}

RNA_EXTERN_C void Object_instance_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->transflag &= ~784;
    data->transflag |= value;
}

RNA_EXTERN_C bool Object_use_instance_vertices_rotation_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 32) != 0);
}

RNA_EXTERN_C void Object_use_instance_vertices_rotation_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag |= 32; }
    else { data->transflag &= ~32; }
}

RNA_EXTERN_C bool Object_use_instance_faces_scale_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 1024) != 0);
}

RNA_EXTERN_C void Object_use_instance_faces_scale_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag |= 1024; }
    else { data->transflag &= ~1024; }
}

RNA_EXTERN_C float Object_instance_faces_scale_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->instance_faces_scale);
}

RNA_EXTERN_C void Object_instance_faces_scale_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->instance_faces_scale = (std::remove_reference_t<decltype(data->instance_faces_scale)>)CLAMPIS(value, 0.0010000000f, 10000.0f);
#else
    data->instance_faces_scale = CLAMPIS(value, 0.0010000000f, 10000.0f);
#endif
}

RNA_EXTERN_C PointerRNA Object_instance_collection_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->instance_collection);
}

RNA_EXTERN_C void Object_instance_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_dup_collection_set(ptr, value, reports);
}

RNA_EXTERN_C bool Object_is_instancer_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 2832) != 0);
}

RNA_EXTERN_C int Object_display_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->dt);
}

RNA_EXTERN_C void Object_display_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->dt = (std::remove_reference_t<decltype(data->dt)>)value;
#else
    data->dt = value;
#endif
}

RNA_EXTERN_C bool Object_show_bounds_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 1) != 0);
}

RNA_EXTERN_C void Object_show_bounds_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 1; }
    else { data->dtx &= ~1; }
}

RNA_EXTERN_C int Object_display_bounds_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->boundtype);
}

RNA_EXTERN_C void Object_display_bounds_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
#ifdef __cplusplus
    data->boundtype = (std::remove_reference_t<decltype(data->boundtype)>)value;
#else
    data->boundtype = value;
#endif
}

RNA_EXTERN_C bool Object_show_name_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 8) != 0);
}

RNA_EXTERN_C void Object_show_name_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 8; }
    else { data->dtx &= ~8; }
}

RNA_EXTERN_C bool Object_show_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 2) != 0);
}

RNA_EXTERN_C void Object_show_axis_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 2; }
    else { data->dtx &= ~2; }
}

RNA_EXTERN_C bool Object_show_texture_space_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 4) != 0);
}

RNA_EXTERN_C void Object_show_texture_space_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 4; }
    else { data->dtx &= ~4; }
}

RNA_EXTERN_C bool Object_show_wire_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 32) != 0);
}

RNA_EXTERN_C void Object_show_wire_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 32; }
    else { data->dtx &= ~32; }
}

RNA_EXTERN_C bool Object_show_all_edges_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 256) != 0);
}

RNA_EXTERN_C void Object_show_all_edges_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 256; }
    else { data->dtx &= ~256; }
}

RNA_EXTERN_C bool Object_use_grease_pencil_lights_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 1024) != 0);
}

RNA_EXTERN_C void Object_use_grease_pencil_lights_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 1024; }
    else { data->dtx &= ~1024; }
}

RNA_EXTERN_C bool Object_show_transparent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 128) != 0);
}

RNA_EXTERN_C void Object_show_transparent_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 128; }
    else { data->dtx &= ~128; }
}

RNA_EXTERN_C bool Object_show_in_front_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 64) != 0);
}

RNA_EXTERN_C void Object_show_in_front_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 64; }
    else { data->dtx &= ~64; }
}

RNA_EXTERN_C PointerRNA Object_pose_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Pose, data->pose);
}

RNA_EXTERN_C bool Object_show_only_shape_key_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->shapeflag) & 1) != 0);
}

RNA_EXTERN_C void Object_show_only_shape_key_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->shapeflag |= 1; }
    else { data->shapeflag &= ~1; }
}

RNA_EXTERN_C bool Object_use_shape_key_edit_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->shapeflag) & 4) != 0);
}

RNA_EXTERN_C void Object_use_shape_key_edit_mode_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->shapeflag |= 4; }
    else { data->shapeflag &= ~4; }
}

RNA_EXTERN_C PointerRNA Object_active_shape_key_get(PointerRNA *ptr)
{
    return rna_Object_active_shape_key_get(ptr);
}

RNA_EXTERN_C int Object_active_shape_key_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_shape_key_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Object_active_shape_key_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_shape_key_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Object_use_dynamic_topology_sculpting_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_use_dynamic_topology_sculpting_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Object_is_from_instancer_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->base_flag) & 8) != 0);
}

RNA_EXTERN_C bool Object_is_from_set_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->base_flag) & 32) != 0);
}

RNA_EXTERN_C PointerRNA Object_display_get(PointerRNA *ptr)
{
    return rna_Object_display_get(ptr);
}

RNA_EXTERN_C PointerRNA Object_lineart_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ObjectLineArt, &data->lineart);
}

RNA_EXTERN_C bool Object_use_mesh_mirror_x_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_mesh_symmetry_x_get;
    return fn(ptr);
}

RNA_EXTERN_C void Object_use_mesh_mirror_x_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Object_mesh_symmetry_x_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Object_use_mesh_mirror_y_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_mesh_symmetry_y_get;
    return fn(ptr);
}

RNA_EXTERN_C void Object_use_mesh_mirror_y_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Object_mesh_symmetry_y_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Object_use_mesh_mirror_z_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Object_mesh_symmetry_z_get;
    return fn(ptr);
}

RNA_EXTERN_C void Object_use_mesh_mirror_z_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Object_mesh_symmetry_z_set;
    fn(ptr, value);
}

RNA_EXTERN_C void Object_lightgroup_get(PointerRNA *ptr, char *value)
{
    rna_Object_lightgroup_get(ptr, value);
}

RNA_EXTERN_C int Object_lightgroup_length(PointerRNA *ptr)
{
    return rna_Object_lightgroup_length(ptr);
}

RNA_EXTERN_C void Object_lightgroup_set(PointerRNA *ptr, const char *value)
{
    rna_Object_lightgroup_set(ptr, value);
}

RNA_EXTERN_C PointerRNA Object_light_linking_get(PointerRNA *ptr)
{
    return rna_Object_light_linking_get(ptr);
}

RNA_EXTERN_C PointerRNA Object_animation_data_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C PointerRNA Object_animation_visualization_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimViz, &data->avs);
}

RNA_EXTERN_C PointerRNA Object_motion_path_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MotionPath, data->mpath);
}

static PointerRNA ObjectModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectModifiers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectModifiers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectModifiers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectModifiers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ObjectModifiers_active_get(PointerRNA *ptr)
{
    return rna_Object_active_modifier_get(ptr);
}

RNA_EXTERN_C void ObjectModifiers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_modifier_set(ptr, value, reports);
}

static PointerRNA ObjectGpencilModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectGpencilModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectGpencilModifiers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectGpencilModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectGpencilModifiers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectGpencilModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectGpencilModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectGpencilModifiers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ObjectShaderFx_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectShaderFx_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectShaderFx_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectShaderFx_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectShaderFx_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectShaderFx_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectShaderFx_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectShaderFx_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectShaderFx_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ObjectConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectConstraints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectConstraints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectConstraints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectConstraints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ObjectConstraints_active_get(PointerRNA *ptr)
{
    return rna_Object_active_constraint_get(ptr);
}

RNA_EXTERN_C void ObjectConstraints_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_constraint_set(ptr, value, reports);
}

static PointerRNA VertexGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VertexGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexGroups_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroups_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VertexGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexGroups_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VertexGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VertexGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VertexGroups_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA VertexGroups_active_get(PointerRNA *ptr)
{
    return rna_Object_active_vertex_group_get(ptr);
}

RNA_EXTERN_C void VertexGroups_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_vertex_group_set(ptr, value, reports);
}

RNA_EXTERN_C int VertexGroups_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_vertex_group_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void VertexGroups_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_vertex_group_index_set;
    fn(ptr, value);
}

static PointerRNA ParticleSystems_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ParticleSystems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSystems_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSystems_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ParticleSystems_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystems_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ParticleSystems_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ParticleSystems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ParticleSystems_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ParticleSystems_active_get(PointerRNA *ptr)
{
    return rna_Object_active_particle_system_get(ptr);
}

RNA_EXTERN_C int ParticleSystems_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Object_active_particle_system_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void ParticleSystems_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Object_active_particle_system_index_set;
    fn(ptr, value);
}

static PointerRNA VertexGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VertexGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VertexGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VertexGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VertexGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VertexGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void VertexGroup_name_get(PointerRNA *ptr, char *value)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int VertexGroup_name_length(PointerRNA *ptr)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void VertexGroup_name_set(PointerRNA *ptr, const char *value)
{
    rna_VertexGroup_name_set(ptr, value);
}

RNA_EXTERN_C bool VertexGroup_lock_weight_get(PointerRNA *ptr)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    return (bool)(data->flag);
}

RNA_EXTERN_C void VertexGroup_lock_weight_set(PointerRNA *ptr, bool value)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
#ifdef __cplusplus
    data->flag = (std::remove_reference_t<decltype(data->flag)>)value;
#else
    data->flag = value;
#endif
}

RNA_EXTERN_C int VertexGroup_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_VertexGroup_index_get;
    return fn(ptr);
}

static PointerRNA MaterialSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MaterialSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaterialSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaterialSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaterialSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MaterialSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MaterialSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MaterialSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MaterialSlot_link_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MaterialSlot_link_get;
    return fn(ptr);
}

RNA_EXTERN_C void MaterialSlot_link_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_MaterialSlot_link_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA MaterialSlot_material_get(PointerRNA *ptr)
{
    return rna_MaterialSlot_material_get(ptr);
}

RNA_EXTERN_C void MaterialSlot_material_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaterialSlot_material_set(ptr, value, reports);
}

RNA_EXTERN_C int MaterialSlot_slot_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MaterialSlot_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MaterialSlot_name_get(PointerRNA *ptr, char *value)
{
    rna_MaterialSlot_name_get(ptr, value);
}

RNA_EXTERN_C int MaterialSlot_name_length(PointerRNA *ptr)
{
    return rna_MaterialSlot_name_length(ptr);
}

static PointerRNA ObjectDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectDisplay_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectDisplay_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectDisplay_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectDisplay_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool ObjectDisplay_show_shadows_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->dtx) & 512) != 0);
}

RNA_EXTERN_C void ObjectDisplay_show_shadows_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->dtx |= 512; }
    else { data->dtx &= ~512; }
}

static PointerRNA ObjectLineArt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectLineArt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectLineArt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectLineArt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectLineArt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectLineArt_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectLineArt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectLineArt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectLineArt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ObjectLineArt_usage_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (int)(data->usage);
}

RNA_EXTERN_C void ObjectLineArt_usage_set(PointerRNA *ptr, int value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
#ifdef __cplusplus
    data->usage = (std::remove_reference_t<decltype(data->usage)>)value;
#else
    data->usage = value;
#endif
}

RNA_EXTERN_C bool ObjectLineArt_use_crease_override_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void ObjectLineArt_use_crease_override_set(PointerRNA *ptr, bool value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C float ObjectLineArt_crease_threshold_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (float)(data->crease_threshold);
}

RNA_EXTERN_C void ObjectLineArt_crease_threshold_set(PointerRNA *ptr, float value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
#ifdef __cplusplus
    data->crease_threshold = (std::remove_reference_t<decltype(data->crease_threshold)>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->crease_threshold = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C bool ObjectLineArt_use_intersection_priority_override_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void ObjectLineArt_use_intersection_priority_override_set(PointerRNA *ptr, bool value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C int ObjectLineArt_intersection_priority_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (int)(data->intersection_priority);
}

RNA_EXTERN_C void ObjectLineArt_intersection_priority_set(PointerRNA *ptr, int value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
#ifdef __cplusplus
    data->intersection_priority = (std::remove_reference_t<decltype(data->intersection_priority)>)CLAMPIS(value, 0, 255);
#else
    data->intersection_priority = CLAMPIS(value, 0, 255);
#endif
}

static PointerRNA ObjectLightLinking_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectLightLinking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectLightLinking_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectLightLinking_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectLightLinking_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectLightLinking_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectLightLinking_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectLightLinking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectLightLinking_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ObjectLightLinking_receiver_collection_get(PointerRNA *ptr)
{
    return rna_LightLinking_receiver_collection_get(ptr);
}

RNA_EXTERN_C void ObjectLightLinking_receiver_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_LightLinking_receiver_collection_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA ObjectLightLinking_blocker_collection_get(PointerRNA *ptr)
{
    return rna_LightLinking_blocker_collection_get(ptr);
}

RNA_EXTERN_C void ObjectLightLinking_blocker_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_LightLinking_blocker_collection_set(ptr, value, reports);
}

RNA_EXTERN_C bool Object_select_get_func(struct Object *_self, bContext *C, struct PointerRNA *view_layer)
{
	return rna_Object_select_get(_self, C, view_layer);
}

static void Object_select_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	result = rna_Object_select_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Object_select_set_func(struct Object *_self, bContext *C, ReportList *reports, bool state, struct PointerRNA *view_layer)
{
	rna_Object_select_set(_self, C, reports, state, view_layer);
}

static void Object_select_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool state;
	struct PointerRNA *view_layer;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	state = *((bool *)_data);
	_data += 8;
	view_layer = ((struct PointerRNA *)_data);
	
	rna_Object_select_set(_self, C, reports, state, view_layer);
}

RNA_EXTERN_C bool Object_hide_get_func(struct Object *_self, bContext *C, struct PointerRNA *view_layer)
{
	return rna_Object_hide_get(_self, C, view_layer);
}

static void Object_hide_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	result = rna_Object_hide_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Object_hide_set_func(struct Object *_self, bContext *C, ReportList *reports, bool state, struct PointerRNA *view_layer)
{
	rna_Object_hide_set(_self, C, reports, state, view_layer);
}

static void Object_hide_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool state;
	struct PointerRNA *view_layer;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	state = *((bool *)_data);
	_data += 8;
	view_layer = ((struct PointerRNA *)_data);
	
	rna_Object_hide_set(_self, C, reports, state, view_layer);
}

RNA_EXTERN_C bool Object_visible_get_func(struct Object *_self, bContext *C, struct PointerRNA *view_layer, struct View3D *viewport)
{
	return rna_Object_visible_get(_self, C, view_layer, viewport);
}

static void Object_visible_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *view_layer;
	struct View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((struct PointerRNA *)_data);
	_data += 24;
	viewport = *((struct View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_visible_get(_self, C, view_layer, viewport);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool Object_holdout_get_func(struct Object *_self, bContext *C, struct PointerRNA *view_layer)
{
	return rna_Object_holdout_get(_self, C, view_layer);
}

static void Object_holdout_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	result = rna_Object_holdout_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool Object_indirect_only_get_func(struct Object *_self, bContext *C, struct PointerRNA *view_layer)
{
	return rna_Object_indirect_only_get(_self, C, view_layer);
}

static void Object_indirect_only_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	result = rna_Object_indirect_only_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool Object_local_view_get_func(struct Object *_self, ReportList *reports, struct View3D *viewport)
{
	return rna_Object_local_view_get(_self, reports, viewport);
}

static void Object_local_view_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = *((struct View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_local_view_get(_self, reports, viewport);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Object_local_view_set_func(struct Object *_self, ReportList *reports, struct PointerRNA *viewport, bool state)
{
	rna_Object_local_view_set(_self, reports, viewport, state);
}

static void Object_local_view_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *viewport;
	bool state;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = ((struct PointerRNA *)_data);
	_data += 24;
	state = *((bool *)_data);
	
	rna_Object_local_view_set(_self, reports, viewport, state);
}

RNA_EXTERN_C bool Object_visible_in_viewport_get_func(struct Object *_self, struct View3D *viewport)
{
	return rna_Object_visible_in_viewport_get(_self, viewport);
}

static void Object_visible_in_viewport_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = *((struct View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_visible_in_viewport_get(_self, viewport);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Object_convert_space_func(struct Object *_self, ReportList *reports, struct bPoseChannel *pose_bone, float matrix[16], float matrix_return[16], int from_space, int to_space)
{
	rna_Object_mat_convert_space(_self, reports, pose_bone, matrix, matrix_return, from_space, to_space);
}

static void Object_convert_space_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct bPoseChannel *pose_bone;
	const float *matrix;
	float *matrix_return;
	int from_space;
	int to_space;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	pose_bone = *((struct bPoseChannel **)_data);
	_data += 8;
	matrix = ((const float *)_data);
	_data += 64;
	matrix_return = ((float *)_data);
	_data += 64;
	from_space = *((int *)_data);
	_data += 8;
	to_space = *((int *)_data);
	
	rna_Object_mat_convert_space(_self, reports, pose_bone, matrix, matrix_return, from_space, to_space);
}

RNA_EXTERN_C void Object_calc_matrix_camera_func(struct Object *_self, struct Depsgraph *depsgraph, float result[16], int x, int y, float scale_x, float scale_y)
{
	rna_Object_calc_matrix_camera(_self, depsgraph, result, x, y, scale_x, scale_y);
}

static void Object_calc_matrix_camera_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	float *result;
	int x;
	int y;
	float scale_x;
	float scale_y;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	result = ((float *)_data);
	_data += 64;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	scale_x = *((float *)_data);
	_data += 8;
	scale_y = *((float *)_data);
	
	rna_Object_calc_matrix_camera(_self, depsgraph, result, x, y, scale_x, scale_y);
}

RNA_EXTERN_C void Object_camera_fit_coords_func(struct Object *_self, struct Depsgraph *depsgraph, int coordinates_num, float *coordinates, float coord_return[3], float *scale_return)
{
	rna_Object_camera_fit_coords(_self, depsgraph, coordinates, coordinates_num, coord_return, scale_return);
}

static void Object_camera_fit_coords_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	int coordinates_num;
	const float *coordinates;
	float *coord_return;
	float *scale_return;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	coordinates_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	coordinates = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	coord_return = ((float *)_data);
	_data += 16;
	scale_return = ((float *)_data);
	
	rna_Object_camera_fit_coords(_self, depsgraph, coordinates, coordinates_num, coord_return, scale_return);
}

RNA_EXTERN_C void Object_crazyspace_eval_func(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, struct Scene *scene)
{
	rna_Object_crazyspace_eval(_self, reports, depsgraph, scene);
}

static void Object_crazyspace_eval_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	struct Scene *scene;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	scene = *((struct Scene **)_data);
	
	rna_Object_crazyspace_eval(_self, reports, depsgraph, scene);
}

RNA_EXTERN_C void Object_crazyspace_displacement_to_deformed_func(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_deformed[3])
{
	rna_Object_crazyspace_displacement_to_deformed(_self, reports, vertex_index, displacement, displacement_deformed);
}

static void Object_crazyspace_displacement_to_deformed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int vertex_index;
	const float *displacement;
	float *displacement_deformed;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_index = *((int *)_data);
	_data += 8;
	displacement = ((const float *)_data);
	_data += 16;
	displacement_deformed = ((float *)_data);
	
	rna_Object_crazyspace_displacement_to_deformed(_self, reports, vertex_index, displacement, displacement_deformed);
}

RNA_EXTERN_C void Object_crazyspace_displacement_to_original_func(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_original[3])
{
	rna_Object_crazyspace_displacement_to_original(_self, reports, vertex_index, displacement, displacement_original);
}

static void Object_crazyspace_displacement_to_original_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int vertex_index;
	const float *displacement;
	float *displacement_original;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_index = *((int *)_data);
	_data += 8;
	displacement = ((const float *)_data);
	_data += 16;
	displacement_original = ((float *)_data);
	
	rna_Object_crazyspace_displacement_to_original(_self, reports, vertex_index, displacement, displacement_original);
}

RNA_EXTERN_C void Object_crazyspace_eval_clear_func(struct Object *_self)
{
	rna_Object_crazyspace_eval_clear(_self);
}

static void Object_crazyspace_eval_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_crazyspace_eval_clear(_self);
}

RNA_EXTERN_C struct Mesh *Object_to_mesh_func(struct Object *_self, ReportList *reports, bool preserve_all_data_layers, struct Depsgraph *depsgraph)
{
	return rna_Object_to_mesh(_self, reports, preserve_all_data_layers, depsgraph);
}

static void Object_to_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool preserve_all_data_layers;
	struct Depsgraph *depsgraph;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	preserve_all_data_layers = *((bool *)_data);
	_data += 8;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Object_to_mesh(_self, reports, preserve_all_data_layers, depsgraph);
	*((struct Mesh **)_retdata) = mesh;
}

RNA_EXTERN_C void Object_to_mesh_clear_func(struct Object *_self)
{
	rna_Object_to_mesh_clear(_self);
}

static void Object_to_mesh_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_to_mesh_clear(_self);
}

RNA_EXTERN_C struct Curve *Object_to_curve_func(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, bool apply_modifiers)
{
	return rna_Object_to_curve(_self, reports, depsgraph, apply_modifiers);
}

static void Object_to_curve_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	bool apply_modifiers;
	struct Curve *curve;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	apply_modifiers = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	curve = rna_Object_to_curve(_self, reports, depsgraph, apply_modifiers);
	*((struct Curve **)_retdata) = curve;
}

RNA_EXTERN_C void Object_to_curve_clear_func(struct Object *_self)
{
	rna_Object_to_curve_clear(_self);
}

static void Object_to_curve_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_to_curve_clear(_self);
}

RNA_EXTERN_C struct Object *Object_find_armature_func(struct Object *_self)
{
	return BKE_modifiers_is_deformed_by_armature(_self);
}

static void Object_find_armature_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Object *ob_arm;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ob_arm = BKE_modifiers_is_deformed_by_armature(_self);
	*((struct Object **)_retdata) = ob_arm;
}

RNA_EXTERN_C struct PointerRNA Object_shape_key_add_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, bool from_mix)
{
	return rna_Object_shape_key_add(_self, C, reports, name, from_mix);
}

static void Object_shape_key_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	bool from_mix;
	struct PointerRNA key;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	from_mix = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	key = rna_Object_shape_key_add(_self, C, reports, name, from_mix);
	*((struct PointerRNA *)_retdata) = key;
}

RNA_EXTERN_C void Object_shape_key_remove_func(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *key)
{
	rna_Object_shape_key_remove(_self, bmain, reports, key);
}

static void Object_shape_key_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *key;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	key = *((struct PointerRNA **)_data);
	
	rna_Object_shape_key_remove(_self, CTX_data_main(C), reports, key);
}

RNA_EXTERN_C void Object_shape_key_clear_func(struct Object *_self, Main *bmain)
{
	rna_Object_shape_key_clear(_self, bmain);
}

static void Object_shape_key_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_shape_key_clear(_self, CTX_data_main(C));
}

RNA_EXTERN_C void Object_ray_cast_func(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float direction[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index)
{
	rna_Object_ray_cast(_self, C, reports, origin, direction, distance, depsgraph, result, location, normal, index);
}

static void Object_ray_cast_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const float *origin;
	const float *direction;
	float distance;
	struct PointerRNA *depsgraph;
	bool *result;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	origin = ((const float *)_data);
	_data += 16;
	direction = ((const float *)_data);
	_data += 16;
	distance = *((float *)_data);
	_data += 8;
	depsgraph = ((struct PointerRNA *)_data);
	_data += 24;
	result = ((bool *)_data);
	_data += 8;
	location = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	index = ((int *)_data);
	
	rna_Object_ray_cast(_self, C, reports, origin, direction, distance, depsgraph, result, location, normal, index);
}

RNA_EXTERN_C void Object_closest_point_on_mesh_func(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index)
{
	rna_Object_closest_point_on_mesh(_self, C, reports, origin, distance, depsgraph, result, location, normal, index);
}

static void Object_closest_point_on_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const float *origin;
	float distance;
	struct PointerRNA *depsgraph;
	bool *result;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	origin = ((const float *)_data);
	_data += 16;
	distance = *((float *)_data);
	_data += 8;
	depsgraph = ((struct PointerRNA *)_data);
	_data += 24;
	result = ((bool *)_data);
	_data += 8;
	location = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	index = ((int *)_data);
	
	rna_Object_closest_point_on_mesh(_self, C, reports, origin, distance, depsgraph, result, location, normal, index);
}

RNA_EXTERN_C bool Object_is_modified_func(struct Object *_self, struct Scene *scene, int settings)
{
	return rna_Object_is_modified(_self, scene, settings);
}

static void Object_is_modified_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	int settings;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	settings = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_is_modified(_self, scene, settings);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool Object_is_deform_modified_func(struct Object *_self, struct Scene *scene, int settings)
{
	return rna_Object_is_deform_modified(_self, scene, settings);
}

static void Object_is_deform_modified_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	int settings;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	settings = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_is_deform_modified(_self, scene, settings);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Object_dm_info_func(struct Object *_self, bContext *C, int type, struct PointerRNA *depsgraph, char * result)
{
	rna_Object_me_eval_info(_self, C, type, depsgraph, result);
}

static void Object_dm_info_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int type;
	struct PointerRNA *depsgraph;
	char * result;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	depsgraph = ((struct PointerRNA *)_data);
	_data += 24;
	result = ((char * )_data);
	
	rna_Object_me_eval_info(_self, C, type, depsgraph, result);
}

RNA_EXTERN_C bool Object_update_from_editmode_func(struct Object *_self, Main *bmain)
{
	return rna_Object_update_from_editmode(_self, bmain);
}

static void Object_update_from_editmode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_Object_update_from_editmode(_self, CTX_data_main(C));
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Object_cache_release_func(struct Object *_self)
{
	BKE_object_free_caches(_self);
}

static void Object_cache_release_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	BKE_object_free_caches(_self);
}

RNA_EXTERN_C bool Object_generate_gpencil_strokes_func(struct Object *_self, bContext *C, ReportList *reports, struct Object *grease_pencil_object, bool use_collections, float scale_thickness, float sample)
{
	return rna_Object_generate_gpencil_strokes(_self, C, reports, grease_pencil_object, use_collections, scale_thickness, sample);
}

static void Object_generate_gpencil_strokes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Object *grease_pencil_object;
	bool use_collections;
	float scale_thickness;
	float sample;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	grease_pencil_object = *((struct Object **)_data);
	_data += 8;
	use_collections = *((bool *)_data);
	_data += 8;
	scale_thickness = *((float *)_data);
	_data += 8;
	sample = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_generate_gpencil_strokes(_self, C, reports, grease_pencil_object, use_collections, scale_thickness, sample);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

bool rna_Object_select_get(struct Object *_self, bContext *C, struct PointerRNA *view_layer);
void rna_Object_select_set(struct Object *_self, bContext *C, ReportList *reports, bool state, struct PointerRNA *view_layer);
bool rna_Object_hide_get(struct Object *_self, bContext *C, struct PointerRNA *view_layer);
void rna_Object_hide_set(struct Object *_self, bContext *C, ReportList *reports, bool state, struct PointerRNA *view_layer);
bool rna_Object_visible_get(struct Object *_self, bContext *C, struct PointerRNA *view_layer, struct View3D *viewport);
bool rna_Object_holdout_get(struct Object *_self, bContext *C, struct PointerRNA *view_layer);
bool rna_Object_indirect_only_get(struct Object *_self, bContext *C, struct PointerRNA *view_layer);
bool rna_Object_local_view_get(struct Object *_self, ReportList *reports, struct View3D *viewport);
void rna_Object_local_view_set(struct Object *_self, ReportList *reports, struct PointerRNA *viewport, bool state);
bool rna_Object_visible_in_viewport_get(struct Object *_self, struct View3D *viewport);
void rna_Object_mat_convert_space(struct Object *_self, ReportList *reports, struct bPoseChannel *pose_bone, float matrix[16], float matrix_return[16], int from_space, int to_space);
void rna_Object_calc_matrix_camera(struct Object *_self, struct Depsgraph *depsgraph, float result[16], int x, int y, float scale_x, float scale_y);
void rna_Object_camera_fit_coords(struct Object *_self, struct Depsgraph *depsgraph, int coordinates_num, float *coordinates, float coord_return[3], float *scale_return);
void rna_Object_crazyspace_eval(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, struct Scene *scene);
void rna_Object_crazyspace_displacement_to_deformed(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_deformed[3]);
void rna_Object_crazyspace_displacement_to_original(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_original[3]);
void rna_Object_crazyspace_eval_clear(struct Object *_self);
struct Mesh *rna_Object_to_mesh(struct Object *_self, ReportList *reports, bool preserve_all_data_layers, struct Depsgraph *depsgraph);
void rna_Object_to_mesh_clear(struct Object *_self);
struct Curve *rna_Object_to_curve(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, bool apply_modifiers);
void rna_Object_to_curve_clear(struct Object *_self);
struct Object *BKE_modifiers_is_deformed_by_armature(struct Object *_self);
struct PointerRNA rna_Object_shape_key_add(struct Object *_self, bContext *C, ReportList *reports, const char * name, bool from_mix);
void rna_Object_shape_key_remove(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *key);
void rna_Object_shape_key_clear(struct Object *_self, Main *bmain);
void rna_Object_ray_cast(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float direction[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index);
void rna_Object_closest_point_on_mesh(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index);
bool rna_Object_is_modified(struct Object *_self, struct Scene *scene, int settings);
bool rna_Object_is_deform_modified(struct Object *_self, struct Scene *scene, int settings);
void rna_Object_me_eval_info(struct Object *_self, bContext *C, int type, struct PointerRNA *depsgraph, char * result);
bool rna_Object_update_from_editmode(struct Object *_self, Main *bmain);
void BKE_object_free_caches(struct Object *_self);
bool rna_Object_generate_gpencil_strokes(struct Object *_self, bContext *C, ReportList *reports, struct Object *grease_pencil_object, bool use_collections, float scale_thickness, float sample);

RNA_EXTERN_C struct ModifierData *ObjectModifiers_new_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_modifier_new(_self, C, reports, name, type);
}

static void ObjectModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	int type;
	struct ModifierData *modifier;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	modifier = rna_Object_modifier_new(_self, C, reports, name, type);
	*((struct ModifierData **)_retdata) = modifier;
}

RNA_EXTERN_C void ObjectModifiers_remove_func(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *modifier)
{
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

static void ObjectModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

RNA_EXTERN_C void ObjectModifiers_clear_func(struct Object *_self, bContext *C)
{
	rna_Object_modifier_clear(_self, C);
}

static void ObjectModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_modifier_clear(_self, C);
}

RNA_EXTERN_C void ObjectModifiers_move_func(struct Object *_self, ReportList *reports, int from_index, int to_index)
{
	rna_Object_modifier_move(_self, reports, from_index, to_index);
}

static void ObjectModifiers_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_Object_modifier_move(_self, reports, from_index, to_index);
}

/* Repeated prototypes to detect errors */

struct ModifierData *rna_Object_modifier_new(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_modifier_remove(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *modifier);
void rna_Object_modifier_clear(struct Object *_self, bContext *C);
void rna_Object_modifier_move(struct Object *_self, ReportList *reports, int from_index, int to_index);

RNA_EXTERN_C struct GpencilModifierData *ObjectGpencilModifiers_new_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_greasepencil_modifier_new(_self, C, reports, name, type);
}

static void ObjectGpencilModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	int type;
	struct GpencilModifierData *greasepencil_modifier;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	greasepencil_modifier = rna_Object_greasepencil_modifier_new(_self, C, reports, name, type);
	*((struct GpencilModifierData **)_retdata) = greasepencil_modifier;
}

RNA_EXTERN_C void ObjectGpencilModifiers_remove_func(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *greasepencil_modifier)
{
	rna_Object_greasepencil_modifier_remove(_self, C, reports, greasepencil_modifier);
}

static void ObjectGpencilModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *greasepencil_modifier;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	greasepencil_modifier = *((struct PointerRNA **)_data);
	
	rna_Object_greasepencil_modifier_remove(_self, C, reports, greasepencil_modifier);
}

RNA_EXTERN_C void ObjectGpencilModifiers_clear_func(struct Object *_self, bContext *C)
{
	rna_Object_greasepencil_modifier_clear(_self, C);
}

static void ObjectGpencilModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_greasepencil_modifier_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct GpencilModifierData *rna_Object_greasepencil_modifier_new(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_greasepencil_modifier_remove(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *greasepencil_modifier);
void rna_Object_greasepencil_modifier_clear(struct Object *_self, bContext *C);

RNA_EXTERN_C struct ShaderFxData *ObjectShaderFx_new_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_shaderfx_new(_self, C, reports, name, type);
}

static void ObjectShaderFx_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	int type;
	struct ShaderFxData *shader_fx;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	shader_fx = rna_Object_shaderfx_new(_self, C, reports, name, type);
	*((struct ShaderFxData **)_retdata) = shader_fx;
}

RNA_EXTERN_C void ObjectShaderFx_remove_func(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *shader_fx)
{
	rna_Object_shaderfx_remove(_self, C, reports, shader_fx);
}

static void ObjectShaderFx_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *shader_fx;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	shader_fx = *((struct PointerRNA **)_data);
	
	rna_Object_shaderfx_remove(_self, C, reports, shader_fx);
}

RNA_EXTERN_C void ObjectShaderFx_clear_func(struct Object *_self, bContext *C)
{
	rna_Object_shaderfx_clear(_self, C);
}

static void ObjectShaderFx_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_shaderfx_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct ShaderFxData *rna_Object_shaderfx_new(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_shaderfx_remove(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *shader_fx);
void rna_Object_shaderfx_clear(struct Object *_self, bContext *C);

RNA_EXTERN_C struct bConstraint *ObjectConstraints_new_func(struct Object *_self, Main *bmain, int type)
{
	return rna_Object_constraints_new(_self, bmain, type);
}

static void ObjectConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int type;
	struct bConstraint *constraint;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	constraint = rna_Object_constraints_new(_self, CTX_data_main(C), type);
	*((struct bConstraint **)_retdata) = constraint;
}

RNA_EXTERN_C void ObjectConstraints_remove_func(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint)
{
	rna_Object_constraints_remove(_self, bmain, reports, constraint);
}

static void ObjectConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *constraint;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	
	rna_Object_constraints_remove(_self, CTX_data_main(C), reports, constraint);
}

RNA_EXTERN_C void ObjectConstraints_clear_func(struct Object *_self, Main *bmain)
{
	rna_Object_constraints_clear(_self, bmain);
}

static void ObjectConstraints_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_constraints_clear(_self, CTX_data_main(C));
}

RNA_EXTERN_C void ObjectConstraints_move_func(struct Object *_self, Main *bmain, ReportList *reports, int from_index, int to_index)
{
	rna_Object_constraints_move(_self, bmain, reports, from_index, to_index);
}

static void ObjectConstraints_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_Object_constraints_move(_self, CTX_data_main(C), reports, from_index, to_index);
}

RNA_EXTERN_C struct bConstraint *ObjectConstraints_copy_func(struct Object *_self, Main *bmain, struct PointerRNA *constraint)
{
	return rna_Object_constraints_copy(_self, bmain, constraint);
}

static void ObjectConstraints_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *constraint;
	struct bConstraint *new_constraint;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	_data += 8;
	_retdata = _data;
	
	new_constraint = rna_Object_constraints_copy(_self, CTX_data_main(C), constraint);
	*((struct bConstraint **)_retdata) = new_constraint;
}

/* Repeated prototypes to detect errors */

struct bConstraint *rna_Object_constraints_new(struct Object *_self, Main *bmain, int type);
void rna_Object_constraints_remove(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint);
void rna_Object_constraints_clear(struct Object *_self, Main *bmain);
void rna_Object_constraints_move(struct Object *_self, Main *bmain, ReportList *reports, int from_index, int to_index);
struct bConstraint *rna_Object_constraints_copy(struct Object *_self, Main *bmain, struct PointerRNA *constraint);

RNA_EXTERN_C struct bDeformGroup *VertexGroups_new_func(struct Object *_self, Main *bmain, ReportList *reports, const char * name)
{
	return rna_Object_vgroup_new(_self, bmain, reports, name);
}

static void VertexGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	struct bDeformGroup *group;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	group = rna_Object_vgroup_new(_self, CTX_data_main(C), reports, name);
	*((struct bDeformGroup **)_retdata) = group;
}

RNA_EXTERN_C void VertexGroups_remove_func(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *group)
{
	rna_Object_vgroup_remove(_self, bmain, reports, group);
}

static void VertexGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *group;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((struct PointerRNA **)_data);
	
	rna_Object_vgroup_remove(_self, CTX_data_main(C), reports, group);
}

RNA_EXTERN_C void VertexGroups_clear_func(struct Object *_self, Main *bmain, ReportList *reports)
{
	rna_Object_vgroup_clear(_self, bmain, reports);
}

static void VertexGroups_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_vgroup_clear(_self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

struct bDeformGroup *rna_Object_vgroup_new(struct Object *_self, Main *bmain, ReportList *reports, const char * name);
void rna_Object_vgroup_remove(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *group);
void rna_Object_vgroup_clear(struct Object *_self, Main *bmain, ReportList *reports);


RNA_EXTERN_C void VertexGroup_add_func(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_num, int *index, float weight, int type)
{
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index, index_num, weight, type);
}

static void VertexGroup_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index_num;
	const int *index;
	float weight;
	int type;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	weight = *((float *)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index, index_num, weight, type);
}

RNA_EXTERN_C void VertexGroup_remove_func(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_num, int *index)
{
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index, index_num);
}

static void VertexGroup_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index_num;
	const int *index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index, index_num);
}

RNA_EXTERN_C float VertexGroup_weight_func(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index)
{
	return rna_VertexGroup_weight(_selfid, _self, reports, index);
}

static void VertexGroup_weight_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index;
	float weight;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	weight = rna_VertexGroup_weight(_selfid, _self, reports, index);
	*((float *)_retdata) = weight;
}

/* Repeated prototypes to detect errors */

void rna_VertexGroup_vertex_add(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_num, int *index, float weight, int type);
void rna_VertexGroup_vertex_remove(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_num, int *index);
float rna_VertexGroup_weight(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index);





/* Object */
PointerPropertyRNA rna_Object_data = {
	{(PropertyRNA *)&rna_Object_type, nullptr,
	-1, "data", 41943233, 1, 0, 0, 0, "Data",
	"Object data",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_data_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_data_get, Object_data_set, rna_Object_data_typef, rna_Object_data_poll,&RNA_ID
};

EnumPropertyRNA rna_Object_type = {
	{(PropertyRNA *)&rna_Object_mode, (PropertyRNA *)&rna_Object_data,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"Type of object",
	0, "ID",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, type), (RawPropertyType)1, nullptr},
	Object_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_object_type_items, 22, 0
};

EnumPropertyRNA rna_Object_mode = {
	{(PropertyRNA *)&rna_Object_bound_box, (PropertyRNA *)&rna_Object_type,
	-1, "mode", 2, 1, 0, 4, 0, "Mode",
	"Object interaction mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, mode), (RawPropertyType)0, nullptr},
	Object_mode_get, nullptr, nullptr, nullptr, nullptr, rna_enum_object_mode_items, 15, 0
};

static float rna_Object_bound_box_default[24] = {
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

FloatPropertyRNA rna_Object_bound_box = {
	{(PropertyRNA *)&rna_Object_parent, (PropertyRNA *)&rna_Object_mode,
	-1, "bound_box", 2, 2, 0, 0, 0, "Bounding Box",
	"Object\'s bounding box in object-space coordinates, all values are -1.0 when not available",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 2, {8, 3, 0}, 24,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_bound_box_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_bound_box_default
};

PointerPropertyRNA rna_Object_parent = {
	{(PropertyRNA *)&rna_Object_parent_type, (PropertyRNA *)&rna_Object_bound_box,
	-1, "parent", 9437313, 1, 0, 0, 0, "Parent",
	"Parent object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_parent_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Object_parent_get, Object_parent_set, nullptr, nullptr,&RNA_Object
};

static const EnumPropertyItem rna_Object_parent_type_items[7] = {
	{0, "OBJECT", 0, "Object", "The object is parented to an object"},
	{4, "ARMATURE", 0, "Armature", ""},
	{4, "LATTICE", 0, "Lattice", "The object is parented to a lattice"},
	{5, "VERTEX", 0, "Vertex", "The object is parented to a vertex"},
	{6, "VERTEX_3", 0, "3 Vertices", ""},
	{7, "BONE", 0, "Bone", "The object is parented to a bone"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_parent_type = {
	{(PropertyRNA *)&rna_Object_parent_vertices, (PropertyRNA *)&rna_Object_parent,
	-1, "parent_type", 3, 1, 0, 0, 0, "Parent Type",
	"Type of parent relation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_parent_type_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Object_parent_type_get, Object_parent_type_set, rna_Object_parent_type_itemf, nullptr, nullptr, rna_Object_parent_type_items, 6, 0
};

static int rna_Object_parent_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Object_parent_vertices = {
	{(PropertyRNA *)&rna_Object_parent_bone, (PropertyRNA *)&rna_Object_parent_type,
	-1, "parent_vertices", 3, 1, 0, 4, 0, "Parent Vertices",
	"Indices of vertices in case of a vertex parenting relation",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, par1), (RawPropertyType)0, nullptr},
	nullptr, nullptr, Object_parent_vertices_get, Object_parent_vertices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_Object_parent_vertices_default
};

StringPropertyRNA rna_Object_parent_bone = {
	{(PropertyRNA *)&rna_Object_use_camera_lock_parent, (PropertyRNA *)&rna_Object_parent_vertices,
	-1, "parent_bone", 262145, 1, 0, 0, 0, "Parent Bone",
	"Name of parent bone in case of a bone parenting relation",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_parent_bone_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Object_parent_bone_get, Object_parent_bone_length, Object_parent_bone_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_Object_use_camera_lock_parent = {
	{(PropertyRNA *)&rna_Object_track_axis, (PropertyRNA *)&rna_Object_parent_bone,
	-1, "use_camera_lock_parent", 3, 1, 0, 0, 0, "Camera Parent Lock",
	"View Lock 3D viewport camera transformation affects the object\'s parent instead",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_camera_lock_parent_get, Object_use_camera_lock_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_Object_track_axis = {
	{(PropertyRNA *)&rna_Object_up_axis, (PropertyRNA *)&rna_Object_use_camera_lock_parent,
	-1, "track_axis", 3, 1, 0, 4, 0, "Track Axis",
	"Axis that points in the \'forward\' direction (applies to Instance Vertices when Align to Vertex Normal is enabled)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, trackflag), (RawPropertyType)1, nullptr},
	Object_track_axis_get, Object_track_axis_set, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 0
};

static const EnumPropertyItem rna_Object_up_axis_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_up_axis = {
	{(PropertyRNA *)&rna_Object_material_slots, (PropertyRNA *)&rna_Object_track_axis,
	-1, "up_axis", 3, 1, 0, 4, 0, "Up Axis",
	"Axis that points in the upward direction (applies to Instance Vertices when Align to Vertex Normal is enabled)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, upflag), (RawPropertyType)1, nullptr},
	Object_up_axis_get, Object_up_axis_set, nullptr, nullptr, nullptr, rna_Object_up_axis_items, 3, 0
};

CollectionPropertyRNA rna_Object_material_slots = {
	{(PropertyRNA *)&rna_Object_active_material, (PropertyRNA *)&rna_Object_up_axis,
	-1, "material_slots", 0, 2049, 0, 0, 0, "Material Slots",
	"Material slots in the object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_material_slots_begin, Object_material_slots_next, Object_material_slots_end, Object_material_slots_get, Object_material_slots_length, nullptr, nullptr, nullptr, &RNA_MaterialSlot
};

PointerPropertyRNA rna_Object_active_material = {
	{(PropertyRNA *)&rna_Object_active_material_index, (PropertyRNA *)&rna_Object_material_slots,
	-1, "active_material", 8388737, 1, 0, 0, 0, "Active Material",
	"Active material being displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 102170624, rna_Object_active_material_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_active_material_get, Object_active_material_set, nullptr, rna_MaterialSlot_material_poll,&RNA_Material
};

IntPropertyRNA rna_Object_active_material_index = {
	{(PropertyRNA *)&rna_Object_location, (PropertyRNA *)&rna_Object_active_material,
	-1, "active_material_index", 1073741825, 1, 0, 0, 0, "Active Material Index",
	"Index of active material slot",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialIndex_update, 119537664, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_active_material_index_get, Object_active_material_index_set, nullptr, nullptr, rna_Object_active_material_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static float rna_Object_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_location = {
	{(PropertyRNA *)&rna_Object_rotation_quaternion, (PropertyRNA *)&rna_Object_active_material_index,
	-1, "location", 3, 1, 0, 4, 0, "Location",
	"Location of the object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, rna_Object_location_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, loc), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_location_get, Object_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Object_location_default
};

static float rna_Object_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_quaternion = {
	{(PropertyRNA *)&rna_Object_rotation_axis_angle, (PropertyRNA *)&rna_Object_location,
	-1, "rotation_quaternion", 3, 1, 0, 4, 0, "Quaternion Rotation",
	"Rotation in Quaternions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 101842944, nullptr, rna_Object_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, quat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_rotation_quaternion_get, Object_rotation_quaternion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_quaternion_default
};

static float rna_Object_rotation_axis_angle_default[4] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_axis_angle = {
	{(PropertyRNA *)&rna_Object_rotation_euler, (PropertyRNA *)&rna_Object_rotation_quaternion,
	-1, "rotation_axis_angle", 3, 1, 0, 0, 0, "Axis-Angle Rotation",
	"Angle of Rotation for Axis-Angle rotation representation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_AXISANGLE | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 101842944, nullptr, rna_Object_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_rotation_axis_angle_get, Object_rotation_axis_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_axis_angle_default
};

static float rna_Object_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_euler = {
	{(PropertyRNA *)&rna_Object_rotation_mode, (PropertyRNA *)&rna_Object_rotation_axis_angle,
	-1, "rotation_euler", 3, 1, 0, 4, 0, "Euler Rotation",
	"Rotation in Eulers",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_EULER | (int)PROP_UNIT_ROTATION), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, rna_Object_rotation_euler_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, rot), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_rotation_euler_get, Object_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, 0.0f, rna_Object_rotation_euler_default
};

EnumPropertyRNA rna_Object_rotation_mode = {
	{(PropertyRNA *)&rna_Object_scale, (PropertyRNA *)&rna_Object_rotation_euler,
	-1, "rotation_mode", 3, 1, 0, 0, 0, "Rotation Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_rotation_mode_get, Object_rotation_mode_set, nullptr, nullptr, nullptr, rna_enum_object_rotation_mode_items, 8, 1
};

static float rna_Object_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_scale = {
	{(PropertyRNA *)&rna_Object_dimensions, (PropertyRNA *)&rna_Object_rotation_mode,
	-1, "scale", 67108867, 1, 0, 4, 0, "Scale",
	"Scaling of the object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, rna_Object_scale_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, scale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_scale_get, Object_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_scale_default
};

static float rna_Object_dimensions_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_dimensions = {
	{(PropertyRNA *)&rna_Object_delta_location, (PropertyRNA *)&rna_Object_scale,
	-1, "dimensions", 1, 2, 0, 0, 0, "Dimensions",
	"Absolute bounding box dimensions of the object.\nWarning: Assigning to it or its members multiple consecutive times will not work correctly, as this needs up-to-date evaluated data",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_dimensions_get, Object_dimensions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Object_dimensions_default
};

static float rna_Object_delta_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_location = {
	{(PropertyRNA *)&rna_Object_delta_rotation_euler, (PropertyRNA *)&rna_Object_dimensions,
	-1, "delta_location", 3, 1, 0, 4, 0, "Delta Location",
	"Extra translation added to the location of the object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dloc), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_delta_location_get, Object_delta_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Object_delta_location_default
};

static float rna_Object_delta_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_rotation_euler = {
	{(PropertyRNA *)&rna_Object_delta_rotation_quaternion, (PropertyRNA *)&rna_Object_delta_location,
	-1, "delta_rotation_euler", 3, 1, 0, 4, 0, "Delta Rotation (Euler)",
	"Extra rotation added to the rotation of the object (when using Euler rotations)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_EULER | (int)PROP_UNIT_ROTATION), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, drot), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_delta_rotation_euler_get, Object_delta_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, 0.0f, rna_Object_delta_rotation_euler_default
};

static float rna_Object_delta_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_rotation_quaternion = {
	{(PropertyRNA *)&rna_Object_delta_scale, (PropertyRNA *)&rna_Object_delta_rotation_euler,
	-1, "delta_rotation_quaternion", 3, 1, 0, 4, 0, "Delta Rotation (Quaternion)",
	"Extra rotation added to the rotation of the object (when using Quaternion rotations)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dquat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_delta_rotation_quaternion_get, Object_delta_rotation_quaternion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_rotation_quaternion_default
};

static float rna_Object_delta_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_delta_scale = {
	{(PropertyRNA *)&rna_Object_lock_location, (PropertyRNA *)&rna_Object_delta_rotation_quaternion,
	-1, "delta_scale", 67108867, 1, 0, 4, 0, "Delta Scale",
	"Extra scaling added to the scale of the object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dscale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_delta_scale_get, Object_delta_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_delta_scale_default
};

static bool rna_Object_lock_location_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Object_lock_location = {
	{(PropertyRNA *)&rna_Object_lock_rotation, (PropertyRNA *)&rna_Object_delta_scale,
	-1, "lock_location", 4099, 1, 0, 0, 0, "Lock Location",
	"Lock editing of location when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_lock_location_get, Object_lock_location_set, nullptr, nullptr, nullptr, nullptr, 0, rna_Object_lock_location_default
};

static bool rna_Object_lock_rotation_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Object_lock_rotation = {
	{(PropertyRNA *)&rna_Object_lock_rotation_w, (PropertyRNA *)&rna_Object_lock_location,
	-1, "lock_rotation", 4099, 1, 0, 0, 0, "Lock Rotation",
	"Lock editing of rotation when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_lock_rotation_get, Object_lock_rotation_set, nullptr, nullptr, nullptr, nullptr, 0, rna_Object_lock_rotation_default
};

BoolPropertyRNA rna_Object_lock_rotation_w = {
	{(PropertyRNA *)&rna_Object_lock_rotations_4d, (PropertyRNA *)&rna_Object_lock_rotation,
	-1, "lock_rotation_w", 4099, 1, 0, 0, 0, "Lock Rotation (4D Angle)",
	"Lock editing of \'angle\' component of four-component rotations when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_lock_rotation_w_get, Object_lock_rotation_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_lock_rotations_4d = {
	{(PropertyRNA *)&rna_Object_lock_scale, (PropertyRNA *)&rna_Object_lock_rotation_w,
	-1, "lock_rotations_4d", 3, 1, 0, 0, 0, "Lock Rotations (4D)",
	"Lock editing of four component rotations by components (instead of as Eulers)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_lock_rotations_4d_get, Object_lock_rotations_4d_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static bool rna_Object_lock_scale_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Object_lock_scale = {
	{(PropertyRNA *)&rna_Object_matrix_world, (PropertyRNA *)&rna_Object_lock_rotations_4d,
	-1, "lock_scale", 4099, 1, 0, 0, 0, "Lock Scale",
	"Lock editing of scale when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_lock_scale_get, Object_lock_scale_set, nullptr, nullptr, nullptr, nullptr, 0, rna_Object_lock_scale_default
};

static float rna_Object_matrix_world_default[16] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_Object_matrix_world = {
	{(PropertyRNA *)&rna_Object_matrix_local, (PropertyRNA *)&rna_Object_lock_scale,
	-1, "matrix_world", 1, 2, 0, 4, 0, "Matrix World",
	"Worldspace transformation matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Object_matrix_world_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, object_to_world), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_matrix_world_get, Object_matrix_world_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_world_default
};

static float rna_Object_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_local = {
	{(PropertyRNA *)&rna_Object_matrix_basis, (PropertyRNA *)&rna_Object_matrix_world,
	-1, "matrix_local", 1, 2, 0, 0, 0, "Local Matrix",
	"Parent relative transformation matrix.\nWarning: Only takes into account object parenting, so e.g. in case of bone parenting you get a matrix relative to the Armature object, not to the actual parent bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_matrix_local_get, Object_matrix_local_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_local_default
};

static float rna_Object_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_basis = {
	{(PropertyRNA *)&rna_Object_matrix_parent_inverse, (PropertyRNA *)&rna_Object_matrix_local,
	-1, "matrix_basis", 1, 2, 0, 0, 0, "Input Matrix",
	"Matrix access to location, rotation and scale (including deltas), before constraints and parenting are applied",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Object_matrix_basis_get, Object_matrix_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_basis_default
};

static float rna_Object_matrix_parent_inverse_default[16] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_Object_matrix_parent_inverse = {
	{(PropertyRNA *)&rna_Object_modifiers, (PropertyRNA *)&rna_Object_matrix_basis,
	-1, "matrix_parent_inverse", 3, 1, 0, 4, 0, "Parent Inverse Matrix",
	"Inverse of object\'s parent matrix at time of parenting",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 101842944, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, parentinv), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_matrix_parent_inverse_get, Object_matrix_parent_inverse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_parent_inverse_default
};

CollectionPropertyRNA rna_Object_modifiers = {
	{(PropertyRNA *)&rna_Object_grease_pencil_modifiers, (PropertyRNA *)&rna_Object_matrix_parent_inverse,
	-1, "modifiers", 0, 1025, 0, 0, 0, "Modifiers",
	"Modifiers affecting the geometric data of the object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_modifiers_override_apply,
	0, PROP_RAW_UNSET, &RNA_ObjectModifiers},
	Object_modifiers_begin, Object_modifiers_next, Object_modifiers_end, Object_modifiers_get, nullptr, Object_modifiers_lookup_int, Object_modifiers_lookup_string, nullptr, &RNA_Modifier
};

CollectionPropertyRNA rna_Object_grease_pencil_modifiers = {
	{(PropertyRNA *)&rna_Object_shader_effects, (PropertyRNA *)&rna_Object_modifiers,
	-1, "grease_pencil_modifiers", 0, 1025, 0, 0, 0, "Grease Pencil Modifiers",
	"Modifiers affecting the data of the grease pencil object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_greasepencil_modifiers_override_apply,
	0, PROP_RAW_UNSET, &RNA_ObjectGpencilModifiers},
	Object_grease_pencil_modifiers_begin, Object_grease_pencil_modifiers_next, Object_grease_pencil_modifiers_end, Object_grease_pencil_modifiers_get, nullptr, Object_grease_pencil_modifiers_lookup_int, Object_grease_pencil_modifiers_lookup_string, nullptr, &RNA_GpencilModifier
};

CollectionPropertyRNA rna_Object_shader_effects = {
	{(PropertyRNA *)&rna_Object_constraints, (PropertyRNA *)&rna_Object_grease_pencil_modifiers,
	-1, "shader_effects", 0, 1, 0, 0, 0, "Shader Effects",
	"Effects affecting display of object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ObjectShaderFx},
	Object_shader_effects_begin, Object_shader_effects_next, Object_shader_effects_end, Object_shader_effects_get, nullptr, Object_shader_effects_lookup_int, Object_shader_effects_lookup_string, nullptr, &RNA_ShaderFx
};

CollectionPropertyRNA rna_Object_constraints = {
	{(PropertyRNA *)&rna_Object_vertex_groups, (PropertyRNA *)&rna_Object_shader_effects,
	-1, "constraints", 0, 1025, 0, 0, 0, "Constraints",
	"Constraints affecting the transformation of the object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_constraints_override_apply,
	0, PROP_RAW_UNSET, &RNA_ObjectConstraints},
	Object_constraints_begin, Object_constraints_next, Object_constraints_end, Object_constraints_get, nullptr, Object_constraints_lookup_int, Object_constraints_lookup_string, nullptr, &RNA_Constraint
};

CollectionPropertyRNA rna_Object_vertex_groups = {
	{(PropertyRNA *)&rna_Object_empty_display_type, (PropertyRNA *)&rna_Object_constraints,
	-1, "vertex_groups", 0, 0, 0, 0, 0, "Vertex Groups",
	"Vertex groups of the object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_VertexGroups},
	Object_vertex_groups_begin, Object_vertex_groups_next, Object_vertex_groups_end, Object_vertex_groups_get, nullptr, nullptr, nullptr, nullptr, &RNA_VertexGroup
};

EnumPropertyRNA rna_Object_empty_display_type = {
	{(PropertyRNA *)&rna_Object_empty_display_size, (PropertyRNA *)&rna_Object_vertex_groups,
	-1, "empty_display_type", 3, 1, 0, 0, 0, "Empty Display Type",
	"Viewport display style for empties",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_empty_display_type_get, Object_empty_display_type_set, nullptr, nullptr, nullptr, rna_enum_object_empty_drawtype_items, 8, 2
};

FloatPropertyRNA rna_Object_empty_display_size = {
	{(PropertyRNA *)&rna_Object_empty_image_offset, (PropertyRNA *)&rna_Object_empty_display_type,
	-1, "empty_display_size", 3, 1, 0, 4, 0, "Empty Display Size",
	"Size of display for empties in the viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, empty_drawsize), (RawPropertyType)5, nullptr},
	Object_empty_display_size_get, Object_empty_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0001000000f, 1000.0f, 1.0f, 2, 1.0f, nullptr
};

static float rna_Object_empty_image_offset_default[2] = {
	-0.5000000000f,
	-0.5000000000f
};

FloatPropertyRNA rna_Object_empty_image_offset = {
	{(PropertyRNA *)&rna_Object_image_user, (PropertyRNA *)&rna_Object_empty_display_size,
	-1, "empty_image_offset", 3, 1, 0, 4, 0, "Origin Offset",
	"Origin offset distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, ima_ofs), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_empty_image_offset_get, Object_empty_image_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, 0.0f, rna_Object_empty_image_offset_default
};

PointerPropertyRNA rna_Object_image_user = {
	{(PropertyRNA *)&rna_Object_empty_image_depth, (PropertyRNA *)&rna_Object_empty_image_offset,
	-1, "image_user", 8650752, 1, 0, 0, 0, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_image_user_get, nullptr, nullptr, nullptr,&RNA_ImageUser
};

static const EnumPropertyItem rna_Object_empty_image_depth_items[4] = {
	{0, "DEFAULT", 0, "Default", ""},
	{1, "FRONT", 0, "Front", ""},
	{2, "BACK", 0, "Back", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_empty_image_depth = {
	{(PropertyRNA *)&rna_Object_show_empty_image_perspective, (PropertyRNA *)&rna_Object_image_user,
	-1, "empty_image_depth", 3, 1, 0, 4, 0, "Empty Image Depth",
	"Determine which other objects will occlude the image",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, empty_image_depth), (RawPropertyType)2, nullptr},
	Object_empty_image_depth_get, Object_empty_image_depth_set, nullptr, nullptr, nullptr, rna_Object_empty_image_depth_items, 3, 0
};

BoolPropertyRNA rna_Object_show_empty_image_perspective = {
	{(PropertyRNA *)&rna_Object_show_empty_image_orthographic, (PropertyRNA *)&rna_Object_empty_image_depth,
	-1, "show_empty_image_perspective", 3, 1, 0, 0, 0, "Display in Perspective Mode",
	"Display image in perspective mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_empty_image_perspective_get, Object_show_empty_image_perspective_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_empty_image_orthographic = {
	{(PropertyRNA *)&rna_Object_show_empty_image_only_axis_aligned, (PropertyRNA *)&rna_Object_show_empty_image_perspective,
	-1, "show_empty_image_orthographic", 3, 1, 0, 0, 0, "Display in Orthographic Mode",
	"Display image in orthographic mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_empty_image_orthographic_get, Object_show_empty_image_orthographic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_empty_image_only_axis_aligned = {
	{(PropertyRNA *)&rna_Object_use_empty_image_alpha, (PropertyRNA *)&rna_Object_show_empty_image_orthographic,
	-1, "show_empty_image_only_axis_aligned", 3, 1, 0, 0, 0, "Display Only Axis Aligned",
	"Only display the image when it is aligned with the view axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_empty_image_only_axis_aligned_get, Object_show_empty_image_only_axis_aligned_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_use_empty_image_alpha = {
	{(PropertyRNA *)&rna_Object_empty_image_side, (PropertyRNA *)&rna_Object_show_empty_image_only_axis_aligned,
	-1, "use_empty_image_alpha", 3, 1, 0, 0, 0, "Use Alpha",
	"Use alpha blending instead of alpha test (can produce sorting artifacts)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_empty_image_alpha_get, Object_use_empty_image_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Object_empty_image_side_items[4] = {
	{0, "DOUBLE_SIDED", 0, "Both", ""},
	{4, "FRONT", 0, "Front", ""},
	{8, "BACK", 0, "Back", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_empty_image_side = {
	{(PropertyRNA *)&rna_Object_add_rest_position_attribute, (PropertyRNA *)&rna_Object_use_empty_image_alpha,
	-1, "empty_image_side", 3, 1, 0, 4, 0, "Empty Image Side",
	"Show front/back side",
	0, "Image",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, empty_image_visibility_flag), (RawPropertyType)2, nullptr},
	Object_empty_image_side_get, Object_empty_image_side_set, nullptr, nullptr, nullptr, rna_Object_empty_image_side_items, 3, 0
};

BoolPropertyRNA rna_Object_add_rest_position_attribute = {
	{(PropertyRNA *)&rna_Object_pass_index, (PropertyRNA *)&rna_Object_empty_image_side,
	-1, "add_rest_position_attribute", 3, 1, 0, 0, 0, "Add Rest Position",
	"Add a \"rest_position\" attribute that is a copy of the position attribute before shape keys and modifiers are evaluated",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_add_rest_position_attribute_get, Object_add_rest_position_attribute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Object_pass_index = {
	{(PropertyRNA *)&rna_Object_color, (PropertyRNA *)&rna_Object_add_rest_position_attribute,
	-1, "pass_index", 3, 1, 0, 4, 0, "Pass Index",
	"Index number for the \"Object Index\" render pass",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, index), (RawPropertyType)1, nullptr},
	Object_pass_index_get, Object_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

static float rna_Object_color_default[4] = {
	1.0f,
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_color = {
	{(PropertyRNA *)&rna_Object_field, (PropertyRNA *)&rna_Object_pass_index,
	-1, "color", 3, 1, 0, 4, 0, "Color",
	"Object color and alpha, used when the Object Color mode is enabled",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Object_color_get, Object_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_color_default
};

PointerPropertyRNA rna_Object_field = {
	{(PropertyRNA *)&rna_Object_collision, (PropertyRNA *)&rna_Object_color,
	-1, "field", 8388608, 1, 0, 0, 0, "Field Settings",
	"Settings for using the object as a field in physics simulation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_field_get, nullptr, nullptr, nullptr,&RNA_FieldSettings
};

PointerPropertyRNA rna_Object_collision = {
	{(PropertyRNA *)&rna_Object_soft_body, (PropertyRNA *)&rna_Object_field,
	-1, "collision", 8388608, 1, 0, 0, 0, "Collision Settings",
	"Settings for using the object as a collider in physics simulation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_collision_get, nullptr, nullptr, nullptr,&RNA_CollisionSettings
};

PointerPropertyRNA rna_Object_soft_body = {
	{(PropertyRNA *)&rna_Object_particle_systems, (PropertyRNA *)&rna_Object_collision,
	-1, "soft_body", 8388608, 1, 0, 0, 0, "Soft Body Settings",
	"Settings for soft body simulation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_soft_body_get, nullptr, nullptr, nullptr,&RNA_SoftBodySettings
};

CollectionPropertyRNA rna_Object_particle_systems = {
	{(PropertyRNA *)&rna_Object_rigid_body, (PropertyRNA *)&rna_Object_soft_body,
	-1, "particle_systems", 0, 1, 0, 0, 0, "Particle Systems",
	"Particle systems emitted from the object",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ParticleSystems},
	Object_particle_systems_begin, Object_particle_systems_next, Object_particle_systems_end, Object_particle_systems_get, nullptr, Object_particle_systems_lookup_int, Object_particle_systems_lookup_string, nullptr, &RNA_ParticleSystem
};

PointerPropertyRNA rna_Object_rigid_body = {
	{(PropertyRNA *)&rna_Object_rigid_body_constraint, (PropertyRNA *)&rna_Object_particle_systems,
	-1, "rigid_body", 8388608, 1, 0, 0, 0, "Rigid Body Settings",
	"Settings for rigid body simulation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_rigid_body_get, nullptr, nullptr, nullptr,&RNA_RigidBodyObject
};

PointerPropertyRNA rna_Object_rigid_body_constraint = {
	{(PropertyRNA *)&rna_Object_use_simulation_cache, (PropertyRNA *)&rna_Object_rigid_body,
	-1, "rigid_body_constraint", 8388608, 1, 0, 0, 0, "Rigid Body Constraint",
	"Constraint constraining rigid bodies",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_rigid_body_constraint_get, nullptr, nullptr, nullptr,&RNA_RigidBodyConstraint
};

BoolPropertyRNA rna_Object_use_simulation_cache = {
	{(PropertyRNA *)&rna_Object_hide_viewport, (PropertyRNA *)&rna_Object_rigid_body_constraint,
	-1, "use_simulation_cache", 1, 1, 0, 0, 0, "Use Simulation Cache",
	"Cache frames during simulation nodes playback",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_simulation_cache_get, Object_use_simulation_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Object_hide_viewport = {
	{(PropertyRNA *)&rna_Object_hide_select, (PropertyRNA *)&rna_Object_use_simulation_cache,
	-1, "hide_viewport", 4355, 1, 0, 0, 0, "Disable in Viewports",
	"Globally disable in viewports",
	284, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_hide_viewport_get, Object_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_hide_select = {
	{(PropertyRNA *)&rna_Object_hide_render, (PropertyRNA *)&rna_Object_hide_viewport,
	-1, "hide_select", 4353, 1, 0, 0, 0, "Disable Selection",
	"Disable selection in viewport",
	256, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_hide_select_get, Object_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_hide_render = {
	{(PropertyRNA *)&rna_Object_hide_probe_volume, (PropertyRNA *)&rna_Object_hide_select,
	-1, "hide_render", 4355, 1, 0, 0, 0, "Disable in Renders",
	"Globally disable in renders",
	258, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_hide_render_get, Object_hide_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_hide_probe_volume = {
	{(PropertyRNA *)&rna_Object_hide_probe_cubemap, (PropertyRNA *)&rna_Object_hide_render,
	-1, "hide_probe_volume", 3, 1, 0, 0, 0, "Disable in Volume Probes",
	"Globally disable in volume probes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_hide_probe_volume_get, Object_hide_probe_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_hide_probe_cubemap = {
	{(PropertyRNA *)&rna_Object_hide_probe_planar, (PropertyRNA *)&rna_Object_hide_probe_volume,
	-1, "hide_probe_cubemap", 3, 1, 0, 0, 0, "Disable in Cubemap Probes",
	"Globally disable in cubemap probes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_hide_probe_cubemap_get, Object_hide_probe_cubemap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_hide_probe_planar = {
	{(PropertyRNA *)&rna_Object_show_instancer_for_render, (PropertyRNA *)&rna_Object_hide_probe_cubemap,
	-1, "hide_probe_planar", 3, 1, 0, 0, 0, "Disable in Planar Probes",
	"Globally disable in planar probes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_hide_probe_planar_get, Object_hide_probe_planar_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_instancer_for_render = {
	{(PropertyRNA *)&rna_Object_show_instancer_for_viewport, (PropertyRNA *)&rna_Object_hide_probe_planar,
	-1, "show_instancer_for_render", 3, 1, 0, 0, 0, "Render Instancer",
	"Make instancer visible when rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_duplicator_visibility_flag_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_instancer_for_render_get, Object_show_instancer_for_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Object_show_instancer_for_viewport = {
	{(PropertyRNA *)&rna_Object_visible_camera, (PropertyRNA *)&rna_Object_show_instancer_for_render,
	-1, "show_instancer_for_viewport", 3, 1, 0, 0, 0, "Display Instancer",
	"Make instancer visible in the viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_duplicator_visibility_flag_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_instancer_for_viewport_get, Object_show_instancer_for_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Object_visible_camera = {
	{(PropertyRNA *)&rna_Object_visible_diffuse, (PropertyRNA *)&rna_Object_show_instancer_for_viewport,
	-1, "visible_camera", 3, 1, 0, 0, 0, "Camera Visibility",
	"Object visibility to camera rays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_visible_camera_get, Object_visible_camera_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_visible_diffuse = {
	{(PropertyRNA *)&rna_Object_visible_glossy, (PropertyRNA *)&rna_Object_visible_camera,
	-1, "visible_diffuse", 3, 1, 0, 0, 0, "Diffuse Visibility",
	"Object visibility to diffuse rays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_visible_diffuse_get, Object_visible_diffuse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_visible_glossy = {
	{(PropertyRNA *)&rna_Object_visible_transmission, (PropertyRNA *)&rna_Object_visible_diffuse,
	-1, "visible_glossy", 3, 1, 0, 0, 0, "Glossy Visibility",
	"Object visibility to glossy rays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_visible_glossy_get, Object_visible_glossy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_visible_transmission = {
	{(PropertyRNA *)&rna_Object_visible_volume_scatter, (PropertyRNA *)&rna_Object_visible_glossy,
	-1, "visible_transmission", 3, 1, 0, 0, 0, "Transmission Visibility",
	"Object visibility to transmission rays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_visible_transmission_get, Object_visible_transmission_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_visible_volume_scatter = {
	{(PropertyRNA *)&rna_Object_visible_shadow, (PropertyRNA *)&rna_Object_visible_transmission,
	-1, "visible_volume_scatter", 3, 1, 0, 0, 0, "Volume Scatter Visibility",
	"Object visibility to volume scattering rays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_visible_volume_scatter_get, Object_visible_volume_scatter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_visible_shadow = {
	{(PropertyRNA *)&rna_Object_is_holdout, (PropertyRNA *)&rna_Object_visible_volume_scatter,
	-1, "visible_shadow", 3, 1, 0, 0, 0, "Shadow Visibility",
	"Object visibility to shadow rays",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_visible_shadow_get, Object_visible_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_is_holdout = {
	{(PropertyRNA *)&rna_Object_is_shadow_catcher, (PropertyRNA *)&rna_Object_visible_shadow,
	-1, "is_holdout", 3, 1, 0, 0, 0, "Holdout",
	"Render objects as a holdout or matte, creating a hole in the image with zero alpha, to fill out in compositing with real footage or another render",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_is_holdout_get, Object_is_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_is_shadow_catcher = {
	{(PropertyRNA *)&rna_Object_instance_type, (PropertyRNA *)&rna_Object_is_holdout,
	-1, "is_shadow_catcher", 3, 1, 0, 0, 0, "Shadow Catcher",
	"Only render shadows and reflections on this object, for compositing renders into real footage. Objects with this setting are considered to already exist in the footage, objects without it are synthetic objects being composited into it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_is_shadow_catcher_get, Object_is_shadow_catcher_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Object_instance_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{16, "VERTS", 0, "Vertices", "Instantiate child objects on all vertices"},
	{512, "FACES", 0, "Faces", "Instantiate child objects on all faces"},
	{256, "COLLECTION", 0, "Collection", "Enable collection instancing"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_instance_type = {
	{(PropertyRNA *)&rna_Object_use_instance_vertices_rotation, (PropertyRNA *)&rna_Object_is_shadow_catcher,
	-1, "instance_type", 3, 1, 0, 4, 0, "Instance Type",
	"If not None, object instancing method to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, transflag), (RawPropertyType)1, nullptr},
	Object_instance_type_get, Object_instance_type_set, rna_Object_instance_type_itemf, nullptr, nullptr, rna_Object_instance_type_items, 4, 0
};

BoolPropertyRNA rna_Object_use_instance_vertices_rotation = {
	{(PropertyRNA *)&rna_Object_use_instance_faces_scale, (PropertyRNA *)&rna_Object_instance_type,
	-1, "use_instance_vertices_rotation", 3, 1, 0, 0, 0, "Orient with Normals",
	"Rotate instance according to vertex normal",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_instance_vertices_rotation_get, Object_use_instance_vertices_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_use_instance_faces_scale = {
	{(PropertyRNA *)&rna_Object_instance_faces_scale, (PropertyRNA *)&rna_Object_use_instance_vertices_rotation,
	-1, "use_instance_faces_scale", 3, 1, 0, 0, 0, "Scale to Face Sizes",
	"Scale instance based on face size",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_instance_faces_scale_get, Object_use_instance_faces_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Object_instance_faces_scale = {
	{(PropertyRNA *)&rna_Object_instance_collection, (PropertyRNA *)&rna_Object_use_instance_faces_scale,
	-1, "instance_faces_scale", 3, 1, 0, 4, 0, "Instance Faces Scale",
	"Scale the face instance objects",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, instance_faces_scale), (RawPropertyType)5, nullptr},
	Object_instance_faces_scale_get, Object_instance_faces_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 10.0f, 3, 1.0f, nullptr
};

PointerPropertyRNA rna_Object_instance_collection = {
	{(PropertyRNA *)&rna_Object_is_instancer, (PropertyRNA *)&rna_Object_instance_faces_scale,
	-1, "instance_collection", 8388737, 1, 0, 0, 0, "Instance Collection",
	"Instance an existing collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_instance_collection_get, Object_instance_collection_set, nullptr, nullptr,&RNA_Collection
};

BoolPropertyRNA rna_Object_is_instancer = {
	{(PropertyRNA *)&rna_Object_display_type, (PropertyRNA *)&rna_Object_instance_collection,
	-1, "is_instancer", 2, 2, 0, 0, 0, "is_instancer",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_is_instancer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Object_display_type_items[5] = {
	{1, "BOUNDS", 0, "Bounds", "Display the bounds of the object"},
	{2, "WIRE", 0, "Wire", "Display the object as a wireframe"},
	{3, "SOLID", 0, "Solid", "Display the object as a solid (if solid drawing is enabled in the viewport)"},
	{5, "TEXTURED", 0, "Textured", "Display the object with textures (if textures are enabled in the viewport)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_display_type = {
	{(PropertyRNA *)&rna_Object_show_bounds, (PropertyRNA *)&rna_Object_is_instancer,
	-1, "display_type", 3, 1, 0, 4, 0, "Display As",
	"How to display object in viewport",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dt), (RawPropertyType)2, nullptr},
	Object_display_type_get, Object_display_type_set, nullptr, nullptr, nullptr, rna_Object_display_type_items, 4, 5
};

BoolPropertyRNA rna_Object_show_bounds = {
	{(PropertyRNA *)&rna_Object_display_bounds_type, (PropertyRNA *)&rna_Object_display_type,
	-1, "show_bounds", 3, 1, 0, 0, 0, "Display Bounds",
	"Display the object\'s bounds",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_bounds_get, Object_show_bounds_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Object_display_bounds_type_items[6] = {
	{0, "BOX", 0, "Box", "Display bounds as box"},
	{1, "SPHERE", 0, "Sphere", "Display bounds as sphere"},
	{2, "CYLINDER", 0, "Cylinder", "Display bounds as cylinder"},
	{3, "CONE", 0, "Cone", "Display bounds as cone"},
	{7, "CAPSULE", 0, "Capsule", "Display bounds as capsule"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_display_bounds_type = {
	{(PropertyRNA *)&rna_Object_show_name, (PropertyRNA *)&rna_Object_show_bounds,
	-1, "display_bounds_type", 3, 1, 0, 4, 0, "Display Bounds Type",
	"Object boundary display type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, boundtype), (RawPropertyType)2, nullptr},
	Object_display_bounds_type_get, Object_display_bounds_type_set, nullptr, nullptr, nullptr, rna_Object_display_bounds_type_items, 5, 0
};

BoolPropertyRNA rna_Object_show_name = {
	{(PropertyRNA *)&rna_Object_show_axis, (PropertyRNA *)&rna_Object_display_bounds_type,
	-1, "show_name", 3, 1, 0, 0, 0, "Display Name",
	"Display the object\'s name",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_name_get, Object_show_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_axis = {
	{(PropertyRNA *)&rna_Object_show_texture_space, (PropertyRNA *)&rna_Object_show_name,
	-1, "show_axis", 3, 1, 0, 0, 0, "Display Axes",
	"Display the object\'s origin and axes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_axis_get, Object_show_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_texture_space = {
	{(PropertyRNA *)&rna_Object_show_wire, (PropertyRNA *)&rna_Object_show_axis,
	-1, "show_texture_space", 3, 1, 0, 0, 0, "Display Texture Space",
	"Display the object\'s texture space",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_texture_space_get, Object_show_texture_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_wire = {
	{(PropertyRNA *)&rna_Object_show_all_edges, (PropertyRNA *)&rna_Object_show_texture_space,
	-1, "show_wire", 3, 1, 0, 0, 0, "Display Wire",
	"Display the object\'s wireframe over solid shading",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_wire_get, Object_show_wire_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_all_edges = {
	{(PropertyRNA *)&rna_Object_use_grease_pencil_lights, (PropertyRNA *)&rna_Object_show_wire,
	-1, "show_all_edges", 3, 1, 0, 0, 0, "Display All Edges",
	"Display all edges for mesh objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_all_edges_get, Object_show_all_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_use_grease_pencil_lights = {
	{(PropertyRNA *)&rna_Object_show_transparent, (PropertyRNA *)&rna_Object_show_all_edges,
	-1, "use_grease_pencil_lights", 3, 1, 0, 0, 0, "Use Lights",
	"Lights affect grease pencil object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_grease_pencil_lights_get, Object_use_grease_pencil_lights_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Object_show_transparent = {
	{(PropertyRNA *)&rna_Object_show_in_front, (PropertyRNA *)&rna_Object_use_grease_pencil_lights,
	-1, "show_transparent", 3, 1, 0, 0, 0, "Display Transparent",
	"Display material transparency in the object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_transparent_get, Object_show_transparent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_show_in_front = {
	{(PropertyRNA *)&rna_Object_pose, (PropertyRNA *)&rna_Object_show_transparent,
	-1, "show_in_front", 3, 1, 0, 0, 0, "In Front",
	"Make the object display in front of others",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_in_front_get, Object_show_in_front_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_pose = {
	{(PropertyRNA *)&rna_Object_show_only_shape_key, (PropertyRNA *)&rna_Object_show_in_front,
	-1, "pose", 8388608, 1, 0, 0, 0, "Pose",
	"Current pose for armatures",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_pose_get, nullptr, nullptr, nullptr,&RNA_Pose
};

BoolPropertyRNA rna_Object_show_only_shape_key = {
	{(PropertyRNA *)&rna_Object_use_shape_key_edit_mode, (PropertyRNA *)&rna_Object_pose,
	-1, "show_only_shape_key", 4099, 1, 0, 0, 0, "Shape Key Lock",
	"Only show the active shape key at full value",
	42, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_show_only_shape_key_get, Object_show_only_shape_key_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_use_shape_key_edit_mode = {
	{(PropertyRNA *)&rna_Object_active_shape_key, (PropertyRNA *)&rna_Object_show_only_shape_key,
	-1, "use_shape_key_edit_mode", 3, 1, 0, 0, 0, "Shape Key Edit Mode",
	"Display shape keys in edit mode (for meshes only)",
	131, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_shape_key_edit_mode_get, Object_use_shape_key_edit_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_active_shape_key = {
	{(PropertyRNA *)&rna_Object_active_shape_key_index, (PropertyRNA *)&rna_Object_use_shape_key_edit_mode,
	-1, "active_shape_key", 8388608, 6, 0, 0, 0, "Active Shape Key",
	"Current shape key",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_active_shape_key_get, nullptr, nullptr, nullptr,&RNA_ShapeKey
};

IntPropertyRNA rna_Object_active_shape_key_index = {
	{(PropertyRNA *)&rna_Object_use_dynamic_topology_sculpting, (PropertyRNA *)&rna_Object_active_shape_key,
	-1, "active_shape_key_index", 1, 1, 0, 0, 0, "Active Shape Key Index",
	"Current shape key index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_active_shape_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_active_shape_key_index_get, Object_active_shape_key_index_set, nullptr, nullptr, rna_Object_active_shape_key_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, 0, nullptr
};

BoolPropertyRNA rna_Object_use_dynamic_topology_sculpting = {
	{(PropertyRNA *)&rna_Object_is_from_instancer, (PropertyRNA *)&rna_Object_active_shape_key_index,
	-1, "use_dynamic_topology_sculpting", 2, 1, 0, 0, 0, "Dynamic Topology Sculpting",
	nullptr,
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_dynamic_topology_sculpting_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_is_from_instancer = {
	{(PropertyRNA *)&rna_Object_is_from_set, (PropertyRNA *)&rna_Object_use_dynamic_topology_sculpting,
	-1, "is_from_instancer", 2, 2, 0, 0, 0, "Base from Instancer",
	"Object comes from a instancer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_is_from_instancer_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_is_from_set = {
	{(PropertyRNA *)&rna_Object_display, (PropertyRNA *)&rna_Object_is_from_instancer,
	-1, "is_from_set", 2, 2, 0, 0, 0, "Base from Set",
	"Object comes from a background set",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_is_from_set_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_display = {
	{(PropertyRNA *)&rna_Object_lineart, (PropertyRNA *)&rna_Object_is_from_set,
	-1, "display", 8650752, 1, 0, 0, 0, "Object Display",
	"Object display settings for 3D viewport",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_display_get, nullptr, nullptr, nullptr,&RNA_ObjectDisplay
};

PointerPropertyRNA rna_Object_lineart = {
	{(PropertyRNA *)&rna_Object_use_mesh_mirror_x, (PropertyRNA *)&rna_Object_display,
	-1, "lineart", 8388608, 1, 0, 0, 0, "Line Art",
	"Line art settings for the object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_lineart_get, nullptr, nullptr, nullptr,&RNA_ObjectLineArt
};

BoolPropertyRNA rna_Object_use_mesh_mirror_x = {
	{(PropertyRNA *)&rna_Object_use_mesh_mirror_y, (PropertyRNA *)&rna_Object_lineart,
	-1, "use_mesh_mirror_x", 3, 1, 0, 0, 0, "X",
	"Enable mesh symmetry in the X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_mesh_mirror_x_get, Object_use_mesh_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_use_mesh_mirror_y = {
	{(PropertyRNA *)&rna_Object_use_mesh_mirror_z, (PropertyRNA *)&rna_Object_use_mesh_mirror_x,
	-1, "use_mesh_mirror_y", 3, 1, 0, 0, 0, "Y",
	"Enable mesh symmetry in the Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, rna_Object_mesh_symmetry_yz_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_mesh_mirror_y_get, Object_use_mesh_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Object_use_mesh_mirror_z = {
	{(PropertyRNA *)&rna_Object_lightgroup, (PropertyRNA *)&rna_Object_use_mesh_mirror_y,
	-1, "use_mesh_mirror_z", 3, 1, 0, 0, 0, "Z",
	"Enable mesh symmetry in the Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, rna_Object_mesh_symmetry_yz_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_use_mesh_mirror_z_get, Object_use_mesh_mirror_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_Object_lightgroup = {
	{(PropertyRNA *)&rna_Object_light_linking, (PropertyRNA *)&rna_Object_use_mesh_mirror_z,
	-1, "lightgroup", 262145, 1, 0, 0, 0, "Lightgroup",
	"Lightgroup that the object belongs to",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_lightgroup_get, Object_lightgroup_length, Object_lightgroup_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_Object_light_linking = {
	{(PropertyRNA *)&rna_Object_animation_data, (PropertyRNA *)&rna_Object_lightgroup,
	-1, "light_linking", 8650752, 1, 0, 0, 0, "Light Linking",
	"Light linking settings",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_light_linking_get, nullptr, nullptr, nullptr,&RNA_ObjectLightLinking
};

PointerPropertyRNA rna_Object_animation_data = {
	{(PropertyRNA *)&rna_Object_animation_visualization, (PropertyRNA *)&rna_Object_light_linking,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Object_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

PointerPropertyRNA rna_Object_animation_visualization = {
	{(PropertyRNA *)&rna_Object_motion_path, (PropertyRNA *)&rna_Object_animation_data,
	-1, "animation_visualization", 8650752, 1, 0, 0, 0, "Animation Visualization",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_animation_visualization_get, nullptr, nullptr, nullptr,&RNA_AnimViz
};

PointerPropertyRNA rna_Object_motion_path = {
	{nullptr, (PropertyRNA *)&rna_Object_animation_visualization,
	-1, "motion_path", 8388608, 0, 0, 0, 0, "Motion Path",
	"Motion Path for this element",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Object_motion_path_get, nullptr, nullptr, nullptr,&RNA_MotionPath
};

PointerPropertyRNA rna_Object_select_get_view_layer = {
	{(PropertyRNA *)&rna_Object_select_get_result, nullptr,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_select_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_select_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_select_get_func = {
	{(FunctionRNA *)&rna_Object_select_set_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Object_select_get_view_layer, (PropertyRNA *)&rna_Object_select_get_result}},
	"select_get", 8, "Test if the object is selected. The selection state is per view layer",
	Object_select_get_call,
	(PropertyRNA *)&rna_Object_select_get_result
};

BoolPropertyRNA rna_Object_select_set_state = {
	{(PropertyRNA *)&rna_Object_select_set_view_layer, nullptr,
	-1, "state", 3, 0, 1, 0, 0, "",
	"Selection state to define",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_select_set_view_layer = {
	{nullptr, (PropertyRNA *)&rna_Object_select_set_state,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

FunctionRNA rna_Object_select_set_func = {
	{(FunctionRNA *)&rna_Object_hide_get_func, (FunctionRNA *)&rna_Object_select_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_select_set_state, (PropertyRNA *)&rna_Object_select_set_view_layer}},
	"select_set", 24, "Select or deselect the object. The selection state is per view layer",
	Object_select_set_call,
	nullptr
};

PointerPropertyRNA rna_Object_hide_get_view_layer = {
	{(PropertyRNA *)&rna_Object_hide_get_result, nullptr,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_hide_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_hide_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object hidden",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_hide_get_func = {
	{(FunctionRNA *)&rna_Object_hide_set_func, (FunctionRNA *)&rna_Object_select_set_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_hide_get_view_layer, (PropertyRNA *)&rna_Object_hide_get_result}},
	"hide_get", 8, "Test if the object is hidden for viewport editing. This hiding state is per view layer",
	Object_hide_get_call,
	(PropertyRNA *)&rna_Object_hide_get_result
};

BoolPropertyRNA rna_Object_hide_set_state = {
	{(PropertyRNA *)&rna_Object_hide_set_view_layer, nullptr,
	-1, "state", 3, 0, 1, 0, 0, "",
	"Hide state to define",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_hide_set_view_layer = {
	{nullptr, (PropertyRNA *)&rna_Object_hide_set_state,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

FunctionRNA rna_Object_hide_set_func = {
	{(FunctionRNA *)&rna_Object_visible_get_func, (FunctionRNA *)&rna_Object_hide_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_hide_set_state, (PropertyRNA *)&rna_Object_hide_set_view_layer}},
	"hide_set", 24, "Hide the object for viewport editing. This hiding state is per view layer",
	Object_hide_set_call,
	nullptr
};

PointerPropertyRNA rna_Object_visible_get_view_layer = {
	{(PropertyRNA *)&rna_Object_visible_get_viewport, nullptr,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

PointerPropertyRNA rna_Object_visible_get_viewport = {
	{(PropertyRNA *)&rna_Object_visible_get_result, (PropertyRNA *)&rna_Object_visible_get_view_layer,
	-1, "viewport", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active 3D viewport",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_visible_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_visible_get_viewport,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object visible",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_visible_get_func = {
	{(FunctionRNA *)&rna_Object_holdout_get_func, (FunctionRNA *)&rna_Object_hide_set_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_visible_get_view_layer, (PropertyRNA *)&rna_Object_visible_get_result}},
	"visible_get", 8, "Test if the object is visible in the 3D viewport, taking into account all visibility settings",
	Object_visible_get_call,
	(PropertyRNA *)&rna_Object_visible_get_result
};

PointerPropertyRNA rna_Object_holdout_get_view_layer = {
	{(PropertyRNA *)&rna_Object_holdout_get_result, nullptr,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_holdout_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_holdout_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object holdout",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_holdout_get_func = {
	{(FunctionRNA *)&rna_Object_indirect_only_get_func, (FunctionRNA *)&rna_Object_visible_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_holdout_get_view_layer, (PropertyRNA *)&rna_Object_holdout_get_result}},
	"holdout_get", 8, "Test if object is masked in the view layer",
	Object_holdout_get_call,
	(PropertyRNA *)&rna_Object_holdout_get_result
};

PointerPropertyRNA rna_Object_indirect_only_get_view_layer = {
	{(PropertyRNA *)&rna_Object_indirect_only_get_result, nullptr,
	-1, "view_layer", 8388608, 0, 4, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_indirect_only_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_indirect_only_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object indirect only",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_indirect_only_get_func = {
	{(FunctionRNA *)&rna_Object_local_view_get_func, (FunctionRNA *)&rna_Object_holdout_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_indirect_only_get_view_layer, (PropertyRNA *)&rna_Object_indirect_only_get_result}},
	"indirect_only_get", 8, "Test if object is set to contribute only indirectly (through shadows and reflections) in the view layer",
	Object_indirect_only_get_call,
	(PropertyRNA *)&rna_Object_indirect_only_get_result
};

PointerPropertyRNA rna_Object_local_view_get_viewport = {
	{(PropertyRNA *)&rna_Object_local_view_get_result, nullptr,
	-1, "viewport", 8388608, 0, 1, 0, 0, "",
	"Viewport in local view",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_local_view_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_local_view_get_viewport,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object local view state",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_local_view_get_func = {
	{(FunctionRNA *)&rna_Object_local_view_set_func, (FunctionRNA *)&rna_Object_indirect_only_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_local_view_get_viewport, (PropertyRNA *)&rna_Object_local_view_get_result}},
	"local_view_get", 16, "Get the local view state for this object",
	Object_local_view_get_call,
	(PropertyRNA *)&rna_Object_local_view_get_result
};

PointerPropertyRNA rna_Object_local_view_set_viewport = {
	{(PropertyRNA *)&rna_Object_local_view_set_state, nullptr,
	-1, "viewport", 8388608, 0, 5, 0, 0, "",
	"Viewport in local view",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_local_view_set_state = {
	{nullptr, (PropertyRNA *)&rna_Object_local_view_set_viewport,
	-1, "state", 3, 0, 1, 0, 0, "",
	"Local view state to define",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_local_view_set_func = {
	{(FunctionRNA *)&rna_Object_visible_in_viewport_get_func, (FunctionRNA *)&rna_Object_local_view_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_local_view_set_viewport, (PropertyRNA *)&rna_Object_local_view_set_state}},
	"local_view_set", 16, "Set the local view state for this object",
	Object_local_view_set_call,
	nullptr
};

PointerPropertyRNA rna_Object_visible_in_viewport_get_viewport = {
	{(PropertyRNA *)&rna_Object_visible_in_viewport_get_result, nullptr,
	-1, "viewport", 8388608, 0, 1, 0, 0, "",
	"Viewport in local collections",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_visible_in_viewport_get_result = {
	{nullptr, (PropertyRNA *)&rna_Object_visible_in_viewport_get_viewport,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object viewport visibility",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_visible_in_viewport_get_func = {
	{(FunctionRNA *)&rna_Object_convert_space_func, (FunctionRNA *)&rna_Object_local_view_set_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_visible_in_viewport_get_viewport, (PropertyRNA *)&rna_Object_visible_in_viewport_get_result}},
	"visible_in_viewport_get", 0, "Check for local view and local collections for this viewport and object",
	Object_visible_in_viewport_get_call,
	(PropertyRNA *)&rna_Object_visible_in_viewport_get_result
};

PointerPropertyRNA rna_Object_convert_space_pose_bone = {
	{(PropertyRNA *)&rna_Object_convert_space_matrix, nullptr,
	-1, "pose_bone", 8388608, 0, 0, 0, 0, "",
	"Bone to use to define spaces (may be None, in which case only the two \'WORLD\' and \'LOCAL\' spaces are usable)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_PoseBone
};

static float rna_Object_convert_space_matrix_default[16] = {
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

FloatPropertyRNA rna_Object_convert_space_matrix = {
	{(PropertyRNA *)&rna_Object_convert_space_matrix_return, (PropertyRNA *)&rna_Object_convert_space_pose_bone,
	-1, "matrix", 3, 0, 0, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_convert_space_matrix_default
};

static float rna_Object_convert_space_matrix_return_default[16] = {
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

FloatPropertyRNA rna_Object_convert_space_matrix_return = {
	{(PropertyRNA *)&rna_Object_convert_space_from_space, (PropertyRNA *)&rna_Object_convert_space_matrix,
	-1, "matrix_return", 3, 0, 2, 0, 0, "",
	"The transformed matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_convert_space_matrix_return_default
};

static const EnumPropertyItem rna_Object_convert_space_from_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The most global space in Blender"},
	{2, "POSE", 0, "Pose Space", "The pose space of a bone (its armature\'s object space)"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The rest pose local space of a bone (this matrix includes parent transforms)"},
	{1, "LOCAL", 0, "Local Space", "The local space of an object/bone"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_convert_space_from_space = {
	{(PropertyRNA *)&rna_Object_convert_space_to_space, (PropertyRNA *)&rna_Object_convert_space_matrix_return,
	-1, "from_space", 3, 0, 0, 0, 0, "",
	"The space in which \'matrix\' is currently",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_convert_space_from_space_items, 4, 0
};

static const EnumPropertyItem rna_Object_convert_space_to_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The most global space in Blender"},
	{2, "POSE", 0, "Pose Space", "The pose space of a bone (its armature\'s object space)"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The rest pose local space of a bone (this matrix includes parent transforms)"},
	{1, "LOCAL", 0, "Local Space", "The local space of an object/bone"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_convert_space_to_space = {
	{nullptr, (PropertyRNA *)&rna_Object_convert_space_from_space,
	-1, "to_space", 3, 0, 0, 0, 0, "",
	"The space to which you want to transform \'matrix\'",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_convert_space_to_space_items, 4, 0
};

FunctionRNA rna_Object_convert_space_func = {
	{(FunctionRNA *)&rna_Object_calc_matrix_camera_func, (FunctionRNA *)&rna_Object_visible_in_viewport_get_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_convert_space_pose_bone, (PropertyRNA *)&rna_Object_convert_space_to_space}},
	"convert_space", 16, "Convert (transform) the given matrix from one space to another",
	Object_convert_space_call,
	nullptr
};

PointerPropertyRNA rna_Object_calc_matrix_camera_depsgraph = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_result, nullptr,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"Depsgraph to get evaluated data from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

static float rna_Object_calc_matrix_camera_result_default[16] = {
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

FloatPropertyRNA rna_Object_calc_matrix_camera_result = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_x, (PropertyRNA *)&rna_Object_calc_matrix_camera_depsgraph,
	-1, "result", 3, 0, 2, 0, 0, "",
	"The camera projection matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_calc_matrix_camera_result_default
};

IntPropertyRNA rna_Object_calc_matrix_camera_x = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_y, (PropertyRNA *)&rna_Object_calc_matrix_camera_result,
	-1, "x", 3, 0, 0, 0, 0, "",
	"Width of the render area",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 1, nullptr
};

IntPropertyRNA rna_Object_calc_matrix_camera_y = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_scale_x, (PropertyRNA *)&rna_Object_calc_matrix_camera_x,
	-1, "y", 3, 0, 0, 0, 0, "",
	"Height of the render area",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 1, nullptr
};

FloatPropertyRNA rna_Object_calc_matrix_camera_scale_x = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_scale_y, (PropertyRNA *)&rna_Object_calc_matrix_camera_y,
	-1, "scale_x", 3, 0, 0, 0, 0, "",
	"Width scaling factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0000010000f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Object_calc_matrix_camera_scale_y = {
	{nullptr, (PropertyRNA *)&rna_Object_calc_matrix_camera_scale_x,
	-1, "scale_y", 3, 0, 0, 0, 0, "",
	"Height scaling factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0000010000f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FunctionRNA rna_Object_calc_matrix_camera_func = {
	{(FunctionRNA *)&rna_Object_camera_fit_coords_func, (FunctionRNA *)&rna_Object_convert_space_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_depsgraph, (PropertyRNA *)&rna_Object_calc_matrix_camera_scale_y}},
	"calc_matrix_camera", 0, "Generate the camera projection matrix of this object (mostly useful for Camera and Light types)",
	Object_calc_matrix_camera_call,
	nullptr
};

PointerPropertyRNA rna_Object_camera_fit_coords_depsgraph = {
	{(PropertyRNA *)&rna_Object_camera_fit_coords_coordinates, nullptr,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"Depsgraph to get evaluated data from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

static float rna_Object_camera_fit_coords_coordinates_default[1] = {
	0.0f
};

FloatPropertyRNA rna_Object_camera_fit_coords_coordinates = {
	{(PropertyRNA *)&rna_Object_camera_fit_coords_co_return, (PropertyRNA *)&rna_Object_camera_fit_coords_depsgraph,
	-1, "coordinates", 393219, 0, 1, 0, 0, "",
	"Coordinates to fit in",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_camera_fit_coords_coordinates_default
};

static float rna_Object_camera_fit_coords_co_return_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_camera_fit_coords_co_return = {
	{(PropertyRNA *)&rna_Object_camera_fit_coords_scale_return, (PropertyRNA *)&rna_Object_camera_fit_coords_coordinates,
	-1, "co_return", 3, 0, 2, 0, 0, "",
	"The location to aim to be able to see all given points",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_camera_fit_coords_co_return_default
};

FloatPropertyRNA rna_Object_camera_fit_coords_scale_return = {
	{nullptr, (PropertyRNA *)&rna_Object_camera_fit_coords_co_return,
	-1, "scale_return", 3, 0, 2, 0, 0, "",
	"The ortho scale to aim to be able to see all given points (if relevant)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_Object_camera_fit_coords_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_eval_func, (FunctionRNA *)&rna_Object_calc_matrix_camera_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_camera_fit_coords_depsgraph, (PropertyRNA *)&rna_Object_camera_fit_coords_scale_return}},
	"camera_fit_coords", 0, "Compute the coordinate (and scale for ortho cameras) given object should be to \'see\' all given coordinates",
	Object_camera_fit_coords_call,
	nullptr
};

PointerPropertyRNA rna_Object_crazyspace_eval_depsgraph = {
	{(PropertyRNA *)&rna_Object_crazyspace_eval_scene, nullptr,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "Dependency Graph",
	"Evaluated dependency graph",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

PointerPropertyRNA rna_Object_crazyspace_eval_scene = {
	{nullptr, (PropertyRNA *)&rna_Object_crazyspace_eval_depsgraph,
	-1, "scene", 8388736, 0, 1, 0, 0, "Scene",
	"Scene of the object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

FunctionRNA rna_Object_crazyspace_eval_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_displacement_to_deformed_func, (FunctionRNA *)&rna_Object_camera_fit_coords_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_crazyspace_eval_depsgraph, (PropertyRNA *)&rna_Object_crazyspace_eval_scene}},
	"crazyspace_eval", 16, "Compute orientation mapping between vertices of an original object and object with shape keys and deforming modifiers applied.The evaluation is to be freed with the crazyspace_eval_free function",
	Object_crazyspace_eval_call,
	nullptr
};

IntPropertyRNA rna_Object_crazyspace_displacement_to_deformed_vertex_index = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement, nullptr,
	-1, "vertex_index", 3, 0, 0, 0, 0, "vertex_index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static float rna_Object_crazyspace_displacement_to_deformed_displacement_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement_deformed, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_vertex_index,
	-1, "displacement", 3, 0, 0, 0, 0, "displacement",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_deformed_displacement_default
};

static float rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement_deformed = {
	{nullptr, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement,
	-1, "displacement_deformed", 3, 0, 3, 0, 0, "displacement_deformed",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_default
};

FunctionRNA rna_Object_crazyspace_displacement_to_deformed_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_displacement_to_original_func, (FunctionRNA *)&rna_Object_crazyspace_eval_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_vertex_index, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement_deformed}},
	"crazyspace_displacement_to_deformed", 16, "Convert displacement vector from non-deformed object space to deformed object space",
	Object_crazyspace_displacement_to_deformed_call,
	nullptr
};

IntPropertyRNA rna_Object_crazyspace_displacement_to_original_vertex_index = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement, nullptr,
	-1, "vertex_index", 3, 0, 0, 0, 0, "vertex_index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static float rna_Object_crazyspace_displacement_to_original_displacement_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement_original, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_vertex_index,
	-1, "displacement", 3, 0, 0, 0, 0, "displacement",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_original_displacement_default
};

static float rna_Object_crazyspace_displacement_to_original_displacement_original_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement_original = {
	{nullptr, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement,
	-1, "displacement_original", 3, 0, 2, 0, 0, "displacement_original",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_original_displacement_original_default
};

FunctionRNA rna_Object_crazyspace_displacement_to_original_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_eval_clear_func, (FunctionRNA *)&rna_Object_crazyspace_displacement_to_deformed_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_vertex_index, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement_original}},
	"crazyspace_displacement_to_original", 16, "Free evaluated state of crazyspace",
	Object_crazyspace_displacement_to_original_call,
	nullptr
};

FunctionRNA rna_Object_crazyspace_eval_clear_func = {
	{(FunctionRNA *)&rna_Object_to_mesh_func, (FunctionRNA *)&rna_Object_crazyspace_displacement_to_original_func,
	nullptr,
	{nullptr, nullptr}},
	"crazyspace_eval_clear", 0, "crazyspace_eval_clear",
	Object_crazyspace_eval_clear_call,
	nullptr
};

BoolPropertyRNA rna_Object_to_mesh_preserve_all_data_layers = {
	{(PropertyRNA *)&rna_Object_to_mesh_depsgraph, nullptr,
	-1, "preserve_all_data_layers", 3, 0, 0, 0, 0, "",
	"Preserve all data layers in the mesh, like UV maps and vertex groups. By default Blender only computes the subset of data layers needed for viewport display and rendering, for better performance",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_to_mesh_depsgraph = {
	{(PropertyRNA *)&rna_Object_to_mesh_mesh, (PropertyRNA *)&rna_Object_to_mesh_preserve_all_data_layers,
	-1, "depsgraph", 8388608, 0, 0, 0, 0, "Dependency Graph",
	"Evaluated dependency graph which is required when preserve_all_data_layers is true",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

PointerPropertyRNA rna_Object_to_mesh_mesh = {
	{nullptr, (PropertyRNA *)&rna_Object_to_mesh_depsgraph,
	-1, "mesh", 8388736, 0, 2, 0, 0, "",
	"Mesh created from object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mesh
};

FunctionRNA rna_Object_to_mesh_func = {
	{(FunctionRNA *)&rna_Object_to_mesh_clear_func, (FunctionRNA *)&rna_Object_crazyspace_eval_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_to_mesh_preserve_all_data_layers, (PropertyRNA *)&rna_Object_to_mesh_mesh}},
	"to_mesh", 16, "Create a Mesh data-block from the current state of the object. The object owns the data-block. To force free it use to_mesh_clear(). The result is temporary and can not be used by objects from the main database",
	Object_to_mesh_call,
	(PropertyRNA *)&rna_Object_to_mesh_mesh
};

FunctionRNA rna_Object_to_mesh_clear_func = {
	{(FunctionRNA *)&rna_Object_to_curve_func, (FunctionRNA *)&rna_Object_to_mesh_func,
	nullptr,
	{nullptr, nullptr}},
	"to_mesh_clear", 0, "Clears mesh data-block created by to_mesh()",
	Object_to_mesh_clear_call,
	nullptr
};

PointerPropertyRNA rna_Object_to_curve_depsgraph = {
	{(PropertyRNA *)&rna_Object_to_curve_apply_modifiers, nullptr,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "Dependency Graph",
	"Evaluated dependency graph",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

BoolPropertyRNA rna_Object_to_curve_apply_modifiers = {
	{(PropertyRNA *)&rna_Object_to_curve_curve, (PropertyRNA *)&rna_Object_to_curve_depsgraph,
	-1, "apply_modifiers", 3, 0, 0, 0, 0, "",
	"Apply the deform modifiers on the control points of the curve. This is only supported for curve objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Object_to_curve_curve = {
	{nullptr, (PropertyRNA *)&rna_Object_to_curve_apply_modifiers,
	-1, "curve", 8388736, 0, 2, 0, 0, "",
	"Curve created from object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Curve
};

FunctionRNA rna_Object_to_curve_func = {
	{(FunctionRNA *)&rna_Object_to_curve_clear_func, (FunctionRNA *)&rna_Object_to_mesh_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_to_curve_depsgraph, (PropertyRNA *)&rna_Object_to_curve_curve}},
	"to_curve", 16, "Create a Curve data-block from the current state of the object. This only works for curve and text objects. The object owns the data-block. To force free it, use to_curve_clear(). The result is temporary and can not be used by objects from the main database",
	Object_to_curve_call,
	(PropertyRNA *)&rna_Object_to_curve_curve
};

FunctionRNA rna_Object_to_curve_clear_func = {
	{(FunctionRNA *)&rna_Object_find_armature_func, (FunctionRNA *)&rna_Object_to_curve_func,
	nullptr,
	{nullptr, nullptr}},
	"to_curve_clear", 0, "Clears curve data-block created by to_curve()",
	Object_to_curve_clear_call,
	nullptr
};

PointerPropertyRNA rna_Object_find_armature_ob_arm = {
	{nullptr, nullptr,
	-1, "ob_arm", 8388736, 0, 2, 0, 0, "",
	"Armature object influencing this object or nullptr",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

FunctionRNA rna_Object_find_armature_func = {
	{(FunctionRNA *)&rna_Object_shape_key_add_func, (FunctionRNA *)&rna_Object_to_curve_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_find_armature_ob_arm, (PropertyRNA *)&rna_Object_find_armature_ob_arm}},
	"find_armature", 0, "Find armature influencing this object as a parent or via a modifier",
	Object_find_armature_call,
	(PropertyRNA *)&rna_Object_find_armature_ob_arm
};

StringPropertyRNA rna_Object_shape_key_add_name = {
	{(PropertyRNA *)&rna_Object_shape_key_add_from_mix, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Unique name for the new keyblock",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Key"
};

BoolPropertyRNA rna_Object_shape_key_add_from_mix = {
	{(PropertyRNA *)&rna_Object_shape_key_add_key, (PropertyRNA *)&rna_Object_shape_key_add_name,
	-1, "from_mix", 3, 0, 0, 0, 0, "",
	"Create new shape from existing mix of shapes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_Object_shape_key_add_key = {
	{nullptr, (PropertyRNA *)&rna_Object_shape_key_add_from_mix,
	-1, "key", 8388608, 0, 6, 0, 0, "",
	"New shape keyblock",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ShapeKey
};

FunctionRNA rna_Object_shape_key_add_func = {
	{(FunctionRNA *)&rna_Object_shape_key_remove_func, (FunctionRNA *)&rna_Object_find_armature_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_shape_key_add_name, (PropertyRNA *)&rna_Object_shape_key_add_key}},
	"shape_key_add", 24, "Add shape key to this object",
	Object_shape_key_add_call,
	(PropertyRNA *)&rna_Object_shape_key_add_key
};

PointerPropertyRNA rna_Object_shape_key_remove_key = {
	{nullptr, nullptr,
	-1, "key", 262144, 0, 5, 0, 0, "",
	"Keyblock to be removed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ShapeKey
};

FunctionRNA rna_Object_shape_key_remove_func = {
	{(FunctionRNA *)&rna_Object_shape_key_clear_func, (FunctionRNA *)&rna_Object_shape_key_add_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_shape_key_remove_key, (PropertyRNA *)&rna_Object_shape_key_remove_key}},
	"shape_key_remove", 20, "Remove a Shape Key from this object",
	Object_shape_key_remove_call,
	nullptr
};

FunctionRNA rna_Object_shape_key_clear_func = {
	{(FunctionRNA *)&rna_Object_ray_cast_func, (FunctionRNA *)&rna_Object_shape_key_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"shape_key_clear", 4, "Remove all Shape Keys from this object",
	Object_shape_key_clear_call,
	nullptr
};

static float rna_Object_ray_cast_origin_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_origin = {
	{(PropertyRNA *)&rna_Object_ray_cast_direction, nullptr,
	-1, "origin", 3, 0, 1, 0, 0, "",
	"Origin of the ray, in object space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_origin_default
};

static float rna_Object_ray_cast_direction_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_direction = {
	{(PropertyRNA *)&rna_Object_ray_cast_distance, (PropertyRNA *)&rna_Object_ray_cast_origin,
	-1, "direction", 3, 0, 1, 0, 0, "",
	"Direction of the ray, in object space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_direction_default
};

FloatPropertyRNA rna_Object_ray_cast_distance = {
	{(PropertyRNA *)&rna_Object_ray_cast_depsgraph, (PropertyRNA *)&rna_Object_ray_cast_direction,
	-1, "distance", 3, 0, 0, 0, 0, "",
	"Maximum distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 170141173319264429905852091742258462720.0000000000f, 0.0f, 170141173319264429905852091742258462720.0000000000f, 1.0f, 3, 170141173319264429905852091742258462720.0000000000f, nullptr
};

PointerPropertyRNA rna_Object_ray_cast_depsgraph = {
	{(PropertyRNA *)&rna_Object_ray_cast_result, (PropertyRNA *)&rna_Object_ray_cast_distance,
	-1, "depsgraph", 8388608, 0, 4, 0, 0, "",
	"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

BoolPropertyRNA rna_Object_ray_cast_result = {
	{(PropertyRNA *)&rna_Object_ray_cast_location, (PropertyRNA *)&rna_Object_ray_cast_depsgraph,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether the ray successfully hit the geometry",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Object_ray_cast_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_location = {
	{(PropertyRNA *)&rna_Object_ray_cast_normal, (PropertyRNA *)&rna_Object_ray_cast_result,
	-1, "location", 8388611, 0, 2, 0, 0, "Location",
	"The hit location of this ray cast",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_location_default
};

static float rna_Object_ray_cast_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_normal = {
	{(PropertyRNA *)&rna_Object_ray_cast_index, (PropertyRNA *)&rna_Object_ray_cast_location,
	-1, "normal", 8388611, 0, 2, 0, 0, "Normal",
	"The face normal at the ray cast hit location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_normal_default
};

IntPropertyRNA rna_Object_ray_cast_index = {
	{nullptr, (PropertyRNA *)&rna_Object_ray_cast_normal,
	-1, "index", 3, 0, 2, 0, 0, "",
	"The face index, -1 when original data isn\'t available",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Object_ray_cast_func = {
	{(FunctionRNA *)&rna_Object_closest_point_on_mesh_func, (FunctionRNA *)&rna_Object_shape_key_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_ray_cast_origin, (PropertyRNA *)&rna_Object_ray_cast_index}},
	"ray_cast", 24, "Cast a ray onto evaluated geometry, in object space (using context\'s or provided depsgraph to get evaluated mesh if needed)",
	Object_ray_cast_call,
	nullptr
};

static float rna_Object_closest_point_on_mesh_origin_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_origin = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_distance, nullptr,
	-1, "origin", 3, 0, 1, 0, 0, "",
	"Point to find closest geometry from (in object space)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_closest_point_on_mesh_origin_default
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_distance = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_depsgraph, (PropertyRNA *)&rna_Object_closest_point_on_mesh_origin,
	-1, "distance", 3, 0, 0, 0, 0, "",
	"Maximum distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 18446742974197923840.0000000000f, nullptr
};

PointerPropertyRNA rna_Object_closest_point_on_mesh_depsgraph = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_result, (PropertyRNA *)&rna_Object_closest_point_on_mesh_distance,
	-1, "depsgraph", 8388608, 0, 4, 0, 0, "",
	"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

BoolPropertyRNA rna_Object_closest_point_on_mesh_result = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_location, (PropertyRNA *)&rna_Object_closest_point_on_mesh_depsgraph,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether closest point on geometry was found",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Object_closest_point_on_mesh_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_location = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_normal, (PropertyRNA *)&rna_Object_closest_point_on_mesh_result,
	-1, "location", 8388611, 0, 2, 0, 0, "Location",
	"The location on the object closest to the point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_closest_point_on_mesh_location_default
};

static float rna_Object_closest_point_on_mesh_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_normal = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_index, (PropertyRNA *)&rna_Object_closest_point_on_mesh_location,
	-1, "normal", 8388611, 0, 2, 0, 0, "Normal",
	"The face normal at the closest point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_closest_point_on_mesh_normal_default
};

IntPropertyRNA rna_Object_closest_point_on_mesh_index = {
	{nullptr, (PropertyRNA *)&rna_Object_closest_point_on_mesh_normal,
	-1, "index", 3, 0, 2, 0, 0, "",
	"The face index, -1 when original data isn\'t available",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Object_closest_point_on_mesh_func = {
	{(FunctionRNA *)&rna_Object_is_modified_func, (FunctionRNA *)&rna_Object_ray_cast_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_origin, (PropertyRNA *)&rna_Object_closest_point_on_mesh_index}},
	"closest_point_on_mesh", 24, "Find the nearest point on evaluated geometry, in object space (using context\'s or provided depsgraph to get evaluated mesh if needed)",
	Object_closest_point_on_mesh_call,
	nullptr
};

PointerPropertyRNA rna_Object_is_modified_scene = {
	{(PropertyRNA *)&rna_Object_is_modified_settings, nullptr,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"Scene in which to check the object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

static const EnumPropertyItem rna_Object_is_modified_settings_items[3] = {
	{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{2, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_is_modified_settings = {
	{(PropertyRNA *)&rna_Object_is_modified_result, (PropertyRNA *)&rna_Object_is_modified_scene,
	-1, "settings", 3, 0, 1, 0, 0, "",
	"Modifier settings to apply",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_is_modified_settings_items, 2, 1
};

BoolPropertyRNA rna_Object_is_modified_result = {
	{nullptr, (PropertyRNA *)&rna_Object_is_modified_settings,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether the object is modified",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_is_modified_func = {
	{(FunctionRNA *)&rna_Object_is_deform_modified_func, (FunctionRNA *)&rna_Object_closest_point_on_mesh_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_is_modified_scene, (PropertyRNA *)&rna_Object_is_modified_result}},
	"is_modified", 0, "Determine if this object is modified from the base mesh data",
	Object_is_modified_call,
	(PropertyRNA *)&rna_Object_is_modified_result
};

PointerPropertyRNA rna_Object_is_deform_modified_scene = {
	{(PropertyRNA *)&rna_Object_is_deform_modified_settings, nullptr,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"Scene in which to check the object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

static const EnumPropertyItem rna_Object_is_deform_modified_settings_items[3] = {
	{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{2, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_is_deform_modified_settings = {
	{(PropertyRNA *)&rna_Object_is_deform_modified_result, (PropertyRNA *)&rna_Object_is_deform_modified_scene,
	-1, "settings", 3, 0, 1, 0, 0, "",
	"Modifier settings to apply",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_is_deform_modified_settings_items, 2, 1
};

BoolPropertyRNA rna_Object_is_deform_modified_result = {
	{nullptr, (PropertyRNA *)&rna_Object_is_deform_modified_settings,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether the object is deform-modified",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_is_deform_modified_func = {
	{(FunctionRNA *)&rna_Object_dm_info_func, (FunctionRNA *)&rna_Object_is_modified_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_is_deform_modified_scene, (PropertyRNA *)&rna_Object_is_deform_modified_result}},
	"is_deform_modified", 0, "Determine if this object is modified by a deformation from the base mesh data",
	Object_is_deform_modified_call,
	(PropertyRNA *)&rna_Object_is_deform_modified_result
};

static const EnumPropertyItem rna_Object_dm_info_type_items[4] = {
	{0, "SOURCE", 0, "Source", "Source mesh"},
	{1, "DEFORM", 0, "Deform", "Objects deform mesh"},
	{2, "FINAL", 0, "Final", "Objects final mesh"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Object_dm_info_type = {
	{(PropertyRNA *)&rna_Object_dm_info_depsgraph, nullptr,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Modifier settings to apply",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_Object_dm_info_type_items, 3, 0
};

PointerPropertyRNA rna_Object_dm_info_depsgraph = {
	{(PropertyRNA *)&rna_Object_dm_info_result, (PropertyRNA *)&rna_Object_dm_info_type,
	-1, "depsgraph", 8388608, 0, 4, 0, 0, "",
	"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

StringPropertyRNA rna_Object_dm_info_result = {
	{nullptr, (PropertyRNA *)&rna_Object_dm_info_depsgraph,
	-1, "result", 8650753, 0, 2, 0, 0, "",
	"Requested information",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 16384, ""
};

FunctionRNA rna_Object_dm_info_func = {
	{(FunctionRNA *)&rna_Object_update_from_editmode_func, (FunctionRNA *)&rna_Object_is_deform_modified_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_dm_info_type, (PropertyRNA *)&rna_Object_dm_info_result}},
	"dm_info", 8, "Returns a string for original/evaluated mesh data (debug builds only, using context\'s or provided depsgraph to get evaluated mesh if needed)",
	Object_dm_info_call,
	nullptr
};

BoolPropertyRNA rna_Object_update_from_editmode_result = {
	{nullptr, nullptr,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Success",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_update_from_editmode_func = {
	{(FunctionRNA *)&rna_Object_cache_release_func, (FunctionRNA *)&rna_Object_dm_info_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_update_from_editmode_result, (PropertyRNA *)&rna_Object_update_from_editmode_result}},
	"update_from_editmode", 4, "Load the objects edit-mode data into the object data",
	Object_update_from_editmode_call,
	(PropertyRNA *)&rna_Object_update_from_editmode_result
};

FunctionRNA rna_Object_cache_release_func = {
	{(FunctionRNA *)&rna_Object_generate_gpencil_strokes_func, (FunctionRNA *)&rna_Object_update_from_editmode_func,
	nullptr,
	{nullptr, nullptr}},
	"cache_release", 0, "Release memory used by caches associated with this object. Intended to be used by render engines only",
	Object_cache_release_call,
	nullptr
};

PointerPropertyRNA rna_Object_generate_gpencil_strokes_grease_pencil_object = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_use_collections, nullptr,
	-1, "grease_pencil_object", 8650880, 0, 1, 0, 0, "",
	"Grease Pencil object used to create new strokes",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_Object_generate_gpencil_strokes_use_collections = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_scale_thickness, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_grease_pencil_object,
	-1, "use_collections", 3, 0, 0, 0, 0, "",
	"Use Collections",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_Object_generate_gpencil_strokes_scale_thickness = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_sample, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_use_collections,
	-1, "scale_thickness", 3, 0, 0, 0, 0, "",
	"Thickness scaling factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Object_generate_gpencil_strokes_sample = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_result, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_scale_thickness,
	-1, "sample", 3, 0, 0, 0, 0, "",
	"Sample distance, zero to disable",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_Object_generate_gpencil_strokes_result = {
	{nullptr, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_sample,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Result",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Object_generate_gpencil_strokes_func = {
	{nullptr, (FunctionRNA *)&rna_Object_cache_release_func,
	nullptr,
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_grease_pencil_object, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_result}},
	"generate_gpencil_strokes", 24, "Convert a curve object to grease pencil strokes.",
	Object_generate_gpencil_strokes_call,
	(PropertyRNA *)&rna_Object_generate_gpencil_strokes_result
};

StructRNA RNA_Object = {
	{(ContainerRNA *)&RNA_ObjectModifiers, (ContainerRNA *)&RNA_NodeTreeInterfaceSocketMaterial,
	nullptr,
	{(PropertyRNA *)&rna_Object_data, (PropertyRNA *)&rna_Object_motion_path}},
	"Object", nullptr, nullptr, 517, nullptr, "Object",
	"Object data-block defining an object in a scene",
	"*", 159,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Object_select_get_func, (FunctionRNA *)&rna_Object_generate_gpencil_strokes_func}
};

/* Object Modifiers */
CollectionPropertyRNA rna_ObjectModifiers_rna_properties = {
	{(PropertyRNA *)&rna_ObjectModifiers_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectModifiers_rna_properties_begin, ObjectModifiers_rna_properties_next, ObjectModifiers_rna_properties_end, ObjectModifiers_rna_properties_get, nullptr, nullptr, ObjectModifiers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectModifiers_rna_type = {
	{(PropertyRNA *)&rna_ObjectModifiers_active, (PropertyRNA *)&rna_ObjectModifiers_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectModifiers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ObjectModifiers_active = {
	{nullptr, (PropertyRNA *)&rna_ObjectModifiers_rna_type,
	-1, "active", 1082130433, 1, 0, 0, 0, "Active Modifier",
	"The active modifier in the list",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectModifiers_active_get, ObjectModifiers_active_set, nullptr, nullptr,&RNA_Modifier
};

StringPropertyRNA rna_ObjectModifiers_new_name = {
	{(PropertyRNA *)&rna_ObjectModifiers_new_type, nullptr,
	-1, "name", 262145, 1, 1, 0, 0, "",
	"New name for the modifier",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Name"
};

EnumPropertyRNA rna_ObjectModifiers_new_type = {
	{(PropertyRNA *)&rna_ObjectModifiers_new_modifier, (PropertyRNA *)&rna_ObjectModifiers_new_name,
	-1, "type", 3, 1, 1, 0, 0, "",
	"Modifier type to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_modifier_type_items, 61, 1
};

PointerPropertyRNA rna_ObjectModifiers_new_modifier = {
	{nullptr, (PropertyRNA *)&rna_ObjectModifiers_new_type,
	-1, "modifier", 8388608, 1, 2, 0, 0, "",
	"Newly created modifier",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Modifier
};

FunctionRNA rna_ObjectModifiers_new_func = {
	{(FunctionRNA *)&rna_ObjectModifiers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ObjectModifiers_new_name, (PropertyRNA *)&rna_ObjectModifiers_new_modifier}},
	"new", 24, "Add a new modifier",
	ObjectModifiers_new_call,
	(PropertyRNA *)&rna_ObjectModifiers_new_modifier
};

PointerPropertyRNA rna_ObjectModifiers_remove_modifier = {
	{nullptr, nullptr,
	-1, "modifier", 262144, 1, 5, 0, 0, "",
	"Modifier to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Modifier
};

FunctionRNA rna_ObjectModifiers_remove_func = {
	{(FunctionRNA *)&rna_ObjectModifiers_clear_func, (FunctionRNA *)&rna_ObjectModifiers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectModifiers_remove_modifier, (PropertyRNA *)&rna_ObjectModifiers_remove_modifier}},
	"remove", 24, "Remove an existing modifier from the object",
	ObjectModifiers_remove_call,
	nullptr
};

FunctionRNA rna_ObjectModifiers_clear_func = {
	{(FunctionRNA *)&rna_ObjectModifiers_move_func, (FunctionRNA *)&rna_ObjectModifiers_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 8, "Remove all modifiers from the object",
	ObjectModifiers_clear_call,
	nullptr
};

IntPropertyRNA rna_ObjectModifiers_move_from_index = {
	{(PropertyRNA *)&rna_ObjectModifiers_move_to_index, nullptr,
	-1, "from_index", 3, 1, 1, 0, 0, "From Index",
	"Index to move",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

IntPropertyRNA rna_ObjectModifiers_move_to_index = {
	{nullptr, (PropertyRNA *)&rna_ObjectModifiers_move_from_index,
	-1, "to_index", 3, 1, 1, 0, 0, "To Index",
	"Target index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_ObjectModifiers_move_func = {
	{nullptr, (FunctionRNA *)&rna_ObjectModifiers_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectModifiers_move_from_index, (PropertyRNA *)&rna_ObjectModifiers_move_to_index}},
	"move", 16, "Move a modifier to a different position",
	ObjectModifiers_move_call,
	nullptr
};

StructRNA RNA_ObjectModifiers = {
	{(ContainerRNA *)&RNA_ObjectGpencilModifiers, (ContainerRNA *)&RNA_Object,
	nullptr,
	{(PropertyRNA *)&rna_ObjectModifiers_rna_properties, (PropertyRNA *)&rna_ObjectModifiers_active}},
	"ObjectModifiers", nullptr, nullptr, 516, nullptr, "Object Modifiers",
	"Collection of object modifiers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectModifiers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ObjectModifiers_new_func, (FunctionRNA *)&rna_ObjectModifiers_move_func}
};

/* Object Grease Pencil Modifiers */
CollectionPropertyRNA rna_ObjectGpencilModifiers_rna_properties = {
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectGpencilModifiers_rna_properties_begin, ObjectGpencilModifiers_rna_properties_next, ObjectGpencilModifiers_rna_properties_end, ObjectGpencilModifiers_rna_properties_get, nullptr, nullptr, ObjectGpencilModifiers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectGpencilModifiers_rna_type = {
	{nullptr, (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectGpencilModifiers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ObjectGpencilModifiers_new_name = {
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_new_type, nullptr,
	-1, "name", 262145, 1, 1, 0, 0, "",
	"New name for the greasepencil_modifier",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Name"
};

EnumPropertyRNA rna_ObjectGpencilModifiers_new_type = {
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_new_greasepencil_modifier, (PropertyRNA *)&rna_ObjectGpencilModifiers_new_name,
	-1, "type", 3, 1, 1, 0, 0, "",
	"Modifier type to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_greasepencil_modifier_type_items, 30, 1
};

PointerPropertyRNA rna_ObjectGpencilModifiers_new_greasepencil_modifier = {
	{nullptr, (PropertyRNA *)&rna_ObjectGpencilModifiers_new_type,
	-1, "greasepencil_modifier", 8388608, 1, 2, 0, 0, "",
	"Newly created modifier",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GpencilModifier
};

FunctionRNA rna_ObjectGpencilModifiers_new_func = {
	{(FunctionRNA *)&rna_ObjectGpencilModifiers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_new_name, (PropertyRNA *)&rna_ObjectGpencilModifiers_new_greasepencil_modifier}},
	"new", 24, "Add a new greasepencil_modifier",
	ObjectGpencilModifiers_new_call,
	(PropertyRNA *)&rna_ObjectGpencilModifiers_new_greasepencil_modifier
};

PointerPropertyRNA rna_ObjectGpencilModifiers_remove_greasepencil_modifier = {
	{nullptr, nullptr,
	-1, "greasepencil_modifier", 262144, 1, 5, 0, 0, "",
	"Modifier to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GpencilModifier
};

FunctionRNA rna_ObjectGpencilModifiers_remove_func = {
	{(FunctionRNA *)&rna_ObjectGpencilModifiers_clear_func, (FunctionRNA *)&rna_ObjectGpencilModifiers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_remove_greasepencil_modifier, (PropertyRNA *)&rna_ObjectGpencilModifiers_remove_greasepencil_modifier}},
	"remove", 24, "Remove an existing greasepencil_modifier from the object",
	ObjectGpencilModifiers_remove_call,
	nullptr
};

FunctionRNA rna_ObjectGpencilModifiers_clear_func = {
	{nullptr, (FunctionRNA *)&rna_ObjectGpencilModifiers_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 8, "Remove all grease pencil modifiers from the object",
	ObjectGpencilModifiers_clear_call,
	nullptr
};

StructRNA RNA_ObjectGpencilModifiers = {
	{(ContainerRNA *)&RNA_ObjectShaderFx, (ContainerRNA *)&RNA_ObjectModifiers,
	nullptr,
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties, (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_type}},
	"ObjectGpencilModifiers", nullptr, nullptr, 516, nullptr, "Object Grease Pencil Modifiers",
	"Collection of object grease pencil modifiers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ObjectGpencilModifiers_new_func, (FunctionRNA *)&rna_ObjectGpencilModifiers_clear_func}
};

/* Object Shader Effects */
CollectionPropertyRNA rna_ObjectShaderFx_rna_properties = {
	{(PropertyRNA *)&rna_ObjectShaderFx_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectShaderFx_rna_properties_begin, ObjectShaderFx_rna_properties_next, ObjectShaderFx_rna_properties_end, ObjectShaderFx_rna_properties_get, nullptr, nullptr, ObjectShaderFx_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectShaderFx_rna_type = {
	{nullptr, (PropertyRNA *)&rna_ObjectShaderFx_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectShaderFx_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ObjectShaderFx_new_name = {
	{(PropertyRNA *)&rna_ObjectShaderFx_new_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the effect",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Name"
};

EnumPropertyRNA rna_ObjectShaderFx_new_type = {
	{(PropertyRNA *)&rna_ObjectShaderFx_new_shader_fx, (PropertyRNA *)&rna_ObjectShaderFx_new_name,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Effect type to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_shaderfx_type_items, 9, 1
};

PointerPropertyRNA rna_ObjectShaderFx_new_shader_fx = {
	{nullptr, (PropertyRNA *)&rna_ObjectShaderFx_new_type,
	-1, "shader_fx", 8388608, 0, 2, 0, 0, "",
	"Newly created effect",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ShaderFx
};

FunctionRNA rna_ObjectShaderFx_new_func = {
	{(FunctionRNA *)&rna_ObjectShaderFx_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ObjectShaderFx_new_name, (PropertyRNA *)&rna_ObjectShaderFx_new_shader_fx}},
	"new", 24, "Add a new shader fx",
	ObjectShaderFx_new_call,
	(PropertyRNA *)&rna_ObjectShaderFx_new_shader_fx
};

PointerPropertyRNA rna_ObjectShaderFx_remove_shader_fx = {
	{nullptr, nullptr,
	-1, "shader_fx", 262144, 0, 5, 0, 0, "",
	"Effect to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ShaderFx
};

FunctionRNA rna_ObjectShaderFx_remove_func = {
	{(FunctionRNA *)&rna_ObjectShaderFx_clear_func, (FunctionRNA *)&rna_ObjectShaderFx_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectShaderFx_remove_shader_fx, (PropertyRNA *)&rna_ObjectShaderFx_remove_shader_fx}},
	"remove", 24, "Remove an existing effect from the object",
	ObjectShaderFx_remove_call,
	nullptr
};

FunctionRNA rna_ObjectShaderFx_clear_func = {
	{nullptr, (FunctionRNA *)&rna_ObjectShaderFx_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 8, "Remove all effects from the object",
	ObjectShaderFx_clear_call,
	nullptr
};

StructRNA RNA_ObjectShaderFx = {
	{(ContainerRNA *)&RNA_ObjectConstraints, (ContainerRNA *)&RNA_ObjectGpencilModifiers,
	nullptr,
	{(PropertyRNA *)&rna_ObjectShaderFx_rna_properties, (PropertyRNA *)&rna_ObjectShaderFx_rna_type}},
	"ObjectShaderFx", nullptr, nullptr, 516, nullptr, "Object Shader Effects",
	"Collection of object effects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectShaderFx_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ObjectShaderFx_new_func, (FunctionRNA *)&rna_ObjectShaderFx_clear_func}
};

/* Object Constraints */
CollectionPropertyRNA rna_ObjectConstraints_rna_properties = {
	{(PropertyRNA *)&rna_ObjectConstraints_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectConstraints_rna_properties_begin, ObjectConstraints_rna_properties_next, ObjectConstraints_rna_properties_end, ObjectConstraints_rna_properties_get, nullptr, nullptr, ObjectConstraints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectConstraints_rna_type = {
	{(PropertyRNA *)&rna_ObjectConstraints_active, (PropertyRNA *)&rna_ObjectConstraints_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectConstraints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ObjectConstraints_active = {
	{nullptr, (PropertyRNA *)&rna_ObjectConstraints_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Constraint",
	"Active Object constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectConstraints_active_get, ObjectConstraints_active_set, nullptr, nullptr,&RNA_Constraint
};

EnumPropertyRNA rna_ObjectConstraints_new_type = {
	{(PropertyRNA *)&rna_ObjectConstraints_new_constraint, nullptr,
	-1, "type", 3, 1, 1, 0, 0, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_constraint_type_items, 32, 1
};

PointerPropertyRNA rna_ObjectConstraints_new_constraint = {
	{nullptr, (PropertyRNA *)&rna_ObjectConstraints_new_type,
	-1, "constraint", 8388608, 1, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_new_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ObjectConstraints_new_type, (PropertyRNA *)&rna_ObjectConstraints_new_constraint}},
	"new", 4, "Add a new constraint to this object",
	ObjectConstraints_new_call,
	(PropertyRNA *)&rna_ObjectConstraints_new_constraint
};

PointerPropertyRNA rna_ObjectConstraints_remove_constraint = {
	{nullptr, nullptr,
	-1, "constraint", 262144, 1, 5, 0, 0, "",
	"Removed constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_remove_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_clear_func, (FunctionRNA *)&rna_ObjectConstraints_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectConstraints_remove_constraint, (PropertyRNA *)&rna_ObjectConstraints_remove_constraint}},
	"remove", 20, "Remove a constraint from this object",
	ObjectConstraints_remove_call,
	nullptr
};

FunctionRNA rna_ObjectConstraints_clear_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_move_func, (FunctionRNA *)&rna_ObjectConstraints_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 4, "Remove all constraint from this object",
	ObjectConstraints_clear_call,
	nullptr
};

IntPropertyRNA rna_ObjectConstraints_move_from_index = {
	{(PropertyRNA *)&rna_ObjectConstraints_move_to_index, nullptr,
	-1, "from_index", 3, 1, 1, 0, 0, "From Index",
	"Index to move",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

IntPropertyRNA rna_ObjectConstraints_move_to_index = {
	{nullptr, (PropertyRNA *)&rna_ObjectConstraints_move_from_index,
	-1, "to_index", 3, 1, 1, 0, 0, "To Index",
	"Target index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_ObjectConstraints_move_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_copy_func, (FunctionRNA *)&rna_ObjectConstraints_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectConstraints_move_from_index, (PropertyRNA *)&rna_ObjectConstraints_move_to_index}},
	"move", 20, "Move a constraint to a different position",
	ObjectConstraints_move_call,
	nullptr
};

PointerPropertyRNA rna_ObjectConstraints_copy_constraint = {
	{(PropertyRNA *)&rna_ObjectConstraints_copy_new_constraint, nullptr,
	-1, "constraint", 262144, 1, 5, 0, 0, "",
	"Constraint to copy - may belong to a different object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

PointerPropertyRNA rna_ObjectConstraints_copy_new_constraint = {
	{nullptr, (PropertyRNA *)&rna_ObjectConstraints_copy_constraint,
	-1, "new_constraint", 8388608, 1, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_copy_func = {
	{nullptr, (FunctionRNA *)&rna_ObjectConstraints_move_func,
	nullptr,
	{(PropertyRNA *)&rna_ObjectConstraints_copy_constraint, (PropertyRNA *)&rna_ObjectConstraints_copy_new_constraint}},
	"copy", 4, "Add a new constraint that is a copy of the given one",
	ObjectConstraints_copy_call,
	(PropertyRNA *)&rna_ObjectConstraints_copy_new_constraint
};

StructRNA RNA_ObjectConstraints = {
	{(ContainerRNA *)&RNA_VertexGroups, (ContainerRNA *)&RNA_ObjectShaderFx,
	nullptr,
	{(PropertyRNA *)&rna_ObjectConstraints_rna_properties, (PropertyRNA *)&rna_ObjectConstraints_active}},
	"ObjectConstraints", nullptr, nullptr, 516, nullptr, "Object Constraints",
	"Collection of object constraints",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectConstraints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ObjectConstraints_new_func, (FunctionRNA *)&rna_ObjectConstraints_copy_func}
};

/* Vertex Groups */
CollectionPropertyRNA rna_VertexGroups_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroups_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroups_rna_properties_begin, VertexGroups_rna_properties_next, VertexGroups_rna_properties_end, VertexGroups_rna_properties_get, nullptr, nullptr, VertexGroups_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VertexGroups_rna_type = {
	{(PropertyRNA *)&rna_VertexGroups_active, (PropertyRNA *)&rna_VertexGroups_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroups_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_VertexGroups_active = {
	{(PropertyRNA *)&rna_VertexGroups_active_index, (PropertyRNA *)&rna_VertexGroups_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Vertex Group",
	"Vertex groups of the object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_vertex_groups_update, 291176448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroups_active_get, VertexGroups_active_set, nullptr, nullptr,&RNA_VertexGroup
};

IntPropertyRNA rna_VertexGroups_active_index = {
	{nullptr, (PropertyRNA *)&rna_VertexGroups_active,
	-1, "active_index", 1, 1, 0, 0, 0, "Active Vertex Group Index",
	"Active index in vertex group array",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_vertex_groups_update, 291176448, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroups_active_index_get, VertexGroups_active_index_set, nullptr, nullptr, rna_Object_active_vertex_group_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_VertexGroups_new_name = {
	{(PropertyRNA *)&rna_VertexGroups_new_group, nullptr,
	-1, "name", 262145, 1, 0, 0, 0, "",
	"Vertex group name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Group"
};

PointerPropertyRNA rna_VertexGroups_new_group = {
	{nullptr, (PropertyRNA *)&rna_VertexGroups_new_name,
	-1, "group", 8388608, 1, 2, 0, 0, "",
	"New vertex group",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_VertexGroup
};

FunctionRNA rna_VertexGroups_new_func = {
	{(FunctionRNA *)&rna_VertexGroups_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroups_new_name, (PropertyRNA *)&rna_VertexGroups_new_group}},
	"new", 20, "Add vertex group to object",
	VertexGroups_new_call,
	(PropertyRNA *)&rna_VertexGroups_new_group
};

PointerPropertyRNA rna_VertexGroups_remove_group = {
	{nullptr, nullptr,
	-1, "group", 262144, 1, 5, 0, 0, "",
	"Vertex group to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_VertexGroup
};

FunctionRNA rna_VertexGroups_remove_func = {
	{(FunctionRNA *)&rna_VertexGroups_clear_func, (FunctionRNA *)&rna_VertexGroups_new_func,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroups_remove_group, (PropertyRNA *)&rna_VertexGroups_remove_group}},
	"remove", 20, "Delete vertex group from object",
	VertexGroups_remove_call,
	nullptr
};

FunctionRNA rna_VertexGroups_clear_func = {
	{nullptr, (FunctionRNA *)&rna_VertexGroups_remove_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 20, "Delete all vertex groups from object",
	VertexGroups_clear_call,
	nullptr
};

StructRNA RNA_VertexGroups = {
	{(ContainerRNA *)&RNA_ParticleSystems, (ContainerRNA *)&RNA_ObjectConstraints,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroups_rna_properties, (PropertyRNA *)&rna_VertexGroups_active_index}},
	"VertexGroups", nullptr, nullptr, 516, nullptr, "Vertex Groups",
	"Collection of vertex groups",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_VertexGroups_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_VertexGroups_new_func, (FunctionRNA *)&rna_VertexGroups_clear_func}
};

/* Particle Systems */
CollectionPropertyRNA rna_ParticleSystems_rna_properties = {
	{(PropertyRNA *)&rna_ParticleSystems_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleSystems_rna_properties_begin, ParticleSystems_rna_properties_next, ParticleSystems_rna_properties_end, ParticleSystems_rna_properties_get, nullptr, nullptr, ParticleSystems_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ParticleSystems_rna_type = {
	{(PropertyRNA *)&rna_ParticleSystems_active, (PropertyRNA *)&rna_ParticleSystems_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleSystems_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ParticleSystems_active = {
	{(PropertyRNA *)&rna_ParticleSystems_active_index, (PropertyRNA *)&rna_ParticleSystems_rna_type,
	-1, "active", 8388608, 1, 0, 0, 0, "Active Particle System",
	"Active particle system being displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleSystems_active_get, nullptr, nullptr, nullptr,&RNA_ParticleSystem
};

IntPropertyRNA rna_ParticleSystems_active_index = {
	{nullptr, (PropertyRNA *)&rna_ParticleSystems_active,
	-1, "active_index", 1, 1, 0, 0, 0, "Active Particle System Index",
	"Index of active particle system slot",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_particle_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleSystems_active_index_get, ParticleSystems_active_index_set, nullptr, nullptr, rna_Object_active_particle_system_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_ParticleSystems = {
	{(ContainerRNA *)&RNA_VertexGroup, (ContainerRNA *)&RNA_VertexGroups,
	nullptr,
	{(PropertyRNA *)&rna_ParticleSystems_rna_properties, (PropertyRNA *)&rna_ParticleSystems_active_index}},
	"ParticleSystems", nullptr, nullptr, 516, nullptr, "Particle Systems",
	"Collection of particle systems",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ParticleSystems_rna_properties,
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

/* Vertex Group */
CollectionPropertyRNA rna_VertexGroup_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroup_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroup_rna_properties_begin, VertexGroup_rna_properties_next, VertexGroup_rna_properties_end, VertexGroup_rna_properties_get, nullptr, nullptr, VertexGroup_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VertexGroup_rna_type = {
	{(PropertyRNA *)&rna_VertexGroup_name, (PropertyRNA *)&rna_VertexGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroup_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_VertexGroup_name = {
	{(PropertyRNA *)&rna_VertexGroup_lock_weight, (PropertyRNA *)&rna_VertexGroup_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Vertex group name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Object_internal_update_data_dependency, 291176453, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroup_name_get, VertexGroup_name_length, VertexGroup_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_VertexGroup_lock_weight = {
	{(PropertyRNA *)&rna_VertexGroup_index, (PropertyRNA *)&rna_VertexGroup_name,
	-1, "lock_weight", 1, 0, 0, 4, 0, "",
	"Maintain the relative weights for the group",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 291176453, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bDeformGroup, flag), (RawPropertyType)2, nullptr},
	VertexGroup_lock_weight_get, VertexGroup_lock_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_VertexGroup_index = {
	{nullptr, (PropertyRNA *)&rna_VertexGroup_lock_weight,
	-1, "index", 0, 0, 0, 0, 0, "Index",
	"Index number of the vertex group",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroup_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static int rna_VertexGroup_add_index_default[1] = {
	0
};

IntPropertyRNA rna_VertexGroup_add_index = {
	{(PropertyRNA *)&rna_VertexGroup_add_weight, nullptr,
	-1, "index", 131073, 0, 1, 0, 0, "",
	"List of indices",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_VertexGroup_add_index_default
};

FloatPropertyRNA rna_VertexGroup_add_weight = {
	{(PropertyRNA *)&rna_VertexGroup_add_type, (PropertyRNA *)&rna_VertexGroup_add_index,
	-1, "weight", 1, 0, 1, 0, 0, "",
	"Vertex weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_VertexGroup_add_type_items[4] = {
	{1, "REPLACE", 0, "Replace", "Replace"},
	{2, "ADD", 0, "Add", "Add"},
	{3, "SUBTRACT", 0, "Subtract", "Subtract"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_VertexGroup_add_type = {
	{nullptr, (PropertyRNA *)&rna_VertexGroup_add_weight,
	-1, "type", 1, 0, 1, 0, 0, "",
	"Vertex assign mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_VertexGroup_add_type_items, 3, 1
};

FunctionRNA rna_VertexGroup_add_func = {
	{(FunctionRNA *)&rna_VertexGroup_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroup_add_index, (PropertyRNA *)&rna_VertexGroup_add_type}},
	"add", 2064, "Add vertices to the group",
	VertexGroup_add_call,
	nullptr
};

static int rna_VertexGroup_remove_index_default[1] = {
	0
};

IntPropertyRNA rna_VertexGroup_remove_index = {
	{nullptr, nullptr,
	-1, "index", 131073, 0, 1, 0, 0, "",
	"List of indices",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_VertexGroup_remove_index_default
};

FunctionRNA rna_VertexGroup_remove_func = {
	{(FunctionRNA *)&rna_VertexGroup_weight_func, (FunctionRNA *)&rna_VertexGroup_add_func,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroup_remove_index, (PropertyRNA *)&rna_VertexGroup_remove_index}},
	"remove", 2064, "Remove vertices from the group",
	VertexGroup_remove_call,
	nullptr
};

IntPropertyRNA rna_VertexGroup_weight_index = {
	{(PropertyRNA *)&rna_VertexGroup_weight_weight, nullptr,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"The index of the vertex",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_VertexGroup_weight_weight = {
	{nullptr, (PropertyRNA *)&rna_VertexGroup_weight_index,
	-1, "weight", 1, 0, 2, 0, 0, "",
	"Vertex weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_VertexGroup_weight_func = {
	{nullptr, (FunctionRNA *)&rna_VertexGroup_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroup_weight_index, (PropertyRNA *)&rna_VertexGroup_weight_weight}},
	"weight", 2064, "Get a vertex weight from the group",
	VertexGroup_weight_call,
	(PropertyRNA *)&rna_VertexGroup_weight_weight
};

StructRNA RNA_VertexGroup = {
	{(ContainerRNA *)&RNA_MaterialSlot, (ContainerRNA *)&RNA_ParticleSystems,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroup_rna_properties, (PropertyRNA *)&rna_VertexGroup_index}},
	"VertexGroup", nullptr, nullptr, 516, nullptr, "Vertex Group",
	"Group of vertices, used for armature deform and other purposes",
	"*", 201,
	(PropertyRNA *)&rna_VertexGroup_name, (PropertyRNA *)&rna_VertexGroup_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_VertexGroup_add_func, (FunctionRNA *)&rna_VertexGroup_weight_func}
};

/* Material Slot */
CollectionPropertyRNA rna_MaterialSlot_rna_properties = {
	{(PropertyRNA *)&rna_MaterialSlot_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialSlot_rna_properties_begin, MaterialSlot_rna_properties_next, MaterialSlot_rna_properties_end, MaterialSlot_rna_properties_get, nullptr, nullptr, MaterialSlot_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MaterialSlot_rna_type = {
	{(PropertyRNA *)&rna_MaterialSlot_link, (PropertyRNA *)&rna_MaterialSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialSlot_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_MaterialSlot_link_items[3] = {
	{1, "OBJECT", 0, "Object", ""},
	{0, "DATA", 0, "Data", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_MaterialSlot_link = {
	{(PropertyRNA *)&rna_MaterialSlot_material, (PropertyRNA *)&rna_MaterialSlot_rna_type,
	-1, "link", 1, 1, 0, 0, 0, "Link",
	"Link material to object or the object\'s data",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialSlot_link_get, MaterialSlot_link_set, nullptr, nullptr, nullptr, rna_MaterialSlot_link_items, 2, 0
};

PointerPropertyRNA rna_MaterialSlot_material = {
	{(PropertyRNA *)&rna_MaterialSlot_slot_index, (PropertyRNA *)&rna_MaterialSlot_link,
	-1, "material", 8388737, 1, 0, 0, 0, "Material",
	"Material data-block used by this material slot",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 102170624, rna_MaterialSlot_material_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialSlot_material_get, MaterialSlot_material_set, nullptr, rna_MaterialSlot_material_poll,&RNA_Material
};

IntPropertyRNA rna_MaterialSlot_slot_index = {
	{(PropertyRNA *)&rna_MaterialSlot_name, (PropertyRNA *)&rna_MaterialSlot_material,
	-1, "slot_index", 0, 1, 0, 0, 0, "slot_index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialSlot_slot_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_MaterialSlot_name = {
	{nullptr, (PropertyRNA *)&rna_MaterialSlot_slot_index,
	-1, "name", 262144, 4, 0, 0, 0, "Name",
	"Material slot name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MaterialSlot_name_get, MaterialSlot_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_MaterialSlot = {
	{(ContainerRNA *)&RNA_ObjectDisplay, (ContainerRNA *)&RNA_VertexGroup,
	nullptr,
	{(PropertyRNA *)&rna_MaterialSlot_rna_properties, (PropertyRNA *)&rna_MaterialSlot_name}},
	"MaterialSlot", nullptr, nullptr, 516, nullptr, "Material Slot",
	"Material slot in an object",
	"*", 165,
	(PropertyRNA *)&rna_MaterialSlot_name, (PropertyRNA *)&rna_MaterialSlot_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MaterialSlot_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Object Display */
CollectionPropertyRNA rna_ObjectDisplay_rna_properties = {
	{(PropertyRNA *)&rna_ObjectDisplay_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectDisplay_rna_properties_begin, ObjectDisplay_rna_properties_next, ObjectDisplay_rna_properties_end, ObjectDisplay_rna_properties_get, nullptr, nullptr, ObjectDisplay_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectDisplay_rna_type = {
	{(PropertyRNA *)&rna_ObjectDisplay_show_shadows, (PropertyRNA *)&rna_ObjectDisplay_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectDisplay_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_ObjectDisplay_show_shadows = {
	{nullptr, (PropertyRNA *)&rna_ObjectDisplay_rna_type,
	-1, "show_shadows", 1, 1, 0, 0, 0, "Shadow",
	"Object cast shadows in the 3D viewport",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectDisplay_show_shadows_get, ObjectDisplay_show_shadows_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

StructRNA RNA_ObjectDisplay = {
	{(ContainerRNA *)&RNA_ObjectLineArt, (ContainerRNA *)&RNA_MaterialSlot,
	nullptr,
	{(PropertyRNA *)&rna_ObjectDisplay_rna_properties, (PropertyRNA *)&rna_ObjectDisplay_show_shadows}},
	"ObjectDisplay", nullptr, nullptr, 516, nullptr, "Object Display",
	"Object display settings for 3D viewport",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectDisplay_rna_properties,
	nullptr,
	&RNA_Object,
	nullptr,
	rna_ObjectDisplay_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Object Line Art */
CollectionPropertyRNA rna_ObjectLineArt_rna_properties = {
	{(PropertyRNA *)&rna_ObjectLineArt_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLineArt_rna_properties_begin, ObjectLineArt_rna_properties_next, ObjectLineArt_rna_properties_end, ObjectLineArt_rna_properties_get, nullptr, nullptr, ObjectLineArt_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectLineArt_rna_type = {
	{(PropertyRNA *)&rna_ObjectLineArt_usage, (PropertyRNA *)&rna_ObjectLineArt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLineArt_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_ObjectLineArt_usage_items[8] = {
	{0, "INHERIT", 0, "Inherit", "Use settings from the parent collection"},
	{1, "INCLUDE", 0, "Include", "Generate feature lines for this object\'s data"},
	{2, "OCCLUSION_ONLY", 0, "Occlusion Only", "Only use the object data to produce occlusion"},
	{4, "EXCLUDE", 0, "Exclude", "Don\'t use this object for Line Art rendering"},
	{8, "INTERSECTION_ONLY", 0, "Intersection Only", "Only generate intersection lines for this collection"},
	{16, "NO_INTERSECTION", 0, "No Intersection", "Include this object but do not generate intersection lines"},
	{32, "FORCE_INTERSECTION", 0, "Force Intersection", "Generate intersection lines even with objects that disabled intersection"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ObjectLineArt_usage = {
	{(PropertyRNA *)&rna_ObjectLineArt_use_crease_override, (PropertyRNA *)&rna_ObjectLineArt_rna_type,
	-1, "usage", 1, 0, 0, 4, 0, "Usage",
	"How to use this object in line art calculation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ObjectLineArt, usage), (RawPropertyType)1, nullptr},
	ObjectLineArt_usage_get, ObjectLineArt_usage_set, nullptr, nullptr, nullptr, rna_ObjectLineArt_usage_items, 7, 0
};

BoolPropertyRNA rna_ObjectLineArt_use_crease_override = {
	{(PropertyRNA *)&rna_ObjectLineArt_crease_threshold, (PropertyRNA *)&rna_ObjectLineArt_usage,
	-1, "use_crease_override", 1, 0, 0, 0, 0, "Use Crease",
	"Use this object\'s crease setting to overwrite scene global",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLineArt_use_crease_override_get, ObjectLineArt_use_crease_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_ObjectLineArt_crease_threshold = {
	{(PropertyRNA *)&rna_ObjectLineArt_use_intersection_priority_override, (PropertyRNA *)&rna_ObjectLineArt_use_crease_override,
	-1, "crease_threshold", 1, 0, 0, 4, 0, "Crease",
	"Angles smaller than this will be treated as creases",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ObjectLineArt, crease_threshold), (RawPropertyType)5, nullptr},
	ObjectLineArt_crease_threshold_get, ObjectLineArt_crease_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0099999998f, 1, 0.0f, nullptr
};

BoolPropertyRNA rna_ObjectLineArt_use_intersection_priority_override = {
	{(PropertyRNA *)&rna_ObjectLineArt_intersection_priority, (PropertyRNA *)&rna_ObjectLineArt_crease_threshold,
	-1, "use_intersection_priority_override", 1, 0, 0, 0, 0, "Use Intersection Priority",
	"Use this object\'s intersection priority to override collection setting",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLineArt_use_intersection_priority_override_get, ObjectLineArt_use_intersection_priority_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_ObjectLineArt_intersection_priority = {
	{nullptr, (PropertyRNA *)&rna_ObjectLineArt_use_intersection_priority_override,
	-1, "intersection_priority", 1, 0, 0, 4, 0, "Intersection Priority",
	"The intersection line will be included into the object with the higher intersection priority value",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 387842048, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ObjectLineArt, intersection_priority), (RawPropertyType)2, nullptr},
	ObjectLineArt_intersection_priority_get, ObjectLineArt_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, 0, nullptr
};

StructRNA RNA_ObjectLineArt = {
	{(ContainerRNA *)&RNA_ObjectLightLinking, (ContainerRNA *)&RNA_ObjectDisplay,
	nullptr,
	{(PropertyRNA *)&rna_ObjectLineArt_rna_properties, (PropertyRNA *)&rna_ObjectLineArt_intersection_priority}},
	"ObjectLineArt", nullptr, nullptr, 516, nullptr, "Object Line Art",
	"Object line art settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectLineArt_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ObjectLineArt_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Object Light Linking */
CollectionPropertyRNA rna_ObjectLightLinking_rna_properties = {
	{(PropertyRNA *)&rna_ObjectLightLinking_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLightLinking_rna_properties_begin, ObjectLightLinking_rna_properties_next, ObjectLightLinking_rna_properties_end, ObjectLightLinking_rna_properties_get, nullptr, nullptr, ObjectLightLinking_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectLightLinking_rna_type = {
	{(PropertyRNA *)&rna_ObjectLightLinking_receiver_collection, (PropertyRNA *)&rna_ObjectLightLinking_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLightLinking_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ObjectLightLinking_receiver_collection = {
	{(PropertyRNA *)&rna_ObjectLightLinking_blocker_collection, (PropertyRNA *)&rna_ObjectLightLinking_rna_type,
	-1, "receiver_collection", 8388737, 0, 0, 0, 0, "Receiver Collection",
	"Collection which defines light linking relation of this emitter",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightLinking_collection_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLightLinking_receiver_collection_get, ObjectLightLinking_receiver_collection_set, nullptr, nullptr,&RNA_Collection
};

PointerPropertyRNA rna_ObjectLightLinking_blocker_collection = {
	{nullptr, (PropertyRNA *)&rna_ObjectLightLinking_receiver_collection,
	-1, "blocker_collection", 8388737, 0, 0, 0, 0, "Blocker Collection",
	"Collection which defines objects which block light from this emitter",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LightLinking_collection_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectLightLinking_blocker_collection_get, ObjectLightLinking_blocker_collection_set, nullptr, nullptr,&RNA_Collection
};

StructRNA RNA_ObjectLightLinking = {
	{(ContainerRNA *)&RNA_PointCache, (ContainerRNA *)&RNA_ObjectLineArt,
	nullptr,
	{(PropertyRNA *)&rna_ObjectLightLinking_rna_properties, (PropertyRNA *)&rna_ObjectLightLinking_blocker_collection}},
	"ObjectLightLinking", nullptr, nullptr, 516, nullptr, "Object Light Linking",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ObjectLightLinking_rna_properties,
	nullptr,
	&RNA_Object,
	nullptr,
	rna_ObjectLightLinking_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

