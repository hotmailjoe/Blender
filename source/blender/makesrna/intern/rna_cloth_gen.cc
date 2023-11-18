
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

#include "rna_cloth.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_ClothSolverResult_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ClothSolverResult_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_ClothSolverResult_status;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSolverResult_max_error;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSolverResult_min_error;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSolverResult_avg_error;
RNA_EXTERN_C IntPropertyRNA rna_ClothSolverResult_max_iterations;
RNA_EXTERN_C IntPropertyRNA rna_ClothSolverResult_min_iterations;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSolverResult_avg_iterations;


RNA_EXTERN_C CollectionPropertyRNA rna_ClothSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ClothSettings_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_goal_min;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_goal_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_goal_default;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_goal_spring;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_goal_friction;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_friction;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_collider_friction;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_density_target;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_density_strength;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_mass;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_mass;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_gravity;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_air_damping;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_pin_stiffness;
RNA_EXTERN_C IntPropertyRNA rna_ClothSettings_quality;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_time_scale;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_shrink;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_shrink_min;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_shrink_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_voxel_cell_size;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_tension_damping;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_compression_damping;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_shear_damping;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_tension_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_tension_stiffness_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_compression_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_compression_stiffness_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_shear_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_shear_stiffness_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_sewing_force_max;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_structural_stiffness;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_shear_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_bending_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_bending_stiffness_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_bending_damping;
RNA_EXTERN_C BoolPropertyRNA rna_ClothSettings_use_sewing_springs;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_bending;
RNA_EXTERN_C PointerPropertyRNA rna_ClothSettings_effector_weights;
RNA_EXTERN_C PointerPropertyRNA rna_ClothSettings_rest_shape_key;
RNA_EXTERN_C BoolPropertyRNA rna_ClothSettings_use_dynamic_mesh;
RNA_EXTERN_C EnumPropertyRNA rna_ClothSettings_bending_model;
RNA_EXTERN_C BoolPropertyRNA rna_ClothSettings_use_internal_springs;
RNA_EXTERN_C BoolPropertyRNA rna_ClothSettings_internal_spring_normal_check;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_spring_max_length;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_spring_max_diversion;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_tension_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_tension_stiffness_max;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_compression_stiffness;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_internal_compression_stiffness_max;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_intern;
RNA_EXTERN_C BoolPropertyRNA rna_ClothSettings_use_pressure;
RNA_EXTERN_C BoolPropertyRNA rna_ClothSettings_use_pressure_volume;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_uniform_pressure_force;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_target_volume;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_pressure_factor;
RNA_EXTERN_C FloatPropertyRNA rna_ClothSettings_fluid_density;
RNA_EXTERN_C StringPropertyRNA rna_ClothSettings_vertex_group_pressure;


RNA_EXTERN_C CollectionPropertyRNA rna_ClothCollisionSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ClothCollisionSettings_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_ClothCollisionSettings_use_collision;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_distance_min;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_friction;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_damping;
RNA_EXTERN_C IntPropertyRNA rna_ClothCollisionSettings_collision_quality;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_impulse_clamp;
RNA_EXTERN_C BoolPropertyRNA rna_ClothCollisionSettings_use_self_collision;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_self_distance_min;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_self_friction;
RNA_EXTERN_C PointerPropertyRNA rna_ClothCollisionSettings_collection;
RNA_EXTERN_C StringPropertyRNA rna_ClothCollisionSettings_vertex_group_self_collisions;
RNA_EXTERN_C StringPropertyRNA rna_ClothCollisionSettings_vertex_group_object_collisions;
RNA_EXTERN_C FloatPropertyRNA rna_ClothCollisionSettings_self_impulse_clamp;

static PointerRNA ClothSolverResult_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ClothSolverResult_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ClothSolverResult_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ClothSolverResult_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ClothSolverResult_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ClothSolverResult_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ClothSolverResult_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ClothSolverResult_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ClothSolverResult_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ClothSolverResult_status_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (int)(data->status);
}

RNA_EXTERN_C float ClothSolverResult_max_error_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->max_error);
}

RNA_EXTERN_C float ClothSolverResult_min_error_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->min_error);
}

RNA_EXTERN_C float ClothSolverResult_avg_error_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->avg_error);
}

RNA_EXTERN_C int ClothSolverResult_max_iterations_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (int)(data->max_iterations);
}

RNA_EXTERN_C int ClothSolverResult_min_iterations_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (int)(data->min_iterations);
}

RNA_EXTERN_C float ClothSolverResult_avg_iterations_get(PointerRNA *ptr)
{
    ClothSolverResult *data = (ClothSolverResult *)(ptr->data);
    return (float)(data->avg_iterations);
}

static PointerRNA ClothSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ClothSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ClothSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ClothSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ClothSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ClothSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ClothSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ClothSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ClothSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float ClothSettings_goal_min_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->mingoal);
}

RNA_EXTERN_C void ClothSettings_goal_min_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->mingoal = (std::remove_reference_t<decltype(data->mingoal)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->mingoal = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_goal_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->maxgoal);
}

RNA_EXTERN_C void ClothSettings_goal_max_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->maxgoal = (std::remove_reference_t<decltype(data->maxgoal)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->maxgoal = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_goal_default_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->defgoal);
}

RNA_EXTERN_C void ClothSettings_goal_default_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->defgoal = (std::remove_reference_t<decltype(data->defgoal)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->defgoal = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_goal_spring_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->goalspring);
}

RNA_EXTERN_C void ClothSettings_goal_spring_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->goalspring = (std::remove_reference_t<decltype(data->goalspring)>)CLAMPIS(value, 0.0f, 0.9990000129f);
#else
    data->goalspring = CLAMPIS(value, 0.0f, 0.9990000129f);
#endif
}

RNA_EXTERN_C float ClothSettings_goal_friction_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->goalfrict);
}

RNA_EXTERN_C void ClothSettings_goal_friction_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->goalfrict = (std::remove_reference_t<decltype(data->goalfrict)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->goalfrict = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_internal_friction_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->velocity_smooth);
}

RNA_EXTERN_C void ClothSettings_internal_friction_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->velocity_smooth = (std::remove_reference_t<decltype(data->velocity_smooth)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->velocity_smooth = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_collider_friction_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->collider_friction);
}

RNA_EXTERN_C void ClothSettings_collider_friction_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->collider_friction = (std::remove_reference_t<decltype(data->collider_friction)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->collider_friction = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_density_target_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->density_target);
}

RNA_EXTERN_C void ClothSettings_density_target_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->density_target = (std::remove_reference_t<decltype(data->density_target)>)CLAMPIS(value, 0.0f, 10000.0f);
#else
    data->density_target = CLAMPIS(value, 0.0f, 10000.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_density_strength_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->density_strength);
}

RNA_EXTERN_C void ClothSettings_density_strength_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->density_strength = (std::remove_reference_t<decltype(data->density_strength)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->density_strength = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_mass_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->mass);
}

RNA_EXTERN_C void ClothSettings_mass_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->mass = (std::remove_reference_t<decltype(data->mass)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->mass = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void ClothSettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_mass_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_mass_length(PointerRNA *ptr)
{
    return rna_ClothSettings_mass_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_mass_vgroup_set(ptr, value);
}

RNA_EXTERN_C void ClothSettings_gravity_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ClothSettings_gravity_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ClothSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ClothSettings_gravity_set;
    fn(ptr, values);
}

RNA_EXTERN_C float ClothSettings_air_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->Cvi);
}

RNA_EXTERN_C void ClothSettings_air_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->Cvi = (std::remove_reference_t<decltype(data->Cvi)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->Cvi = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_pin_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->goalspring);
}

RNA_EXTERN_C void ClothSettings_pin_stiffness_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->goalspring = (std::remove_reference_t<decltype(data->goalspring)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->goalspring = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C int ClothSettings_quality_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (int)(data->stepsPerFrame);
}

RNA_EXTERN_C void ClothSettings_quality_set(PointerRNA *ptr, int value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->stepsPerFrame = (std::remove_reference_t<decltype(data->stepsPerFrame)>)CLAMPIS(value, 1, INT_MAX);
#else
    data->stepsPerFrame = CLAMPIS(value, 1, INT_MAX);
#endif
}

RNA_EXTERN_C float ClothSettings_time_scale_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->time_scale);
}

RNA_EXTERN_C void ClothSettings_time_scale_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->time_scale = (std::remove_reference_t<decltype(data->time_scale)>)CLAMPIS(value, 0.0f, FLT_MAX);
#else
    data->time_scale = CLAMPIS(value, 0.0f, FLT_MAX);
#endif
}

RNA_EXTERN_C void ClothSettings_vertex_group_shrink_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_shrink_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_shrink_length(PointerRNA *ptr)
{
    return rna_ClothSettings_shrink_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_shrink_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_shrink_vgroup_set(ptr, value);
}

RNA_EXTERN_C float ClothSettings_shrink_min_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shrink_min);
}

RNA_EXTERN_C void ClothSettings_shrink_min_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_shrink_min_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_shrink_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shrink_max);
}

RNA_EXTERN_C void ClothSettings_shrink_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_shrink_max_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_voxel_cell_size_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->voxel_cell_size);
}

RNA_EXTERN_C void ClothSettings_voxel_cell_size_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->voxel_cell_size = (std::remove_reference_t<decltype(data->voxel_cell_size)>)CLAMPIS(value, 0.0001000000f, 10000.0f);
#else
    data->voxel_cell_size = CLAMPIS(value, 0.0001000000f, 10000.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_tension_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->tension_damp);
}

RNA_EXTERN_C void ClothSettings_tension_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->tension_damp = (std::remove_reference_t<decltype(data->tension_damp)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->tension_damp = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_compression_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->compression_damp);
}

RNA_EXTERN_C void ClothSettings_compression_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->compression_damp = (std::remove_reference_t<decltype(data->compression_damp)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->compression_damp = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_shear_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shear_damp);
}

RNA_EXTERN_C void ClothSettings_shear_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->shear_damp = (std::remove_reference_t<decltype(data->shear_damp)>)CLAMPIS(value, 0.0f, 50.0f);
#else
    data->shear_damp = CLAMPIS(value, 0.0f, 50.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_tension_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->tension);
}

RNA_EXTERN_C void ClothSettings_tension_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_tension_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_tension_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_tension);
}

RNA_EXTERN_C void ClothSettings_tension_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_tension_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_compression_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->compression);
}

RNA_EXTERN_C void ClothSettings_compression_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_compression_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_compression_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_compression);
}

RNA_EXTERN_C void ClothSettings_compression_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_compression_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_shear_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->shear);
}

RNA_EXTERN_C void ClothSettings_shear_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_shear_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_shear_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_shear);
}

RNA_EXTERN_C void ClothSettings_shear_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_shear_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_sewing_force_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_sewing);
}

RNA_EXTERN_C void ClothSettings_sewing_force_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_sewing_set;
    fn(ptr, value);
}

RNA_EXTERN_C void ClothSettings_vertex_group_structural_stiffness_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_struct_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_structural_stiffness_length(PointerRNA *ptr)
{
    return rna_ClothSettings_struct_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_structural_stiffness_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_struct_vgroup_set(ptr, value);
}

RNA_EXTERN_C void ClothSettings_vertex_group_shear_stiffness_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_shear_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_shear_stiffness_length(PointerRNA *ptr)
{
    return rna_ClothSettings_shear_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_shear_stiffness_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_shear_vgroup_set(ptr, value);
}

RNA_EXTERN_C float ClothSettings_bending_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->bending);
}

RNA_EXTERN_C void ClothSettings_bending_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_bending_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_bending_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_bend);
}

RNA_EXTERN_C void ClothSettings_bending_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_bend_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_bending_damping_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->bending_damping);
}

RNA_EXTERN_C void ClothSettings_bending_damping_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->bending_damping = (std::remove_reference_t<decltype(data->bending_damping)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->bending_damping = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C bool ClothSettings_use_sewing_springs_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (((data->flags) & 16384) != 0);
}

RNA_EXTERN_C void ClothSettings_use_sewing_springs_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags |= 16384; }
    else { data->flags &= ~16384; }
}

RNA_EXTERN_C void ClothSettings_vertex_group_bending_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_bend_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_bending_length(PointerRNA *ptr)
{
    return rna_ClothSettings_bend_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_bending_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_bend_vgroup_set(ptr, value);
}

RNA_EXTERN_C PointerRNA ClothSettings_effector_weights_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

RNA_EXTERN_C PointerRNA ClothSettings_rest_shape_key_get(PointerRNA *ptr)
{
    return rna_ClothSettings_rest_shape_key_get(ptr);
}

RNA_EXTERN_C void ClothSettings_rest_shape_key_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ClothSettings_rest_shape_key_set(ptr, value, reports);
}

RNA_EXTERN_C bool ClothSettings_use_dynamic_mesh_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (((data->flags) & 32768) != 0);
}

RNA_EXTERN_C void ClothSettings_use_dynamic_mesh_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags |= 32768; }
    else { data->flags &= ~32768; }
}

RNA_EXTERN_C int ClothSettings_bending_model_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (int)(data->bending_model);
}

RNA_EXTERN_C void ClothSettings_bending_model_set(PointerRNA *ptr, int value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->bending_model = (std::remove_reference_t<decltype(data->bending_model)>)value;
#else
    data->bending_model = value;
#endif
}

RNA_EXTERN_C bool ClothSettings_use_internal_springs_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

RNA_EXTERN_C void ClothSettings_use_internal_springs_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

RNA_EXTERN_C bool ClothSettings_internal_spring_normal_check_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

RNA_EXTERN_C void ClothSettings_internal_spring_normal_check_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

RNA_EXTERN_C float ClothSettings_internal_spring_max_length_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_spring_max_length);
}

RNA_EXTERN_C void ClothSettings_internal_spring_max_length_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->internal_spring_max_length = (std::remove_reference_t<decltype(data->internal_spring_max_length)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->internal_spring_max_length = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_internal_spring_max_diversion_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_spring_max_diversion);
}

RNA_EXTERN_C void ClothSettings_internal_spring_max_diversion_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->internal_spring_max_diversion = (std::remove_reference_t<decltype(data->internal_spring_max_diversion)>)CLAMPIS(value, 0.0f, 0.7853981853f);
#else
    data->internal_spring_max_diversion = CLAMPIS(value, 0.0f, 0.7853981853f);
#endif
}

RNA_EXTERN_C float ClothSettings_internal_tension_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_tension);
}

RNA_EXTERN_C void ClothSettings_internal_tension_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_internal_tension_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_internal_tension_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_internal_tension);
}

RNA_EXTERN_C void ClothSettings_internal_tension_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_internal_tension_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_internal_compression_stiffness_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->internal_compression);
}

RNA_EXTERN_C void ClothSettings_internal_compression_stiffness_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_internal_compression_set;
    fn(ptr, value);
}

RNA_EXTERN_C float ClothSettings_internal_compression_stiffness_max_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->max_internal_compression);
}

RNA_EXTERN_C void ClothSettings_internal_compression_stiffness_max_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_ClothSettings_max_internal_compression_set;
    fn(ptr, value);
}

RNA_EXTERN_C void ClothSettings_vertex_group_intern_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_internal_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_intern_length(PointerRNA *ptr)
{
    return rna_ClothSettings_internal_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_intern_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_internal_vgroup_set(ptr, value);
}

RNA_EXTERN_C bool ClothSettings_use_pressure_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void ClothSettings_use_pressure_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C bool ClothSettings_use_pressure_volume_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (((data->flags) & 64) != 0);
}

RNA_EXTERN_C void ClothSettings_use_pressure_volume_set(PointerRNA *ptr, bool value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    if (value) { data->flags |= 64; }
    else { data->flags &= ~64; }
}

RNA_EXTERN_C float ClothSettings_uniform_pressure_force_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->uniform_pressure_force);
}

RNA_EXTERN_C void ClothSettings_uniform_pressure_force_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->uniform_pressure_force = (std::remove_reference_t<decltype(data->uniform_pressure_force)>)CLAMPIS(value, -10000.0f, 10000.0f);
#else
    data->uniform_pressure_force = CLAMPIS(value, -10000.0f, 10000.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_target_volume_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->target_volume);
}

RNA_EXTERN_C void ClothSettings_target_volume_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->target_volume = (std::remove_reference_t<decltype(data->target_volume)>)CLAMPIS(value, 0.0f, 10000.0f);
#else
    data->target_volume = CLAMPIS(value, 0.0f, 10000.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_pressure_factor_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->pressure_factor);
}

RNA_EXTERN_C void ClothSettings_pressure_factor_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->pressure_factor = (std::remove_reference_t<decltype(data->pressure_factor)>)CLAMPIS(value, 0.0f, 10000.0f);
#else
    data->pressure_factor = CLAMPIS(value, 0.0f, 10000.0f);
#endif
}

RNA_EXTERN_C float ClothSettings_fluid_density_get(PointerRNA *ptr)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
    return (float)(data->fluid_density);
}

RNA_EXTERN_C void ClothSettings_fluid_density_set(PointerRNA *ptr, float value)
{
    ClothSimSettings *data = (ClothSimSettings *)(ptr->data);
#ifdef __cplusplus
    data->fluid_density = (std::remove_reference_t<decltype(data->fluid_density)>)value;
#else
    data->fluid_density = value;
#endif
}

RNA_EXTERN_C void ClothSettings_vertex_group_pressure_get(PointerRNA *ptr, char *value)
{
    rna_ClothSettings_pressure_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothSettings_vertex_group_pressure_length(PointerRNA *ptr)
{
    return rna_ClothSettings_pressure_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothSettings_vertex_group_pressure_set(PointerRNA *ptr, const char *value)
{
    rna_ClothSettings_pressure_vgroup_set(ptr, value);
}

static PointerRNA ClothCollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ClothCollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ClothCollisionSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ClothCollisionSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ClothCollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ClothCollisionSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ClothCollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ClothCollisionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ClothCollisionSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool ClothCollisionSettings_use_collision_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void ClothCollisionSettings_use_collision_set(PointerRNA *ptr, bool value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C float ClothCollisionSettings_distance_min_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->epsilon);
}

RNA_EXTERN_C void ClothCollisionSettings_distance_min_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->epsilon = (std::remove_reference_t<decltype(data->epsilon)>)CLAMPIS(value, 0.0010000000f, 1.0f);
#else
    data->epsilon = CLAMPIS(value, 0.0010000000f, 1.0f);
#endif
}

RNA_EXTERN_C float ClothCollisionSettings_friction_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->friction);
}

RNA_EXTERN_C void ClothCollisionSettings_friction_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->friction = (std::remove_reference_t<decltype(data->friction)>)CLAMPIS(value, 0.0f, 80.0f);
#else
    data->friction = CLAMPIS(value, 0.0f, 80.0f);
#endif
}

RNA_EXTERN_C float ClothCollisionSettings_damping_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->damping);
}

RNA_EXTERN_C void ClothCollisionSettings_damping_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->damping = (std::remove_reference_t<decltype(data->damping)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->damping = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int ClothCollisionSettings_collision_quality_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (int)(data->loop_count);
}

RNA_EXTERN_C void ClothCollisionSettings_collision_quality_set(PointerRNA *ptr, int value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->loop_count = (std::remove_reference_t<decltype(data->loop_count)>)CLAMPIS(value, 1, 32767);
#else
    data->loop_count = CLAMPIS(value, 1, 32767);
#endif
}

RNA_EXTERN_C float ClothCollisionSettings_impulse_clamp_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->clamp);
}

RNA_EXTERN_C void ClothCollisionSettings_impulse_clamp_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->clamp = (std::remove_reference_t<decltype(data->clamp)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->clamp = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C bool ClothCollisionSettings_use_self_collision_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void ClothCollisionSettings_use_self_collision_set(PointerRNA *ptr, bool value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C float ClothCollisionSettings_self_distance_min_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->selfepsilon);
}

RNA_EXTERN_C void ClothCollisionSettings_self_distance_min_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->selfepsilon = (std::remove_reference_t<decltype(data->selfepsilon)>)CLAMPIS(value, 0.0010000000f, 0.1000000015f);
#else
    data->selfepsilon = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
#endif
}

RNA_EXTERN_C float ClothCollisionSettings_self_friction_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->self_friction);
}

RNA_EXTERN_C void ClothCollisionSettings_self_friction_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->self_friction = (std::remove_reference_t<decltype(data->self_friction)>)CLAMPIS(value, 0.0f, 80.0f);
#else
    data->self_friction = CLAMPIS(value, 0.0f, 80.0f);
#endif
}

RNA_EXTERN_C PointerRNA ClothCollisionSettings_collection_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->group);
}

RNA_EXTERN_C void ClothCollisionSettings_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

RNA_EXTERN_C void ClothCollisionSettings_vertex_group_self_collisions_get(PointerRNA *ptr, char *value)
{
    rna_CollSettings_selfcol_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothCollisionSettings_vertex_group_self_collisions_length(PointerRNA *ptr)
{
    return rna_CollSettings_selfcol_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothCollisionSettings_vertex_group_self_collisions_set(PointerRNA *ptr, const char *value)
{
    rna_CollSettings_selfcol_vgroup_set(ptr, value);
}

RNA_EXTERN_C void ClothCollisionSettings_vertex_group_object_collisions_get(PointerRNA *ptr, char *value)
{
    rna_CollSettings_objcol_vgroup_get(ptr, value);
}

RNA_EXTERN_C int ClothCollisionSettings_vertex_group_object_collisions_length(PointerRNA *ptr)
{
    return rna_CollSettings_objcol_vgroup_length(ptr);
}

RNA_EXTERN_C void ClothCollisionSettings_vertex_group_object_collisions_set(PointerRNA *ptr, const char *value)
{
    rna_CollSettings_objcol_vgroup_set(ptr, value);
}

RNA_EXTERN_C float ClothCollisionSettings_self_impulse_clamp_get(PointerRNA *ptr)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
    return (float)(data->self_clamp);
}

RNA_EXTERN_C void ClothCollisionSettings_self_impulse_clamp_set(PointerRNA *ptr, float value)
{
    ClothCollSettings *data = (ClothCollSettings *)(ptr->data);
#ifdef __cplusplus
    data->self_clamp = (std::remove_reference_t<decltype(data->self_clamp)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->self_clamp = CLAMPIS(value, 0.0f, 100.0f);
#endif
}




/* Solver Result */
CollectionPropertyRNA rna_ClothSolverResult_rna_properties = {
	{(PropertyRNA *)&rna_ClothSolverResult_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_rna_properties_begin, ClothSolverResult_rna_properties_next, ClothSolverResult_rna_properties_end, ClothSolverResult_rna_properties_get, nullptr, nullptr, ClothSolverResult_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ClothSolverResult_rna_type = {
	{(PropertyRNA *)&rna_ClothSolverResult_status, (PropertyRNA *)&rna_ClothSolverResult_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_ClothSolverResult_status_items[5] = {
	{1, "SUCCESS", 0, "Success", "Computation was successful"},
	{2, "NUMERICAL_ISSUE", 0, "Numerical Issue", "The provided data did not satisfy the prerequisites"},
	{4, "NO_CONVERGENCE", 0, "No Convergence", "Iterative procedure did not converge"},
	{8, "INVALID_INPUT", 0, "Invalid Input", "The inputs are invalid, or the algorithm has been improperly called"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ClothSolverResult_status = {
	{(PropertyRNA *)&rna_ClothSolverResult_max_error, (PropertyRNA *)&rna_ClothSolverResult_rna_type,
	-1, "status", 2097154, 0, 0, 0, 0, "Status",
	"Status of the solver iteration",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_status_get, nullptr, nullptr, nullptr, nullptr, rna_ClothSolverResult_status_items, 4, 1
};

FloatPropertyRNA rna_ClothSolverResult_max_error = {
	{(PropertyRNA *)&rna_ClothSolverResult_min_error, (PropertyRNA *)&rna_ClothSolverResult_status,
	-1, "max_error", 2, 0, 0, 0, 0, "Maximum Error",
	"Maximum error during substeps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_max_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSolverResult_min_error = {
	{(PropertyRNA *)&rna_ClothSolverResult_avg_error, (PropertyRNA *)&rna_ClothSolverResult_max_error,
	-1, "min_error", 2, 0, 0, 0, 0, "Minimum Error",
	"Minimum error during substeps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_min_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSolverResult_avg_error = {
	{(PropertyRNA *)&rna_ClothSolverResult_max_iterations, (PropertyRNA *)&rna_ClothSolverResult_min_error,
	-1, "avg_error", 2, 0, 0, 0, 0, "Average Error",
	"Average error during substeps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_avg_error_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_ClothSolverResult_max_iterations = {
	{(PropertyRNA *)&rna_ClothSolverResult_min_iterations, (PropertyRNA *)&rna_ClothSolverResult_avg_error,
	-1, "max_iterations", 2, 0, 0, 0, 0, "Maximum Iterations",
	"Maximum iterations during substeps",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_max_iterations_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_ClothSolverResult_min_iterations = {
	{(PropertyRNA *)&rna_ClothSolverResult_avg_iterations, (PropertyRNA *)&rna_ClothSolverResult_max_iterations,
	-1, "min_iterations", 2, 0, 0, 0, 0, "Minimum Iterations",
	"Minimum iterations during substeps",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_min_iterations_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_ClothSolverResult_avg_iterations = {
	{nullptr, (PropertyRNA *)&rna_ClothSolverResult_min_iterations,
	-1, "avg_iterations", 2, 0, 0, 0, 0, "Average Iterations",
	"Average iterations during substeps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSolverResult_avg_iterations_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_ClothSolverResult = {
	{(ContainerRNA *)&RNA_ClothSettings, (ContainerRNA *)&RNA_CameraDOFSettings,
	nullptr,
	{(PropertyRNA *)&rna_ClothSolverResult_rna_properties, (PropertyRNA *)&rna_ClothSolverResult_avg_iterations}},
	"ClothSolverResult", nullptr, nullptr, 516, nullptr, "Solver Result",
	"Result of cloth solver iteration",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ClothSolverResult_rna_properties,
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

/* Cloth Settings */
CollectionPropertyRNA rna_ClothSettings_rna_properties = {
	{(PropertyRNA *)&rna_ClothSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_rna_properties_begin, ClothSettings_rna_properties_next, ClothSettings_rna_properties_end, ClothSettings_rna_properties_get, nullptr, nullptr, ClothSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ClothSettings_rna_type = {
	{(PropertyRNA *)&rna_ClothSettings_goal_min, (PropertyRNA *)&rna_ClothSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_ClothSettings_goal_min = {
	{(PropertyRNA *)&rna_ClothSettings_goal_max, (PropertyRNA *)&rna_ClothSettings_rna_type,
	-1, "goal_min", 3, 1, 0, 4, 0, "Goal Minimum",
	"Goal minimum, vertex group weights are scaled to match this range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, mingoal), (RawPropertyType)5, nullptr},
	ClothSettings_goal_min_get, ClothSettings_goal_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_goal_max = {
	{(PropertyRNA *)&rna_ClothSettings_goal_default, (PropertyRNA *)&rna_ClothSettings_goal_min,
	-1, "goal_max", 3, 1, 0, 4, 0, "Goal Maximum",
	"Goal maximum, vertex group weights are scaled to match this range",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, maxgoal), (RawPropertyType)5, nullptr},
	ClothSettings_goal_max_get, ClothSettings_goal_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_goal_default = {
	{(PropertyRNA *)&rna_ClothSettings_goal_spring, (PropertyRNA *)&rna_ClothSettings_goal_max,
	-1, "goal_default", 3, 1, 0, 4, 0, "Goal Default",
	"Default Goal (vertex target position) value, when no Vertex Group used",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, defgoal), (RawPropertyType)5, nullptr},
	ClothSettings_goal_default_get, ClothSettings_goal_default_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_goal_spring = {
	{(PropertyRNA *)&rna_ClothSettings_goal_friction, (PropertyRNA *)&rna_ClothSettings_goal_default,
	-1, "goal_spring", 3, 1, 0, 4, 0, "Goal Stiffness",
	"Goal (vertex target position) spring stiffness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, goalspring), (RawPropertyType)5, nullptr},
	ClothSettings_goal_spring_get, ClothSettings_goal_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_goal_friction = {
	{(PropertyRNA *)&rna_ClothSettings_internal_friction, (PropertyRNA *)&rna_ClothSettings_goal_spring,
	-1, "goal_friction", 3, 1, 0, 4, 0, "Goal Damping",
	"Goal (vertex target position) friction",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, goalfrict), (RawPropertyType)5, nullptr},
	ClothSettings_goal_friction_get, ClothSettings_goal_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_friction = {
	{(PropertyRNA *)&rna_ClothSettings_collider_friction, (PropertyRNA *)&rna_ClothSettings_goal_friction,
	-1, "internal_friction", 3, 1, 0, 4, 0, "Internal Friction",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, velocity_smooth), (RawPropertyType)5, nullptr},
	ClothSettings_internal_friction_get, ClothSettings_internal_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_collider_friction = {
	{(PropertyRNA *)&rna_ClothSettings_density_target, (PropertyRNA *)&rna_ClothSettings_internal_friction,
	-1, "collider_friction", 3, 1, 0, 4, 0, "Collider Friction",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, collider_friction), (RawPropertyType)5, nullptr},
	ClothSettings_collider_friction_get, ClothSettings_collider_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_density_target = {
	{(PropertyRNA *)&rna_ClothSettings_density_strength, (PropertyRNA *)&rna_ClothSettings_collider_friction,
	-1, "density_target", 3, 1, 0, 4, 0, "Target Density",
	"Maximum density of hair",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, density_target), (RawPropertyType)5, nullptr},
	ClothSettings_density_target_get, ClothSettings_density_target_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_density_strength = {
	{(PropertyRNA *)&rna_ClothSettings_mass, (PropertyRNA *)&rna_ClothSettings_density_target,
	-1, "density_strength", 3, 1, 0, 4, 0, "Target Density Strength",
	"Influence of target density on the simulation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, density_strength), (RawPropertyType)5, nullptr},
	ClothSettings_density_strength_get, ClothSettings_density_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_mass = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_mass, (PropertyRNA *)&rna_ClothSettings_density_strength,
	-1, "mass", 3, 1, 0, 4, 0, "Vertex Mass",
	"The mass of each vertex on the cloth material",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, mass), (RawPropertyType)5, nullptr},
	ClothSettings_mass_get, ClothSettings_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.3000000119f, nullptr
};

StringPropertyRNA rna_ClothSettings_vertex_group_mass = {
	{(PropertyRNA *)&rna_ClothSettings_gravity, (PropertyRNA *)&rna_ClothSettings_mass,
	-1, "vertex_group_mass", 262145, 0, 0, 0, 0, "Pin Vertex Group",
	"Vertex Group for pinning of vertices",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_pinning_changed, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_mass_get, ClothSettings_vertex_group_mass_length, ClothSettings_vertex_group_mass_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

static float rna_ClothSettings_gravity_default[3] = {
	0.0f,
	0.0f,
	-9.8100004196f
};

FloatPropertyRNA rna_ClothSettings_gravity = {
	{(PropertyRNA *)&rna_ClothSettings_air_damping, (PropertyRNA *)&rna_ClothSettings_vertex_group_mass,
	-1, "gravity", 3, 1, 0, 0, 0, "Gravity",
	"Gravity or external force vector",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ACCELERATION | (int)PROP_UNIT_ACCELERATION), nullptr, 1, {3, 0, 0}, 3,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ClothSettings_gravity_get, ClothSettings_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, rna_ClothSettings_gravity_default
};

FloatPropertyRNA rna_ClothSettings_air_damping = {
	{(PropertyRNA *)&rna_ClothSettings_pin_stiffness, (PropertyRNA *)&rna_ClothSettings_gravity,
	-1, "air_damping", 3, 1, 0, 4, 0, "Air Damping",
	"Air has normally some thickness which slows falling things down",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, Cvi), (RawPropertyType)5, nullptr},
	ClothSettings_air_damping_get, ClothSettings_air_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_pin_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_quality, (PropertyRNA *)&rna_ClothSettings_air_damping,
	-1, "pin_stiffness", 3, 1, 0, 4, 0, "Pin Stiffness",
	"Pin (vertex target position) spring stiffness",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, goalspring), (RawPropertyType)5, nullptr},
	ClothSettings_pin_stiffness_get, ClothSettings_pin_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_ClothSettings_quality = {
	{(PropertyRNA *)&rna_ClothSettings_time_scale, (PropertyRNA *)&rna_ClothSettings_pin_stiffness,
	-1, "quality", 3, 1, 0, 4, 0, "Quality",
	"Quality of the simulation in steps per frame (higher is better quality but slower)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, stepsPerFrame), (RawPropertyType)0, nullptr},
	ClothSettings_quality_get, ClothSettings_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 80, 1, INT_MAX, 1, 5, nullptr
};

FloatPropertyRNA rna_ClothSettings_time_scale = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_shrink, (PropertyRNA *)&rna_ClothSettings_quality,
	-1, "time_scale", 3, 1, 0, 4, 0, "Speed",
	"Cloth speed is multiplied by this value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, time_scale), (RawPropertyType)5, nullptr},
	ClothSettings_time_scale_get, ClothSettings_time_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

StringPropertyRNA rna_ClothSettings_vertex_group_shrink = {
	{(PropertyRNA *)&rna_ClothSettings_shrink_min, (PropertyRNA *)&rna_ClothSettings_time_scale,
	-1, "vertex_group_shrink", 262145, 0, 0, 0, 0, "Shrink Vertex Group",
	"Vertex Group for shrinking cloth",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_shrink_get, ClothSettings_vertex_group_shrink_length, ClothSettings_vertex_group_shrink_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FloatPropertyRNA rna_ClothSettings_shrink_min = {
	{(PropertyRNA *)&rna_ClothSettings_shrink_max, (PropertyRNA *)&rna_ClothSettings_vertex_group_shrink,
	-1, "shrink_min", 3, 1, 0, 0, 0, "Shrink Factor",
	"Factor by which to shrink cloth",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_shrink_min_get, ClothSettings_shrink_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, 1.0f, 0.0500000007f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_shrink_max = {
	{(PropertyRNA *)&rna_ClothSettings_voxel_cell_size, (PropertyRNA *)&rna_ClothSettings_shrink_min,
	-1, "shrink_max", 3, 1, 0, 0, 0, "Shrink Factor Max",
	"Max amount to shrink cloth by",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_shrink_max_get, ClothSettings_shrink_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -FLT_MAX, 1.0f, 0.0500000007f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_voxel_cell_size = {
	{(PropertyRNA *)&rna_ClothSettings_tension_damping, (PropertyRNA *)&rna_ClothSettings_shrink_max,
	-1, "voxel_cell_size", 3, 1, 0, 4, 0, "Voxel Grid Cell Size",
	"Size of the voxel grid cells for interaction effects",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, voxel_cell_size), (RawPropertyType)5, nullptr},
	ClothSettings_voxel_cell_size_get, ClothSettings_voxel_cell_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10000.0f, 0.0001000000f, 10000.0f, 10.0f, 3, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_ClothSettings_tension_damping = {
	{(PropertyRNA *)&rna_ClothSettings_compression_damping, (PropertyRNA *)&rna_ClothSettings_voxel_cell_size,
	-1, "tension_damping", 3, 1, 0, 4, 0, "Tension Spring Damping",
	"Amount of damping in stretching behavior",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, tension_damp), (RawPropertyType)5, nullptr},
	ClothSettings_tension_damping_get, ClothSettings_tension_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_compression_damping = {
	{(PropertyRNA *)&rna_ClothSettings_shear_damping, (PropertyRNA *)&rna_ClothSettings_tension_damping,
	-1, "compression_damping", 3, 1, 0, 4, 0, "Compression Spring Damping",
	"Amount of damping in compression behavior",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, compression_damp), (RawPropertyType)5, nullptr},
	ClothSettings_compression_damping_get, ClothSettings_compression_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_shear_damping = {
	{(PropertyRNA *)&rna_ClothSettings_tension_stiffness, (PropertyRNA *)&rna_ClothSettings_compression_damping,
	-1, "shear_damping", 3, 1, 0, 4, 0, "Shear Spring Damping",
	"Amount of damping in shearing behavior",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, shear_damp), (RawPropertyType)5, nullptr},
	ClothSettings_shear_damping_get, ClothSettings_shear_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_tension_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_tension_stiffness_max, (PropertyRNA *)&rna_ClothSettings_shear_damping,
	-1, "tension_stiffness", 3, 1, 0, 0, 0, "Tension Stiffness",
	"How much the material resists stretching",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_tension_stiffness_get, ClothSettings_tension_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_tension_stiffness_max = {
	{(PropertyRNA *)&rna_ClothSettings_compression_stiffness, (PropertyRNA *)&rna_ClothSettings_tension_stiffness,
	-1, "tension_stiffness_max", 3, 1, 0, 0, 0, "Tension Stiffness Maximum",
	"Maximum tension stiffness value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_tension_stiffness_max_get, ClothSettings_tension_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_compression_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_compression_stiffness_max, (PropertyRNA *)&rna_ClothSettings_tension_stiffness_max,
	-1, "compression_stiffness", 3, 1, 0, 0, 0, "Compression Stiffness",
	"How much the material resists compression",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_compression_stiffness_get, ClothSettings_compression_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_compression_stiffness_max = {
	{(PropertyRNA *)&rna_ClothSettings_shear_stiffness, (PropertyRNA *)&rna_ClothSettings_compression_stiffness,
	-1, "compression_stiffness_max", 3, 1, 0, 0, 0, "Compression Stiffness Maximum",
	"Maximum compression stiffness value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_compression_stiffness_max_get, ClothSettings_compression_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_shear_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_shear_stiffness_max, (PropertyRNA *)&rna_ClothSettings_compression_stiffness_max,
	-1, "shear_stiffness", 3, 1, 0, 0, 0, "Shear Stiffness",
	"How much the material resists shearing",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_shear_stiffness_get, ClothSettings_shear_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_shear_stiffness_max = {
	{(PropertyRNA *)&rna_ClothSettings_sewing_force_max, (PropertyRNA *)&rna_ClothSettings_shear_stiffness,
	-1, "shear_stiffness_max", 3, 1, 0, 0, 0, "Shear Stiffness Maximum",
	"Maximum shear scaling value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_shear_stiffness_max_get, ClothSettings_shear_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_sewing_force_max = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_structural_stiffness, (PropertyRNA *)&rna_ClothSettings_shear_stiffness_max,
	-1, "sewing_force_max", 3, 1, 0, 0, 0, "Sewing Force Max",
	"Maximum sewing force",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_sewing_force_max_get, ClothSettings_sewing_force_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, nullptr
};

StringPropertyRNA rna_ClothSettings_vertex_group_structural_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_shear_stiffness, (PropertyRNA *)&rna_ClothSettings_sewing_force_max,
	-1, "vertex_group_structural_stiffness", 262145, 0, 0, 0, 0, "Structural Stiffness Vertex Group",
	"Vertex group for fine control over structural stiffness",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_structural_stiffness_get, ClothSettings_vertex_group_structural_stiffness_length, ClothSettings_vertex_group_structural_stiffness_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_ClothSettings_vertex_group_shear_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_bending_stiffness, (PropertyRNA *)&rna_ClothSettings_vertex_group_structural_stiffness,
	-1, "vertex_group_shear_stiffness", 262145, 0, 0, 0, 0, "Shear Stiffness Vertex Group",
	"Vertex group for fine control over shear stiffness",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_shear_stiffness_get, ClothSettings_vertex_group_shear_stiffness_length, ClothSettings_vertex_group_shear_stiffness_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FloatPropertyRNA rna_ClothSettings_bending_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_bending_stiffness_max, (PropertyRNA *)&rna_ClothSettings_vertex_group_shear_stiffness,
	-1, "bending_stiffness", 3, 1, 0, 0, 0, "Bending Stiffness",
	"How much the material resists bending",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_bending_stiffness_get, ClothSettings_bending_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_ClothSettings_bending_stiffness_max = {
	{(PropertyRNA *)&rna_ClothSettings_bending_damping, (PropertyRNA *)&rna_ClothSettings_bending_stiffness,
	-1, "bending_stiffness_max", 3, 1, 0, 0, 0, "Bending Stiffness Maximum",
	"Maximum bending stiffness value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_bending_stiffness_max_get, ClothSettings_bending_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_ClothSettings_bending_damping = {
	{(PropertyRNA *)&rna_ClothSettings_use_sewing_springs, (PropertyRNA *)&rna_ClothSettings_bending_stiffness_max,
	-1, "bending_damping", 3, 1, 0, 4, 0, "Bending Spring Damping",
	"Amount of damping in bending behavior",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, bending_damping), (RawPropertyType)5, nullptr},
	ClothSettings_bending_damping_get, ClothSettings_bending_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.5000000000f, nullptr
};

BoolPropertyRNA rna_ClothSettings_use_sewing_springs = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_bending, (PropertyRNA *)&rna_ClothSettings_bending_damping,
	-1, "use_sewing_springs", 1, 1, 0, 0, 0, "Sew Cloth",
	"Pulls loose edges together",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_use_sewing_springs_get, ClothSettings_use_sewing_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_ClothSettings_vertex_group_bending = {
	{(PropertyRNA *)&rna_ClothSettings_effector_weights, (PropertyRNA *)&rna_ClothSettings_use_sewing_springs,
	-1, "vertex_group_bending", 262145, 0, 0, 0, 0, "Bending Stiffness Vertex Group",
	"Vertex group for fine control over bending stiffness",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_bending_get, ClothSettings_vertex_group_bending_length, ClothSettings_vertex_group_bending_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_ClothSettings_effector_weights = {
	{(PropertyRNA *)&rna_ClothSettings_rest_shape_key, (PropertyRNA *)&rna_ClothSettings_vertex_group_bending,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_effector_weights_get, nullptr, nullptr, nullptr,&RNA_EffectorWeights
};

PointerPropertyRNA rna_ClothSettings_rest_shape_key = {
	{(PropertyRNA *)&rna_ClothSettings_use_dynamic_mesh, (PropertyRNA *)&rna_ClothSettings_effector_weights,
	-1, "rest_shape_key", 8388609, 0, 0, 0, 0, "Rest Shape Key",
	"Shape key to use the rest spring lengths from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_rest_shape_key_get, ClothSettings_rest_shape_key_set, nullptr, nullptr,&RNA_ShapeKey
};

BoolPropertyRNA rna_ClothSettings_use_dynamic_mesh = {
	{(PropertyRNA *)&rna_ClothSettings_bending_model, (PropertyRNA *)&rna_ClothSettings_rest_shape_key,
	-1, "use_dynamic_mesh", 1, 1, 0, 0, 0, "Dynamic Base Mesh",
	"Make simulation respect deformations in the base mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_use_dynamic_mesh_get, ClothSettings_use_dynamic_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_ClothSettings_bending_model_items[3] = {
	{1, "ANGULAR", 0, "Angular", "Cloth model with angular bending springs"},
	{0, "LINEAR", 0, "Linear", "Cloth model with linear bending springs (legacy)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ClothSettings_bending_model = {
	{(PropertyRNA *)&rna_ClothSettings_use_internal_springs, (PropertyRNA *)&rna_ClothSettings_use_dynamic_mesh,
	-1, "bending_model", 1, 1, 0, 4, 0, "Bending Model",
	"Physical model for simulating bending forces",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, bending_model), (RawPropertyType)1, nullptr},
	ClothSettings_bending_model_get, ClothSettings_bending_model_set, nullptr, nullptr, nullptr, rna_ClothSettings_bending_model_items, 2, 1
};

BoolPropertyRNA rna_ClothSettings_use_internal_springs = {
	{(PropertyRNA *)&rna_ClothSettings_internal_spring_normal_check, (PropertyRNA *)&rna_ClothSettings_bending_model,
	-1, "use_internal_springs", 1, 1, 0, 0, 0, "Create Internal Springs",
	"Simulate an internal volume structure by creating springs connecting the opposite sides of the mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_use_internal_springs_get, ClothSettings_use_internal_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ClothSettings_internal_spring_normal_check = {
	{(PropertyRNA *)&rna_ClothSettings_internal_spring_max_length, (PropertyRNA *)&rna_ClothSettings_use_internal_springs,
	-1, "internal_spring_normal_check", 1, 1, 0, 0, 0, "Check Internal Spring Normals",
	"Require the points the internal springs connect to have opposite normal directions",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_internal_spring_normal_check_get, ClothSettings_internal_spring_normal_check_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_spring_max_length = {
	{(PropertyRNA *)&rna_ClothSettings_internal_spring_max_diversion, (PropertyRNA *)&rna_ClothSettings_internal_spring_normal_check,
	-1, "internal_spring_max_length", 1, 1, 0, 4, 0, "Internal Spring Max Length",
	"The maximum length an internal spring can have during creation. If the distance between internal points is greater than this, no internal spring will be created between these points. A length of zero means that there is no length limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, internal_spring_max_length), (RawPropertyType)5, nullptr},
	ClothSettings_internal_spring_max_length_get, ClothSettings_internal_spring_max_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_spring_max_diversion = {
	{(PropertyRNA *)&rna_ClothSettings_internal_tension_stiffness, (PropertyRNA *)&rna_ClothSettings_internal_spring_max_length,
	-1, "internal_spring_max_diversion", 1, 1, 0, 4, 0, "Internal Spring Max Diversion",
	"How much the rays used to connect the internal points can diverge from the vertex normal",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, internal_spring_max_diversion), (RawPropertyType)5, nullptr},
	ClothSettings_internal_spring_max_diversion_get, ClothSettings_internal_spring_max_diversion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.7853981853f, 0.0f, 0.7853981853f, 10.0f, 3, 0.7853981853f, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_tension_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_internal_tension_stiffness_max, (PropertyRNA *)&rna_ClothSettings_internal_spring_max_diversion,
	-1, "internal_tension_stiffness", 3, 1, 0, 0, 0, "Tension Stiffness",
	"How much the material resists stretching",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_internal_tension_stiffness_get, ClothSettings_internal_tension_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_tension_stiffness_max = {
	{(PropertyRNA *)&rna_ClothSettings_internal_compression_stiffness, (PropertyRNA *)&rna_ClothSettings_internal_tension_stiffness,
	-1, "internal_tension_stiffness_max", 3, 1, 0, 0, 0, "Tension Stiffness Maximum",
	"Maximum tension stiffness value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_internal_tension_stiffness_max_get, ClothSettings_internal_tension_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_compression_stiffness = {
	{(PropertyRNA *)&rna_ClothSettings_internal_compression_stiffness_max, (PropertyRNA *)&rna_ClothSettings_internal_tension_stiffness_max,
	-1, "internal_compression_stiffness", 3, 1, 0, 0, 0, "Compression Stiffness",
	"How much the material resists compression",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_internal_compression_stiffness_get, ClothSettings_internal_compression_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_internal_compression_stiffness_max = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_intern, (PropertyRNA *)&rna_ClothSettings_internal_compression_stiffness,
	-1, "internal_compression_stiffness_max", 3, 1, 0, 0, 0, "Compression Stiffness Maximum",
	"Maximum compression stiffness value",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_internal_compression_stiffness_max_get, ClothSettings_internal_compression_stiffness_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 15.0f, nullptr
};

StringPropertyRNA rna_ClothSettings_vertex_group_intern = {
	{(PropertyRNA *)&rna_ClothSettings_use_pressure, (PropertyRNA *)&rna_ClothSettings_internal_compression_stiffness_max,
	-1, "vertex_group_intern", 262145, 0, 0, 0, 0, "Internal Springs Vertex Group",
	"Vertex group for fine control over the internal spring stiffness",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, rna_ClothSettings_internal_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_intern_get, ClothSettings_vertex_group_intern_length, ClothSettings_vertex_group_intern_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_ClothSettings_use_pressure = {
	{(PropertyRNA *)&rna_ClothSettings_use_pressure_volume, (PropertyRNA *)&rna_ClothSettings_vertex_group_intern,
	-1, "use_pressure", 1, 1, 0, 0, 0, "Use Pressure",
	"Simulate pressure inside a closed cloth mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_use_pressure_get, ClothSettings_use_pressure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ClothSettings_use_pressure_volume = {
	{(PropertyRNA *)&rna_ClothSettings_uniform_pressure_force, (PropertyRNA *)&rna_ClothSettings_use_pressure,
	-1, "use_pressure_volume", 1, 1, 0, 0, 0, "Use Custom Volume",
	"Use the Target Volume parameter as the initial volume, instead of calculating it from the mesh itself",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_use_pressure_volume_get, ClothSettings_use_pressure_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_ClothSettings_uniform_pressure_force = {
	{(PropertyRNA *)&rna_ClothSettings_target_volume, (PropertyRNA *)&rna_ClothSettings_use_pressure_volume,
	-1, "uniform_pressure_force", 3, 1, 0, 4, 0, "Pressure",
	"The uniform pressure that is constantly applied to the mesh, in units of Pressure Scale. Can be negative",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, uniform_pressure_force), (RawPropertyType)5, nullptr},
	ClothSettings_uniform_pressure_force_get, ClothSettings_uniform_pressure_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -10000.0f, 10000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_target_volume = {
	{(PropertyRNA *)&rna_ClothSettings_pressure_factor, (PropertyRNA *)&rna_ClothSettings_uniform_pressure_force,
	-1, "target_volume", 3, 1, 0, 4, 0, "Target Volume",
	"The mesh volume where the inner/outer pressure will be the same. If set to zero the change in volume will not affect pressure",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, target_volume), (RawPropertyType)5, nullptr},
	ClothSettings_target_volume_get, ClothSettings_target_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_pressure_factor = {
	{(PropertyRNA *)&rna_ClothSettings_fluid_density, (PropertyRNA *)&rna_ClothSettings_target_volume,
	-1, "pressure_factor", 3, 1, 0, 4, 0, "Pressure Scale",
	"Ambient pressure (kPa) that balances out between the inside and outside of the object when it has the target volume",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, pressure_factor), (RawPropertyType)5, nullptr},
	ClothSettings_pressure_factor_get, ClothSettings_pressure_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_ClothSettings_fluid_density = {
	{(PropertyRNA *)&rna_ClothSettings_vertex_group_pressure, (PropertyRNA *)&rna_ClothSettings_pressure_factor,
	-1, "fluid_density", 3, 1, 0, 4, 0, "Fluid Density",
	"Density (kg/l) of the fluid contained inside the object, used to create a hydrostatic pressure gradient simulating the weight of the internal fluid, or buoyancy from the surrounding fluid if negative",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothSimSettings, fluid_density), (RawPropertyType)5, nullptr},
	ClothSettings_fluid_density_get, ClothSettings_fluid_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 0.0500000007f, 4, 0.0f, nullptr
};

StringPropertyRNA rna_ClothSettings_vertex_group_pressure = {
	{nullptr, (PropertyRNA *)&rna_ClothSettings_fluid_density,
	-1, "vertex_group_pressure", 262145, 0, 0, 0, 0, "Pressure Vertex Group",
	"Vertex Group for where to apply pressure. Zero weight means no pressure while a weight of one means full pressure. Faces with a vertex that has zero weight will be excluded from the volume calculation",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothSettings_vertex_group_pressure_get, ClothSettings_vertex_group_pressure_length, ClothSettings_vertex_group_pressure_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_ClothSettings = {
	{(ContainerRNA *)&RNA_ClothCollisionSettings, (ContainerRNA *)&RNA_ClothSolverResult,
	nullptr,
	{(PropertyRNA *)&rna_ClothSettings_rna_properties, (PropertyRNA *)&rna_ClothSettings_vertex_group_pressure}},
	"ClothSettings", nullptr, nullptr, 516, nullptr, "Cloth Settings",
	"Cloth simulation settings for an object",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ClothSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ClothSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Cloth Collision Settings */
CollectionPropertyRNA rna_ClothCollisionSettings_rna_properties = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_rna_properties_begin, ClothCollisionSettings_rna_properties_next, ClothCollisionSettings_rna_properties_end, ClothCollisionSettings_rna_properties_get, nullptr, nullptr, ClothCollisionSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ClothCollisionSettings_rna_type = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_use_collision, (PropertyRNA *)&rna_ClothCollisionSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_ClothCollisionSettings_use_collision = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_distance_min, (PropertyRNA *)&rna_ClothCollisionSettings_rna_type,
	-1, "use_collision", 3, 1, 0, 0, 0, "Enable Collision",
	"Enable collisions with other objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_use_collision_get, ClothCollisionSettings_use_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FloatPropertyRNA rna_ClothCollisionSettings_distance_min = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_friction, (PropertyRNA *)&rna_ClothCollisionSettings_use_collision,
	-1, "distance_min", 3, 1, 0, 4, 0, "Minimum Distance",
	"Minimum distance between collision objects before collision response takes effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, epsilon), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_distance_min_get, ClothCollisionSettings_distance_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0149999997f, nullptr
};

FloatPropertyRNA rna_ClothCollisionSettings_friction = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_damping, (PropertyRNA *)&rna_ClothCollisionSettings_distance_min,
	-1, "friction", 3, 1, 0, 4, 0, "Friction",
	"Friction force if a collision happened (higher = less movement)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, friction), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_friction_get, ClothCollisionSettings_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, 5.0f, nullptr
};

FloatPropertyRNA rna_ClothCollisionSettings_damping = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_collision_quality, (PropertyRNA *)&rna_ClothCollisionSettings_friction,
	-1, "damping", 3, 1, 0, 4, 0, "Restitution",
	"Amount of velocity lost on collision",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, damping), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_damping_get, ClothCollisionSettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_ClothCollisionSettings_collision_quality = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_impulse_clamp, (PropertyRNA *)&rna_ClothCollisionSettings_damping,
	-1, "collision_quality", 3, 1, 0, 4, 0, "Collision Quality",
	"How many collision iterations should be done. (higher is better quality but slower)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, loop_count), (RawPropertyType)1, nullptr},
	ClothCollisionSettings_collision_quality_get, ClothCollisionSettings_collision_quality_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 20, 1, 32767, 1, 2, nullptr
};

FloatPropertyRNA rna_ClothCollisionSettings_impulse_clamp = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_use_self_collision, (PropertyRNA *)&rna_ClothCollisionSettings_collision_quality,
	-1, "impulse_clamp", 3, 1, 0, 4, 0, "Impulse Clamping",
	"Clamp collision impulses to avoid instability (0.0 to disable clamping)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, clamp), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_impulse_clamp_get, ClothCollisionSettings_impulse_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_ClothCollisionSettings_use_self_collision = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_self_distance_min, (PropertyRNA *)&rna_ClothCollisionSettings_impulse_clamp,
	-1, "use_self_collision", 3, 1, 0, 0, 0, "Enable Self Collision",
	"Enable self collisions",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_use_self_collision_get, ClothCollisionSettings_use_self_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_ClothCollisionSettings_self_distance_min = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_self_friction, (PropertyRNA *)&rna_ClothCollisionSettings_use_self_collision,
	-1, "self_distance_min", 3, 1, 0, 4, 0, "Self Minimum Distance",
	"Minimum distance between cloth faces before collision response takes effect",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, selfepsilon), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_self_distance_min_get, ClothCollisionSettings_self_distance_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 10.0f, 3, 0.0149999997f, nullptr
};

FloatPropertyRNA rna_ClothCollisionSettings_self_friction = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_collection, (PropertyRNA *)&rna_ClothCollisionSettings_self_distance_min,
	-1, "self_friction", 3, 1, 0, 4, 0, "Self Friction",
	"Friction with self contact",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, self_friction), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_self_friction_get, ClothCollisionSettings_self_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, 5.0f, nullptr
};

PointerPropertyRNA rna_ClothCollisionSettings_collection = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_vertex_group_self_collisions, (PropertyRNA *)&rna_ClothCollisionSettings_self_friction,
	-1, "collection", 8388737, 1, 0, 0, 0, "Collision Collection",
	"Limit colliders to this Collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_collection_get, ClothCollisionSettings_collection_set, nullptr, nullptr,&RNA_Collection
};

StringPropertyRNA rna_ClothCollisionSettings_vertex_group_self_collisions = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_vertex_group_object_collisions, (PropertyRNA *)&rna_ClothCollisionSettings_collection,
	-1, "vertex_group_self_collisions", 262145, 0, 0, 0, 0, "Selfcollision Vertex Group",
	"Triangles with all vertices in this group are not used during self collisions",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_vertex_group_self_collisions_get, ClothCollisionSettings_vertex_group_self_collisions_length, ClothCollisionSettings_vertex_group_self_collisions_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StringPropertyRNA rna_ClothCollisionSettings_vertex_group_object_collisions = {
	{(PropertyRNA *)&rna_ClothCollisionSettings_self_impulse_clamp, (PropertyRNA *)&rna_ClothCollisionSettings_vertex_group_self_collisions,
	-1, "vertex_group_object_collisions", 262145, 0, 0, 0, 0, "Collision Vertex Group",
	"Triangles with all vertices in this group are not used during object collisions",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ClothCollisionSettings_vertex_group_object_collisions_get, ClothCollisionSettings_vertex_group_object_collisions_length, ClothCollisionSettings_vertex_group_object_collisions_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FloatPropertyRNA rna_ClothCollisionSettings_self_impulse_clamp = {
	{nullptr, (PropertyRNA *)&rna_ClothCollisionSettings_vertex_group_object_collisions,
	-1, "self_impulse_clamp", 3, 1, 0, 4, 0, "Impulse Clamping",
	"Clamp collision impulses to avoid instability (0.0 to disable clamping)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ClothCollSettings, self_clamp), (RawPropertyType)5, nullptr},
	ClothCollisionSettings_self_impulse_clamp_get, ClothCollisionSettings_self_impulse_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_ClothCollisionSettings = {
	{(ContainerRNA *)&RNA_Collection, (ContainerRNA *)&RNA_ClothSettings,
	nullptr,
	{(PropertyRNA *)&rna_ClothCollisionSettings_rna_properties, (PropertyRNA *)&rna_ClothCollisionSettings_self_impulse_clamp}},
	"ClothCollisionSettings", nullptr, nullptr, 516, nullptr, "Cloth Collision Settings",
	"Cloth simulation settings for self collision and collision with other objects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ClothCollisionSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ClothCollisionSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

