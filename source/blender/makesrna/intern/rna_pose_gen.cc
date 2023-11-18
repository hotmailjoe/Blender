
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

#include "rna_pose.cc"
#include "rna_pose_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_Pose_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Pose_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_Pose_bones;
RNA_EXTERN_C EnumPropertyRNA rna_Pose_ik_solver;
RNA_EXTERN_C PointerPropertyRNA rna_Pose_ik_param;
RNA_EXTERN_C BoolPropertyRNA rna_Pose_use_mirror_x;
RNA_EXTERN_C BoolPropertyRNA rna_Pose_use_mirror_relative;
RNA_EXTERN_C BoolPropertyRNA rna_Pose_use_auto_ik;
RNA_EXTERN_C PointerPropertyRNA rna_Pose_animation_visualization;

extern FunctionRNA rna_Pose_apply_pose_from_action_func;
extern PointerPropertyRNA rna_Pose_apply_pose_from_action_action;
extern FloatPropertyRNA rna_Pose_apply_pose_from_action_evaluation_time;

extern FunctionRNA rna_Pose_blend_pose_from_action_func;
extern PointerPropertyRNA rna_Pose_blend_pose_from_action_action;
extern FloatPropertyRNA rna_Pose_blend_pose_from_action_blend_factor;
extern FloatPropertyRNA rna_Pose_blend_pose_from_action_evaluation_time;

extern FunctionRNA rna_Pose_backup_create_func;
extern PointerPropertyRNA rna_Pose_backup_create_action;

extern FunctionRNA rna_Pose_backup_restore_func;
extern BoolPropertyRNA rna_Pose_backup_restore_success;

extern FunctionRNA rna_Pose_backup_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_PoseBone_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_PoseBone_constraints;
RNA_EXTERN_C StringPropertyRNA rna_PoseBone_name;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_motion_path;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_bone;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_parent;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_child;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_location;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_scale;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_rotation_quaternion;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_rotation_axis_angle;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_rotation_euler;
RNA_EXTERN_C EnumPropertyRNA rna_PoseBone_rotation_mode;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_rollin;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_rollout;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_curveinx;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_curveinz;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_curveoutx;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_curveoutz;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_easein;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_easeout;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_scalein;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_bbone_scaleout;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_bbone_custom_handle_start;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_bbone_custom_handle_end;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_matrix_channel;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_matrix_basis;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_matrix;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_head;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_tail;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_length;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_is_in_ik_chain;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_ik_x;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_ik_y;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_ik_z;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_use_ik_limit_x;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_use_ik_limit_y;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_use_ik_limit_z;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_use_ik_rotation_control;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_use_ik_linear_control;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_min_x;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_max_x;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_min_y;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_max_y;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_min_z;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_max_z;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_stiffness_x;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_stiffness_y;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_stiffness_z;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_stretch;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_rotation_weight;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_ik_linear_weight;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_custom_shape;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_custom_shape_scale_xyz;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_custom_shape_translation;
RNA_EXTERN_C FloatPropertyRNA rna_PoseBone_custom_shape_rotation_euler;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_use_custom_shape_bone_size;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_custom_shape_transform;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBone_color;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_location;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_rotation_w;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_rotations_4d;
RNA_EXTERN_C BoolPropertyRNA rna_PoseBone_lock_scale;

extern FunctionRNA rna_PoseBone_evaluate_envelope_func;
extern FloatPropertyRNA rna_PoseBone_evaluate_envelope_point;
extern FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor;

extern FunctionRNA rna_PoseBone_bbone_segment_index_func;
extern FloatPropertyRNA rna_PoseBone_bbone_segment_index_point;
extern IntPropertyRNA rna_PoseBone_bbone_segment_index_index;
extern FloatPropertyRNA rna_PoseBone_bbone_segment_index_blend_next;

extern FunctionRNA rna_PoseBone_bbone_segment_matrix_func;
extern FloatPropertyRNA rna_PoseBone_bbone_segment_matrix_matrix_return;
extern IntPropertyRNA rna_PoseBone_bbone_segment_matrix_index;
extern BoolPropertyRNA rna_PoseBone_bbone_segment_matrix_rest;

extern FunctionRNA rna_PoseBone_compute_bbone_handles_func;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle1;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll1;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle2;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll2;
extern BoolPropertyRNA rna_PoseBone_compute_bbone_handles_rest;
extern BoolPropertyRNA rna_PoseBone_compute_bbone_handles_ease;
extern BoolPropertyRNA rna_PoseBone_compute_bbone_handles_offsets;



RNA_EXTERN_C CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBoneConstraints_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_PoseBoneConstraints_active;

extern FunctionRNA rna_PoseBoneConstraints_new_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_new_constraint;
extern EnumPropertyRNA rna_PoseBoneConstraints_new_type;

extern FunctionRNA rna_PoseBoneConstraints_remove_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint;

extern FunctionRNA rna_PoseBoneConstraints_move_func;
extern IntPropertyRNA rna_PoseBoneConstraints_move_from_index;
extern IntPropertyRNA rna_PoseBoneConstraints_move_to_index;

extern FunctionRNA rna_PoseBoneConstraints_copy_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_copy_constraint;
extern PointerPropertyRNA rna_PoseBoneConstraints_copy_new_constraint;



RNA_EXTERN_C CollectionPropertyRNA rna_IKParam_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IKParam_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_IKParam_ik_solver;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_IKParam_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_IKParam_rna_type;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_IKParam_ik_solver;

RNA_EXTERN_C FloatPropertyRNA rna_Itasc_precision;
RNA_EXTERN_C IntPropertyRNA rna_Itasc_iterations;
RNA_EXTERN_C IntPropertyRNA rna_Itasc_step_count;
RNA_EXTERN_C BoolPropertyRNA rna_Itasc_translate_root_bones;
RNA_EXTERN_C EnumPropertyRNA rna_Itasc_mode;
RNA_EXTERN_C EnumPropertyRNA rna_Itasc_reiteration_method;
RNA_EXTERN_C BoolPropertyRNA rna_Itasc_use_auto_step;
RNA_EXTERN_C FloatPropertyRNA rna_Itasc_step_min;
RNA_EXTERN_C FloatPropertyRNA rna_Itasc_step_max;
RNA_EXTERN_C FloatPropertyRNA rna_Itasc_feedback;
RNA_EXTERN_C FloatPropertyRNA rna_Itasc_velocity_max;
RNA_EXTERN_C EnumPropertyRNA rna_Itasc_solver;
RNA_EXTERN_C FloatPropertyRNA rna_Itasc_damping_max;
RNA_EXTERN_C FloatPropertyRNA rna_Itasc_damping_epsilon;

static PointerRNA Pose_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Pose_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Pose_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Pose_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Pose_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Pose_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Pose_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Pose_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Pose_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Pose_bones_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PoseBone, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Pose_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Pose_bones;

    rna_iterator_listbase_begin(iter, &data->chanbase, nullptr);

    if (iter->valid) {
        iter->ptr = Pose_bones_get(iter);
    }
}

RNA_EXTERN_C void Pose_bones_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Pose_bones_get(iter);
    }
}

RNA_EXTERN_C void Pose_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Pose_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Pose_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = Pose_bones_get(&iter); }
    }

    Pose_bones_end(&iter);

    return found;
}

RNA_EXTERN_C int Pose_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_PoseBones_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C int Pose_ik_solver_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (int)(data->iksolver);
}

RNA_EXTERN_C void Pose_ik_solver_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Pose_ik_solver_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA Pose_ik_param_get(PointerRNA *ptr)
{
    return rna_Pose_ikparam_get(ptr);
}

RNA_EXTERN_C bool Pose_use_mirror_x_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void Pose_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool Pose_use_mirror_relative_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void Pose_use_mirror_relative_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool Pose_use_auto_ik_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void Pose_use_auto_ik_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C PointerRNA Pose_animation_visualization_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimViz, &data->avs);
}

static PointerRNA PoseBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PoseBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PoseBone_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PoseBone_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PoseBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PoseBone_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PoseBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PoseBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PoseBone_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA PoseBone_constraints_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Constraint, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void PoseBone_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PoseBone_constraints;

    rna_iterator_listbase_begin(iter, &data->constraints, nullptr);

    if (iter->valid) {
        iter->ptr = PoseBone_constraints_get(iter);
    }
}

RNA_EXTERN_C void PoseBone_constraints_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = PoseBone_constraints_get(iter);
    }
}

RNA_EXTERN_C void PoseBone_constraints_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PoseBone_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    PoseBone_constraints_begin(&iter, ptr);

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
        if (found) { *r_ptr = PoseBone_constraints_get(&iter); }
    }

    PoseBone_constraints_end(&iter);

    return found;
}

RNA_EXTERN_C int Constraint_name_length(PointerRNA *);
RNA_EXTERN_C void Constraint_name_get(PointerRNA *, char *);

RNA_EXTERN_C int PoseBone_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    PoseBone_constraints_begin(&iter, ptr);

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
        PoseBone_constraints_next(&iter);
    }
    PoseBone_constraints_end(&iter);

    return found;
}

RNA_EXTERN_C void PoseBone_name_get(PointerRNA *ptr, char *value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int PoseBone_name_length(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void PoseBone_name_set(PointerRNA *ptr, const char *value)
{
    rna_PoseChannel_name_set(ptr, value);
}

RNA_EXTERN_C PointerRNA PoseBone_motion_path_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MotionPath, data->mpath);
}

RNA_EXTERN_C PointerRNA PoseBone_bone_get(PointerRNA *ptr)
{
    return rna_PoseChannel_bone_get(ptr);
}

RNA_EXTERN_C PointerRNA PoseBone_parent_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->parent);
}

RNA_EXTERN_C PointerRNA PoseBone_child_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->child);
}

RNA_EXTERN_C void PoseBone_location_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

RNA_EXTERN_C void PoseBone_location_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

RNA_EXTERN_C void PoseBone_scale_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->size)[i]);
    }
}

RNA_EXTERN_C void PoseBone_scale_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->size)[i] = values[i];
    }
}

RNA_EXTERN_C void PoseBone_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

RNA_EXTERN_C void PoseBone_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

RNA_EXTERN_C void PoseBone_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_PoseChannel_rotation_axis_angle_get;
    fn(ptr, values);
}

RNA_EXTERN_C void PoseBone_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_PoseChannel_rotation_axis_angle_set;
    fn(ptr, values);
}

RNA_EXTERN_C void PoseBone_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->eul)[i]);
    }
}

RNA_EXTERN_C void PoseBone_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->eul)[i] = values[i];
    }
}

RNA_EXTERN_C int PoseBone_rotation_mode_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (int)(data->rotmode);
}

RNA_EXTERN_C void PoseBone_rotation_mode_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_PoseChannel_rotation_mode_set;
    fn(ptr, value);
}

RNA_EXTERN_C float PoseBone_bbone_rollin_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->roll1);
}

RNA_EXTERN_C void PoseBone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->roll1 = (std::remove_reference_t<decltype(data->roll1)>)value;
#else
    data->roll1 = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_rollout_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->roll2);
}

RNA_EXTERN_C void PoseBone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->roll2 = (std::remove_reference_t<decltype(data->roll2)>)value;
#else
    data->roll2 = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_curveinx_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_in_x);
}

RNA_EXTERN_C void PoseBone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->curve_in_x = (std::remove_reference_t<decltype(data->curve_in_x)>)value;
#else
    data->curve_in_x = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_curveinz_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_in_z);
}

RNA_EXTERN_C void PoseBone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->curve_in_z = (std::remove_reference_t<decltype(data->curve_in_z)>)value;
#else
    data->curve_in_z = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_curveoutx_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_out_x);
}

RNA_EXTERN_C void PoseBone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->curve_out_x = (std::remove_reference_t<decltype(data->curve_out_x)>)value;
#else
    data->curve_out_x = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_curveoutz_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_out_z);
}

RNA_EXTERN_C void PoseBone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->curve_out_z = (std::remove_reference_t<decltype(data->curve_out_z)>)value;
#else
    data->curve_out_z = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_easein_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ease1);
}

RNA_EXTERN_C void PoseBone_bbone_easein_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->ease1 = (std::remove_reference_t<decltype(data->ease1)>)value;
#else
    data->ease1 = value;
#endif
}

RNA_EXTERN_C float PoseBone_bbone_easeout_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ease2);
}

RNA_EXTERN_C void PoseBone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->ease2 = (std::remove_reference_t<decltype(data->ease2)>)value;
#else
    data->ease2 = value;
#endif
}

RNA_EXTERN_C void PoseBone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_in)[i]);
    }
}

RNA_EXTERN_C void PoseBone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_in)[i] = values[i];
    }
}

RNA_EXTERN_C void PoseBone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_out)[i]);
    }
}

RNA_EXTERN_C void PoseBone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_out)[i] = values[i];
    }
}

RNA_EXTERN_C PointerRNA PoseBone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->bbone_prev);
}

RNA_EXTERN_C PointerRNA PoseBone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->bbone_next);
}

RNA_EXTERN_C void PoseBone_matrix_channel_get(PointerRNA *ptr, float values[16])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->chan_mat)[i]);
    }
}

RNA_EXTERN_C void PoseBone_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_PoseChannel_matrix_basis_get;
    fn(ptr, values);
}

RNA_EXTERN_C void PoseBone_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_PoseChannel_matrix_basis_set;
    fn(ptr, values);
}

RNA_EXTERN_C void PoseBone_matrix_get(PointerRNA *ptr, float values[16])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->pose_mat)[i]);
    }
}

RNA_EXTERN_C void PoseBone_matrix_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_PoseChannel_matrix_set;
    fn(ptr, values);
}

RNA_EXTERN_C void PoseBone_head_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_head)[i]);
    }
}

RNA_EXTERN_C void PoseBone_tail_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_tail)[i]);
    }
}

RNA_EXTERN_C float PoseBone_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PoseChannel_length_get;
    return fn(ptr);
}

RNA_EXTERN_C bool PoseBone_is_in_ik_chain_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_PoseChannel_has_ik_get;
    return fn(ptr);
}

RNA_EXTERN_C bool PoseBone_lock_ik_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 1) != 0);
}

RNA_EXTERN_C void PoseBone_lock_ik_x_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 1; }
    else { data->ikflag &= ~1; }
}

RNA_EXTERN_C bool PoseBone_lock_ik_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 2) != 0);
}

RNA_EXTERN_C void PoseBone_lock_ik_y_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 2; }
    else { data->ikflag &= ~2; }
}

RNA_EXTERN_C bool PoseBone_lock_ik_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 4) != 0);
}

RNA_EXTERN_C void PoseBone_lock_ik_z_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 4; }
    else { data->ikflag &= ~4; }
}

RNA_EXTERN_C bool PoseBone_use_ik_limit_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 8) != 0);
}

RNA_EXTERN_C void PoseBone_use_ik_limit_x_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 8; }
    else { data->ikflag &= ~8; }
}

RNA_EXTERN_C bool PoseBone_use_ik_limit_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 16) != 0);
}

RNA_EXTERN_C void PoseBone_use_ik_limit_y_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 16; }
    else { data->ikflag &= ~16; }
}

RNA_EXTERN_C bool PoseBone_use_ik_limit_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 32) != 0);
}

RNA_EXTERN_C void PoseBone_use_ik_limit_z_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 32; }
    else { data->ikflag &= ~32; }
}

RNA_EXTERN_C bool PoseBone_use_ik_rotation_control_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 64) != 0);
}

RNA_EXTERN_C void PoseBone_use_ik_rotation_control_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 64; }
    else { data->ikflag &= ~64; }
}

RNA_EXTERN_C bool PoseBone_use_ik_linear_control_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 128) != 0);
}

RNA_EXTERN_C void PoseBone_use_ik_linear_control_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 128; }
    else { data->ikflag &= ~128; }
}

RNA_EXTERN_C float PoseBone_ik_min_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[0]);
}

RNA_EXTERN_C void PoseBone_ik_min_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->limitmin[0] = (std::remove_reference_t<decltype(data->limitmin[0])>)CLAMPIS(value, -3.1415927410f, 0.0f);
#else
    data->limitmin[0] = CLAMPIS(value, -3.1415927410f, 0.0f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_max_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[0]);
}

RNA_EXTERN_C void PoseBone_ik_max_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->limitmax[0] = (std::remove_reference_t<decltype(data->limitmax[0])>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->limitmax[0] = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_min_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[1]);
}

RNA_EXTERN_C void PoseBone_ik_min_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->limitmin[1] = (std::remove_reference_t<decltype(data->limitmin[1])>)CLAMPIS(value, -3.1415927410f, 0.0f);
#else
    data->limitmin[1] = CLAMPIS(value, -3.1415927410f, 0.0f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_max_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[1]);
}

RNA_EXTERN_C void PoseBone_ik_max_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->limitmax[1] = (std::remove_reference_t<decltype(data->limitmax[1])>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->limitmax[1] = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_min_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[2]);
}

RNA_EXTERN_C void PoseBone_ik_min_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->limitmin[2] = (std::remove_reference_t<decltype(data->limitmin[2])>)CLAMPIS(value, -3.1415927410f, 0.0f);
#else
    data->limitmin[2] = CLAMPIS(value, -3.1415927410f, 0.0f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_max_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[2]);
}

RNA_EXTERN_C void PoseBone_ik_max_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->limitmax[2] = (std::remove_reference_t<decltype(data->limitmax[2])>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->limitmax[2] = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_stiffness_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[0]);
}

RNA_EXTERN_C void PoseBone_ik_stiffness_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->stiffness[0] = (std::remove_reference_t<decltype(data->stiffness[0])>)CLAMPIS(value, 0.0f, 0.9900000095f);
#else
    data->stiffness[0] = CLAMPIS(value, 0.0f, 0.9900000095f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_stiffness_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[1]);
}

RNA_EXTERN_C void PoseBone_ik_stiffness_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->stiffness[1] = (std::remove_reference_t<decltype(data->stiffness[1])>)CLAMPIS(value, 0.0f, 0.9900000095f);
#else
    data->stiffness[1] = CLAMPIS(value, 0.0f, 0.9900000095f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_stiffness_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[2]);
}

RNA_EXTERN_C void PoseBone_ik_stiffness_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->stiffness[2] = (std::remove_reference_t<decltype(data->stiffness[2])>)CLAMPIS(value, 0.0f, 0.9900000095f);
#else
    data->stiffness[2] = CLAMPIS(value, 0.0f, 0.9900000095f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_stretch_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ikstretch);
}

RNA_EXTERN_C void PoseBone_ik_stretch_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->ikstretch = (std::remove_reference_t<decltype(data->ikstretch)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->ikstretch = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_rotation_weight_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ikrotweight);
}

RNA_EXTERN_C void PoseBone_ik_rotation_weight_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->ikrotweight = (std::remove_reference_t<decltype(data->ikrotweight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->ikrotweight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float PoseBone_ik_linear_weight_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->iklinweight);
}

RNA_EXTERN_C void PoseBone_ik_linear_weight_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
#ifdef __cplusplus
    data->iklinweight = (std::remove_reference_t<decltype(data->iklinweight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->iklinweight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C PointerRNA PoseBone_custom_shape_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->custom);
}

RNA_EXTERN_C void PoseBone_custom_shape_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);

    if (data->custom) {
        id_us_min((ID *)data->custom);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->custom = value.data;
}

RNA_EXTERN_C void PoseBone_custom_shape_scale_xyz_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_scale_xyz)[i]);
    }
}

RNA_EXTERN_C void PoseBone_custom_shape_scale_xyz_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->custom_scale_xyz)[i] = values[i];
    }
}

RNA_EXTERN_C void PoseBone_custom_shape_translation_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_translation)[i]);
    }
}

RNA_EXTERN_C void PoseBone_custom_shape_translation_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->custom_translation)[i] = values[i];
    }
}

RNA_EXTERN_C void PoseBone_custom_shape_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_rotation_euler)[i]);
    }
}

RNA_EXTERN_C void PoseBone_custom_shape_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->custom_rotation_euler)[i] = values[i];
    }
}

RNA_EXTERN_C bool PoseBone_use_custom_shape_bone_size_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return !(((data->drawflag) & 1) != 0);
}

RNA_EXTERN_C void PoseBone_use_custom_shape_bone_size_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (!value) { data->drawflag |= 1; }
    else { data->drawflag &= ~1; }
}

RNA_EXTERN_C PointerRNA PoseBone_custom_shape_transform_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->custom_tx);
}

RNA_EXTERN_C void PoseBone_custom_shape_transform_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_PoseChannel_custom_shape_transform_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA PoseBone_color_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BoneColor, &data->color);
}

RNA_EXTERN_C void PoseBone_lock_location_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void PoseBone_lock_location_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (1 << i); }
        else { data->protectflag &= ~(1 << i); }
    }
}

RNA_EXTERN_C void PoseBone_lock_rotation_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (8 << i)) != 0);
    }
}

RNA_EXTERN_C void PoseBone_lock_rotation_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (8 << i); }
        else { data->protectflag &= ~(8 << i); }
    }
}

RNA_EXTERN_C bool PoseBone_lock_rotation_w_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->protectflag) & 512) != 0);
}

RNA_EXTERN_C void PoseBone_lock_rotation_w_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->protectflag |= 512; }
    else { data->protectflag &= ~512; }
}

RNA_EXTERN_C bool PoseBone_lock_rotations_4d_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->protectflag) & 1024) != 0);
}

RNA_EXTERN_C void PoseBone_lock_rotations_4d_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->protectflag |= 1024; }
    else { data->protectflag &= ~1024; }
}

RNA_EXTERN_C void PoseBone_lock_scale_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (64 << i)) != 0);
    }
}

RNA_EXTERN_C void PoseBone_lock_scale_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (64 << i); }
        else { data->protectflag &= ~(64 << i); }
    }
}

static PointerRNA PoseBoneConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PoseBoneConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PoseBoneConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PoseBoneConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PoseBoneConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PoseBoneConstraints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA PoseBoneConstraints_active_get(PointerRNA *ptr)
{
    return rna_PoseChannel_active_constraint_get(ptr);
}

RNA_EXTERN_C void PoseBoneConstraints_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_PoseChannel_active_constraint_set(ptr, value, reports);
}

static PointerRNA IKParam_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IKParam_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IKParam_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IKParam_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IKParam_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IKParam_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IKParam_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IKParam_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IKParam_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int IKParam_ik_solver_get(PointerRNA *ptr)
{
    bIKParam *data = (bIKParam *)(ptr->data);
    return (int)(data->iksolver);
}

RNA_EXTERN_C float Itasc_precision_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->precision);
}

RNA_EXTERN_C void Itasc_precision_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->precision = (std::remove_reference_t<decltype(data->precision)>)CLAMPIS(value, 0.0f, 0.1000000015f);
#else
    data->precision = CLAMPIS(value, 0.0f, 0.1000000015f);
#endif
}

RNA_EXTERN_C int Itasc_iterations_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->numiter);
}

RNA_EXTERN_C void Itasc_iterations_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->numiter = (std::remove_reference_t<decltype(data->numiter)>)CLAMPIS(value, 0, 1000);
#else
    data->numiter = CLAMPIS(value, 0, 1000);
#endif
}

RNA_EXTERN_C int Itasc_step_count_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->numstep);
}

RNA_EXTERN_C void Itasc_step_count_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->numstep = (std::remove_reference_t<decltype(data->numstep)>)CLAMPIS(value, 1, 50);
#else
    data->numstep = CLAMPIS(value, 1, 50);
#endif
}

RNA_EXTERN_C bool Itasc_translate_root_bones_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void Itasc_translate_root_bones_set(PointerRNA *ptr, bool value)
{
    bItasc *data = (bItasc *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

RNA_EXTERN_C int Itasc_mode_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return ((data->flag) & 8);
}

RNA_EXTERN_C void Itasc_mode_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->flag &= ~8;
    data->flag |= value;
}

RNA_EXTERN_C int Itasc_reiteration_method_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return ((data->flag) & 6);
}

RNA_EXTERN_C void Itasc_reiteration_method_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->flag &= ~6;
    data->flag |= value;
}

RNA_EXTERN_C bool Itasc_use_auto_step_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Itasc_use_auto_step_set(PointerRNA *ptr, bool value)
{
    bItasc *data = (bItasc *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C float Itasc_step_min_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->minstep);
}

RNA_EXTERN_C void Itasc_step_min_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->minstep = (std::remove_reference_t<decltype(data->minstep)>)CLAMPIS(value, 0.0f, 0.1000000015f);
#else
    data->minstep = CLAMPIS(value, 0.0f, 0.1000000015f);
#endif
}

RNA_EXTERN_C float Itasc_step_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->maxstep);
}

RNA_EXTERN_C void Itasc_step_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->maxstep = (std::remove_reference_t<decltype(data->maxstep)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->maxstep = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Itasc_feedback_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->feedback);
}

RNA_EXTERN_C void Itasc_feedback_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->feedback = (std::remove_reference_t<decltype(data->feedback)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->feedback = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float Itasc_velocity_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->maxvel);
}

RNA_EXTERN_C void Itasc_velocity_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->maxvel = (std::remove_reference_t<decltype(data->maxvel)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->maxvel = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int Itasc_solver_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->solver);
}

RNA_EXTERN_C void Itasc_solver_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->solver = (std::remove_reference_t<decltype(data->solver)>)value;
#else
    data->solver = value;
#endif
}

RNA_EXTERN_C float Itasc_damping_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->dampmax);
}

RNA_EXTERN_C void Itasc_damping_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->dampmax = (std::remove_reference_t<decltype(data->dampmax)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->dampmax = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float Itasc_damping_epsilon_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->dampeps);
}

RNA_EXTERN_C void Itasc_damping_epsilon_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
#ifdef __cplusplus
    data->dampeps = (std::remove_reference_t<decltype(data->dampeps)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->dampeps = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C void Pose_apply_pose_from_action_func(struct ID *_selfid, bContext *C, struct bAction *action, float evaluation_time)
{
	rna_Pose_apply_pose_from_action(_selfid, C, action, evaluation_time);
}

static void Pose_apply_pose_from_action_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bAction *action;
	float evaluation_time;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((struct bAction **)_data);
	_data += 8;
	evaluation_time = *((float *)_data);
	
	rna_Pose_apply_pose_from_action(_selfid, C, action, evaluation_time);
}

RNA_EXTERN_C void Pose_blend_pose_from_action_func(struct ID *_selfid, bContext *C, struct bAction *action, float blend_factor, float evaluation_time)
{
	rna_Pose_blend_pose_from_action(_selfid, C, action, blend_factor, evaluation_time);
}

static void Pose_blend_pose_from_action_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bAction *action;
	float blend_factor;
	float evaluation_time;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((struct bAction **)_data);
	_data += 8;
	blend_factor = *((float *)_data);
	_data += 8;
	evaluation_time = *((float *)_data);
	
	rna_Pose_blend_pose_from_action(_selfid, C, action, blend_factor, evaluation_time);
}

RNA_EXTERN_C void Pose_backup_create_func(struct ID *_selfid, struct bAction *action)
{
	rna_Pose_backup_create(_selfid, action);
}

static void Pose_backup_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bAction *action;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((struct bAction **)_data);
	
	rna_Pose_backup_create(_selfid, action);
}

RNA_EXTERN_C bool Pose_backup_restore_func(struct ID *_selfid, bContext *C)
{
	return rna_Pose_backup_restore(_selfid, C);
}

static void Pose_backup_restore_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	bool success;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	success = rna_Pose_backup_restore(_selfid, C);
	*((bool *)_retdata) = success;
}

RNA_EXTERN_C void Pose_backup_clear_func(struct ID *_selfid)
{
	rna_Pose_backup_clear(_selfid);
}

static void Pose_backup_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	_selfid = (struct ID *)_ptr->owner_id;
	
	rna_Pose_backup_clear(_selfid);
}

/* Repeated prototypes to detect errors */

void rna_Pose_apply_pose_from_action(struct ID *_selfid, bContext *C, struct bAction *action, float evaluation_time);
void rna_Pose_blend_pose_from_action(struct ID *_selfid, bContext *C, struct bAction *action, float blend_factor, float evaluation_time);
void rna_Pose_backup_create(struct ID *_selfid, struct bAction *action);
bool rna_Pose_backup_restore(struct ID *_selfid, bContext *C);
void rna_Pose_backup_clear(struct ID *_selfid);

RNA_EXTERN_C float PoseBone_evaluate_envelope_func(struct bPoseChannel *_self, float point[3])
{
	return rna_PoseBone_do_envelope(_self, point);
}

static void PoseBone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	const float *point;
	float factor;
	char *_data, *_retdata;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((const float *)_data);
	_data += 16;
	_retdata = _data;
	
	factor = rna_PoseBone_do_envelope(_self, point);
	*((float *)_retdata) = factor;
}

RNA_EXTERN_C void PoseBone_bbone_segment_index_func(struct bPoseChannel *_self, ReportList *reports, float point[3], int *index, float *blend_next)
{
	rna_PoseBone_bbone_segment_index(_self, reports, point, index, blend_next);
}

static void PoseBone_bbone_segment_index_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	const float *point;
	int *index;
	float *blend_next;
	char *_data;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((const float *)_data);
	_data += 16;
	index = ((int *)_data);
	_data += 8;
	blend_next = ((float *)_data);
	
	rna_PoseBone_bbone_segment_index(_self, reports, point, index, blend_next);
}

RNA_EXTERN_C void PoseBone_bbone_segment_matrix_func(struct bPoseChannel *_self, ReportList *reports, float matrix_return[16], int index, bool rest)
{
	rna_PoseBone_bbone_segment_matrix(_self, reports, matrix_return, index, rest);
}

static void PoseBone_bbone_segment_matrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	float *matrix_return;
	int index;
	bool rest;
	char *_data;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_return = ((float *)_data);
	_data += 64;
	index = *((int *)_data);
	_data += 8;
	rest = *((bool *)_data);
	
	rna_PoseBone_bbone_segment_matrix(_self, reports, matrix_return, index, rest);
}

RNA_EXTERN_C void PoseBone_compute_bbone_handles_func(struct bPoseChannel *_self, ReportList *reports, float handle1[3], float *roll1, float handle2[3], float *roll2, bool rest, bool ease, bool offsets)
{
	rna_PoseBone_compute_bbone_handles(_self, reports, handle1, roll1, handle2, roll2, rest, ease, offsets);
}

static void PoseBone_compute_bbone_handles_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	float *handle1;
	float *roll1;
	float *handle2;
	float *roll2;
	bool rest;
	bool ease;
	bool offsets;
	char *_data;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	handle1 = ((float *)_data);
	_data += 16;
	roll1 = ((float *)_data);
	_data += 8;
	handle2 = ((float *)_data);
	_data += 16;
	roll2 = ((float *)_data);
	_data += 8;
	rest = *((bool *)_data);
	_data += 8;
	ease = *((bool *)_data);
	_data += 8;
	offsets = *((bool *)_data);
	
	rna_PoseBone_compute_bbone_handles(_self, reports, handle1, roll1, handle2, roll2, rest, ease, offsets);
}

/* Repeated prototypes to detect errors */

float rna_PoseBone_do_envelope(struct bPoseChannel *_self, float point[3]);
void rna_PoseBone_bbone_segment_index(struct bPoseChannel *_self, ReportList *reports, float point[3], int *index, float *blend_next);
void rna_PoseBone_bbone_segment_matrix(struct bPoseChannel *_self, ReportList *reports, float matrix_return[16], int index, bool rest);
void rna_PoseBone_compute_bbone_handles(struct bPoseChannel *_self, ReportList *reports, float handle1[3], float *roll1, float handle2[3], float *roll2, bool rest, bool ease, bool offsets);

RNA_EXTERN_C struct bConstraint *PoseBoneConstraints_new_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, int type)
{
	return rna_PoseChannel_constraints_new(_selfid, _self, bmain, type);
}

static void PoseBoneConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct bConstraint *constraint;
	int type;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	type = *((int *)_data);
	
	constraint = rna_PoseChannel_constraints_new(_selfid, _self, CTX_data_main(C), type);
	*((struct bConstraint **)_retdata) = constraint;
}

RNA_EXTERN_C void PoseBoneConstraints_remove_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint)
{
	rna_PoseChannel_constraints_remove(_selfid, _self, bmain, reports, constraint);
}

static void PoseBoneConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct PointerRNA *constraint;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	
	rna_PoseChannel_constraints_remove(_selfid, _self, CTX_data_main(C), reports, constraint);
}

RNA_EXTERN_C void PoseBoneConstraints_move_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, int from_index, int to_index)
{
	rna_PoseChannel_constraints_move(_selfid, _self, bmain, reports, from_index, to_index);
}

static void PoseBoneConstraints_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_PoseChannel_constraints_move(_selfid, _self, CTX_data_main(C), reports, from_index, to_index);
}

RNA_EXTERN_C struct bConstraint *PoseBoneConstraints_copy_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, struct PointerRNA *constraint)
{
	return rna_PoseChannel_constraints_copy(_selfid, _self, bmain, constraint);
}

static void PoseBoneConstraints_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct PointerRNA *constraint;
	struct bConstraint *new_constraint;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	_data += 8;
	_retdata = _data;
	
	new_constraint = rna_PoseChannel_constraints_copy(_selfid, _self, CTX_data_main(C), constraint);
	*((struct bConstraint **)_retdata) = new_constraint;
}

/* Repeated prototypes to detect errors */

struct bConstraint *rna_PoseChannel_constraints_new(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, int type);
void rna_PoseChannel_constraints_remove(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint);
void rna_PoseChannel_constraints_move(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, int from_index, int to_index);
struct bConstraint *rna_PoseChannel_constraints_copy(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, struct PointerRNA *constraint);



/* Pose */
CollectionPropertyRNA rna_Pose_rna_properties = {
	{(PropertyRNA *)&rna_Pose_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_rna_properties_begin, Pose_rna_properties_next, Pose_rna_properties_end, Pose_rna_properties_get, nullptr, nullptr, Pose_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Pose_rna_type = {
	{(PropertyRNA *)&rna_Pose_bones, (PropertyRNA *)&rna_Pose_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_Pose_bones = {
	{(PropertyRNA *)&rna_Pose_ik_solver, (PropertyRNA *)&rna_Pose_rna_type,
	-1, "bones", 0, 1, 0, 0, 0, "Pose Bones",
	"Individual pose bones for the armature",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_bones_begin, Pose_bones_next, Pose_bones_end, Pose_bones_get, nullptr, Pose_bones_lookup_int, Pose_bones_lookup_string, nullptr, &RNA_PoseBone
};

static const EnumPropertyItem rna_Pose_ik_solver_items[3] = {
	{0, "LEGACY", 0, "Standard", "Original IK solver"},
	{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Pose_ik_solver = {
	{(PropertyRNA *)&rna_Pose_ik_param, (PropertyRNA *)&rna_Pose_bones,
	-1, "ik_solver", 3, 0, 0, 0, 0, "IK Solver",
	"Selection of IK solver for IK chain",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_ik_solver_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_ik_solver_get, Pose_ik_solver_set, nullptr, nullptr, nullptr, rna_Pose_ik_solver_items, 2, 0
};

PointerPropertyRNA rna_Pose_ik_param = {
	{(PropertyRNA *)&rna_Pose_use_mirror_x, (PropertyRNA *)&rna_Pose_ik_solver,
	-1, "ik_param", 8388608, 0, 0, 0, 0, "IK Param",
	"Parameters for IK solver",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_ik_param_get, nullptr, rna_Pose_ikparam_typef, nullptr,&RNA_IKParam
};

BoolPropertyRNA rna_Pose_use_mirror_x = {
	{(PropertyRNA *)&rna_Pose_use_mirror_relative, (PropertyRNA *)&rna_Pose_ik_param,
	-1, "use_mirror_x", 65539, 1, 0, 0, 0, "X-Axis Mirror",
	"Apply changes to matching bone on opposite side of X-Axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_use_mirror_x_get, Pose_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Pose_use_mirror_relative = {
	{(PropertyRNA *)&rna_Pose_use_auto_ik, (PropertyRNA *)&rna_Pose_use_mirror_x,
	-1, "use_mirror_relative", 65539, 1, 0, 0, 0, "Relative Mirror",
	"Apply relative transformations in X-mirror mode (not supported with Auto IK)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_use_mirror_relative_get, Pose_use_mirror_relative_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Pose_use_auto_ik = {
	{(PropertyRNA *)&rna_Pose_animation_visualization, (PropertyRNA *)&rna_Pose_use_mirror_relative,
	-1, "use_auto_ik", 65539, 1, 0, 0, 0, "Auto IK",
	"Add temporary IK constraints while grabbing bones in Pose Mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_use_auto_ik_get, Pose_use_auto_ik_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Pose_animation_visualization = {
	{nullptr, (PropertyRNA *)&rna_Pose_use_auto_ik,
	-1, "animation_visualization", 8650752, 1, 0, 0, 0, "Animation Visualization",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Pose_animation_visualization_get, nullptr, nullptr, nullptr,&RNA_AnimViz
};

PointerPropertyRNA rna_Pose_apply_pose_from_action_action = {
	{(PropertyRNA *)&rna_Pose_apply_pose_from_action_evaluation_time, nullptr,
	-1, "action", 8388736, 0, 1, 0, 0, "Action",
	"The Action containing the pose",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Action
};

FloatPropertyRNA rna_Pose_apply_pose_from_action_evaluation_time = {
	{nullptr, (PropertyRNA *)&rna_Pose_apply_pose_from_action_action,
	-1, "evaluation_time", 3, 0, 0, 0, 0, "Evaluation Time",
	"Time at which the given action is evaluated to obtain the pose",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_Pose_apply_pose_from_action_func = {
	{(FunctionRNA *)&rna_Pose_blend_pose_from_action_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Pose_apply_pose_from_action_action, (PropertyRNA *)&rna_Pose_apply_pose_from_action_evaluation_time}},
	"apply_pose_from_action", 2057, "Apply the given action to this pose by evaluating it at a specific time. Only updates the pose of selected bones, or all bones if none are selected.",
	Pose_apply_pose_from_action_call,
	nullptr
};

PointerPropertyRNA rna_Pose_blend_pose_from_action_action = {
	{(PropertyRNA *)&rna_Pose_blend_pose_from_action_blend_factor, nullptr,
	-1, "action", 8388736, 0, 1, 0, 0, "Action",
	"The Action containing the pose",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Action
};

FloatPropertyRNA rna_Pose_blend_pose_from_action_blend_factor = {
	{(PropertyRNA *)&rna_Pose_blend_pose_from_action_evaluation_time, (PropertyRNA *)&rna_Pose_blend_pose_from_action_action,
	-1, "blend_factor", 3, 0, 0, 0, 0, "Blend Factor",
	"How much the given Action affects the final pose",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Pose_blend_pose_from_action_evaluation_time = {
	{nullptr, (PropertyRNA *)&rna_Pose_blend_pose_from_action_blend_factor,
	-1, "evaluation_time", 3, 0, 0, 0, 0, "Evaluation Time",
	"Time at which the given action is evaluated to obtain the pose",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_Pose_blend_pose_from_action_func = {
	{(FunctionRNA *)&rna_Pose_backup_create_func, (FunctionRNA *)&rna_Pose_apply_pose_from_action_func,
	nullptr,
	{(PropertyRNA *)&rna_Pose_blend_pose_from_action_action, (PropertyRNA *)&rna_Pose_blend_pose_from_action_evaluation_time}},
	"blend_pose_from_action", 2057, "Blend the given action into this pose by evaluating it at a specific time. Only updates the pose of selected bones, or all bones if none are selected.",
	Pose_blend_pose_from_action_call,
	nullptr
};

PointerPropertyRNA rna_Pose_backup_create_action = {
	{nullptr, nullptr,
	-1, "action", 8388736, 0, 1, 0, 0, "Action",
	"An Action with animation data for the bones. Only the animated bones will be included in the backup",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Action
};

FunctionRNA rna_Pose_backup_create_func = {
	{(FunctionRNA *)&rna_Pose_backup_restore_func, (FunctionRNA *)&rna_Pose_blend_pose_from_action_func,
	nullptr,
	{(PropertyRNA *)&rna_Pose_backup_create_action, (PropertyRNA *)&rna_Pose_backup_create_action}},
	"backup_create", 2049, "Create a backup of the current pose. Only those bones that are animated in the Action are backed up. The object owns the backup, and each object can have only one backup at a time. When you no longer need it, it must be freed use `backup_clear()`",
	Pose_backup_create_call,
	nullptr
};

BoolPropertyRNA rna_Pose_backup_restore_success = {
	{nullptr, nullptr,
	-1, "success", 3, 0, 2, 0, 0, "",
	"`True` when the backup was restored, `False` if there was no backup to restore",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Pose_backup_restore_func = {
	{(FunctionRNA *)&rna_Pose_backup_clear_func, (FunctionRNA *)&rna_Pose_backup_create_func,
	nullptr,
	{(PropertyRNA *)&rna_Pose_backup_restore_success, (PropertyRNA *)&rna_Pose_backup_restore_success}},
	"backup_restore", 2057, "Restore the previously made pose backup. This can be called multiple times. See `Pose.backup_create()` for more info",
	Pose_backup_restore_call,
	(PropertyRNA *)&rna_Pose_backup_restore_success
};

FunctionRNA rna_Pose_backup_clear_func = {
	{nullptr, (FunctionRNA *)&rna_Pose_backup_restore_func,
	nullptr,
	{nullptr, nullptr}},
	"backup_clear", 2049, "Free a previously made pose backup. See `Pose.backup_create()` for more info.",
	Pose_backup_clear_call,
	nullptr
};

StructRNA RNA_Pose = {
	{(ContainerRNA *)&RNA_PoseBone, (ContainerRNA *)&RNA_PointCloud,
	nullptr,
	{(PropertyRNA *)&rna_Pose_rna_properties, (PropertyRNA *)&rna_Pose_animation_visualization}},
	"Pose", nullptr, nullptr, 516, nullptr, "Pose",
	"A collection of pose channels, including settings for animating bones",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Pose_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_Pose_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Pose_apply_pose_from_action_func, (FunctionRNA *)&rna_Pose_backup_clear_func}
};

/* Pose Bone */
CollectionPropertyRNA rna_PoseBone_rna_properties = {
	{(PropertyRNA *)&rna_PoseBone_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_rna_properties_begin, PoseBone_rna_properties_next, PoseBone_rna_properties_end, PoseBone_rna_properties_get, nullptr, nullptr, PoseBone_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PoseBone_rna_type = {
	{(PropertyRNA *)&rna_PoseBone_constraints, (PropertyRNA *)&rna_PoseBone_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_PoseBone_constraints = {
	{(PropertyRNA *)&rna_PoseBone_name, (PropertyRNA *)&rna_PoseBone_rna_type,
	-1, "constraints", 0, 1025, 0, 0, 0, "Constraints",
	"Constraints that act on this pose channel",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_PoseChannel_constraints_override_apply,
	0, PROP_RAW_UNSET, &RNA_PoseBoneConstraints},
	PoseBone_constraints_begin, PoseBone_constraints_next, PoseBone_constraints_end, PoseBone_constraints_get, nullptr, PoseBone_constraints_lookup_int, PoseBone_constraints_lookup_string, nullptr, &RNA_Constraint
};

StringPropertyRNA rna_PoseBone_name = {
	{(PropertyRNA *)&rna_PoseBone_motion_path, (PropertyRNA *)&rna_PoseBone_constraints,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_PoseChannel_name_update, 0, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_name_get, PoseBone_name_length, PoseBone_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_PoseBone_motion_path = {
	{(PropertyRNA *)&rna_PoseBone_bone, (PropertyRNA *)&rna_PoseBone_name,
	-1, "motion_path", 8388608, 0, 0, 0, 0, "Motion Path",
	"Motion Path for this element",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_motion_path_get, nullptr, nullptr, nullptr,&RNA_MotionPath
};

PointerPropertyRNA rna_PoseBone_bone = {
	{(PropertyRNA *)&rna_PoseBone_parent, (PropertyRNA *)&rna_PoseBone_motion_path,
	-1, "bone", 8650880, 0, 0, 0, 0, "Bone",
	"Bone associated with this PoseBone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_bone_get, nullptr, nullptr, nullptr,&RNA_Bone
};

PointerPropertyRNA rna_PoseBone_parent = {
	{(PropertyRNA *)&rna_PoseBone_child, (PropertyRNA *)&rna_PoseBone_bone,
	-1, "parent", 8388736, 0, 0, 0, 0, "Parent",
	"Parent of this pose bone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_parent_get, nullptr, nullptr, nullptr,&RNA_PoseBone
};

PointerPropertyRNA rna_PoseBone_child = {
	{(PropertyRNA *)&rna_PoseBone_location, (PropertyRNA *)&rna_PoseBone_parent,
	-1, "child", 8388736, 0, 0, 0, 0, "Child",
	"Child of this pose bone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_child_get, nullptr, nullptr, nullptr,&RNA_PoseBone
};

static float rna_PoseBone_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_location = {
	{(PropertyRNA *)&rna_PoseBone_scale, (PropertyRNA *)&rna_PoseBone_child,
	-1, "location", 3, 1, 0, 4, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_IK_update, 101974016, nullptr, rna_PoseChannel_location_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, loc), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_location_get, PoseBone_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_location_default
};

static float rna_PoseBone_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_scale = {
	{(PropertyRNA *)&rna_PoseBone_rotation_quaternion, (PropertyRNA *)&rna_PoseBone_location,
	-1, "scale", 67108867, 1, 0, 4, 0, "Scale",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_IK_update, 101974016, nullptr, rna_PoseChannel_scale_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, size), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_scale_get, PoseBone_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_scale_default
};

static float rna_PoseBone_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_quaternion = {
	{(PropertyRNA *)&rna_PoseBone_rotation_axis_angle, (PropertyRNA *)&rna_PoseBone_scale,
	-1, "rotation_quaternion", 3, 1, 0, 4, 0, "Quaternion Rotation",
	"Rotation in Quaternions",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_QUATERNION | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Pose_update, 101974016, nullptr, rna_PoseChannel_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, quat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_rotation_quaternion_get, PoseBone_rotation_quaternion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_quaternion_default
};

static float rna_PoseBone_rotation_axis_angle_default[4] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_axis_angle = {
	{(PropertyRNA *)&rna_PoseBone_rotation_euler, (PropertyRNA *)&rna_PoseBone_rotation_quaternion,
	-1, "rotation_axis_angle", 3, 1, 0, 0, 0, "Axis-Angle Rotation",
	"Angle of Rotation for Axis-Angle rotation representation",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_AXISANGLE | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Pose_update, 101974016, nullptr, rna_PoseChannel_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, PoseBone_rotation_axis_angle_get, PoseBone_rotation_axis_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_axis_angle_default
};

static float rna_PoseBone_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_euler = {
	{(PropertyRNA *)&rna_PoseBone_rotation_mode, (PropertyRNA *)&rna_PoseBone_rotation_axis_angle,
	-1, "rotation_euler", 3, 1, 0, 4, 0, "Euler Rotation",
	"Rotation in Eulers",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_EULER | (int)PROP_UNIT_ROTATION), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, nullptr, rna_PoseChannel_rotation_euler_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, eul), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_rotation_euler_get, PoseBone_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, 0.0f, rna_PoseBone_rotation_euler_default
};

EnumPropertyRNA rna_PoseBone_rotation_mode = {
	{(PropertyRNA *)&rna_PoseBone_bbone_rollin, (PropertyRNA *)&rna_PoseBone_rotation_euler,
	-1, "rotation_mode", 3, 1, 0, 0, 0, "Rotation Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_rotation_mode_get, PoseBone_rotation_mode_set, nullptr, nullptr, nullptr, rna_enum_object_rotation_mode_items, 8, 0
};

FloatPropertyRNA rna_PoseBone_bbone_rollin = {
	{(PropertyRNA *)&rna_PoseBone_bbone_rollout, (PropertyRNA *)&rna_PoseBone_rotation_mode,
	-1, "bbone_rollin", 3, 0, 0, 4, 0, "Roll In",
	"Roll offset for the start of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, roll1), (RawPropertyType)5, nullptr},
	PoseBone_bbone_rollin_get, PoseBone_bbone_rollin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_rollout = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveinx, (PropertyRNA *)&rna_PoseBone_bbone_rollin,
	-1, "bbone_rollout", 3, 0, 0, 4, 0, "Roll Out",
	"Roll offset for the end of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, roll2), (RawPropertyType)5, nullptr},
	PoseBone_bbone_rollout_get, PoseBone_bbone_rollout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_curveinx = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveinz, (PropertyRNA *)&rna_PoseBone_bbone_rollout,
	-1, "bbone_curveinx", 3, 0, 0, 4, 0, "In X",
	"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_in_x), (RawPropertyType)5, nullptr},
	PoseBone_bbone_curveinx_get, PoseBone_bbone_curveinx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_curveinz = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveoutx, (PropertyRNA *)&rna_PoseBone_bbone_curveinx,
	-1, "bbone_curveinz", 3, 0, 0, 4, 0, "In Z",
	"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_in_z), (RawPropertyType)5, nullptr},
	PoseBone_bbone_curveinz_get, PoseBone_bbone_curveinz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_curveoutx = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveoutz, (PropertyRNA *)&rna_PoseBone_bbone_curveinz,
	-1, "bbone_curveoutx", 3, 0, 0, 4, 0, "Out X",
	"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_out_x), (RawPropertyType)5, nullptr},
	PoseBone_bbone_curveoutx_get, PoseBone_bbone_curveoutx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_curveoutz = {
	{(PropertyRNA *)&rna_PoseBone_bbone_easein, (PropertyRNA *)&rna_PoseBone_bbone_curveoutx,
	-1, "bbone_curveoutz", 3, 0, 0, 4, 0, "Out Z",
	"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_out_z), (RawPropertyType)5, nullptr},
	PoseBone_bbone_curveoutz_get, PoseBone_bbone_curveoutz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_easein = {
	{(PropertyRNA *)&rna_PoseBone_bbone_easeout, (PropertyRNA *)&rna_PoseBone_bbone_curveoutz,
	-1, "bbone_easein", 3, 0, 0, 4, 0, "Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0, "Armature",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ease1), (RawPropertyType)5, nullptr},
	PoseBone_bbone_easein_get, PoseBone_bbone_easein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_easeout = {
	{(PropertyRNA *)&rna_PoseBone_bbone_scalein, (PropertyRNA *)&rna_PoseBone_bbone_easein,
	-1, "bbone_easeout", 3, 0, 0, 4, 0, "Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0, "Armature",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ease2), (RawPropertyType)5, nullptr},
	PoseBone_bbone_easeout_get, PoseBone_bbone_easeout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

static float rna_PoseBone_bbone_scalein_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_bbone_scalein = {
	{(PropertyRNA *)&rna_PoseBone_bbone_scaleout, (PropertyRNA *)&rna_PoseBone_bbone_easeout,
	-1, "bbone_scalein", 67108867, 0, 0, 4, 0, "Scale In",
	"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, scale_in), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_bbone_scalein_get, PoseBone_bbone_scalein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_bbone_scalein_default
};

static float rna_PoseBone_bbone_scaleout_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_bbone_scaleout = {
	{(PropertyRNA *)&rna_PoseBone_bbone_custom_handle_start, (PropertyRNA *)&rna_PoseBone_bbone_scalein,
	-1, "bbone_scaleout", 67108867, 0, 0, 4, 0, "Scale Out",
	"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, scale_out), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_bbone_scaleout_get, PoseBone_bbone_scaleout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_bbone_scaleout_default
};

PointerPropertyRNA rna_PoseBone_bbone_custom_handle_start = {
	{(PropertyRNA *)&rna_PoseBone_bbone_custom_handle_end, (PropertyRNA *)&rna_PoseBone_bbone_scaleout,
	-1, "bbone_custom_handle_start", 8388736, 2, 0, 0, 0, "B-Bone Start Handle",
	"Bone that serves as the start handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_dependency_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_bbone_custom_handle_start_get, nullptr, nullptr, nullptr,&RNA_PoseBone
};

PointerPropertyRNA rna_PoseBone_bbone_custom_handle_end = {
	{(PropertyRNA *)&rna_PoseBone_matrix_channel, (PropertyRNA *)&rna_PoseBone_bbone_custom_handle_start,
	-1, "bbone_custom_handle_end", 8388736, 2, 0, 0, 0, "B-Bone End Handle",
	"Bone that serves as the end handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_dependency_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_bbone_custom_handle_end_get, nullptr, nullptr, nullptr,&RNA_PoseBone
};

static float rna_PoseBone_matrix_channel_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix_channel = {
	{(PropertyRNA *)&rna_PoseBone_matrix_basis, (PropertyRNA *)&rna_PoseBone_bbone_custom_handle_end,
	-1, "matrix_channel", 2, 0, 0, 4, 0, "Channel Matrix",
	"4×4 matrix of the bone\'s location/rotation/scale channels (including animation and drivers) and the effect of bone constraints",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, chan_mat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_matrix_channel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_channel_default
};

static float rna_PoseBone_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix_basis = {
	{(PropertyRNA *)&rna_PoseBone_matrix, (PropertyRNA *)&rna_PoseBone_matrix_channel,
	-1, "matrix_basis", 1, 0, 0, 0, 0, "Basis Matrix",
	"Alternative access to location/scale/rotation relative to the parent and own rest bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, PoseBone_matrix_basis_get, PoseBone_matrix_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_basis_default
};

static float rna_PoseBone_matrix_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix = {
	{(PropertyRNA *)&rna_PoseBone_head, (PropertyRNA *)&rna_PoseBone_matrix_basis,
	-1, "matrix", 3, 0, 0, 0, 0, "Pose Matrix",
	"Final 4×4 matrix after constraints and drivers are applied, in the armature object space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, PoseBone_matrix_get, PoseBone_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_default
};

static float rna_PoseBone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_head = {
	{(PropertyRNA *)&rna_PoseBone_tail, (PropertyRNA *)&rna_PoseBone_matrix,
	-1, "head", 2, 0, 0, 4, 0, "Pose Head Position",
	"Location of head of the channel\'s bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, pose_head), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_head_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_head_default
};

static float rna_PoseBone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_tail = {
	{(PropertyRNA *)&rna_PoseBone_length, (PropertyRNA *)&rna_PoseBone_head,
	-1, "tail", 2, 0, 0, 4, 0, "Pose Tail Position",
	"Location of tail of the channel\'s bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, pose_tail), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_tail_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_tail_default
};

FloatPropertyRNA rna_PoseBone_length = {
	{(PropertyRNA *)&rna_PoseBone_is_in_ik_chain, (PropertyRNA *)&rna_PoseBone_tail,
	-1, "length", 2, 0, 0, 0, 0, "Length",
	"Length of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_PoseBone_is_in_ik_chain = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_x, (PropertyRNA *)&rna_PoseBone_length,
	-1, "is_in_ik_chain", 2, 0, 0, 0, 0, "Has IK",
	"Is part of an IK chain",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_is_in_ik_chain_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_lock_ik_x = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_y, (PropertyRNA *)&rna_PoseBone_is_in_ik_chain,
	-1, "lock_ik_x", 4099, 0, 0, 0, 0, "IK X Lock",
	"Disallow movement around the X axis",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_lock_ik_x_get, PoseBone_lock_ik_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_lock_ik_y = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_z, (PropertyRNA *)&rna_PoseBone_lock_ik_x,
	-1, "lock_ik_y", 4099, 0, 0, 0, 0, "IK Y Lock",
	"Disallow movement around the Y axis",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_lock_ik_y_get, PoseBone_lock_ik_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_lock_ik_z = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_x, (PropertyRNA *)&rna_PoseBone_lock_ik_y,
	-1, "lock_ik_z", 4099, 0, 0, 0, 0, "IK Z Lock",
	"Disallow movement around the Z axis",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_lock_ik_z_get, PoseBone_lock_ik_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_x = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_y, (PropertyRNA *)&rna_PoseBone_lock_ik_z,
	-1, "use_ik_limit_x", 3, 0, 0, 0, 0, "IK X Limit",
	"Limit movement around the X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_use_ik_limit_x_get, PoseBone_use_ik_limit_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_y = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_z, (PropertyRNA *)&rna_PoseBone_use_ik_limit_x,
	-1, "use_ik_limit_y", 3, 0, 0, 0, 0, "IK Y Limit",
	"Limit movement around the Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_use_ik_limit_y_get, PoseBone_use_ik_limit_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_z = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_rotation_control, (PropertyRNA *)&rna_PoseBone_use_ik_limit_y,
	-1, "use_ik_limit_z", 3, 0, 0, 0, 0, "IK Z Limit",
	"Limit movement around the Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_use_ik_limit_z_get, PoseBone_use_ik_limit_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_use_ik_rotation_control = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_linear_control, (PropertyRNA *)&rna_PoseBone_use_ik_limit_z,
	-1, "use_ik_rotation_control", 3, 0, 0, 0, 0, "IK Rotation Control",
	"Apply channel rotation as IK constraint",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_use_ik_rotation_control_get, PoseBone_use_ik_rotation_control_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_use_ik_linear_control = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_x, (PropertyRNA *)&rna_PoseBone_use_ik_rotation_control,
	-1, "use_ik_linear_control", 3, 0, 0, 0, 0, "IK Linear Control",
	"Apply channel size as IK constraint if stretching is enabled",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_use_ik_linear_control_get, PoseBone_use_ik_linear_control_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_min_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_x, (PropertyRNA *)&rna_PoseBone_use_ik_linear_control,
	-1, "ik_min_x", 3, 0, 0, 4, 0, "IK X Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmin[0]), (RawPropertyType)5, nullptr},
	PoseBone_ik_min_x_get, PoseBone_ik_min_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_max_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_y, (PropertyRNA *)&rna_PoseBone_ik_min_x,
	-1, "ik_max_x", 3, 0, 0, 4, 0, "IK X Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmax[0]), (RawPropertyType)5, nullptr},
	PoseBone_ik_max_x_get, PoseBone_ik_max_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_min_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_y, (PropertyRNA *)&rna_PoseBone_ik_max_x,
	-1, "ik_min_y", 3, 0, 0, 4, 0, "IK Y Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmin[1]), (RawPropertyType)5, nullptr},
	PoseBone_ik_min_y_get, PoseBone_ik_min_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_max_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_z, (PropertyRNA *)&rna_PoseBone_ik_min_y,
	-1, "ik_max_y", 3, 0, 0, 4, 0, "IK Y Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmax[1]), (RawPropertyType)5, nullptr},
	PoseBone_ik_max_y_get, PoseBone_ik_max_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_min_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_z, (PropertyRNA *)&rna_PoseBone_ik_max_y,
	-1, "ik_min_z", 3, 0, 0, 4, 0, "IK Z Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmin[2]), (RawPropertyType)5, nullptr},
	PoseBone_ik_min_z_get, PoseBone_ik_min_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_max_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_x, (PropertyRNA *)&rna_PoseBone_ik_min_z,
	-1, "ik_max_z", 3, 0, 0, 4, 0, "IK Z Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmax[2]), (RawPropertyType)5, nullptr},
	PoseBone_ik_max_z_get, PoseBone_ik_max_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_y, (PropertyRNA *)&rna_PoseBone_ik_max_z,
	-1, "ik_stiffness_x", 3, 0, 0, 4, 0, "IK X Stiffness",
	"IK stiffness around the X axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, stiffness[0]), (RawPropertyType)5, nullptr},
	PoseBone_ik_stiffness_x_get, PoseBone_ik_stiffness_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_z, (PropertyRNA *)&rna_PoseBone_ik_stiffness_x,
	-1, "ik_stiffness_y", 3, 0, 0, 4, 0, "IK Y Stiffness",
	"IK stiffness around the Y axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, stiffness[1]), (RawPropertyType)5, nullptr},
	PoseBone_ik_stiffness_y_get, PoseBone_ik_stiffness_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_stretch, (PropertyRNA *)&rna_PoseBone_ik_stiffness_y,
	-1, "ik_stiffness_z", 3, 0, 0, 4, 0, "IK Z Stiffness",
	"IK stiffness around the Z axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, stiffness[2]), (RawPropertyType)5, nullptr},
	PoseBone_ik_stiffness_z_get, PoseBone_ik_stiffness_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_stretch = {
	{(PropertyRNA *)&rna_PoseBone_ik_rotation_weight, (PropertyRNA *)&rna_PoseBone_ik_stiffness_z,
	-1, "ik_stretch", 3, 0, 0, 4, 0, "IK Stretch",
	"Allow scaling of the bone for IK",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ikstretch), (RawPropertyType)5, nullptr},
	PoseBone_ik_stretch_get, PoseBone_ik_stretch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_rotation_weight = {
	{(PropertyRNA *)&rna_PoseBone_ik_linear_weight, (PropertyRNA *)&rna_PoseBone_ik_stretch,
	-1, "ik_rotation_weight", 3, 0, 0, 4, 0, "IK Rotation Weight",
	"Weight of rotation constraint for IK",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ikrotweight), (RawPropertyType)5, nullptr},
	PoseBone_ik_rotation_weight_get, PoseBone_ik_rotation_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_PoseBone_ik_linear_weight = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape, (PropertyRNA *)&rna_PoseBone_ik_rotation_weight,
	-1, "ik_linear_weight", 3, 0, 0, 4, 0, "IK Lin Weight",
	"Weight of scale constraint for IK",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, iklinweight), (RawPropertyType)5, nullptr},
	PoseBone_ik_linear_weight_get, PoseBone_ik_linear_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_PoseBone_custom_shape = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_scale_xyz, (PropertyRNA *)&rna_PoseBone_ik_linear_weight,
	-1, "custom_shape", 8388801, 1, 0, 0, 0, "Custom Object",
	"Object that defines custom display shape for this bone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_dependency_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_custom_shape_get, PoseBone_custom_shape_set, nullptr, nullptr,&RNA_Object
};

static float rna_PoseBone_custom_shape_scale_xyz_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_custom_shape_scale_xyz = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_translation, (PropertyRNA *)&rna_PoseBone_custom_shape,
	-1, "custom_shape_scale_xyz", 67108867, 0, 0, 4, 0, "Custom Shape Scale",
	"Adjust the size of the custom shape",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, custom_scale_xyz), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_custom_shape_scale_xyz_get, PoseBone_custom_shape_scale_xyz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_custom_shape_scale_xyz_default
};

static float rna_PoseBone_custom_shape_translation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_custom_shape_translation = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_rotation_euler, (PropertyRNA *)&rna_PoseBone_custom_shape_scale_xyz,
	-1, "custom_shape_translation", 67108867, 0, 0, 4, 0, "Custom Shape Translation",
	"Adjust the location of the custom shape",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, custom_translation), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_custom_shape_translation_get, PoseBone_custom_shape_translation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_custom_shape_translation_default
};

static float rna_PoseBone_custom_shape_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_custom_shape_rotation_euler = {
	{(PropertyRNA *)&rna_PoseBone_use_custom_shape_bone_size, (PropertyRNA *)&rna_PoseBone_custom_shape_translation,
	-1, "custom_shape_rotation_euler", 3, 0, 0, 4, 0, "Custom Shape Rotation",
	"Adjust the rotation of the custom shape",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_EULER | (int)PROP_UNIT_ROTATION), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, custom_rotation_euler), (RawPropertyType)5, nullptr},
	nullptr, nullptr, PoseBone_custom_shape_rotation_euler_get, PoseBone_custom_shape_rotation_euler_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 100.0f, 5, 0.0f, rna_PoseBone_custom_shape_rotation_euler_default
};

BoolPropertyRNA rna_PoseBone_use_custom_shape_bone_size = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_transform, (PropertyRNA *)&rna_PoseBone_custom_shape_rotation_euler,
	-1, "use_custom_shape_bone_size", 3, 0, 0, 0, 0, "Scale to Bone Length",
	"Scale the custom object by the bone length",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_use_custom_shape_bone_size_get, PoseBone_use_custom_shape_bone_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_PoseBone_custom_shape_transform = {
	{(PropertyRNA *)&rna_PoseBone_color, (PropertyRNA *)&rna_PoseBone_use_custom_shape_bone_size,
	-1, "custom_shape_transform", 8388737, 2, 0, 0, 0, "Custom Shape Transform",
	"Bone that defines the display transform of this custom shape",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_custom_shape_transform_get, PoseBone_custom_shape_transform_set, nullptr, nullptr,&RNA_PoseBone
};

PointerPropertyRNA rna_PoseBone_color = {
	{(PropertyRNA *)&rna_PoseBone_lock_location, (PropertyRNA *)&rna_PoseBone_custom_shape_transform,
	-1, "color", 8388608, 1, 0, 0, 0, "color",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_color_get, nullptr, nullptr, nullptr,&RNA_BoneColor
};

static bool rna_PoseBone_lock_location_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_location = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotation, (PropertyRNA *)&rna_PoseBone_color,
	-1, "lock_location", 4099, 0, 0, 0, 0, "Lock Location",
	"Lock editing of location when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, PoseBone_lock_location_get, PoseBone_lock_location_set, nullptr, nullptr, nullptr, nullptr, 0, rna_PoseBone_lock_location_default
};

static bool rna_PoseBone_lock_rotation_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_rotation = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotation_w, (PropertyRNA *)&rna_PoseBone_lock_location,
	-1, "lock_rotation", 4099, 0, 0, 0, 0, "Lock Rotation",
	"Lock editing of rotation when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, PoseBone_lock_rotation_get, PoseBone_lock_rotation_set, nullptr, nullptr, nullptr, nullptr, 0, rna_PoseBone_lock_rotation_default
};

BoolPropertyRNA rna_PoseBone_lock_rotation_w = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotations_4d, (PropertyRNA *)&rna_PoseBone_lock_rotation,
	-1, "lock_rotation_w", 4099, 0, 0, 0, 0, "Lock Rotation (4D Angle)",
	"Lock editing of \'angle\' component of four-component rotations when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_lock_rotation_w_get, PoseBone_lock_rotation_w_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_lock_rotations_4d = {
	{(PropertyRNA *)&rna_PoseBone_lock_scale, (PropertyRNA *)&rna_PoseBone_lock_rotation_w,
	-1, "lock_rotations_4d", 3, 0, 0, 0, 0, "Lock Rotations (4D)",
	"Lock editing of four component rotations by components (instead of as Eulers)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBone_lock_rotations_4d_get, PoseBone_lock_rotations_4d_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static bool rna_PoseBone_lock_scale_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_scale = {
	{nullptr, (PropertyRNA *)&rna_PoseBone_lock_rotations_4d,
	-1, "lock_scale", 4099, 0, 0, 0, 0, "Lock Scale",
	"Lock editing of scale when transforming",
	40, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, PoseBone_lock_scale_get, PoseBone_lock_scale_set, nullptr, nullptr, nullptr, nullptr, 0, rna_PoseBone_lock_scale_default
};

static float rna_PoseBone_evaluate_envelope_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_evaluate_envelope_point = {
	{(PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor, nullptr,
	-1, "point", 3, 0, 1, 0, 0, "Point",
	"Position in 3d space to evaluate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_evaluate_envelope_point_default
};

FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor = {
	{nullptr, (PropertyRNA *)&rna_PoseBone_evaluate_envelope_point,
	-1, "factor", 3, 0, 2, 0, 0, "Factor",
	"Envelope factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_PoseBone_evaluate_envelope_func = {
	{(FunctionRNA *)&rna_PoseBone_bbone_segment_index_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_PoseBone_evaluate_envelope_point, (PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor}},
	"evaluate_envelope", 0, "Calculate bone envelope at given point",
	PoseBone_evaluate_envelope_call,
	(PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor
};

static float rna_PoseBone_bbone_segment_index_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_bbone_segment_index_point = {
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_index_index, nullptr,
	-1, "point", 3, 0, 1, 0, 0, "Point",
	"Vertex position in armature pose space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_bbone_segment_index_point_default
};

IntPropertyRNA rna_PoseBone_bbone_segment_index_index = {
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_index_blend_next, (PropertyRNA *)&rna_PoseBone_bbone_segment_index_point,
	-1, "index", 3, 0, 2, 0, 0, "",
	"The index of the first segment joint affecting the point",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_PoseBone_bbone_segment_index_blend_next = {
	{nullptr, (PropertyRNA *)&rna_PoseBone_bbone_segment_index_index,
	-1, "blend_next", 3, 0, 2, 0, 0, "",
	"The blend factor between the given and the following joint",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_PoseBone_bbone_segment_index_func = {
	{(FunctionRNA *)&rna_PoseBone_bbone_segment_matrix_func, (FunctionRNA *)&rna_PoseBone_evaluate_envelope_func,
	nullptr,
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_index_point, (PropertyRNA *)&rna_PoseBone_bbone_segment_index_blend_next}},
	"bbone_segment_index", 16, "Retrieve the index and blend factor of the B-Bone segments based on vertex position",
	PoseBone_bbone_segment_index_call,
	nullptr
};

static float rna_PoseBone_bbone_segment_matrix_matrix_return_default[16] = {
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

FloatPropertyRNA rna_PoseBone_bbone_segment_matrix_matrix_return = {
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_index, nullptr,
	-1, "matrix_return", 3, 0, 2, 0, 0, "",
	"The resulting matrix in bone local space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_bbone_segment_matrix_matrix_return_default
};

IntPropertyRNA rna_PoseBone_bbone_segment_matrix_index = {
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_rest, (PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_matrix_return,
	-1, "index", 3, 0, 1, 0, 0, "",
	"Index of the segment endpoint",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_bbone_segment_matrix_rest = {
	{nullptr, (PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_index,
	-1, "rest", 3, 0, 0, 0, 0, "",
	"Return the rest pose matrix",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_PoseBone_bbone_segment_matrix_func = {
	{(FunctionRNA *)&rna_PoseBone_compute_bbone_handles_func, (FunctionRNA *)&rna_PoseBone_bbone_segment_index_func,
	nullptr,
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_matrix_return, (PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_rest}},
	"bbone_segment_matrix", 16, "Retrieve the matrix of the joint between B-Bone segments if available",
	PoseBone_bbone_segment_matrix_call,
	nullptr
};

static float rna_PoseBone_compute_bbone_handles_handle1_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle1 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll1, nullptr,
	-1, "handle1", 3, 0, 2, 0, 0, "",
	"The direction vector of the start handle in bone local space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_compute_bbone_handles_handle1_default
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll1 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle2, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle1,
	-1, "roll1", 3, 0, 2, 0, 0, "",
	"Roll of the start handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

static float rna_PoseBone_compute_bbone_handles_handle2_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle2 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll2, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll1,
	-1, "handle2", 3, 0, 2, 0, 0, "",
	"The direction vector of the end handle in bone local space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_compute_bbone_handles_handle2_default
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll2 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_rest, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle2,
	-1, "roll2", 3, 0, 2, 0, 0, "",
	"Roll of the end handle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_PoseBone_compute_bbone_handles_rest = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_ease, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll2,
	-1, "rest", 3, 0, 0, 0, 0, "",
	"Return the rest pose state",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_compute_bbone_handles_ease = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_offsets, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_rest,
	-1, "ease", 3, 0, 0, 0, 0, "",
	"Apply scale from ease values",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_PoseBone_compute_bbone_handles_offsets = {
	{nullptr, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_ease,
	-1, "offsets", 3, 0, 0, 0, 0, "",
	"Apply roll and curve offsets from bone properties",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_PoseBone_compute_bbone_handles_func = {
	{nullptr, (FunctionRNA *)&rna_PoseBone_bbone_segment_matrix_func,
	nullptr,
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle1, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_offsets}},
	"compute_bbone_handles", 16, "Retrieve the vectors and rolls coming from B-Bone custom handles",
	PoseBone_compute_bbone_handles_call,
	nullptr
};

StructRNA RNA_PoseBone = {
	{(ContainerRNA *)&RNA_PoseBoneConstraints, (ContainerRNA *)&RNA_Pose,
	nullptr,
	{(PropertyRNA *)&rna_PoseBone_rna_properties, (PropertyRNA *)&rna_PoseBone_lock_scale}},
	"PoseBone", nullptr, nullptr, 516, nullptr, "Pose Bone",
	"Channel defining pose data for a bone in a Pose",
	"*", 174,
	(PropertyRNA *)&rna_PoseBone_name, (PropertyRNA *)&rna_PoseBone_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_PoseBone_path,
	nullptr,
	nullptr,
	nullptr,
	rna_PoseBone_idprops,
	{(FunctionRNA *)&rna_PoseBone_evaluate_envelope_func, (FunctionRNA *)&rna_PoseBone_compute_bbone_handles_func}
};

/* PoseBone Constraints */
CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBoneConstraints_rna_properties_begin, PoseBoneConstraints_rna_properties_next, PoseBoneConstraints_rna_properties_end, PoseBoneConstraints_rna_properties_get, nullptr, nullptr, PoseBoneConstraints_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PoseBoneConstraints_rna_type = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_active, (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBoneConstraints_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_PoseBoneConstraints_active = {
	{nullptr, (PropertyRNA *)&rna_PoseBoneConstraints_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Constraint",
	"Active PoseChannel constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PoseBoneConstraints_active_get, PoseBoneConstraints_active_set, nullptr, nullptr,&RNA_Constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_new_constraint = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_new_type, nullptr,
	-1, "constraint", 8388608, 0, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

EnumPropertyRNA rna_PoseBoneConstraints_new_type = {
	{nullptr, (PropertyRNA *)&rna_PoseBoneConstraints_new_constraint,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_constraint_type_items, 32, 1
};

FunctionRNA rna_PoseBoneConstraints_new_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_PoseBoneConstraints_new_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_new_type}},
	"new", 2052, "Add a constraint to this object",
	PoseBoneConstraints_new_call,
	(PropertyRNA *)&rna_PoseBoneConstraints_new_constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint = {
	{nullptr, nullptr,
	-1, "constraint", 262144, 0, 5, 0, 0, "",
	"Removed constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

FunctionRNA rna_PoseBoneConstraints_remove_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_move_func, (FunctionRNA *)&rna_PoseBoneConstraints_new_func,
	nullptr,
	{(PropertyRNA *)&rna_PoseBoneConstraints_remove_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_remove_constraint}},
	"remove", 2068, "Remove a constraint from this object",
	PoseBoneConstraints_remove_call,
	nullptr
};

IntPropertyRNA rna_PoseBoneConstraints_move_from_index = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_move_to_index, nullptr,
	-1, "from_index", 3, 0, 1, 0, 0, "From Index",
	"Index to move",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

IntPropertyRNA rna_PoseBoneConstraints_move_to_index = {
	{nullptr, (PropertyRNA *)&rna_PoseBoneConstraints_move_from_index,
	-1, "to_index", 3, 0, 1, 0, 0, "To Index",
	"Target index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_PoseBoneConstraints_move_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_copy_func, (FunctionRNA *)&rna_PoseBoneConstraints_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_PoseBoneConstraints_move_from_index, (PropertyRNA *)&rna_PoseBoneConstraints_move_to_index}},
	"move", 2068, "Move a constraint to a different position",
	PoseBoneConstraints_move_call,
	nullptr
};

PointerPropertyRNA rna_PoseBoneConstraints_copy_constraint = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_copy_new_constraint, nullptr,
	-1, "constraint", 262144, 0, 5, 0, 0, "",
	"Constraint to copy - may belong to a different object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_copy_new_constraint = {
	{nullptr, (PropertyRNA *)&rna_PoseBoneConstraints_copy_constraint,
	-1, "new_constraint", 8388608, 0, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Constraint
};

FunctionRNA rna_PoseBoneConstraints_copy_func = {
	{nullptr, (FunctionRNA *)&rna_PoseBoneConstraints_move_func,
	nullptr,
	{(PropertyRNA *)&rna_PoseBoneConstraints_copy_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_copy_new_constraint}},
	"copy", 2052, "Add a new constraint that is a copy of the given one",
	PoseBoneConstraints_copy_call,
	(PropertyRNA *)&rna_PoseBoneConstraints_copy_new_constraint
};

StructRNA RNA_PoseBoneConstraints = {
	{(ContainerRNA *)&RNA_IKParam, (ContainerRNA *)&RNA_PoseBone,
	nullptr,
	{(PropertyRNA *)&rna_PoseBoneConstraints_rna_properties, (PropertyRNA *)&rna_PoseBoneConstraints_active}},
	"PoseBoneConstraints", nullptr, nullptr, 516, nullptr, "PoseBone Constraints",
	"Collection of pose bone constraints",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_PoseBoneConstraints_new_func, (FunctionRNA *)&rna_PoseBoneConstraints_copy_func}
};

/* IKParam */
CollectionPropertyRNA rna_IKParam_rna_properties = {
	{(PropertyRNA *)&rna_IKParam_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IKParam_rna_properties_begin, IKParam_rna_properties_next, IKParam_rna_properties_end, IKParam_rna_properties_get, nullptr, nullptr, IKParam_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IKParam_rna_type = {
	{(PropertyRNA *)&rna_IKParam_ik_solver, (PropertyRNA *)&rna_IKParam_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IKParam_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_IKParam_ik_solver_items[3] = {
	{0, "LEGACY", 0, "Standard", "Original IK solver"},
	{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_IKParam_ik_solver = {
	{nullptr, (PropertyRNA *)&rna_IKParam_rna_type,
	-1, "ik_solver", 2, 0, 0, 4, 0, "IK Solver",
	"IK solver for which these parameters are defined",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bIKParam, iksolver), (RawPropertyType)0, nullptr},
	IKParam_ik_solver_get, nullptr, nullptr, nullptr, nullptr, rna_IKParam_ik_solver_items, 2, 0
};

StructRNA RNA_IKParam = {
	{(ContainerRNA *)&RNA_Itasc, (ContainerRNA *)&RNA_PoseBoneConstraints,
	nullptr,
	{(PropertyRNA *)&rna_IKParam_rna_properties, (PropertyRNA *)&rna_IKParam_ik_solver}},
	"IKParam", nullptr, nullptr, 516, nullptr, "IKParam",
	"Base type for IK solver parameters",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IKParam_rna_properties,
	nullptr,
	nullptr,
	rna_IKParam_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* bItasc */
FloatPropertyRNA rna_Itasc_precision = {
	{(PropertyRNA *)&rna_Itasc_iterations, nullptr,
	-1, "precision", 3, 0, 0, 4, 0, "Precision",
	"Precision of convergence in case of reiteration",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, precision), (RawPropertyType)5, nullptr},
	Itasc_precision_get, Itasc_precision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Itasc_iterations = {
	{(PropertyRNA *)&rna_Itasc_step_count, (PropertyRNA *)&rna_Itasc_precision,
	-1, "iterations", 3, 0, 0, 4, 0, "Iterations",
	"Maximum number of iterations for convergence in case of reiteration",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, numiter), (RawPropertyType)1, nullptr},
	Itasc_iterations_get, Itasc_iterations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, 0, nullptr
};

IntPropertyRNA rna_Itasc_step_count = {
	{(PropertyRNA *)&rna_Itasc_translate_root_bones, (PropertyRNA *)&rna_Itasc_iterations,
	-1, "step_count", 3, 0, 0, 4, 0, "Num Steps",
	"Divide the frame interval into this many steps",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, numstep), (RawPropertyType)1, nullptr},
	Itasc_step_count_get, Itasc_step_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 50, 1, 50, 1, 0, nullptr
};

BoolPropertyRNA rna_Itasc_translate_root_bones = {
	{(PropertyRNA *)&rna_Itasc_mode, (PropertyRNA *)&rna_Itasc_step_count,
	-1, "translate_root_bones", 3, 0, 0, 0, 0, "Translate Roots",
	"Translate root (i.e. parentless) bones to the armature origin",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Itasc_translate_root_bones_get, Itasc_translate_root_bones_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Itasc_mode_items[3] = {
	{0, "ANIMATION", 0, "Animation", "Stateless solver computing pose starting from current action and non-IK constraints"},
	{8, "SIMULATION", 0, "Simulation", "State-full solver running in real-time context and ignoring actions and non-IK constraints"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Itasc_mode = {
	{(PropertyRNA *)&rna_Itasc_reiteration_method, (PropertyRNA *)&rna_Itasc_translate_root_bones,
	-1, "mode", 3, 0, 0, 4, 0, "Mode",
	nullptr,
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update_rebuild, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, flag), (RawPropertyType)1, nullptr},
	Itasc_mode_get, Itasc_mode_set, nullptr, nullptr, nullptr, rna_Itasc_mode_items, 2, 0
};

static const EnumPropertyItem rna_Itasc_reiteration_method_items[4] = {
	{0, "NEVER", 0, "Never", "The solver does not reiterate, not even on first frame (starts from rest pose)"},
	{2, "INITIAL", 0, "Initial", "The solver reiterates (converges) on the first frame but not on subsequent frame"},
	{6, "ALWAYS", 0, "Always", "The solver reiterates (converges) on all frames"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Itasc_reiteration_method = {
	{(PropertyRNA *)&rna_Itasc_use_auto_step, (PropertyRNA *)&rna_Itasc_mode,
	-1, "reiteration_method", 3, 0, 0, 4, 0, "Reiteration",
	"Defines if the solver is allowed to reiterate (converge until precision is met) on none, first or all frames",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, flag), (RawPropertyType)1, nullptr},
	Itasc_reiteration_method_get, Itasc_reiteration_method_set, nullptr, nullptr, nullptr, rna_Itasc_reiteration_method_items, 3, 0
};

BoolPropertyRNA rna_Itasc_use_auto_step = {
	{(PropertyRNA *)&rna_Itasc_step_min, (PropertyRNA *)&rna_Itasc_reiteration_method,
	-1, "use_auto_step", 3, 0, 0, 0, 0, "Auto Step",
	"Automatically determine the optimal number of steps for best performance/accuracy trade off",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Itasc_use_auto_step_get, Itasc_use_auto_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Itasc_step_min = {
	{(PropertyRNA *)&rna_Itasc_step_max, (PropertyRNA *)&rna_Itasc_use_auto_step,
	-1, "step_min", 3, 0, 0, 4, 0, "Min Step",
	"Lower bound for timestep in second in case of automatic substeps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, minstep), (RawPropertyType)5, nullptr},
	Itasc_step_min_get, Itasc_step_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Itasc_step_max = {
	{(PropertyRNA *)&rna_Itasc_feedback, (PropertyRNA *)&rna_Itasc_step_min,
	-1, "step_max", 3, 0, 0, 4, 0, "Max Step",
	"Higher bound for timestep in second in case of automatic substeps",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, maxstep), (RawPropertyType)5, nullptr},
	Itasc_step_max_get, Itasc_step_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Itasc_feedback = {
	{(PropertyRNA *)&rna_Itasc_velocity_max, (PropertyRNA *)&rna_Itasc_step_max,
	-1, "feedback", 3, 0, 0, 4, 0, "Feedback",
	"Feedback coefficient for error correction, average response time is 1/feedback",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, feedback), (RawPropertyType)5, nullptr},
	Itasc_feedback_get, Itasc_feedback_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Itasc_velocity_max = {
	{(PropertyRNA *)&rna_Itasc_solver, (PropertyRNA *)&rna_Itasc_feedback,
	-1, "velocity_max", 3, 0, 0, 4, 0, "Max Velocity",
	"Maximum joint velocity in radians/second",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, maxvel), (RawPropertyType)5, nullptr},
	Itasc_velocity_max_get, Itasc_velocity_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

static const EnumPropertyItem rna_Itasc_solver_items[3] = {
	{0, "SDLS", 0, "SDLS", "Selective Damped Least Square"},
	{1, "DLS", 0, "DLS", "Damped Least Square with Numerical Filtering"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Itasc_solver = {
	{(PropertyRNA *)&rna_Itasc_damping_max, (PropertyRNA *)&rna_Itasc_velocity_max,
	-1, "solver", 3, 0, 0, 4, 0, "Solver",
	"Solving method selection: automatic damping or manual damping",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update_rebuild, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, solver), (RawPropertyType)1, nullptr},
	Itasc_solver_get, Itasc_solver_set, nullptr, nullptr, nullptr, rna_Itasc_solver_items, 2, 0
};

FloatPropertyRNA rna_Itasc_damping_max = {
	{(PropertyRNA *)&rna_Itasc_damping_epsilon, (PropertyRNA *)&rna_Itasc_solver,
	-1, "damping_max", 3, 0, 0, 4, 0, "Damp",
	"Maximum damping coefficient when singular value is nearly 0 (higher values produce results with more stability, less reactivity)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, dampmax), (RawPropertyType)5, nullptr},
	Itasc_damping_max_get, Itasc_damping_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Itasc_damping_epsilon = {
	{nullptr, (PropertyRNA *)&rna_Itasc_damping_max,
	-1, "damping_epsilon", 3, 0, 0, 4, 0, "Epsilon",
	"Singular value under which damping is progressively applied (higher values produce results with more stability, less reactivity)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, dampeps), (RawPropertyType)5, nullptr},
	Itasc_damping_epsilon_get, Itasc_damping_epsilon_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_Itasc = {
	{(ContainerRNA *)&RNA_CurveProfilePoint, (ContainerRNA *)&RNA_IKParam,
	nullptr,
	{(PropertyRNA *)&rna_Itasc_precision, (PropertyRNA *)&rna_Itasc_damping_epsilon}},
	"Itasc", nullptr, nullptr, 516, nullptr, "bItasc",
	"Parameters for the iTaSC IK solver",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IKParam_rna_properties,
	&RNA_IKParam,
	nullptr,
	rna_IKParam_refine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

