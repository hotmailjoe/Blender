
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

#include "rna_object_force.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_PointCache_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PointCache_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_PointCache_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_PointCache_frame_end;
RNA_EXTERN_C IntPropertyRNA rna_PointCache_frame_step;
RNA_EXTERN_C IntPropertyRNA rna_PointCache_index;
RNA_EXTERN_C EnumPropertyRNA rna_PointCache_compression;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_is_baked;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_is_baking;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_use_disk_cache;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_is_outdated;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_is_frame_skip;
RNA_EXTERN_C StringPropertyRNA rna_PointCache_name;
RNA_EXTERN_C StringPropertyRNA rna_PointCache_filepath;
RNA_EXTERN_C StringPropertyRNA rna_PointCache_info;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_use_external;
RNA_EXTERN_C BoolPropertyRNA rna_PointCache_use_library_path;
RNA_EXTERN_C CollectionPropertyRNA rna_PointCache_point_caches;


RNA_EXTERN_C CollectionPropertyRNA rna_PointCaches_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PointCaches_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_PointCaches_active_index;


RNA_EXTERN_C CollectionPropertyRNA rna_PointCacheItem_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PointCacheItem_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_PointCacheItem_frame_start;
RNA_EXTERN_C IntPropertyRNA rna_PointCacheItem_frame_end;
RNA_EXTERN_C IntPropertyRNA rna_PointCacheItem_frame_step;
RNA_EXTERN_C IntPropertyRNA rna_PointCacheItem_index;
RNA_EXTERN_C EnumPropertyRNA rna_PointCacheItem_compression;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_is_baked;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_is_baking;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_use_disk_cache;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_is_outdated;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_is_frame_skip;
RNA_EXTERN_C StringPropertyRNA rna_PointCacheItem_name;
RNA_EXTERN_C StringPropertyRNA rna_PointCacheItem_filepath;
RNA_EXTERN_C StringPropertyRNA rna_PointCacheItem_info;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_use_external;
RNA_EXTERN_C BoolPropertyRNA rna_PointCacheItem_use_library_path;


RNA_EXTERN_C CollectionPropertyRNA rna_CollisionSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CollisionSettings_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_CollisionSettings_use;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_damping_factor;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_damping_random;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_friction_factor;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_friction_random;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_permeability;
RNA_EXTERN_C BoolPropertyRNA rna_CollisionSettings_use_particle_kill;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_stickiness;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_thickness_inner;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_thickness_outer;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_damping;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_absorption;
RNA_EXTERN_C FloatPropertyRNA rna_CollisionSettings_cloth_friction;
RNA_EXTERN_C BoolPropertyRNA rna_CollisionSettings_use_culling;
RNA_EXTERN_C BoolPropertyRNA rna_CollisionSettings_use_normal;


RNA_EXTERN_C CollectionPropertyRNA rna_EffectorWeights_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_EffectorWeights_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_EffectorWeights_apply_to_hair_growing;
RNA_EXTERN_C PointerPropertyRNA rna_EffectorWeights_collection;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_gravity;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_all;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_force;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_vortex;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_magnetic;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_wind;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_curve_guide;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_texture;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_harmonic;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_charge;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_lennardjones;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_boid;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_turbulence;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_drag;
RNA_EXTERN_C FloatPropertyRNA rna_EffectorWeights_smokeflow;


RNA_EXTERN_C CollectionPropertyRNA rna_FieldSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FieldSettings_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_type;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_shape;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_falloff_type;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_texture_mode;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_z_direction;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_strength;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_linear_drag;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_harmonic_damping;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_quadratic_drag;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_flow;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_wind_factor;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_inflow;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_size;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_rest_length;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_falloff_power;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_distance_min;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_distance_max;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_radial_min;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_radial_max;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_radial_falloff;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_texture_nabla;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_noise;
RNA_EXTERN_C IntPropertyRNA rna_FieldSettings_seed;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_min_distance;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_max_distance;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_radial_min;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_radial_max;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_object_coords;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_global_coords;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_2d_force;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_root_coords;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_apply_to_location;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_apply_to_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_absorption;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_multiple_springs;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_smoke_density;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_gravity_falloff;
RNA_EXTERN_C PointerPropertyRNA rna_FieldSettings_texture;
RNA_EXTERN_C PointerPropertyRNA rna_FieldSettings_source_object;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_minimum;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_free;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_guide_path_add;
RNA_EXTERN_C BoolPropertyRNA rna_FieldSettings_use_guide_path_weight;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_clump_amount;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_clump_shape;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_guide_kink_type;
RNA_EXTERN_C EnumPropertyRNA rna_FieldSettings_guide_kink_axis;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_kink_frequency;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_kink_shape;
RNA_EXTERN_C FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude;


RNA_EXTERN_C CollectionPropertyRNA rna_SoftBodySettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_SoftBodySettings_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_friction;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_mass;
RNA_EXTERN_C StringPropertyRNA rna_SoftBodySettings_vertex_group_mass;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_gravity;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_speed;
RNA_EXTERN_C StringPropertyRNA rna_SoftBodySettings_vertex_group_goal;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_goal_min;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_goal_max;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_goal_default;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_goal_spring;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_goal_friction;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_pull;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_push;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_damping;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_spring_length;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_aero;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_plastic;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_bend;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_shear;
RNA_EXTERN_C StringPropertyRNA rna_SoftBodySettings_vertex_group_spring;
RNA_EXTERN_C EnumPropertyRNA rna_SoftBodySettings_collision_type;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_ball_size;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_ball_stiff;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_ball_damp;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_error_threshold;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_step_min;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_step_max;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_choke;
RNA_EXTERN_C IntPropertyRNA rna_SoftBodySettings_fuzzy;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_auto_step;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_diagnose;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_estimate_matrix;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_location_mass_center;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_rotation_estimate;
RNA_EXTERN_C FloatPropertyRNA rna_SoftBodySettings_scale_estimate;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_goal;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_edges;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_stiff_quads;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_edge_collision;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_face_collision;
RNA_EXTERN_C EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type;
RNA_EXTERN_C BoolPropertyRNA rna_SoftBodySettings_use_self_collision;
RNA_EXTERN_C PointerPropertyRNA rna_SoftBodySettings_collision_collection;
RNA_EXTERN_C PointerPropertyRNA rna_SoftBodySettings_effector_weights;

static PointerRNA PointCache_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PointCache_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCache_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCache_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PointCache_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PointCache_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PointCache_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PointCache_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PointCache_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PointCache_frame_start_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->startframe);
}

RNA_EXTERN_C void PointCache_frame_start_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->startframe = (std::remove_reference_t<decltype(data->startframe)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->startframe = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int PointCache_frame_end_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->endframe);
}

RNA_EXTERN_C void PointCache_frame_end_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->endframe = (std::remove_reference_t<decltype(data->endframe)>)CLAMPIS(value, 1, 1048574);
#else
    data->endframe = CLAMPIS(value, 1, 1048574);
#endif
}

RNA_EXTERN_C int PointCache_frame_step_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->step);
}

RNA_EXTERN_C void PointCache_frame_step_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_PointCache_frame_step_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->step = (std::remove_reference_t<decltype(data->step)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->step = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C int PointCache_index_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->index);
}

RNA_EXTERN_C void PointCache_index_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->index = (std::remove_reference_t<decltype(data->index)>)CLAMPIS(value, -1, 100);
#else
    data->index = CLAMPIS(value, -1, 100);
#endif
}

RNA_EXTERN_C int PointCache_compression_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->compression);
}

RNA_EXTERN_C void PointCache_compression_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->compression = (std::remove_reference_t<decltype(data->compression)>)value;
#else
    data->compression = value;
#endif
}

RNA_EXTERN_C bool PointCache_is_baked_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool PointCache_is_baking_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C bool PointCache_use_disk_cache_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void PointCache_use_disk_cache_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool PointCache_is_outdated_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C bool PointCache_is_frame_skip_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void PointCache_name_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int PointCache_name_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void PointCache_name_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C void PointCache_filepath_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->path) < 1024);
    strcpy(value, data->path);
}

RNA_EXTERN_C int PointCache_filepath_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->path);
}

RNA_EXTERN_C void PointCache_filepath_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(data->path, value, 1024);
}

RNA_EXTERN_C void PointCache_info_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->info) < 128);
    strcpy(value, data->info);
}

RNA_EXTERN_C int PointCache_info_length(PointerRNA *ptr)
{
    return rna_Cache_info_length(ptr);
}

RNA_EXTERN_C bool PointCache_use_external_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void PointCache_use_external_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool PointCache_use_library_path_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return !(((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void PointCache_use_library_path_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (!value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

static PointerRNA PointCache_point_caches_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PointCacheItem, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void PointCache_point_caches_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCache_point_caches;

    rna_Cache_list_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCache_point_caches_get(iter);
    }
}

RNA_EXTERN_C void PointCache_point_caches_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = PointCache_point_caches_get(iter);
    }
}

RNA_EXTERN_C void PointCache_point_caches_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA PointCaches_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PointCaches_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCaches_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCaches_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PointCaches_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PointCaches_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PointCaches_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PointCaches_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PointCaches_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PointCaches_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Cache_active_point_cache_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void PointCaches_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Cache_active_point_cache_index_set;
    fn(ptr, value);
}

static PointerRNA PointCacheItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PointCacheItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCacheItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCacheItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PointCacheItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PointCacheItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PointCacheItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PointCacheItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PointCacheItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PointCacheItem_frame_start_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->startframe);
}

RNA_EXTERN_C void PointCacheItem_frame_start_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->startframe = (std::remove_reference_t<decltype(data->startframe)>)CLAMPIS(value, -1048574, 1048574);
#else
    data->startframe = CLAMPIS(value, -1048574, 1048574);
#endif
}

RNA_EXTERN_C int PointCacheItem_frame_end_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->endframe);
}

RNA_EXTERN_C void PointCacheItem_frame_end_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->endframe = (std::remove_reference_t<decltype(data->endframe)>)CLAMPIS(value, 1, 1048574);
#else
    data->endframe = CLAMPIS(value, 1, 1048574);
#endif
}

RNA_EXTERN_C int PointCacheItem_frame_step_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->step);
}

RNA_EXTERN_C void PointCacheItem_frame_step_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_PointCache_frame_step_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
#ifdef __cplusplus
    data->step = (std::remove_reference_t<decltype(data->step)>)CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#else
    data->step = CLAMPIS(value, prop_clamp_min, prop_clamp_max);
#endif
}

RNA_EXTERN_C int PointCacheItem_index_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->index);
}

RNA_EXTERN_C void PointCacheItem_index_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->index = (std::remove_reference_t<decltype(data->index)>)CLAMPIS(value, -1, 100);
#else
    data->index = CLAMPIS(value, -1, 100);
#endif
}

RNA_EXTERN_C int PointCacheItem_compression_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->compression);
}

RNA_EXTERN_C void PointCacheItem_compression_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
#ifdef __cplusplus
    data->compression = (std::remove_reference_t<decltype(data->compression)>)value;
#else
    data->compression = value;
#endif
}

RNA_EXTERN_C bool PointCacheItem_is_baked_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C bool PointCacheItem_is_baking_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C bool PointCacheItem_use_disk_cache_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void PointCacheItem_use_disk_cache_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool PointCacheItem_is_outdated_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C bool PointCacheItem_is_frame_skip_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void PointCacheItem_name_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int PointCacheItem_name_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void PointCacheItem_name_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C void PointCacheItem_filepath_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->path) < 1024);
    strcpy(value, data->path);
}

RNA_EXTERN_C int PointCacheItem_filepath_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->path);
}

RNA_EXTERN_C void PointCacheItem_filepath_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(data->path, value, 1024);
}

RNA_EXTERN_C void PointCacheItem_info_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_assert(strlen(data->info) < 128);
    strcpy(value, data->info);
}

RNA_EXTERN_C int PointCacheItem_info_length(PointerRNA *ptr)
{
    return rna_Cache_info_length(ptr);
}

RNA_EXTERN_C bool PointCacheItem_use_external_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void PointCacheItem_use_external_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool PointCacheItem_use_library_path_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return !(((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void PointCacheItem_use_library_path_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (!value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

static PointerRNA CollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollisionSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollisionSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollisionSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CollisionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CollisionSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool CollisionSettings_use_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->deflect) & 1) != 0);
}

RNA_EXTERN_C void CollisionSettings_use_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->deflect |= 1; }
    else { data->deflect &= ~1; }
}

RNA_EXTERN_C float CollisionSettings_damping_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_damp);
}

RNA_EXTERN_C void CollisionSettings_damping_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_damp = (std::remove_reference_t<decltype(data->pdef_damp)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pdef_damp = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_damping_random_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_rdamp);
}

RNA_EXTERN_C void CollisionSettings_damping_random_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_rdamp = (std::remove_reference_t<decltype(data->pdef_rdamp)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pdef_rdamp = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_friction_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_frict);
}

RNA_EXTERN_C void CollisionSettings_friction_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_frict = (std::remove_reference_t<decltype(data->pdef_frict)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pdef_frict = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_friction_random_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_rfrict);
}

RNA_EXTERN_C void CollisionSettings_friction_random_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_rfrict = (std::remove_reference_t<decltype(data->pdef_rfrict)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pdef_rfrict = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_permeability_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_perm);
}

RNA_EXTERN_C void CollisionSettings_permeability_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_perm = (std::remove_reference_t<decltype(data->pdef_perm)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pdef_perm = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool CollisionSettings_use_particle_kill_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void CollisionSettings_use_particle_kill_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C float CollisionSettings_stickiness_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_stickness);
}

RNA_EXTERN_C void CollisionSettings_stickiness_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_stickness = (std::remove_reference_t<decltype(data->pdef_stickness)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->pdef_stickness = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_thickness_inner_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sbift);
}

RNA_EXTERN_C void CollisionSettings_thickness_inner_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_sbift = (std::remove_reference_t<decltype(data->pdef_sbift)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->pdef_sbift = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_thickness_outer_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sboft);
}

RNA_EXTERN_C void CollisionSettings_thickness_outer_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_sboft = (std::remove_reference_t<decltype(data->pdef_sboft)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->pdef_sboft = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_damping_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sbdamp);
}

RNA_EXTERN_C void CollisionSettings_damping_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_sbdamp = (std::remove_reference_t<decltype(data->pdef_sbdamp)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pdef_sbdamp = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_absorption_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->absorption);
}

RNA_EXTERN_C void CollisionSettings_absorption_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->absorption = (std::remove_reference_t<decltype(data->absorption)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->absorption = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float CollisionSettings_cloth_friction_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_cfrict);
}

RNA_EXTERN_C void CollisionSettings_cloth_friction_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->pdef_cfrict = (std::remove_reference_t<decltype(data->pdef_cfrict)>)CLAMPIS(value, 0.0f, 80.0f);
#else
    data->pdef_cfrict = CLAMPIS(value, 0.0f, 80.0f);
#endif
}

RNA_EXTERN_C bool CollisionSettings_use_culling_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

RNA_EXTERN_C void CollisionSettings_use_culling_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

RNA_EXTERN_C bool CollisionSettings_use_normal_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 1048576) != 0);
}

RNA_EXTERN_C void CollisionSettings_use_normal_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 1048576; }
    else { data->flag &= ~1048576; }
}

static PointerRNA EffectorWeights_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void EffectorWeights_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EffectorWeights_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EffectorWeights_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void EffectorWeights_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = EffectorWeights_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void EffectorWeights_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int EffectorWeights_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA EffectorWeights_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool EffectorWeights_apply_to_hair_growing_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void EffectorWeights_apply_to_hair_growing_set(PointerRNA *ptr, bool value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C PointerRNA EffectorWeights_collection_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->group);
}

RNA_EXTERN_C void EffectorWeights_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);

    if (data->group) {
        id_us_min((ID *)data->group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

RNA_EXTERN_C float EffectorWeights_gravity_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->global_gravity);
}

RNA_EXTERN_C void EffectorWeights_gravity_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->global_gravity = (std::remove_reference_t<decltype(data->global_gravity)>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->global_gravity = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_all_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[0]);
}

RNA_EXTERN_C void EffectorWeights_all_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[0] = (std::remove_reference_t<decltype(data->weight[0])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[0] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_force_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[1]);
}

RNA_EXTERN_C void EffectorWeights_force_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[1] = (std::remove_reference_t<decltype(data->weight[1])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[1] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_vortex_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[2]);
}

RNA_EXTERN_C void EffectorWeights_vortex_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[2] = (std::remove_reference_t<decltype(data->weight[2])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[2] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_magnetic_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[3]);
}

RNA_EXTERN_C void EffectorWeights_magnetic_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[3] = (std::remove_reference_t<decltype(data->weight[3])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[3] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_wind_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[4]);
}

RNA_EXTERN_C void EffectorWeights_wind_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[4] = (std::remove_reference_t<decltype(data->weight[4])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[4] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_curve_guide_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[5]);
}

RNA_EXTERN_C void EffectorWeights_curve_guide_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[5] = (std::remove_reference_t<decltype(data->weight[5])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[5] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_texture_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[6]);
}

RNA_EXTERN_C void EffectorWeights_texture_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[6] = (std::remove_reference_t<decltype(data->weight[6])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[6] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_harmonic_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[7]);
}

RNA_EXTERN_C void EffectorWeights_harmonic_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[7] = (std::remove_reference_t<decltype(data->weight[7])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[7] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_charge_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[8]);
}

RNA_EXTERN_C void EffectorWeights_charge_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[8] = (std::remove_reference_t<decltype(data->weight[8])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[8] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_lennardjones_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[9]);
}

RNA_EXTERN_C void EffectorWeights_lennardjones_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[9] = (std::remove_reference_t<decltype(data->weight[9])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[9] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_boid_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[10]);
}

RNA_EXTERN_C void EffectorWeights_boid_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[10] = (std::remove_reference_t<decltype(data->weight[10])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[10] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_turbulence_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[11]);
}

RNA_EXTERN_C void EffectorWeights_turbulence_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[11] = (std::remove_reference_t<decltype(data->weight[11])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[11] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_drag_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[12]);
}

RNA_EXTERN_C void EffectorWeights_drag_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[12] = (std::remove_reference_t<decltype(data->weight[12])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[12] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

RNA_EXTERN_C float EffectorWeights_smokeflow_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[13]);
}

RNA_EXTERN_C void EffectorWeights_smokeflow_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
#ifdef __cplusplus
    data->weight[13] = (std::remove_reference_t<decltype(data->weight[13])>)CLAMPIS(value, -200.0f, 200.0f);
#else
    data->weight[13] = CLAMPIS(value, -200.0f, 200.0f);
#endif
}

static PointerRNA FieldSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FieldSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FieldSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FieldSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FieldSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FieldSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FieldSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FieldSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FieldSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int FieldSettings_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->forcefield);
}

RNA_EXTERN_C void FieldSettings_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_FieldSettings_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int FieldSettings_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->shape);
}

RNA_EXTERN_C void FieldSettings_shape_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->shape = (std::remove_reference_t<decltype(data->shape)>)value;
#else
    data->shape = value;
#endif
}

RNA_EXTERN_C int FieldSettings_falloff_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->falloff);
}

RNA_EXTERN_C void FieldSettings_falloff_type_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)value;
#else
    data->falloff = value;
#endif
}

RNA_EXTERN_C int FieldSettings_texture_mode_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->tex_mode);
}

RNA_EXTERN_C void FieldSettings_texture_mode_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->tex_mode = (std::remove_reference_t<decltype(data->tex_mode)>)value;
#else
    data->tex_mode = value;
#endif
}

RNA_EXTERN_C int FieldSettings_z_direction_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->zdir);
}

RNA_EXTERN_C void FieldSettings_z_direction_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->zdir = (std::remove_reference_t<decltype(data->zdir)>)value;
#else
    data->zdir = value;
#endif
}

RNA_EXTERN_C float FieldSettings_strength_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

RNA_EXTERN_C void FieldSettings_strength_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_strength = (std::remove_reference_t<decltype(data->f_strength)>)value;
#else
    data->f_strength = value;
#endif
}

RNA_EXTERN_C float FieldSettings_linear_drag_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

RNA_EXTERN_C void FieldSettings_linear_drag_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_strength = (std::remove_reference_t<decltype(data->f_strength)>)value;
#else
    data->f_strength = value;
#endif
}

RNA_EXTERN_C float FieldSettings_harmonic_damping_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_damp);
}

RNA_EXTERN_C void FieldSettings_harmonic_damping_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_damp = (std::remove_reference_t<decltype(data->f_damp)>)value;
#else
    data->f_damp = value;
#endif
}

RNA_EXTERN_C float FieldSettings_quadratic_drag_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_damp);
}

RNA_EXTERN_C void FieldSettings_quadratic_drag_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_damp = (std::remove_reference_t<decltype(data->f_damp)>)value;
#else
    data->f_damp = value;
#endif
}

RNA_EXTERN_C float FieldSettings_flow_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_flow);
}

RNA_EXTERN_C void FieldSettings_flow_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_flow = (std::remove_reference_t<decltype(data->f_flow)>)value;
#else
    data->f_flow = value;
#endif
}

RNA_EXTERN_C float FieldSettings_wind_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_wind_factor);
}

RNA_EXTERN_C void FieldSettings_wind_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_wind_factor = (std::remove_reference_t<decltype(data->f_wind_factor)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->f_wind_factor = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_inflow_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_flow);
}

RNA_EXTERN_C void FieldSettings_inflow_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_flow = (std::remove_reference_t<decltype(data->f_flow)>)value;
#else
    data->f_flow = value;
#endif
}

RNA_EXTERN_C float FieldSettings_size_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_size);
}

RNA_EXTERN_C void FieldSettings_size_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_size = (std::remove_reference_t<decltype(data->f_size)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->f_size = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float FieldSettings_rest_length_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_size);
}

RNA_EXTERN_C void FieldSettings_rest_length_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_size = (std::remove_reference_t<decltype(data->f_size)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->f_size = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float FieldSettings_falloff_power_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_power);
}

RNA_EXTERN_C void FieldSettings_falloff_power_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_power = (std::remove_reference_t<decltype(data->f_power)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->f_power = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_distance_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->mindist);
}

RNA_EXTERN_C void FieldSettings_distance_min_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->mindist = (std::remove_reference_t<decltype(data->mindist)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->mindist = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_distance_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->maxdist);
}

RNA_EXTERN_C void FieldSettings_distance_max_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->maxdist = (std::remove_reference_t<decltype(data->maxdist)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->maxdist = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C float FieldSettings_radial_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->minrad);
}

RNA_EXTERN_C void FieldSettings_radial_min_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->minrad = (std::remove_reference_t<decltype(data->minrad)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->minrad = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_radial_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->maxrad);
}

RNA_EXTERN_C void FieldSettings_radial_max_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->maxrad = (std::remove_reference_t<decltype(data->maxrad)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->maxrad = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_radial_falloff_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_power_r);
}

RNA_EXTERN_C void FieldSettings_radial_falloff_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_power_r = (std::remove_reference_t<decltype(data->f_power_r)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->f_power_r = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_texture_nabla_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->tex_nabla);
}

RNA_EXTERN_C void FieldSettings_texture_nabla_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->tex_nabla = (std::remove_reference_t<decltype(data->tex_nabla)>)CLAMPIS(value, 0.0001000000f, 1.0f);
#else
    data->tex_nabla = CLAMPIS(value, 0.0001000000f, 1.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_noise_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_noise);
}

RNA_EXTERN_C void FieldSettings_noise_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_noise = (std::remove_reference_t<decltype(data->f_noise)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->f_noise = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C int FieldSettings_seed_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->seed);
}

RNA_EXTERN_C void FieldSettings_seed_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->seed = (std::remove_reference_t<decltype(data->seed)>)CLAMPIS(value, 1, 128);
#else
    data->seed = CLAMPIS(value, 1, 128);
#endif
}

RNA_EXTERN_C bool FieldSettings_use_min_distance_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void FieldSettings_use_min_distance_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool FieldSettings_use_max_distance_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void FieldSettings_use_max_distance_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool FieldSettings_use_radial_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void FieldSettings_use_radial_min_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool FieldSettings_use_radial_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void FieldSettings_use_radial_max_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool FieldSettings_use_object_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void FieldSettings_use_object_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool FieldSettings_use_global_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void FieldSettings_use_global_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool FieldSettings_use_2d_force_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void FieldSettings_use_2d_force_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool FieldSettings_use_root_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void FieldSettings_use_root_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool FieldSettings_apply_to_location_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void FieldSettings_apply_to_location_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C bool FieldSettings_apply_to_rotation_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void FieldSettings_apply_to_rotation_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

RNA_EXTERN_C bool FieldSettings_use_absorption_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void FieldSettings_use_absorption_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool FieldSettings_use_multiple_springs_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void FieldSettings_use_multiple_springs_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool FieldSettings_use_smoke_density_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void FieldSettings_use_smoke_density_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

RNA_EXTERN_C bool FieldSettings_use_gravity_falloff_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

RNA_EXTERN_C void FieldSettings_use_gravity_falloff_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

RNA_EXTERN_C PointerRNA FieldSettings_texture_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->tex);
}

RNA_EXTERN_C void FieldSettings_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);

    if (data->tex) {
        id_us_min((ID *)data->tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->tex = value.data;
}

RNA_EXTERN_C PointerRNA FieldSettings_source_object_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->f_source);
}

RNA_EXTERN_C void FieldSettings_source_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->f_source = value.data;
}

RNA_EXTERN_C float FieldSettings_guide_minimum_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

RNA_EXTERN_C void FieldSettings_guide_minimum_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->f_strength = (std::remove_reference_t<decltype(data->f_strength)>)value;
#else
    data->f_strength = value;
#endif
}

RNA_EXTERN_C float FieldSettings_guide_free_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->free_end);
}

RNA_EXTERN_C void FieldSettings_guide_free_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->free_end = (std::remove_reference_t<decltype(data->free_end)>)CLAMPIS(value, 0.0f, 0.9900000095f);
#else
    data->free_end = CLAMPIS(value, 0.0f, 0.9900000095f);
#endif
}

RNA_EXTERN_C bool FieldSettings_use_guide_path_add_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void FieldSettings_use_guide_path_add_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool FieldSettings_use_guide_path_weight_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

RNA_EXTERN_C void FieldSettings_use_guide_path_weight_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

RNA_EXTERN_C float FieldSettings_guide_clump_amount_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->clump_fac);
}

RNA_EXTERN_C void FieldSettings_guide_clump_amount_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->clump_fac = (std::remove_reference_t<decltype(data->clump_fac)>)CLAMPIS(value, -1.0f, 1.0f);
#else
    data->clump_fac = CLAMPIS(value, -1.0f, 1.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_guide_clump_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->clump_pow);
}

RNA_EXTERN_C void FieldSettings_guide_clump_shape_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->clump_pow = (std::remove_reference_t<decltype(data->clump_pow)>)CLAMPIS(value, -0.9990000129f, 0.9990000129f);
#else
    data->clump_pow = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
#endif
}

RNA_EXTERN_C int FieldSettings_guide_kink_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->kink);
}

RNA_EXTERN_C void FieldSettings_guide_kink_type_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->kink = (std::remove_reference_t<decltype(data->kink)>)value;
#else
    data->kink = value;
#endif
}

RNA_EXTERN_C int FieldSettings_guide_kink_axis_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->kink_axis);
}

RNA_EXTERN_C void FieldSettings_guide_kink_axis_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->kink_axis = (std::remove_reference_t<decltype(data->kink_axis)>)value;
#else
    data->kink_axis = value;
#endif
}

RNA_EXTERN_C float FieldSettings_guide_kink_frequency_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_freq);
}

RNA_EXTERN_C void FieldSettings_guide_kink_frequency_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->kink_freq = (std::remove_reference_t<decltype(data->kink_freq)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->kink_freq = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float FieldSettings_guide_kink_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_shape);
}

RNA_EXTERN_C void FieldSettings_guide_kink_shape_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->kink_shape = (std::remove_reference_t<decltype(data->kink_shape)>)CLAMPIS(value, -0.9990000129f, 0.9990000129f);
#else
    data->kink_shape = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
#endif
}

RNA_EXTERN_C float FieldSettings_guide_kink_amplitude_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_amp);
}

RNA_EXTERN_C void FieldSettings_guide_kink_amplitude_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
#ifdef __cplusplus
    data->kink_amp = (std::remove_reference_t<decltype(data->kink_amp)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->kink_amp = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

static PointerRNA SoftBodySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void SoftBodySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SoftBodySettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SoftBodySettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SoftBodySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SoftBodySettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void SoftBodySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int SoftBodySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA SoftBodySettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float SoftBodySettings_friction_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->mediafrict);
}

RNA_EXTERN_C void SoftBodySettings_friction_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->mediafrict = (std::remove_reference_t<decltype(data->mediafrict)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->mediafrict = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_mass_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->nodemass);
}

RNA_EXTERN_C void SoftBodySettings_mass_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->nodemass = (std::remove_reference_t<decltype(data->nodemass)>)CLAMPIS(value, 0.0f, 50000.0f);
#else
    data->nodemass = CLAMPIS(value, 0.0f, 50000.0f);
#endif
}

RNA_EXTERN_C void SoftBodySettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    BLI_assert(strlen(data->namedVG_Mass) < 64);
    strcpy(value, data->namedVG_Mass);
}

RNA_EXTERN_C int SoftBodySettings_vertex_group_mass_length(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return strlen(data->namedVG_Mass);
}

RNA_EXTERN_C void SoftBodySettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
    rna_SoftBodySettings_mass_vgroup_set(ptr, value);
}

RNA_EXTERN_C float SoftBodySettings_gravity_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->grav);
}

RNA_EXTERN_C void SoftBodySettings_gravity_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->grav = (std::remove_reference_t<decltype(data->grav)>)CLAMPIS(value, -10.0f, 10.0f);
#else
    data->grav = CLAMPIS(value, -10.0f, 10.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_speed_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->physics_speed);
}

RNA_EXTERN_C void SoftBodySettings_speed_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->physics_speed = (std::remove_reference_t<decltype(data->physics_speed)>)CLAMPIS(value, 0.0099999998f, 100.0f);
#else
    data->physics_speed = CLAMPIS(value, 0.0099999998f, 100.0f);
#endif
}

RNA_EXTERN_C void SoftBodySettings_vertex_group_goal_get(PointerRNA *ptr, char *value)
{
    rna_SoftBodySettings_goal_vgroup_get(ptr, value);
}

RNA_EXTERN_C int SoftBodySettings_vertex_group_goal_length(PointerRNA *ptr)
{
    return rna_SoftBodySettings_goal_vgroup_length(ptr);
}

RNA_EXTERN_C void SoftBodySettings_vertex_group_goal_set(PointerRNA *ptr, const char *value)
{
    rna_SoftBodySettings_goal_vgroup_set(ptr, value);
}

RNA_EXTERN_C float SoftBodySettings_goal_min_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->mingoal);
}

RNA_EXTERN_C void SoftBodySettings_goal_min_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->mingoal = (std::remove_reference_t<decltype(data->mingoal)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->mingoal = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_goal_max_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->maxgoal);
}

RNA_EXTERN_C void SoftBodySettings_goal_max_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->maxgoal = (std::remove_reference_t<decltype(data->maxgoal)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->maxgoal = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_goal_default_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->defgoal);
}

RNA_EXTERN_C void SoftBodySettings_goal_default_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->defgoal = (std::remove_reference_t<decltype(data->defgoal)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->defgoal = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_goal_spring_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->goalspring);
}

RNA_EXTERN_C void SoftBodySettings_goal_spring_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->goalspring = (std::remove_reference_t<decltype(data->goalspring)>)CLAMPIS(value, 0.0f, 0.9990000129f);
#else
    data->goalspring = CLAMPIS(value, 0.0f, 0.9990000129f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_goal_friction_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->goalfrict);
}

RNA_EXTERN_C void SoftBodySettings_goal_friction_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->goalfrict = (std::remove_reference_t<decltype(data->goalfrict)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->goalfrict = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_pull_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->inspring);
}

RNA_EXTERN_C void SoftBodySettings_pull_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->inspring = (std::remove_reference_t<decltype(data->inspring)>)CLAMPIS(value, 0.0f, 0.9990000129f);
#else
    data->inspring = CLAMPIS(value, 0.0f, 0.9990000129f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_push_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->inpush);
}

RNA_EXTERN_C void SoftBodySettings_push_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->inpush = (std::remove_reference_t<decltype(data->inpush)>)CLAMPIS(value, 0.0f, 0.9990000129f);
#else
    data->inpush = CLAMPIS(value, 0.0f, 0.9990000129f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_damping_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->infrict);
}

RNA_EXTERN_C void SoftBodySettings_damping_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->infrict = (std::remove_reference_t<decltype(data->infrict)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->infrict = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C int SoftBodySettings_spring_length_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->springpreload);
}

RNA_EXTERN_C void SoftBodySettings_spring_length_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->springpreload = (std::remove_reference_t<decltype(data->springpreload)>)CLAMPIS(value, 0, 200);
#else
    data->springpreload = CLAMPIS(value, 0, 200);
#endif
}

RNA_EXTERN_C int SoftBodySettings_aero_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->aeroedge);
}

RNA_EXTERN_C void SoftBodySettings_aero_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->aeroedge = (std::remove_reference_t<decltype(data->aeroedge)>)CLAMPIS(value, 0, 30000);
#else
    data->aeroedge = CLAMPIS(value, 0, 30000);
#endif
}

RNA_EXTERN_C int SoftBodySettings_plastic_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->plastic);
}

RNA_EXTERN_C void SoftBodySettings_plastic_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->plastic = (std::remove_reference_t<decltype(data->plastic)>)CLAMPIS(value, 0, 100);
#else
    data->plastic = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C float SoftBodySettings_bend_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->secondspring);
}

RNA_EXTERN_C void SoftBodySettings_bend_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->secondspring = (std::remove_reference_t<decltype(data->secondspring)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->secondspring = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_shear_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->shearstiff);
}

RNA_EXTERN_C void SoftBodySettings_shear_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->shearstiff = (std::remove_reference_t<decltype(data->shearstiff)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->shearstiff = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void SoftBodySettings_vertex_group_spring_get(PointerRNA *ptr, char *value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    BLI_assert(strlen(data->namedVG_Spring_K) < 64);
    strcpy(value, data->namedVG_Spring_K);
}

RNA_EXTERN_C int SoftBodySettings_vertex_group_spring_length(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return strlen(data->namedVG_Spring_K);
}

RNA_EXTERN_C void SoftBodySettings_vertex_group_spring_set(PointerRNA *ptr, const char *value)
{
    rna_SoftBodySettings_spring_vgroup_set(ptr, value);
}

RNA_EXTERN_C int SoftBodySettings_collision_type_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->sbc_mode);
}

RNA_EXTERN_C void SoftBodySettings_collision_type_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->sbc_mode = (std::remove_reference_t<decltype(data->sbc_mode)>)value;
#else
    data->sbc_mode = value;
#endif
}

RNA_EXTERN_C float SoftBodySettings_ball_size_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->colball);
}

RNA_EXTERN_C void SoftBodySettings_ball_size_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->colball = (std::remove_reference_t<decltype(data->colball)>)CLAMPIS(value, -10.0f, 10.0f);
#else
    data->colball = CLAMPIS(value, -10.0f, 10.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_ball_stiff_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->ballstiff);
}

RNA_EXTERN_C void SoftBodySettings_ball_stiff_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->ballstiff = (std::remove_reference_t<decltype(data->ballstiff)>)CLAMPIS(value, 0.0010000000f, 100.0f);
#else
    data->ballstiff = CLAMPIS(value, 0.0010000000f, 100.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_ball_damp_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->balldamp);
}

RNA_EXTERN_C void SoftBodySettings_ball_damp_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->balldamp = (std::remove_reference_t<decltype(data->balldamp)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->balldamp = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C float SoftBodySettings_error_threshold_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->rklimit);
}

RNA_EXTERN_C void SoftBodySettings_error_threshold_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->rklimit = (std::remove_reference_t<decltype(data->rklimit)>)CLAMPIS(value, 0.0010000000f, 10.0f);
#else
    data->rklimit = CLAMPIS(value, 0.0010000000f, 10.0f);
#endif
}

RNA_EXTERN_C int SoftBodySettings_step_min_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->minloops);
}

RNA_EXTERN_C void SoftBodySettings_step_min_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->minloops = (std::remove_reference_t<decltype(data->minloops)>)CLAMPIS(value, 0, 30000);
#else
    data->minloops = CLAMPIS(value, 0, 30000);
#endif
}

RNA_EXTERN_C int SoftBodySettings_step_max_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->maxloops);
}

RNA_EXTERN_C void SoftBodySettings_step_max_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->maxloops = (std::remove_reference_t<decltype(data->maxloops)>)CLAMPIS(value, 0, 30000);
#else
    data->maxloops = CLAMPIS(value, 0, 30000);
#endif
}

RNA_EXTERN_C int SoftBodySettings_choke_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->choke);
}

RNA_EXTERN_C void SoftBodySettings_choke_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->choke = (std::remove_reference_t<decltype(data->choke)>)CLAMPIS(value, 0, 100);
#else
    data->choke = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C int SoftBodySettings_fuzzy_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->fuzzyness);
}

RNA_EXTERN_C void SoftBodySettings_fuzzy_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
#ifdef __cplusplus
    data->fuzzyness = (std::remove_reference_t<decltype(data->fuzzyness)>)CLAMPIS(value, 1, 100);
#else
    data->fuzzyness = CLAMPIS(value, 1, 100);
#endif
}

RNA_EXTERN_C bool SoftBodySettings_use_auto_step_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (((data->solverflags) & 2) != 0);
}

RNA_EXTERN_C void SoftBodySettings_use_auto_step_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags |= 2; }
    else { data->solverflags &= ~2; }
}

RNA_EXTERN_C bool SoftBodySettings_use_diagnose_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (((data->solverflags) & 1) != 0);
}

RNA_EXTERN_C void SoftBodySettings_use_diagnose_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags |= 1; }
    else { data->solverflags &= ~1; }
}

RNA_EXTERN_C bool SoftBodySettings_use_estimate_matrix_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (((data->solverflags) & 4) != 0);
}

RNA_EXTERN_C void SoftBodySettings_use_estimate_matrix_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags |= 4; }
    else { data->solverflags &= ~4; }
}

RNA_EXTERN_C void SoftBodySettings_location_mass_center_get(PointerRNA *ptr, float values[3])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->lcom)[i]);
    }
}

RNA_EXTERN_C void SoftBodySettings_location_mass_center_set(PointerRNA *ptr, const float values[3])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->lcom)[i] = values[i];
    }
}

RNA_EXTERN_C void SoftBodySettings_rotation_estimate_get(PointerRNA *ptr, float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->lrot)[i]);
    }
}

RNA_EXTERN_C void SoftBodySettings_rotation_estimate_set(PointerRNA *ptr, const float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        ((float *)data->lrot)[i] = values[i];
    }
}

RNA_EXTERN_C void SoftBodySettings_scale_estimate_get(PointerRNA *ptr, float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->lscale)[i]);
    }
}

RNA_EXTERN_C void SoftBodySettings_scale_estimate_set(PointerRNA *ptr, const float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        ((float *)data->lscale)[i] = values[i];
    }
}

RNA_EXTERN_C bool SoftBodySettings_use_goal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_use_goal_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_use_goal_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_use_goal_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool SoftBodySettings_use_edges_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_use_edges_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_use_edges_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_use_edges_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool SoftBodySettings_use_stiff_quads_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_stiff_quads_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_use_stiff_quads_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_stiff_quads_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool SoftBodySettings_use_edge_collision_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_edge_collision_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_use_edge_collision_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_edge_collision_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool SoftBodySettings_use_face_collision_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_face_collision_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_use_face_collision_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_face_collision_set;
    fn(ptr, value);
}

RNA_EXTERN_C int SoftBodySettings_aerodynamics_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_SoftBodySettings_new_aero_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_aerodynamics_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_SoftBodySettings_new_aero_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool SoftBodySettings_use_self_collision_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_SoftBodySettings_self_collision_get;
    return fn(ptr);
}

RNA_EXTERN_C void SoftBodySettings_use_self_collision_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_SoftBodySettings_self_collision_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA SoftBodySettings_collision_collection_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->collision_group);
}

RNA_EXTERN_C void SoftBodySettings_collision_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->collision_group = value.data;
}

RNA_EXTERN_C PointerRNA SoftBodySettings_effector_weights_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}








/* Active Point Cache */
CollectionPropertyRNA rna_PointCache_rna_properties = {
	{(PropertyRNA *)&rna_PointCache_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_rna_properties_begin, PointCache_rna_properties_next, PointCache_rna_properties_end, PointCache_rna_properties_get, nullptr, nullptr, PointCache_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PointCache_rna_type = {
	{(PropertyRNA *)&rna_PointCache_frame_start, (PropertyRNA *)&rna_PointCache_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_PointCache_frame_start = {
	{(PropertyRNA *)&rna_PointCache_frame_end, (PropertyRNA *)&rna_PointCache_rna_type,
	-1, "frame_start", 3, 1, 0, 4, 0, "Start",
	"Frame on which the simulation starts",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, startframe), (RawPropertyType)0, nullptr},
	PointCache_frame_start_get, PointCache_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, -1048574, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_PointCache_frame_end = {
	{(PropertyRNA *)&rna_PointCache_frame_step, (PropertyRNA *)&rna_PointCache_frame_start,
	-1, "frame_end", 3, 1, 0, 4, 0, "End",
	"Frame on which the simulation stops",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, endframe), (RawPropertyType)0, nullptr},
	PointCache_frame_end_get, PointCache_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_PointCache_frame_step = {
	{(PropertyRNA *)&rna_PointCache_index, (PropertyRNA *)&rna_PointCache_frame_end,
	-1, "frame_step", 3, 1, 0, 4, 0, "Cache Step",
	"Number of frames between cached frames",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, step), (RawPropertyType)0, nullptr},
	PointCache_frame_step_get, PointCache_frame_step_set, nullptr, nullptr, rna_PointCache_frame_step_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, 0, nullptr
};

IntPropertyRNA rna_PointCache_index = {
	{(PropertyRNA *)&rna_PointCache_compression, (PropertyRNA *)&rna_PointCache_frame_step,
	-1, "index", 3, 1, 0, 4, 0, "Cache Index",
	"Index number of cache files",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, index), (RawPropertyType)0, nullptr},
	PointCache_index_get, PointCache_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 100, -1, 100, 1, 0, nullptr
};

static const EnumPropertyItem rna_PointCache_compression_items[4] = {
	{0, "NO", 0, "None", "No compression"},
	{1, "LIGHT", 0, "Lite", "Fast but not so effective compression"},
	{2, "HEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_PointCache_compression = {
	{(PropertyRNA *)&rna_PointCache_is_baked, (PropertyRNA *)&rna_PointCache_index,
	-1, "compression", 3, 1, 0, 4, 0, "Cache Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, compression), (RawPropertyType)1, nullptr},
	PointCache_compression_get, PointCache_compression_set, nullptr, nullptr, nullptr, rna_PointCache_compression_items, 3, 0
};

BoolPropertyRNA rna_PointCache_is_baked = {
	{(PropertyRNA *)&rna_PointCache_is_baking, (PropertyRNA *)&rna_PointCache_compression,
	-1, "is_baked", 2, 1, 0, 0, 0, "",
	"The cache is baked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_is_baked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCache_is_baking = {
	{(PropertyRNA *)&rna_PointCache_use_disk_cache, (PropertyRNA *)&rna_PointCache_is_baked,
	-1, "is_baking", 2, 1, 0, 0, 0, "",
	"The cache is being baked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_is_baking_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCache_use_disk_cache = {
	{(PropertyRNA *)&rna_PointCache_is_outdated, (PropertyRNA *)&rna_PointCache_is_baking,
	-1, "use_disk_cache", 3, 1, 0, 0, 0, "Disk Cache",
	"Save cache files to disk (.blend file must be saved first)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_toggle_disk_cache, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Cache_use_disk_cache_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_use_disk_cache_get, PointCache_use_disk_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCache_is_outdated = {
	{(PropertyRNA *)&rna_PointCache_is_frame_skip, (PropertyRNA *)&rna_PointCache_use_disk_cache,
	-1, "is_outdated", 2, 1, 0, 0, 0, "Cache Is Outdated",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_is_outdated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCache_is_frame_skip = {
	{(PropertyRNA *)&rna_PointCache_name, (PropertyRNA *)&rna_PointCache_is_outdated,
	-1, "is_frame_skip", 2, 1, 0, 0, 0, "",
	"Some frames were skipped while baking/saving that cache",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_is_frame_skip_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_PointCache_name = {
	{(PropertyRNA *)&rna_PointCache_filepath, (PropertyRNA *)&rna_PointCache_is_frame_skip,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"Cache name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_name_get, PointCache_name_length, PointCache_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_PointCache_filepath = {
	{(PropertyRNA *)&rna_PointCache_info, (PropertyRNA *)&rna_PointCache_name,
	-1, "filepath", 262145, 1, 0, 0, 0, "File Path",
	"Cache file path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_DIRPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_filepath_get, PointCache_filepath_length, PointCache_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_PointCache_info = {
	{(PropertyRNA *)&rna_PointCache_use_external, (PropertyRNA *)&rna_PointCache_filepath,
	-1, "info", 262144, 3, 0, 0, 0, "Cache Info",
	"Info on current cache status",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {128, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_info_get, PointCache_info_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 128, ""
};

BoolPropertyRNA rna_PointCache_use_external = {
	{(PropertyRNA *)&rna_PointCache_use_library_path, (PropertyRNA *)&rna_PointCache_info,
	-1, "use_external", 3, 1, 0, 0, 0, "External",
	"Read cache from an external location",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_use_external_get, PointCache_use_external_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCache_use_library_path = {
	{(PropertyRNA *)&rna_PointCache_point_caches, (PropertyRNA *)&rna_PointCache_use_external,
	-1, "use_library_path", 3, 1, 0, 0, 0, "Library Path",
	"Use this file\'s path for the disk cache when library linked into another file (for local bakes per scene file, disable this option)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCache_use_library_path_get, PointCache_use_library_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_PointCache_point_caches = {
	{nullptr, (PropertyRNA *)&rna_PointCache_use_library_path,
	-1, "point_caches", 0, 1, 0, 0, 0, "Point Cache List",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_PointCaches},
	PointCache_point_caches_begin, PointCache_point_caches_next, PointCache_point_caches_end, PointCache_point_caches_get, nullptr, nullptr, nullptr, nullptr, &RNA_PointCacheItem
};

StructRNA RNA_PointCache = {
	{(ContainerRNA *)&RNA_PointCaches, (ContainerRNA *)&RNA_ObjectLightLinking,
	nullptr,
	{(PropertyRNA *)&rna_PointCache_rna_properties, (PropertyRNA *)&rna_PointCache_point_caches}},
	"PointCache", nullptr, nullptr, 516, nullptr, "Active Point Cache",
	"Active point cache for physics simulations",
	"*", 89,
	(PropertyRNA *)&rna_PointCache_name, (PropertyRNA *)&rna_PointCache_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_PointCache_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Point Caches */
CollectionPropertyRNA rna_PointCaches_rna_properties = {
	{(PropertyRNA *)&rna_PointCaches_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCaches_rna_properties_begin, PointCaches_rna_properties_next, PointCaches_rna_properties_end, PointCaches_rna_properties_get, nullptr, nullptr, PointCaches_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PointCaches_rna_type = {
	{(PropertyRNA *)&rna_PointCaches_active_index, (PropertyRNA *)&rna_PointCaches_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCaches_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_PointCaches_active_index = {
	{nullptr, (PropertyRNA *)&rna_PointCaches_rna_type,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Point Cache Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCaches_active_index_get, PointCaches_active_index_set, nullptr, nullptr, rna_Cache_active_point_cache_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_PointCaches = {
	{(ContainerRNA *)&RNA_PointCacheItem, (ContainerRNA *)&RNA_PointCache,
	nullptr,
	{(PropertyRNA *)&rna_PointCaches_rna_properties, (PropertyRNA *)&rna_PointCaches_active_index}},
	"PointCaches", nullptr, nullptr, 516, nullptr, "Point Caches",
	"Collection of point caches",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PointCaches_rna_properties,
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

/* Point Cache */
CollectionPropertyRNA rna_PointCacheItem_rna_properties = {
	{(PropertyRNA *)&rna_PointCacheItem_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_rna_properties_begin, PointCacheItem_rna_properties_next, PointCacheItem_rna_properties_end, PointCacheItem_rna_properties_get, nullptr, nullptr, PointCacheItem_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PointCacheItem_rna_type = {
	{(PropertyRNA *)&rna_PointCacheItem_frame_start, (PropertyRNA *)&rna_PointCacheItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_PointCacheItem_frame_start = {
	{(PropertyRNA *)&rna_PointCacheItem_frame_end, (PropertyRNA *)&rna_PointCacheItem_rna_type,
	-1, "frame_start", 3, 1, 0, 4, 0, "Start",
	"Frame on which the simulation starts",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, startframe), (RawPropertyType)0, nullptr},
	PointCacheItem_frame_start_get, PointCacheItem_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1048574, -1048574, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_PointCacheItem_frame_end = {
	{(PropertyRNA *)&rna_PointCacheItem_frame_step, (PropertyRNA *)&rna_PointCacheItem_frame_start,
	-1, "frame_end", 3, 1, 0, 4, 0, "End",
	"Frame on which the simulation stops",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_TIME | (int)PROP_UNIT_TIME), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, endframe), (RawPropertyType)0, nullptr},
	PointCacheItem_frame_end_get, PointCacheItem_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 1048574, 1, 1048574, 1, 0, nullptr
};

IntPropertyRNA rna_PointCacheItem_frame_step = {
	{(PropertyRNA *)&rna_PointCacheItem_index, (PropertyRNA *)&rna_PointCacheItem_frame_end,
	-1, "frame_step", 3, 1, 0, 4, 0, "Cache Step",
	"Number of frames between cached frames",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, step), (RawPropertyType)0, nullptr},
	PointCacheItem_frame_step_get, PointCacheItem_frame_step_set, nullptr, nullptr, rna_PointCache_frame_step_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 20, 1, 20, 1, 0, nullptr
};

IntPropertyRNA rna_PointCacheItem_index = {
	{(PropertyRNA *)&rna_PointCacheItem_compression, (PropertyRNA *)&rna_PointCacheItem_frame_step,
	-1, "index", 3, 1, 0, 4, 0, "Cache Index",
	"Index number of cache files",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, index), (RawPropertyType)0, nullptr},
	PointCacheItem_index_get, PointCacheItem_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, 100, -1, 100, 1, 0, nullptr
};

static const EnumPropertyItem rna_PointCacheItem_compression_items[4] = {
	{0, "NO", 0, "None", "No compression"},
	{1, "LIGHT", 0, "Lite", "Fast but not so effective compression"},
	{2, "HEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_PointCacheItem_compression = {
	{(PropertyRNA *)&rna_PointCacheItem_is_baked, (PropertyRNA *)&rna_PointCacheItem_index,
	-1, "compression", 3, 1, 0, 4, 0, "Cache Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, compression), (RawPropertyType)1, nullptr},
	PointCacheItem_compression_get, PointCacheItem_compression_set, nullptr, nullptr, nullptr, rna_PointCacheItem_compression_items, 3, 0
};

BoolPropertyRNA rna_PointCacheItem_is_baked = {
	{(PropertyRNA *)&rna_PointCacheItem_is_baking, (PropertyRNA *)&rna_PointCacheItem_compression,
	-1, "is_baked", 2, 1, 0, 0, 0, "",
	"The cache is baked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_is_baked_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCacheItem_is_baking = {
	{(PropertyRNA *)&rna_PointCacheItem_use_disk_cache, (PropertyRNA *)&rna_PointCacheItem_is_baked,
	-1, "is_baking", 2, 1, 0, 0, 0, "",
	"The cache is being baked",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_is_baking_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCacheItem_use_disk_cache = {
	{(PropertyRNA *)&rna_PointCacheItem_is_outdated, (PropertyRNA *)&rna_PointCacheItem_is_baking,
	-1, "use_disk_cache", 3, 1, 0, 0, 0, "Disk Cache",
	"Save cache files to disk (.blend file must be saved first)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_toggle_disk_cache, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Cache_use_disk_cache_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_use_disk_cache_get, PointCacheItem_use_disk_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCacheItem_is_outdated = {
	{(PropertyRNA *)&rna_PointCacheItem_is_frame_skip, (PropertyRNA *)&rna_PointCacheItem_use_disk_cache,
	-1, "is_outdated", 2, 1, 0, 0, 0, "Cache Is Outdated",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_is_outdated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCacheItem_is_frame_skip = {
	{(PropertyRNA *)&rna_PointCacheItem_name, (PropertyRNA *)&rna_PointCacheItem_is_outdated,
	-1, "is_frame_skip", 2, 1, 0, 0, 0, "",
	"Some frames were skipped while baking/saving that cache",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_is_frame_skip_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_PointCacheItem_name = {
	{(PropertyRNA *)&rna_PointCacheItem_filepath, (PropertyRNA *)&rna_PointCacheItem_is_frame_skip,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"Cache name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_name_get, PointCacheItem_name_length, PointCacheItem_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_PointCacheItem_filepath = {
	{(PropertyRNA *)&rna_PointCacheItem_info, (PropertyRNA *)&rna_PointCacheItem_name,
	-1, "filepath", 262145, 1, 0, 0, 0, "File Path",
	"Cache file path",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_DIRPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_filepath_get, PointCacheItem_filepath_length, PointCacheItem_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_PointCacheItem_info = {
	{(PropertyRNA *)&rna_PointCacheItem_use_external, (PropertyRNA *)&rna_PointCacheItem_filepath,
	-1, "info", 262144, 3, 0, 0, 0, "Cache Info",
	"Info on current cache status",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {128, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_info_get, PointCacheItem_info_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 128, ""
};

BoolPropertyRNA rna_PointCacheItem_use_external = {
	{(PropertyRNA *)&rna_PointCacheItem_use_library_path, (PropertyRNA *)&rna_PointCacheItem_info,
	-1, "use_external", 3, 1, 0, 0, 0, "External",
	"Read cache from an external location",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_use_external_get, PointCacheItem_use_external_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PointCacheItem_use_library_path = {
	{nullptr, (PropertyRNA *)&rna_PointCacheItem_use_external,
	-1, "use_library_path", 3, 1, 0, 0, 0, "Library Path",
	"Use this file\'s path for the disk cache when library linked into another file (for local bakes per scene file, disable this option)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PointCacheItem_use_library_path_get, PointCacheItem_use_library_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_PointCacheItem = {
	{(ContainerRNA *)&RNA_CollisionSettings, (ContainerRNA *)&RNA_PointCaches,
	nullptr,
	{(PropertyRNA *)&rna_PointCacheItem_rna_properties, (PropertyRNA *)&rna_PointCacheItem_use_library_path}},
	"PointCacheItem", nullptr, nullptr, 516, nullptr, "Point Cache",
	"Point cache for physics simulations",
	"*", 89,
	(PropertyRNA *)&rna_PointCacheItem_name, (PropertyRNA *)&rna_PointCacheItem_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_PointCache_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Collision Settings */
CollectionPropertyRNA rna_CollisionSettings_rna_properties = {
	{(PropertyRNA *)&rna_CollisionSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollisionSettings_rna_properties_begin, CollisionSettings_rna_properties_next, CollisionSettings_rna_properties_end, CollisionSettings_rna_properties_get, nullptr, nullptr, CollisionSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CollisionSettings_rna_type = {
	{(PropertyRNA *)&rna_CollisionSettings_use, (PropertyRNA *)&rna_CollisionSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollisionSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_CollisionSettings_use = {
	{(PropertyRNA *)&rna_CollisionSettings_damping_factor, (PropertyRNA *)&rna_CollisionSettings_rna_type,
	-1, "use", 3, 1, 0, 0, 0, "Enabled",
	"Enable this object as a collider for physics systems",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollisionSettings_use_get, CollisionSettings_use_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_CollisionSettings_damping_factor = {
	{(PropertyRNA *)&rna_CollisionSettings_damping_random, (PropertyRNA *)&rna_CollisionSettings_use,
	-1, "damping_factor", 3, 1, 0, 4, 0, "Damping Factor",
	"Amount of damping during particle collision",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_damp), (RawPropertyType)5, nullptr},
	CollisionSettings_damping_factor_get, CollisionSettings_damping_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_damping_random = {
	{(PropertyRNA *)&rna_CollisionSettings_friction_factor, (PropertyRNA *)&rna_CollisionSettings_damping_factor,
	-1, "damping_random", 3, 1, 0, 4, 0, "Random Damping",
	"Random variation of damping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_rdamp), (RawPropertyType)5, nullptr},
	CollisionSettings_damping_random_get, CollisionSettings_damping_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_friction_factor = {
	{(PropertyRNA *)&rna_CollisionSettings_friction_random, (PropertyRNA *)&rna_CollisionSettings_damping_random,
	-1, "friction_factor", 3, 1, 0, 4, 0, "Friction Factor",
	"Amount of friction during particle collision",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_frict), (RawPropertyType)5, nullptr},
	CollisionSettings_friction_factor_get, CollisionSettings_friction_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_friction_random = {
	{(PropertyRNA *)&rna_CollisionSettings_permeability, (PropertyRNA *)&rna_CollisionSettings_friction_factor,
	-1, "friction_random", 3, 1, 0, 4, 0, "Random Friction",
	"Random variation of friction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_rfrict), (RawPropertyType)5, nullptr},
	CollisionSettings_friction_random_get, CollisionSettings_friction_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_permeability = {
	{(PropertyRNA *)&rna_CollisionSettings_use_particle_kill, (PropertyRNA *)&rna_CollisionSettings_friction_random,
	-1, "permeability", 3, 1, 0, 4, 0, "Permeability",
	"Chance that the particle will pass through the mesh",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_perm), (RawPropertyType)5, nullptr},
	CollisionSettings_permeability_get, CollisionSettings_permeability_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_CollisionSettings_use_particle_kill = {
	{(PropertyRNA *)&rna_CollisionSettings_stickiness, (PropertyRNA *)&rna_CollisionSettings_permeability,
	-1, "use_particle_kill", 3, 1, 0, 0, 0, "Kill Particles",
	"Kill collided particles",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollisionSettings_use_particle_kill_get, CollisionSettings_use_particle_kill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_CollisionSettings_stickiness = {
	{(PropertyRNA *)&rna_CollisionSettings_thickness_inner, (PropertyRNA *)&rna_CollisionSettings_use_particle_kill,
	-1, "stickiness", 3, 1, 0, 4, 0, "Stickiness",
	"Amount of stickiness to surface collision",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_stickness), (RawPropertyType)5, nullptr},
	CollisionSettings_stickiness_get, CollisionSettings_stickiness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_thickness_inner = {
	{(PropertyRNA *)&rna_CollisionSettings_thickness_outer, (PropertyRNA *)&rna_CollisionSettings_stickiness,
	-1, "thickness_inner", 3, 1, 0, 4, 0, "Inner Thickness",
	"Inner face thickness (only used by softbodies)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_sbift), (RawPropertyType)5, nullptr},
	CollisionSettings_thickness_inner_get, CollisionSettings_thickness_inner_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_thickness_outer = {
	{(PropertyRNA *)&rna_CollisionSettings_damping, (PropertyRNA *)&rna_CollisionSettings_thickness_inner,
	-1, "thickness_outer", 3, 1, 0, 4, 0, "Outer Thickness",
	"Outer face thickness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_sboft), (RawPropertyType)5, nullptr},
	CollisionSettings_thickness_outer_get, CollisionSettings_thickness_outer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_damping = {
	{(PropertyRNA *)&rna_CollisionSettings_absorption, (PropertyRNA *)&rna_CollisionSettings_thickness_outer,
	-1, "damping", 3, 1, 0, 4, 0, "Damping",
	"Amount of damping during collision",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_sbdamp), (RawPropertyType)5, nullptr},
	CollisionSettings_damping_get, CollisionSettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_absorption = {
	{(PropertyRNA *)&rna_CollisionSettings_cloth_friction, (PropertyRNA *)&rna_CollisionSettings_damping,
	-1, "absorption", 3, 1, 0, 4, 0, "Absorption",
	"How much of effector force gets lost during collision with this object (in percent)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, absorption), (RawPropertyType)5, nullptr},
	CollisionSettings_absorption_get, CollisionSettings_absorption_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_CollisionSettings_cloth_friction = {
	{(PropertyRNA *)&rna_CollisionSettings_use_culling, (PropertyRNA *)&rna_CollisionSettings_absorption,
	-1, "cloth_friction", 3, 1, 0, 4, 0, "Friction",
	"Friction for cloth collisions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_cfrict), (RawPropertyType)5, nullptr},
	CollisionSettings_cloth_friction_get, CollisionSettings_cloth_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_CollisionSettings_use_culling = {
	{(PropertyRNA *)&rna_CollisionSettings_use_normal, (PropertyRNA *)&rna_CollisionSettings_cloth_friction,
	-1, "use_culling", 3, 1, 0, 0, 0, "Single Sided",
	"Cloth collision acts with respect to the collider normals (improves penetration recovery)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollisionSettings_use_culling_get, CollisionSettings_use_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_CollisionSettings_use_normal = {
	{nullptr, (PropertyRNA *)&rna_CollisionSettings_use_culling,
	-1, "use_normal", 3, 1, 0, 0, 0, "Override Normals",
	"Cloth collision impulses act in the direction of the collider normals (more reliable in some cases)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CollisionSettings_use_normal_get, CollisionSettings_use_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_CollisionSettings = {
	{(ContainerRNA *)&RNA_EffectorWeights, (ContainerRNA *)&RNA_PointCacheItem,
	nullptr,
	{(PropertyRNA *)&rna_CollisionSettings_rna_properties, (PropertyRNA *)&rna_CollisionSettings_use_normal}},
	"CollisionSettings", nullptr, nullptr, 516, nullptr, "Collision Settings",
	"Collision settings for object in physics simulation",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CollisionSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_CollisionSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Effector Weights */
CollectionPropertyRNA rna_EffectorWeights_rna_properties = {
	{(PropertyRNA *)&rna_EffectorWeights_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EffectorWeights_rna_properties_begin, EffectorWeights_rna_properties_next, EffectorWeights_rna_properties_end, EffectorWeights_rna_properties_get, nullptr, nullptr, EffectorWeights_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_EffectorWeights_rna_type = {
	{(PropertyRNA *)&rna_EffectorWeights_apply_to_hair_growing, (PropertyRNA *)&rna_EffectorWeights_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EffectorWeights_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_EffectorWeights_apply_to_hair_growing = {
	{(PropertyRNA *)&rna_EffectorWeights_collection, (PropertyRNA *)&rna_EffectorWeights_rna_type,
	-1, "apply_to_hair_growing", 3, 1, 0, 0, 0, "Use For Growing Hair",
	"Use force fields when growing hair",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EffectorWeights_apply_to_hair_growing_get, EffectorWeights_apply_to_hair_growing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_EffectorWeights_collection = {
	{(PropertyRNA *)&rna_EffectorWeights_gravity, (PropertyRNA *)&rna_EffectorWeights_apply_to_hair_growing,
	-1, "collection", 8388801, 1, 0, 0, 0, "Effector Collection",
	"Limit effectors to this collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EffectorWeights_collection_get, EffectorWeights_collection_set, nullptr, nullptr,&RNA_Collection
};

FloatPropertyRNA rna_EffectorWeights_gravity = {
	{(PropertyRNA *)&rna_EffectorWeights_all, (PropertyRNA *)&rna_EffectorWeights_collection,
	-1, "gravity", 3, 1, 0, 4, 0, "Gravity",
	"Global gravity weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, global_gravity), (RawPropertyType)5, nullptr},
	EffectorWeights_gravity_get, EffectorWeights_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_all = {
	{(PropertyRNA *)&rna_EffectorWeights_force, (PropertyRNA *)&rna_EffectorWeights_gravity,
	-1, "all", 3, 1, 0, 4, 0, "All",
	"All effector\'s weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[0]), (RawPropertyType)5, nullptr},
	EffectorWeights_all_get, EffectorWeights_all_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_force = {
	{(PropertyRNA *)&rna_EffectorWeights_vortex, (PropertyRNA *)&rna_EffectorWeights_all,
	-1, "force", 3, 1, 0, 4, 0, "Force",
	"Force effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[1]), (RawPropertyType)5, nullptr},
	EffectorWeights_force_get, EffectorWeights_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_vortex = {
	{(PropertyRNA *)&rna_EffectorWeights_magnetic, (PropertyRNA *)&rna_EffectorWeights_force,
	-1, "vortex", 3, 1, 0, 4, 0, "Vortex",
	"Vortex effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[2]), (RawPropertyType)5, nullptr},
	EffectorWeights_vortex_get, EffectorWeights_vortex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_magnetic = {
	{(PropertyRNA *)&rna_EffectorWeights_wind, (PropertyRNA *)&rna_EffectorWeights_vortex,
	-1, "magnetic", 3, 1, 0, 4, 0, "Magnetic",
	"Magnetic effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[3]), (RawPropertyType)5, nullptr},
	EffectorWeights_magnetic_get, EffectorWeights_magnetic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_wind = {
	{(PropertyRNA *)&rna_EffectorWeights_curve_guide, (PropertyRNA *)&rna_EffectorWeights_magnetic,
	-1, "wind", 3, 1, 0, 4, 0, "Wind",
	"Wind effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[4]), (RawPropertyType)5, nullptr},
	EffectorWeights_wind_get, EffectorWeights_wind_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_curve_guide = {
	{(PropertyRNA *)&rna_EffectorWeights_texture, (PropertyRNA *)&rna_EffectorWeights_wind,
	-1, "curve_guide", 3, 1, 0, 4, 0, "Curve Guide",
	"Curve guide effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[5]), (RawPropertyType)5, nullptr},
	EffectorWeights_curve_guide_get, EffectorWeights_curve_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_texture = {
	{(PropertyRNA *)&rna_EffectorWeights_harmonic, (PropertyRNA *)&rna_EffectorWeights_curve_guide,
	-1, "texture", 3, 1, 0, 4, 0, "Texture",
	"Texture effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[6]), (RawPropertyType)5, nullptr},
	EffectorWeights_texture_get, EffectorWeights_texture_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_harmonic = {
	{(PropertyRNA *)&rna_EffectorWeights_charge, (PropertyRNA *)&rna_EffectorWeights_texture,
	-1, "harmonic", 3, 1, 0, 4, 0, "Harmonic",
	"Harmonic effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[7]), (RawPropertyType)5, nullptr},
	EffectorWeights_harmonic_get, EffectorWeights_harmonic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_charge = {
	{(PropertyRNA *)&rna_EffectorWeights_lennardjones, (PropertyRNA *)&rna_EffectorWeights_harmonic,
	-1, "charge", 3, 1, 0, 4, 0, "Charge",
	"Charge effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[8]), (RawPropertyType)5, nullptr},
	EffectorWeights_charge_get, EffectorWeights_charge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_lennardjones = {
	{(PropertyRNA *)&rna_EffectorWeights_boid, (PropertyRNA *)&rna_EffectorWeights_charge,
	-1, "lennardjones", 3, 1, 0, 4, 0, "Lennard-Jones",
	"Lennard-Jones effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[9]), (RawPropertyType)5, nullptr},
	EffectorWeights_lennardjones_get, EffectorWeights_lennardjones_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_boid = {
	{(PropertyRNA *)&rna_EffectorWeights_turbulence, (PropertyRNA *)&rna_EffectorWeights_lennardjones,
	-1, "boid", 3, 1, 0, 4, 0, "Boid",
	"Boid effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[10]), (RawPropertyType)5, nullptr},
	EffectorWeights_boid_get, EffectorWeights_boid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_turbulence = {
	{(PropertyRNA *)&rna_EffectorWeights_drag, (PropertyRNA *)&rna_EffectorWeights_boid,
	-1, "turbulence", 3, 1, 0, 4, 0, "Turbulence",
	"Turbulence effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[11]), (RawPropertyType)5, nullptr},
	EffectorWeights_turbulence_get, EffectorWeights_turbulence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_drag = {
	{(PropertyRNA *)&rna_EffectorWeights_smokeflow, (PropertyRNA *)&rna_EffectorWeights_turbulence,
	-1, "drag", 3, 1, 0, 4, 0, "Drag",
	"Drag effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[12]), (RawPropertyType)5, nullptr},
	EffectorWeights_drag_get, EffectorWeights_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EffectorWeights_smokeflow = {
	{nullptr, (PropertyRNA *)&rna_EffectorWeights_drag,
	-1, "smokeflow", 3, 1, 0, 4, 0, "Fluid Flow",
	"Fluid Flow effector weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[13]), (RawPropertyType)5, nullptr},
	EffectorWeights_smokeflow_get, EffectorWeights_smokeflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, nullptr
};

StructRNA RNA_EffectorWeights = {
	{(ContainerRNA *)&RNA_FieldSettings, (ContainerRNA *)&RNA_CollisionSettings,
	nullptr,
	{(PropertyRNA *)&rna_EffectorWeights_rna_properties, (PropertyRNA *)&rna_EffectorWeights_smokeflow}},
	"EffectorWeights", nullptr, nullptr, 516, nullptr, "Effector Weights",
	"Effector weights for physics simulation",
	"*", 89,
	nullptr, (PropertyRNA *)&rna_EffectorWeights_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_EffectorWeight_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Field Settings */
CollectionPropertyRNA rna_FieldSettings_rna_properties = {
	{(PropertyRNA *)&rna_FieldSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_rna_properties_begin, FieldSettings_rna_properties_next, FieldSettings_rna_properties_end, FieldSettings_rna_properties_get, nullptr, nullptr, FieldSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FieldSettings_rna_type = {
	{(PropertyRNA *)&rna_FieldSettings_type, (PropertyRNA *)&rna_FieldSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_FieldSettings_type_items[15] = {
	{0, "NONE", 101, "None", ""},
	{10, "BOID", 347, "Boid", "Create a force that acts as a boid\'s predators or target"},
	{8, "CHARGE", 343, "Charge", "Spherical forcefield based on the charge of particles, only influences other charge force fields"},
	{5, "GUIDE", 346, "Curve Guide", "Create a force along a curve object"},
	{12, "DRAG", 349, "Drag", "Create a force that dampens motion"},
	{13, "FLUID_FLOW", 350, "Fluid Flow", "Create a force based on fluid simulation velocities"},
	{1, "FORCE", 338, "Force", "Radial field toward the center of object"},
	{7, "HARMONIC", 342, "Harmonic", "The source of this force field is the zero point of a harmonic oscillator"},
	{9, "LENNARDJ", 344, "Lennard-Jones", "Forcefield based on the Lennard-Jones potential"},
	{3, "MAGNET", 341, "Magnetic", "Forcefield depends on the speed of the particles"},
	{6, "TEXTURE", 345, "Texture", "Force field based on a texture"},
	{11, "TURBULENCE", 348, "Turbulence", "Create turbulence with a noise field"},
	{2, "VORTEX", 340, "Vortex", "Spiraling force that twists the force object\'s local Z axis"},
	{4, "WIND", 339, "Wind", "Constant force along the force object\'s local Z axis"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FieldSettings_type = {
	{(PropertyRNA *)&rna_FieldSettings_shape, (PropertyRNA *)&rna_FieldSettings_rna_type,
	-1, "type", 3, 1, 0, 0, 0, "Type",
	"Type of field",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_type_get, FieldSettings_type_set, nullptr, nullptr, nullptr, rna_FieldSettings_type_items, 14, 0
};

static const EnumPropertyItem rna_FieldSettings_shape_items[6] = {
	{0, "POINT", 0, "Point", "Field originates from the object center"},
	{4, "LINE", 0, "Line", "Field originates from the local Z axis of the object"},
	{1, "PLANE", 0, "Plane", "Field originates from the local XY plane of the object"},
	{2, "SURFACE", 0, "Surface", "Field originates from the surface of the object"},
	{3, "POINTS", 0, "Every Point", "Field originates from all of the vertices of the object"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FieldSettings_shape = {
	{(PropertyRNA *)&rna_FieldSettings_falloff_type, (PropertyRNA *)&rna_FieldSettings_type,
	-1, "shape", 3, 1, 0, 4, 0, "Shape",
	"Which direction is used to calculate the effector force",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_shape_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, shape), (RawPropertyType)1, nullptr},
	FieldSettings_shape_get, FieldSettings_shape_set, rna_Effector_shape_itemf, nullptr, nullptr, rna_FieldSettings_shape_items, 5, 0
};

static const EnumPropertyItem rna_FieldSettings_falloff_type_items[4] = {
	{2, "CONE", 0, "Cone", ""},
	{0, "SPHERE", 0, "Sphere", ""},
	{1, "TUBE", 0, "Tube", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FieldSettings_falloff_type = {
	{(PropertyRNA *)&rna_FieldSettings_texture_mode, (PropertyRNA *)&rna_FieldSettings_shape,
	-1, "falloff_type", 3, 1, 0, 4, 0, "Falloff",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, falloff), (RawPropertyType)1, nullptr},
	FieldSettings_falloff_type_get, FieldSettings_falloff_type_set, nullptr, nullptr, nullptr, rna_FieldSettings_falloff_type_items, 3, 0
};

static const EnumPropertyItem rna_FieldSettings_texture_mode_items[4] = {
	{2, "CURL", 0, "Curl", ""},
	{1, "GRADIENT", 0, "Gradient", ""},
	{0, "RGB", 0, "RGB", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FieldSettings_texture_mode = {
	{(PropertyRNA *)&rna_FieldSettings_z_direction, (PropertyRNA *)&rna_FieldSettings_falloff_type,
	-1, "texture_mode", 3, 1, 0, 4, 0, "Texture Mode",
	"How the texture effect is calculated (RGB and Curl need a RGB texture, else Gradient will be used instead)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, tex_mode), (RawPropertyType)1, nullptr},
	FieldSettings_texture_mode_get, FieldSettings_texture_mode_set, nullptr, nullptr, nullptr, rna_FieldSettings_texture_mode_items, 3, 0
};

static const EnumPropertyItem rna_FieldSettings_z_direction_items[4] = {
	{1, "POSITIVE", 0, "+Z", ""},
	{2, "NEGATIVE", 0, "-Z", ""},
	{0, "BOTH", 0, "Both Z", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FieldSettings_z_direction = {
	{(PropertyRNA *)&rna_FieldSettings_strength, (PropertyRNA *)&rna_FieldSettings_texture_mode,
	-1, "z_direction", 3, 1, 0, 4, 0, "Z Direction",
	"Effect in full or only positive/negative Z direction",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, zdir), (RawPropertyType)1, nullptr},
	FieldSettings_z_direction_get, FieldSettings_z_direction_set, nullptr, nullptr, nullptr, rna_FieldSettings_z_direction_items, 3, 0
};

FloatPropertyRNA rna_FieldSettings_strength = {
	{(PropertyRNA *)&rna_FieldSettings_linear_drag, (PropertyRNA *)&rna_FieldSettings_z_direction,
	-1, "strength", 3, 1, 0, 4, 0, "Strength",
	"Strength of force field",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_strength), (RawPropertyType)5, nullptr},
	FieldSettings_strength_get, FieldSettings_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_linear_drag = {
	{(PropertyRNA *)&rna_FieldSettings_harmonic_damping, (PropertyRNA *)&rna_FieldSettings_strength,
	-1, "linear_drag", 3, 1, 0, 4, 0, "Linear Drag",
	"Drag component proportional to velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_strength), (RawPropertyType)5, nullptr},
	FieldSettings_linear_drag_get, FieldSettings_linear_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_harmonic_damping = {
	{(PropertyRNA *)&rna_FieldSettings_quadratic_drag, (PropertyRNA *)&rna_FieldSettings_linear_drag,
	-1, "harmonic_damping", 3, 1, 0, 4, 0, "Harmonic Damping",
	"Damping of the harmonic force",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_damp), (RawPropertyType)5, nullptr},
	FieldSettings_harmonic_damping_get, FieldSettings_harmonic_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_quadratic_drag = {
	{(PropertyRNA *)&rna_FieldSettings_flow, (PropertyRNA *)&rna_FieldSettings_harmonic_damping,
	-1, "quadratic_drag", 3, 1, 0, 4, 0, "Quadratic Drag",
	"Drag component proportional to the square of velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_damp), (RawPropertyType)5, nullptr},
	FieldSettings_quadratic_drag_get, FieldSettings_quadratic_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_flow = {
	{(PropertyRNA *)&rna_FieldSettings_wind_factor, (PropertyRNA *)&rna_FieldSettings_quadratic_drag,
	-1, "flow", 3, 1, 0, 4, 0, "Flow",
	"Convert effector force into air flow velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_flow), (RawPropertyType)5, nullptr},
	FieldSettings_flow_get, FieldSettings_flow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_wind_factor = {
	{(PropertyRNA *)&rna_FieldSettings_inflow, (PropertyRNA *)&rna_FieldSettings_flow,
	-1, "wind_factor", 3, 1, 0, 4, 0, "Wind Factor",
	"How much the force is reduced when acting parallel to a surface, e.g. cloth",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_wind_factor), (RawPropertyType)5, nullptr},
	FieldSettings_wind_factor_get, FieldSettings_wind_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_inflow = {
	{(PropertyRNA *)&rna_FieldSettings_size, (PropertyRNA *)&rna_FieldSettings_wind_factor,
	-1, "inflow", 3, 1, 0, 4, 0, "Inflow",
	"Inwards component of the vortex force",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_flow), (RawPropertyType)5, nullptr},
	FieldSettings_inflow_get, FieldSettings_inflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_size = {
	{(PropertyRNA *)&rna_FieldSettings_rest_length, (PropertyRNA *)&rna_FieldSettings_inflow,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Size of the turbulence",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_size), (RawPropertyType)5, nullptr},
	FieldSettings_size_get, FieldSettings_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_rest_length = {
	{(PropertyRNA *)&rna_FieldSettings_falloff_power, (PropertyRNA *)&rna_FieldSettings_size,
	-1, "rest_length", 3, 1, 0, 4, 0, "Rest Length",
	"Rest length of the harmonic force",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_size), (RawPropertyType)5, nullptr},
	FieldSettings_rest_length_get, FieldSettings_rest_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_falloff_power = {
	{(PropertyRNA *)&rna_FieldSettings_distance_min, (PropertyRNA *)&rna_FieldSettings_rest_length,
	-1, "falloff_power", 3, 1, 0, 4, 0, "Falloff Power",
	"How quickly strength falls off with distance from the force field",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_power), (RawPropertyType)5, nullptr},
	FieldSettings_falloff_power_get, FieldSettings_falloff_power_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_distance_min = {
	{(PropertyRNA *)&rna_FieldSettings_distance_max, (PropertyRNA *)&rna_FieldSettings_falloff_power,
	-1, "distance_min", 3, 1, 0, 4, 0, "Minimum Distance",
	"Minimum distance for the field\'s falloff",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, mindist), (RawPropertyType)5, nullptr},
	FieldSettings_distance_min_get, FieldSettings_distance_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_distance_max = {
	{(PropertyRNA *)&rna_FieldSettings_radial_min, (PropertyRNA *)&rna_FieldSettings_distance_min,
	-1, "distance_max", 3, 1, 0, 4, 0, "Maximum Distance",
	"Maximum distance for the field to work",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, maxdist), (RawPropertyType)5, nullptr},
	FieldSettings_distance_max_get, FieldSettings_distance_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_radial_min = {
	{(PropertyRNA *)&rna_FieldSettings_radial_max, (PropertyRNA *)&rna_FieldSettings_distance_max,
	-1, "radial_min", 3, 1, 0, 4, 0, "Minimum Radial Distance",
	"Minimum radial distance for the field\'s falloff",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, minrad), (RawPropertyType)5, nullptr},
	FieldSettings_radial_min_get, FieldSettings_radial_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_radial_max = {
	{(PropertyRNA *)&rna_FieldSettings_radial_falloff, (PropertyRNA *)&rna_FieldSettings_radial_min,
	-1, "radial_max", 3, 1, 0, 4, 0, "Maximum Radial Distance",
	"Maximum radial distance for the field to work",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, maxrad), (RawPropertyType)5, nullptr},
	FieldSettings_radial_max_get, FieldSettings_radial_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_radial_falloff = {
	{(PropertyRNA *)&rna_FieldSettings_texture_nabla, (PropertyRNA *)&rna_FieldSettings_radial_max,
	-1, "radial_falloff", 3, 1, 0, 4, 0, "Radial Falloff Power",
	"Radial falloff power (real gravitational falloff = 2)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_power_r), (RawPropertyType)5, nullptr},
	FieldSettings_radial_falloff_get, FieldSettings_radial_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_texture_nabla = {
	{(PropertyRNA *)&rna_FieldSettings_noise, (PropertyRNA *)&rna_FieldSettings_radial_falloff,
	-1, "texture_nabla", 3, 1, 0, 4, 0, "Nabla",
	"Defines size of derivative offset used for calculating gradient and curl",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, tex_nabla), (RawPropertyType)5, nullptr},
	FieldSettings_texture_nabla_get, FieldSettings_texture_nabla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_noise = {
	{(PropertyRNA *)&rna_FieldSettings_seed, (PropertyRNA *)&rna_FieldSettings_texture_nabla,
	-1, "noise", 3, 1, 0, 4, 0, "Noise",
	"Amount of noise for the force strength",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_noise), (RawPropertyType)5, nullptr},
	FieldSettings_noise_get, FieldSettings_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_FieldSettings_seed = {
	{(PropertyRNA *)&rna_FieldSettings_use_min_distance, (PropertyRNA *)&rna_FieldSettings_noise,
	-1, "seed", 3, 1, 0, 4, 0, "Seed",
	"Seed of the noise",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, seed), (RawPropertyType)0, nullptr},
	FieldSettings_seed_get, FieldSettings_seed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 128, 1, 128, 1, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_min_distance = {
	{(PropertyRNA *)&rna_FieldSettings_use_max_distance, (PropertyRNA *)&rna_FieldSettings_seed,
	-1, "use_min_distance", 3, 1, 0, 0, 0, "Use Min",
	"Use a minimum distance for the field\'s falloff",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_min_distance_get, FieldSettings_use_min_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_max_distance = {
	{(PropertyRNA *)&rna_FieldSettings_use_radial_min, (PropertyRNA *)&rna_FieldSettings_use_min_distance,
	-1, "use_max_distance", 3, 1, 0, 0, 0, "Use Max",
	"Use a maximum distance for the field to work",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_max_distance_get, FieldSettings_use_max_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_radial_min = {
	{(PropertyRNA *)&rna_FieldSettings_use_radial_max, (PropertyRNA *)&rna_FieldSettings_use_max_distance,
	-1, "use_radial_min", 3, 1, 0, 0, 0, "Use Min",
	"Use a minimum radial distance for the field\'s falloff",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_radial_min_get, FieldSettings_use_radial_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_radial_max = {
	{(PropertyRNA *)&rna_FieldSettings_use_object_coords, (PropertyRNA *)&rna_FieldSettings_use_radial_min,
	-1, "use_radial_max", 3, 1, 0, 0, 0, "Use Max",
	"Use a maximum radial distance for the field to work",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_radial_max_get, FieldSettings_use_radial_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_object_coords = {
	{(PropertyRNA *)&rna_FieldSettings_use_global_coords, (PropertyRNA *)&rna_FieldSettings_use_radial_max,
	-1, "use_object_coords", 3, 1, 0, 0, 0, "Use Coordinates",
	"Use object/global coordinates for texture",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_object_coords_get, FieldSettings_use_object_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_global_coords = {
	{(PropertyRNA *)&rna_FieldSettings_use_2d_force, (PropertyRNA *)&rna_FieldSettings_use_object_coords,
	-1, "use_global_coords", 3, 1, 0, 0, 0, "Use Global Coordinates",
	"Use effector/global coordinates for turbulence",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_global_coords_get, FieldSettings_use_global_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_2d_force = {
	{(PropertyRNA *)&rna_FieldSettings_use_root_coords, (PropertyRNA *)&rna_FieldSettings_use_global_coords,
	-1, "use_2d_force", 3, 1, 0, 0, 0, "2D",
	"Apply force only in 2D",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_2d_force_get, FieldSettings_use_2d_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_root_coords = {
	{(PropertyRNA *)&rna_FieldSettings_apply_to_location, (PropertyRNA *)&rna_FieldSettings_use_2d_force,
	-1, "use_root_coords", 3, 1, 0, 0, 0, "Root Texture Coordinates",
	"Texture coordinates from root particle locations",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_root_coords_get, FieldSettings_use_root_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_apply_to_location = {
	{(PropertyRNA *)&rna_FieldSettings_apply_to_rotation, (PropertyRNA *)&rna_FieldSettings_use_root_coords,
	-1, "apply_to_location", 3, 1, 0, 0, 0, "Location",
	"Affect particle\'s location",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_apply_to_location_get, FieldSettings_apply_to_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_apply_to_rotation = {
	{(PropertyRNA *)&rna_FieldSettings_use_absorption, (PropertyRNA *)&rna_FieldSettings_apply_to_location,
	-1, "apply_to_rotation", 3, 1, 0, 0, 0, "Rotation",
	"Affect particle\'s dynamic rotation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_apply_to_rotation_get, FieldSettings_apply_to_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_absorption = {
	{(PropertyRNA *)&rna_FieldSettings_use_multiple_springs, (PropertyRNA *)&rna_FieldSettings_apply_to_rotation,
	-1, "use_absorption", 3, 1, 0, 0, 0, "Absorption",
	"Force gets absorbed by collision objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_absorption_get, FieldSettings_use_absorption_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_multiple_springs = {
	{(PropertyRNA *)&rna_FieldSettings_use_smoke_density, (PropertyRNA *)&rna_FieldSettings_use_absorption,
	-1, "use_multiple_springs", 3, 1, 0, 0, 0, "Multiple Springs",
	"Every point is affected by multiple springs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_multiple_springs_get, FieldSettings_use_multiple_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_smoke_density = {
	{(PropertyRNA *)&rna_FieldSettings_use_gravity_falloff, (PropertyRNA *)&rna_FieldSettings_use_multiple_springs,
	-1, "use_smoke_density", 3, 1, 0, 0, 0, "Apply Density",
	"Adjust force strength based on smoke density",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_smoke_density_get, FieldSettings_use_smoke_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_gravity_falloff = {
	{(PropertyRNA *)&rna_FieldSettings_texture, (PropertyRNA *)&rna_FieldSettings_use_smoke_density,
	-1, "use_gravity_falloff", 3, 1, 0, 0, 0, "Gravity Falloff",
	"Multiply force by 1/distance²",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_gravity_falloff_get, FieldSettings_use_gravity_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_FieldSettings_texture = {
	{(PropertyRNA *)&rna_FieldSettings_source_object, (PropertyRNA *)&rna_FieldSettings_use_gravity_falloff,
	-1, "texture", 8388801, 1, 0, 0, 0, "Texture",
	"Texture to use as force",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_texture_get, FieldSettings_texture_set, nullptr, nullptr,&RNA_Texture
};

PointerPropertyRNA rna_FieldSettings_source_object = {
	{(PropertyRNA *)&rna_FieldSettings_guide_minimum, (PropertyRNA *)&rna_FieldSettings_texture,
	-1, "source_object", 8388737, 1, 0, 0, 0, "Domain Object",
	"Select domain object of the smoke simulation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_source_object_get, FieldSettings_source_object_set, nullptr, nullptr,&RNA_Object
};

FloatPropertyRNA rna_FieldSettings_guide_minimum = {
	{(PropertyRNA *)&rna_FieldSettings_guide_free, (PropertyRNA *)&rna_FieldSettings_source_object,
	-1, "guide_minimum", 3, 1, 0, 4, 0, "Minimum Distance",
	"The distance from which particles are affected fully",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_strength), (RawPropertyType)5, nullptr},
	FieldSettings_guide_minimum_get, FieldSettings_guide_minimum_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_guide_free = {
	{(PropertyRNA *)&rna_FieldSettings_use_guide_path_add, (PropertyRNA *)&rna_FieldSettings_guide_minimum,
	-1, "guide_free", 3, 1, 0, 4, 0, "Free",
	"Guide-free time from particle life\'s end",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, free_end), (RawPropertyType)5, nullptr},
	FieldSettings_guide_free_get, FieldSettings_guide_free_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_guide_path_add = {
	{(PropertyRNA *)&rna_FieldSettings_use_guide_path_weight, (PropertyRNA *)&rna_FieldSettings_guide_free,
	-1, "use_guide_path_add", 3, 1, 0, 0, 0, "Additive",
	"Based on distance/falloff it adds a portion of the entire path",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_guide_path_add_get, FieldSettings_use_guide_path_add_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FieldSettings_use_guide_path_weight = {
	{(PropertyRNA *)&rna_FieldSettings_guide_clump_amount, (PropertyRNA *)&rna_FieldSettings_use_guide_path_add,
	-1, "use_guide_path_weight", 3, 1, 0, 0, 0, "Weights",
	"Use curve weights to influence the particle influence along the curve",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FieldSettings_use_guide_path_weight_get, FieldSettings_use_guide_path_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FieldSettings_guide_clump_amount = {
	{(PropertyRNA *)&rna_FieldSettings_guide_clump_shape, (PropertyRNA *)&rna_FieldSettings_use_guide_path_weight,
	-1, "guide_clump_amount", 3, 1, 0, 4, 0, "Amount",
	"Amount of clumping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, clump_fac), (RawPropertyType)5, nullptr},
	FieldSettings_guide_clump_amount_get, FieldSettings_guide_clump_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_guide_clump_shape = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_type, (PropertyRNA *)&rna_FieldSettings_guide_clump_amount,
	-1, "guide_clump_shape", 3, 1, 0, 4, 0, "Shape",
	"Shape of clumping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, clump_pow), (RawPropertyType)5, nullptr},
	FieldSettings_guide_clump_shape_get, FieldSettings_guide_clump_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_FieldSettings_guide_kink_type_items[8] = {
	{0, "NONE", 0, "None", ""},
	{4, "BRAID", 0, "Braid", ""},
	{1, "CURL", 0, "Curl", ""},
	{2, "RADIAL", 0, "Radial", ""},
	{6, "ROLL", 0, "Roll", ""},
	{5, "ROTATION", 0, "Rotation", ""},
	{3, "WAVE", 0, "Wave", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FieldSettings_guide_kink_type = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_axis, (PropertyRNA *)&rna_FieldSettings_guide_clump_shape,
	-1, "guide_kink_type", 3, 1, 0, 4, 0, "Kink",
	"Type of periodic offset on the curve",
	0, "ParticleSettings",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink), (RawPropertyType)1, nullptr},
	FieldSettings_guide_kink_type_get, FieldSettings_guide_kink_type_set, nullptr, nullptr, nullptr, rna_FieldSettings_guide_kink_type_items, 7, 0
};

EnumPropertyRNA rna_FieldSettings_guide_kink_axis = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_frequency, (PropertyRNA *)&rna_FieldSettings_guide_kink_type,
	-1, "guide_kink_axis", 3, 1, 0, 4, 0, "Axis",
	"Which axis to use for offset",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_axis), (RawPropertyType)1, nullptr},
	FieldSettings_guide_kink_axis_get, FieldSettings_guide_kink_axis_set, nullptr, nullptr, nullptr, rna_enum_axis_xyz_items, 3, 0
};

FloatPropertyRNA rna_FieldSettings_guide_kink_frequency = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_shape, (PropertyRNA *)&rna_FieldSettings_guide_kink_axis,
	-1, "guide_kink_frequency", 3, 1, 0, 4, 0, "Frequency",
	"The frequency of the offset (1/total length)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_freq), (RawPropertyType)5, nullptr},
	FieldSettings_guide_kink_frequency_get, FieldSettings_guide_kink_frequency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_guide_kink_shape = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_amplitude, (PropertyRNA *)&rna_FieldSettings_guide_kink_frequency,
	-1, "guide_kink_shape", 3, 1, 0, 4, 0, "Shape",
	"Adjust the offset to the beginning/end",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_shape), (RawPropertyType)5, nullptr},
	FieldSettings_guide_kink_shape_get, FieldSettings_guide_kink_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude = {
	{nullptr, (PropertyRNA *)&rna_FieldSettings_guide_kink_shape,
	-1, "guide_kink_amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"The amplitude of the offset",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_amp), (RawPropertyType)5, nullptr},
	FieldSettings_guide_kink_amplitude_get, FieldSettings_guide_kink_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_FieldSettings = {
	{(ContainerRNA *)&RNA_SoftBodySettings, (ContainerRNA *)&RNA_EffectorWeights,
	nullptr,
	{(PropertyRNA *)&rna_FieldSettings_rna_properties, (PropertyRNA *)&rna_FieldSettings_guide_kink_amplitude}},
	"FieldSettings", nullptr, nullptr, 516, nullptr, "Field Settings",
	"Field settings for an object in physics simulation",
	"*", 89,
	nullptr, (PropertyRNA *)&rna_FieldSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_FieldSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Soft Body Settings */
CollectionPropertyRNA rna_SoftBodySettings_rna_properties = {
	{(PropertyRNA *)&rna_SoftBodySettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_rna_properties_begin, SoftBodySettings_rna_properties_next, SoftBodySettings_rna_properties_end, SoftBodySettings_rna_properties_get, nullptr, nullptr, SoftBodySettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_SoftBodySettings_rna_type = {
	{(PropertyRNA *)&rna_SoftBodySettings_friction, (PropertyRNA *)&rna_SoftBodySettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_SoftBodySettings_friction = {
	{(PropertyRNA *)&rna_SoftBodySettings_mass, (PropertyRNA *)&rna_SoftBodySettings_rna_type,
	-1, "friction", 3, 0, 0, 4, 0, "Friction",
	"General media friction for point movements",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, mediafrict), (RawPropertyType)5, nullptr},
	SoftBodySettings_friction_get, SoftBodySettings_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_mass = {
	{(PropertyRNA *)&rna_SoftBodySettings_vertex_group_mass, (PropertyRNA *)&rna_SoftBodySettings_friction,
	-1, "mass", 3, 0, 0, 4, 0, "Mass",
	"General Mass value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, nodemass), (RawPropertyType)5, nullptr},
	SoftBodySettings_mass_get, SoftBodySettings_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50000.0f, 0.0f, 50000.0f, 10.0f, 3, 0.0f, nullptr
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_mass = {
	{(PropertyRNA *)&rna_SoftBodySettings_gravity, (PropertyRNA *)&rna_SoftBodySettings_mass,
	-1, "vertex_group_mass", 262145, 0, 0, 0, 0, "Mass Vertex Group",
	"Control point mass values",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_vertex_group_mass_get, SoftBodySettings_vertex_group_mass_length, SoftBodySettings_vertex_group_mass_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FloatPropertyRNA rna_SoftBodySettings_gravity = {
	{(PropertyRNA *)&rna_SoftBodySettings_speed, (PropertyRNA *)&rna_SoftBodySettings_vertex_group_mass,
	-1, "gravity", 3, 0, 0, 4, 0, "Gravitation",
	"Apply gravitation to point movement",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ACCELERATION | (int)PROP_UNIT_ACCELERATION), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, grav), (RawPropertyType)5, nullptr},
	SoftBodySettings_gravity_get, SoftBodySettings_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_speed = {
	{(PropertyRNA *)&rna_SoftBodySettings_vertex_group_goal, (PropertyRNA *)&rna_SoftBodySettings_gravity,
	-1, "speed", 3, 0, 0, 4, 0, "Speed",
	"Tweak timing for physics to control frequency and speed",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, physics_speed), (RawPropertyType)5, nullptr},
	SoftBodySettings_speed_get, SoftBodySettings_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_goal = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_min, (PropertyRNA *)&rna_SoftBodySettings_speed,
	-1, "vertex_group_goal", 262145, 0, 0, 0, 0, "Goal Vertex Group",
	"Control point weight values",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_vertex_group_goal_get, SoftBodySettings_vertex_group_goal_length, SoftBodySettings_vertex_group_goal_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FloatPropertyRNA rna_SoftBodySettings_goal_min = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_max, (PropertyRNA *)&rna_SoftBodySettings_vertex_group_goal,
	-1, "goal_min", 3, 0, 0, 4, 0, "Goal Minimum",
	"Goal minimum, vertex weights are scaled to match this range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, mingoal), (RawPropertyType)5, nullptr},
	SoftBodySettings_goal_min_get, SoftBodySettings_goal_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_goal_max = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_default, (PropertyRNA *)&rna_SoftBodySettings_goal_min,
	-1, "goal_max", 3, 0, 0, 4, 0, "Goal Maximum",
	"Goal maximum, vertex weights are scaled to match this range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, maxgoal), (RawPropertyType)5, nullptr},
	SoftBodySettings_goal_max_get, SoftBodySettings_goal_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_goal_default = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_spring, (PropertyRNA *)&rna_SoftBodySettings_goal_max,
	-1, "goal_default", 1, 0, 0, 4, 0, "Goal Default",
	"Default Goal (vertex target position) value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, defgoal), (RawPropertyType)5, nullptr},
	SoftBodySettings_goal_default_get, SoftBodySettings_goal_default_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_goal_spring = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_friction, (PropertyRNA *)&rna_SoftBodySettings_goal_default,
	-1, "goal_spring", 3, 0, 0, 4, 0, "Goal Stiffness",
	"Goal (vertex target position) spring stiffness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, goalspring), (RawPropertyType)5, nullptr},
	SoftBodySettings_goal_spring_get, SoftBodySettings_goal_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_goal_friction = {
	{(PropertyRNA *)&rna_SoftBodySettings_pull, (PropertyRNA *)&rna_SoftBodySettings_goal_spring,
	-1, "goal_friction", 3, 0, 0, 4, 0, "Goal Damping",
	"Goal (vertex target position) friction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, goalfrict), (RawPropertyType)5, nullptr},
	SoftBodySettings_goal_friction_get, SoftBodySettings_goal_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_pull = {
	{(PropertyRNA *)&rna_SoftBodySettings_push, (PropertyRNA *)&rna_SoftBodySettings_goal_friction,
	-1, "pull", 3, 0, 0, 4, 0, "Pull",
	"Edge spring stiffness when longer than rest length",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, inspring), (RawPropertyType)5, nullptr},
	SoftBodySettings_pull_get, SoftBodySettings_pull_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_push = {
	{(PropertyRNA *)&rna_SoftBodySettings_damping, (PropertyRNA *)&rna_SoftBodySettings_pull,
	-1, "push", 3, 0, 0, 4, 0, "Push",
	"Edge spring stiffness when shorter than rest length",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, inpush), (RawPropertyType)5, nullptr},
	SoftBodySettings_push_get, SoftBodySettings_push_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_damping = {
	{(PropertyRNA *)&rna_SoftBodySettings_spring_length, (PropertyRNA *)&rna_SoftBodySettings_push,
	-1, "damping", 3, 0, 0, 4, 0, "Damp",
	"Edge spring friction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, infrict), (RawPropertyType)5, nullptr},
	SoftBodySettings_damping_get, SoftBodySettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_SoftBodySettings_spring_length = {
	{(PropertyRNA *)&rna_SoftBodySettings_aero, (PropertyRNA *)&rna_SoftBodySettings_damping,
	-1, "spring_length", 3, 0, 0, 4, 0, "Spring Length",
	"Alter spring length to shrink/blow up (unit %) 0 to disable",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, springpreload), (RawPropertyType)1, nullptr},
	SoftBodySettings_spring_length_get, SoftBodySettings_spring_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 200, 0, 200, 1, 0, nullptr
};

IntPropertyRNA rna_SoftBodySettings_aero = {
	{(PropertyRNA *)&rna_SoftBodySettings_plastic, (PropertyRNA *)&rna_SoftBodySettings_spring_length,
	-1, "aero", 3, 0, 0, 4, 0, "Aero",
	"Make edges \'sail\'",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, aeroedge), (RawPropertyType)1, nullptr},
	SoftBodySettings_aero_get, SoftBodySettings_aero_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 30000, 0, 30000, 1, 0, nullptr
};

IntPropertyRNA rna_SoftBodySettings_plastic = {
	{(PropertyRNA *)&rna_SoftBodySettings_bend, (PropertyRNA *)&rna_SoftBodySettings_aero,
	-1, "plastic", 3, 0, 0, 4, 0, "Plasticity",
	"Permanent deform",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, plastic), (RawPropertyType)1, nullptr},
	SoftBodySettings_plastic_get, SoftBodySettings_plastic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 0, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_bend = {
	{(PropertyRNA *)&rna_SoftBodySettings_shear, (PropertyRNA *)&rna_SoftBodySettings_plastic,
	-1, "bend", 3, 0, 0, 4, 0, "Bending",
	"Bending Stiffness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, secondspring), (RawPropertyType)5, nullptr},
	SoftBodySettings_bend_get, SoftBodySettings_bend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_shear = {
	{(PropertyRNA *)&rna_SoftBodySettings_vertex_group_spring, (PropertyRNA *)&rna_SoftBodySettings_bend,
	-1, "shear", 3, 0, 0, 4, 0, "Shear",
	"Shear Stiffness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, shearstiff), (RawPropertyType)5, nullptr},
	SoftBodySettings_shear_get, SoftBodySettings_shear_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_spring = {
	{(PropertyRNA *)&rna_SoftBodySettings_collision_type, (PropertyRNA *)&rna_SoftBodySettings_shear,
	-1, "vertex_group_spring", 262145, 0, 0, 0, 0, "Spring Vertex Group",
	"Control point spring strength values",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_vertex_group_spring_get, SoftBodySettings_vertex_group_spring_length, SoftBodySettings_vertex_group_spring_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

static const EnumPropertyItem rna_SoftBodySettings_collision_type_items[6] = {
	{0, "MANUAL", 0, "Manual", "Manual adjust"},
	{1, "AVERAGE", 0, "Average", "Average Spring length * Ball Size"},
	{2, "MINIMAL", 0, "Minimal", "Minimal Spring length * Ball Size"},
	{3, "MAXIMAL", 0, "Maximal", "Maximal Spring length * Ball Size"},
	{4, "MINMAX", 0, "AvMinMax", "(Min+Max)/2 * Ball Size"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_SoftBodySettings_collision_type = {
	{(PropertyRNA *)&rna_SoftBodySettings_ball_size, (PropertyRNA *)&rna_SoftBodySettings_vertex_group_spring,
	-1, "collision_type", 1, 0, 0, 4, 0, "Collision Type",
	"Choose Collision Type",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, sbc_mode), (RawPropertyType)1, nullptr},
	SoftBodySettings_collision_type_get, SoftBodySettings_collision_type_set, nullptr, nullptr, nullptr, rna_SoftBodySettings_collision_type_items, 5, 0
};

FloatPropertyRNA rna_SoftBodySettings_ball_size = {
	{(PropertyRNA *)&rna_SoftBodySettings_ball_stiff, (PropertyRNA *)&rna_SoftBodySettings_collision_type,
	-1, "ball_size", 1, 0, 0, 4, 0, "Ball Size",
	"Absolute ball size or factor if not manually adjusted",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, colball), (RawPropertyType)5, nullptr},
	SoftBodySettings_ball_size_get, SoftBodySettings_ball_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_ball_stiff = {
	{(PropertyRNA *)&rna_SoftBodySettings_ball_damp, (PropertyRNA *)&rna_SoftBodySettings_ball_size,
	-1, "ball_stiff", 3, 0, 0, 4, 0, "Stiffness",
	"Ball inflating pressure",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, ballstiff), (RawPropertyType)5, nullptr},
	SoftBodySettings_ball_stiff_get, SoftBodySettings_ball_stiff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_ball_damp = {
	{(PropertyRNA *)&rna_SoftBodySettings_error_threshold, (PropertyRNA *)&rna_SoftBodySettings_ball_stiff,
	-1, "ball_damp", 3, 0, 0, 4, 0, "Dampening",
	"Blending to inelastic collision",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, balldamp), (RawPropertyType)5, nullptr},
	SoftBodySettings_ball_damp_get, SoftBodySettings_ball_damp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_SoftBodySettings_error_threshold = {
	{(PropertyRNA *)&rna_SoftBodySettings_step_min, (PropertyRNA *)&rna_SoftBodySettings_ball_damp,
	-1, "error_threshold", 3, 0, 0, 4, 0, "Error Limit",
	"The Runge-Kutta ODE solver error limit, low value gives more precision, high values speed",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, rklimit), (RawPropertyType)5, nullptr},
	SoftBodySettings_error_threshold_get, SoftBodySettings_error_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_SoftBodySettings_step_min = {
	{(PropertyRNA *)&rna_SoftBodySettings_step_max, (PropertyRNA *)&rna_SoftBodySettings_error_threshold,
	-1, "step_min", 3, 0, 0, 4, 0, "Min Step",
	"Minimal # solver steps/frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, minloops), (RawPropertyType)1, nullptr},
	SoftBodySettings_step_min_get, SoftBodySettings_step_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 30000, 0, 30000, 1, 0, nullptr
};

IntPropertyRNA rna_SoftBodySettings_step_max = {
	{(PropertyRNA *)&rna_SoftBodySettings_choke, (PropertyRNA *)&rna_SoftBodySettings_step_min,
	-1, "step_max", 3, 0, 0, 4, 0, "Max Step",
	"Maximal # solver steps/frame",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, maxloops), (RawPropertyType)1, nullptr},
	SoftBodySettings_step_max_get, SoftBodySettings_step_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 30000, 0, 30000, 1, 0, nullptr
};

IntPropertyRNA rna_SoftBodySettings_choke = {
	{(PropertyRNA *)&rna_SoftBodySettings_fuzzy, (PropertyRNA *)&rna_SoftBodySettings_step_max,
	-1, "choke", 3, 0, 0, 4, 0, "Choke",
	"\'Viscosity\' inside collision target",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, choke), (RawPropertyType)1, nullptr},
	SoftBodySettings_choke_get, SoftBodySettings_choke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 0, nullptr
};

IntPropertyRNA rna_SoftBodySettings_fuzzy = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_auto_step, (PropertyRNA *)&rna_SoftBodySettings_choke,
	-1, "fuzzy", 3, 0, 0, 4, 0, "Fuzzy",
	"Fuzziness while on collision, high values make collision handling faster but less stable",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, fuzzyness), (RawPropertyType)1, nullptr},
	SoftBodySettings_fuzzy_get, SoftBodySettings_fuzzy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_auto_step = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_diagnose, (PropertyRNA *)&rna_SoftBodySettings_fuzzy,
	-1, "use_auto_step", 3, 0, 0, 0, 0, "V",
	"Use velocities for automagic step sizes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_auto_step_get, SoftBodySettings_use_auto_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_diagnose = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_estimate_matrix, (PropertyRNA *)&rna_SoftBodySettings_use_auto_step,
	-1, "use_diagnose", 3, 0, 0, 0, 0, "Print Performance to Console",
	"Turn on SB diagnose console prints",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_diagnose_get, SoftBodySettings_use_diagnose_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_estimate_matrix = {
	{(PropertyRNA *)&rna_SoftBodySettings_location_mass_center, (PropertyRNA *)&rna_SoftBodySettings_use_diagnose,
	-1, "use_estimate_matrix", 3, 0, 0, 0, 0, "Estimate Transforms",
	"Store the estimated transforms in the soft body settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_estimate_matrix_get, SoftBodySettings_use_estimate_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_SoftBodySettings_location_mass_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_location_mass_center = {
	{(PropertyRNA *)&rna_SoftBodySettings_rotation_estimate, (PropertyRNA *)&rna_SoftBodySettings_use_estimate_matrix,
	-1, "location_mass_center", 3, 0, 0, 4, 0, "Center of Mass",
	"Location of center of mass",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, lcom), (RawPropertyType)5, nullptr},
	nullptr, nullptr, SoftBodySettings_location_mass_center_get, SoftBodySettings_location_mass_center_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_SoftBodySettings_location_mass_center_default
};

static float rna_SoftBodySettings_rotation_estimate_default[9] = {
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

FloatPropertyRNA rna_SoftBodySettings_rotation_estimate = {
	{(PropertyRNA *)&rna_SoftBodySettings_scale_estimate, (PropertyRNA *)&rna_SoftBodySettings_location_mass_center,
	-1, "rotation_estimate", 3, 0, 0, 4, 0, "Rotation Matrix",
	"Estimated rotation matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {3, 3, 0}, 9,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, lrot), (RawPropertyType)5, nullptr},
	nullptr, nullptr, SoftBodySettings_rotation_estimate_get, SoftBodySettings_rotation_estimate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_rotation_estimate_default
};

static float rna_SoftBodySettings_scale_estimate_default[9] = {
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

FloatPropertyRNA rna_SoftBodySettings_scale_estimate = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_goal, (PropertyRNA *)&rna_SoftBodySettings_rotation_estimate,
	-1, "scale_estimate", 3, 0, 0, 4, 0, "Scale Matrix",
	"Estimated scale matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {3, 3, 0}, 9,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, lscale), (RawPropertyType)5, nullptr},
	nullptr, nullptr, SoftBodySettings_scale_estimate_get, SoftBodySettings_scale_estimate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_scale_estimate_default
};

BoolPropertyRNA rna_SoftBodySettings_use_goal = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_edges, (PropertyRNA *)&rna_SoftBodySettings_scale_estimate,
	-1, "use_goal", 1, 0, 0, 0, 0, "Use Goal",
	"Define forces for vertices to stick to animated position",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_goal_get, SoftBodySettings_use_goal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_edges = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_stiff_quads, (PropertyRNA *)&rna_SoftBodySettings_use_goal,
	-1, "use_edges", 1, 0, 0, 0, 0, "Use Edges",
	"Use Edges as springs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_edges_get, SoftBodySettings_use_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_stiff_quads = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_edge_collision, (PropertyRNA *)&rna_SoftBodySettings_use_edges,
	-1, "use_stiff_quads", 1, 0, 0, 0, 0, "Stiff Quads",
	"Add diagonal springs on 4-gons",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_stiff_quads_get, SoftBodySettings_use_stiff_quads_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_edge_collision = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_face_collision, (PropertyRNA *)&rna_SoftBodySettings_use_stiff_quads,
	-1, "use_edge_collision", 3, 0, 0, 0, 0, "Edge Collision",
	"Edges collide too",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_edge_collision_get, SoftBodySettings_use_edge_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_SoftBodySettings_use_face_collision = {
	{(PropertyRNA *)&rna_SoftBodySettings_aerodynamics_type, (PropertyRNA *)&rna_SoftBodySettings_use_edge_collision,
	-1, "use_face_collision", 3, 0, 0, 0, 0, "Face Collision",
	"Faces collide too, can be very slow",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_face_collision_get, SoftBodySettings_use_face_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_SoftBodySettings_aerodynamics_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Edges receive a drag force from surrounding media"},
	{1, "LIFT_FORCE", 0, "Lift Force", "Edges receive a lift force when passing through surrounding media"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_self_collision, (PropertyRNA *)&rna_SoftBodySettings_use_face_collision,
	-1, "aerodynamics_type", 3, 0, 0, 0, 0, "Aerodynamics Type",
	"Method of calculating aerodynamic interaction",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_aerodynamics_type_get, SoftBodySettings_aerodynamics_type_set, nullptr, nullptr, nullptr, rna_SoftBodySettings_aerodynamics_type_items, 2, 0
};

BoolPropertyRNA rna_SoftBodySettings_use_self_collision = {
	{(PropertyRNA *)&rna_SoftBodySettings_collision_collection, (PropertyRNA *)&rna_SoftBodySettings_aerodynamics_type,
	-1, "use_self_collision", 1, 0, 0, 0, 0, "Self Collision",
	"Enable naive vertex ball self collision",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_use_self_collision_get, SoftBodySettings_use_self_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_SoftBodySettings_collision_collection = {
	{(PropertyRNA *)&rna_SoftBodySettings_effector_weights, (PropertyRNA *)&rna_SoftBodySettings_use_self_collision,
	-1, "collision_collection", 8388737, 0, 0, 0, 0, "Collision Collection",
	"Limit colliders to this collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_softbody_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_collision_collection_get, SoftBodySettings_collision_collection_set, nullptr, nullptr,&RNA_Collection
};

PointerPropertyRNA rna_SoftBodySettings_effector_weights = {
	{nullptr, (PropertyRNA *)&rna_SoftBodySettings_collision_collection,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	SoftBodySettings_effector_weights_get, nullptr, nullptr, nullptr,&RNA_EffectorWeights
};

StructRNA RNA_SoftBodySettings = {
	{(ContainerRNA *)&RNA_DepsgraphObjectInstance, (ContainerRNA *)&RNA_FieldSettings,
	nullptr,
	{(PropertyRNA *)&rna_SoftBodySettings_rna_properties, (PropertyRNA *)&rna_SoftBodySettings_effector_weights}},
	"SoftBodySettings", nullptr, nullptr, 516, nullptr, "Soft Body Settings",
	"Soft body simulation settings for an object",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_SoftBodySettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_SoftBodySettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

