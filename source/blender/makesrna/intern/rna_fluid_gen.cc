
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

#include "rna_fluid.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_FluidDomainSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_effector_weights;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_effector_group;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_fluid_group;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_force_collection;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_density_grid;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_velocity_grid;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flame_grid;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_color_grid;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_heat_grid;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_temperature_grid;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_start_point;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_cell_size;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_domain_resolution;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_additional_res;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_adapt_margin;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_adapt_threshold;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_domain;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_resolution_max;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_front;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_back;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_right;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_left;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_top;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_bottom;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_gravity;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_domain_type;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_delete_in_obstacle;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_alpha;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_beta;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_dissolve_speed;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_vorticity;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_highres_sampling;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke_log;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_burning_rate;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flame_smoke;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flame_vorticity;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flame_ignition;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flame_max_temp;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flame_smoke_color;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_noise_strength;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_noise_pos_scale;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_noise_time_anim;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_noise_scale;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_noise;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_simulation_method;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_flip_ratio;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_particle_randomness;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_particle_number;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_particle_min;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_particle_max;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_particle_radius;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_particle_band_width;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_flip_particles;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_fractions;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_fractions_threshold;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_fractions_distance;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_sys_particle_maximum;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_viscosity;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_viscosity_value;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_diffusion;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_surface_tension;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_viscosity_base;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_viscosity_exponent;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_upper;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_lower;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_pos;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_neg;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_mesh_scale;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_mesh_generator;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_mesh;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_speed_vectors;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_mesh_particle_radius;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_wavecrest;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_wavecrest;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_trappedair;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_trappedair;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_energy;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_energy;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_wavecrest;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_trappedair;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_buoyancy;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_drag;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_min;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_max;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_sndparticle_boundary;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_sndparticle_combined_export;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_sndparticle_potential_radius;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_sndparticle_update_radius;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_particle_scale;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_spray_particles;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_bubble_particles;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_foam_particles;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_tracer_particles;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_guide_alpha;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_guide_beta;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_guide_vel_factor;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_guide_source;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_guide_parent;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_guide;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_end;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_offset;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_data;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_noise;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_mesh;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_particles;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_guide;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_cache_mesh_format;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_cache_data_format;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_cache_particle_format;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_cache_noise_format;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_cache_type;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_cache_resumable;
RNA_EXTERN_C StringPropertyRNA rna_FluidDomainSettings_cache_directory;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_data;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_data;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_noise;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_noise;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_mesh;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_mesh;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_particles;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_particles;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_guide;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_guide;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_any;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_any;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_export_manta_script;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_openvdb_cache_compress_type;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_openvdb_data_depth;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_time_scale;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_cfl_condition;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_timesteps;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_timesteps_min;
RNA_EXTERN_C IntPropertyRNA rna_FluidDomainSettings_timesteps_max;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_slice;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_slice_axis;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_slice_per_voxel;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_slice_depth;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_display_thickness;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_display_interpolation;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_show_gridlines;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_show_velocity;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_vector_display_type;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_vector_field;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_vector_scale_with_magnitude;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_x;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_y;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_z;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_vector_scale;
RNA_EXTERN_C BoolPropertyRNA rna_FluidDomainSettings_use_color_ramp;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_color_ramp_field;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_color_ramp_field_scale;
RNA_EXTERN_C PointerPropertyRNA rna_FluidDomainSettings_color_ramp;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_clipping;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_gridlines_color_field;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_gridlines_lower_bound;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_gridlines_upper_bound;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_gridlines_range_color;
RNA_EXTERN_C EnumPropertyRNA rna_FluidDomainSettings_gridlines_cell_filter;
RNA_EXTERN_C FloatPropertyRNA rna_FluidDomainSettings_velocity_scale;


RNA_EXTERN_C CollectionPropertyRNA rna_FluidFlowSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FluidFlowSettings_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_density;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_smoke_color;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_fuel_amount;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_temperature;
RNA_EXTERN_C PointerPropertyRNA rna_FluidFlowSettings_particle_system;
RNA_EXTERN_C EnumPropertyRNA rna_FluidFlowSettings_flow_type;
RNA_EXTERN_C EnumPropertyRNA rna_FluidFlowSettings_flow_behavior;
RNA_EXTERN_C EnumPropertyRNA rna_FluidFlowSettings_flow_source;
RNA_EXTERN_C BoolPropertyRNA rna_FluidFlowSettings_use_absolute;
RNA_EXTERN_C BoolPropertyRNA rna_FluidFlowSettings_use_initial_velocity;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_velocity_factor;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_velocity_normal;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_velocity_random;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_velocity_coord;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_volume_density;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_surface_distance;
RNA_EXTERN_C BoolPropertyRNA rna_FluidFlowSettings_use_plane_init;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_particle_size;
RNA_EXTERN_C BoolPropertyRNA rna_FluidFlowSettings_use_particle_size;
RNA_EXTERN_C BoolPropertyRNA rna_FluidFlowSettings_use_inflow;
RNA_EXTERN_C IntPropertyRNA rna_FluidFlowSettings_subframes;
RNA_EXTERN_C StringPropertyRNA rna_FluidFlowSettings_density_vertex_group;
RNA_EXTERN_C BoolPropertyRNA rna_FluidFlowSettings_use_texture;
RNA_EXTERN_C EnumPropertyRNA rna_FluidFlowSettings_texture_map_type;
RNA_EXTERN_C StringPropertyRNA rna_FluidFlowSettings_uv_layer;
RNA_EXTERN_C PointerPropertyRNA rna_FluidFlowSettings_noise_texture;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_texture_size;
RNA_EXTERN_C FloatPropertyRNA rna_FluidFlowSettings_texture_offset;


RNA_EXTERN_C CollectionPropertyRNA rna_FluidEffectorSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FluidEffectorSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_FluidEffectorSettings_effector_type;
RNA_EXTERN_C FloatPropertyRNA rna_FluidEffectorSettings_surface_distance;
RNA_EXTERN_C BoolPropertyRNA rna_FluidEffectorSettings_use_plane_init;
RNA_EXTERN_C FloatPropertyRNA rna_FluidEffectorSettings_velocity_factor;
RNA_EXTERN_C EnumPropertyRNA rna_FluidEffectorSettings_guide_mode;
RNA_EXTERN_C BoolPropertyRNA rna_FluidEffectorSettings_use_effector;
RNA_EXTERN_C IntPropertyRNA rna_FluidEffectorSettings_subframes;

static PointerRNA FluidDomainSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FluidDomainSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FluidDomainSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidDomainSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FluidDomainSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FluidDomainSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FluidDomainSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FluidDomainSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_effector_weights_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_effector_group_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->effector_group);
}

RNA_EXTERN_C void FluidDomainSettings_effector_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->effector_group = value.data;
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_fluid_group_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->fluid_group);
}

RNA_EXTERN_C void FluidDomainSettings_fluid_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->fluid_group = value.data;
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_force_collection_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->force_group);
}

RNA_EXTERN_C void FluidDomainSettings_force_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->force_group = value.data;
}

RNA_EXTERN_C void FluidDomainSettings_density_grid_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FluidModifier_density_grid_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FluidDomainSettings_velocity_grid_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FluidModifier_velocity_grid_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FluidDomainSettings_flame_grid_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FluidModifier_flame_grid_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FluidDomainSettings_color_grid_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FluidModifier_color_grid_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FluidDomainSettings_heat_grid_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FluidModifier_heat_grid_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FluidDomainSettings_temperature_grid_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FluidModifier_temperature_grid_get;
    fn(ptr, values);
}

RNA_EXTERN_C void FluidDomainSettings_start_point_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->p0)[i]);
    }
}

RNA_EXTERN_C void FluidDomainSettings_cell_size_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->cell_size)[i]);
    }
}

RNA_EXTERN_C void FluidDomainSettings_domain_resolution_get(PointerRNA *ptr, int values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->res)[i]);
    }
}

RNA_EXTERN_C int FluidDomainSettings_additional_res_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->adapt_res);
}

RNA_EXTERN_C void FluidDomainSettings_additional_res_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->adapt_res = (std::remove_reference_t<decltype(data->adapt_res)>)CLAMPIS(value, 0, 512);
#else
    data->adapt_res = CLAMPIS(value, 0, 512);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_adapt_margin_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->adapt_margin);
}

RNA_EXTERN_C void FluidDomainSettings_adapt_margin_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->adapt_margin = (std::remove_reference_t<decltype(data->adapt_margin)>)CLAMPIS(value, 2, 24);
#else
    data->adapt_margin = CLAMPIS(value, 2, 24);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_adapt_threshold_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->adapt_threshold);
}

RNA_EXTERN_C void FluidDomainSettings_adapt_threshold_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->adapt_threshold = (std::remove_reference_t<decltype(data->adapt_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->adapt_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_adaptive_domain_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_adaptive_domain_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

RNA_EXTERN_C int FluidDomainSettings_resolution_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->maxres);
}

RNA_EXTERN_C void FluidDomainSettings_resolution_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->maxres = (std::remove_reference_t<decltype(data->maxres)>)CLAMPIS(value, 6, 10000);
#else
    data->maxres = CLAMPIS(value, 6, 10000);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_collision_border_front_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 2) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_collision_border_front_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 2; }
    else { data->border_collisions &= ~2; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_collision_border_back_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 4) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_collision_border_back_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 4; }
    else { data->border_collisions &= ~4; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_collision_border_right_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 8) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_collision_border_right_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 8; }
    else { data->border_collisions &= ~8; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_collision_border_left_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 16) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_collision_border_left_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 16; }
    else { data->border_collisions &= ~16; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_collision_border_top_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 32) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_collision_border_top_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 32; }
    else { data->border_collisions &= ~32; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_collision_border_bottom_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 64) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_collision_border_bottom_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 64; }
    else { data->border_collisions &= ~64; }
}

RNA_EXTERN_C void FluidDomainSettings_gravity_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gravity)[i]);
    }
}

RNA_EXTERN_C void FluidDomainSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gravity)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
    }
}

RNA_EXTERN_C int FluidDomainSettings_domain_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void FluidDomainSettings_domain_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_domaintype_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool FluidDomainSettings_delete_in_obstacle_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 16384) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_delete_in_obstacle_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 16384; }
    else { data->flags &= ~16384; }
}

RNA_EXTERN_C float FluidDomainSettings_alpha_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->alpha);
}

RNA_EXTERN_C void FluidDomainSettings_alpha_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)CLAMPIS(value, -5.0f, 5.0f);
#else
    data->alpha = CLAMPIS(value, -5.0f, 5.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_beta_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->beta);
}

RNA_EXTERN_C void FluidDomainSettings_beta_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->beta = (std::remove_reference_t<decltype(data->beta)>)CLAMPIS(value, -5.0f, 5.0f);
#else
    data->beta = CLAMPIS(value, -5.0f, 5.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_dissolve_speed_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->diss_speed);
}

RNA_EXTERN_C void FluidDomainSettings_dissolve_speed_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->diss_speed = (std::remove_reference_t<decltype(data->diss_speed)>)CLAMPIS(value, 1, 10000);
#else
    data->diss_speed = CLAMPIS(value, 1, 10000);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_vorticity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->vorticity);
}

RNA_EXTERN_C void FluidDomainSettings_vorticity_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->vorticity = (std::remove_reference_t<decltype(data->vorticity)>)CLAMPIS(value, 0.0f, 4.0f);
#else
    data->vorticity = CLAMPIS(value, 0.0f, 4.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_highres_sampling_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->highres_sampling);
}

RNA_EXTERN_C void FluidDomainSettings_highres_sampling_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->highres_sampling = (std::remove_reference_t<decltype(data->highres_sampling)>)value;
#else
    data->highres_sampling = value;
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_dissolve_smoke_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_dissolve_smoke_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_dissolve_smoke_log_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_dissolve_smoke_log_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C float FluidDomainSettings_burning_rate_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->burning_rate);
}

RNA_EXTERN_C void FluidDomainSettings_burning_rate_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->burning_rate = (std::remove_reference_t<decltype(data->burning_rate)>)CLAMPIS(value, 0.0099999998f, 4.0f);
#else
    data->burning_rate = CLAMPIS(value, 0.0099999998f, 4.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_flame_smoke_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_smoke);
}

RNA_EXTERN_C void FluidDomainSettings_flame_smoke_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->flame_smoke = (std::remove_reference_t<decltype(data->flame_smoke)>)CLAMPIS(value, 0.0f, 8.0f);
#else
    data->flame_smoke = CLAMPIS(value, 0.0f, 8.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_flame_vorticity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_vorticity);
}

RNA_EXTERN_C void FluidDomainSettings_flame_vorticity_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->flame_vorticity = (std::remove_reference_t<decltype(data->flame_vorticity)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->flame_vorticity = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_flame_ignition_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_ignition);
}

RNA_EXTERN_C void FluidDomainSettings_flame_ignition_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->flame_ignition = (std::remove_reference_t<decltype(data->flame_ignition)>)CLAMPIS(value, 0.5000000000f, 5.0f);
#else
    data->flame_ignition = CLAMPIS(value, 0.5000000000f, 5.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_flame_max_temp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_max_temp);
}

RNA_EXTERN_C void FluidDomainSettings_flame_max_temp_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->flame_max_temp = (std::remove_reference_t<decltype(data->flame_max_temp)>)CLAMPIS(value, 1.0f, 10.0f);
#else
    data->flame_max_temp = CLAMPIS(value, 1.0f, 10.0f);
#endif
}

RNA_EXTERN_C void FluidDomainSettings_flame_smoke_color_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->flame_smoke_color)[i]);
    }
}

RNA_EXTERN_C void FluidDomainSettings_flame_smoke_color_set(PointerRNA *ptr, const float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->flame_smoke_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float FluidDomainSettings_noise_strength_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_strength);
}

RNA_EXTERN_C void FluidDomainSettings_noise_strength_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->noise_strength = (std::remove_reference_t<decltype(data->noise_strength)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->noise_strength = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_noise_pos_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_pos_scale);
}

RNA_EXTERN_C void FluidDomainSettings_noise_pos_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->noise_pos_scale = (std::remove_reference_t<decltype(data->noise_pos_scale)>)CLAMPIS(value, 0.0001000000f, 10.0f);
#else
    data->noise_pos_scale = CLAMPIS(value, 0.0001000000f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_noise_time_anim_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_time_anim);
}

RNA_EXTERN_C void FluidDomainSettings_noise_time_anim_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->noise_time_anim = (std::remove_reference_t<decltype(data->noise_time_anim)>)CLAMPIS(value, 0.0001000000f, 10.0f);
#else
    data->noise_time_anim = CLAMPIS(value, 0.0001000000f, 10.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_noise_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->noise_scale);
}

RNA_EXTERN_C void FluidDomainSettings_noise_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->noise_scale = (std::remove_reference_t<decltype(data->noise_scale)>)CLAMPIS(value, 1, 100);
#else
    data->noise_scale = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C int FluidDomainSettings_simulation_method_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->simulation_method);
}

RNA_EXTERN_C void FluidDomainSettings_simulation_method_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->simulation_method = (std::remove_reference_t<decltype(data->simulation_method)>)value;
#else
    data->simulation_method = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_flip_ratio_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flip_ratio);
}

RNA_EXTERN_C void FluidDomainSettings_flip_ratio_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->flip_ratio = (std::remove_reference_t<decltype(data->flip_ratio)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->flip_ratio = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_particle_randomness_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_randomness);
}

RNA_EXTERN_C void FluidDomainSettings_particle_randomness_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_randomness = (std::remove_reference_t<decltype(data->particle_randomness)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->particle_randomness = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_particle_number_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_number);
}

RNA_EXTERN_C void FluidDomainSettings_particle_number_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_number = (std::remove_reference_t<decltype(data->particle_number)>)CLAMPIS(value, 1, 5);
#else
    data->particle_number = CLAMPIS(value, 1, 5);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_particle_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_minimum);
}

RNA_EXTERN_C void FluidDomainSettings_particle_min_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_minimum = (std::remove_reference_t<decltype(data->particle_minimum)>)CLAMPIS(value, 0, 1000);
#else
    data->particle_minimum = CLAMPIS(value, 0, 1000);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_particle_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_maximum);
}

RNA_EXTERN_C void FluidDomainSettings_particle_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_maximum = (std::remove_reference_t<decltype(data->particle_maximum)>)CLAMPIS(value, 0, 1000);
#else
    data->particle_maximum = CLAMPIS(value, 0, 1000);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_particle_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_radius);
}

RNA_EXTERN_C void FluidDomainSettings_particle_radius_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_radius = (std::remove_reference_t<decltype(data->particle_radius)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->particle_radius = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_particle_band_width_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_band_width);
}

RNA_EXTERN_C void FluidDomainSettings_particle_band_width_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_band_width = (std::remove_reference_t<decltype(data->particle_band_width)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->particle_band_width = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_flip_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 1) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_flip_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 1; }
    else { data->particle_type &= ~1; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_fractions_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 8192) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_fractions_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 8192; }
    else { data->flags &= ~8192; }
}

RNA_EXTERN_C float FluidDomainSettings_fractions_threshold_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->fractions_threshold);
}

RNA_EXTERN_C void FluidDomainSettings_fractions_threshold_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->fractions_threshold = (std::remove_reference_t<decltype(data->fractions_threshold)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->fractions_threshold = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_fractions_distance_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->fractions_distance);
}

RNA_EXTERN_C void FluidDomainSettings_fractions_distance_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->fractions_distance = (std::remove_reference_t<decltype(data->fractions_distance)>)CLAMPIS(value, -5.0f, 5.0f);
#else
    data->fractions_distance = CLAMPIS(value, -5.0f, 5.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sys_particle_maximum_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sys_particle_maximum);
}

RNA_EXTERN_C void FluidDomainSettings_sys_particle_maximum_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sys_particle_maximum = (std::remove_reference_t<decltype(data->sys_particle_maximum)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->sys_particle_maximum = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_viscosity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 131072) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_viscosity_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 131072; }
    else { data->flags &= ~131072; }
}

RNA_EXTERN_C float FluidDomainSettings_viscosity_value_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->viscosity_value);
}

RNA_EXTERN_C void FluidDomainSettings_viscosity_value_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->viscosity_value = (std::remove_reference_t<decltype(data->viscosity_value)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->viscosity_value = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_diffusion_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 32768) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_diffusion_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 32768; }
    else { data->flags &= ~32768; }
}

RNA_EXTERN_C float FluidDomainSettings_surface_tension_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->surface_tension);
}

RNA_EXTERN_C void FluidDomainSettings_surface_tension_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->surface_tension = (std::remove_reference_t<decltype(data->surface_tension)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->surface_tension = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_viscosity_base_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->viscosity_base);
}

RNA_EXTERN_C void FluidDomainSettings_viscosity_base_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->viscosity_base = (std::remove_reference_t<decltype(data->viscosity_base)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->viscosity_base = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_viscosity_exponent_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->viscosity_exponent);
}

RNA_EXTERN_C void FluidDomainSettings_viscosity_exponent_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->viscosity_exponent = (std::remove_reference_t<decltype(data->viscosity_exponent)>)CLAMPIS(value, 0, 10);
#else
    data->viscosity_exponent = CLAMPIS(value, 0, 10);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_mesh_concave_upper_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_concave_upper);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_concave_upper_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_concave_upper = (std::remove_reference_t<decltype(data->mesh_concave_upper)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->mesh_concave_upper = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_mesh_concave_lower_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_concave_lower);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_concave_lower_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_concave_lower = (std::remove_reference_t<decltype(data->mesh_concave_lower)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->mesh_concave_lower = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_mesh_smoothen_pos_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_smoothen_pos);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_smoothen_pos_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_smoothen_pos = (std::remove_reference_t<decltype(data->mesh_smoothen_pos)>)CLAMPIS(value, 0, 100);
#else
    data->mesh_smoothen_pos = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_mesh_smoothen_neg_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_smoothen_neg);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_smoothen_neg_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_smoothen_neg = (std::remove_reference_t<decltype(data->mesh_smoothen_neg)>)CLAMPIS(value, 0, 100);
#else
    data->mesh_smoothen_neg = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_mesh_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_scale);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_scale = (std::remove_reference_t<decltype(data->mesh_scale)>)CLAMPIS(value, 1, 100);
#else
    data->mesh_scale = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_mesh_generator_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_generator);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_generator_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_generator = (std::remove_reference_t<decltype(data->mesh_generator)>)value;
#else
    data->mesh_generator = value;
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_speed_vectors_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 2048) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_speed_vectors_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 2048; }
    else { data->flags &= ~2048; }
}

RNA_EXTERN_C float FluidDomainSettings_mesh_particle_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_particle_radius);
}

RNA_EXTERN_C void FluidDomainSettings_mesh_particle_radius_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->mesh_particle_radius = (std::remove_reference_t<decltype(data->mesh_particle_radius)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->mesh_particle_radius = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_potential_min_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_wc);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_min_wavecrest_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_tau_min_wc = (std::remove_reference_t<decltype(data->sndparticle_tau_min_wc)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sndparticle_tau_min_wc = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_potential_max_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_wc);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_max_wavecrest_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_tau_max_wc = (std::remove_reference_t<decltype(data->sndparticle_tau_max_wc)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sndparticle_tau_max_wc = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_potential_min_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_ta);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_min_trappedair_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_tau_min_ta = (std::remove_reference_t<decltype(data->sndparticle_tau_min_ta)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sndparticle_tau_min_ta = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_potential_max_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_ta);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_max_trappedair_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_tau_max_ta = (std::remove_reference_t<decltype(data->sndparticle_tau_max_ta)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sndparticle_tau_max_ta = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_potential_min_energy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_k);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_min_energy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_tau_min_k = (std::remove_reference_t<decltype(data->sndparticle_tau_min_k)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sndparticle_tau_min_k = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_potential_max_energy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_k);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_max_energy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_tau_max_k = (std::remove_reference_t<decltype(data->sndparticle_tau_max_k)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sndparticle_tau_max_k = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sndparticle_sampling_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_k_wc);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_sampling_wavecrest_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_k_wc = (std::remove_reference_t<decltype(data->sndparticle_k_wc)>)CLAMPIS(value, 0, 10000);
#else
    data->sndparticle_k_wc = CLAMPIS(value, 0, 10000);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sndparticle_sampling_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_k_ta);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_sampling_trappedair_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_k_ta = (std::remove_reference_t<decltype(data->sndparticle_k_ta)>)CLAMPIS(value, 0, 10000);
#else
    data->sndparticle_k_ta = CLAMPIS(value, 0, 10000);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_bubble_buoyancy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_k_b);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_bubble_buoyancy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_k_b = (std::remove_reference_t<decltype(data->sndparticle_k_b)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->sndparticle_k_b = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_bubble_drag_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_k_d);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_bubble_drag_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_k_d = (std::remove_reference_t<decltype(data->sndparticle_k_d)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->sndparticle_k_d = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_life_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_l_min);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_life_min_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_l_min = (std::remove_reference_t<decltype(data->sndparticle_l_min)>)CLAMPIS(value, 0.0f, 10000.0f);
#else
    data->sndparticle_l_min = CLAMPIS(value, 0.0f, 10000.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_sndparticle_life_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_l_max);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_life_max_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_l_max = (std::remove_reference_t<decltype(data->sndparticle_l_max)>)CLAMPIS(value, 0.0f, 10000.0f);
#else
    data->sndparticle_l_max = CLAMPIS(value, 0.0f, 10000.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sndparticle_boundary_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_boundary);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_boundary_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_boundary = (std::remove_reference_t<decltype(data->sndparticle_boundary)>)value;
#else
    data->sndparticle_boundary = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sndparticle_combined_export_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_combined_export);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_combined_export_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_combined_export = (std::remove_reference_t<decltype(data->sndparticle_combined_export)>)value;
#else
    data->sndparticle_combined_export = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sndparticle_potential_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_potential_radius);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_potential_radius_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_potential_radius = (std::remove_reference_t<decltype(data->sndparticle_potential_radius)>)CLAMPIS(value, 1, 4);
#else
    data->sndparticle_potential_radius = CLAMPIS(value, 1, 4);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_sndparticle_update_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_update_radius);
}

RNA_EXTERN_C void FluidDomainSettings_sndparticle_update_radius_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->sndparticle_update_radius = (std::remove_reference_t<decltype(data->sndparticle_update_radius)>)CLAMPIS(value, 1, 4);
#else
    data->sndparticle_update_radius = CLAMPIS(value, 1, 4);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_particle_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_scale);
}

RNA_EXTERN_C void FluidDomainSettings_particle_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_scale = (std::remove_reference_t<decltype(data->particle_scale)>)CLAMPIS(value, 1, 100);
#else
    data->particle_scale = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_spray_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 2) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_spray_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 2; }
    else { data->particle_type &= ~2; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_bubble_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 4) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_bubble_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 4; }
    else { data->particle_type &= ~4; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_foam_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 8) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_foam_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 8; }
    else { data->particle_type &= ~8; }
}

RNA_EXTERN_C bool FluidDomainSettings_use_tracer_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 16) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_tracer_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 16; }
    else { data->particle_type &= ~16; }
}

RNA_EXTERN_C float FluidDomainSettings_guide_alpha_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->guide_alpha);
}

RNA_EXTERN_C void FluidDomainSettings_guide_alpha_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->guide_alpha = (std::remove_reference_t<decltype(data->guide_alpha)>)CLAMPIS(value, 1.0f, 100.0f);
#else
    data->guide_alpha = CLAMPIS(value, 1.0f, 100.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_guide_beta_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->guide_beta);
}

RNA_EXTERN_C void FluidDomainSettings_guide_beta_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->guide_beta = (std::remove_reference_t<decltype(data->guide_beta)>)CLAMPIS(value, 1, 50);
#else
    data->guide_beta = CLAMPIS(value, 1, 50);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_guide_vel_factor_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->guide_vel_factor);
}

RNA_EXTERN_C void FluidDomainSettings_guide_vel_factor_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->guide_vel_factor = (std::remove_reference_t<decltype(data->guide_vel_factor)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->guide_vel_factor = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_guide_source_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->guide_source);
}

RNA_EXTERN_C void FluidDomainSettings_guide_source_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->guide_source = (std::remove_reference_t<decltype(data->guide_source)>)value;
#else
    data->guide_source = value;
#endif
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_guide_parent_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->guide_parent);
}

RNA_EXTERN_C void FluidDomainSettings_guide_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Fluid_guide_parent_set(ptr, value, reports);
}

RNA_EXTERN_C bool FluidDomainSettings_use_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_start_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_start);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Fluid_cache_startframe_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_end_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_end);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Fluid_cache_endframe_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_offset_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_offset);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_offset_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cache_frame_offset = (std::remove_reference_t<decltype(data->cache_frame_offset)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->cache_frame_offset = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_pause_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_data);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_pause_data_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cache_frame_pause_data = (std::remove_reference_t<decltype(data->cache_frame_pause_data)>)value;
#else
    data->cache_frame_pause_data = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_pause_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_noise);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_pause_noise_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cache_frame_pause_noise = (std::remove_reference_t<decltype(data->cache_frame_pause_noise)>)value;
#else
    data->cache_frame_pause_noise = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_pause_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_mesh);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_pause_mesh_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cache_frame_pause_mesh = (std::remove_reference_t<decltype(data->cache_frame_pause_mesh)>)value;
#else
    data->cache_frame_pause_mesh = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_pause_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_particles);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_pause_particles_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cache_frame_pause_particles = (std::remove_reference_t<decltype(data->cache_frame_pause_particles)>)value;
#else
    data->cache_frame_pause_particles = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_cache_frame_pause_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_guide);
}

RNA_EXTERN_C void FluidDomainSettings_cache_frame_pause_guide_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cache_frame_pause_guide = (std::remove_reference_t<decltype(data->cache_frame_pause_guide)>)value;
#else
    data->cache_frame_pause_guide = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_cache_mesh_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_mesh_format);
}

RNA_EXTERN_C void FluidDomainSettings_cache_mesh_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_mesh_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_cache_data_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_data_format);
}

RNA_EXTERN_C void FluidDomainSettings_cache_data_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_data_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_cache_particle_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_particle_format);
}

RNA_EXTERN_C void FluidDomainSettings_cache_particle_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_particle_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_cache_noise_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_noise_format);
}

RNA_EXTERN_C void FluidDomainSettings_cache_noise_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_noise_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_cache_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_type);
}

RNA_EXTERN_C void FluidDomainSettings_cache_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool FluidDomainSettings_cache_resumable_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 65536) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_cache_resumable_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 65536; }
    else { data->flags &= ~65536; }
}

RNA_EXTERN_C void FluidDomainSettings_cache_directory_get(PointerRNA *ptr, char *value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    BLI_assert(strlen(data->cache_directory) < 1024);
    strcpy(value, data->cache_directory);
}

RNA_EXTERN_C int FluidDomainSettings_cache_directory_length(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return strlen(data->cache_directory);
}

RNA_EXTERN_C void FluidDomainSettings_cache_directory_set(PointerRNA *ptr, const char *value)
{
    rna_Fluid_cache_directory_set(ptr, value);
}

RNA_EXTERN_C bool FluidDomainSettings_is_cache_baking_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 1) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_is_cache_baking_data_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 1; }
    else { data->cache_flag &= ~1; }
}

RNA_EXTERN_C bool FluidDomainSettings_has_cache_baked_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 2) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_has_cache_baked_data_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 2; }
    else { data->cache_flag &= ~2; }
}

RNA_EXTERN_C bool FluidDomainSettings_is_cache_baking_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 4) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_is_cache_baking_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 4; }
    else { data->cache_flag &= ~4; }
}

RNA_EXTERN_C bool FluidDomainSettings_has_cache_baked_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 8) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_has_cache_baked_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 8; }
    else { data->cache_flag &= ~8; }
}

RNA_EXTERN_C bool FluidDomainSettings_is_cache_baking_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 16) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_is_cache_baking_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 16; }
    else { data->cache_flag &= ~16; }
}

RNA_EXTERN_C bool FluidDomainSettings_has_cache_baked_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 32) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_has_cache_baked_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 32; }
    else { data->cache_flag &= ~32; }
}

RNA_EXTERN_C bool FluidDomainSettings_is_cache_baking_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 64) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_is_cache_baking_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 64; }
    else { data->cache_flag &= ~64; }
}

RNA_EXTERN_C bool FluidDomainSettings_has_cache_baked_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 128) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_has_cache_baked_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 128; }
    else { data->cache_flag &= ~128; }
}

RNA_EXTERN_C bool FluidDomainSettings_is_cache_baking_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 256) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_is_cache_baking_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 256; }
    else { data->cache_flag &= ~256; }
}

RNA_EXTERN_C bool FluidDomainSettings_has_cache_baked_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 512) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_has_cache_baked_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 512; }
    else { data->cache_flag &= ~512; }
}

RNA_EXTERN_C bool FluidDomainSettings_is_cache_baking_any_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 341) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_is_cache_baking_any_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 341; }
    else { data->cache_flag &= ~341; }
}

RNA_EXTERN_C bool FluidDomainSettings_has_cache_baked_any_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 682) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_has_cache_baked_any_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 682; }
    else { data->cache_flag &= ~682; }
}

RNA_EXTERN_C bool FluidDomainSettings_export_manta_script_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 4096) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_export_manta_script_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 4096; }
    else { data->flags &= ~4096; }
}

RNA_EXTERN_C int FluidDomainSettings_openvdb_cache_compress_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->openvdb_compression);
}

RNA_EXTERN_C void FluidDomainSettings_openvdb_cache_compress_type_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->openvdb_compression = (std::remove_reference_t<decltype(data->openvdb_compression)>)value;
#else
    data->openvdb_compression = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_openvdb_data_depth_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->openvdb_data_depth);
}

RNA_EXTERN_C void FluidDomainSettings_openvdb_data_depth_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->openvdb_data_depth = (std::remove_reference_t<decltype(data->openvdb_data_depth)>)value;
#else
    data->openvdb_data_depth = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_time_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->time_scale);
}

RNA_EXTERN_C void FluidDomainSettings_time_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->time_scale = (std::remove_reference_t<decltype(data->time_scale)>)CLAMPIS(value, 0.0001000000f, 10.0f);
#else
    data->time_scale = CLAMPIS(value, 0.0001000000f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_cfl_condition_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->cfl_condition);
}

RNA_EXTERN_C void FluidDomainSettings_cfl_condition_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->cfl_condition = (std::remove_reference_t<decltype(data->cfl_condition)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->cfl_condition = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_adaptive_timesteps_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_adaptive_timesteps_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

RNA_EXTERN_C int FluidDomainSettings_timesteps_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->timesteps_minimum);
}

RNA_EXTERN_C void FluidDomainSettings_timesteps_min_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->timesteps_minimum = (std::remove_reference_t<decltype(data->timesteps_minimum)>)CLAMPIS(value, 1, 100);
#else
    data->timesteps_minimum = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_timesteps_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->timesteps_maximum);
}

RNA_EXTERN_C void FluidDomainSettings_timesteps_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->timesteps_maximum = (std::remove_reference_t<decltype(data->timesteps_maximum)>)CLAMPIS(value, 1, 100);
#else
    data->timesteps_maximum = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_slice_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->axis_slice_method) & 1) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_use_slice_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->axis_slice_method |= 1; }
    else { data->axis_slice_method &= ~1; }
}

RNA_EXTERN_C int FluidDomainSettings_slice_axis_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->slice_axis);
}

RNA_EXTERN_C void FluidDomainSettings_slice_axis_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->slice_axis = (std::remove_reference_t<decltype(data->slice_axis)>)value;
#else
    data->slice_axis = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_slice_per_voxel_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->slice_per_voxel);
}

RNA_EXTERN_C void FluidDomainSettings_slice_per_voxel_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->slice_per_voxel = (std::remove_reference_t<decltype(data->slice_per_voxel)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->slice_per_voxel = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_slice_depth_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->slice_depth);
}

RNA_EXTERN_C void FluidDomainSettings_slice_depth_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->slice_depth = (std::remove_reference_t<decltype(data->slice_depth)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->slice_depth = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float FluidDomainSettings_display_thickness_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->display_thickness);
}

RNA_EXTERN_C void FluidDomainSettings_display_thickness_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->display_thickness = (std::remove_reference_t<decltype(data->display_thickness)>)CLAMPIS(value, 0.0010000000f, 1000.0f);
#else
    data->display_thickness = CLAMPIS(value, 0.0010000000f, 1000.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_display_interpolation_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->interp_method);
}

RNA_EXTERN_C void FluidDomainSettings_display_interpolation_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->interp_method = (std::remove_reference_t<decltype(data->interp_method)>)value;
#else
    data->interp_method = value;
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_show_gridlines_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->show_gridlines);
}

RNA_EXTERN_C void FluidDomainSettings_show_gridlines_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->show_gridlines = (std::remove_reference_t<decltype(data->show_gridlines)>)value;
#else
    data->show_gridlines = value;
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_show_velocity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->draw_velocity);
}

RNA_EXTERN_C void FluidDomainSettings_show_velocity_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->draw_velocity = (std::remove_reference_t<decltype(data->draw_velocity)>)value;
#else
    data->draw_velocity = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_vector_display_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->vector_draw_type);
}

RNA_EXTERN_C void FluidDomainSettings_vector_display_type_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->vector_draw_type = (std::remove_reference_t<decltype(data->vector_draw_type)>)value;
#else
    data->vector_draw_type = value;
#endif
}

RNA_EXTERN_C int FluidDomainSettings_vector_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->vector_field);
}

RNA_EXTERN_C void FluidDomainSettings_vector_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->vector_field = (std::remove_reference_t<decltype(data->vector_field)>)value;
#else
    data->vector_field = value;
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_vector_scale_with_magnitude_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->vector_scale_with_magnitude);
}

RNA_EXTERN_C void FluidDomainSettings_vector_scale_with_magnitude_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->vector_scale_with_magnitude = (std::remove_reference_t<decltype(data->vector_scale_with_magnitude)>)value;
#else
    data->vector_scale_with_magnitude = value;
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_vector_show_mac_x_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->vector_draw_mac_components) & 1) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_vector_show_mac_x_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components |= 1; }
    else { data->vector_draw_mac_components &= ~1; }
}

RNA_EXTERN_C bool FluidDomainSettings_vector_show_mac_y_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->vector_draw_mac_components) & 2) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_vector_show_mac_y_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components |= 2; }
    else { data->vector_draw_mac_components &= ~2; }
}

RNA_EXTERN_C bool FluidDomainSettings_vector_show_mac_z_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->vector_draw_mac_components) & 4) != 0);
}

RNA_EXTERN_C void FluidDomainSettings_vector_show_mac_z_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components |= 4; }
    else { data->vector_draw_mac_components &= ~4; }
}

RNA_EXTERN_C float FluidDomainSettings_vector_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->vector_scale);
}

RNA_EXTERN_C void FluidDomainSettings_vector_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->vector_scale = (std::remove_reference_t<decltype(data->vector_scale)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->vector_scale = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C bool FluidDomainSettings_use_color_ramp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->use_coba);
}

RNA_EXTERN_C void FluidDomainSettings_use_color_ramp_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Fluid_use_color_ramp_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidDomainSettings_color_ramp_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->coba_field);
}

RNA_EXTERN_C void FluidDomainSettings_color_ramp_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->coba_field = (std::remove_reference_t<decltype(data->coba_field)>)value;
#else
    data->coba_field = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_color_ramp_field_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->grid_scale);
}

RNA_EXTERN_C void FluidDomainSettings_color_ramp_field_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->grid_scale = (std::remove_reference_t<decltype(data->grid_scale)>)CLAMPIS(value, 0.0010000000f, 100000.0f);
#else
    data->grid_scale = CLAMPIS(value, 0.0010000000f, 100000.0f);
#endif
}

RNA_EXTERN_C PointerRNA FluidDomainSettings_color_ramp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->coba);
}

RNA_EXTERN_C float FluidDomainSettings_clipping_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->clipping);
}

RNA_EXTERN_C void FluidDomainSettings_clipping_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->clipping = (std::remove_reference_t<decltype(data->clipping)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->clipping = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_gridlines_color_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->gridlines_color_field);
}

RNA_EXTERN_C void FluidDomainSettings_gridlines_color_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->gridlines_color_field = (std::remove_reference_t<decltype(data->gridlines_color_field)>)value;
#else
    data->gridlines_color_field = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_gridlines_lower_bound_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->gridlines_lower_bound);
}

RNA_EXTERN_C void FluidDomainSettings_gridlines_lower_bound_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->gridlines_lower_bound = (std::remove_reference_t<decltype(data->gridlines_lower_bound)>)value;
#else
    data->gridlines_lower_bound = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_gridlines_upper_bound_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->gridlines_upper_bound);
}

RNA_EXTERN_C void FluidDomainSettings_gridlines_upper_bound_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->gridlines_upper_bound = (std::remove_reference_t<decltype(data->gridlines_upper_bound)>)value;
#else
    data->gridlines_upper_bound = value;
#endif
}

RNA_EXTERN_C void FluidDomainSettings_gridlines_range_color_get(PointerRNA *ptr, float values[4])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->gridlines_range_color)[i]);
    }
}

RNA_EXTERN_C void FluidDomainSettings_gridlines_range_color_set(PointerRNA *ptr, const float values[4])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->gridlines_range_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C int FluidDomainSettings_gridlines_cell_filter_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->gridlines_cell_filter);
}

RNA_EXTERN_C void FluidDomainSettings_gridlines_cell_filter_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->gridlines_cell_filter = (std::remove_reference_t<decltype(data->gridlines_cell_filter)>)value;
#else
    data->gridlines_cell_filter = value;
#endif
}

RNA_EXTERN_C float FluidDomainSettings_velocity_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->velocity_scale);
}

RNA_EXTERN_C void FluidDomainSettings_velocity_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
#ifdef __cplusplus
    data->velocity_scale = (std::remove_reference_t<decltype(data->velocity_scale)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->velocity_scale = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

static PointerRNA FluidFlowSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FluidFlowSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FluidFlowSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidFlowSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FluidFlowSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FluidFlowSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FluidFlowSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FluidFlowSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FluidFlowSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float FluidFlowSettings_density_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->density);
}

RNA_EXTERN_C void FluidFlowSettings_density_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->density = (std::remove_reference_t<decltype(data->density)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->density = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C void FluidFlowSettings_smoke_color_get(PointerRNA *ptr, float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

RNA_EXTERN_C void FluidFlowSettings_smoke_color_set(PointerRNA *ptr, const float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C float FluidFlowSettings_fuel_amount_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->fuel_amount);
}

RNA_EXTERN_C void FluidFlowSettings_fuel_amount_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->fuel_amount = (std::remove_reference_t<decltype(data->fuel_amount)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->fuel_amount = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidFlowSettings_temperature_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->temperature);
}

RNA_EXTERN_C void FluidFlowSettings_temperature_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->temperature = (std::remove_reference_t<decltype(data->temperature)>)CLAMPIS(value, -10.0f, 10.0f);
#else
    data->temperature = CLAMPIS(value, -10.0f, 10.0f);
#endif
}

RNA_EXTERN_C PointerRNA FluidFlowSettings_particle_system_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

RNA_EXTERN_C void FluidFlowSettings_particle_system_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    *(void **)&data->psys = value.data;
}

RNA_EXTERN_C int FluidFlowSettings_flow_type_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void FluidFlowSettings_flow_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_flowtype_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FluidFlowSettings_flow_behavior_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->behavior);
}

RNA_EXTERN_C void FluidFlowSettings_flow_behavior_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->behavior = (std::remove_reference_t<decltype(data->behavior)>)value;
#else
    data->behavior = value;
#endif
}

RNA_EXTERN_C int FluidFlowSettings_flow_source_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->source);
}

RNA_EXTERN_C void FluidFlowSettings_flow_source_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_flowsource_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool FluidFlowSettings_use_absolute_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void FluidFlowSettings_use_absolute_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C bool FluidFlowSettings_use_initial_velocity_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void FluidFlowSettings_use_initial_velocity_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C float FluidFlowSettings_velocity_factor_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_multi);
}

RNA_EXTERN_C void FluidFlowSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->vel_multi = (std::remove_reference_t<decltype(data->vel_multi)>)CLAMPIS(value, -100.0f, 100.0f);
#else
    data->vel_multi = CLAMPIS(value, -100.0f, 100.0f);
#endif
}

RNA_EXTERN_C float FluidFlowSettings_velocity_normal_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_normal);
}

RNA_EXTERN_C void FluidFlowSettings_velocity_normal_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->vel_normal = (std::remove_reference_t<decltype(data->vel_normal)>)CLAMPIS(value, -100.0f, 100.0f);
#else
    data->vel_normal = CLAMPIS(value, -100.0f, 100.0f);
#endif
}

RNA_EXTERN_C float FluidFlowSettings_velocity_random_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_random);
}

RNA_EXTERN_C void FluidFlowSettings_velocity_random_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->vel_random = (std::remove_reference_t<decltype(data->vel_random)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->vel_random = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C void FluidFlowSettings_velocity_coord_get(PointerRNA *ptr, float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vel_coord)[i]);
    }
}

RNA_EXTERN_C void FluidFlowSettings_velocity_coord_set(PointerRNA *ptr, const float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->vel_coord)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
    }
}

RNA_EXTERN_C float FluidFlowSettings_volume_density_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->volume_density);
}

RNA_EXTERN_C void FluidFlowSettings_volume_density_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->volume_density = (std::remove_reference_t<decltype(data->volume_density)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->volume_density = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float FluidFlowSettings_surface_distance_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->surface_distance);
}

RNA_EXTERN_C void FluidFlowSettings_surface_distance_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->surface_distance = (std::remove_reference_t<decltype(data->surface_distance)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->surface_distance = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C bool FluidFlowSettings_use_plane_init_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 64) != 0);
}

RNA_EXTERN_C void FluidFlowSettings_use_plane_init_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 64; }
    else { data->flags &= ~64; }
}

RNA_EXTERN_C float FluidFlowSettings_particle_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->particle_size);
}

RNA_EXTERN_C void FluidFlowSettings_particle_size_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->particle_size = (std::remove_reference_t<decltype(data->particle_size)>)CLAMPIS(value, 0.1000000015f, FLT_MAX);
#else
    data->particle_size = CLAMPIS(value, 0.1000000015f, FLT_MAX);
#endif
}

RNA_EXTERN_C bool FluidFlowSettings_use_particle_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void FluidFlowSettings_use_particle_size_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C bool FluidFlowSettings_use_inflow_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void FluidFlowSettings_use_inflow_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C int FluidFlowSettings_subframes_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->subframes);
}

RNA_EXTERN_C void FluidFlowSettings_subframes_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->subframes = (std::remove_reference_t<decltype(data->subframes)>)CLAMPIS(value, 0, 200);
#else
    data->subframes = CLAMPIS(value, 0, 200);
#endif
}

RNA_EXTERN_C void FluidFlowSettings_density_vertex_group_get(PointerRNA *ptr, char *value)
{
    rna_FluidFlow_density_vgroup_get(ptr, value);
}

RNA_EXTERN_C int FluidFlowSettings_density_vertex_group_length(PointerRNA *ptr)
{
    return rna_FluidFlow_density_vgroup_length(ptr);
}

RNA_EXTERN_C void FluidFlowSettings_density_vertex_group_set(PointerRNA *ptr, const char *value)
{
    rna_FluidFlow_density_vgroup_set(ptr, value);
}

RNA_EXTERN_C bool FluidFlowSettings_use_texture_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void FluidFlowSettings_use_texture_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C int FluidFlowSettings_texture_map_type_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->texture_type);
}

RNA_EXTERN_C void FluidFlowSettings_texture_map_type_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->texture_type = (std::remove_reference_t<decltype(data->texture_type)>)value;
#else
    data->texture_type = value;
#endif
}

RNA_EXTERN_C void FluidFlowSettings_uv_layer_get(PointerRNA *ptr, char *value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    BLI_assert(strlen(data->uvlayer_name) < 68);
    strcpy(value, data->uvlayer_name);
}

RNA_EXTERN_C int FluidFlowSettings_uv_layer_length(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return strlen(data->uvlayer_name);
}

RNA_EXTERN_C void FluidFlowSettings_uv_layer_set(PointerRNA *ptr, const char *value)
{
    rna_FluidFlow_uvlayer_set(ptr, value);
}

RNA_EXTERN_C PointerRNA FluidFlowSettings_noise_texture_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->noise_texture);
}

RNA_EXTERN_C void FluidFlowSettings_noise_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);

    if (data->noise_texture) {
        id_us_min((ID *)data->noise_texture);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->noise_texture = value.data;
}

RNA_EXTERN_C float FluidFlowSettings_texture_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->texture_size);
}

RNA_EXTERN_C void FluidFlowSettings_texture_size_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->texture_size = (std::remove_reference_t<decltype(data->texture_size)>)CLAMPIS(value, 0.0099999998f, 10.0f);
#else
    data->texture_size = CLAMPIS(value, 0.0099999998f, 10.0f);
#endif
}

RNA_EXTERN_C float FluidFlowSettings_texture_offset_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->texture_offset);
}

RNA_EXTERN_C void FluidFlowSettings_texture_offset_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
#ifdef __cplusplus
    data->texture_offset = (std::remove_reference_t<decltype(data->texture_offset)>)CLAMPIS(value, 0.0f, 200.0f);
#else
    data->texture_offset = CLAMPIS(value, 0.0f, 200.0f);
#endif
}

static PointerRNA FluidEffectorSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FluidEffectorSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FluidEffectorSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidEffectorSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FluidEffectorSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FluidEffectorSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FluidEffectorSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FluidEffectorSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FluidEffectorSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int FluidEffectorSettings_effector_type_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void FluidEffectorSettings_effector_type_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
#ifdef __cplusplus
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
#else
    data->type = value;
#endif
}

RNA_EXTERN_C float FluidEffectorSettings_surface_distance_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (float)(data->surface_distance);
}

RNA_EXTERN_C void FluidEffectorSettings_surface_distance_set(PointerRNA *ptr, float value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
#ifdef __cplusplus
    data->surface_distance = (std::remove_reference_t<decltype(data->surface_distance)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->surface_distance = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C bool FluidEffectorSettings_use_plane_init_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void FluidEffectorSettings_use_plane_init_set(PointerRNA *ptr, bool value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C float FluidEffectorSettings_velocity_factor_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (float)(data->vel_multi);
}

RNA_EXTERN_C void FluidEffectorSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
#ifdef __cplusplus
    data->vel_multi = (std::remove_reference_t<decltype(data->vel_multi)>)CLAMPIS(value, -100.0f, 100.0f);
#else
    data->vel_multi = CLAMPIS(value, -100.0f, 100.0f);
#endif
}

RNA_EXTERN_C int FluidEffectorSettings_guide_mode_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->guide_mode);
}

RNA_EXTERN_C void FluidEffectorSettings_guide_mode_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
#ifdef __cplusplus
    data->guide_mode = (std::remove_reference_t<decltype(data->guide_mode)>)value;
#else
    data->guide_mode = value;
#endif
}

RNA_EXTERN_C bool FluidEffectorSettings_use_effector_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void FluidEffectorSettings_use_effector_set(PointerRNA *ptr, bool value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C int FluidEffectorSettings_subframes_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->subframes);
}

RNA_EXTERN_C void FluidEffectorSettings_subframes_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
#ifdef __cplusplus
    data->subframes = (std::remove_reference_t<decltype(data->subframes)>)CLAMPIS(value, 0, 200);
#else
    data->subframes = CLAMPIS(value, 0, 200);
#endif
}

RNA_EXTERN_C int FluidDomainSettings_density_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_grid_get_length(ptr, arraylen);
}

RNA_EXTERN_C int FluidDomainSettings_velocity_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_velocity_grid_get_length(ptr, arraylen);
}

RNA_EXTERN_C int FluidDomainSettings_flame_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_grid_get_length(ptr, arraylen);
}

RNA_EXTERN_C int FluidDomainSettings_color_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_color_grid_get_length(ptr, arraylen);
}

RNA_EXTERN_C int FluidDomainSettings_heat_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_heat_grid_get_length(ptr, arraylen);
}

RNA_EXTERN_C int FluidDomainSettings_temperature_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_grid_get_length(ptr, arraylen);
}




/* Domain Settings */
CollectionPropertyRNA rna_FluidDomainSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidDomainSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_rna_properties_begin, FluidDomainSettings_rna_properties_next, FluidDomainSettings_rna_properties_end, FluidDomainSettings_rna_properties_get, nullptr, nullptr, FluidDomainSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FluidDomainSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_effector_weights, (PropertyRNA *)&rna_FluidDomainSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_FluidDomainSettings_effector_weights = {
	{(PropertyRNA *)&rna_FluidDomainSettings_effector_group, (PropertyRNA *)&rna_FluidDomainSettings_rna_type,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_effector_weights_get, nullptr, nullptr, nullptr,&RNA_EffectorWeights
};

PointerPropertyRNA rna_FluidDomainSettings_effector_group = {
	{(PropertyRNA *)&rna_FluidDomainSettings_fluid_group, (PropertyRNA *)&rna_FluidDomainSettings_effector_weights,
	-1, "effector_group", 8388737, 0, 0, 0, 0, "Effector Collection",
	"Limit effectors to this collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_effector_group_get, FluidDomainSettings_effector_group_set, nullptr, nullptr,&RNA_Collection
};

PointerPropertyRNA rna_FluidDomainSettings_fluid_group = {
	{(PropertyRNA *)&rna_FluidDomainSettings_force_collection, (PropertyRNA *)&rna_FluidDomainSettings_effector_group,
	-1, "fluid_group", 8388737, 0, 0, 0, 0, "Fluid Collection",
	"Limit fluid objects to this collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_fluid_group_get, FluidDomainSettings_fluid_group_set, nullptr, nullptr,&RNA_Collection
};

PointerPropertyRNA rna_FluidDomainSettings_force_collection = {
	{(PropertyRNA *)&rna_FluidDomainSettings_density_grid, (PropertyRNA *)&rna_FluidDomainSettings_fluid_group,
	-1, "force_collection", 8388737, 0, 0, 0, 0, "Force Collection",
	"Limit forces to this collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_force_collection_get, FluidDomainSettings_force_collection_set, nullptr, nullptr,&RNA_Collection
};

static float rna_FluidDomainSettings_density_grid_default[32] = {
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

FloatPropertyRNA rna_FluidDomainSettings_density_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_velocity_grid, (PropertyRNA *)&rna_FluidDomainSettings_force_collection,
	-1, "density_grid", 131074, 0, 0, 0, 0, "Density Grid",
	"Smoke density grid",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FluidModifier_grid_get_length, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FluidDomainSettings_density_grid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_density_grid_default
};

static float rna_FluidDomainSettings_velocity_grid_default[32] = {
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

FloatPropertyRNA rna_FluidDomainSettings_velocity_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_grid, (PropertyRNA *)&rna_FluidDomainSettings_density_grid,
	-1, "velocity_grid", 131074, 0, 0, 0, 0, "Velocity Grid",
	"Smoke velocity grid",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FluidModifier_velocity_grid_get_length, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FluidDomainSettings_velocity_grid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_velocity_grid_default
};

static float rna_FluidDomainSettings_flame_grid_default[32] = {
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

FloatPropertyRNA rna_FluidDomainSettings_flame_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_grid, (PropertyRNA *)&rna_FluidDomainSettings_velocity_grid,
	-1, "flame_grid", 131074, 0, 0, 0, 0, "Flame Grid",
	"Smoke flame grid",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FluidModifier_grid_get_length, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FluidDomainSettings_flame_grid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_flame_grid_default
};

static float rna_FluidDomainSettings_color_grid_default[32] = {
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

FloatPropertyRNA rna_FluidDomainSettings_color_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_heat_grid, (PropertyRNA *)&rna_FluidDomainSettings_flame_grid,
	-1, "color_grid", 131074, 0, 0, 0, 0, "Color Grid",
	"Smoke color grid",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FluidModifier_color_grid_get_length, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FluidDomainSettings_color_grid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_color_grid_default
};

static float rna_FluidDomainSettings_heat_grid_default[32] = {
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

FloatPropertyRNA rna_FluidDomainSettings_heat_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_temperature_grid, (PropertyRNA *)&rna_FluidDomainSettings_color_grid,
	-1, "heat_grid", 131074, 0, 0, 0, 0, "Heat Grid",
	"Smoke heat grid",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FluidModifier_heat_grid_get_length, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FluidDomainSettings_heat_grid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_heat_grid_default
};

static float rna_FluidDomainSettings_temperature_grid_default[32] = {
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

FloatPropertyRNA rna_FluidDomainSettings_temperature_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_start_point, (PropertyRNA *)&rna_FluidDomainSettings_heat_grid,
	-1, "temperature_grid", 131074, 0, 0, 0, 0, "Temperature Grid",
	"Smoke temperature grid, range 0 to 1 represents 0 to 1000K",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_FluidModifier_grid_get_length, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, FluidDomainSettings_temperature_grid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_temperature_grid_default
};

static float rna_FluidDomainSettings_start_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidDomainSettings_start_point = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cell_size, (PropertyRNA *)&rna_FluidDomainSettings_temperature_grid,
	-1, "start_point", 2, 0, 0, 4, 0, "p0",
	"Start point",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, p0), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidDomainSettings_start_point_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_start_point_default
};

static float rna_FluidDomainSettings_cell_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidDomainSettings_cell_size = {
	{(PropertyRNA *)&rna_FluidDomainSettings_domain_resolution, (PropertyRNA *)&rna_FluidDomainSettings_start_point,
	-1, "cell_size", 2, 0, 0, 4, 0, "cell_size",
	"Cell Size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cell_size), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidDomainSettings_cell_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_cell_size_default
};

static int rna_FluidDomainSettings_domain_resolution_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_FluidDomainSettings_domain_resolution = {
	{(PropertyRNA *)&rna_FluidDomainSettings_additional_res, (PropertyRNA *)&rna_FluidDomainSettings_cell_size,
	-1, "domain_resolution", 2, 0, 0, 4, 0, "res",
	"Smoke Grid Resolution",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, res), (RawPropertyType)0, nullptr},
	nullptr, nullptr, FluidDomainSettings_domain_resolution_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_FluidDomainSettings_domain_resolution_default
};

IntPropertyRNA rna_FluidDomainSettings_additional_res = {
	{(PropertyRNA *)&rna_FluidDomainSettings_adapt_margin, (PropertyRNA *)&rna_FluidDomainSettings_domain_resolution,
	-1, "additional_res", 3, 0, 0, 4, 0, "Additional",
	"Maximum number of additional cells",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, adapt_res), (RawPropertyType)0, nullptr},
	FluidDomainSettings_additional_res_get, FluidDomainSettings_additional_res_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 512, 0, 512, 1, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_adapt_margin = {
	{(PropertyRNA *)&rna_FluidDomainSettings_adapt_threshold, (PropertyRNA *)&rna_FluidDomainSettings_additional_res,
	-1, "adapt_margin", 3, 0, 0, 4, 0, "Margin",
	"Margin added around fluid to minimize boundary interference",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, adapt_margin), (RawPropertyType)0, nullptr},
	FluidDomainSettings_adapt_margin_get, FluidDomainSettings_adapt_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 2, 24, 2, 24, 1, 4, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_adapt_threshold = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_domain, (PropertyRNA *)&rna_FluidDomainSettings_adapt_margin,
	-1, "adapt_threshold", 3, 0, 0, 4, 0, "Threshold",
	"Minimum amount of fluid a cell can contain before it is considered empty",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, adapt_threshold), (RawPropertyType)5, nullptr},
	FluidDomainSettings_adapt_threshold_get, FluidDomainSettings_adapt_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0199999996f, 6, 0.0199999996f, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_domain = {
	{(PropertyRNA *)&rna_FluidDomainSettings_resolution_max, (PropertyRNA *)&rna_FluidDomainSettings_adapt_threshold,
	-1, "use_adaptive_domain", 1, 0, 0, 0, 0, "Adaptive Domain",
	"Adapt simulation resolution and size to fluid",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_adaptive_domain_get, FluidDomainSettings_use_adaptive_domain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_resolution_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_front, (PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_domain,
	-1, "resolution_max", 1, 0, 0, 4, 0, "Maximum Resolution",
	"Resolution used for the fluid domain. Value corresponds to the longest domain side (resolution for other domain sides is calculated automatically)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, maxres), (RawPropertyType)0, nullptr},
	FluidDomainSettings_resolution_max_get, FluidDomainSettings_resolution_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 24, 10000, 6, 10000, 2, 32, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_front = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_back, (PropertyRNA *)&rna_FluidDomainSettings_resolution_max,
	-1, "use_collision_border_front", 3, 0, 0, 0, 0, "Front",
	"Enable collisions with front domain border",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_collision_border_front_get, FluidDomainSettings_use_collision_border_front_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_back = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_right, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_front,
	-1, "use_collision_border_back", 3, 0, 0, 0, 0, "Back",
	"Enable collisions with back domain border",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_collision_border_back_get, FluidDomainSettings_use_collision_border_back_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_right = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_left, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_back,
	-1, "use_collision_border_right", 3, 0, 0, 0, 0, "Right",
	"Enable collisions with right domain border",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_collision_border_right_get, FluidDomainSettings_use_collision_border_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_left = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_top, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_right,
	-1, "use_collision_border_left", 3, 0, 0, 0, 0, "Left",
	"Enable collisions with left domain border",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_collision_border_left_get, FluidDomainSettings_use_collision_border_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_top = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_bottom, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_left,
	-1, "use_collision_border_top", 3, 0, 0, 0, 0, "Top",
	"Enable collisions with top domain border",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_collision_border_top_get, FluidDomainSettings_use_collision_border_top_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_bottom = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gravity, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_top,
	-1, "use_collision_border_bottom", 3, 0, 0, 0, 0, "Bottom",
	"Enable collisions with bottom domain border",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_collision_border_bottom_get, FluidDomainSettings_use_collision_border_bottom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_FluidDomainSettings_gravity_default[3] = {
	0.0f,
	0.0f,
	-9.8100004196f
};

FloatPropertyRNA rna_FluidDomainSettings_gravity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_domain_type, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_bottom,
	-1, "gravity", 3, 0, 0, 4, 0, "Gravity",
	"Gravity in X, Y and Z direction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ACCELERATION | (int)PROP_UNIT_ACCELERATION), nullptr, 1, {3, 0, 0}, 3,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gravity), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidDomainSettings_gravity_get, FluidDomainSettings_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_FluidDomainSettings_gravity_default
};

static const EnumPropertyItem rna_FluidDomainSettings_domain_type_items[3] = {
	{0, "GAS", 0, "Gas", "Create domain for gases"},
	{1, "LIQUID", 0, "Liquid", "Create domain for liquids"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_domain_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_delete_in_obstacle, (PropertyRNA *)&rna_FluidDomainSettings_gravity,
	-1, "domain_type", 1, 0, 0, 0, 0, "Domain Type",
	"Change domain type of the simulation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flip_parts_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_domain_type_get, FluidDomainSettings_domain_type_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_domain_type_items, 2, 0
};

BoolPropertyRNA rna_FluidDomainSettings_delete_in_obstacle = {
	{(PropertyRNA *)&rna_FluidDomainSettings_alpha, (PropertyRNA *)&rna_FluidDomainSettings_domain_type,
	-1, "delete_in_obstacle", 3, 0, 0, 0, 0, "Clear In Obstacle",
	"Delete fluid inside obstacles",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_delete_in_obstacle_get, FluidDomainSettings_delete_in_obstacle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_alpha = {
	{(PropertyRNA *)&rna_FluidDomainSettings_beta, (PropertyRNA *)&rna_FluidDomainSettings_delete_in_obstacle,
	-1, "alpha", 3, 0, 0, 4, 0, "Buoyancy Density",
	"Buoyant force based on smoke density (higher value results in faster rising smoke)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, alpha), (RawPropertyType)5, nullptr},
	FluidDomainSettings_alpha_get, FluidDomainSettings_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_beta = {
	{(PropertyRNA *)&rna_FluidDomainSettings_dissolve_speed, (PropertyRNA *)&rna_FluidDomainSettings_alpha,
	-1, "beta", 3, 0, 0, 4, 0, "Buoyancy Heat",
	"Buoyant force based on smoke heat (higher value results in faster rising smoke)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, beta), (RawPropertyType)5, nullptr},
	FluidDomainSettings_beta_get, FluidDomainSettings_beta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 1.0f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_dissolve_speed = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vorticity, (PropertyRNA *)&rna_FluidDomainSettings_beta,
	-1, "dissolve_speed", 3, 0, 0, 4, 0, "Dissolve Speed",
	"Determine how quickly the smoke dissolves (lower value makes smoke disappear faster)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, diss_speed), (RawPropertyType)0, nullptr},
	FluidDomainSettings_dissolve_speed_get, FluidDomainSettings_dissolve_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 1, 5, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_vorticity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_highres_sampling, (PropertyRNA *)&rna_FluidDomainSettings_dissolve_speed,
	-1, "vorticity", 3, 0, 0, 4, 0, "Vorticity",
	"Amount of turbulence and rotation in smoke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vorticity), (RawPropertyType)5, nullptr},
	FluidDomainSettings_vorticity_get, FluidDomainSettings_vorticity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 4.0f, 0.0f, 4.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_highres_sampling_items[4] = {
	{2, "FULLSAMPLE", 0, "Full Sample", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{0, "NEAREST", 0, "Nearest", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_highres_sampling = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke, (PropertyRNA *)&rna_FluidDomainSettings_vorticity,
	-1, "highres_sampling", 3, 0, 0, 4, 0, "Emitter",
	"Method for sampling the high resolution flow",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, highres_sampling), (RawPropertyType)0, nullptr},
	FluidDomainSettings_highres_sampling_get, FluidDomainSettings_highres_sampling_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_highres_sampling_items, 3, 2
};

BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke_log, (PropertyRNA *)&rna_FluidDomainSettings_highres_sampling,
	-1, "use_dissolve_smoke", 3, 0, 0, 0, 0, "Dissolve Smoke",
	"Let smoke disappear over time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_dissolve_smoke_get, FluidDomainSettings_use_dissolve_smoke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke_log = {
	{(PropertyRNA *)&rna_FluidDomainSettings_burning_rate, (PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke,
	-1, "use_dissolve_smoke_log", 3, 0, 0, 0, 0, "Logarithmic Dissolve",
	"Dissolve smoke in a logarithmic fashion. Dissolves quickly at first, but lingers longer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_dissolve_smoke_log_get, FluidDomainSettings_use_dissolve_smoke_log_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_burning_rate = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_smoke, (PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke_log,
	-1, "burning_rate", 3, 0, 0, 4, 0, "Speed",
	"Speed of the burning reaction (higher value results in smaller flames)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, burning_rate), (RawPropertyType)5, nullptr},
	FluidDomainSettings_burning_rate_get, FluidDomainSettings_burning_rate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, 4.0f, 1.0f, 5, 0.7500000000f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_flame_smoke = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_vorticity, (PropertyRNA *)&rna_FluidDomainSettings_burning_rate,
	-1, "flame_smoke", 3, 0, 0, 4, 0, "Smoke",
	"Amount of smoke created by burning fuel",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_smoke), (RawPropertyType)5, nullptr},
	FluidDomainSettings_flame_smoke_get, FluidDomainSettings_flame_smoke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 4.0f, 0.0f, 8.0f, 1.0f, 5, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_flame_vorticity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_ignition, (PropertyRNA *)&rna_FluidDomainSettings_flame_smoke,
	-1, "flame_vorticity", 3, 0, 0, 4, 0, "Vorticity",
	"Additional vorticity for the flames",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_vorticity), (RawPropertyType)5, nullptr},
	FluidDomainSettings_flame_vorticity_get, FluidDomainSettings_flame_vorticity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 2.0f, 1.0f, 5, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_flame_ignition = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_max_temp, (PropertyRNA *)&rna_FluidDomainSettings_flame_vorticity,
	-1, "flame_ignition", 3, 0, 0, 4, 0, "Minimum",
	"Minimum temperature of the flames (higher value results in faster rising flames)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_ignition), (RawPropertyType)5, nullptr},
	FluidDomainSettings_flame_ignition_get, FluidDomainSettings_flame_ignition_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 2.5000000000f, 0.5000000000f, 5.0f, 1.0f, 5, 1.5000000000f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_flame_max_temp = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_smoke_color, (PropertyRNA *)&rna_FluidDomainSettings_flame_ignition,
	-1, "flame_max_temp", 3, 0, 0, 4, 0, "Maximum",
	"Maximum temperature of the flames (higher value results in faster rising flames)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_max_temp), (RawPropertyType)5, nullptr},
	FluidDomainSettings_flame_max_temp_get, FluidDomainSettings_flame_max_temp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5.0f, 1.0f, 10.0f, 1.0f, 5, 3.0f, nullptr
};

static float rna_FluidDomainSettings_flame_smoke_color_default[3] = {
	0.6999999881f,
	0.6999999881f,
	0.6999999881f
};

FloatPropertyRNA rna_FluidDomainSettings_flame_smoke_color = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_strength, (PropertyRNA *)&rna_FluidDomainSettings_flame_max_temp,
	-1, "flame_smoke_color", 3, 0, 0, 4, 0, "Smoke Color",
	"Color of smoke emitted from burning fuel",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_smoke_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidDomainSettings_flame_smoke_color_get, FluidDomainSettings_flame_smoke_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_flame_smoke_color_default
};

FloatPropertyRNA rna_FluidDomainSettings_noise_strength = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_pos_scale, (PropertyRNA *)&rna_FluidDomainSettings_flame_smoke_color,
	-1, "noise_strength", 3, 0, 0, 4, 0, "Strength",
	"Strength of noise",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_strength), (RawPropertyType)5, nullptr},
	FluidDomainSettings_noise_strength_get, FluidDomainSettings_noise_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 2, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_noise_pos_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_time_anim, (PropertyRNA *)&rna_FluidDomainSettings_noise_strength,
	-1, "noise_pos_scale", 3, 0, 0, 4, 0, "Scale",
	"Scale of noise (higher value results in larger vortices)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_pos_scale), (RawPropertyType)5, nullptr},
	FluidDomainSettings_noise_pos_scale_get, FluidDomainSettings_noise_pos_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 2.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_noise_time_anim = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_scale, (PropertyRNA *)&rna_FluidDomainSettings_noise_pos_scale,
	-1, "noise_time_anim", 3, 0, 0, 4, 0, "Time",
	"Animation time of noise",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_time_anim), (RawPropertyType)5, nullptr},
	FluidDomainSettings_noise_time_anim_get, FluidDomainSettings_noise_time_anim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 0.1000000015f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_noise_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_noise, (PropertyRNA *)&rna_FluidDomainSettings_noise_time_anim,
	-1, "noise_scale", 1, 0, 0, 4, 0, "Noise Scale",
	"The noise simulation is scaled up by this factor (compared to the base resolution of the domain)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_noise_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_scale), (RawPropertyType)0, nullptr},
	FluidDomainSettings_noise_scale_get, FluidDomainSettings_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 100, 1, 2, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_simulation_method, (PropertyRNA *)&rna_FluidDomainSettings_noise_scale,
	-1, "use_noise", 1, 0, 0, 0, 0, "Use Noise",
	"Enable fluid noise (using amplification)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_noise_get, FluidDomainSettings_use_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_simulation_method_items[3] = {
	{1, "FLIP", 0, "FLIP", "Use FLIP as the simulation method (more splashy behavior)"},
	{2, "APIC", 0, "APIC", "Use APIC as the simulation method (more energetic and stable behavior)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_simulation_method = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flip_ratio, (PropertyRNA *)&rna_FluidDomainSettings_use_noise,
	-1, "simulation_method", 1, 0, 0, 4, 0, "Simulation Method",
	"Change the underlying simulation method",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, simulation_method), (RawPropertyType)1, nullptr},
	FluidDomainSettings_simulation_method_get, FluidDomainSettings_simulation_method_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_simulation_method_items, 2, 1
};

FloatPropertyRNA rna_FluidDomainSettings_flip_ratio = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_randomness, (PropertyRNA *)&rna_FluidDomainSettings_simulation_method,
	-1, "flip_ratio", 3, 0, 0, 4, 0, "FLIP Ratio",
	"PIC/FLIP Ratio. A value of 1.0 will result in a completely FLIP based simulation. Use a lower value for simulations which should produce smaller splashes",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flip_ratio), (RawPropertyType)5, nullptr},
	FluidDomainSettings_flip_ratio_get, FluidDomainSettings_flip_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.9700000286f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_particle_randomness = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_number, (PropertyRNA *)&rna_FluidDomainSettings_flip_ratio,
	-1, "particle_randomness", 3, 0, 0, 4, 0, "Randomness",
	"Randomness factor for particle sampling",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_randomness), (RawPropertyType)5, nullptr},
	FluidDomainSettings_particle_randomness_get, FluidDomainSettings_particle_randomness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.1000000015f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_particle_number = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_min, (PropertyRNA *)&rna_FluidDomainSettings_particle_randomness,
	-1, "particle_number", 3, 0, 0, 4, 0, "Number",
	"Particle number factor (higher value results in more particles)",
	0, "Amount",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_number), (RawPropertyType)0, nullptr},
	FluidDomainSettings_particle_number_get, FluidDomainSettings_particle_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 5, 1, 5, 1, 2, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_particle_min = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_max, (PropertyRNA *)&rna_FluidDomainSettings_particle_number,
	-1, "particle_min", 3, 0, 0, 4, 0, "Minimum",
	"Minimum number of particles per cell (ensures that each cell has at least this amount of particles)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_minimum), (RawPropertyType)0, nullptr},
	FluidDomainSettings_particle_min_get, FluidDomainSettings_particle_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, 8, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_particle_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_radius, (PropertyRNA *)&rna_FluidDomainSettings_particle_min,
	-1, "particle_max", 3, 0, 0, 4, 0, "Maximum",
	"Maximum number of particles per cell (ensures that each cell has at most this amount of particles)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_maximum), (RawPropertyType)0, nullptr},
	FluidDomainSettings_particle_max_get, FluidDomainSettings_particle_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, 16, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_particle_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_band_width, (PropertyRNA *)&rna_FluidDomainSettings_particle_max,
	-1, "particle_radius", 3, 0, 0, 4, 0, "Radius",
	"Particle radius factor. Increase this value if the simulation appears to leak volume, decrease it if the simulation seems to gain volume",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_radius), (RawPropertyType)5, nullptr},
	FluidDomainSettings_particle_radius_get, FluidDomainSettings_particle_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_particle_band_width = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_flip_particles, (PropertyRNA *)&rna_FluidDomainSettings_particle_radius,
	-1, "particle_band_width", 3, 0, 0, 4, 0, "Width",
	"Particle (narrow) band width (higher value results in thicker band and more particles)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_band_width), (RawPropertyType)5, nullptr},
	FluidDomainSettings_particle_band_width_get, FluidDomainSettings_particle_band_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 3.0f, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_flip_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_fractions, (PropertyRNA *)&rna_FluidDomainSettings_particle_band_width,
	-1, "use_flip_particles", 1, 0, 0, 0, 0, "FLIP",
	"Create liquid particle system",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flip_parts_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_flip_particles_get, FluidDomainSettings_use_flip_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_fractions = {
	{(PropertyRNA *)&rna_FluidDomainSettings_fractions_threshold, (PropertyRNA *)&rna_FluidDomainSettings_use_flip_particles,
	-1, "use_fractions", 1, 0, 0, 0, 0, "Fractional Obstacles",
	"Fractional obstacles improve and smoothen the fluid-obstacle boundary",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_fractions_get, FluidDomainSettings_use_fractions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_fractions_threshold = {
	{(PropertyRNA *)&rna_FluidDomainSettings_fractions_distance, (PropertyRNA *)&rna_FluidDomainSettings_use_fractions,
	-1, "fractions_threshold", 3, 0, 0, 4, 0, "Obstacle Threshold",
	"Determines how much fluid is allowed in an obstacle cell (higher values will tag a boundary cell as an obstacle easier and reduce the boundary smoothening effect)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, fractions_threshold), (RawPropertyType)5, nullptr},
	FluidDomainSettings_fractions_threshold_get, FluidDomainSettings_fractions_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0010000000f, 1.0f, 0.0500000007f, -1, 0.0500000007f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_fractions_distance = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sys_particle_maximum, (PropertyRNA *)&rna_FluidDomainSettings_fractions_threshold,
	-1, "fractions_distance", 3, 0, 0, 4, 0, "Obstacle Distance",
	"Determines how far apart fluid and obstacle are (higher values will result in fluid being further away from obstacles, smaller values will let fluid move towards the inside of obstacles)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, fractions_distance), (RawPropertyType)5, nullptr},
	FluidDomainSettings_fractions_distance_get, FluidDomainSettings_fractions_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 5.0f, -5.0f, 5.0f, 0.1000000015f, -1, 0.5000000000f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_sys_particle_maximum = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_viscosity, (PropertyRNA *)&rna_FluidDomainSettings_fractions_distance,
	-1, "sys_particle_maximum", 3, 0, 0, 4, 0, "System Maximum",
	"Maximum number of fluid particles that are allowed in this simulation",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sys_particle_maximum), (RawPropertyType)0, nullptr},
	FluidDomainSettings_sys_particle_maximum_get, FluidDomainSettings_sys_particle_maximum_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_viscosity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_viscosity_value, (PropertyRNA *)&rna_FluidDomainSettings_sys_particle_maximum,
	-1, "use_viscosity", 3, 0, 0, 0, 0, "Use Viscosity",
	"Enable fluid viscosity settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_viscosity_get, FluidDomainSettings_use_viscosity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_viscosity_value = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_diffusion, (PropertyRNA *)&rna_FluidDomainSettings_use_viscosity,
	-1, "viscosity_value", 3, 0, 0, 4, 0, "Strength",
	"Viscosity of liquid (higher values result in more viscous fluids, a value of 0 will still apply some viscosity)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, viscosity_value), (RawPropertyType)5, nullptr},
	FluidDomainSettings_viscosity_value_get, FluidDomainSettings_viscosity_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 3, 0.0500000007f, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_diffusion = {
	{(PropertyRNA *)&rna_FluidDomainSettings_surface_tension, (PropertyRNA *)&rna_FluidDomainSettings_viscosity_value,
	-1, "use_diffusion", 1, 0, 0, 0, 0, "Use Diffusion",
	"Enable fluid diffusion settings (e.g. viscosity, surface tension)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_diffusion_get, FluidDomainSettings_use_diffusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_surface_tension = {
	{(PropertyRNA *)&rna_FluidDomainSettings_viscosity_base, (PropertyRNA *)&rna_FluidDomainSettings_use_diffusion,
	-1, "surface_tension", 3, 0, 0, 4, 0, "Tension",
	"Surface tension of liquid (higher value results in greater hydrophobic behavior)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, surface_tension), (RawPropertyType)5, nullptr},
	FluidDomainSettings_surface_tension_get, FluidDomainSettings_surface_tension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_viscosity_base = {
	{(PropertyRNA *)&rna_FluidDomainSettings_viscosity_exponent, (PropertyRNA *)&rna_FluidDomainSettings_surface_tension,
	-1, "viscosity_base", 3, 0, 0, 4, 0, "Viscosity Base",
	"Viscosity setting: value that is multiplied by 10 to the power of (exponent*-1)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, viscosity_base), (RawPropertyType)5, nullptr},
	FluidDomainSettings_viscosity_base_get, FluidDomainSettings_viscosity_base_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_viscosity_exponent = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_upper, (PropertyRNA *)&rna_FluidDomainSettings_viscosity_base,
	-1, "viscosity_exponent", 3, 0, 0, 4, 0, "Viscosity Exponent",
	"Negative exponent for the viscosity value (to simplify entering small values e.g. 5*10^-6)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, viscosity_exponent), (RawPropertyType)0, nullptr},
	FluidDomainSettings_viscosity_exponent_get, FluidDomainSettings_viscosity_exponent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 10, 1, 6, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_upper = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_lower, (PropertyRNA *)&rna_FluidDomainSettings_viscosity_exponent,
	-1, "mesh_concave_upper", 3, 0, 0, 4, 0, "Upper Concavity",
	"Upper mesh concavity bound (high values tend to smoothen and fill out concave regions)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_concave_upper), (RawPropertyType)5, nullptr},
	FluidDomainSettings_mesh_concave_upper_get, FluidDomainSettings_mesh_concave_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 3.5000000000f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_lower = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_pos, (PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_upper,
	-1, "mesh_concave_lower", 3, 0, 0, 4, 0, "Lower Concavity",
	"Lower mesh concavity bound (high values tend to smoothen and fill out concave regions)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_concave_lower), (RawPropertyType)5, nullptr},
	FluidDomainSettings_mesh_concave_lower_get, FluidDomainSettings_mesh_concave_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.4000000060f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_pos = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_neg, (PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_lower,
	-1, "mesh_smoothen_pos", 3, 0, 0, 4, 0, "Smoothen Pos",
	"Positive mesh smoothening",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_smoothen_pos), (RawPropertyType)0, nullptr},
	FluidDomainSettings_mesh_smoothen_pos_get, FluidDomainSettings_mesh_smoothen_pos_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 1, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_neg = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_scale, (PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_pos,
	-1, "mesh_smoothen_neg", 3, 0, 0, 4, 0, "Smoothen Neg",
	"Negative mesh smoothening",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_smoothen_neg), (RawPropertyType)0, nullptr},
	FluidDomainSettings_mesh_smoothen_neg_get, FluidDomainSettings_mesh_smoothen_neg_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 1, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_mesh_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_generator, (PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_neg,
	-1, "mesh_scale", 1, 0, 0, 4, 0, "Mesh scale",
	"The mesh simulation is scaled up by this factor (compared to the base resolution of the domain). For best meshing, it is recommended to adjust the mesh particle radius alongside this value",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_mesh_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_scale), (RawPropertyType)0, nullptr},
	FluidDomainSettings_mesh_scale_get, FluidDomainSettings_mesh_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 100, 1, 2, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_mesh_generator_items[3] = {
	{0, "IMPROVED", 0, "Final", "Use improved particle level set (slower but more precise and with mesh smoothening options)"},
	{1, "UNION", 0, "Preview", "Use union particle level set (faster but lower quality)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_mesh_generator = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_mesh, (PropertyRNA *)&rna_FluidDomainSettings_mesh_scale,
	-1, "mesh_generator", 3, 0, 0, 4, 0, "Mesh generator",
	"Which particle level set generator to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_generator), (RawPropertyType)1, nullptr},
	FluidDomainSettings_mesh_generator_get, FluidDomainSettings_mesh_generator_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_mesh_generator_items, 2, 0
};

BoolPropertyRNA rna_FluidDomainSettings_use_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_speed_vectors, (PropertyRNA *)&rna_FluidDomainSettings_mesh_generator,
	-1, "use_mesh", 1, 0, 0, 0, 0, "Use Mesh",
	"Enable fluid mesh (using amplification)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_mesh_get, FluidDomainSettings_use_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_speed_vectors = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_particle_radius, (PropertyRNA *)&rna_FluidDomainSettings_use_mesh,
	-1, "use_speed_vectors", 1, 0, 0, 0, 0, "Speed Vectors",
	"Caches velocities of mesh vertices. These will be used (automatically) when rendering with motion blur enabled",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_speed_vectors_get, FluidDomainSettings_use_speed_vectors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_mesh_particle_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_wavecrest, (PropertyRNA *)&rna_FluidDomainSettings_use_speed_vectors,
	-1, "mesh_particle_radius", 3, 0, 0, 4, 0, "Radius",
	"Particle radius factor (higher value results in larger (meshed) particles). Needs to be adjusted after changing the mesh scale",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_particle_radius), (RawPropertyType)5, nullptr},
	FluidDomainSettings_mesh_particle_radius_get, FluidDomainSettings_mesh_particle_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 2.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_wavecrest = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_wavecrest, (PropertyRNA *)&rna_FluidDomainSettings_mesh_particle_radius,
	-1, "sndparticle_potential_min_wavecrest", 3, 0, 0, 4, 0, "Minimum Wave Crest Potential",
	"Lower clamping threshold for marking fluid cells as wave crests (lower value results in more marked cells)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_min_wc), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_potential_min_wavecrest_get, FluidDomainSettings_sndparticle_potential_min_wavecrest_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 2.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_wavecrest = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_trappedair, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_wavecrest,
	-1, "sndparticle_potential_max_wavecrest", 3, 0, 0, 4, 0, "Maximum Wave Crest Potential",
	"Upper clamping threshold for marking fluid cells as wave crests (higher value results in less marked cells)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_max_wc), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_potential_max_wavecrest_get, FluidDomainSettings_sndparticle_potential_max_wavecrest_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 8.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_trappedair = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_trappedair, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_wavecrest,
	-1, "sndparticle_potential_min_trappedair", 3, 0, 0, 4, 0, "Minimum Trapped Air Potential",
	"Lower clamping threshold for marking fluid cells where air is trapped (lower value results in more marked cells)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_min_ta), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_potential_min_trappedair_get, FluidDomainSettings_sndparticle_potential_min_trappedair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 1000.0f, 100.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_trappedair = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_energy, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_trappedair,
	-1, "sndparticle_potential_max_trappedair", 3, 0, 0, 4, 0, "Maximum Trapped Air Potential",
	"Upper clamping threshold for marking fluid cells where air is trapped (higher value results in less marked cells)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_max_ta), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_potential_max_trappedair_get, FluidDomainSettings_sndparticle_potential_max_trappedair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 20.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_energy = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_energy, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_trappedair,
	-1, "sndparticle_potential_min_energy", 3, 0, 0, 4, 0, "Minimum Kinetic Energy Potential",
	"Lower clamping threshold that indicates the fluid speed where cells start to emit particles (lower values result in generally more particles)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_min_k), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_potential_min_energy_get, FluidDomainSettings_sndparticle_potential_min_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_energy = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_wavecrest, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_energy,
	-1, "sndparticle_potential_max_energy", 3, 0, 0, 4, 0, "Maximum Kinetic Energy Potential",
	"Upper clamping threshold that indicates the fluid speed where cells no longer emit more particles (higher value results in generally less particles)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_max_k), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_potential_max_energy_get, FluidDomainSettings_sndparticle_potential_max_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 5.0f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_wavecrest = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_trappedair, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_energy,
	-1, "sndparticle_sampling_wavecrest", 3, 0, 0, 4, 0, "Wave Crest Sampling",
	"Maximum number of particles generated per wave crest cell per frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_wc), (RawPropertyType)0, nullptr},
	FluidDomainSettings_sndparticle_sampling_wavecrest_get, FluidDomainSettings_sndparticle_sampling_wavecrest_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, 10000, 1, 200, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_trappedair = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_buoyancy, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_wavecrest,
	-1, "sndparticle_sampling_trappedair", 3, 0, 0, 4, 0, "Trapped Air Sampling",
	"Maximum number of particles generated per trapped air cell per frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_ta), (RawPropertyType)0, nullptr},
	FluidDomainSettings_sndparticle_sampling_trappedair_get, FluidDomainSettings_sndparticle_sampling_trappedair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, 10000, 1, 40, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_buoyancy = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_drag, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_trappedair,
	-1, "sndparticle_bubble_buoyancy", 3, 0, 0, 4, 0, "Bubble Buoyancy",
	"Amount of buoyancy force that rises bubbles (high value results in bubble movement mainly upwards)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_b), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_bubble_buoyancy_get, FluidDomainSettings_sndparticle_bubble_buoyancy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 2, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_drag = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_min, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_buoyancy,
	-1, "sndparticle_bubble_drag", 3, 0, 0, 4, 0, "Bubble Drag",
	"Amount of drag force that moves bubbles along with the fluid (high value results in bubble movement mainly along with the fluid)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_d), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_bubble_drag_get, FluidDomainSettings_sndparticle_bubble_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 2, 0.6000000238f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_min = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_max, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_drag,
	-1, "sndparticle_life_min", 3, 0, 0, 4, 0, "Minimum Lifetime",
	"Lowest possible particle lifetime",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_l_min), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_life_min_get, FluidDomainSettings_sndparticle_life_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 100.0f, 1, 10.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_boundary, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_min,
	-1, "sndparticle_life_max", 3, 0, 0, 4, 0, "Maximum Lifetime",
	"Highest possible particle lifetime",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_l_max), (RawPropertyType)5, nullptr},
	FluidDomainSettings_sndparticle_life_max_get, FluidDomainSettings_sndparticle_life_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 100.0f, 1, 25.0f, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_sndparticle_boundary_items[3] = {
	{0, "DELETE", 0, "Delete", "Delete secondary particles that are inside obstacles or left the domain"},
	{1, "PUSHOUT", 0, "Push Out", "Push secondary particles that left the domain back into the domain"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_sndparticle_boundary = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_combined_export, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_max,
	-1, "sndparticle_boundary", 3, 0, 0, 4, 0, "Particles in Boundary",
	"How particles that left the domain are treated",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_boundary), (RawPropertyType)2, nullptr},
	FluidDomainSettings_sndparticle_boundary_get, FluidDomainSettings_sndparticle_boundary_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_sndparticle_boundary_items, 2, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_sndparticle_combined_export_items[6] = {
	{0, "OFF", 0, "Off", "Create a separate particle system for every secondary particle type"},
	{1, "SPRAY_FOAM", 0, "Spray + Foam", "Spray and foam particles are saved in the same particle system"},
	{2, "SPRAY_BUBBLES", 0, "Spray + Bubbles", "Spray and bubble particles are saved in the same particle system"},
	{3, "FOAM_BUBBLES", 0, "Foam + Bubbles", "Foam and bubbles particles are saved in the same particle system"},
	{4, "SPRAY_FOAM_BUBBLES", 0, "Spray + Foam + Bubbles", "Create one particle system that contains all three secondary particle types"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_sndparticle_combined_export = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_radius, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_boundary,
	-1, "sndparticle_combined_export", 3, 0, 0, 4, 0, "Combined Export",
	"Determines which particle systems are created from secondary particles",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_combined_export_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_combined_export), (RawPropertyType)2, nullptr},
	FluidDomainSettings_sndparticle_combined_export_get, FluidDomainSettings_sndparticle_combined_export_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_sndparticle_combined_export_items, 5, 0
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_potential_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_update_radius, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_combined_export,
	-1, "sndparticle_potential_radius", 3, 0, 0, 4, 0, "Potential Radius",
	"Radius to compute potential for each cell (higher values are slower but create smoother potential grids)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_potential_radius), (RawPropertyType)0, nullptr},
	FluidDomainSettings_sndparticle_potential_radius_get, FluidDomainSettings_sndparticle_potential_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 4, 1, 4, 1, 2, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_update_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_scale, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_radius,
	-1, "sndparticle_update_radius", 3, 0, 0, 4, 0, "Update Radius",
	"Radius to compute position update for each particle (higher values are slower but particles move less chaotic)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_update_radius), (RawPropertyType)0, nullptr},
	FluidDomainSettings_sndparticle_update_radius_get, FluidDomainSettings_sndparticle_update_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 4, 1, 4, 1, 2, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_particle_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_spray_particles, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_update_radius,
	-1, "particle_scale", 1, 0, 0, 4, 0, "Particle scale",
	"The particle simulation is scaled up by this factor (compared to the base resolution of the domain)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_particles_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_scale), (RawPropertyType)0, nullptr},
	FluidDomainSettings_particle_scale_get, FluidDomainSettings_particle_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10, 1, 100, 1, 1, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_spray_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_bubble_particles, (PropertyRNA *)&rna_FluidDomainSettings_particle_scale,
	-1, "use_spray_particles", 1, 0, 0, 0, 0, "Spray",
	"Create spray particle system",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_spray_parts_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_spray_particles_get, FluidDomainSettings_use_spray_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_bubble_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_foam_particles, (PropertyRNA *)&rna_FluidDomainSettings_use_spray_particles,
	-1, "use_bubble_particles", 1, 0, 0, 0, 0, "Bubble",
	"Create bubble particle system",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_bubble_parts_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_bubble_particles_get, FluidDomainSettings_use_bubble_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_foam_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_tracer_particles, (PropertyRNA *)&rna_FluidDomainSettings_use_bubble_particles,
	-1, "use_foam_particles", 1, 0, 0, 0, 0, "Foam",
	"Create foam particle system",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_foam_parts_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_foam_particles_get, FluidDomainSettings_use_foam_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_tracer_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_alpha, (PropertyRNA *)&rna_FluidDomainSettings_use_foam_particles,
	-1, "use_tracer_particles", 1, 0, 0, 0, 0, "Tracer",
	"Create tracer particle system",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_tracer_parts_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_tracer_particles_get, FluidDomainSettings_use_tracer_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_guide_alpha = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_beta, (PropertyRNA *)&rna_FluidDomainSettings_use_tracer_particles,
	-1, "guide_alpha", 3, 0, 0, 4, 0, "Weight",
	"Guiding weight (higher value results in greater lag)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_alpha), (RawPropertyType)5, nullptr},
	FluidDomainSettings_guide_alpha_get, FluidDomainSettings_guide_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, 100.0f, 10.0f, 3, 2.0f, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_guide_beta = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_vel_factor, (PropertyRNA *)&rna_FluidDomainSettings_guide_alpha,
	-1, "guide_beta", 3, 0, 0, 4, 0, "Size",
	"Guiding size (higher value results in larger vortices)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_beta), (RawPropertyType)0, nullptr},
	FluidDomainSettings_guide_beta_get, FluidDomainSettings_guide_beta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 50, 1, 50, 1, 5, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_guide_vel_factor = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_source, (PropertyRNA *)&rna_FluidDomainSettings_guide_beta,
	-1, "guide_vel_factor", 3, 0, 0, 4, 0, "Velocity Factor",
	"Guiding velocity factor (higher value results in greater guiding velocities)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_vel_factor), (RawPropertyType)5, nullptr},
	FluidDomainSettings_guide_vel_factor_get, FluidDomainSettings_guide_vel_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 2.0f, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_guide_source_items[3] = {
	{0, "DOMAIN", 0, "Domain", "Use a fluid domain for guiding (domain needs to be baked already so that velocities can be extracted). Guiding domain can be of any type (i.e. gas or liquid)"},
	{1, "EFFECTOR", 0, "Effector", "Use guiding (effector) objects to create fluid guiding (guiding objects should be animated and baked once set up completely)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_guide_source = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_parent, (PropertyRNA *)&rna_FluidDomainSettings_guide_vel_factor,
	-1, "guide_source", 3, 0, 0, 4, 0, "Guiding source",
	"Choose where to get guiding velocities from",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_source), (RawPropertyType)1, nullptr},
	FluidDomainSettings_guide_source_get, FluidDomainSettings_guide_source_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_guide_source_items, 2, 0
};

PointerPropertyRNA rna_FluidDomainSettings_guide_parent = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_guide, (PropertyRNA *)&rna_FluidDomainSettings_guide_source,
	-1, "guide_parent", 8388737, 0, 0, 0, 0, "",
	"Use velocities from this object for the guiding effect (object needs to have fluid modifier and be of type domain))",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_guidingcache_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_guide_parent_get, FluidDomainSettings_guide_parent_set, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_FluidDomainSettings_use_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_start, (PropertyRNA *)&rna_FluidDomainSettings_guide_parent,
	-1, "use_guide", 1, 0, 0, 0, 0, "Use Guiding",
	"Enable fluid guiding",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_guide_get, FluidDomainSettings_use_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_start = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_end, (PropertyRNA *)&rna_FluidDomainSettings_use_guide,
	-1, "cache_frame_start", 1, 0, 0, 0, 0, "Start",
	"Frame on which the simulation starts. This is the first frame that will be baked",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_frame_start_get, FluidDomainSettings_cache_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 1, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_end = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_offset, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_start,
	-1, "cache_frame_end", 1, 0, 0, 0, 0, "End",
	"Frame on which the simulation stops. This is the last frame that will be baked",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_frame_end_get, FluidDomainSettings_cache_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 250, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_offset = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_data, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_end,
	-1, "cache_frame_offset", 1, 0, 0, 4, 0, "Offset",
	"Frame offset that is used when loading the simulation from the cache. It is not considered when baking the simulation, only when loading it",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_offset), (RawPropertyType)0, nullptr},
	FluidDomainSettings_cache_frame_offset_get, FluidDomainSettings_cache_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_data = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_noise, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_offset,
	-1, "cache_frame_pause_data", 3, 0, 0, 4, 0, "cache_frame_pause_data",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_data), (RawPropertyType)0, nullptr},
	FluidDomainSettings_cache_frame_pause_data_get, FluidDomainSettings_cache_frame_pause_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_mesh, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_data,
	-1, "cache_frame_pause_noise", 3, 0, 0, 4, 0, "cache_frame_pause_noise",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_noise), (RawPropertyType)0, nullptr},
	FluidDomainSettings_cache_frame_pause_noise_get, FluidDomainSettings_cache_frame_pause_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_particles, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_noise,
	-1, "cache_frame_pause_mesh", 3, 0, 0, 4, 0, "cache_frame_pause_mesh",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_mesh), (RawPropertyType)0, nullptr},
	FluidDomainSettings_cache_frame_pause_mesh_get, FluidDomainSettings_cache_frame_pause_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_guide, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_mesh,
	-1, "cache_frame_pause_particles", 3, 0, 0, 4, 0, "cache_frame_pause_particles",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_particles), (RawPropertyType)0, nullptr},
	FluidDomainSettings_cache_frame_pause_particles_get, FluidDomainSettings_cache_frame_pause_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_mesh_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_particles,
	-1, "cache_frame_pause_guide", 3, 0, 0, 4, 0, "cache_frame_pause_guide",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_guide), (RawPropertyType)0, nullptr},
	FluidDomainSettings_cache_frame_pause_guide_get, FluidDomainSettings_cache_frame_pause_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_mesh_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_mesh_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_data_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_guide,
	-1, "cache_mesh_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching surface data",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_mesh_format_get, FluidDomainSettings_cache_mesh_format_set, rna_Fluid_cachetype_mesh_itemf, nullptr, nullptr, rna_FluidDomainSettings_cache_mesh_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_data_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_data_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_particle_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_mesh_format,
	-1, "cache_data_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching volumetric data",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_data_format_get, FluidDomainSettings_cache_data_format_set, rna_Fluid_cachetype_volume_itemf, nullptr, nullptr, rna_FluidDomainSettings_cache_data_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_particle_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_particle_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_noise_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_data_format,
	-1, "cache_particle_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching particle data",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_particle_format_get, FluidDomainSettings_cache_particle_format_set, rna_Fluid_cachetype_particle_itemf, nullptr, nullptr, rna_FluidDomainSettings_cache_particle_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_noise_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_noise_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_type, (PropertyRNA *)&rna_FluidDomainSettings_cache_particle_format,
	-1, "cache_noise_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching noise data",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_noise_format_get, FluidDomainSettings_cache_noise_format_set, rna_Fluid_cachetype_volume_itemf, nullptr, nullptr, rna_FluidDomainSettings_cache_noise_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_type_items[4] = {
	{0, "REPLAY", 0, "Replay", "Use the timeline to bake the scene"},
	{1, "MODULAR", 0, "Modular", "Bake every stage of the simulation separately"},
	{2, "ALL", 0, "All", "Bake all simulation settings at once"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_resumable, (PropertyRNA *)&rna_FluidDomainSettings_cache_noise_format,
	-1, "cache_type", 1, 0, 0, 0, 0, "Type",
	"Change the cache type of the simulation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_type_get, FluidDomainSettings_cache_type_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_cache_type_items, 3, 0
};

BoolPropertyRNA rna_FluidDomainSettings_cache_resumable = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_directory, (PropertyRNA *)&rna_FluidDomainSettings_cache_type,
	-1, "cache_resumable", 1, 0, 0, 0, 0, "Resumable",
	"Additional data will be saved so that the bake jobs can be resumed after pausing. Because more data will be written to disk it is recommended to avoid enabling this option when baking at high resolutions",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_resumable_get, FluidDomainSettings_cache_resumable_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_FluidDomainSettings_cache_directory = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_data, (PropertyRNA *)&rna_FluidDomainSettings_cache_resumable,
	-1, "cache_directory", 262145, 0, 0, 0, 0, "Cache directory",
	"Directory that contains fluid cache files",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_DIRPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Fluid_update, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_cache_directory_get, FluidDomainSettings_cache_directory_length, FluidDomainSettings_cache_directory_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_data = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_data, (PropertyRNA *)&rna_FluidDomainSettings_cache_directory,
	-1, "is_cache_baking_data", 3, 0, 0, 0, 0, "is_cache_baking_data",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_is_cache_baking_data_get, FluidDomainSettings_is_cache_baking_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_data = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_noise, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_data,
	-1, "has_cache_baked_data", 3, 0, 0, 0, 0, "has_cache_baked_data",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_has_cache_baked_data_get, FluidDomainSettings_has_cache_baked_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_noise, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_data,
	-1, "is_cache_baking_noise", 3, 0, 0, 0, 0, "is_cache_baking_noise",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_is_cache_baking_noise_get, FluidDomainSettings_is_cache_baking_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_mesh, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_noise,
	-1, "has_cache_baked_noise", 3, 0, 0, 0, 0, "has_cache_baked_noise",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_has_cache_baked_noise_get, FluidDomainSettings_has_cache_baked_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_mesh, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_noise,
	-1, "is_cache_baking_mesh", 3, 0, 0, 0, 0, "is_cache_baking_mesh",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_is_cache_baking_mesh_get, FluidDomainSettings_is_cache_baking_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_particles, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_mesh,
	-1, "has_cache_baked_mesh", 3, 0, 0, 0, 0, "has_cache_baked_mesh",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_has_cache_baked_mesh_get, FluidDomainSettings_has_cache_baked_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_particles, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_mesh,
	-1, "is_cache_baking_particles", 3, 0, 0, 0, 0, "is_cache_baking_particles",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_is_cache_baking_particles_get, FluidDomainSettings_is_cache_baking_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_guide, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_particles,
	-1, "has_cache_baked_particles", 3, 0, 0, 0, 0, "has_cache_baked_particles",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_has_cache_baked_particles_get, FluidDomainSettings_has_cache_baked_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_guide, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_particles,
	-1, "is_cache_baking_guide", 3, 0, 0, 0, 0, "is_cache_baking_guide",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_is_cache_baking_guide_get, FluidDomainSettings_is_cache_baking_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_any, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_guide,
	-1, "has_cache_baked_guide", 3, 0, 0, 0, 0, "has_cache_baked_guide",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_has_cache_baked_guide_get, FluidDomainSettings_has_cache_baked_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_any = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_any, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_guide,
	-1, "is_cache_baking_any", 3, 0, 0, 0, 0, "is_cache_baking_any",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_is_cache_baking_any_get, FluidDomainSettings_is_cache_baking_any_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_any = {
	{(PropertyRNA *)&rna_FluidDomainSettings_export_manta_script, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_any,
	-1, "has_cache_baked_any", 3, 0, 0, 0, 0, "has_cache_baked_any",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_has_cache_baked_any_get, FluidDomainSettings_has_cache_baked_any_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_export_manta_script = {
	{(PropertyRNA *)&rna_FluidDomainSettings_openvdb_cache_compress_type, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_any,
	-1, "export_manta_script", 1, 0, 0, 0, 0, "Export Mantaflow Script",
	"Generate and export Mantaflow script from current domain settings during bake. This is only needed if you plan to analyze the cache (e.g. view grids, velocity vectors, particles) in Mantaflow directly (outside of Blender) after baking the simulation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_export_manta_script_get, FluidDomainSettings_export_manta_script_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_openvdb_cache_compress_type_items[4] = {
	{1, "ZIP", 0, "Zip", "Effective but slow compression"},
	{0, "BLOSC", 0, "Blosc", "Multithreaded compression, similar in size and quality as \'Zip\'"},
	{2, "NONE", 0, "None", "Do not use any compression"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_openvdb_cache_compress_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_openvdb_data_depth, (PropertyRNA *)&rna_FluidDomainSettings_export_manta_script,
	-1, "openvdb_cache_compress_type", 3, 0, 0, 4, 0, "Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, openvdb_compression), (RawPropertyType)0, nullptr},
	FluidDomainSettings_openvdb_cache_compress_type_get, FluidDomainSettings_openvdb_cache_compress_type_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_openvdb_cache_compress_type_items, 3, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_openvdb_data_depth_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_openvdb_data_depth = {
	{(PropertyRNA *)&rna_FluidDomainSettings_time_scale, (PropertyRNA *)&rna_FluidDomainSettings_openvdb_cache_compress_type,
	-1, "openvdb_data_depth", 3, 0, 0, 4, 0, "Data Depth",
	"Bit depth for fluid particles and grids (lower bit values reduce file size)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, openvdb_data_depth), (RawPropertyType)2, nullptr},
	FluidDomainSettings_openvdb_data_depth_get, FluidDomainSettings_openvdb_data_depth_set, rna_Fluid_data_depth_itemf, nullptr, nullptr, rna_FluidDomainSettings_openvdb_data_depth_items, 1, 0
};

FloatPropertyRNA rna_FluidDomainSettings_time_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cfl_condition, (PropertyRNA *)&rna_FluidDomainSettings_openvdb_data_depth,
	-1, "time_scale", 3, 0, 0, 4, 0, "Time Scale",
	"Adjust simulation speed",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, time_scale), (RawPropertyType)5, nullptr},
	FluidDomainSettings_time_scale_get, FluidDomainSettings_time_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_cfl_condition = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_timesteps, (PropertyRNA *)&rna_FluidDomainSettings_time_scale,
	-1, "cfl_condition", 3, 0, 0, 4, 0, "CFL",
	"Maximal velocity per cell (greater CFL numbers will minimize the number of simulation steps and the computation time.)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cfl_condition), (RawPropertyType)5, nullptr},
	FluidDomainSettings_cfl_condition_get, FluidDomainSettings_cfl_condition_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 4.0f, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_timesteps = {
	{(PropertyRNA *)&rna_FluidDomainSettings_timesteps_min, (PropertyRNA *)&rna_FluidDomainSettings_cfl_condition,
	-1, "use_adaptive_timesteps", 3, 0, 0, 0, 0, "Use Adaptive Time Steps",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_adaptive_timesteps_get, FluidDomainSettings_use_adaptive_timesteps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_timesteps_min = {
	{(PropertyRNA *)&rna_FluidDomainSettings_timesteps_max, (PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_timesteps,
	-1, "timesteps_min", 3, 0, 0, 4, 0, "Minimum",
	"Minimum number of simulation steps to perform for one frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, timesteps_minimum), (RawPropertyType)0, nullptr},
	FluidDomainSettings_timesteps_min_get, FluidDomainSettings_timesteps_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 1, 100, 1, 1, nullptr
};

IntPropertyRNA rna_FluidDomainSettings_timesteps_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_slice, (PropertyRNA *)&rna_FluidDomainSettings_timesteps_min,
	-1, "timesteps_max", 3, 0, 0, 4, 0, "Maximum",
	"Maximum number of simulation steps to perform for one frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, timesteps_maximum), (RawPropertyType)0, nullptr},
	FluidDomainSettings_timesteps_max_get, FluidDomainSettings_timesteps_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 1, 100, 1, 4, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_slice = {
	{(PropertyRNA *)&rna_FluidDomainSettings_slice_axis, (PropertyRNA *)&rna_FluidDomainSettings_timesteps_max,
	-1, "use_slice", 3, 0, 0, 0, 0, "Slice",
	"Perform a single slice of the domain object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_slice_get, FluidDomainSettings_use_slice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_slice_axis_items[5] = {
	{0, "AUTO", 0, "Auto", "Adjust slice direction according to the view direction"},
	{1, "X", 0, "X", "Slice along the X axis"},
	{2, "Y", 0, "Y", "Slice along the Y axis"},
	{3, "Z", 0, "Z", "Slice along the Z axis"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_slice_axis = {
	{(PropertyRNA *)&rna_FluidDomainSettings_slice_per_voxel, (PropertyRNA *)&rna_FluidDomainSettings_use_slice,
	-1, "slice_axis", 3, 0, 0, 4, 0, "Axis",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, slice_axis), (RawPropertyType)2, nullptr},
	FluidDomainSettings_slice_axis_get, FluidDomainSettings_slice_axis_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_slice_axis_items, 4, 0
};

FloatPropertyRNA rna_FluidDomainSettings_slice_per_voxel = {
	{(PropertyRNA *)&rna_FluidDomainSettings_slice_depth, (PropertyRNA *)&rna_FluidDomainSettings_slice_axis,
	-1, "slice_per_voxel", 3, 0, 0, 4, 0, "Slice Per Voxel",
	"How many slices per voxel should be generated",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, slice_per_voxel), (RawPropertyType)5, nullptr},
	FluidDomainSettings_slice_per_voxel_get, FluidDomainSettings_slice_per_voxel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 100.0f, 0.1000000015f, 1, 5.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_slice_depth = {
	{(PropertyRNA *)&rna_FluidDomainSettings_display_thickness, (PropertyRNA *)&rna_FluidDomainSettings_slice_per_voxel,
	-1, "slice_depth", 3, 0, 0, 4, 0, "Position",
	"Position of the slice",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, slice_depth), (RawPropertyType)5, nullptr},
	FluidDomainSettings_slice_depth_get, FluidDomainSettings_slice_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_display_thickness = {
	{(PropertyRNA *)&rna_FluidDomainSettings_display_interpolation, (PropertyRNA *)&rna_FluidDomainSettings_slice_depth,
	-1, "display_thickness", 3, 0, 0, 4, 0, "Thickness",
	"Thickness of smoke display in the viewport",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, display_thickness), (RawPropertyType)5, nullptr},
	FluidDomainSettings_display_thickness_get, FluidDomainSettings_display_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 100.0f, 0.0010000000f, 1000.0f, 0.1000000015f, 3, 1.0f, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_display_interpolation_items[4] = {
	{0, "LINEAR", 0, "Linear", "Good smoothness and speed"},
	{1, "CUBIC", 0, "Cubic", "Smoothed high quality interpolation, but slower"},
	{2, "CLOSEST", 0, "Closest", "No interpolation"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_display_interpolation = {
	{(PropertyRNA *)&rna_FluidDomainSettings_show_gridlines, (PropertyRNA *)&rna_FluidDomainSettings_display_thickness,
	-1, "display_interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation method to use for smoke/fire volumes in solid mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, interp_method), (RawPropertyType)2, nullptr},
	FluidDomainSettings_display_interpolation_get, FluidDomainSettings_display_interpolation_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_display_interpolation_items, 3, 0
};

BoolPropertyRNA rna_FluidDomainSettings_show_gridlines = {
	{(PropertyRNA *)&rna_FluidDomainSettings_show_velocity, (PropertyRNA *)&rna_FluidDomainSettings_display_interpolation,
	-1, "show_gridlines", 3, 0, 0, 4, 0, "Gridlines",
	"Show gridlines",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, show_gridlines), (RawPropertyType)2, nullptr},
	FluidDomainSettings_show_gridlines_get, FluidDomainSettings_show_gridlines_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_show_velocity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_display_type, (PropertyRNA *)&rna_FluidDomainSettings_show_gridlines,
	-1, "show_velocity", 3, 0, 0, 4, 0, "Vector Display",
	"Visualize vector fields",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, draw_velocity), (RawPropertyType)2, nullptr},
	FluidDomainSettings_show_velocity_get, FluidDomainSettings_show_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_vector_display_type_items[4] = {
	{0, "NEEDLE", 0, "Needle", "Display vectors as needles"},
	{1, "STREAMLINE", 0, "Streamlines", "Display vectors as streamlines"},
	{2, "MAC", 0, "MAC Grid", "Display vector field as MAC grid"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_vector_display_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_field, (PropertyRNA *)&rna_FluidDomainSettings_show_velocity,
	-1, "vector_display_type", 3, 0, 0, 4, 0, "Display Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_draw_type), (RawPropertyType)2, nullptr},
	FluidDomainSettings_vector_display_type_get, FluidDomainSettings_vector_display_type_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_vector_display_type_items, 3, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_vector_field_items[4] = {
	{0, "FLUID_VELOCITY", 0, "Fluid Velocity", "Velocity field of the fluid domain"},
	{1, "GUIDE_VELOCITY", 0, "Guide Velocity", "Guide velocity field of the fluid domain"},
	{2, "FORCE", 0, "Force", "Force field of the fluid domain"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_vector_field = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_scale_with_magnitude, (PropertyRNA *)&rna_FluidDomainSettings_vector_display_type,
	-1, "vector_field", 3, 0, 0, 4, 0, "Field",
	"Vector field to be represented by the display vectors",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_field), (RawPropertyType)2, nullptr},
	FluidDomainSettings_vector_field_get, FluidDomainSettings_vector_field_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_vector_field_items, 3, 0
};

BoolPropertyRNA rna_FluidDomainSettings_vector_scale_with_magnitude = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_x, (PropertyRNA *)&rna_FluidDomainSettings_vector_field,
	-1, "vector_scale_with_magnitude", 3, 0, 0, 4, 0, "Magnitude",
	"Scale vectors with their magnitudes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_scale_with_magnitude), (RawPropertyType)2, nullptr},
	FluidDomainSettings_vector_scale_with_magnitude_get, FluidDomainSettings_vector_scale_with_magnitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_x = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_y, (PropertyRNA *)&rna_FluidDomainSettings_vector_scale_with_magnitude,
	-1, "vector_show_mac_x", 3, 0, 0, 0, 0, "X",
	"Show X-component of MAC Grid",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_vector_show_mac_x_get, FluidDomainSettings_vector_show_mac_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_y = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_z, (PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_x,
	-1, "vector_show_mac_y", 3, 0, 0, 0, 0, "Y",
	"Show Y-component of MAC Grid",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_vector_show_mac_y_get, FluidDomainSettings_vector_show_mac_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_z = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_scale, (PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_y,
	-1, "vector_show_mac_z", 3, 0, 0, 0, 0, "Z",
	"Show Z-component of MAC Grid",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_vector_show_mac_z_get, FluidDomainSettings_vector_show_mac_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_vector_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_color_ramp, (PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_z,
	-1, "vector_scale", 3, 0, 0, 4, 0, "Scale",
	"Multiplier for scaling the vectors",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_scale), (RawPropertyType)5, nullptr},
	FluidDomainSettings_vector_scale_get, FluidDomainSettings_vector_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 1000.0f, 0.1000000015f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_FluidDomainSettings_use_color_ramp = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field, (PropertyRNA *)&rna_FluidDomainSettings_vector_scale,
	-1, "use_color_ramp", 3, 0, 0, 0, 0, "Grid Display",
	"Render a simulation field while mapping its voxels values to the colors of a ramp or using a predefined color code",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_use_color_ramp_get, FluidDomainSettings_use_color_ramp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_color_ramp_field_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_color_ramp_field = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field_scale, (PropertyRNA *)&rna_FluidDomainSettings_use_color_ramp,
	-1, "color_ramp_field", 3, 0, 0, 4, 0, "Field",
	"Simulation field to color map",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, coba_field), (RawPropertyType)2, nullptr},
	FluidDomainSettings_color_ramp_field_get, FluidDomainSettings_color_ramp_field_set, rna_Fluid_cobafield_itemf, nullptr, nullptr, rna_FluidDomainSettings_color_ramp_field_items, 1, 0
};

FloatPropertyRNA rna_FluidDomainSettings_color_ramp_field_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_ramp, (PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field,
	-1, "color_ramp_field_scale", 3, 0, 0, 4, 0, "Scale",
	"Multiplier for scaling the selected field to color map",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, grid_scale), (RawPropertyType)5, nullptr},
	FluidDomainSettings_color_ramp_field_scale_get, FluidDomainSettings_color_ramp_field_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1000.0f, 0.0010000000f, 100000.0f, 0.1000000015f, 3, 1.0f, nullptr
};

PointerPropertyRNA rna_FluidDomainSettings_color_ramp = {
	{(PropertyRNA *)&rna_FluidDomainSettings_clipping, (PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field_scale,
	-1, "color_ramp", 8388608, 0, 0, 0, 0, "Color Ramp",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidDomainSettings_color_ramp_get, nullptr, nullptr, nullptr,&RNA_ColorRamp
};

FloatPropertyRNA rna_FluidDomainSettings_clipping = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_color_field, (PropertyRNA *)&rna_FluidDomainSettings_color_ramp,
	-1, "clipping", 3, 0, 0, 4, 0, "Clipping",
	"Value under which voxels are considered empty space to optimize rendering",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, clipping), (RawPropertyType)5, nullptr},
	FluidDomainSettings_clipping_get, FluidDomainSettings_clipping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 6, 0.0000010000f, nullptr
};

static const EnumPropertyItem rna_FluidDomainSettings_gridlines_color_field_items[4] = {
	{0, "NONE", 0, "None", "None"},
	{1, "FLAGS", 0, "Flags", "Flag grid of the fluid domain"},
	{2, "RANGE", 0, "Highlight Range", "Highlight the voxels with values of the color mapped field within the range"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_gridlines_color_field = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_lower_bound, (PropertyRNA *)&rna_FluidDomainSettings_clipping,
	-1, "gridlines_color_field", 3, 0, 0, 4, 0, "Color Gridlines",
	"Simulation field to color map onto gridlines",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_color_field), (RawPropertyType)2, nullptr},
	FluidDomainSettings_gridlines_color_field_get, FluidDomainSettings_gridlines_color_field_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_gridlines_color_field_items, 3, 0
};

FloatPropertyRNA rna_FluidDomainSettings_gridlines_lower_bound = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_upper_bound, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_color_field,
	-1, "gridlines_lower_bound", 3, 0, 0, 4, 0, "Lower Bound",
	"Lower bound of the highlighting range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_lower_bound), (RawPropertyType)5, nullptr},
	FluidDomainSettings_gridlines_lower_bound_get, FluidDomainSettings_gridlines_lower_bound_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, 0.0f, nullptr
};

FloatPropertyRNA rna_FluidDomainSettings_gridlines_upper_bound = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_range_color, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_lower_bound,
	-1, "gridlines_upper_bound", 3, 0, 0, 4, 0, "Upper Bound",
	"Upper bound of the highlighting range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_upper_bound), (RawPropertyType)5, nullptr},
	FluidDomainSettings_gridlines_upper_bound_get, FluidDomainSettings_gridlines_upper_bound_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, 1.0f, nullptr
};

static float rna_FluidDomainSettings_gridlines_range_color_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_FluidDomainSettings_gridlines_range_color = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_cell_filter, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_upper_bound,
	-1, "gridlines_range_color", 3, 0, 0, 4, 0, "Color",
	"Color used to highlight the range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	nullptr, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_range_color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidDomainSettings_gridlines_range_color_get, FluidDomainSettings_gridlines_range_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_gridlines_range_color_default
};

static const EnumPropertyItem rna_FluidDomainSettings_gridlines_cell_filter_items[7] = {
	{0, "NONE", 0, "None", "Highlight the cells regardless of their type"},
	{1, "FLUID", 0, "Fluid", "Highlight only the cells of type Fluid"},
	{2, "OBSTACLE", 0, "Obstacle", "Highlight only the cells of type Obstacle"},
	{4, "EMPTY", 0, "Empty", "Highlight only the cells of type Empty"},
	{8, "INFLOW", 0, "Inflow", "Highlight only the cells of type Inflow"},
	{16, "OUTFLOW", 0, "Outflow", "Highlight only the cells of type Outflow"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidDomainSettings_gridlines_cell_filter = {
	{(PropertyRNA *)&rna_FluidDomainSettings_velocity_scale, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_range_color,
	-1, "gridlines_cell_filter", 3, 0, 0, 4, 0, "Cell Type",
	"Cell type to be highlighted",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_cell_filter), (RawPropertyType)2, nullptr},
	FluidDomainSettings_gridlines_cell_filter_get, FluidDomainSettings_gridlines_cell_filter_set, nullptr, nullptr, nullptr, rna_FluidDomainSettings_gridlines_cell_filter_items, 6, 0
};

FloatPropertyRNA rna_FluidDomainSettings_velocity_scale = {
	{nullptr, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_cell_filter,
	-1, "velocity_scale", 3, 0, 0, 4, 0, "Velocity Scale",
	"Factor to control the amount of motion blur",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, velocity_scale), (RawPropertyType)5, nullptr},
	FluidDomainSettings_velocity_scale_get, FluidDomainSettings_velocity_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

StructRNA RNA_FluidDomainSettings = {
	{(ContainerRNA *)&RNA_FluidFlowSettings, (ContainerRNA *)&RNA_BlendDataVolumes,
	nullptr,
	{(PropertyRNA *)&rna_FluidDomainSettings_rna_properties, (PropertyRNA *)&rna_FluidDomainSettings_velocity_scale}},
	"FluidDomainSettings", nullptr, nullptr, 516, nullptr, "Domain Settings",
	"Fluid domain settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FluidDomainSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_FluidDomainSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Flow Settings */
CollectionPropertyRNA rna_FluidFlowSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidFlowSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_rna_properties_begin, FluidFlowSettings_rna_properties_next, FluidFlowSettings_rna_properties_end, FluidFlowSettings_rna_properties_get, nullptr, nullptr, FluidFlowSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FluidFlowSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidFlowSettings_density, (PropertyRNA *)&rna_FluidFlowSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_FluidFlowSettings_density = {
	{(PropertyRNA *)&rna_FluidFlowSettings_smoke_color, (PropertyRNA *)&rna_FluidFlowSettings_rna_type,
	-1, "density", 3, 0, 0, 4, 0, "Density",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, density), (RawPropertyType)5, nullptr},
	FluidFlowSettings_density_get, FluidFlowSettings_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 4, 1.0f, nullptr
};

static float rna_FluidFlowSettings_smoke_color_default[3] = {
	0.6999999881f,
	0.6999999881f,
	0.6999999881f
};

FloatPropertyRNA rna_FluidFlowSettings_smoke_color = {
	{(PropertyRNA *)&rna_FluidFlowSettings_fuel_amount, (PropertyRNA *)&rna_FluidFlowSettings_density,
	-1, "smoke_color", 3, 0, 0, 4, 0, "Smoke Color",
	"Color of smoke",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR_GAMMA | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, color), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidFlowSettings_smoke_color_get, FluidFlowSettings_smoke_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidFlowSettings_smoke_color_default
};

FloatPropertyRNA rna_FluidFlowSettings_fuel_amount = {
	{(PropertyRNA *)&rna_FluidFlowSettings_temperature, (PropertyRNA *)&rna_FluidFlowSettings_smoke_color,
	-1, "fuel_amount", 3, 0, 0, 4, 0, "Flame Rate",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, fuel_amount), (RawPropertyType)5, nullptr},
	FluidFlowSettings_fuel_amount_get, FluidFlowSettings_fuel_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 4, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_temperature = {
	{(PropertyRNA *)&rna_FluidFlowSettings_particle_system, (PropertyRNA *)&rna_FluidFlowSettings_fuel_amount,
	-1, "temperature", 3, 0, 0, 4, 0, "Temperature Difference",
	"Temperature difference to ambient temperature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, temperature), (RawPropertyType)5, nullptr},
	FluidFlowSettings_temperature_get, FluidFlowSettings_temperature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 1, 1.0f, nullptr
};

PointerPropertyRNA rna_FluidFlowSettings_particle_system = {
	{(PropertyRNA *)&rna_FluidFlowSettings_flow_type, (PropertyRNA *)&rna_FluidFlowSettings_temperature,
	-1, "particle_system", 8388609, 0, 0, 0, 0, "Particle Systems",
	"Particle systems emitted from the object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_particle_system_get, FluidFlowSettings_particle_system_set, nullptr, nullptr,&RNA_ParticleSystem
};

static const EnumPropertyItem rna_FluidFlowSettings_flow_type_items[5] = {
	{1, "SMOKE", 0, "Smoke", "Add smoke"},
	{3, "BOTH", 0, "Fire + Smoke", "Add fire and smoke"},
	{2, "FIRE", 0, "Fire", "Add fire"},
	{4, "LIQUID", 0, "Liquid", "Add liquid"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidFlowSettings_flow_type = {
	{(PropertyRNA *)&rna_FluidFlowSettings_flow_behavior, (PropertyRNA *)&rna_FluidFlowSettings_particle_system,
	-1, "flow_type", 3, 0, 0, 0, 0, "Flow Type",
	"Change type of fluid in the simulation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_flow_type_get, FluidFlowSettings_flow_type_set, nullptr, nullptr, nullptr, rna_FluidFlowSettings_flow_type_items, 4, 1
};

static const EnumPropertyItem rna_FluidFlowSettings_flow_behavior_items[4] = {
	{0, "INFLOW", 0, "Inflow", "Add fluid to simulation"},
	{1, "OUTFLOW", 0, "Outflow", "Delete fluid from simulation"},
	{2, "GEOMETRY", 0, "Geometry", "Only use given geometry for fluid"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidFlowSettings_flow_behavior = {
	{(PropertyRNA *)&rna_FluidFlowSettings_flow_source, (PropertyRNA *)&rna_FluidFlowSettings_flow_type,
	-1, "flow_behavior", 3, 0, 0, 4, 0, "Flow Behavior",
	"Change flow behavior in the simulation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, behavior), (RawPropertyType)1, nullptr},
	FluidFlowSettings_flow_behavior_get, FluidFlowSettings_flow_behavior_set, nullptr, nullptr, nullptr, rna_FluidFlowSettings_flow_behavior_items, 3, 2
};

static const EnumPropertyItem rna_FluidFlowSettings_flow_source_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidFlowSettings_flow_source = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_absolute, (PropertyRNA *)&rna_FluidFlowSettings_flow_behavior,
	-1, "flow_source", 3, 0, 0, 0, 0, "Source",
	"Change how fluid is emitted",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_flow_source_get, FluidFlowSettings_flow_source_set, rna_Fluid_flowsource_itemf, nullptr, nullptr, rna_FluidFlowSettings_flow_source_items, 1, 0
};

BoolPropertyRNA rna_FluidFlowSettings_use_absolute = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_initial_velocity, (PropertyRNA *)&rna_FluidFlowSettings_flow_source,
	-1, "use_absolute", 3, 0, 0, 0, 0, "Absolute Density",
	"Only allow given density value in emitter area and will not add up",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_use_absolute_get, FluidFlowSettings_use_absolute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_FluidFlowSettings_use_initial_velocity = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_factor, (PropertyRNA *)&rna_FluidFlowSettings_use_absolute,
	-1, "use_initial_velocity", 3, 0, 0, 0, 0, "Initial Velocity",
	"Fluid has some initial velocity when it is emitted",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_use_initial_velocity_get, FluidFlowSettings_use_initial_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_factor = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_normal, (PropertyRNA *)&rna_FluidFlowSettings_use_initial_velocity,
	-1, "velocity_factor", 3, 0, 0, 4, 0, "Source",
	"Multiplier of source velocity passed to fluid (source velocity is non-zero only if object is moving)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_multi), (RawPropertyType)5, nullptr},
	FluidFlowSettings_velocity_factor_get, FluidFlowSettings_velocity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_normal = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_random, (PropertyRNA *)&rna_FluidFlowSettings_velocity_factor,
	-1, "velocity_normal", 3, 0, 0, 4, 0, "Normal",
	"Amount of normal directional velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_normal), (RawPropertyType)5, nullptr},
	FluidFlowSettings_velocity_normal_get, FluidFlowSettings_velocity_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_random = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_coord, (PropertyRNA *)&rna_FluidFlowSettings_velocity_normal,
	-1, "velocity_random", 3, 0, 0, 4, 0, "Random",
	"Amount of random velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_random), (RawPropertyType)5, nullptr},
	FluidFlowSettings_velocity_random_get, FluidFlowSettings_velocity_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 10.0f, 0.0500000007f, 5, 0.0f, nullptr
};

static float rna_FluidFlowSettings_velocity_coord_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_coord = {
	{(PropertyRNA *)&rna_FluidFlowSettings_volume_density, (PropertyRNA *)&rna_FluidFlowSettings_velocity_random,
	-1, "velocity_coord", 3, 0, 0, 4, 0, "Initial",
	"Additional initial velocity in X, Y and Z direction (added to source velocity)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_VELOCITY | (int)PROP_UNIT_VELOCITY), nullptr, 1, {3, 0, 0}, 3,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_coord), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FluidFlowSettings_velocity_coord_get, FluidFlowSettings_velocity_coord_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_FluidFlowSettings_velocity_coord_default
};

FloatPropertyRNA rna_FluidFlowSettings_volume_density = {
	{(PropertyRNA *)&rna_FluidFlowSettings_surface_distance, (PropertyRNA *)&rna_FluidFlowSettings_velocity_coord,
	-1, "volume_density", 3, 0, 0, 4, 0, "Volume Emission",
	"Controls fluid emission from within the mesh (higher value results in greater emissions from inside the mesh)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, volume_density), (RawPropertyType)5, nullptr},
	FluidFlowSettings_volume_density_get, FluidFlowSettings_volume_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_surface_distance = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_plane_init, (PropertyRNA *)&rna_FluidFlowSettings_volume_density,
	-1, "surface_distance", 3, 0, 0, 4, 0, "Surface Emission",
	"Controls fluid emission from the mesh surface (higher value results in emission further away from the mesh surface",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, surface_distance), (RawPropertyType)5, nullptr},
	FluidFlowSettings_surface_distance_get, FluidFlowSettings_surface_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 0.0500000007f, 5, 1.5000000000f, nullptr
};

BoolPropertyRNA rna_FluidFlowSettings_use_plane_init = {
	{(PropertyRNA *)&rna_FluidFlowSettings_particle_size, (PropertyRNA *)&rna_FluidFlowSettings_surface_distance,
	-1, "use_plane_init", 3, 0, 0, 0, 0, "Is Planar",
	"Treat this object as a planar and unclosed mesh. Fluid will only be emitted from the mesh surface and based on the surface emission value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_use_plane_init_get, FluidFlowSettings_use_plane_init_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_particle_size = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_particle_size, (PropertyRNA *)&rna_FluidFlowSettings_use_plane_init,
	-1, "particle_size", 3, 0, 0, 4, 0, "Size",
	"Particle size in simulation cells",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, particle_size), (RawPropertyType)5, nullptr},
	FluidFlowSettings_particle_size_get, FluidFlowSettings_particle_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 5.0f, 0.1000000015f, FLT_MAX, 0.0500000007f, 5, 1.0f, nullptr
};

BoolPropertyRNA rna_FluidFlowSettings_use_particle_size = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_inflow, (PropertyRNA *)&rna_FluidFlowSettings_particle_size,
	-1, "use_particle_size", 3, 0, 0, 0, 0, "Set Size",
	"Set particle size in simulation cells or use nearest cell",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_use_particle_size_get, FluidFlowSettings_use_particle_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_FluidFlowSettings_use_inflow = {
	{(PropertyRNA *)&rna_FluidFlowSettings_subframes, (PropertyRNA *)&rna_FluidFlowSettings_use_particle_size,
	-1, "use_inflow", 3, 0, 0, 0, 0, "Use Flow",
	"Control when to apply fluid flow",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_use_inflow_get, FluidFlowSettings_use_inflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

IntPropertyRNA rna_FluidFlowSettings_subframes = {
	{(PropertyRNA *)&rna_FluidFlowSettings_density_vertex_group, (PropertyRNA *)&rna_FluidFlowSettings_use_inflow,
	-1, "subframes", 3, 0, 0, 4, 0, "Subframes",
	"Number of additional samples to take between frames to improve quality of fast moving flows",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, subframes), (RawPropertyType)0, nullptr},
	FluidFlowSettings_subframes_get, FluidFlowSettings_subframes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 200, 1, 0, nullptr
};

StringPropertyRNA rna_FluidFlowSettings_density_vertex_group = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_texture, (PropertyRNA *)&rna_FluidFlowSettings_subframes,
	-1, "density_vertex_group", 262145, 0, 0, 0, 0, "Vertex Group",
	"Name of vertex group which determines surface emission rate",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_density_vertex_group_get, FluidFlowSettings_density_vertex_group_length, FluidFlowSettings_density_vertex_group_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_FluidFlowSettings_use_texture = {
	{(PropertyRNA *)&rna_FluidFlowSettings_texture_map_type, (PropertyRNA *)&rna_FluidFlowSettings_density_vertex_group,
	-1, "use_texture", 3, 0, 0, 0, 0, "Use Texture",
	"Use a texture to control emission strength",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_use_texture_get, FluidFlowSettings_use_texture_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FluidFlowSettings_texture_map_type_items[3] = {
	{0, "AUTO", 0, "Generated", "Generated coordinates centered to flow object"},
	{1, "UV", 0, "UV", "Use UV layer for texture coordinates"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidFlowSettings_texture_map_type = {
	{(PropertyRNA *)&rna_FluidFlowSettings_uv_layer, (PropertyRNA *)&rna_FluidFlowSettings_use_texture,
	-1, "texture_map_type", 3, 0, 0, 4, 0, "Mapping",
	"Texture mapping type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, texture_type), (RawPropertyType)1, nullptr},
	FluidFlowSettings_texture_map_type_get, FluidFlowSettings_texture_map_type_set, nullptr, nullptr, nullptr, rna_FluidFlowSettings_texture_map_type_items, 2, 0
};

StringPropertyRNA rna_FluidFlowSettings_uv_layer = {
	{(PropertyRNA *)&rna_FluidFlowSettings_noise_texture, (PropertyRNA *)&rna_FluidFlowSettings_texture_map_type,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_uv_layer_get, FluidFlowSettings_uv_layer_length, FluidFlowSettings_uv_layer_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 68, ""
};

PointerPropertyRNA rna_FluidFlowSettings_noise_texture = {
	{(PropertyRNA *)&rna_FluidFlowSettings_texture_size, (PropertyRNA *)&rna_FluidFlowSettings_uv_layer,
	-1, "noise_texture", 8388801, 0, 0, 0, 0, "Texture",
	"Texture that controls emission strength",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidFlowSettings_noise_texture_get, FluidFlowSettings_noise_texture_set, nullptr, nullptr,&RNA_Texture
};

FloatPropertyRNA rna_FluidFlowSettings_texture_size = {
	{(PropertyRNA *)&rna_FluidFlowSettings_texture_offset, (PropertyRNA *)&rna_FluidFlowSettings_noise_texture,
	-1, "texture_size", 3, 0, 0, 4, 0, "Size",
	"Size of texture mapping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, texture_size), (RawPropertyType)5, nullptr},
	FluidFlowSettings_texture_size_get, FluidFlowSettings_texture_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5.0f, 0.0099999998f, 10.0f, 0.0500000007f, 5, 1.0f, nullptr
};

FloatPropertyRNA rna_FluidFlowSettings_texture_offset = {
	{nullptr, (PropertyRNA *)&rna_FluidFlowSettings_texture_size,
	-1, "texture_offset", 3, 0, 0, 4, 0, "Offset",
	"Z-offset of texture mapping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, texture_offset), (RawPropertyType)5, nullptr},
	FluidFlowSettings_texture_offset_get, FluidFlowSettings_texture_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 200.0f, 0.0500000007f, 5, 0.0f, nullptr
};

StructRNA RNA_FluidFlowSettings = {
	{(ContainerRNA *)&RNA_FluidEffectorSettings, (ContainerRNA *)&RNA_FluidDomainSettings,
	nullptr,
	{(PropertyRNA *)&rna_FluidFlowSettings_rna_properties, (PropertyRNA *)&rna_FluidFlowSettings_texture_offset}},
	"FluidFlowSettings", nullptr, nullptr, 516, nullptr, "Flow Settings",
	"Fluid flow settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FluidFlowSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_FluidFlowSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Effector Settings */
CollectionPropertyRNA rna_FluidEffectorSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidEffectorSettings_rna_properties_begin, FluidEffectorSettings_rna_properties_next, FluidEffectorSettings_rna_properties_end, FluidEffectorSettings_rna_properties_get, nullptr, nullptr, FluidEffectorSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FluidEffectorSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_effector_type, (PropertyRNA *)&rna_FluidEffectorSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidEffectorSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_FluidEffectorSettings_effector_type_items[3] = {
	{0, "COLLISION", 0, "Collision", "Create collision object"},
	{1, "GUIDE", 0, "Guide", "Create guide object"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidEffectorSettings_effector_type = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_surface_distance, (PropertyRNA *)&rna_FluidEffectorSettings_rna_type,
	-1, "effector_type", 3, 0, 0, 4, 0, "Effector Type",
	"Change type of effector in the simulation",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, type), (RawPropertyType)1, nullptr},
	FluidEffectorSettings_effector_type_get, FluidEffectorSettings_effector_type_set, nullptr, nullptr, nullptr, rna_FluidEffectorSettings_effector_type_items, 2, 0
};

FloatPropertyRNA rna_FluidEffectorSettings_surface_distance = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_use_plane_init, (PropertyRNA *)&rna_FluidEffectorSettings_effector_type,
	-1, "surface_distance", 3, 0, 0, 4, 0, "Surface",
	"Additional distance around mesh surface to consider as effector",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, surface_distance), (RawPropertyType)5, nullptr},
	FluidEffectorSettings_surface_distance_get, FluidEffectorSettings_surface_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 0.0500000007f, 5, 0.0f, nullptr
};

BoolPropertyRNA rna_FluidEffectorSettings_use_plane_init = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_velocity_factor, (PropertyRNA *)&rna_FluidEffectorSettings_surface_distance,
	-1, "use_plane_init", 3, 0, 0, 0, 0, "Is Planar",
	"Treat this object as a planar, unclosed mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidEffectorSettings_use_plane_init_get, FluidEffectorSettings_use_plane_init_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FluidEffectorSettings_velocity_factor = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_guide_mode, (PropertyRNA *)&rna_FluidEffectorSettings_use_plane_init,
	-1, "velocity_factor", 3, 0, 0, 4, 0, "Source",
	"Multiplier of obstacle velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, vel_multi), (RawPropertyType)5, nullptr},
	FluidEffectorSettings_velocity_factor_get, FluidEffectorSettings_velocity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 1.0f, nullptr
};

static const EnumPropertyItem rna_FluidEffectorSettings_guide_mode_items[5] = {
	{0, "MAXIMUM", 0, "Maximize", "Compare velocities from previous frame with new velocities from current frame and keep the maximum"},
	{1, "MINIMUM", 0, "Minimize", "Compare velocities from previous frame with new velocities from current frame and keep the minimum"},
	{2, "OVERRIDE", 0, "Override", "Always write new guide velocities for every frame (each frame only contains current velocities from guiding objects)"},
	{3, "AVERAGED", 0, "Averaged", "Take average of velocities from previous frame and new velocities from current frame"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FluidEffectorSettings_guide_mode = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_use_effector, (PropertyRNA *)&rna_FluidEffectorSettings_velocity_factor,
	-1, "guide_mode", 3, 0, 0, 4, 0, "Guiding mode",
	"How to create guiding velocities",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, guide_mode), (RawPropertyType)1, nullptr},
	FluidEffectorSettings_guide_mode_get, FluidEffectorSettings_guide_mode_set, nullptr, nullptr, nullptr, rna_FluidEffectorSettings_guide_mode_items, 4, 2
};

BoolPropertyRNA rna_FluidEffectorSettings_use_effector = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_subframes, (PropertyRNA *)&rna_FluidEffectorSettings_guide_mode,
	-1, "use_effector", 3, 0, 0, 0, 0, "Enabled",
	"Control when to apply the effector",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FluidEffectorSettings_use_effector_get, FluidEffectorSettings_use_effector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

IntPropertyRNA rna_FluidEffectorSettings_subframes = {
	{nullptr, (PropertyRNA *)&rna_FluidEffectorSettings_use_effector,
	-1, "subframes", 3, 0, 0, 4, 0, "Subframes",
	"Number of additional samples to take between frames to improve quality of fast moving effector objects",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, subframes), (RawPropertyType)0, nullptr},
	FluidEffectorSettings_subframes_get, FluidEffectorSettings_subframes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10, 0, 200, 1, 0, nullptr
};

StructRNA RNA_FluidEffectorSettings = {
	{(ContainerRNA *)&RNA_Material, (ContainerRNA *)&RNA_FluidFlowSettings,
	nullptr,
	{(PropertyRNA *)&rna_FluidEffectorSettings_rna_properties, (PropertyRNA *)&rna_FluidEffectorSettings_subframes}},
	"FluidEffectorSettings", nullptr, nullptr, 516, nullptr, "Effector Settings",
	"Smoke collision settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FluidEffectorSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_FluidEffectorSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

