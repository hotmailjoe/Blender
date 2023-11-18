
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

#include "rna_rigidbody.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_RigidBodyWorld_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyWorld_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyWorld_collection;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyWorld_constraints;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyWorld_enabled;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyWorld_time_scale;
RNA_EXTERN_C IntPropertyRNA rna_RigidBodyWorld_substeps_per_frame;
RNA_EXTERN_C IntPropertyRNA rna_RigidBodyWorld_solver_iterations;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyWorld_point_cache;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyWorld_effector_weights;

extern FunctionRNA rna_RigidBodyWorld_convex_sweep_test_func;
extern PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal;
extern IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit;



RNA_EXTERN_C CollectionPropertyRNA rna_RigidBodyObject_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyObject_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_RigidBodyObject_type;
RNA_EXTERN_C EnumPropertyRNA rna_RigidBodyObject_mesh_source;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_enabled;
RNA_EXTERN_C EnumPropertyRNA rna_RigidBodyObject_collision_shape;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_kinematic;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_use_deform;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_mass;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_use_deactivation;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_linear_damping;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_angular_damping;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_friction;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_restitution;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_use_margin;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyObject_collision_margin;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyObject_collision_collections;


RNA_EXTERN_C CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyConstraint_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_RigidBodyConstraint_type;
RNA_EXTERN_C EnumPropertyRNA rna_RigidBodyConstraint_spring_type;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_enabled;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyConstraint_object1;
RNA_EXTERN_C PointerPropertyRNA rna_RigidBodyConstraint_object2;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_breaking;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations;
RNA_EXTERN_C IntPropertyRNA rna_RigidBodyConstraint_solver_iterations;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_x;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_y;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_z;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin;
RNA_EXTERN_C BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_x;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_y;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_z;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_x;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_y;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_z;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity;
RNA_EXTERN_C FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse;

static PointerRNA RigidBodyWorld_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void RigidBodyWorld_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RigidBodyWorld_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyWorld_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RigidBodyWorld_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyWorld_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RigidBodyWorld_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int RigidBodyWorld_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA RigidBodyWorld_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA RigidBodyWorld_collection_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->group);
}

RNA_EXTERN_C void RigidBodyWorld_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->group) {
        id_us_min((ID *)data->group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

RNA_EXTERN_C PointerRNA RigidBodyWorld_constraints_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->constraints);
}

RNA_EXTERN_C void RigidBodyWorld_constraints_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->constraints) {
        id_us_min((ID *)data->constraints);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->constraints = value.data;
}

RNA_EXTERN_C bool RigidBodyWorld_enabled_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void RigidBodyWorld_enabled_set(PointerRNA *ptr, bool value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C float RigidBodyWorld_time_scale_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (float)(data->time_scale);
}

RNA_EXTERN_C void RigidBodyWorld_time_scale_set(PointerRNA *ptr, float value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
#ifdef __cplusplus
    data->time_scale = (std::remove_reference_t<decltype(data->time_scale)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->time_scale = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int RigidBodyWorld_substeps_per_frame_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (int)(data->substeps_per_frame);
}

RNA_EXTERN_C void RigidBodyWorld_substeps_per_frame_set(PointerRNA *ptr, int value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
#ifdef __cplusplus
    data->substeps_per_frame = (std::remove_reference_t<decltype(data->substeps_per_frame)>)CLAMPIS(value, 1, 32767);
#else
    data->substeps_per_frame = CLAMPIS(value, 1, 32767);
#endif
}

RNA_EXTERN_C int RigidBodyWorld_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (int)(data->num_solver_iterations);
}

RNA_EXTERN_C void RigidBodyWorld_solver_iterations_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_RigidBodyWorld_num_solver_iterations_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyWorld_use_split_impulse_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void RigidBodyWorld_use_split_impulse_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyWorld_split_impulse_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA RigidBodyWorld_point_cache_get(PointerRNA *ptr)
{
    return rna_RigidBodyWorld_PointCache_get(ptr);
}

RNA_EXTERN_C PointerRNA RigidBodyWorld_effector_weights_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

static PointerRNA RigidBodyObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void RigidBodyObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RigidBodyObject_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyObject_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RigidBodyObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyObject_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RigidBodyObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int RigidBodyObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA RigidBodyObject_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int RigidBodyObject_type_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void RigidBodyObject_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyOb_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int RigidBodyObject_mesh_source_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->mesh_source);
}

RNA_EXTERN_C void RigidBodyObject_mesh_source_set(PointerRNA *ptr, int value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
#ifdef __cplusplus
    data->mesh_source = (std::remove_reference_t<decltype(data->mesh_source)>)value;
#else
    data->mesh_source = value;
#endif
}

RNA_EXTERN_C bool RigidBodyObject_enabled_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return !(((data->flag) & 32) != 0);
}

RNA_EXTERN_C void RigidBodyObject_enabled_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyOb_disabled_set;
    fn(ptr, value);
}

RNA_EXTERN_C int RigidBodyObject_collision_shape_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->shape);
}

RNA_EXTERN_C void RigidBodyObject_collision_shape_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyOb_shape_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyObject_kinematic_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void RigidBodyObject_kinematic_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyOb_kinematic_state_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyObject_use_deform_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void RigidBodyObject_use_deform_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C float RigidBodyObject_mass_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->mass);
}

RNA_EXTERN_C void RigidBodyObject_mass_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_mass_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyObject_use_deactivation_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void RigidBodyObject_use_deactivation_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyOb_activation_state_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyObject_use_start_deactivated_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void RigidBodyObject_use_start_deactivated_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C float RigidBodyObject_deactivate_linear_velocity_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->lin_sleep_thresh);
}

RNA_EXTERN_C void RigidBodyObject_deactivate_linear_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_linear_sleepThresh_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyObject_deactivate_angular_velocity_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->ang_sleep_thresh);
}

RNA_EXTERN_C void RigidBodyObject_deactivate_angular_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_angular_sleepThresh_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyObject_linear_damping_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->lin_damping);
}

RNA_EXTERN_C void RigidBodyObject_linear_damping_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_linear_damping_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyObject_angular_damping_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->ang_damping);
}

RNA_EXTERN_C void RigidBodyObject_angular_damping_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_angular_damping_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyObject_friction_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->friction);
}

RNA_EXTERN_C void RigidBodyObject_friction_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_friction_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyObject_restitution_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->restitution);
}

RNA_EXTERN_C void RigidBodyObject_restitution_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_restitution_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyObject_use_margin_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void RigidBodyObject_use_margin_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C float RigidBodyObject_collision_margin_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->margin);
}

RNA_EXTERN_C void RigidBodyObject_collision_margin_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyOb_collision_margin_set;
    fn(ptr, value);
}

RNA_EXTERN_C void RigidBodyObject_collision_collections_get(PointerRNA *ptr, bool values[20])
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 20; i++) {
        values[i] = ((data->col_groups & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void RigidBodyObject_collision_collections_set(PointerRNA *ptr, const bool values[20])
{
    PropBooleanArraySetFunc fn = rna_RigidBodyOb_collision_collections_set;
    fn(ptr, values);
}

static PointerRNA RigidBodyConstraint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void RigidBodyConstraint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RigidBodyConstraint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void RigidBodyConstraint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int RigidBodyConstraint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA RigidBodyConstraint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int RigidBodyConstraint_type_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C void RigidBodyConstraint_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyCon_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int RigidBodyConstraint_spring_type_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->spring_type);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_RigidBodyCon_spring_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyConstraint_enabled_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_enabled_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_enabled_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyConstraint_disable_collisions_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_disable_collisions_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_disable_collisions_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA RigidBodyConstraint_object1_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob1);
}

RNA_EXTERN_C void RigidBodyConstraint_object1_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob1 = value.data;
}

RNA_EXTERN_C PointerRNA RigidBodyConstraint_object2_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob2);
}

RNA_EXTERN_C void RigidBodyConstraint_object2_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob2 = value.data;
}

RNA_EXTERN_C bool RigidBodyConstraint_use_breaking_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_breaking_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_use_breaking_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_breaking_threshold_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->breaking_threshold);
}

RNA_EXTERN_C void RigidBodyConstraint_breaking_threshold_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_breaking_threshold_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyConstraint_use_override_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_override_solver_iterations_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_override_solver_iterations_set;
    fn(ptr, value);
}

RNA_EXTERN_C int RigidBodyConstraint_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->num_solver_iterations);
}

RNA_EXTERN_C void RigidBodyConstraint_solver_iterations_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_RigidBodyCon_num_solver_iterations_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyConstraint_use_limit_lin_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_limit_lin_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_limit_lin_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_limit_lin_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_limit_lin_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_limit_lin_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_limit_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_limit_ang_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_limit_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_limit_ang_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_limit_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_limit_ang_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_spring_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_spring_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_spring_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_spring_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_spring_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_spring_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_spring_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_spring_ang_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_spring_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_spring_ang_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_spring_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_spring_ang_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

RNA_EXTERN_C bool RigidBodyConstraint_use_motor_lin_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_motor_lin_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_use_motor_lin_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool RigidBodyConstraint_use_motor_ang_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void RigidBodyConstraint_use_motor_ang_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_RigidBodyCon_use_motor_ang_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_limit_lin_x_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_x_lower);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_lin_x_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_lin_x_lower = (std::remove_reference_t<decltype(data->limit_lin_x_lower)>)value;
#else
    data->limit_lin_x_lower = value;
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_lin_x_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_x_upper);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_lin_x_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_lin_x_upper = (std::remove_reference_t<decltype(data->limit_lin_x_upper)>)value;
#else
    data->limit_lin_x_upper = value;
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_lin_y_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_y_lower);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_lin_y_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_lin_y_lower = (std::remove_reference_t<decltype(data->limit_lin_y_lower)>)value;
#else
    data->limit_lin_y_lower = value;
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_lin_y_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_y_upper);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_lin_y_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_lin_y_upper = (std::remove_reference_t<decltype(data->limit_lin_y_upper)>)value;
#else
    data->limit_lin_y_upper = value;
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_lin_z_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_z_lower);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_lin_z_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_lin_z_lower = (std::remove_reference_t<decltype(data->limit_lin_z_lower)>)value;
#else
    data->limit_lin_z_lower = value;
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_lin_z_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_z_upper);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_lin_z_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_lin_z_upper = (std::remove_reference_t<decltype(data->limit_lin_z_upper)>)value;
#else
    data->limit_lin_z_upper = value;
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_ang_x_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_x_lower);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_ang_x_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_ang_x_lower = (std::remove_reference_t<decltype(data->limit_ang_x_lower)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->limit_ang_x_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_ang_x_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_x_upper);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_ang_x_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_ang_x_upper = (std::remove_reference_t<decltype(data->limit_ang_x_upper)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->limit_ang_x_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_ang_y_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_y_lower);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_ang_y_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_ang_y_lower = (std::remove_reference_t<decltype(data->limit_ang_y_lower)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->limit_ang_y_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_ang_y_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_y_upper);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_ang_y_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_ang_y_upper = (std::remove_reference_t<decltype(data->limit_ang_y_upper)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->limit_ang_y_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_ang_z_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_z_lower);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_ang_z_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_ang_z_lower = (std::remove_reference_t<decltype(data->limit_ang_z_lower)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->limit_ang_z_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_limit_ang_z_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_z_upper);
}

RNA_EXTERN_C void RigidBodyConstraint_limit_ang_z_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
#ifdef __cplusplus
    data->limit_ang_z_upper = (std::remove_reference_t<decltype(data->limit_ang_z_upper)>)CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#else
    data->limit_ang_z_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
#endif
}

RNA_EXTERN_C float RigidBodyConstraint_spring_stiffness_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_x);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_stiffness_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_x_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_stiffness_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_y);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_stiffness_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_y_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_stiffness_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_z);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_stiffness_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_z_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_stiffness_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_x);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_stiffness_ang_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_ang_x_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_stiffness_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_y);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_stiffness_ang_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_ang_y_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_stiffness_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_z);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_stiffness_ang_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_stiffness_ang_z_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_damping_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_x);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_damping_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_x_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_damping_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_y);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_damping_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_y_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_damping_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_z);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_damping_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_z_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_damping_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_x);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_damping_ang_x_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_ang_x_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_damping_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_y);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_damping_ang_y_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_ang_y_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_spring_damping_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_z);
}

RNA_EXTERN_C void RigidBodyConstraint_spring_damping_ang_z_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_spring_damping_ang_z_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_motor_lin_target_velocity_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_lin_target_velocity);
}

RNA_EXTERN_C void RigidBodyConstraint_motor_lin_target_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_lin_target_velocity_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_motor_lin_max_impulse_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_lin_max_impulse);
}

RNA_EXTERN_C void RigidBodyConstraint_motor_lin_max_impulse_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_lin_max_impulse_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_motor_ang_target_velocity_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_ang_target_velocity);
}

RNA_EXTERN_C void RigidBodyConstraint_motor_ang_target_velocity_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_ang_target_velocity_set;
    fn(ptr, value);
}

RNA_EXTERN_C float RigidBodyConstraint_motor_ang_max_impulse_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_ang_max_impulse);
}

RNA_EXTERN_C void RigidBodyConstraint_motor_ang_max_impulse_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_RigidBodyCon_motor_ang_max_impulse_set;
    fn(ptr, value);
}

RNA_EXTERN_C void RigidBodyWorld_convex_sweep_test_func(struct RigidBodyWorld *_self, ReportList *reports, struct Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit)
{
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

static void RigidBodyWorld_convex_sweep_test_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RigidBodyWorld *_self;
	struct Object *object;
	const float *start;
	const float *end;
	float *object_location;
	float *hitpoint;
	float *normal;
	int *has_hit;
	char *_data;
	
	_self = (struct RigidBodyWorld *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	start = ((const float *)_data);
	_data += 16;
	end = ((const float *)_data);
	_data += 16;
	object_location = ((float *)_data);
	_data += 16;
	hitpoint = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	has_hit = ((int *)_data);
	
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

/* Repeated prototypes to detect errors */

void rna_RigidBodyWorld_convex_sweep_test(struct RigidBodyWorld *_self, ReportList *reports, struct Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit);



/* Rigid Body World */
CollectionPropertyRNA rna_RigidBodyWorld_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyWorld_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_rna_properties_begin, RigidBodyWorld_rna_properties_next, RigidBodyWorld_rna_properties_end, RigidBodyWorld_rna_properties_get, nullptr, nullptr, RigidBodyWorld_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyWorld_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyWorld_collection, (PropertyRNA *)&rna_RigidBodyWorld_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_RigidBodyWorld_collection = {
	{(PropertyRNA *)&rna_RigidBodyWorld_constraints, (PropertyRNA *)&rna_RigidBodyWorld_rna_type,
	-1, "collection", 9437377, 1, 0, 0, 0, "Collection",
	"Collection containing objects participating in this simulation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_objects_collection_update, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_collection_get, RigidBodyWorld_collection_set, nullptr, nullptr,&RNA_Collection
};

PointerPropertyRNA rna_RigidBodyWorld_constraints = {
	{(PropertyRNA *)&rna_RigidBodyWorld_enabled, (PropertyRNA *)&rna_RigidBodyWorld_collection,
	-1, "constraints", 9437377, 1, 0, 0, 0, "Constraints",
	"Collection containing rigid body constraint objects",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_constraints_collection_update, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_constraints_get, RigidBodyWorld_constraints_set, nullptr, nullptr,&RNA_Collection
};

BoolPropertyRNA rna_RigidBodyWorld_enabled = {
	{(PropertyRNA *)&rna_RigidBodyWorld_time_scale, (PropertyRNA *)&rna_RigidBodyWorld_constraints,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"Simulation will be evaluated",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_enabled_get, RigidBodyWorld_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_RigidBodyWorld_time_scale = {
	{(PropertyRNA *)&rna_RigidBodyWorld_substeps_per_frame, (PropertyRNA *)&rna_RigidBodyWorld_enabled,
	-1, "time_scale", 3, 0, 0, 4, 0, "Time Scale",
	"Change the speed of the simulation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyWorld, time_scale), (RawPropertyType)5, nullptr},
	RigidBodyWorld_time_scale_get, RigidBodyWorld_time_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 1.0f, nullptr
};

IntPropertyRNA rna_RigidBodyWorld_substeps_per_frame = {
	{(PropertyRNA *)&rna_RigidBodyWorld_solver_iterations, (PropertyRNA *)&rna_RigidBodyWorld_time_scale,
	-1, "substeps_per_frame", 3, 0, 0, 4, 0, "Substeps Per Frame",
	"Number of simulation steps taken per frame (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyWorld, substeps_per_frame), (RawPropertyType)1, nullptr},
	RigidBodyWorld_substeps_per_frame_get, RigidBodyWorld_substeps_per_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 1000, 1, 32767, 1, 10, nullptr
};

IntPropertyRNA rna_RigidBodyWorld_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyWorld_use_split_impulse, (PropertyRNA *)&rna_RigidBodyWorld_substeps_per_frame,
	-1, "solver_iterations", 3, 0, 0, 0, 0, "Solver Iterations",
	"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_solver_iterations_get, RigidBodyWorld_solver_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 10, 100, 1, 1000, 1, 10, nullptr
};

BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse = {
	{(PropertyRNA *)&rna_RigidBodyWorld_point_cache, (PropertyRNA *)&rna_RigidBodyWorld_solver_iterations,
	-1, "use_split_impulse", 3, 0, 0, 0, 0, "Split Impulse",
	"Reduce extra velocity that can build up when objects collide (lowers simulation stability a little so use only when necessary)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_use_split_impulse_get, RigidBodyWorld_use_split_impulse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_RigidBodyWorld_point_cache = {
	{(PropertyRNA *)&rna_RigidBodyWorld_effector_weights, (PropertyRNA *)&rna_RigidBodyWorld_use_split_impulse,
	-1, "point_cache", 8650752, 0, 0, 0, 0, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_point_cache_get, nullptr, nullptr, nullptr,&RNA_PointCache
};

PointerPropertyRNA rna_RigidBodyWorld_effector_weights = {
	{nullptr, (PropertyRNA *)&rna_RigidBodyWorld_point_cache,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyWorld_effector_weights_get, nullptr, nullptr, nullptr,&RNA_EffectorWeights
};

PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_start, nullptr,
	-1, "object", 262272, 0, 1, 0, 0, "",
	"Rigidbody object with a convex collision shape",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

static float rna_RigidBodyWorld_convex_sweep_test_start_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_end, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object,
	-1, "start", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_start_default
};

static float rna_RigidBodyWorld_convex_sweep_test_end_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object_location, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_start,
	-1, "end", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_end_default
};

static float rna_RigidBodyWorld_convex_sweep_test_object_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_hitpoint, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_end,
	-1, "object_location", 8388611, 0, 2, 0, 0, "Location",
	"The hit location of this sweep test",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_object_location_default
};

static float rna_RigidBodyWorld_convex_sweep_test_hitpoint_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_normal, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object_location,
	-1, "hitpoint", 8388611, 0, 2, 0, 0, "Hitpoint",
	"The hit location of this sweep test",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_hitpoint_default
};

static float rna_RigidBodyWorld_convex_sweep_test_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_has_hit, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_hitpoint,
	-1, "normal", 8388611, 0, 2, 0, 0, "Normal",
	"The face normal at the sweep test hit location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_normal_default
};

IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit = {
	{nullptr, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_normal,
	-1, "has_hit", 3, 0, 2, 0, 0, "",
	"If the function has found collision point, value is 1, otherwise 0",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_RigidBodyWorld_convex_sweep_test_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_has_hit}},
	"convex_sweep_test", 16, "Sweep test convex rigidbody against the current rigidbody world",
	RigidBodyWorld_convex_sweep_test_call,
	nullptr
};

StructRNA RNA_RigidBodyWorld = {
	{(ContainerRNA *)&RNA_RigidBodyObject, (ContainerRNA *)&RNA_RenderPass,
	nullptr,
	{(PropertyRNA *)&rna_RigidBodyWorld_rna_properties, (PropertyRNA *)&rna_RigidBodyWorld_effector_weights}},
	"RigidBodyWorld", nullptr, nullptr, 516, nullptr, "Rigid Body World",
	"Self-contained rigid body simulation environment and settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_RigidBodyWorld_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_RigidBodyWorld_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_RigidBodyWorld_convex_sweep_test_func, (FunctionRNA *)&rna_RigidBodyWorld_convex_sweep_test_func}
};

/* Rigid Body Object */
CollectionPropertyRNA rna_RigidBodyObject_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyObject_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_rna_properties_begin, RigidBodyObject_rna_properties_next, RigidBodyObject_rna_properties_end, RigidBodyObject_rna_properties_get, nullptr, nullptr, RigidBodyObject_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyObject_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyObject_type, (PropertyRNA *)&rna_RigidBodyObject_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_RigidBodyObject_type = {
	{(PropertyRNA *)&rna_RigidBodyObject_mesh_source, (PropertyRNA *)&rna_RigidBodyObject_rna_type,
	-1, "type", 1, 0, 0, 0, 0, "Type",
	"Role of object in Rigid Body Simulations",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_type_get, RigidBodyObject_type_set, nullptr, nullptr, nullptr, rna_enum_rigidbody_object_type_items, 2, 0
};

static const EnumPropertyItem rna_RigidBodyObject_mesh_source_items[4] = {
	{0, "BASE", 0, "Base", "Base mesh"},
	{1, "DEFORM", 0, "Deform", "Deformations (shape keys, deform modifiers)"},
	{2, "FINAL", 0, "Final", "All modifiers"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_RigidBodyObject_mesh_source = {
	{(PropertyRNA *)&rna_RigidBodyObject_enabled, (PropertyRNA *)&rna_RigidBodyObject_type,
	-1, "mesh_source", 1, 0, 0, 4, 0, "Mesh Source",
	"Source of the mesh used to create collision shape",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_mesh_source_update, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyOb, mesh_source), (RawPropertyType)1, nullptr},
	RigidBodyObject_mesh_source_get, RigidBodyObject_mesh_source_set, nullptr, nullptr, nullptr, rna_RigidBodyObject_mesh_source_items, 3, 0
};

BoolPropertyRNA rna_RigidBodyObject_enabled = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_shape, (PropertyRNA *)&rna_RigidBodyObject_mesh_source,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"Rigid Body actively participates to the simulation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_enabled_get, RigidBodyObject_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_RigidBodyObject_collision_shape = {
	{(PropertyRNA *)&rna_RigidBodyObject_kinematic, (PropertyRNA *)&rna_RigidBodyObject_enabled,
	-1, "collision_shape", 1, 0, 0, 0, 0, "Collision Shape",
	"Collision Shape of object in Rigid Body Simulations",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_update, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_collision_shape_get, RigidBodyObject_collision_shape_set, nullptr, nullptr, nullptr, rna_enum_rigidbody_object_shape_items, 8, 0
};

BoolPropertyRNA rna_RigidBodyObject_kinematic = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_deform, (PropertyRNA *)&rna_RigidBodyObject_collision_shape,
	-1, "kinematic", 3, 0, 0, 0, 0, "Kinematic",
	"Allow rigid body to be controlled by the animation system",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_kinematic_get, RigidBodyObject_kinematic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyObject_use_deform = {
	{(PropertyRNA *)&rna_RigidBodyObject_mass, (PropertyRNA *)&rna_RigidBodyObject_kinematic,
	-1, "use_deform", 3, 0, 0, 0, 0, "Deforming",
	"Rigid body deforms during simulation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_use_deform_get, RigidBodyObject_use_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_mass = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_deactivation, (PropertyRNA *)&rna_RigidBodyObject_use_deform,
	-1, "mass", 3, 0, 0, 0, 0, "Mass",
	"How much the object \'weighs\' irrespective of gravity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_MASS), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_mass_get, RigidBodyObject_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, FLT_MAX, 0.0010000000f, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_RigidBodyObject_use_deactivation = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_start_deactivated, (PropertyRNA *)&rna_RigidBodyObject_mass,
	-1, "use_deactivation", 3, 0, 0, 0, 0, "Enable Deactivation",
	"Enable deactivation of resting rigid bodies (increases performance and stability but can cause glitches)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_use_deactivation_get, RigidBodyObject_use_deactivation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated = {
	{(PropertyRNA *)&rna_RigidBodyObject_deactivate_linear_velocity, (PropertyRNA *)&rna_RigidBodyObject_use_deactivation,
	-1, "use_start_deactivated", 1, 0, 0, 0, 0, "Start Deactivated",
	"Deactivate rigid body at the start of the simulation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_use_start_deactivated_get, RigidBodyObject_use_start_deactivated_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity = {
	{(PropertyRNA *)&rna_RigidBodyObject_deactivate_angular_velocity, (PropertyRNA *)&rna_RigidBodyObject_use_start_deactivated,
	-1, "deactivate_linear_velocity", 3, 0, 0, 0, 0, "Linear Velocity Deactivation Threshold",
	"Linear Velocity below which simulation stops simulating object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_VELOCITY), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_deactivate_linear_velocity_get, RigidBodyObject_deactivate_linear_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, 0.4000000060f, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity = {
	{(PropertyRNA *)&rna_RigidBodyObject_linear_damping, (PropertyRNA *)&rna_RigidBodyObject_deactivate_linear_velocity,
	-1, "deactivate_angular_velocity", 3, 0, 0, 0, 0, "Angular Velocity Deactivation Threshold",
	"Angular Velocity below which simulation stops simulating object",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_VELOCITY), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_deactivate_angular_velocity_get, RigidBodyObject_deactivate_angular_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_linear_damping = {
	{(PropertyRNA *)&rna_RigidBodyObject_angular_damping, (PropertyRNA *)&rna_RigidBodyObject_deactivate_angular_velocity,
	-1, "linear_damping", 3, 0, 0, 0, 0, "Linear Damping",
	"Amount of linear velocity that is lost over time",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_linear_damping_get, RigidBodyObject_linear_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0399999991f, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_angular_damping = {
	{(PropertyRNA *)&rna_RigidBodyObject_friction, (PropertyRNA *)&rna_RigidBodyObject_linear_damping,
	-1, "angular_damping", 3, 0, 0, 0, 0, "Angular Damping",
	"Amount of angular velocity that is lost over time",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_angular_damping_get, RigidBodyObject_angular_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_friction = {
	{(PropertyRNA *)&rna_RigidBodyObject_restitution, (PropertyRNA *)&rna_RigidBodyObject_angular_damping,
	-1, "friction", 3, 0, 0, 0, 0, "Friction",
	"Resistance of object to movement",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_friction_get, RigidBodyObject_friction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_restitution = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_margin, (PropertyRNA *)&rna_RigidBodyObject_friction,
	-1, "restitution", 3, 0, 0, 0, 0, "Bounciness",
	"Tendency of object to bounce after colliding with another (0 = stays still, 1 = perfectly elastic)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_restitution_get, RigidBodyObject_restitution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_RigidBodyObject_use_margin = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_margin, (PropertyRNA *)&rna_RigidBodyObject_restitution,
	-1, "use_margin", 3, 0, 0, 0, 0, "Collision Margin",
	"Use custom collision margin (some shapes will have a visible gap around them)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_use_margin_get, RigidBodyObject_use_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_RigidBodyObject_collision_margin = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_collections, (PropertyRNA *)&rna_RigidBodyObject_use_margin,
	-1, "collision_margin", 3, 0, 0, 0, 0, "Collision Margin",
	"Threshold of distance near surface where collisions are still considered (best results when non-zero)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyObject_collision_margin_get, RigidBodyObject_collision_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 3, 0.0399999991f, nullptr
};

static bool rna_RigidBodyObject_collision_collections_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RigidBodyObject_collision_collections = {
	{nullptr, (PropertyRNA *)&rna_RigidBodyObject_collision_margin,
	-1, "collision_collections", 65539, 0, 0, 0, 0, "Collision Collections",
	"Collision collections rigid body belongs to",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_LAYER_MEMBER | (int)PROP_UNIT_NONE), nullptr, 1, {20, 0, 0}, 20,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, RigidBodyObject_collision_collections_get, RigidBodyObject_collision_collections_set, nullptr, nullptr, nullptr, nullptr, 0, rna_RigidBodyObject_collision_collections_default
};

StructRNA RNA_RigidBodyObject = {
	{(ContainerRNA *)&RNA_RigidBodyConstraint, (ContainerRNA *)&RNA_RigidBodyWorld,
	nullptr,
	{(PropertyRNA *)&rna_RigidBodyObject_rna_properties, (PropertyRNA *)&rna_RigidBodyObject_collision_collections}},
	"RigidBodyObject", nullptr, nullptr, 516, nullptr, "Rigid Body Object",
	"Settings for object participating in Rigid Body Simulation",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_RigidBodyObject_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_RigidBodyOb_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Rigid Body Constraint */
CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_rna_properties_begin, RigidBodyConstraint_rna_properties_next, RigidBodyConstraint_rna_properties_end, RigidBodyConstraint_rna_properties_get, nullptr, nullptr, RigidBodyConstraint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyConstraint_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_type, (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_RigidBodyConstraint_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_type, (PropertyRNA *)&rna_RigidBodyConstraint_rna_type,
	-1, "type", 1, 0, 0, 0, 0, "Type",
	"Type of Rigid Body Constraint",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_type_get, RigidBodyConstraint_type_set, nullptr, nullptr, nullptr, rna_enum_rigidbody_constraint_type_items, 8, 0
};

static const EnumPropertyItem rna_RigidBodyConstraint_spring_type_items[3] = {
	{0, "SPRING1", 0, "Blender 2.7", "Spring implementation used in Blender 2.7. Damping is capped at 1.0"},
	{1, "SPRING2", 0, "Blender 2.8", "New implementation available since 2.8"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_RigidBodyConstraint_spring_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_enabled, (PropertyRNA *)&rna_RigidBodyConstraint_type,
	-1, "spring_type", 1, 0, 0, 0, 0, "Spring Type",
	"Which implementation of spring to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_type_get, RigidBodyConstraint_spring_type_set, nullptr, nullptr, nullptr, rna_RigidBodyConstraint_spring_type_items, 2, 0
};

BoolPropertyRNA rna_RigidBodyConstraint_enabled = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_disable_collisions, (PropertyRNA *)&rna_RigidBodyConstraint_spring_type,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"Enable this constraint",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_enabled_get, RigidBodyConstraint_enabled_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_object1, (PropertyRNA *)&rna_RigidBodyConstraint_enabled,
	-1, "disable_collisions", 3, 0, 0, 0, 0, "Disable Collisions",
	"Disable collisions between constrained rigid bodies",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_disable_collisions_get, RigidBodyConstraint_disable_collisions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_RigidBodyConstraint_object1 = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_object2, (PropertyRNA *)&rna_RigidBodyConstraint_disable_collisions,
	-1, "object1", 8388737, 1, 0, 0, 0, "Object 1",
	"First Rigid Body Object to be constrained",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_object1_get, RigidBodyConstraint_object1_set, nullptr, nullptr,&RNA_Object
};

PointerPropertyRNA rna_RigidBodyConstraint_object2 = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_breaking, (PropertyRNA *)&rna_RigidBodyConstraint_object1,
	-1, "object2", 8388737, 1, 0, 0, 0, "Object 2",
	"Second Rigid Body Object to be constrained",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_object2_get, RigidBodyConstraint_object2_set, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_RigidBodyConstraint_use_breaking = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_breaking_threshold, (PropertyRNA *)&rna_RigidBodyConstraint_object2,
	-1, "use_breaking", 3, 0, 0, 0, 0, "Breakable",
	"Constraint can be broken if it receives an impulse above the threshold",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_breaking_get, RigidBodyConstraint_use_breaking_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_override_solver_iterations, (PropertyRNA *)&rna_RigidBodyConstraint_use_breaking,
	-1, "breaking_threshold", 3, 0, 0, 0, 0, "Breaking Threshold",
	"Impulse threshold that must be reached for the constraint to break",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_breaking_threshold_get, RigidBodyConstraint_breaking_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, FLT_MAX, 100.0f, 2, 10.0f, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_solver_iterations, (PropertyRNA *)&rna_RigidBodyConstraint_breaking_threshold,
	-1, "use_override_solver_iterations", 3, 0, 0, 0, 0, "Override Solver Iterations",
	"Override the number of solver iterations for this constraint",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_override_solver_iterations_get, RigidBodyConstraint_use_override_solver_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_RigidBodyConstraint_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_override_solver_iterations,
	-1, "solver_iterations", 3, 0, 0, 0, 0, "Solver Iterations",
	"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_solver_iterations_get, RigidBodyConstraint_solver_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 100, 1, 1000, 1, 10, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_y, (PropertyRNA *)&rna_RigidBodyConstraint_solver_iterations,
	-1, "use_limit_lin_x", 3, 0, 0, 0, 0, "X Axis",
	"Limit translation on X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_limit_lin_x_get, RigidBodyConstraint_use_limit_lin_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_x,
	-1, "use_limit_lin_y", 3, 0, 0, 0, 0, "Y Axis",
	"Limit translation on Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_limit_lin_y_get, RigidBodyConstraint_use_limit_lin_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_y,
	-1, "use_limit_lin_z", 3, 0, 0, 0, 0, "Z Axis",
	"Limit translation on Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_limit_lin_z_get, RigidBodyConstraint_use_limit_lin_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_z,
	-1, "use_limit_ang_x", 3, 0, 0, 0, 0, "X Angle",
	"Limit rotation around X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_limit_ang_x_get, RigidBodyConstraint_use_limit_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_x,
	-1, "use_limit_ang_y", 3, 0, 0, 0, 0, "Y Angle",
	"Limit rotation around Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_limit_ang_y_get, RigidBodyConstraint_use_limit_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_y,
	-1, "use_limit_ang_z", 3, 0, 0, 0, 0, "Z Angle",
	"Limit rotation around Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_limit_ang_z_get, RigidBodyConstraint_use_limit_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_z,
	-1, "use_spring_x", 3, 0, 0, 0, 0, "X Spring",
	"Enable spring on X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_spring_x_get, RigidBodyConstraint_use_spring_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_x,
	-1, "use_spring_y", 3, 0, 0, 0, 0, "Y Spring",
	"Enable spring on Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_spring_y_get, RigidBodyConstraint_use_spring_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_y,
	-1, "use_spring_z", 3, 0, 0, 0, 0, "Z Spring",
	"Enable spring on Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_spring_z_get, RigidBodyConstraint_use_spring_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_z,
	-1, "use_spring_ang_x", 3, 0, 0, 0, 0, "X Angle Spring",
	"Enable spring on X rotational axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_spring_ang_x_get, RigidBodyConstraint_use_spring_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_x,
	-1, "use_spring_ang_y", 3, 0, 0, 0, 0, "Y Angle Spring",
	"Enable spring on Y rotational axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_spring_ang_y_get, RigidBodyConstraint_use_spring_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_motor_lin, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_y,
	-1, "use_spring_ang_z", 3, 0, 0, 0, 0, "Z Angle Spring",
	"Enable spring on Z rotational axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_spring_ang_z_get, RigidBodyConstraint_use_spring_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_motor_ang, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_z,
	-1, "use_motor_lin", 3, 0, 0, 0, 0, "Linear Motor",
	"Enable linear motor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_motor_lin_get, RigidBodyConstraint_use_motor_lin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_lower, (PropertyRNA *)&rna_RigidBodyConstraint_use_motor_lin,
	-1, "use_motor_ang", 3, 0, 0, 0, 0, "Angular Motor",
	"Enable angular motor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_use_motor_ang_get, RigidBodyConstraint_use_motor_ang_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_upper, (PropertyRNA *)&rna_RigidBodyConstraint_use_motor_ang,
	-1, "limit_lin_x_lower", 3, 0, 0, 4, 0, "Lower X Limit",
	"Lower limit of X axis translation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_x_lower), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_lin_x_lower_get, RigidBodyConstraint_limit_lin_x_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_lower,
	-1, "limit_lin_x_upper", 3, 0, 0, 4, 0, "Upper X Limit",
	"Upper limit of X axis translation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_x_upper), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_lin_x_upper_get, RigidBodyConstraint_limit_lin_x_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_upper,
	-1, "limit_lin_y_lower", 3, 0, 0, 4, 0, "Lower Y Limit",
	"Lower limit of Y axis translation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_y_lower), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_lin_y_lower_get, RigidBodyConstraint_limit_lin_y_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_lower,
	-1, "limit_lin_y_upper", 3, 0, 0, 4, 0, "Upper Y Limit",
	"Upper limit of Y axis translation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_y_upper), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_lin_y_upper_get, RigidBodyConstraint_limit_lin_y_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_upper,
	-1, "limit_lin_z_lower", 3, 0, 0, 4, 0, "Lower Z Limit",
	"Lower limit of Z axis translation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_z_lower), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_lin_z_lower_get, RigidBodyConstraint_limit_lin_z_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_lower,
	-1, "limit_lin_z_upper", 3, 0, 0, 4, 0, "Upper Z Limit",
	"Upper limit of Z axis translation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_z_upper), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_lin_z_upper_get, RigidBodyConstraint_limit_lin_z_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_upper,
	-1, "limit_ang_x_lower", 3, 0, 0, 4, 0, "Lower X Angle Limit",
	"Lower limit of X axis rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_x_lower), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_ang_x_lower_get, RigidBodyConstraint_limit_ang_x_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_lower,
	-1, "limit_ang_x_upper", 3, 0, 0, 4, 0, "Upper X Angle Limit",
	"Upper limit of X axis rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_x_upper), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_ang_x_upper_get, RigidBodyConstraint_limit_ang_x_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_upper,
	-1, "limit_ang_y_lower", 3, 0, 0, 4, 0, "Lower Y Angle Limit",
	"Lower limit of Y axis rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_y_lower), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_ang_y_lower_get, RigidBodyConstraint_limit_ang_y_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_lower,
	-1, "limit_ang_y_upper", 3, 0, 0, 4, 0, "Upper Y Angle Limit",
	"Upper limit of Y axis rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_y_upper), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_ang_y_upper_get, RigidBodyConstraint_limit_ang_y_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_upper,
	-1, "limit_ang_z_lower", 3, 0, 0, 4, 0, "Lower Z Angle Limit",
	"Lower limit of Z axis rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_z_lower), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_ang_z_lower_get, RigidBodyConstraint_limit_ang_z_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_x, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_lower,
	-1, "limit_ang_z_upper", 3, 0, 0, 4, 0, "Upper Z Angle Limit",
	"Upper limit of Z axis rotation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_z_upper), (RawPropertyType)5, nullptr},
	RigidBodyConstraint_limit_ang_z_upper_get, RigidBodyConstraint_limit_ang_z_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_y, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_upper,
	-1, "spring_stiffness_x", 3, 0, 0, 0, 0, "X Axis Stiffness",
	"Stiffness on the X axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_stiffness_x_get, RigidBodyConstraint_spring_stiffness_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_x,
	-1, "spring_stiffness_y", 3, 0, 0, 0, 0, "Y Axis Stiffness",
	"Stiffness on the Y axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_stiffness_y_get, RigidBodyConstraint_spring_stiffness_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_y,
	-1, "spring_stiffness_z", 3, 0, 0, 0, 0, "Z Axis Stiffness",
	"Stiffness on the Z axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_stiffness_z_get, RigidBodyConstraint_spring_stiffness_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_z,
	-1, "spring_stiffness_ang_x", 3, 0, 0, 0, 0, "X Angle Stiffness",
	"Stiffness on the X rotational axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_stiffness_ang_x_get, RigidBodyConstraint_spring_stiffness_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_x,
	-1, "spring_stiffness_ang_y", 3, 0, 0, 0, 0, "Y Angle Stiffness",
	"Stiffness on the Y rotational axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_stiffness_ang_y_get, RigidBodyConstraint_spring_stiffness_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_y,
	-1, "spring_stiffness_ang_z", 3, 0, 0, 0, 0, "Z Angle Stiffness",
	"Stiffness on the Z rotational axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_stiffness_ang_z_get, RigidBodyConstraint_spring_stiffness_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_z,
	-1, "spring_damping_x", 3, 0, 0, 0, 0, "Damping X",
	"Damping on the X axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_damping_x_get, RigidBodyConstraint_spring_damping_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_x,
	-1, "spring_damping_y", 3, 0, 0, 0, 0, "Damping Y",
	"Damping on the Y axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_damping_y_get, RigidBodyConstraint_spring_damping_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_y,
	-1, "spring_damping_z", 3, 0, 0, 0, 0, "Damping Z",
	"Damping on the Z axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_damping_z_get, RigidBodyConstraint_spring_damping_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_z,
	-1, "spring_damping_ang_x", 3, 0, 0, 0, 0, "Damping X Angle",
	"Damping on the X rotational axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_damping_ang_x_get, RigidBodyConstraint_spring_damping_ang_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_x,
	-1, "spring_damping_ang_y", 3, 0, 0, 0, 0, "Damping Y Angle",
	"Damping on the Y rotational axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_damping_ang_y_get, RigidBodyConstraint_spring_damping_ang_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_target_velocity, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_y,
	-1, "spring_damping_ang_z", 3, 0, 0, 0, 0, "Damping Z Angle",
	"Damping on the Z rotational axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_spring_damping_ang_z_get, RigidBodyConstraint_spring_damping_ang_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_max_impulse, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_z,
	-1, "motor_lin_target_velocity", 3, 0, 0, 0, 0, "Target Velocity",
	"Target linear motor velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_VELOCITY), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_motor_lin_target_velocity_get, RigidBodyConstraint_motor_lin_target_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_target_velocity, (PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_target_velocity,
	-1, "motor_lin_max_impulse", 3, 0, 0, 0, 0, "Max Impulse",
	"Maximum linear motor impulse",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_motor_lin_max_impulse_get, RigidBodyConstraint_motor_lin_max_impulse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_max_impulse, (PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_max_impulse,
	-1, "motor_ang_target_velocity", 3, 0, 0, 0, 0, "Target Velocity",
	"Target angular motor velocity",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_motor_ang_target_velocity_get, RigidBodyConstraint_motor_ang_target_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse = {
	{nullptr, (PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_target_velocity,
	-1, "motor_ang_max_impulse", 3, 0, 0, 0, 0, "Max Impulse",
	"Maximum angular motor impulse",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	RigidBodyConstraint_motor_ang_max_impulse_get, RigidBodyConstraint_motor_ang_max_impulse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

StructRNA RNA_RigidBodyConstraint = {
	{(ContainerRNA *)&RNA_Scene, (ContainerRNA *)&RNA_RigidBodyObject,
	nullptr,
	{(PropertyRNA *)&rna_RigidBodyConstraint_rna_properties, (PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_max_impulse}},
	"RigidBodyConstraint", nullptr, nullptr, 516, nullptr, "Rigid Body Constraint",
	"Constraint influencing Objects inside Rigid Body Simulation",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_RigidBodyCon_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

