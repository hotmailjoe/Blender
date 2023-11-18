
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

#include "rna_light.cc"

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

RNA_EXTERN_C EnumPropertyRNA rna_Light_type;
RNA_EXTERN_C FloatPropertyRNA rna_Light_color;
RNA_EXTERN_C FloatPropertyRNA rna_Light_specular_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Light_diffuse_factor;
RNA_EXTERN_C FloatPropertyRNA rna_Light_volume_factor;
RNA_EXTERN_C BoolPropertyRNA rna_Light_use_custom_distance;
RNA_EXTERN_C FloatPropertyRNA rna_Light_cutoff_distance;
RNA_EXTERN_C PointerPropertyRNA rna_Light_node_tree;
RNA_EXTERN_C BoolPropertyRNA rna_Light_use_nodes;
RNA_EXTERN_C PointerPropertyRNA rna_Light_animation_data;

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



RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Light_type;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_color;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_specular_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_diffuse_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_volume_factor;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_custom_distance;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_cutoff_distance;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_node_tree;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_nodes;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_animation_data;

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

RNA_EXTERN_C FloatPropertyRNA rna_PointLight_energy;
RNA_EXTERN_C BoolPropertyRNA rna_PointLight_use_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_shadow_buffer_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_shadow_buffer_bias;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_shadow_color;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_shadow_soft_size;
RNA_EXTERN_C BoolPropertyRNA rna_PointLight_use_contact_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_contact_shadow_distance;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_contact_shadow_bias;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_contact_shadow_thickness;
RNA_EXTERN_C FloatPropertyRNA rna_PointLight_shadow_softness_factor;

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



RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Light_type;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_color;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_specular_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_diffuse_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_volume_factor;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_custom_distance;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_cutoff_distance;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_node_tree;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_nodes;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_animation_data;

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

RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_energy;
RNA_EXTERN_C BoolPropertyRNA rna_AreaLight_use_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_shadow_buffer_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_shadow_buffer_bias;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_shadow_color;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_shadow_soft_size;
RNA_EXTERN_C BoolPropertyRNA rna_AreaLight_use_contact_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_contact_shadow_distance;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_contact_shadow_bias;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_contact_shadow_thickness;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_shadow_softness_factor;
RNA_EXTERN_C EnumPropertyRNA rna_AreaLight_shape;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_size;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_size_y;
RNA_EXTERN_C FloatPropertyRNA rna_AreaLight_spread;

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



RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Light_type;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_color;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_specular_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_diffuse_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_volume_factor;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_custom_distance;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_cutoff_distance;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_node_tree;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_nodes;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_animation_data;

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

RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_energy;
RNA_EXTERN_C BoolPropertyRNA rna_SpotLight_use_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_shadow_buffer_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_shadow_buffer_bias;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_shadow_color;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_shadow_soft_size;
RNA_EXTERN_C BoolPropertyRNA rna_SpotLight_use_contact_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_contact_shadow_distance;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_contact_shadow_bias;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_contact_shadow_thickness;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_shadow_softness_factor;
RNA_EXTERN_C BoolPropertyRNA rna_SpotLight_use_square;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_spot_blend;
RNA_EXTERN_C FloatPropertyRNA rna_SpotLight_spot_size;
RNA_EXTERN_C BoolPropertyRNA rna_SpotLight_show_cone;

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



RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_Light_type;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_color;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_specular_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_diffuse_factor;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_volume_factor;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_custom_distance;
RNA_EXTERN_C_OR_EXTERN FloatPropertyRNA rna_Light_cutoff_distance;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_node_tree;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_Light_use_nodes;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_Light_animation_data;

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

RNA_EXTERN_C FloatPropertyRNA rna_SunLight_angle;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_energy;
RNA_EXTERN_C BoolPropertyRNA rna_SunLight_use_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_buffer_clip_start;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_buffer_bias;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_color;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_soft_size;
RNA_EXTERN_C BoolPropertyRNA rna_SunLight_use_contact_shadow;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_contact_shadow_distance;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_contact_shadow_bias;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_contact_shadow_thickness;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_softness_factor;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_cascade_max_distance;
RNA_EXTERN_C IntPropertyRNA rna_SunLight_shadow_cascade_count;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_cascade_exponent;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_cascade_fade;
RNA_EXTERN_C FloatPropertyRNA rna_SunLight_shadow_trace_distance;

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


RNA_EXTERN_C int Light_type_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void Light_type_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C void Light_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

RNA_EXTERN_C void Light_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float Light_specular_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spec_fac);
}

RNA_EXTERN_C void Light_specular_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->spec_fac = (std::remove_reference_t<decltype(data->spec_fac)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->spec_fac = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Light_diffuse_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->diff_fac);
}

RNA_EXTERN_C void Light_diffuse_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->diff_fac = (std::remove_reference_t<decltype(data->diff_fac)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->diff_fac = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Light_volume_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->volume_fac);
}

RNA_EXTERN_C void Light_volume_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->volume_fac = (std::remove_reference_t<decltype(data->volume_fac)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->volume_fac = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool Light_use_custom_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1048576) != 0);
}

RNA_EXTERN_C void Light_use_custom_distance_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1048576; }
    else { data->mode &= ~1048576; }
}

RNA_EXTERN_C float Light_cutoff_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att_dist);
}

RNA_EXTERN_C void Light_cutoff_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->att_dist = (std::remove_reference_t<decltype(data->att_dist)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->att_dist = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C PointerRNA Light_node_tree_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

RNA_EXTERN_C bool Light_use_nodes_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->use_nodes) & 1) != 0);
}

RNA_EXTERN_C void Light_use_nodes_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->use_nodes |= 1; }
    else { data->use_nodes &= ~1; }
}

RNA_EXTERN_C PointerRNA Light_animation_data_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C float PointLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

RNA_EXTERN_C void PointLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
#else
    data->energy = value;
#endif
}

RNA_EXTERN_C bool PointLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

RNA_EXTERN_C void PointLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

RNA_EXTERN_C float PointLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

RNA_EXTERN_C void PointLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float PointLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

RNA_EXTERN_C void PointLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->bias = (std::remove_reference_t<decltype(data->bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void PointLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

RNA_EXTERN_C void PointLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float PointLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

RNA_EXTERN_C void PointLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool PointLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

RNA_EXTERN_C void PointLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

RNA_EXTERN_C float PointLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

RNA_EXTERN_C void PointLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_dist = (std::remove_reference_t<decltype(data->contact_dist)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float PointLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

RNA_EXTERN_C void PointLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_bias = (std::remove_reference_t<decltype(data->contact_bias)>)CLAMPIS(value, 0.0010000000f, 9999.0f);
#else
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
#endif
}

RNA_EXTERN_C float PointLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

RNA_EXTERN_C void PointLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_thickness = (std::remove_reference_t<decltype(data->contact_thickness)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float PointLight_shadow_softness_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_softness_factor);
}

RNA_EXTERN_C void PointLight_shadow_softness_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->shadow_softness_factor = (std::remove_reference_t<decltype(data->shadow_softness_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->shadow_softness_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float AreaLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

RNA_EXTERN_C void AreaLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
#else
    data->energy = value;
#endif
}

RNA_EXTERN_C bool AreaLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

RNA_EXTERN_C void AreaLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

RNA_EXTERN_C float AreaLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

RNA_EXTERN_C void AreaLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float AreaLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

RNA_EXTERN_C void AreaLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->bias = (std::remove_reference_t<decltype(data->bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void AreaLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

RNA_EXTERN_C void AreaLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float AreaLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

RNA_EXTERN_C void AreaLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool AreaLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

RNA_EXTERN_C void AreaLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

RNA_EXTERN_C float AreaLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

RNA_EXTERN_C void AreaLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_dist = (std::remove_reference_t<decltype(data->contact_dist)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float AreaLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

RNA_EXTERN_C void AreaLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_bias = (std::remove_reference_t<decltype(data->contact_bias)>)CLAMPIS(value, 0.0010000000f, 9999.0f);
#else
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
#endif
}

RNA_EXTERN_C float AreaLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

RNA_EXTERN_C void AreaLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_thickness = (std::remove_reference_t<decltype(data->contact_thickness)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float AreaLight_shadow_softness_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_softness_factor);
}

RNA_EXTERN_C void AreaLight_shadow_softness_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->shadow_softness_factor = (std::remove_reference_t<decltype(data->shadow_softness_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->shadow_softness_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int AreaLight_shape_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->area_shape);
}

RNA_EXTERN_C void AreaLight_shape_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->area_shape = (std::remove_reference_t<decltype(data->area_shape)>)value;
#else
    data->area_shape = value;
#endif
}

RNA_EXTERN_C float AreaLight_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

RNA_EXTERN_C void AreaLight_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->area_size = (std::remove_reference_t<decltype(data->area_size)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float AreaLight_size_y_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_sizey);
}

RNA_EXTERN_C void AreaLight_size_y_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->area_sizey = (std::remove_reference_t<decltype(data->area_sizey)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->area_sizey = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float AreaLight_spread_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_spread);
}

RNA_EXTERN_C void AreaLight_spread_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->area_spread = (std::remove_reference_t<decltype(data->area_spread)>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->area_spread = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float SpotLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

RNA_EXTERN_C void SpotLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
#else
    data->energy = value;
#endif
}

RNA_EXTERN_C bool SpotLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

RNA_EXTERN_C void SpotLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

RNA_EXTERN_C float SpotLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

RNA_EXTERN_C void SpotLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float SpotLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

RNA_EXTERN_C void SpotLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->bias = (std::remove_reference_t<decltype(data->bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void SpotLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

RNA_EXTERN_C void SpotLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float SpotLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

RNA_EXTERN_C void SpotLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool SpotLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

RNA_EXTERN_C void SpotLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

RNA_EXTERN_C float SpotLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

RNA_EXTERN_C void SpotLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_dist = (std::remove_reference_t<decltype(data->contact_dist)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float SpotLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

RNA_EXTERN_C void SpotLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_bias = (std::remove_reference_t<decltype(data->contact_bias)>)CLAMPIS(value, 0.0010000000f, 9999.0f);
#else
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
#endif
}

RNA_EXTERN_C float SpotLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

RNA_EXTERN_C void SpotLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_thickness = (std::remove_reference_t<decltype(data->contact_thickness)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float SpotLight_shadow_softness_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_softness_factor);
}

RNA_EXTERN_C void SpotLight_shadow_softness_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->shadow_softness_factor = (std::remove_reference_t<decltype(data->shadow_softness_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->shadow_softness_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool SpotLight_use_square_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 128) != 0);
}

RNA_EXTERN_C void SpotLight_use_square_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 128; }
    else { data->mode &= ~128; }
}

RNA_EXTERN_C float SpotLight_spot_blend_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spotblend);
}

RNA_EXTERN_C void SpotLight_spot_blend_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->spotblend = (std::remove_reference_t<decltype(data->spotblend)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->spotblend = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SpotLight_spot_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spotsize);
}

RNA_EXTERN_C void SpotLight_spot_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->spotsize = (std::remove_reference_t<decltype(data->spotsize)>)CLAMPIS(value, 0.0174532924f, 3.1415927410f);
#else
    data->spotsize = CLAMPIS(value, 0.0174532924f, 3.1415927410f);
#endif
}

RNA_EXTERN_C bool SpotLight_show_cone_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 131072) != 0);
}

RNA_EXTERN_C void SpotLight_show_cone_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 131072; }
    else { data->mode &= ~131072; }
}

RNA_EXTERN_C float SunLight_angle_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->sun_angle);
}

RNA_EXTERN_C void SunLight_angle_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->sun_angle = (std::remove_reference_t<decltype(data->sun_angle)>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->sun_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float SunLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

RNA_EXTERN_C void SunLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->energy = (std::remove_reference_t<decltype(data->energy)>)value;
#else
    data->energy = value;
#endif
}

RNA_EXTERN_C bool SunLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

RNA_EXTERN_C void SunLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

RNA_EXTERN_C float SunLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

RNA_EXTERN_C void SunLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->clipsta = (std::remove_reference_t<decltype(data->clipsta)>)CLAMPIS(value, 0.0000010000f, FLT_MAX);
#else
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float SunLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

RNA_EXTERN_C void SunLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->bias = (std::remove_reference_t<decltype(data->bias)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void SunLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

RNA_EXTERN_C void SunLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float SunLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->radius);
}

RNA_EXTERN_C void SunLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->radius = (std::remove_reference_t<decltype(data->radius)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool SunLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

RNA_EXTERN_C void SunLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

RNA_EXTERN_C float SunLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

RNA_EXTERN_C void SunLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_dist = (std::remove_reference_t<decltype(data->contact_dist)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float SunLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

RNA_EXTERN_C void SunLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_bias = (std::remove_reference_t<decltype(data->contact_bias)>)CLAMPIS(value, 0.0010000000f, 9999.0f);
#else
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
#endif
}

RNA_EXTERN_C float SunLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

RNA_EXTERN_C void SunLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->contact_thickness = (std::remove_reference_t<decltype(data->contact_thickness)>)CLAMPIS(value, 0.0f, 9999.0f);
#else
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
#endif
}

RNA_EXTERN_C float SunLight_shadow_softness_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_softness_factor);
}

RNA_EXTERN_C void SunLight_shadow_softness_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->shadow_softness_factor = (std::remove_reference_t<decltype(data->shadow_softness_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->shadow_softness_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SunLight_shadow_cascade_max_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_max_dist);
}

RNA_EXTERN_C void SunLight_shadow_cascade_max_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->cascade_max_dist = (std::remove_reference_t<decltype(data->cascade_max_dist)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->cascade_max_dist = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C int SunLight_shadow_cascade_count_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->cascade_count);
}

RNA_EXTERN_C void SunLight_shadow_cascade_count_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->cascade_count = (std::remove_reference_t<decltype(data->cascade_count)>)CLAMPIS(value, 1, 4);
#else
    data->cascade_count = CLAMPIS(value, 1, 4);
#endif
}

RNA_EXTERN_C float SunLight_shadow_cascade_exponent_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_exponent);
}

RNA_EXTERN_C void SunLight_shadow_cascade_exponent_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->cascade_exponent = (std::remove_reference_t<decltype(data->cascade_exponent)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->cascade_exponent = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SunLight_shadow_cascade_fade_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_fade);
}

RNA_EXTERN_C void SunLight_shadow_cascade_fade_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->cascade_fade = (std::remove_reference_t<decltype(data->cascade_fade)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->cascade_fade = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SunLight_shadow_trace_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->shadow_trace_distance);
}

RNA_EXTERN_C void SunLight_shadow_trace_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
#ifdef __cplusplus
    data->shadow_trace_distance = (std::remove_reference_t<decltype(data->shadow_trace_distance)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->shadow_trace_distance = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}






/* Light */
EnumPropertyRNA rna_Light_type = {
	{(PropertyRNA *)&rna_Light_color, nullptr,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Type of light",
	0, "Light",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, type), (RawPropertyType)1, nullptr},
	Light_type_get, Light_type_set, nullptr, nullptr, nullptr, rna_enum_light_type_items, 4, 0
};

static float rna_Light_color_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Light_color = {
	{(PropertyRNA *)&rna_Light_specular_factor, (PropertyRNA *)&rna_Light_type,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Light color",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, r), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Light_color_get, Light_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, rna_Light_color_default
};

FloatPropertyRNA rna_Light_specular_factor = {
	{(PropertyRNA *)&rna_Light_diffuse_factor, (PropertyRNA *)&rna_Light_color,
	-1, "specular_factor", 3, 0, 0, 4, 0, "Specular Factor",
	"Specular reflection multiplier",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, spec_fac), (RawPropertyType)5, nullptr},
	Light_specular_factor_get, Light_specular_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, 1.0f, nullptr
};

FloatPropertyRNA rna_Light_diffuse_factor = {
	{(PropertyRNA *)&rna_Light_volume_factor, (PropertyRNA *)&rna_Light_specular_factor,
	-1, "diffuse_factor", 3, 0, 0, 4, 0, "Diffuse Factor",
	"Diffuse reflection multiplier",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, diff_fac), (RawPropertyType)5, nullptr},
	Light_diffuse_factor_get, Light_diffuse_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, 1.0f, nullptr
};

FloatPropertyRNA rna_Light_volume_factor = {
	{(PropertyRNA *)&rna_Light_use_custom_distance, (PropertyRNA *)&rna_Light_diffuse_factor,
	-1, "volume_factor", 3, 0, 0, 4, 0, "Volume Factor",
	"Volume light multiplier",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, volume_fac), (RawPropertyType)5, nullptr},
	Light_volume_factor_get, Light_volume_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, 1.0f, nullptr
};

BoolPropertyRNA rna_Light_use_custom_distance = {
	{(PropertyRNA *)&rna_Light_cutoff_distance, (PropertyRNA *)&rna_Light_volume_factor,
	-1, "use_custom_distance", 3, 0, 0, 0, 0, "Custom Attenuation",
	"Use custom attenuation distance instead of global light threshold",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Light_use_custom_distance_get, Light_use_custom_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Light_cutoff_distance = {
	{(PropertyRNA *)&rna_Light_node_tree, (PropertyRNA *)&rna_Light_use_custom_distance,
	-1, "cutoff_distance", 3, 0, 0, 4, 0, "Cutoff Distance",
	"Distance at which the light influence will be set to 0",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att_dist), (RawPropertyType)5, nullptr},
	Light_cutoff_distance_get, Light_cutoff_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 1.0f, 2, 40.0f, nullptr
};

PointerPropertyRNA rna_Light_node_tree = {
	{(PropertyRNA *)&rna_Light_use_nodes, (PropertyRNA *)&rna_Light_cutoff_distance,
	-1, "node_tree", 8388672, 1, 0, 32, 0, "Node Tree",
	"Node tree for node based lights",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Light_node_tree_get, nullptr, nullptr, nullptr,&RNA_NodeTree
};

BoolPropertyRNA rna_Light_use_nodes = {
	{(PropertyRNA *)&rna_Light_animation_data, (PropertyRNA *)&rna_Light_node_tree,
	-1, "use_nodes", 4194305, 0, 0, 0, 0, "Use Nodes",
	"Use shader nodes to render the light",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Light_use_nodes_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Light_use_nodes_get, Light_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Light_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Light_use_nodes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Light_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

StructRNA RNA_Light = {
	{(ContainerRNA *)&RNA_PointLight, (ContainerRNA *)&RNA_ShapeKeyBezierPoint,
	nullptr,
	{(PropertyRNA *)&rna_Light_type, (PropertyRNA *)&rna_Light_animation_data}},
	"Light", nullptr, nullptr, 519, nullptr, "Light",
	"Light data-block for lighting a scene",
	"Light", 164,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_Light_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

/* Point Light */
FloatPropertyRNA rna_PointLight_energy = {
	{(PropertyRNA *)&rna_PointLight_use_shadow, nullptr,
	-1, "energy", 3, 0, 0, 4, 0, "Power",
	"Light energy emitted over the entire area of the light in all directions",
	0, "Light",
	PROP_FLOAT, (PropertySubType)((int)PROP_POWER | (int)PROP_UNIT_POWER), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), (RawPropertyType)5, nullptr},
	PointLight_energy_get, PointLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 10.0f, nullptr
};

BoolPropertyRNA rna_PointLight_use_shadow = {
	{(PropertyRNA *)&rna_PointLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_PointLight_energy,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointLight_use_shadow_get, PointLight_use_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_PointLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_PointLight_shadow_buffer_bias, (PropertyRNA *)&rna_PointLight_use_shadow,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), (RawPropertyType)5, nullptr},
	PointLight_shadow_buffer_clip_start_get, PointLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, nullptr
};

FloatPropertyRNA rna_PointLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_PointLight_shadow_color, (PropertyRNA *)&rna_PointLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), (RawPropertyType)5, nullptr},
	PointLight_shadow_buffer_bias_get, PointLight_shadow_buffer_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

static float rna_PointLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PointLight_shadow_color = {
	{(PropertyRNA *)&rna_PointLight_shadow_soft_size, (PropertyRNA *)&rna_PointLight_shadow_buffer_bias,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PointLight_shadow_color_get, PointLight_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_PointLight_shadow_color_default
};

FloatPropertyRNA rna_PointLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_PointLight_use_contact_shadow, (PropertyRNA *)&rna_PointLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, radius), (RawPropertyType)5, nullptr},
	PointLight_shadow_soft_size_get, PointLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_PointLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_PointLight_contact_shadow_distance, (PropertyRNA *)&rna_PointLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointLight_use_contact_shadow_get, PointLight_use_contact_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_PointLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_PointLight_contact_shadow_bias, (PropertyRNA *)&rna_PointLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), (RawPropertyType)5, nullptr},
	PointLight_contact_shadow_distance_get, PointLight_contact_shadow_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_PointLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_PointLight_contact_shadow_thickness, (PropertyRNA *)&rna_PointLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), (RawPropertyType)5, nullptr},
	PointLight_contact_shadow_bias_get, PointLight_contact_shadow_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, nullptr
};

FloatPropertyRNA rna_PointLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_PointLight_shadow_softness_factor, (PropertyRNA *)&rna_PointLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), (RawPropertyType)5, nullptr},
	PointLight_contact_shadow_thickness_get, PointLight_contact_shadow_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_PointLight_shadow_softness_factor = {
	{nullptr, (PropertyRNA *)&rna_PointLight_contact_shadow_thickness,
	-1, "shadow_softness_factor", 3, 0, 0, 4, 0, "Shadow Softness Factor",
	"Scale light shape for smaller penumbra",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shadow_softness_factor), (RawPropertyType)5, nullptr},
	PointLight_shadow_softness_factor_get, PointLight_shadow_softness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

StructRNA RNA_PointLight = {
	{(ContainerRNA *)&RNA_AreaLight, (ContainerRNA *)&RNA_Light,
	nullptr,
	{(PropertyRNA *)&rna_PointLight_energy, (PropertyRNA *)&rna_PointLight_shadow_softness_factor}},
	"PointLight", nullptr, nullptr, 519, nullptr, "Point Light",
	"Omnidirectional point Light",
	"*", 298,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	nullptr,
	rna_Light_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

/* Area Light */
FloatPropertyRNA rna_AreaLight_energy = {
	{(PropertyRNA *)&rna_AreaLight_use_shadow, nullptr,
	-1, "energy", 3, 0, 0, 4, 0, "Power",
	"Light energy emitted over the entire area of the light in all directions",
	0, "Light",
	PROP_FLOAT, (PropertySubType)((int)PROP_POWER | (int)PROP_UNIT_POWER), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), (RawPropertyType)5, nullptr},
	AreaLight_energy_get, AreaLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 10.0f, nullptr
};

BoolPropertyRNA rna_AreaLight_use_shadow = {
	{(PropertyRNA *)&rna_AreaLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_AreaLight_energy,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AreaLight_use_shadow_get, AreaLight_use_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_AreaLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_AreaLight_shadow_buffer_bias, (PropertyRNA *)&rna_AreaLight_use_shadow,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), (RawPropertyType)5, nullptr},
	AreaLight_shadow_buffer_clip_start_get, AreaLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, nullptr
};

FloatPropertyRNA rna_AreaLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_AreaLight_shadow_color, (PropertyRNA *)&rna_AreaLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), (RawPropertyType)5, nullptr},
	AreaLight_shadow_buffer_bias_get, AreaLight_shadow_buffer_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

static float rna_AreaLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_AreaLight_shadow_color = {
	{(PropertyRNA *)&rna_AreaLight_shadow_soft_size, (PropertyRNA *)&rna_AreaLight_shadow_buffer_bias,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), (RawPropertyType)5, nullptr},
	nullptr, nullptr, AreaLight_shadow_color_get, AreaLight_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_AreaLight_shadow_color_default
};

FloatPropertyRNA rna_AreaLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_AreaLight_use_contact_shadow, (PropertyRNA *)&rna_AreaLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, radius), (RawPropertyType)5, nullptr},
	AreaLight_shadow_soft_size_get, AreaLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_AreaLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_AreaLight_contact_shadow_distance, (PropertyRNA *)&rna_AreaLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AreaLight_use_contact_shadow_get, AreaLight_use_contact_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_AreaLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_AreaLight_contact_shadow_bias, (PropertyRNA *)&rna_AreaLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), (RawPropertyType)5, nullptr},
	AreaLight_contact_shadow_distance_get, AreaLight_contact_shadow_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_AreaLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_AreaLight_contact_shadow_thickness, (PropertyRNA *)&rna_AreaLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), (RawPropertyType)5, nullptr},
	AreaLight_contact_shadow_bias_get, AreaLight_contact_shadow_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, nullptr
};

FloatPropertyRNA rna_AreaLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_AreaLight_shadow_softness_factor, (PropertyRNA *)&rna_AreaLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), (RawPropertyType)5, nullptr},
	AreaLight_contact_shadow_thickness_get, AreaLight_contact_shadow_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_AreaLight_shadow_softness_factor = {
	{(PropertyRNA *)&rna_AreaLight_shape, (PropertyRNA *)&rna_AreaLight_contact_shadow_thickness,
	-1, "shadow_softness_factor", 3, 0, 0, 4, 0, "Shadow Softness Factor",
	"Scale light shape for smaller penumbra",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shadow_softness_factor), (RawPropertyType)5, nullptr},
	AreaLight_shadow_softness_factor_get, AreaLight_shadow_softness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

static const EnumPropertyItem rna_AreaLight_shape_items[5] = {
	{0, "SQUARE", 0, "Square", ""},
	{1, "RECTANGLE", 0, "Rectangle", ""},
	{4, "DISK", 0, "Disk", ""},
	{5, "ELLIPSE", 0, "Ellipse", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_AreaLight_shape = {
	{(PropertyRNA *)&rna_AreaLight_size, (PropertyRNA *)&rna_AreaLight_shadow_softness_factor,
	-1, "shape", 3, 0, 0, 4, 0, "Shape",
	"Shape of the area Light",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_shape), (RawPropertyType)1, nullptr},
	AreaLight_shape_get, AreaLight_shape_set, nullptr, nullptr, nullptr, rna_AreaLight_shape_items, 4, 0
};

FloatPropertyRNA rna_AreaLight_size = {
	{(PropertyRNA *)&rna_AreaLight_size_y, (PropertyRNA *)&rna_AreaLight_shape,
	-1, "size", 3, 0, 0, 4, 0, "Size",
	"Size of the area of the area light, X direction size for rectangle shapes",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_size), (RawPropertyType)5, nullptr},
	AreaLight_size_get, AreaLight_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, nullptr
};

FloatPropertyRNA rna_AreaLight_size_y = {
	{(PropertyRNA *)&rna_AreaLight_spread, (PropertyRNA *)&rna_AreaLight_size,
	-1, "size_y", 3, 0, 0, 4, 0, "Size Y",
	"Size of the area of the area light in the Y direction for rectangle shapes",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_sizey), (RawPropertyType)5, nullptr},
	AreaLight_size_y_get, AreaLight_size_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, nullptr
};

FloatPropertyRNA rna_AreaLight_spread = {
	{nullptr, (PropertyRNA *)&rna_AreaLight_size_y,
	-1, "spread", 3, 0, 0, 4, 0, "Spread",
	"How widely the emitted light fans out, as in the case of a gridded softbox",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_spread), (RawPropertyType)5, nullptr},
	AreaLight_spread_get, AreaLight_spread_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 3.1415927410f, nullptr
};

StructRNA RNA_AreaLight = {
	{(ContainerRNA *)&RNA_SpotLight, (ContainerRNA *)&RNA_PointLight,
	nullptr,
	{(PropertyRNA *)&rna_AreaLight_energy, (PropertyRNA *)&rna_AreaLight_spread}},
	"AreaLight", nullptr, nullptr, 519, nullptr, "Area Light",
	"Directional area Light",
	"*", 302,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	nullptr,
	rna_Light_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

/* Spot Light */
FloatPropertyRNA rna_SpotLight_energy = {
	{(PropertyRNA *)&rna_SpotLight_use_shadow, nullptr,
	-1, "energy", 3, 0, 0, 4, 0, "Power",
	"The energy this light would emit over its entire area if it wasn\'t limited by the spot angle",
	0, "Light",
	PROP_FLOAT, (PropertySubType)((int)PROP_POWER | (int)PROP_UNIT_POWER), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), (RawPropertyType)5, nullptr},
	SpotLight_energy_get, SpotLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 10.0f, nullptr
};

BoolPropertyRNA rna_SpotLight_use_shadow = {
	{(PropertyRNA *)&rna_SpotLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_SpotLight_energy,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SpotLight_use_shadow_get, SpotLight_use_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_SpotLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_SpotLight_shadow_buffer_bias, (PropertyRNA *)&rna_SpotLight_use_shadow,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), (RawPropertyType)5, nullptr},
	SpotLight_shadow_buffer_clip_start_get, SpotLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, nullptr
};

FloatPropertyRNA rna_SpotLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_SpotLight_shadow_color, (PropertyRNA *)&rna_SpotLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), (RawPropertyType)5, nullptr},
	SpotLight_shadow_buffer_bias_get, SpotLight_shadow_buffer_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

static float rna_SpotLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpotLight_shadow_color = {
	{(PropertyRNA *)&rna_SpotLight_shadow_soft_size, (PropertyRNA *)&rna_SpotLight_shadow_buffer_bias,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), (RawPropertyType)5, nullptr},
	nullptr, nullptr, SpotLight_shadow_color_get, SpotLight_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SpotLight_shadow_color_default
};

FloatPropertyRNA rna_SpotLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_SpotLight_use_contact_shadow, (PropertyRNA *)&rna_SpotLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, radius), (RawPropertyType)5, nullptr},
	SpotLight_shadow_soft_size_get, SpotLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_SpotLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_SpotLight_contact_shadow_distance, (PropertyRNA *)&rna_SpotLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SpotLight_use_contact_shadow_get, SpotLight_use_contact_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_SpotLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_SpotLight_contact_shadow_bias, (PropertyRNA *)&rna_SpotLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), (RawPropertyType)5, nullptr},
	SpotLight_contact_shadow_distance_get, SpotLight_contact_shadow_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_SpotLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_SpotLight_contact_shadow_thickness, (PropertyRNA *)&rna_SpotLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), (RawPropertyType)5, nullptr},
	SpotLight_contact_shadow_bias_get, SpotLight_contact_shadow_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, nullptr
};

FloatPropertyRNA rna_SpotLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_SpotLight_shadow_softness_factor, (PropertyRNA *)&rna_SpotLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), (RawPropertyType)5, nullptr},
	SpotLight_contact_shadow_thickness_get, SpotLight_contact_shadow_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_SpotLight_shadow_softness_factor = {
	{(PropertyRNA *)&rna_SpotLight_use_square, (PropertyRNA *)&rna_SpotLight_contact_shadow_thickness,
	-1, "shadow_softness_factor", 3, 0, 0, 4, 0, "Shadow Softness Factor",
	"Scale light shape for smaller penumbra",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shadow_softness_factor), (RawPropertyType)5, nullptr},
	SpotLight_shadow_softness_factor_get, SpotLight_shadow_softness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_SpotLight_use_square = {
	{(PropertyRNA *)&rna_SpotLight_spot_blend, (PropertyRNA *)&rna_SpotLight_shadow_softness_factor,
	-1, "use_square", 3, 0, 0, 0, 0, "Square",
	"Cast a square spot light shape",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SpotLight_use_square_get, SpotLight_use_square_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_SpotLight_spot_blend = {
	{(PropertyRNA *)&rna_SpotLight_spot_size, (PropertyRNA *)&rna_SpotLight_use_square,
	-1, "spot_blend", 3, 0, 0, 4, 0, "Spot Blend",
	"The softness of the spotlight edge",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, spotblend), (RawPropertyType)5, nullptr},
	SpotLight_spot_blend_get, SpotLight_spot_blend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1500000060f, nullptr
};

FloatPropertyRNA rna_SpotLight_spot_size = {
	{(PropertyRNA *)&rna_SpotLight_show_cone, (PropertyRNA *)&rna_SpotLight_spot_blend,
	-1, "spot_size", 3, 0, 0, 4, 0, "Spot Size",
	"Angle of the spotlight beam",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, spotsize), (RawPropertyType)5, nullptr},
	SpotLight_spot_size_get, SpotLight_spot_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0174532924f, 3.1415927410f, 0.0174532924f, 3.1415927410f, 10.0f, 3, 0.7853981853f, nullptr
};

BoolPropertyRNA rna_SpotLight_show_cone = {
	{nullptr, (PropertyRNA *)&rna_SpotLight_spot_size,
	-1, "show_cone", 3, 0, 0, 0, 0, "Show Cone",
	"Display transparent cone in 3D view to visualize which objects are contained in it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SpotLight_show_cone_get, SpotLight_show_cone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_SpotLight = {
	{(ContainerRNA *)&RNA_SunLight, (ContainerRNA *)&RNA_AreaLight,
	nullptr,
	{(PropertyRNA *)&rna_SpotLight_energy, (PropertyRNA *)&rna_SpotLight_show_cone}},
	"SpotLight", nullptr, nullptr, 519, nullptr, "Spot Light",
	"Directional cone Light",
	"*", 300,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	nullptr,
	rna_Light_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

/* Sun Light */
FloatPropertyRNA rna_SunLight_angle = {
	{(PropertyRNA *)&rna_SunLight_energy, nullptr,
	-1, "angle", 3, 0, 0, 4, 0, "Angle",
	"Angular diameter of the Sun as seen from the Earth",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, sun_angle), (RawPropertyType)5, nullptr},
	SunLight_angle_get, SunLight_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0091804322f, nullptr
};

FloatPropertyRNA rna_SunLight_energy = {
	{(PropertyRNA *)&rna_SunLight_use_shadow, (PropertyRNA *)&rna_SunLight_angle,
	-1, "energy", 3, 0, 0, 4, 0, "Strength",
	"Sunlight strength in watts per meter squared (W/m²)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), (RawPropertyType)5, nullptr},
	SunLight_energy_get, SunLight_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

BoolPropertyRNA rna_SunLight_use_shadow = {
	{(PropertyRNA *)&rna_SunLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_SunLight_energy,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SunLight_use_shadow_get, SunLight_use_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_SunLight_shadow_buffer_bias, (PropertyRNA *)&rna_SunLight_use_shadow,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), (RawPropertyType)5, nullptr},
	SunLight_shadow_buffer_clip_start_get, SunLight_shadow_buffer_clip_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_SunLight_shadow_color, (PropertyRNA *)&rna_SunLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), (RawPropertyType)5, nullptr},
	SunLight_shadow_buffer_bias_get, SunLight_shadow_buffer_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

static float rna_SunLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SunLight_shadow_color = {
	{(PropertyRNA *)&rna_SunLight_shadow_soft_size, (PropertyRNA *)&rna_SunLight_shadow_buffer_bias,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), (RawPropertyType)5, nullptr},
	nullptr, nullptr, SunLight_shadow_color_get, SunLight_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SunLight_shadow_color_default
};

FloatPropertyRNA rna_SunLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_SunLight_use_contact_shadow, (PropertyRNA *)&rna_SunLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, radius), (RawPropertyType)5, nullptr},
	SunLight_shadow_soft_size_get, SunLight_shadow_soft_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_SunLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_SunLight_contact_shadow_distance, (PropertyRNA *)&rna_SunLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SunLight_use_contact_shadow_get, SunLight_use_contact_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_SunLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_SunLight_contact_shadow_bias, (PropertyRNA *)&rna_SunLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), (RawPropertyType)5, nullptr},
	SunLight_contact_shadow_distance_get, SunLight_contact_shadow_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_SunLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_SunLight_contact_shadow_thickness, (PropertyRNA *)&rna_SunLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), (RawPropertyType)5, nullptr},
	SunLight_contact_shadow_bias_get, SunLight_contact_shadow_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, nullptr
};

FloatPropertyRNA rna_SunLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_SunLight_shadow_softness_factor, (PropertyRNA *)&rna_SunLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), (RawPropertyType)5, nullptr},
	SunLight_contact_shadow_thickness_get, SunLight_contact_shadow_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_softness_factor = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_max_distance, (PropertyRNA *)&rna_SunLight_contact_shadow_thickness,
	-1, "shadow_softness_factor", 3, 0, 0, 4, 0, "Shadow Softness Factor",
	"Scale light shape for smaller penumbra",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shadow_softness_factor), (RawPropertyType)5, nullptr},
	SunLight_shadow_softness_factor_get, SunLight_shadow_softness_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_cascade_max_distance = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_count, (PropertyRNA *)&rna_SunLight_shadow_softness_factor,
	-1, "shadow_cascade_max_distance", 3, 0, 0, 4, 0, "Cascade Max Distance",
	"End distance of the cascaded shadow map (only in perspective view)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_max_dist), (RawPropertyType)5, nullptr},
	SunLight_shadow_cascade_max_distance_get, SunLight_shadow_cascade_max_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 200.0f, nullptr
};

IntPropertyRNA rna_SunLight_shadow_cascade_count = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_exponent, (PropertyRNA *)&rna_SunLight_shadow_cascade_max_distance,
	-1, "shadow_cascade_count", 3, 0, 0, 4, 0, "Cascade Count",
	"Number of texture used by the cascaded shadow map",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_count), (RawPropertyType)0, nullptr},
	SunLight_shadow_cascade_count_get, SunLight_shadow_cascade_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 4, 1, 4, 1, 4, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_cascade_exponent = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_fade, (PropertyRNA *)&rna_SunLight_shadow_cascade_count,
	-1, "shadow_cascade_exponent", 3, 0, 0, 4, 0, "Exponential Distribution",
	"Higher value increase resolution towards the viewpoint",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_exponent), (RawPropertyType)5, nullptr},
	SunLight_shadow_cascade_exponent_get, SunLight_shadow_cascade_exponent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.8000000119f, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_cascade_fade = {
	{(PropertyRNA *)&rna_SunLight_shadow_trace_distance, (PropertyRNA *)&rna_SunLight_shadow_cascade_exponent,
	-1, "shadow_cascade_fade", 3, 0, 0, 4, 0, "Cascade Fade",
	"How smooth is the transition between each cascade",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_fade), (RawPropertyType)5, nullptr},
	SunLight_shadow_cascade_fade_get, SunLight_shadow_cascade_fade_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_SunLight_shadow_trace_distance = {
	{nullptr, (PropertyRNA *)&rna_SunLight_shadow_cascade_fade,
	-1, "shadow_trace_distance", 3, 0, 0, 4, 0, "Shadow Tracing Max Distance",
	"Maximum distance a shadow map tracing ray can travel",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shadow_trace_distance), (RawPropertyType)5, nullptr},
	SunLight_shadow_trace_distance_get, SunLight_shadow_trace_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 10.0f, nullptr
};

StructRNA RNA_SunLight = {
	{(ContainerRNA *)&RNA_Lattice, (ContainerRNA *)&RNA_SpotLight,
	nullptr,
	{(PropertyRNA *)&rna_SunLight_angle, (PropertyRNA *)&rna_SunLight_shadow_trace_distance}},
	"SunLight", nullptr, nullptr, 519, nullptr, "Sun Light",
	"Constant direction parallel ray Light",
	"*", 299,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	nullptr,
	rna_Light_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{nullptr, nullptr}
};

