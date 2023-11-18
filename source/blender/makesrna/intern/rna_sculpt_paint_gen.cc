
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

#include "rna_sculpt_paint.cc"

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



RNA_EXTERN_C CollectionPropertyRNA rna_PaintToolSlot_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PaintToolSlot_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_PaintToolSlot_brush;


RNA_EXTERN_C CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C BoolPropertyRNA rna_Paint_tile_z;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;

RNA_EXTERN_C IntPropertyRNA rna_Sculpt_radial_symmetry;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_lock_x;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_lock_y;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_lock_z;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_deform_only;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_detail_size;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_detail_percent;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_constant_detail_resolution;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_topology;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_face_sets;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_boundary_edges;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_boundary_face_sets;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_cavity;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_cavity_inverted;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_custom_cavity_curve;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_automasking_cavity_factor;
RNA_EXTERN_C IntPropertyRNA rna_Sculpt_automasking_cavity_blur_steps;
RNA_EXTERN_C PointerPropertyRNA rna_Sculpt_automasking_cavity_curve;
RNA_EXTERN_C PointerPropertyRNA rna_Sculpt_automasking_cavity_curve_op;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_start_normal;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_view_normal;
RNA_EXTERN_C BoolPropertyRNA rna_Sculpt_use_automasking_view_occlusion;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_automasking_start_normal_limit;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_automasking_start_normal_falloff;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_automasking_view_normal_limit;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_automasking_view_normal_falloff;
RNA_EXTERN_C EnumPropertyRNA rna_Sculpt_symmetrize_direction;
RNA_EXTERN_C EnumPropertyRNA rna_Sculpt_detail_refine_method;
RNA_EXTERN_C EnumPropertyRNA rna_Sculpt_detail_type_method;
RNA_EXTERN_C FloatPropertyRNA rna_Sculpt_gravity;
RNA_EXTERN_C EnumPropertyRNA rna_Sculpt_transform_mode;
RNA_EXTERN_C PointerPropertyRNA rna_Sculpt_gravity_object;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;

RNA_EXTERN_C EnumPropertyRNA rna_GpPaint_color_mode;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;

RNA_EXTERN_C BoolPropertyRNA rna_VertexPaint_use_group_restrict;
RNA_EXTERN_C IntPropertyRNA rna_VertexPaint_radial_symmetry;


RNA_EXTERN_C CollectionPropertyRNA rna_PaintModeSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PaintModeSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_PaintModeSettings_canvas_source;
RNA_EXTERN_C PointerPropertyRNA rna_PaintModeSettings_canvas_image;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;

RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_use_occlude;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_use_backface_culling;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_use_normal_falloff;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_use_stencil_layer;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_invert_stencil;
RNA_EXTERN_C PointerPropertyRNA rna_ImagePaint_stencil_image;
RNA_EXTERN_C PointerPropertyRNA rna_ImagePaint_canvas;
RNA_EXTERN_C PointerPropertyRNA rna_ImagePaint_clone_image;
RNA_EXTERN_C FloatPropertyRNA rna_ImagePaint_stencil_color;
RNA_EXTERN_C FloatPropertyRNA rna_ImagePaint_dither;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_use_clone_layer;
RNA_EXTERN_C IntPropertyRNA rna_ImagePaint_seam_bleed;
RNA_EXTERN_C IntPropertyRNA rna_ImagePaint_normal_angle;
RNA_EXTERN_C IntPropertyRNA rna_ImagePaint_screen_grab_size;
RNA_EXTERN_C EnumPropertyRNA rna_ImagePaint_mode;
RNA_EXTERN_C EnumPropertyRNA rna_ImagePaint_interpolation;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_missing_uvs;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_missing_materials;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_missing_stencil;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePaint_missing_texture;

extern FunctionRNA rna_ImagePaint_detect_data_func;
extern BoolPropertyRNA rna_ImagePaint_detect_data_ok;



RNA_EXTERN_C CollectionPropertyRNA rna_ParticleEdit_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleEdit_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ParticleEdit_tool;
RNA_EXTERN_C EnumPropertyRNA rna_ParticleEdit_select_mode;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_use_preserve_length;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_use_preserve_root;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect;
RNA_EXTERN_C FloatPropertyRNA rna_ParticleEdit_emitter_distance;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_use_fade_time;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_use_auto_velocity;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_show_particles;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_use_default_interpolate;
RNA_EXTERN_C IntPropertyRNA rna_ParticleEdit_default_key_count;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleEdit_brush;
RNA_EXTERN_C IntPropertyRNA rna_ParticleEdit_display_step;
RNA_EXTERN_C IntPropertyRNA rna_ParticleEdit_fade_frames;
RNA_EXTERN_C EnumPropertyRNA rna_ParticleEdit_type;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_is_editable;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleEdit_is_hair;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleEdit_object;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleEdit_shape_object;


RNA_EXTERN_C CollectionPropertyRNA rna_ParticleBrush_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleBrush_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_ParticleBrush_size;
RNA_EXTERN_C FloatPropertyRNA rna_ParticleBrush_strength;
RNA_EXTERN_C IntPropertyRNA rna_ParticleBrush_count;
RNA_EXTERN_C IntPropertyRNA rna_ParticleBrush_steps;
RNA_EXTERN_C EnumPropertyRNA rna_ParticleBrush_puff_mode;
RNA_EXTERN_C BoolPropertyRNA rna_ParticleBrush_use_puff_volume;
RNA_EXTERN_C EnumPropertyRNA rna_ParticleBrush_length_mode;
RNA_EXTERN_C PointerPropertyRNA rna_ParticleBrush_curve;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilSculptGuide_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilSculptGuide_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptGuide_use_guide;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptGuide_use_snapping;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilSculptGuide_reference_object;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilSculptGuide_reference_point;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilSculptGuide_type;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilSculptGuide_angle;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilSculptGuide_angle_snap;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilSculptGuide_spacing;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilSculptGuide_location;


RNA_EXTERN_C CollectionPropertyRNA rna_GPencilSculptSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilSculptSettings_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilSculptSettings_guide;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_multiframe_falloff;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_thickness_curve;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_scale_thickness;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_stroke;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_layer_stroke;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_material_stroke;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_layer_active;
RNA_EXTERN_C BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_material_active;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilSculptSettings_multiframe_falloff_curve;
RNA_EXTERN_C PointerPropertyRNA rna_GPencilSculptSettings_thickness_primitive_curve;
RNA_EXTERN_C EnumPropertyRNA rna_GPencilSculptSettings_lock_axis;
RNA_EXTERN_C FloatPropertyRNA rna_GPencilSculptSettings_intersection_threshold;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_rna_type;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_brush;
RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_Paint_tool_slots;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_palette;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_brush_on_surface;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_show_low_resolution;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
RNA_EXTERN_C_OR_EXTERN IntPropertyRNA rna_Paint_input_samples;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_z;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_symmetry_feather;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Paint_cavity_curve;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_use_cavity;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Paint_tile_offset;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_x;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_y;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Paint_tile_z;

static PointerRNA PaintToolSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PaintToolSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaintToolSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaintToolSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaintToolSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaintToolSlot_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaintToolSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PaintToolSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PaintToolSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA PaintToolSlot_brush_get(PointerRNA *ptr)
{
    PaintToolSlot *data = (PaintToolSlot *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Brush, data->brush);
}

RNA_EXTERN_C void PaintToolSlot_brush_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PaintToolSlot *data = (PaintToolSlot *)(ptr->data);

    if (data->brush) {
        id_us_min((ID *)data->brush);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->brush = value.data;
}

static PointerRNA Paint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Paint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Paint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Paint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Paint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Paint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Paint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Paint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Paint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA Paint_brush_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Brush, data->brush);
}

RNA_EXTERN_C void Paint_brush_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Paint *data = (Paint *)(ptr->data);

    if (data->brush) {
        id_us_min((ID *)data->brush);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->brush = value.data;
}

RNA_EXTERN_C int Paint_tool_slots_length(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (data->tool_slots == nullptr) ? 0 : data->tool_slots_len;
}

static PointerRNA Paint_tool_slots_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PaintToolSlot, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Paint_tool_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Paint_tool_slots;

    rna_iterator_array_begin(iter, data->tool_slots, sizeof(data->tool_slots[0]), data->tool_slots_len, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Paint_tool_slots_get(iter);
    }
}

RNA_EXTERN_C void Paint_tool_slots_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Paint_tool_slots_get(iter);
    }
}

RNA_EXTERN_C void Paint_tool_slots_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Paint_tool_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Paint_tool_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = Paint_tool_slots_get(&iter); }
    }

    Paint_tool_slots_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Paint_palette_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Palette, data->palette);
}

RNA_EXTERN_C void Paint_palette_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Paint *data = (Paint *)(ptr->data);

    if (data->palette) {
        id_us_min((ID *)data->palette);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->palette = value.data;
}

RNA_EXTERN_C bool Paint_show_brush_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void Paint_show_brush_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C bool Paint_show_brush_on_surface_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void Paint_show_brush_on_surface_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C bool Paint_show_low_resolution_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void Paint_show_low_resolution_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C bool Paint_use_sculpt_delay_updates_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void Paint_use_sculpt_delay_updates_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C int Paint_input_samples_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (int)(data->num_input_samples);
}

RNA_EXTERN_C void Paint_input_samples_set(PointerRNA *ptr, int value)
{
    Paint *data = (Paint *)(ptr->data);
#ifdef __cplusplus
    data->num_input_samples = (std::remove_reference_t<decltype(data->num_input_samples)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->num_input_samples = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C bool Paint_use_symmetry_x_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 1) != 0);
}

RNA_EXTERN_C void Paint_use_symmetry_x_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 1; }
    else { data->symmetry_flags &= ~1; }
}

RNA_EXTERN_C bool Paint_use_symmetry_y_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 2) != 0);
}

RNA_EXTERN_C void Paint_use_symmetry_y_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 2; }
    else { data->symmetry_flags &= ~2; }
}

RNA_EXTERN_C bool Paint_use_symmetry_z_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 4) != 0);
}

RNA_EXTERN_C void Paint_use_symmetry_z_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 4; }
    else { data->symmetry_flags &= ~4; }
}

RNA_EXTERN_C bool Paint_use_symmetry_feather_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 8) != 0);
}

RNA_EXTERN_C void Paint_use_symmetry_feather_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 8; }
    else { data->symmetry_flags &= ~8; }
}

RNA_EXTERN_C PointerRNA Paint_cavity_curve_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cavity_curve);
}

RNA_EXTERN_C bool Paint_use_cavity_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void Paint_use_cavity_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C void Paint_tile_offset_get(PointerRNA *ptr, float values[3])
{
    Paint *data = (Paint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tile_offset)[i]);
    }
}

RNA_EXTERN_C void Paint_tile_offset_set(PointerRNA *ptr, const float values[3])
{
    Paint *data = (Paint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->tile_offset)[i] = CLAMPIS(values[i], 0.0099999998f, FLT_MAX);
    }
}

RNA_EXTERN_C bool Paint_tile_x_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 16) != 0);
}

RNA_EXTERN_C void Paint_tile_x_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 16; }
    else { data->symmetry_flags &= ~16; }
}

RNA_EXTERN_C bool Paint_tile_y_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 32) != 0);
}

RNA_EXTERN_C void Paint_tile_y_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 32; }
    else { data->symmetry_flags &= ~32; }
}

RNA_EXTERN_C bool Paint_tile_z_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 64) != 0);
}

RNA_EXTERN_C void Paint_tile_z_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 64; }
    else { data->symmetry_flags &= ~64; }
}

RNA_EXTERN_C void Sculpt_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
    Sculpt *data = (Sculpt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->radial_symm)[i]);
    }
}

RNA_EXTERN_C void Sculpt_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
    Sculpt *data = (Sculpt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((int *)data->radial_symm)[i] = CLAMPIS(values[i], 1, 64);
    }
}

RNA_EXTERN_C bool Sculpt_lock_x_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void Sculpt_lock_x_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C bool Sculpt_lock_y_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void Sculpt_lock_y_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C bool Sculpt_lock_z_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void Sculpt_lock_z_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C bool Sculpt_use_deform_only_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

RNA_EXTERN_C void Sculpt_use_deform_only_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

RNA_EXTERN_C float Sculpt_detail_size_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->detail_size);
}

RNA_EXTERN_C void Sculpt_detail_size_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->detail_size = (std::remove_reference_t<decltype(data->detail_size)>)value;
#else
    data->detail_size = value;
#endif
}

RNA_EXTERN_C float Sculpt_detail_percent_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->detail_percent);
}

RNA_EXTERN_C void Sculpt_detail_percent_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->detail_percent = (std::remove_reference_t<decltype(data->detail_percent)>)value;
#else
    data->detail_percent = value;
#endif
}

RNA_EXTERN_C float Sculpt_constant_detail_resolution_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->constant_detail);
}

RNA_EXTERN_C void Sculpt_constant_detail_resolution_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->constant_detail = (std::remove_reference_t<decltype(data->constant_detail)>)CLAMPIS(value, 0.0001000000f, FLT_MAX);
#else
    data->constant_detail = CLAMPIS(value, 0.0001000000f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool Sculpt_use_automasking_topology_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 1) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_topology_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 1; }
    else { data->automasking_flags &= ~1; }
}

RNA_EXTERN_C bool Sculpt_use_automasking_face_sets_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 2) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_face_sets_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 2; }
    else { data->automasking_flags &= ~2; }
}

RNA_EXTERN_C bool Sculpt_use_automasking_boundary_edges_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 4) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_boundary_edges_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 4; }
    else { data->automasking_flags &= ~4; }
}

RNA_EXTERN_C bool Sculpt_use_automasking_boundary_face_sets_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 8) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_boundary_face_sets_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 8; }
    else { data->automasking_flags &= ~8; }
}

RNA_EXTERN_C bool Sculpt_use_automasking_cavity_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 16) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_cavity_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Sculpt_automasking_cavity_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Sculpt_use_automasking_cavity_inverted_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 32) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_cavity_inverted_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Sculpt_automasking_invert_cavity_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Sculpt_use_automasking_custom_cavity_curve_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 64) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_custom_cavity_curve_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 64; }
    else { data->automasking_flags &= ~64; }
}

RNA_EXTERN_C float Sculpt_automasking_cavity_factor_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->automasking_cavity_factor);
}

RNA_EXTERN_C void Sculpt_automasking_cavity_factor_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->automasking_cavity_factor = (std::remove_reference_t<decltype(data->automasking_cavity_factor)>)CLAMPIS(value, 0.0f, 5.0f);
#else
    data->automasking_cavity_factor = CLAMPIS(value, 0.0f, 5.0f);
#endif
}

RNA_EXTERN_C int Sculpt_automasking_cavity_blur_steps_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->automasking_cavity_blur_steps);
}

RNA_EXTERN_C void Sculpt_automasking_cavity_blur_steps_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->automasking_cavity_blur_steps = (std::remove_reference_t<decltype(data->automasking_cavity_blur_steps)>)CLAMPIS(value, 0, 25);
#else
    data->automasking_cavity_blur_steps = CLAMPIS(value, 0, 25);
#endif
}

RNA_EXTERN_C PointerRNA Sculpt_automasking_cavity_curve_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->automasking_cavity_curve);
}

RNA_EXTERN_C PointerRNA Sculpt_automasking_cavity_curve_op_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->automasking_cavity_curve_op);
}

RNA_EXTERN_C bool Sculpt_use_automasking_start_normal_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 256) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_start_normal_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 256; }
    else { data->automasking_flags &= ~256; }
}

RNA_EXTERN_C bool Sculpt_use_automasking_view_normal_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 512) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_view_normal_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 512; }
    else { data->automasking_flags &= ~512; }
}

RNA_EXTERN_C bool Sculpt_use_automasking_view_occlusion_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 1024) != 0);
}

RNA_EXTERN_C void Sculpt_use_automasking_view_occlusion_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 1024; }
    else { data->automasking_flags &= ~1024; }
}

RNA_EXTERN_C float Sculpt_automasking_start_normal_limit_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->automasking_start_normal_limit);
}

RNA_EXTERN_C void Sculpt_automasking_start_normal_limit_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->automasking_start_normal_limit = (std::remove_reference_t<decltype(data->automasking_start_normal_limit)>)CLAMPIS(value, 0.0001000000f, 3.1415927410f);
#else
    data->automasking_start_normal_limit = CLAMPIS(value, 0.0001000000f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float Sculpt_automasking_start_normal_falloff_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->automasking_start_normal_falloff);
}

RNA_EXTERN_C void Sculpt_automasking_start_normal_falloff_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->automasking_start_normal_falloff = (std::remove_reference_t<decltype(data->automasking_start_normal_falloff)>)CLAMPIS(value, 0.0001000000f, 1.0f);
#else
    data->automasking_start_normal_falloff = CLAMPIS(value, 0.0001000000f, 1.0f);
#endif
}

RNA_EXTERN_C float Sculpt_automasking_view_normal_limit_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->automasking_view_normal_limit);
}

RNA_EXTERN_C void Sculpt_automasking_view_normal_limit_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->automasking_view_normal_limit = (std::remove_reference_t<decltype(data->automasking_view_normal_limit)>)CLAMPIS(value, 0.0001000000f, 3.1415927410f);
#else
    data->automasking_view_normal_limit = CLAMPIS(value, 0.0001000000f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float Sculpt_automasking_view_normal_falloff_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->automasking_view_normal_falloff);
}

RNA_EXTERN_C void Sculpt_automasking_view_normal_falloff_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->automasking_view_normal_falloff = (std::remove_reference_t<decltype(data->automasking_view_normal_falloff)>)CLAMPIS(value, 0.0001000000f, 1.0f);
#else
    data->automasking_view_normal_falloff = CLAMPIS(value, 0.0001000000f, 1.0f);
#endif
}

RNA_EXTERN_C int Sculpt_symmetrize_direction_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->symmetrize_direction);
}

RNA_EXTERN_C void Sculpt_symmetrize_direction_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->symmetrize_direction = (std::remove_reference_t<decltype(data->symmetrize_direction)>)value;
#else
    data->symmetrize_direction = value;
#endif
}

RNA_EXTERN_C int Sculpt_detail_refine_method_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((data->flags) & 6144);
}

RNA_EXTERN_C void Sculpt_detail_refine_method_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->flags &= ~6144;
    data->flags |= value;
}

RNA_EXTERN_C int Sculpt_detail_type_method_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((data->flags) & 90112);
}

RNA_EXTERN_C void Sculpt_detail_type_method_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->flags &= ~90112;
    data->flags |= value;
}

RNA_EXTERN_C float Sculpt_gravity_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->gravity_factor);
}

RNA_EXTERN_C void Sculpt_gravity_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->gravity_factor = (std::remove_reference_t<decltype(data->gravity_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->gravity_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int Sculpt_transform_mode_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->transform_mode);
}

RNA_EXTERN_C void Sculpt_transform_mode_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
#ifdef __cplusplus
    data->transform_mode = (std::remove_reference_t<decltype(data->transform_mode)>)value;
#else
    data->transform_mode = value;
#endif
}

RNA_EXTERN_C PointerRNA Sculpt_gravity_object_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->gravity_object);
}

RNA_EXTERN_C void Sculpt_gravity_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->gravity_object = value.data;
}

RNA_EXTERN_C int GpPaint_color_mode_get(PointerRNA *ptr)
{
    GpPaint *data = (GpPaint *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void GpPaint_color_mode_set(PointerRNA *ptr, int value)
{
    GpPaint *data = (GpPaint *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C bool VertexPaint_use_group_restrict_get(PointerRNA *ptr)
{
    VPaint *data = (VPaint *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void VertexPaint_use_group_restrict_set(PointerRNA *ptr, bool value)
{
    VPaint *data = (VPaint *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C void VertexPaint_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
    VPaint *data = (VPaint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->radial_symm)[i]);
    }
}

RNA_EXTERN_C void VertexPaint_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
    VPaint *data = (VPaint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((int *)data->radial_symm)[i] = CLAMPIS(values[i], 1, 64);
    }
}

static PointerRNA PaintModeSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PaintModeSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaintModeSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaintModeSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaintModeSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaintModeSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PaintModeSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PaintModeSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PaintModeSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PaintModeSettings_canvas_source_get(PointerRNA *ptr)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    return (int)(data->canvas_source);
}

RNA_EXTERN_C void PaintModeSettings_canvas_source_set(PointerRNA *ptr, int value)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
#ifdef __cplusplus
    data->canvas_source = (std::remove_reference_t<decltype(data->canvas_source)>)value;
#else
    data->canvas_source = value;
#endif
}

RNA_EXTERN_C PointerRNA PaintModeSettings_canvas_image_get(PointerRNA *ptr)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->canvas_image);
}

RNA_EXTERN_C void PaintModeSettings_canvas_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);

    if (data->canvas_image) {
        id_us_min((ID *)data->canvas_image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->canvas_image = value.data;
}

RNA_EXTERN_C bool ImagePaint_use_occlude_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !(((data->flag) & 16) != 0);
}

RNA_EXTERN_C void ImagePaint_use_occlude_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool ImagePaint_use_backface_culling_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !(((data->flag) & 32) != 0);
}

RNA_EXTERN_C void ImagePaint_use_backface_culling_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool ImagePaint_use_normal_falloff_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

RNA_EXTERN_C void ImagePaint_use_normal_falloff_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool ImagePaint_use_stencil_layer_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void ImagePaint_use_stencil_layer_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool ImagePaint_invert_stencil_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void ImagePaint_invert_stencil_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C PointerRNA ImagePaint_stencil_image_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->stencil);
}

RNA_EXTERN_C void ImagePaint_stencil_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

    if (data->stencil) {
        id_us_min((ID *)data->stencil);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->stencil = value.data;
}

RNA_EXTERN_C PointerRNA ImagePaint_canvas_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->canvas);
}

RNA_EXTERN_C void ImagePaint_canvas_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

    if (data->canvas) {
        id_us_min((ID *)data->canvas);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->canvas = value.data;
}

RNA_EXTERN_C PointerRNA ImagePaint_clone_image_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone);
}

RNA_EXTERN_C void ImagePaint_clone_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

    if (data->clone) {
        id_us_min((ID *)data->clone);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->clone = value.data;
}

RNA_EXTERN_C void ImagePaint_stencil_color_get(PointerRNA *ptr, float values[3])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->stencil_col)[i]);
    }
}

RNA_EXTERN_C void ImagePaint_stencil_color_set(PointerRNA *ptr, const float values[3])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->stencil_col)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

RNA_EXTERN_C float ImagePaint_dither_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (float)(data->dither);
}

RNA_EXTERN_C void ImagePaint_dither_set(PointerRNA *ptr, float value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
#ifdef __cplusplus
    data->dither = (std::remove_reference_t<decltype(data->dither)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->dither = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C bool ImagePaint_use_clone_layer_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void ImagePaint_use_clone_layer_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C int ImagePaint_seam_bleed_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->seam_bleed);
}

RNA_EXTERN_C void ImagePaint_seam_bleed_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
#ifdef __cplusplus
    data->seam_bleed = (std::remove_reference_t<decltype(data->seam_bleed)>)CLAMPIS(value, -32768, 32767);
#else
    data->seam_bleed = CLAMPIS(value, -32768, 32767);
#endif
}

RNA_EXTERN_C int ImagePaint_normal_angle_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->normal_angle);
}

RNA_EXTERN_C void ImagePaint_normal_angle_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
#ifdef __cplusplus
    data->normal_angle = (std::remove_reference_t<decltype(data->normal_angle)>)CLAMPIS(value, 0, 90);
#else
    data->normal_angle = CLAMPIS(value, 0, 90);
#endif
}

RNA_EXTERN_C void ImagePaint_screen_grab_size_get(PointerRNA *ptr, int values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((short *)data->screen_grab_size)[i]);
    }
}

RNA_EXTERN_C void ImagePaint_screen_grab_size_set(PointerRNA *ptr, const int values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((short *)data->screen_grab_size)[i] = CLAMPIS(values[i], 512, 16384);
    }
}

RNA_EXTERN_C int ImagePaint_mode_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void ImagePaint_mode_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C int ImagePaint_interpolation_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->interp);
}

RNA_EXTERN_C void ImagePaint_interpolation_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
#ifdef __cplusplus
    data->interp = (std::remove_reference_t<decltype(data->interp)>)value;
#else
    data->interp = value;
#endif
}

RNA_EXTERN_C bool ImagePaint_missing_uvs_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 1) != 0);
}

RNA_EXTERN_C bool ImagePaint_missing_materials_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 2) != 0);
}

RNA_EXTERN_C bool ImagePaint_missing_stencil_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 8) != 0);
}

RNA_EXTERN_C bool ImagePaint_missing_texture_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 4) != 0);
}

static PointerRNA ParticleEdit_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ParticleEdit_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleEdit_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleEdit_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ParticleEdit_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleEdit_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ParticleEdit_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ParticleEdit_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ParticleEdit_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ParticleEdit_tool_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->brushtype);
}

RNA_EXTERN_C void ParticleEdit_tool_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ParticleEdit_tool_set;
    fn(ptr, value);
}

RNA_EXTERN_C int ParticleEdit_select_mode_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((data->selectmode) & 7);
}

RNA_EXTERN_C void ParticleEdit_select_mode_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->selectmode &= ~7;
    data->selectmode |= value;
}

RNA_EXTERN_C bool ParticleEdit_use_preserve_length_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ParticleEdit_use_preserve_length_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool ParticleEdit_use_preserve_root_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void ParticleEdit_use_preserve_root_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool ParticleEdit_use_emitter_deflect_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void ParticleEdit_use_emitter_deflect_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C float ParticleEdit_emitter_distance_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (float)(data->emitterdist);
}

RNA_EXTERN_C void ParticleEdit_emitter_distance_set(PointerRNA *ptr, float value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
#ifdef __cplusplus
    data->emitterdist = (std::remove_reference_t<decltype(data->emitterdist)>)value;
#else
    data->emitterdist = value;
#endif
}

RNA_EXTERN_C bool ParticleEdit_use_fade_time_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void ParticleEdit_use_fade_time_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool ParticleEdit_use_auto_velocity_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void ParticleEdit_use_auto_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool ParticleEdit_show_particles_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void ParticleEdit_show_particles_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool ParticleEdit_use_default_interpolate_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void ParticleEdit_use_default_interpolate_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C int ParticleEdit_default_key_count_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->totaddkey);
}

RNA_EXTERN_C void ParticleEdit_default_key_count_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
#ifdef __cplusplus
    data->totaddkey = (std::remove_reference_t<decltype(data->totaddkey)>)CLAMPIS(value, 2, 32767);
#else
    data->totaddkey = CLAMPIS(value, 2, 32767);
#endif
}

RNA_EXTERN_C PointerRNA ParticleEdit_brush_get(PointerRNA *ptr)
{
    return rna_ParticleEdit_brush_get(ptr);
}

RNA_EXTERN_C int ParticleEdit_display_step_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->draw_step);
}

RNA_EXTERN_C void ParticleEdit_display_step_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_step = (std::remove_reference_t<decltype(data->draw_step)>)CLAMPIS(value, 1, 10);
#else
    data->draw_step = CLAMPIS(value, 1, 10);
#endif
}

RNA_EXTERN_C int ParticleEdit_fade_frames_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->fade_frames);
}

RNA_EXTERN_C void ParticleEdit_fade_frames_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
#ifdef __cplusplus
    data->fade_frames = (std::remove_reference_t<decltype(data->fade_frames)>)CLAMPIS(value, 1, 100);
#else
    data->fade_frames = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C int ParticleEdit_type_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->edittype);
}

RNA_EXTERN_C void ParticleEdit_type_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
#ifdef __cplusplus
    data->edittype = (std::remove_reference_t<decltype(data->edittype)>)value;
#else
    data->edittype = value;
#endif
}

RNA_EXTERN_C bool ParticleEdit_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleEdit_editable_get;
    return fn(ptr);
}

RNA_EXTERN_C bool ParticleEdit_is_hair_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleEdit_hair_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA ParticleEdit_object_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

RNA_EXTERN_C PointerRNA ParticleEdit_shape_object_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->shape_object);
}

RNA_EXTERN_C void ParticleEdit_shape_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->shape_object = value.data;
}

static PointerRNA ParticleBrush_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ParticleBrush_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleBrush_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleBrush_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ParticleBrush_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleBrush_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ParticleBrush_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ParticleBrush_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ParticleBrush_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ParticleBrush_size_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->size);
}

RNA_EXTERN_C void ParticleBrush_size_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
#ifdef __cplusplus
    data->size = (std::remove_reference_t<decltype(data->size)>)CLAMPIS(value, 1, 32767);
#else
    data->size = CLAMPIS(value, 1, 32767);
#endif
}

RNA_EXTERN_C float ParticleBrush_strength_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (float)(data->strength);
}

RNA_EXTERN_C void ParticleBrush_strength_set(PointerRNA *ptr, float value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
#ifdef __cplusplus
    data->strength = (std::remove_reference_t<decltype(data->strength)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->strength = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C int ParticleBrush_count_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->count);
}

RNA_EXTERN_C void ParticleBrush_count_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
#ifdef __cplusplus
    data->count = (std::remove_reference_t<decltype(data->count)>)CLAMPIS(value, 1, 1000);
#else
    data->count = CLAMPIS(value, 1, 1000);
#endif
}

RNA_EXTERN_C int ParticleBrush_steps_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->step);
}

RNA_EXTERN_C void ParticleBrush_steps_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
#ifdef __cplusplus
    data->step = (std::remove_reference_t<decltype(data->step)>)CLAMPIS(value, 1, 32767);
#else
    data->step = CLAMPIS(value, 1, 32767);
#endif
}

RNA_EXTERN_C int ParticleBrush_puff_mode_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->invert);
}

RNA_EXTERN_C void ParticleBrush_puff_mode_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
#ifdef __cplusplus
    data->invert = (std::remove_reference_t<decltype(data->invert)>)value;
#else
    data->invert = value;
#endif
}

RNA_EXTERN_C bool ParticleBrush_use_puff_volume_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ParticleBrush_use_puff_volume_set(PointerRNA *ptr, bool value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int ParticleBrush_length_mode_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->invert);
}

RNA_EXTERN_C void ParticleBrush_length_mode_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
#ifdef __cplusplus
    data->invert = (std::remove_reference_t<decltype(data->invert)>)value;
#else
    data->invert = value;
#endif
}

RNA_EXTERN_C PointerRNA ParticleBrush_curve_get(PointerRNA *ptr)
{
    return rna_ParticleBrush_curve_get(ptr);
}

static PointerRNA GPencilSculptGuide_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilSculptGuide_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilSculptGuide_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilSculptGuide_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilSculptGuide_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilSculptGuide_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilSculptGuide_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilSculptGuide_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilSculptGuide_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool GPencilSculptGuide_use_guide_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (bool)(data->use_guide);
}

RNA_EXTERN_C void GPencilSculptGuide_use_guide_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->use_guide = (std::remove_reference_t<decltype(data->use_guide)>)value;
#else
    data->use_guide = value;
#endif
}

RNA_EXTERN_C bool GPencilSculptGuide_use_snapping_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (bool)(data->use_snapping);
}

RNA_EXTERN_C void GPencilSculptGuide_use_snapping_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->use_snapping = (std::remove_reference_t<decltype(data->use_snapping)>)value;
#else
    data->use_snapping = value;
#endif
}

RNA_EXTERN_C PointerRNA GPencilSculptGuide_reference_object_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->reference_object);
}

RNA_EXTERN_C void GPencilSculptGuide_reference_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->reference_object = value.data;
}

RNA_EXTERN_C int GPencilSculptGuide_reference_point_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (int)(data->reference_point);
}

RNA_EXTERN_C void GPencilSculptGuide_reference_point_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->reference_point = (std::remove_reference_t<decltype(data->reference_point)>)value;
#else
    data->reference_point = value;
#endif
}

RNA_EXTERN_C int GPencilSculptGuide_type_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void GPencilSculptGuide_type_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C float GPencilSculptGuide_angle_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->angle);
}

RNA_EXTERN_C void GPencilSculptGuide_angle_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->angle = (std::remove_reference_t<decltype(data->angle)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->angle = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float GPencilSculptGuide_angle_snap_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->angle_snap);
}

RNA_EXTERN_C void GPencilSculptGuide_angle_snap_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->angle_snap = (std::remove_reference_t<decltype(data->angle_snap)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->angle_snap = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float GPencilSculptGuide_spacing_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->spacing);
}

RNA_EXTERN_C void GPencilSculptGuide_spacing_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
#ifdef __cplusplus
    data->spacing = (std::remove_reference_t<decltype(data->spacing)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->spacing = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void GPencilSculptGuide_location_get(PointerRNA *ptr, float values[3])
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->location)[i]);
    }
}

RNA_EXTERN_C void GPencilSculptGuide_location_set(PointerRNA *ptr, const float values[3])
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->location)[i] = values[i];
    }
}

static PointerRNA GPencilSculptSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void GPencilSculptSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilSculptSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilSculptSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilSculptSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilSculptSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void GPencilSculptSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int GPencilSculptSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA GPencilSculptSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA GPencilSculptSettings_guide_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GPencilSculptGuide, &data->guide);
}

RNA_EXTERN_C bool GPencilSculptSettings_use_multiframe_falloff_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_multiframe_falloff_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_thickness_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_thickness_curve_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_scale_thickness_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_scale_thickness_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_automasking_stroke_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_automasking_stroke_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_automasking_layer_stroke_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_automasking_layer_stroke_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_automasking_material_stroke_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_automasking_material_stroke_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_automasking_layer_active_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_automasking_layer_active_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool GPencilSculptSettings_use_automasking_material_active_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void GPencilSculptSettings_use_automasking_material_active_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C PointerRNA GPencilSculptSettings_multiframe_falloff_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cur_falloff);
}

RNA_EXTERN_C PointerRNA GPencilSculptSettings_thickness_primitive_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cur_primitive);
}

RNA_EXTERN_C int GPencilSculptSettings_lock_axis_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (int)(data->lock_axis);
}

RNA_EXTERN_C void GPencilSculptSettings_lock_axis_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
#ifdef __cplusplus
    data->lock_axis = (std::remove_reference_t<decltype(data->lock_axis)>)value;
#else
    data->lock_axis = value;
#endif
}

RNA_EXTERN_C float GPencilSculptSettings_intersection_threshold_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (float)(data->isect_threshold);
}

RNA_EXTERN_C void GPencilSculptSettings_intersection_threshold_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
#ifdef __cplusplus
    data->isect_threshold = (std::remove_reference_t<decltype(data->isect_threshold)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->isect_threshold = CLAMPIS(value, 0.0f, 10.0f);
#endif
}












RNA_EXTERN_C bool ImagePaint_detect_data_func(struct ImagePaintSettings *_self)
{
	return rna_ImaPaint_detect_data(_self);
}

static void ImagePaint_detect_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ImagePaintSettings *_self;
	bool ok;
	char *_data, *_retdata;
	
	_self = (struct ImagePaintSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ok = rna_ImaPaint_detect_data(_self);
	*((bool *)_retdata) = ok;
}

/* Repeated prototypes to detect errors */

bool rna_ImaPaint_detect_data(struct ImagePaintSettings *_self);






/* Paint Curve */
StructRNA RNA_PaintCurve = {
	{(ContainerRNA *)&RNA_PaintToolSlot, (ContainerRNA *)&RNA_View2D,
	nullptr,
	{nullptr, nullptr}},
	"PaintCurve", nullptr, nullptr, 519, nullptr, "Paint Curve",
	"",
	"*", 321,
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

/* Paint Tool Slot */
CollectionPropertyRNA rna_PaintToolSlot_rna_properties = {
	{(PropertyRNA *)&rna_PaintToolSlot_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaintToolSlot_rna_properties_begin, PaintToolSlot_rna_properties_next, PaintToolSlot_rna_properties_end, PaintToolSlot_rna_properties_get, nullptr, nullptr, PaintToolSlot_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PaintToolSlot_rna_type = {
	{(PropertyRNA *)&rna_PaintToolSlot_brush, (PropertyRNA *)&rna_PaintToolSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaintToolSlot_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_PaintToolSlot_brush = {
	{nullptr, (PropertyRNA *)&rna_PaintToolSlot_rna_type,
	-1, "brush", 8388801, 0, 0, 0, 0, "Brush",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaintToolSlot_brush_get, PaintToolSlot_brush_set, nullptr, rna_Brush_mode_with_tool_poll,&RNA_Brush
};

StructRNA RNA_PaintToolSlot = {
	{(ContainerRNA *)&RNA_Paint, (ContainerRNA *)&RNA_PaintCurve,
	nullptr,
	{(PropertyRNA *)&rna_PaintToolSlot_rna_properties, (PropertyRNA *)&rna_PaintToolSlot_brush}},
	"PaintToolSlot", nullptr, nullptr, 516, nullptr, "Paint Tool Slot",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PaintToolSlot_rna_properties,
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

/* Paint */
CollectionPropertyRNA rna_Paint_rna_properties = {
	{(PropertyRNA *)&rna_Paint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_rna_properties_begin, Paint_rna_properties_next, Paint_rna_properties_end, Paint_rna_properties_get, nullptr, nullptr, Paint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Paint_rna_type = {
	{(PropertyRNA *)&rna_Paint_brush, (PropertyRNA *)&rna_Paint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Paint_brush = {
	{(PropertyRNA *)&rna_Paint_tool_slots, (PropertyRNA *)&rna_Paint_rna_type,
	-1, "brush", 8388801, 0, 0, 0, 0, "Brush",
	"Active Brush",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Paint_brush_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_brush_get, Paint_brush_set, nullptr, rna_Brush_mode_poll,&RNA_Brush
};

CollectionPropertyRNA rna_Paint_tool_slots = {
	{(PropertyRNA *)&rna_Paint_palette, (PropertyRNA *)&rna_Paint_brush,
	-1, "tool_slots", 0, 0, 0, 8, 0, "Paint Tool Slots",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_tool_slots_begin, Paint_tool_slots_next, Paint_tool_slots_end, Paint_tool_slots_get, Paint_tool_slots_length, Paint_tool_slots_lookup_int, nullptr, nullptr, &RNA_PaintToolSlot
};

PointerPropertyRNA rna_Paint_palette = {
	{(PropertyRNA *)&rna_Paint_show_brush, (PropertyRNA *)&rna_Paint_tool_slots,
	-1, "palette", 8388801, 0, 0, 0, 0, "Palette",
	"Active Palette",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_palette_get, Paint_palette_set, nullptr, nullptr,&RNA_Palette
};

BoolPropertyRNA rna_Paint_show_brush = {
	{(PropertyRNA *)&rna_Paint_show_brush_on_surface, (PropertyRNA *)&rna_Paint_palette,
	-1, "show_brush", 1, 0, 0, 0, 0, "Show Brush",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_show_brush_get, Paint_show_brush_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_show_brush_on_surface = {
	{(PropertyRNA *)&rna_Paint_show_low_resolution, (PropertyRNA *)&rna_Paint_show_brush,
	-1, "show_brush_on_surface", 1, 0, 0, 0, 0, "Show Brush On Surface",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_show_brush_on_surface_get, Paint_show_brush_on_surface_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_show_low_resolution = {
	{(PropertyRNA *)&rna_Paint_use_sculpt_delay_updates, (PropertyRNA *)&rna_Paint_show_brush_on_surface,
	-1, "show_low_resolution", 1, 0, 0, 0, 0, "Fast Navigate",
	"For multires, show low resolution while navigating the view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_show_low_resolution_get, Paint_show_low_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_use_sculpt_delay_updates = {
	{(PropertyRNA *)&rna_Paint_input_samples, (PropertyRNA *)&rna_Paint_show_low_resolution,
	-1, "use_sculpt_delay_updates", 1, 0, 0, 0, 0, "Delay Viewport Updates",
	"Update the geometry when it enters the view, providing faster view navigation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_use_sculpt_delay_updates_get, Paint_use_sculpt_delay_updates_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Paint_input_samples = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_x, (PropertyRNA *)&rna_Paint_use_sculpt_delay_updates,
	-1, "input_samples", 1, 0, 0, 4, 0, "Input Samples",
	"Average multiple input samples together to smooth the brush stroke",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Paint, num_input_samples), (RawPropertyType)0, nullptr},
	Paint_input_samples_get, Paint_input_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 64, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_Paint_use_symmetry_x = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_y, (PropertyRNA *)&rna_Paint_input_samples,
	-1, "use_symmetry_x", 1, 0, 0, 0, 0, "Symmetry X",
	"Mirror brush across the X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_use_symmetry_x_get, Paint_use_symmetry_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_use_symmetry_y = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_z, (PropertyRNA *)&rna_Paint_use_symmetry_x,
	-1, "use_symmetry_y", 1, 0, 0, 0, 0, "Symmetry Y",
	"Mirror brush across the Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_use_symmetry_y_get, Paint_use_symmetry_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_use_symmetry_z = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_feather, (PropertyRNA *)&rna_Paint_use_symmetry_y,
	-1, "use_symmetry_z", 1, 0, 0, 0, 0, "Symmetry Z",
	"Mirror brush across the Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_use_symmetry_z_get, Paint_use_symmetry_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_use_symmetry_feather = {
	{(PropertyRNA *)&rna_Paint_cavity_curve, (PropertyRNA *)&rna_Paint_use_symmetry_z,
	-1, "use_symmetry_feather", 1, 0, 0, 0, 0, "Symmetry Feathering",
	"Reduce the strength of the brush where it overlaps symmetrical daubs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_use_symmetry_feather_get, Paint_use_symmetry_feather_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Paint_cavity_curve = {
	{(PropertyRNA *)&rna_Paint_use_cavity, (PropertyRNA *)&rna_Paint_use_symmetry_feather,
	-1, "cavity_curve", 8650752, 0, 0, 0, 0, "Curve",
	"Editable cavity curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_cavity_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

BoolPropertyRNA rna_Paint_use_cavity = {
	{(PropertyRNA *)&rna_Paint_tile_offset, (PropertyRNA *)&rna_Paint_cavity_curve,
	-1, "use_cavity", 1, 0, 0, 0, 0, "Cavity Mask",
	"Mask painting according to mesh geometry cavity",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_use_cavity_get, Paint_use_cavity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Paint_tile_offset_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Paint_tile_offset = {
	{(PropertyRNA *)&rna_Paint_tile_x, (PropertyRNA *)&rna_Paint_use_cavity,
	-1, "tile_offset", 1, 0, 0, 4, 0, "Tiling offset for the X Axis",
	"Stride at which tiled strokes are copied",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Paint, tile_offset), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Paint_tile_offset_get, Paint_tile_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, FLT_MAX, 100.0f, 2, 0.0f, rna_Paint_tile_offset_default
};

BoolPropertyRNA rna_Paint_tile_x = {
	{(PropertyRNA *)&rna_Paint_tile_y, (PropertyRNA *)&rna_Paint_tile_offset,
	-1, "tile_x", 1, 0, 0, 0, 0, "Tile X",
	"Tile along X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_tile_x_get, Paint_tile_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_tile_y = {
	{(PropertyRNA *)&rna_Paint_tile_z, (PropertyRNA *)&rna_Paint_tile_x,
	-1, "tile_y", 1, 0, 0, 0, 0, "Tile Y",
	"Tile along Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_tile_y_get, Paint_tile_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Paint_tile_z = {
	{nullptr, (PropertyRNA *)&rna_Paint_tile_y,
	-1, "tile_z", 1, 0, 0, 0, 0, "Tile Z",
	"Tile along Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Paint_tile_z_get, Paint_tile_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_Paint = {
	{(ContainerRNA *)&RNA_Sculpt, (ContainerRNA *)&RNA_PaintToolSlot,
	nullptr,
	{(PropertyRNA *)&rna_Paint_rna_properties, (PropertyRNA *)&rna_Paint_tile_z}},
	"Paint", nullptr, nullptr, 516, nullptr, "Paint",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
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

/* Sculpt */
static int rna_Sculpt_radial_symmetry_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Sculpt_radial_symmetry = {
	{(PropertyRNA *)&rna_Sculpt_lock_x, nullptr,
	-1, "radial_symmetry", 1, 0, 0, 4, 0, "Radial Symmetry Count X Axis",
	"Number of times to copy strokes across the surface",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, radial_symm), (RawPropertyType)0, nullptr},
	nullptr, nullptr, Sculpt_radial_symmetry_get, Sculpt_radial_symmetry_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32, 1, 64, 1, 1, rna_Sculpt_radial_symmetry_default
};

BoolPropertyRNA rna_Sculpt_lock_x = {
	{(PropertyRNA *)&rna_Sculpt_lock_y, (PropertyRNA *)&rna_Sculpt_radial_symmetry,
	-1, "lock_x", 1, 0, 0, 0, 0, "Lock X",
	"Disallow changes to the X axis of vertices",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_lock_x_get, Sculpt_lock_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_lock_y = {
	{(PropertyRNA *)&rna_Sculpt_lock_z, (PropertyRNA *)&rna_Sculpt_lock_x,
	-1, "lock_y", 1, 0, 0, 0, 0, "Lock Y",
	"Disallow changes to the Y axis of vertices",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_lock_y_get, Sculpt_lock_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_lock_z = {
	{(PropertyRNA *)&rna_Sculpt_use_deform_only, (PropertyRNA *)&rna_Sculpt_lock_y,
	-1, "lock_z", 1, 0, 0, 0, 0, "Lock Z",
	"Disallow changes to the Z axis of vertices",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_lock_z_get, Sculpt_lock_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_deform_only = {
	{(PropertyRNA *)&rna_Sculpt_detail_size, (PropertyRNA *)&rna_Sculpt_lock_z,
	-1, "use_deform_only", 4194305, 0, 0, 0, 0, "Use Deform Only",
	"Use only deformation modifiers (temporary disable all constructive modifiers except multi-resolution)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Sculpt_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_deform_only_get, Sculpt_use_deform_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Sculpt_detail_size = {
	{(PropertyRNA *)&rna_Sculpt_detail_percent, (PropertyRNA *)&rna_Sculpt_use_deform_only,
	-1, "detail_size", 1, 0, 0, 4, 0, "Detail Size",
	"Maximum edge length for dynamic topology sculpting (in pixels)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, detail_size), (RawPropertyType)5, nullptr},
	Sculpt_detail_size_get, Sculpt_detail_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_CUBIC, 0.5000000000f, 40.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, 12.0f, nullptr
};

FloatPropertyRNA rna_Sculpt_detail_percent = {
	{(PropertyRNA *)&rna_Sculpt_constant_detail_resolution, (PropertyRNA *)&rna_Sculpt_detail_size,
	-1, "detail_percent", 1, 0, 0, 4, 0, "Detail Percentage",
	"Maximum edge length for dynamic topology sculpting (in brush percenage)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_PERCENTAGE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, detail_percent), (RawPropertyType)5, nullptr},
	Sculpt_detail_percent_get, Sculpt_detail_percent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 25.0f, nullptr
};

FloatPropertyRNA rna_Sculpt_constant_detail_resolution = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_topology, (PropertyRNA *)&rna_Sculpt_detail_percent,
	-1, "constant_detail_resolution", 1, 0, 0, 4, 0, "Resolution",
	"Maximum edge length for dynamic topology sculpting (as divisor of Blender unit - higher value means smaller edge length)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, constant_detail), (RawPropertyType)5, nullptr},
	Sculpt_constant_detail_resolution_get, Sculpt_constant_detail_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1000.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 3.0f, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_topology = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_face_sets, (PropertyRNA *)&rna_Sculpt_constant_detail_resolution,
	-1, "use_automasking_topology", 1, 0, 0, 0, 0, "Topology",
	"Affect only vertices connected to the active vertex under the brush",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_topology_get, Sculpt_use_automasking_topology_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_face_sets = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_boundary_edges, (PropertyRNA *)&rna_Sculpt_use_automasking_topology,
	-1, "use_automasking_face_sets", 1, 0, 0, 0, 0, "Face Sets",
	"Affect only vertices that share Face Sets with the active vertex",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_face_sets_get, Sculpt_use_automasking_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_boundary_edges = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_boundary_face_sets, (PropertyRNA *)&rna_Sculpt_use_automasking_face_sets,
	-1, "use_automasking_boundary_edges", 1, 0, 0, 0, 0, "Mesh Boundary Auto-Masking",
	"Do not affect non manifold boundary edges",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_boundary_edges_get, Sculpt_use_automasking_boundary_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_boundary_face_sets = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_cavity, (PropertyRNA *)&rna_Sculpt_use_automasking_boundary_edges,
	-1, "use_automasking_boundary_face_sets", 1, 0, 0, 0, 0, "Face Sets Boundary Automasking",
	"Do not affect vertices that belong to a Face Set boundary",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_boundary_face_sets_get, Sculpt_use_automasking_boundary_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_cavity = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_cavity_inverted, (PropertyRNA *)&rna_Sculpt_use_automasking_boundary_face_sets,
	-1, "use_automasking_cavity", 1, 0, 0, 0, 0, "Cavity Mask",
	"Do not affect vertices on peaks, based on the surface curvature",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_cavity_get, Sculpt_use_automasking_cavity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_cavity_inverted = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_custom_cavity_curve, (PropertyRNA *)&rna_Sculpt_use_automasking_cavity,
	-1, "use_automasking_cavity_inverted", 1, 0, 0, 0, 0, "Inverted Cavity Mask",
	"Do not affect vertices within crevices, based on the surface curvature",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_cavity_inverted_get, Sculpt_use_automasking_cavity_inverted_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_custom_cavity_curve = {
	{(PropertyRNA *)&rna_Sculpt_automasking_cavity_factor, (PropertyRNA *)&rna_Sculpt_use_automasking_cavity_inverted,
	-1, "use_automasking_custom_cavity_curve", 1, 0, 0, 0, 0, "Custom Cavity Curve",
	"Use custom curve",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_custom_cavity_curve_get, Sculpt_use_automasking_custom_cavity_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Sculpt_automasking_cavity_factor = {
	{(PropertyRNA *)&rna_Sculpt_automasking_cavity_blur_steps, (PropertyRNA *)&rna_Sculpt_use_automasking_custom_cavity_curve,
	-1, "automasking_cavity_factor", 1, 0, 0, 4, 0, "Cavity Factor",
	"The contrast of the cavity mask",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, automasking_cavity_factor), (RawPropertyType)5, nullptr},
	Sculpt_automasking_cavity_factor_get, Sculpt_automasking_cavity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 5.0f, 0.1000000015f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_Sculpt_automasking_cavity_blur_steps = {
	{(PropertyRNA *)&rna_Sculpt_automasking_cavity_curve, (PropertyRNA *)&rna_Sculpt_automasking_cavity_factor,
	-1, "automasking_cavity_blur_steps", 1, 0, 0, 4, 0, "Blur Steps",
	"The number of times the cavity mask is blurred",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, automasking_cavity_blur_steps), (RawPropertyType)0, nullptr},
	Sculpt_automasking_cavity_blur_steps_get, Sculpt_automasking_cavity_blur_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 25, 1, 0, nullptr
};

PointerPropertyRNA rna_Sculpt_automasking_cavity_curve = {
	{(PropertyRNA *)&rna_Sculpt_automasking_cavity_curve_op, (PropertyRNA *)&rna_Sculpt_automasking_cavity_blur_steps,
	-1, "automasking_cavity_curve", 8388608, 0, 0, 0, 0, "Cavity Curve",
	"Curve used for the sensitivity",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_automasking_cavity_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_Sculpt_automasking_cavity_curve_op = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_start_normal, (PropertyRNA *)&rna_Sculpt_automasking_cavity_curve,
	-1, "automasking_cavity_curve_op", 8388608, 0, 0, 0, 0, "Cavity Curve",
	"Curve used for the sensitivity",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_automasking_cavity_curve_op_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

BoolPropertyRNA rna_Sculpt_use_automasking_start_normal = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_view_normal, (PropertyRNA *)&rna_Sculpt_automasking_cavity_curve_op,
	-1, "use_automasking_start_normal", 1, 0, 0, 0, 0, "Area Normal",
	"Affect only vertices with a similar normal to where the stroke starts",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_start_normal_get, Sculpt_use_automasking_start_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_view_normal = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_view_occlusion, (PropertyRNA *)&rna_Sculpt_use_automasking_start_normal,
	-1, "use_automasking_view_normal", 1, 0, 0, 0, 0, "View Normal",
	"Affect only vertices with a normal that faces the viewer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_view_normal_get, Sculpt_use_automasking_view_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Sculpt_use_automasking_view_occlusion = {
	{(PropertyRNA *)&rna_Sculpt_automasking_start_normal_limit, (PropertyRNA *)&rna_Sculpt_use_automasking_view_normal,
	-1, "use_automasking_view_occlusion", 1, 0, 0, 0, 0, "Occlusion",
	"Only affect vertices that are not occluded by other faces. (Slower performance)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_use_automasking_view_occlusion_get, Sculpt_use_automasking_view_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Sculpt_automasking_start_normal_limit = {
	{(PropertyRNA *)&rna_Sculpt_automasking_start_normal_falloff, (PropertyRNA *)&rna_Sculpt_use_automasking_view_occlusion,
	-1, "automasking_start_normal_limit", 1, 0, 0, 4, 0, "Area Normal Limit",
	"The range of angles that will be affected",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, automasking_start_normal_limit), (RawPropertyType)5, nullptr},
	Sculpt_automasking_start_normal_limit_get, Sculpt_automasking_start_normal_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 3.1415927410f, 0.0001000000f, 3.1415927410f, 10.0f, 3, 0.3490658402f, nullptr
};

FloatPropertyRNA rna_Sculpt_automasking_start_normal_falloff = {
	{(PropertyRNA *)&rna_Sculpt_automasking_view_normal_limit, (PropertyRNA *)&rna_Sculpt_automasking_start_normal_limit,
	-1, "automasking_start_normal_falloff", 1, 0, 0, 4, 0, "Area Normal Falloff",
	"Extend the angular range with a falloff gradient",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, automasking_start_normal_falloff), (RawPropertyType)5, nullptr},
	Sculpt_automasking_start_normal_falloff_get, Sculpt_automasking_start_normal_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, 0.2500000000f, nullptr
};

FloatPropertyRNA rna_Sculpt_automasking_view_normal_limit = {
	{(PropertyRNA *)&rna_Sculpt_automasking_view_normal_falloff, (PropertyRNA *)&rna_Sculpt_automasking_start_normal_falloff,
	-1, "automasking_view_normal_limit", 1, 0, 0, 4, 0, "View Normal Limit",
	"The range of angles that will be affected",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, automasking_view_normal_limit), (RawPropertyType)5, nullptr},
	Sculpt_automasking_view_normal_limit_get, Sculpt_automasking_view_normal_limit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 3.1415927410f, 0.0001000000f, 3.1415927410f, 10.0f, 3, 1.5707960129f, nullptr
};

FloatPropertyRNA rna_Sculpt_automasking_view_normal_falloff = {
	{(PropertyRNA *)&rna_Sculpt_symmetrize_direction, (PropertyRNA *)&rna_Sculpt_automasking_view_normal_limit,
	-1, "automasking_view_normal_falloff", 1, 0, 0, 4, 0, "View Normal Falloff",
	"Extend the angular range with a falloff gradient",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, automasking_view_normal_falloff), (RawPropertyType)5, nullptr},
	Sculpt_automasking_view_normal_falloff_get, Sculpt_automasking_view_normal_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, 0.2500000000f, nullptr
};

EnumPropertyRNA rna_Sculpt_symmetrize_direction = {
	{(PropertyRNA *)&rna_Sculpt_detail_refine_method, (PropertyRNA *)&rna_Sculpt_automasking_view_normal_falloff,
	-1, "symmetrize_direction", 1, 0, 0, 4, 0, "Direction",
	"Source and destination for symmetrize operator",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, symmetrize_direction), (RawPropertyType)0, nullptr},
	Sculpt_symmetrize_direction_get, Sculpt_symmetrize_direction_set, nullptr, nullptr, nullptr, rna_enum_symmetrize_direction_items, 6, 0
};

static const EnumPropertyItem rna_Sculpt_detail_refine_method_items[4] = {
	{4096, "SUBDIVIDE", 0, "Subdivide Edges", "Subdivide long edges to add mesh detail where needed"},
	{2048, "COLLAPSE", 0, "Collapse Edges", "Collapse short edges to remove mesh detail where possible"},
	{6144, "SUBDIVIDE_COLLAPSE", 0, "Subdivide Collapse", "Both subdivide long edges and collapse short edges to refine mesh detail"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Sculpt_detail_refine_method = {
	{(PropertyRNA *)&rna_Sculpt_detail_type_method, (PropertyRNA *)&rna_Sculpt_symmetrize_direction,
	-1, "detail_refine_method", 1, 0, 0, 4, 0, "Detail Refine Method",
	"In dynamic-topology mode, how to add or remove mesh detail",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, flags), (RawPropertyType)0, nullptr},
	Sculpt_detail_refine_method_get, Sculpt_detail_refine_method_set, nullptr, nullptr, nullptr, rna_Sculpt_detail_refine_method_items, 3, 4096
};

static const EnumPropertyItem rna_Sculpt_detail_type_method_items[5] = {
	{0, "RELATIVE", 0, "Relative Detail", "Mesh detail is relative to the brush size and detail size"},
	{8192, "CONSTANT", 0, "Constant Detail", "Mesh detail is constant in world space according to detail size"},
	{16384, "BRUSH", 0, "Brush Detail", "Mesh detail is relative to brush radius"},
	{65536, "MANUAL", 0, "Manual Detail", "Mesh detail does not change on each stroke, only when using Flood Fill"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Sculpt_detail_type_method = {
	{(PropertyRNA *)&rna_Sculpt_gravity, (PropertyRNA *)&rna_Sculpt_detail_refine_method,
	-1, "detail_type_method", 1, 0, 0, 4, 0, "Detail Type Method",
	"In dynamic-topology mode, how mesh detail size is calculated",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, flags), (RawPropertyType)0, nullptr},
	Sculpt_detail_type_method_get, Sculpt_detail_type_method_set, nullptr, nullptr, nullptr, rna_Sculpt_detail_type_method_items, 4, 0
};

FloatPropertyRNA rna_Sculpt_gravity = {
	{(PropertyRNA *)&rna_Sculpt_transform_mode, (PropertyRNA *)&rna_Sculpt_detail_type_method,
	-1, "gravity", 1, 0, 0, 4, 0, "Gravity",
	"Amount of gravity after each dab",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, gravity_factor), (RawPropertyType)5, nullptr},
	Sculpt_gravity_get, Sculpt_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_Sculpt_transform_mode_items[3] = {
	{0, "ALL_VERTICES", 0, "All Vertices", "Applies the transformation to all vertices in the mesh"},
	{1, "RADIUS_ELASTIC", 0, "Elastic", "Applies the transformation simulating elasticity using the radius of the cursor"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Sculpt_transform_mode = {
	{(PropertyRNA *)&rna_Sculpt_gravity_object, (PropertyRNA *)&rna_Sculpt_gravity,
	-1, "transform_mode", 1, 0, 0, 4, 0, "Transform Mode",
	"How the transformation is going to be applied to the target",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, transform_mode), (RawPropertyType)0, nullptr},
	Sculpt_transform_mode_get, Sculpt_transform_mode_set, nullptr, nullptr, nullptr, rna_Sculpt_transform_mode_items, 2, 0
};

PointerPropertyRNA rna_Sculpt_gravity_object = {
	{nullptr, (PropertyRNA *)&rna_Sculpt_transform_mode,
	-1, "gravity_object", 8388737, 0, 0, 0, 0, "Orientation",
	"Object whose Z axis defines orientation of gravity",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Sculpt_gravity_object_get, Sculpt_gravity_object_set, nullptr, nullptr,&RNA_Object
};

StructRNA RNA_Sculpt = {
	{(ContainerRNA *)&RNA_UvSculpt, (ContainerRNA *)&RNA_Paint,
	nullptr,
	{(PropertyRNA *)&rna_Sculpt_radial_symmetry, (PropertyRNA *)&rna_Sculpt_gravity_object}},
	"Sculpt", nullptr, nullptr, 516, nullptr, "Sculpt",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_Sculpt_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* UV Sculpting */
StructRNA RNA_UvSculpt = {
	{(ContainerRNA *)&RNA_GpPaint, (ContainerRNA *)&RNA_Sculpt,
	nullptr,
	{nullptr, nullptr}},
	"UvSculpt", nullptr, nullptr, 516, nullptr, "UV Sculpting",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_UvSculpt_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Paint */
static const EnumPropertyItem rna_GpPaint_color_mode_items[3] = {
	{0, "MATERIAL", 0, "Material", "Paint using the active material base color"},
	{1, "VERTEXCOLOR", 0, "Color Attribute", "Paint the material with a color attribute"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GpPaint_color_mode = {
	{nullptr, nullptr,
	-1, "color_mode", 1, 0, 0, 4, 0, "Mode",
	"Paint Mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GpPaint, mode), (RawPropertyType)0, nullptr},
	GpPaint_color_mode_get, GpPaint_color_mode_set, nullptr, nullptr, nullptr, rna_GpPaint_color_mode_items, 2, 0
};

StructRNA RNA_GpPaint = {
	{(ContainerRNA *)&RNA_GpVertexPaint, (ContainerRNA *)&RNA_UvSculpt,
	nullptr,
	{(PropertyRNA *)&rna_GpPaint_color_mode, (PropertyRNA *)&rna_GpPaint_color_mode}},
	"GpPaint", nullptr, nullptr, 516, nullptr, "Grease Pencil Paint",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_GpPaint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Vertex Paint */
StructRNA RNA_GpVertexPaint = {
	{(ContainerRNA *)&RNA_GpSculptPaint, (ContainerRNA *)&RNA_GpPaint,
	nullptr,
	{nullptr, nullptr}},
	"GpVertexPaint", nullptr, nullptr, 516, nullptr, "Grease Pencil Vertex Paint",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_GpVertexPaint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Sculpt Paint */
StructRNA RNA_GpSculptPaint = {
	{(ContainerRNA *)&RNA_GpWeightPaint, (ContainerRNA *)&RNA_GpVertexPaint,
	nullptr,
	{nullptr, nullptr}},
	"GpSculptPaint", nullptr, nullptr, 516, nullptr, "Grease Pencil Sculpt Paint",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_GpSculptPaint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Grease Pencil Weight Paint */
StructRNA RNA_GpWeightPaint = {
	{(ContainerRNA *)&RNA_VertexPaint, (ContainerRNA *)&RNA_GpSculptPaint,
	nullptr,
	{nullptr, nullptr}},
	"GpWeightPaint", nullptr, nullptr, 516, nullptr, "Grease Pencil Weight Paint",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_GpWeightPaint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Vertex Paint */
BoolPropertyRNA rna_VertexPaint_use_group_restrict = {
	{(PropertyRNA *)&rna_VertexPaint_radial_symmetry, nullptr,
	-1, "use_group_restrict", 1, 0, 0, 0, 0, "Restrict",
	"Restrict painting to vertices in the group",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexPaint_use_group_restrict_get, VertexPaint_use_group_restrict_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static int rna_VertexPaint_radial_symmetry_default[3] = {
	1,
	1,
	1
};

IntPropertyRNA rna_VertexPaint_radial_symmetry = {
	{nullptr, (PropertyRNA *)&rna_VertexPaint_use_group_restrict,
	-1, "radial_symmetry", 1, 0, 0, 4, 0, "Radial Symmetry Count X Axis",
	"Number of times to copy strokes across the surface",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VPaint, radial_symm), (RawPropertyType)0, nullptr},
	nullptr, nullptr, VertexPaint_radial_symmetry_get, VertexPaint_radial_symmetry_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 32, 1, 64, 1, 1, rna_VertexPaint_radial_symmetry_default
};

StructRNA RNA_VertexPaint = {
	{(ContainerRNA *)&RNA_PaintModeSettings, (ContainerRNA *)&RNA_GpWeightPaint,
	nullptr,
	{(PropertyRNA *)&rna_VertexPaint_use_group_restrict, (PropertyRNA *)&rna_VertexPaint_radial_symmetry}},
	"VertexPaint", nullptr, nullptr, 516, nullptr, "Vertex Paint",
	"Properties of vertex and weight paint mode",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_VertexPaint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Paint Mode */
CollectionPropertyRNA rna_PaintModeSettings_rna_properties = {
	{(PropertyRNA *)&rna_PaintModeSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaintModeSettings_rna_properties_begin, PaintModeSettings_rna_properties_next, PaintModeSettings_rna_properties_end, PaintModeSettings_rna_properties_get, nullptr, nullptr, PaintModeSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PaintModeSettings_rna_type = {
	{(PropertyRNA *)&rna_PaintModeSettings_canvas_source, (PropertyRNA *)&rna_PaintModeSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaintModeSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_PaintModeSettings_canvas_source_items[4] = {
	{2, "COLOR_ATTRIBUTE", 0, "Color Attribute", ""},
	{0, "MATERIAL", 0, "Material", ""},
	{1, "IMAGE", 0, "Image", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_PaintModeSettings_canvas_source = {
	{(PropertyRNA *)&rna_PaintModeSettings_canvas_image, (PropertyRNA *)&rna_PaintModeSettings_rna_type,
	-1, "canvas_source", 4194305, 0, 0, 4, 0, "Source",
	"Source to select canvas from",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_PaintModeSettings_canvas_source_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaintModeSettings, canvas_source), (RawPropertyType)2, nullptr},
	PaintModeSettings_canvas_source_get, PaintModeSettings_canvas_source_set, nullptr, nullptr, nullptr, rna_PaintModeSettings_canvas_source_items, 3, 0
};

PointerPropertyRNA rna_PaintModeSettings_canvas_image = {
	{nullptr, (PropertyRNA *)&rna_PaintModeSettings_canvas_source,
	-1, "canvas_image", 12583105, 0, 0, 0, 0, "Texture",
	"Image used as painting target",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PaintModeSettings_canvas_image_get, PaintModeSettings_canvas_image_set, nullptr, rna_PaintModeSettings_canvas_image_poll,&RNA_Image
};

StructRNA RNA_PaintModeSettings = {
	{(ContainerRNA *)&RNA_ImagePaint, (ContainerRNA *)&RNA_VertexPaint,
	nullptr,
	{(PropertyRNA *)&rna_PaintModeSettings_rna_properties, (PropertyRNA *)&rna_PaintModeSettings_canvas_image}},
	"PaintModeSettings", nullptr, nullptr, 516, nullptr, "Paint Mode",
	"Properties of paint mode",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PaintModeSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_PaintModeSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Image Paint */
BoolPropertyRNA rna_ImagePaint_use_occlude = {
	{(PropertyRNA *)&rna_ImagePaint_use_backface_culling, nullptr,
	-1, "use_occlude", 1, 0, 0, 0, 0, "Occlude",
	"Only paint onto the faces directly under the brush (slower)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_use_occlude_get, ImagePaint_use_occlude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_use_backface_culling = {
	{(PropertyRNA *)&rna_ImagePaint_use_normal_falloff, (PropertyRNA *)&rna_ImagePaint_use_occlude,
	-1, "use_backface_culling", 1, 0, 0, 0, 0, "Cull",
	"Ignore faces pointing away from the view (faster)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_use_backface_culling_get, ImagePaint_use_backface_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_use_normal_falloff = {
	{(PropertyRNA *)&rna_ImagePaint_use_stencil_layer, (PropertyRNA *)&rna_ImagePaint_use_backface_culling,
	-1, "use_normal_falloff", 1, 0, 0, 0, 0, "Normal",
	"Paint most on faces pointing towards the view",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_use_normal_falloff_get, ImagePaint_use_normal_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_use_stencil_layer = {
	{(PropertyRNA *)&rna_ImagePaint_invert_stencil, (PropertyRNA *)&rna_ImagePaint_use_normal_falloff,
	-1, "use_stencil_layer", 1, 0, 0, 0, 0, "Stencil Layer",
	"Set the mask layer from the UV map buttons",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_use_stencil_layer_get, ImagePaint_use_stencil_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_invert_stencil = {
	{(PropertyRNA *)&rna_ImagePaint_stencil_image, (PropertyRNA *)&rna_ImagePaint_use_stencil_layer,
	-1, "invert_stencil", 1, 0, 0, 0, 0, "Invert",
	"Invert the stencil layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_invert_stencil_get, ImagePaint_invert_stencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ImagePaint_stencil_image = {
	{(PropertyRNA *)&rna_ImagePaint_canvas, (PropertyRNA *)&rna_ImagePaint_invert_stencil,
	-1, "stencil_image", 12583105, 0, 0, 0, 0, "Stencil Image",
	"Image used as stencil",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ImaPaint_stencil_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_stencil_image_get, ImagePaint_stencil_image_set, nullptr, rna_ImaPaint_imagetype_poll,&RNA_Image
};

PointerPropertyRNA rna_ImagePaint_canvas = {
	{(PropertyRNA *)&rna_ImagePaint_clone_image, (PropertyRNA *)&rna_ImagePaint_stencil_image,
	-1, "canvas", 12583105, 0, 0, 0, 0, "Canvas",
	"Image used as canvas",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ImaPaint_canvas_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_canvas_get, ImagePaint_canvas_set, nullptr, rna_ImaPaint_imagetype_poll,&RNA_Image
};

PointerPropertyRNA rna_ImagePaint_clone_image = {
	{(PropertyRNA *)&rna_ImagePaint_stencil_color, (PropertyRNA *)&rna_ImagePaint_canvas,
	-1, "clone_image", 8388801, 0, 0, 0, 0, "Clone Image",
	"Image used as clone source",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_clone_image_get, ImagePaint_clone_image_set, nullptr, rna_ImaPaint_imagetype_poll,&RNA_Image
};

static float rna_ImagePaint_stencil_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ImagePaint_stencil_color = {
	{(PropertyRNA *)&rna_ImagePaint_dither, (PropertyRNA *)&rna_ImagePaint_clone_image,
	-1, "stencil_color", 1, 0, 0, 4, 0, "Stencil Color",
	"Stencil color in the viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, stencil_col), (RawPropertyType)5, nullptr},
	nullptr, nullptr, ImagePaint_stencil_color_get, ImagePaint_stencil_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ImagePaint_stencil_color_default
};

FloatPropertyRNA rna_ImagePaint_dither = {
	{(PropertyRNA *)&rna_ImagePaint_use_clone_layer, (PropertyRNA *)&rna_ImagePaint_stencil_color,
	-1, "dither", 1, 0, 0, 4, 0, "Dither",
	"Amount of dithering when painting on byte images",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, dither), (RawPropertyType)5, nullptr},
	ImagePaint_dither_get, ImagePaint_dither_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_ImagePaint_use_clone_layer = {
	{(PropertyRNA *)&rna_ImagePaint_seam_bleed, (PropertyRNA *)&rna_ImagePaint_dither,
	-1, "use_clone_layer", 1, 0, 0, 0, 0, "Clone Map",
	"Use another UV map as clone source, otherwise use the 3D cursor as the source",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_use_clone_layer_get, ImagePaint_use_clone_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_ImagePaint_seam_bleed = {
	{(PropertyRNA *)&rna_ImagePaint_normal_angle, (PropertyRNA *)&rna_ImagePaint_use_clone_layer,
	-1, "seam_bleed", 1, 0, 0, 4, 0, "Bleed",
	"Extend paint beyond the faces UVs to reduce seams (in pixels, slower)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, seam_bleed), (RawPropertyType)1, nullptr},
	ImagePaint_seam_bleed_get, ImagePaint_seam_bleed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 8, -32768, 32767, 1, 2, nullptr
};

IntPropertyRNA rna_ImagePaint_normal_angle = {
	{(PropertyRNA *)&rna_ImagePaint_screen_grab_size, (PropertyRNA *)&rna_ImagePaint_seam_bleed,
	-1, "normal_angle", 1, 0, 0, 4, 0, "Angle",
	"Paint most on faces pointing towards the view according to this angle",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, normal_angle), (RawPropertyType)1, nullptr},
	ImagePaint_normal_angle_get, ImagePaint_normal_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 90, 0, 90, 1, 80, nullptr
};

static int rna_ImagePaint_screen_grab_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePaint_screen_grab_size = {
	{(PropertyRNA *)&rna_ImagePaint_mode, (PropertyRNA *)&rna_ImagePaint_normal_angle,
	-1, "screen_grab_size", 1, 0, 0, 4, 0, "Screen Grab Size",
	"Size to capture the image for re-projecting",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, screen_grab_size), (RawPropertyType)1, nullptr},
	nullptr, nullptr, ImagePaint_screen_grab_size_get, ImagePaint_screen_grab_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 512, 16384, 512, 16384, 1, 0, rna_ImagePaint_screen_grab_size_default
};

static const EnumPropertyItem rna_ImagePaint_mode_items[3] = {
	{0, "MATERIAL", 0, "Material", "Detect image slots from the material"},
	{1, "IMAGE", 0, "Single Image", "Set image for texture painting directly"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ImagePaint_mode = {
	{(PropertyRNA *)&rna_ImagePaint_interpolation, (PropertyRNA *)&rna_ImagePaint_screen_grab_size,
	-1, "mode", 4194305, 0, 0, 4, 0, "Mode",
	"Mode of operation for projection painting",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ImaPaint_mode_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, mode), (RawPropertyType)0, nullptr},
	ImagePaint_mode_get, ImagePaint_mode_set, nullptr, nullptr, nullptr, rna_ImagePaint_mode_items, 2, 0
};

static const EnumPropertyItem rna_ImagePaint_interpolation_items[3] = {
	{0, "LINEAR", 0, "Linear", "Linear interpolation"},
	{1, "CLOSEST", 0, "Closest", "No interpolation (sample closest texel)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ImagePaint_interpolation = {
	{(PropertyRNA *)&rna_ImagePaint_missing_uvs, (PropertyRNA *)&rna_ImagePaint_mode,
	-1, "interpolation", 4194305, 0, 0, 4, 0, "Interpolation",
	"Texture filtering type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ImaPaint_mode_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, interp), (RawPropertyType)0, nullptr},
	ImagePaint_interpolation_get, ImagePaint_interpolation_set, nullptr, nullptr, nullptr, rna_ImagePaint_interpolation_items, 2, 0
};

BoolPropertyRNA rna_ImagePaint_missing_uvs = {
	{(PropertyRNA *)&rna_ImagePaint_missing_materials, (PropertyRNA *)&rna_ImagePaint_interpolation,
	-1, "missing_uvs", 0, 0, 0, 0, 0, "Missing UVs",
	"A UV layer is missing on the mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_missing_uvs_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_missing_materials = {
	{(PropertyRNA *)&rna_ImagePaint_missing_stencil, (PropertyRNA *)&rna_ImagePaint_missing_uvs,
	-1, "missing_materials", 0, 0, 0, 0, 0, "Missing Materials",
	"The mesh is missing materials",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_missing_materials_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_missing_stencil = {
	{(PropertyRNA *)&rna_ImagePaint_missing_texture, (PropertyRNA *)&rna_ImagePaint_missing_materials,
	-1, "missing_stencil", 0, 0, 0, 0, 0, "Missing Stencil",
	"Image Painting does not have a stencil",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_missing_stencil_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_missing_texture = {
	{nullptr, (PropertyRNA *)&rna_ImagePaint_missing_stencil,
	-1, "missing_texture", 0, 0, 0, 0, 0, "Missing Texture",
	"Image Painting does not have a texture to paint on",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePaint_missing_texture_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ImagePaint_detect_data_ok = {
	{nullptr, nullptr,
	-1, "ok", 1, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_ImagePaint_detect_data_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ImagePaint_detect_data_ok, (PropertyRNA *)&rna_ImagePaint_detect_data_ok}},
	"detect_data", 0, "Check if required texpaint data exist",
	ImagePaint_detect_data_call,
	(PropertyRNA *)&rna_ImagePaint_detect_data_ok
};

StructRNA RNA_ImagePaint = {
	{(ContainerRNA *)&RNA_ParticleEdit, (ContainerRNA *)&RNA_PaintModeSettings,
	nullptr,
	{(PropertyRNA *)&rna_ImagePaint_use_occlude, (PropertyRNA *)&rna_ImagePaint_missing_texture}},
	"ImagePaint", nullptr, nullptr, 516, nullptr, "Image Paint",
	"Properties of image and texture painting mode",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_ImagePaintSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ImagePaint_detect_data_func, (FunctionRNA *)&rna_ImagePaint_detect_data_func}
};

/* Particle Edit */
CollectionPropertyRNA rna_ParticleEdit_rna_properties = {
	{(PropertyRNA *)&rna_ParticleEdit_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_rna_properties_begin, ParticleEdit_rna_properties_next, ParticleEdit_rna_properties_end, ParticleEdit_rna_properties_get, nullptr, nullptr, ParticleEdit_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ParticleEdit_rna_type = {
	{(PropertyRNA *)&rna_ParticleEdit_tool, (PropertyRNA *)&rna_ParticleEdit_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_ParticleEdit_tool_items[8] = {
	{0, "COMB", 0, "Comb", "Comb hairs"},
	{5, "SMOOTH", 0, "Smooth", "Smooth hairs"},
	{4, "ADD", 0, "Add", "Add hairs"},
	{2, "LENGTH", 0, "Length", "Make hairs longer or shorter"},
	{3, "PUFF", 0, "Puff", "Make hairs stand up"},
	{1, "CUT", 0, "Cut", "Cut hairs"},
	{6, "WEIGHT", 0, "Weight", "Weight hair particles"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ParticleEdit_tool = {
	{(PropertyRNA *)&rna_ParticleEdit_select_mode, (PropertyRNA *)&rna_ParticleEdit_rna_type,
	-1, "tool", 1, 0, 0, 0, 0, "Tool",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_tool_get, ParticleEdit_tool_set, rna_ParticleEdit_tool_itemf, nullptr, nullptr, rna_ParticleEdit_tool_items, 7, 0
};

static const EnumPropertyItem rna_ParticleEdit_select_mode_items[4] = {
	{1, "PATH", 571, "Path", "Path edit mode"},
	{2, "POINT", 569, "Point", "Point select mode"},
	{4, "TIP", 570, "Tip", "Tip select mode"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ParticleEdit_select_mode = {
	{(PropertyRNA *)&rna_ParticleEdit_use_preserve_length, (PropertyRNA *)&rna_ParticleEdit_tool,
	-1, "select_mode", 4194305, 0, 0, 4, 0, "Selection Mode",
	"Particle select and display mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, selectmode), (RawPropertyType)0, nullptr},
	ParticleEdit_select_mode_get, ParticleEdit_select_mode_set, nullptr, nullptr, nullptr, rna_ParticleEdit_select_mode_items, 3, 1
};

BoolPropertyRNA rna_ParticleEdit_use_preserve_length = {
	{(PropertyRNA *)&rna_ParticleEdit_use_preserve_root, (PropertyRNA *)&rna_ParticleEdit_select_mode,
	-1, "use_preserve_length", 1, 0, 0, 0, 0, "Keep Lengths",
	"Keep path lengths constant",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_use_preserve_length_get, ParticleEdit_use_preserve_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_ParticleEdit_use_preserve_root = {
	{(PropertyRNA *)&rna_ParticleEdit_use_emitter_deflect, (PropertyRNA *)&rna_ParticleEdit_use_preserve_length,
	-1, "use_preserve_root", 1, 0, 0, 0, 0, "Keep Root",
	"Keep root keys unmodified",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_use_preserve_root_get, ParticleEdit_use_preserve_root_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect = {
	{(PropertyRNA *)&rna_ParticleEdit_emitter_distance, (PropertyRNA *)&rna_ParticleEdit_use_preserve_root,
	-1, "use_emitter_deflect", 1, 0, 0, 0, 0, "Deflect Emitter",
	"Keep paths from intersecting the emitter",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_use_emitter_deflect_get, ParticleEdit_use_emitter_deflect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_ParticleEdit_emitter_distance = {
	{(PropertyRNA *)&rna_ParticleEdit_use_fade_time, (PropertyRNA *)&rna_ParticleEdit_use_emitter_deflect,
	-1, "emitter_distance", 1, 0, 0, 4, 0, "Emitter Distance",
	"Distance to keep particles away from the emitter",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, emitterdist), (RawPropertyType)5, nullptr},
	ParticleEdit_emitter_distance_get, ParticleEdit_emitter_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.2500000000f, nullptr
};

BoolPropertyRNA rna_ParticleEdit_use_fade_time = {
	{(PropertyRNA *)&rna_ParticleEdit_use_auto_velocity, (PropertyRNA *)&rna_ParticleEdit_emitter_distance,
	-1, "use_fade_time", 4194305, 0, 0, 0, 0, "Fade Time",
	"Fade paths and keys further away from current frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_use_fade_time_get, ParticleEdit_use_fade_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ParticleEdit_use_auto_velocity = {
	{(PropertyRNA *)&rna_ParticleEdit_show_particles, (PropertyRNA *)&rna_ParticleEdit_use_fade_time,
	-1, "use_auto_velocity", 1, 0, 0, 0, 0, "Auto Velocity",
	"Calculate point velocities automatically",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_use_auto_velocity_get, ParticleEdit_use_auto_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_ParticleEdit_show_particles = {
	{(PropertyRNA *)&rna_ParticleEdit_use_default_interpolate, (PropertyRNA *)&rna_ParticleEdit_use_auto_velocity,
	-1, "show_particles", 4194305, 0, 0, 0, 0, "Display Particles",
	"Display actual particles",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_show_particles_get, ParticleEdit_show_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ParticleEdit_use_default_interpolate = {
	{(PropertyRNA *)&rna_ParticleEdit_default_key_count, (PropertyRNA *)&rna_ParticleEdit_show_particles,
	-1, "use_default_interpolate", 1, 0, 0, 0, 0, "Interpolate",
	"Interpolate new particles from the existing ones",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_use_default_interpolate_get, ParticleEdit_use_default_interpolate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_ParticleEdit_default_key_count = {
	{(PropertyRNA *)&rna_ParticleEdit_brush, (PropertyRNA *)&rna_ParticleEdit_use_default_interpolate,
	-1, "default_key_count", 1, 0, 0, 4, 0, "Keys",
	"How many keys to make new particles with",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, totaddkey), (RawPropertyType)1, nullptr},
	ParticleEdit_default_key_count_get, ParticleEdit_default_key_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 2, 20, 2, 32767, 10, 5, nullptr
};

PointerPropertyRNA rna_ParticleEdit_brush = {
	{(PropertyRNA *)&rna_ParticleEdit_display_step, (PropertyRNA *)&rna_ParticleEdit_default_key_count,
	-1, "brush", 8388608, 0, 0, 0, 0, "Brush",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {7, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_brush_get, nullptr, nullptr, nullptr,&RNA_ParticleBrush
};

IntPropertyRNA rna_ParticleEdit_display_step = {
	{(PropertyRNA *)&rna_ParticleEdit_fade_frames, (PropertyRNA *)&rna_ParticleEdit_brush,
	-1, "display_step", 4194305, 0, 0, 4, 0, "Steps",
	"How many steps to display the path with",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, draw_step), (RawPropertyType)0, nullptr},
	ParticleEdit_display_step_get, ParticleEdit_display_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 10, 1, 2, nullptr
};

IntPropertyRNA rna_ParticleEdit_fade_frames = {
	{(PropertyRNA *)&rna_ParticleEdit_type, (PropertyRNA *)&rna_ParticleEdit_display_step,
	-1, "fade_frames", 4194305, 0, 0, 4, 0, "Frames",
	"How many frames to fade",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, fade_frames), (RawPropertyType)0, nullptr},
	ParticleEdit_fade_frames_get, ParticleEdit_fade_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, 2, nullptr
};

static const EnumPropertyItem rna_ParticleEdit_type_items[4] = {
	{0, "PARTICLES", 0, "Particles", ""},
	{1, "SOFT_BODY", 0, "Soft Body", ""},
	{2, "CLOTH", 0, "Cloth", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ParticleEdit_type = {
	{(PropertyRNA *)&rna_ParticleEdit_is_editable, (PropertyRNA *)&rna_ParticleEdit_fade_frames,
	-1, "type", 4194305, 0, 0, 4, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, edittype), (RawPropertyType)0, nullptr},
	ParticleEdit_type_get, ParticleEdit_type_set, nullptr, nullptr, nullptr, rna_ParticleEdit_type_items, 3, 0
};

BoolPropertyRNA rna_ParticleEdit_is_editable = {
	{(PropertyRNA *)&rna_ParticleEdit_is_hair, (PropertyRNA *)&rna_ParticleEdit_type,
	-1, "is_editable", 0, 0, 0, 0, 0, "Editable",
	"A valid edit mode exists",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ParticleEdit_is_hair = {
	{(PropertyRNA *)&rna_ParticleEdit_object, (PropertyRNA *)&rna_ParticleEdit_is_editable,
	-1, "is_hair", 0, 0, 0, 0, 0, "Hair",
	"Editing hair",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_is_hair_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ParticleEdit_object = {
	{(PropertyRNA *)&rna_ParticleEdit_shape_object, (PropertyRNA *)&rna_ParticleEdit_is_hair,
	-1, "object", 8388736, 0, 0, 0, 0, "Object",
	"The edited object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_object_get, nullptr, nullptr, nullptr,&RNA_Object
};

PointerPropertyRNA rna_ParticleEdit_shape_object = {
	{nullptr, (PropertyRNA *)&rna_ParticleEdit_object,
	-1, "shape_object", 12583041, 0, 0, 0, 0, "Shape Object",
	"Outer shape to use for tools",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ParticleEdit_redo, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleEdit_shape_object_get, ParticleEdit_shape_object_set, nullptr, rna_Mesh_object_poll,&RNA_Object
};

StructRNA RNA_ParticleEdit = {
	{(ContainerRNA *)&RNA_ParticleBrush, (ContainerRNA *)&RNA_ImagePaint,
	nullptr,
	{(PropertyRNA *)&rna_ParticleEdit_rna_properties, (PropertyRNA *)&rna_ParticleEdit_shape_object}},
	"ParticleEdit", nullptr, nullptr, 516, nullptr, "Particle Edit",
	"Properties of particle editing mode",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ParticleEdit_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ParticleEdit_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Particle Brush */
CollectionPropertyRNA rna_ParticleBrush_rna_properties = {
	{(PropertyRNA *)&rna_ParticleBrush_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleBrush_rna_properties_begin, ParticleBrush_rna_properties_next, ParticleBrush_rna_properties_end, ParticleBrush_rna_properties_get, nullptr, nullptr, ParticleBrush_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ParticleBrush_rna_type = {
	{(PropertyRNA *)&rna_ParticleBrush_size, (PropertyRNA *)&rna_ParticleBrush_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleBrush_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_ParticleBrush_size = {
	{(PropertyRNA *)&rna_ParticleBrush_strength, (PropertyRNA *)&rna_ParticleBrush_rna_type,
	-1, "size", 1, 0, 0, 4, 0, "Radius",
	"Radius of the brush in pixels",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, size), (RawPropertyType)1, nullptr},
	ParticleBrush_size_get, ParticleBrush_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 500, 1, 32767, 10, 50, nullptr
};

FloatPropertyRNA rna_ParticleBrush_strength = {
	{(PropertyRNA *)&rna_ParticleBrush_count, (PropertyRNA *)&rna_ParticleBrush_size,
	-1, "strength", 1, 0, 0, 4, 0, "Strength",
	"Brush strength",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, strength), (RawPropertyType)5, nullptr},
	ParticleBrush_strength_get, ParticleBrush_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.5000000000f, nullptr
};

IntPropertyRNA rna_ParticleBrush_count = {
	{(PropertyRNA *)&rna_ParticleBrush_steps, (PropertyRNA *)&rna_ParticleBrush_strength,
	-1, "count", 1, 0, 0, 4, 0, "Count",
	"Particle count",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, count), (RawPropertyType)1, nullptr},
	ParticleBrush_count_get, ParticleBrush_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, 1000, 10, 10, nullptr
};

IntPropertyRNA rna_ParticleBrush_steps = {
	{(PropertyRNA *)&rna_ParticleBrush_puff_mode, (PropertyRNA *)&rna_ParticleBrush_count,
	-1, "steps", 1, 0, 0, 4, 0, "Steps",
	"Brush steps",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, step), (RawPropertyType)1, nullptr},
	ParticleBrush_steps_get, ParticleBrush_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 50, 1, 32767, 10, 10, nullptr
};

static const EnumPropertyItem rna_ParticleBrush_puff_mode_items[3] = {
	{0, "ADD", 0, "Add", "Make hairs more puffy"},
	{1, "SUB", 0, "Sub", "Make hairs less puffy"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ParticleBrush_puff_mode = {
	{(PropertyRNA *)&rna_ParticleBrush_use_puff_volume, (PropertyRNA *)&rna_ParticleBrush_steps,
	-1, "puff_mode", 1, 0, 0, 4, 0, "Puff Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, invert), (RawPropertyType)1, nullptr},
	ParticleBrush_puff_mode_get, ParticleBrush_puff_mode_set, nullptr, nullptr, nullptr, rna_ParticleBrush_puff_mode_items, 2, 0
};

BoolPropertyRNA rna_ParticleBrush_use_puff_volume = {
	{(PropertyRNA *)&rna_ParticleBrush_length_mode, (PropertyRNA *)&rna_ParticleBrush_puff_mode,
	-1, "use_puff_volume", 1, 0, 0, 0, 0, "Puff Volume",
	"Apply puff to unselected end-points (helps maintain hair volume when puffing root)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleBrush_use_puff_volume_get, ParticleBrush_use_puff_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_ParticleBrush_length_mode_items[3] = {
	{0, "GROW", 0, "Grow", "Make hairs longer"},
	{1, "SHRINK", 0, "Shrink", "Make hairs shorter"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ParticleBrush_length_mode = {
	{(PropertyRNA *)&rna_ParticleBrush_curve, (PropertyRNA *)&rna_ParticleBrush_use_puff_volume,
	-1, "length_mode", 1, 0, 0, 4, 0, "Length Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, invert), (RawPropertyType)1, nullptr},
	ParticleBrush_length_mode_get, ParticleBrush_length_mode_set, nullptr, nullptr, nullptr, rna_ParticleBrush_length_mode_items, 2, 0
};

PointerPropertyRNA rna_ParticleBrush_curve = {
	{nullptr, (PropertyRNA *)&rna_ParticleBrush_length_mode,
	-1, "curve", 8388608, 0, 0, 0, 0, "Curve",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ParticleBrush_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

StructRNA RNA_ParticleBrush = {
	{(ContainerRNA *)&RNA_GPencilSculptGuide, (ContainerRNA *)&RNA_ParticleEdit,
	nullptr,
	{(PropertyRNA *)&rna_ParticleBrush_rna_properties, (PropertyRNA *)&rna_ParticleBrush_curve}},
	"ParticleBrush", nullptr, nullptr, 516, nullptr, "Particle Brush",
	"Particle editing brush",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ParticleBrush_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ParticleBrush_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* GPencil Sculpt Guide */
CollectionPropertyRNA rna_GPencilSculptGuide_rna_properties = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptGuide_rna_properties_begin, GPencilSculptGuide_rna_properties_next, GPencilSculptGuide_rna_properties_end, GPencilSculptGuide_rna_properties_get, nullptr, nullptr, GPencilSculptGuide_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilSculptGuide_rna_type = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_use_guide, (PropertyRNA *)&rna_GPencilSculptGuide_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptGuide_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_GPencilSculptGuide_use_guide = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_use_snapping, (PropertyRNA *)&rna_GPencilSculptGuide_rna_type,
	-1, "use_guide", 1, 0, 0, 4, 0, "Use Guides",
	"Enable speed guides",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, use_guide), (RawPropertyType)2, nullptr},
	GPencilSculptGuide_use_guide_get, GPencilSculptGuide_use_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptGuide_use_snapping = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_reference_object, (PropertyRNA *)&rna_GPencilSculptGuide_use_guide,
	-1, "use_snapping", 1, 0, 0, 4, 0, "Use Snapping",
	"Enable snapping to guides angle or spacing options",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, use_snapping), (RawPropertyType)2, nullptr},
	GPencilSculptGuide_use_snapping_get, GPencilSculptGuide_use_snapping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_GPencilSculptGuide_reference_object = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_reference_point, (PropertyRNA *)&rna_GPencilSculptGuide_use_snapping,
	-1, "reference_object", 9437313, 0, 0, 0, 0, "Object",
	"Object used for reference point",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptGuide_reference_object_get, GPencilSculptGuide_reference_object_set, nullptr, nullptr,&RNA_Object
};

static const EnumPropertyItem rna_GPencilSculptGuide_reference_point_items[4] = {
	{0, "CURSOR", 0, "Cursor", "Use cursor as reference point"},
	{1, "CUSTOM", 0, "Custom", "Use custom reference point"},
	{2, "OBJECT", 0, "Object", "Use object as reference point"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilSculptGuide_reference_point = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_type, (PropertyRNA *)&rna_GPencilSculptGuide_reference_object,
	-1, "reference_point", 1, 0, 0, 4, 0, "Type",
	"Type of speed guide",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, reference_point), (RawPropertyType)2, nullptr},
	GPencilSculptGuide_reference_point_get, GPencilSculptGuide_reference_point_set, nullptr, nullptr, nullptr, rna_GPencilSculptGuide_reference_point_items, 3, 0
};

static const EnumPropertyItem rna_GPencilSculptGuide_type_items[6] = {
	{0, "CIRCULAR", 0, "Circular", "Use single point to create rings"},
	{1, "RADIAL", 0, "Radial", "Use single point as direction"},
	{2, "PARALLEL", 0, "Parallel", "Parallel lines"},
	{3, "GRID", 0, "Grid", "Grid allows horizontal and vertical lines"},
	{4, "ISO", 0, "Isometric", "Grid allows isometric and vertical lines"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilSculptGuide_type = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_angle, (PropertyRNA *)&rna_GPencilSculptGuide_reference_point,
	-1, "type", 1, 0, 0, 4, 0, "Type",
	"Type of speed guide",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, type), (RawPropertyType)2, nullptr},
	GPencilSculptGuide_type_get, GPencilSculptGuide_type_set, nullptr, nullptr, nullptr, rna_GPencilSculptGuide_type_items, 5, 0
};

FloatPropertyRNA rna_GPencilSculptGuide_angle = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_angle_snap, (PropertyRNA *)&rna_GPencilSculptGuide_type,
	-1, "angle", 1, 0, 0, 4, 0, "Angle",
	"Direction of lines",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, angle), (RawPropertyType)5, nullptr},
	GPencilSculptGuide_angle_get, GPencilSculptGuide_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilSculptGuide_angle_snap = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_spacing, (PropertyRNA *)&rna_GPencilSculptGuide_angle,
	-1, "angle_snap", 1, 0, 0, 4, 0, "Angle Snap",
	"Angle snapping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, angle_snap), (RawPropertyType)5, nullptr},
	GPencilSculptGuide_angle_snap_get, GPencilSculptGuide_angle_snap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_GPencilSculptGuide_spacing = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_location, (PropertyRNA *)&rna_GPencilSculptGuide_angle_snap,
	-1, "spacing", 1, 0, 0, 4, 0, "Spacing",
	"Guide spacing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, spacing), (RawPropertyType)5, nullptr},
	GPencilSculptGuide_spacing_get, GPencilSculptGuide_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 20.0f, nullptr
};

static float rna_GPencilSculptGuide_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilSculptGuide_location = {
	{nullptr, (PropertyRNA *)&rna_GPencilSculptGuide_spacing,
	-1, "location", 1, 0, 0, 4, 0, "Location",
	"Custom reference point for guides",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_ImaPaint_viewport_update, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, location), (RawPropertyType)5, nullptr},
	nullptr, nullptr, GPencilSculptGuide_location_get, GPencilSculptGuide_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_GPencilSculptGuide_location_default
};

StructRNA RNA_GPencilSculptGuide = {
	{(ContainerRNA *)&RNA_GPencilSculptSettings, (ContainerRNA *)&RNA_ParticleBrush,
	nullptr,
	{(PropertyRNA *)&rna_GPencilSculptGuide_rna_properties, (PropertyRNA *)&rna_GPencilSculptGuide_location}},
	"GPencilSculptGuide", nullptr, nullptr, 516, nullptr, "GPencil Sculpt Guide",
	"Guides for drawing",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilSculptGuide_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GPencilSculptGuide_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* GPencil Sculpt Settings */
CollectionPropertyRNA rna_GPencilSculptSettings_rna_properties = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_rna_properties_begin, GPencilSculptSettings_rna_properties_next, GPencilSculptSettings_rna_properties_end, GPencilSculptSettings_rna_properties_get, nullptr, nullptr, GPencilSculptSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_GPencilSculptSettings_rna_type = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_guide, (PropertyRNA *)&rna_GPencilSculptSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_GPencilSculptSettings_guide = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_multiframe_falloff, (PropertyRNA *)&rna_GPencilSculptSettings_rna_type,
	-1, "guide", 8388608, 0, 0, 0, 0, "Guide",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_guide_get, nullptr, nullptr, nullptr,&RNA_GPencilSculptGuide
};

BoolPropertyRNA rna_GPencilSculptSettings_use_multiframe_falloff = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_thickness_curve, (PropertyRNA *)&rna_GPencilSculptSettings_guide,
	-1, "use_multiframe_falloff", 1, 0, 0, 0, 0, "Use Falloff",
	"Use falloff effect when edit in multiframe mode to compute brush effect by frame",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_multiframe_falloff_get, GPencilSculptSettings_use_multiframe_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_thickness_curve = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_scale_thickness, (PropertyRNA *)&rna_GPencilSculptSettings_use_multiframe_falloff,
	-1, "use_thickness_curve", 1, 0, 0, 0, 0, "Use Curve",
	"Use curve to define primitive stroke thickness",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_thickness_curve_get, GPencilSculptSettings_use_thickness_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_scale_thickness = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_stroke, (PropertyRNA *)&rna_GPencilSculptSettings_use_thickness_curve,
	-1, "use_scale_thickness", 1, 0, 0, 0, 0, "Scale Stroke Thickness",
	"Scale the stroke thickness when transforming strokes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_scale_thickness_get, GPencilSculptSettings_use_scale_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_stroke = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_layer_stroke, (PropertyRNA *)&rna_GPencilSculptSettings_use_scale_thickness,
	-1, "use_automasking_stroke", 1, 0, 0, 0, 0, "Auto-Masking Strokes",
	"Affect only strokes below the cursor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_automasking_stroke_get, GPencilSculptSettings_use_automasking_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_layer_stroke = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_material_stroke, (PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_stroke,
	-1, "use_automasking_layer_stroke", 1, 0, 0, 0, 0, "Auto-Masking Layer",
	"Affect only strokes below the cursor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_automasking_layer_stroke_get, GPencilSculptSettings_use_automasking_layer_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_material_stroke = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_layer_active, (PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_layer_stroke,
	-1, "use_automasking_material_stroke", 1, 0, 0, 0, 0, "Auto-Masking Material",
	"Affect only strokes below the cursor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_automasking_material_stroke_get, GPencilSculptSettings_use_automasking_material_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_layer_active = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_material_active, (PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_material_stroke,
	-1, "use_automasking_layer_active", 1, 0, 0, 0, 0, "Auto-Masking Layer",
	"Affect only the Active Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_automasking_layer_active_get, GPencilSculptSettings_use_automasking_layer_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_GPencilSculptSettings_use_automasking_material_active = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_multiframe_falloff_curve, (PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_layer_active,
	-1, "use_automasking_material_active", 1, 0, 0, 0, 0, "Auto-Masking Material",
	"Affect only the Active Material",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_use_automasking_material_active_get, GPencilSculptSettings_use_automasking_material_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_GPencilSculptSettings_multiframe_falloff_curve = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_thickness_primitive_curve, (PropertyRNA *)&rna_GPencilSculptSettings_use_automasking_material_active,
	-1, "multiframe_falloff_curve", 8388608, 0, 0, 0, 0, "Curve",
	"Custom curve to control falloff of brush effect by Grease Pencil frames",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_multiframe_falloff_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

PointerPropertyRNA rna_GPencilSculptSettings_thickness_primitive_curve = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_lock_axis, (PropertyRNA *)&rna_GPencilSculptSettings_multiframe_falloff_curve,
	-1, "thickness_primitive_curve", 8388608, 0, 0, 0, 0, "Curve",
	"Custom curve to control primitive thickness",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84869120, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	GPencilSculptSettings_thickness_primitive_curve_get, nullptr, nullptr, nullptr,&RNA_CurveMapping
};

static const EnumPropertyItem rna_GPencilSculptSettings_lock_axis_items[6] = {
	{0, "VIEW", 283, "View", "Align strokes to current view plane"},
	{2, "AXIS_Y", 637, "Front (X-Z)", "Project strokes to plane locked to Y"},
	{1, "AXIS_X", 636, "Side (Y-Z)", "Project strokes to plane locked to X"},
	{3, "AXIS_Z", 638, "Top (X-Y)", "Project strokes to plane locked to Z"},
	{4, "CURSOR", 552, "Cursor", "Align strokes to current 3D cursor orientation"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_GPencilSculptSettings_lock_axis = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_intersection_threshold, (PropertyRNA *)&rna_GPencilSculptSettings_thickness_primitive_curve,
	-1, "lock_axis", 1, 0, 0, 4, 0, "Lock Axis",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Settings, lock_axis), (RawPropertyType)0, nullptr},
	GPencilSculptSettings_lock_axis_get, GPencilSculptSettings_lock_axis_set, nullptr, nullptr, nullptr, rna_GPencilSculptSettings_lock_axis_items, 5, 0
};

FloatPropertyRNA rna_GPencilSculptSettings_intersection_threshold = {
	{nullptr, (PropertyRNA *)&rna_GPencilSculptSettings_lock_axis,
	-1, "intersection_threshold", 1, 0, 0, 4, 0, "Threshold",
	"Threshold for stroke intersections",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Settings, isect_threshold), (RawPropertyType)5, nullptr},
	GPencilSculptSettings_intersection_threshold_get, GPencilSculptSettings_intersection_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.1000000015f, nullptr
};

StructRNA RNA_GPencilSculptSettings = {
	{(ContainerRNA *)&RNA_CurvesSculpt, (ContainerRNA *)&RNA_GPencilSculptGuide,
	nullptr,
	{(PropertyRNA *)&rna_GPencilSculptSettings_rna_properties, (PropertyRNA *)&rna_GPencilSculptSettings_intersection_threshold}},
	"GPencilSculptSettings", nullptr, nullptr, 516, nullptr, "GPencil Sculpt Settings",
	"General properties for Grease Pencil stroke sculpting tools",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_GPencilSculptSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_GPencilSculptSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Curves Sculpt Paint */
StructRNA RNA_CurvesSculpt = {
	{(ContainerRNA *)&RNA_SequenceColorBalanceData, (ContainerRNA *)&RNA_GPencilSculptSettings,
	nullptr,
	{nullptr, nullptr}},
	"CurvesSculpt", nullptr, nullptr, 516, nullptr, "Curves Sculpt Paint",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	nullptr,
	nullptr,
	rna_CurvesSculpt_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

