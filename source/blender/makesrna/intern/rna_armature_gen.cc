
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

#include "rna_armature.cc"
#include "rna_armature_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_BoneColor_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoneColor_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_BoneColor_palette;
RNA_EXTERN_C BoolPropertyRNA rna_BoneColor_is_custom;
RNA_EXTERN_C PointerPropertyRNA rna_BoneColor_custom;


RNA_EXTERN_C CollectionPropertyRNA rna_BoneCollection_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoneCollection_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_BoneCollection_name;
RNA_EXTERN_C BoolPropertyRNA rna_BoneCollection_is_visible;
RNA_EXTERN_C BoolPropertyRNA rna_BoneCollection_is_local_override;
RNA_EXTERN_C BoolPropertyRNA rna_BoneCollection_is_editable;
RNA_EXTERN_C CollectionPropertyRNA rna_BoneCollection_bones;

extern FunctionRNA rna_BoneCollection_assign_func;
extern PointerPropertyRNA rna_BoneCollection_assign_bone;
extern BoolPropertyRNA rna_BoneCollection_assign_assigned;

extern FunctionRNA rna_BoneCollection_unassign_func;
extern PointerPropertyRNA rna_BoneCollection_unassign_bone;
extern BoolPropertyRNA rna_BoneCollection_unassign_assigned;



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

RNA_EXTERN_C PointerPropertyRNA rna_Armature_animation_data;
RNA_EXTERN_C CollectionPropertyRNA rna_Armature_bones;
RNA_EXTERN_C CollectionPropertyRNA rna_Armature_edit_bones;
RNA_EXTERN_C CollectionPropertyRNA rna_Armature_collections;
RNA_EXTERN_C EnumPropertyRNA rna_Armature_pose_position;
RNA_EXTERN_C EnumPropertyRNA rna_Armature_display_type;
RNA_EXTERN_C BoolPropertyRNA rna_Armature_show_axes;
RNA_EXTERN_C FloatPropertyRNA rna_Armature_axes_position;
RNA_EXTERN_C EnumPropertyRNA rna_Armature_relation_line_position;
RNA_EXTERN_C BoolPropertyRNA rna_Armature_show_names;
RNA_EXTERN_C BoolPropertyRNA rna_Armature_use_mirror_x;
RNA_EXTERN_C BoolPropertyRNA rna_Armature_show_bone_custom_shapes;
RNA_EXTERN_C BoolPropertyRNA rna_Armature_show_bone_colors;
RNA_EXTERN_C BoolPropertyRNA rna_Armature_is_editmode;

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


extern FunctionRNA rna_Armature_transform_func;
extern FloatPropertyRNA rna_Armature_transform_matrix;



RNA_EXTERN_C CollectionPropertyRNA rna_ArmatureBones_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ArmatureBones_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ArmatureBones_active;


RNA_EXTERN_C CollectionPropertyRNA rna_ArmatureEditBones_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ArmatureEditBones_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ArmatureEditBones_active;

extern FunctionRNA rna_ArmatureEditBones_new_func;
extern StringPropertyRNA rna_ArmatureEditBones_new_name;
extern PointerPropertyRNA rna_ArmatureEditBones_new_bone;

extern FunctionRNA rna_ArmatureEditBones_remove_func;
extern PointerPropertyRNA rna_ArmatureEditBones_remove_bone;



RNA_EXTERN_C CollectionPropertyRNA rna_BoneCollections_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoneCollections_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_BoneCollections_active;
RNA_EXTERN_C IntPropertyRNA rna_BoneCollections_active_index;
RNA_EXTERN_C StringPropertyRNA rna_BoneCollections_active_name;

extern FunctionRNA rna_BoneCollections_new_func;
extern StringPropertyRNA rna_BoneCollections_new_name;
extern PointerPropertyRNA rna_BoneCollections_new_bonecollection;

extern FunctionRNA rna_BoneCollections_remove_func;
extern PointerPropertyRNA rna_BoneCollections_remove_bone_collection;

extern FunctionRNA rna_BoneCollections_move_func;
extern IntPropertyRNA rna_BoneCollections_move_from_index;
extern IntPropertyRNA rna_BoneCollections_move_to_index;



RNA_EXTERN_C CollectionPropertyRNA rna_Bone_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Bone_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_Bone_parent;
RNA_EXTERN_C CollectionPropertyRNA rna_Bone_children;
RNA_EXTERN_C CollectionPropertyRNA rna_Bone_collections;
RNA_EXTERN_C StringPropertyRNA rna_Bone_name;
RNA_EXTERN_C PointerPropertyRNA rna_Bone_color;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_connect;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_inherit_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_envelope_multiply;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_deform;
RNA_EXTERN_C EnumPropertyRNA rna_Bone_inherit_scale;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_local_location;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_relative_parent;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_show_wire;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_cyclic_offset;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_hide_select;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_envelope_distance;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_envelope_weight;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_head_radius;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_tail_radius;
RNA_EXTERN_C IntPropertyRNA rna_Bone_bbone_segments;
RNA_EXTERN_C EnumPropertyRNA rna_Bone_bbone_mapping_mode;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_x;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_z;
RNA_EXTERN_C EnumPropertyRNA rna_Bone_bbone_handle_type_start;
RNA_EXTERN_C PointerPropertyRNA rna_Bone_bbone_custom_handle_start;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_bbone_handle_use_scale_start;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_bbone_handle_use_ease_start;
RNA_EXTERN_C EnumPropertyRNA rna_Bone_bbone_handle_type_end;
RNA_EXTERN_C PointerPropertyRNA rna_Bone_bbone_custom_handle_end;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_bbone_handle_use_scale_end;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_bbone_handle_use_ease_end;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_rollin;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_rollout;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_endroll_as_inroll;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_curveinx;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_curveinz;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_curveoutx;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_curveoutz;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_easein;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_easeout;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_use_scale_easing;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_scalein;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_bbone_scaleout;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_hide;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_select;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_select_head;
RNA_EXTERN_C BoolPropertyRNA rna_Bone_select_tail;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_matrix;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_matrix_local;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_tail;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_tail_local;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_head;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_head_local;
RNA_EXTERN_C FloatPropertyRNA rna_Bone_length;

extern FunctionRNA rna_Bone_evaluate_envelope_func;
extern FloatPropertyRNA rna_Bone_evaluate_envelope_point;
extern FloatPropertyRNA rna_Bone_evaluate_envelope_factor;

extern FunctionRNA rna_Bone_convert_local_to_pose_func;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_return;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_local;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix_local;
extern BoolPropertyRNA rna_Bone_convert_local_to_pose_invert;

extern FunctionRNA rna_Bone_MatrixFromAxisRoll_func;
extern FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_axis;
extern FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_roll;
extern FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_result_matrix;

extern FunctionRNA rna_Bone_AxisRollFromMatrix_func;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_matrix;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_axis;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_axis;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_roll;



RNA_EXTERN_C CollectionPropertyRNA rna_BoneCollectionMemberships_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoneCollectionMemberships_rna_type;

extern FunctionRNA rna_BoneCollectionMemberships_clear_func;


RNA_EXTERN_C CollectionPropertyRNA rna_EditBone_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_EditBone_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_EditBone_collections;
RNA_EXTERN_C PointerPropertyRNA rna_EditBone_parent;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_roll;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_head;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_tail;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_length;
RNA_EXTERN_C StringPropertyRNA rna_EditBone_name;
RNA_EXTERN_C PointerPropertyRNA rna_EditBone_color;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_connect;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_inherit_rotation;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_envelope_multiply;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_deform;
RNA_EXTERN_C EnumPropertyRNA rna_EditBone_inherit_scale;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_local_location;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_relative_parent;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_show_wire;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_cyclic_offset;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_hide_select;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_envelope_distance;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_envelope_weight;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_head_radius;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_tail_radius;
RNA_EXTERN_C IntPropertyRNA rna_EditBone_bbone_segments;
RNA_EXTERN_C EnumPropertyRNA rna_EditBone_bbone_mapping_mode;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_x;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_z;
RNA_EXTERN_C EnumPropertyRNA rna_EditBone_bbone_handle_type_start;
RNA_EXTERN_C PointerPropertyRNA rna_EditBone_bbone_custom_handle_start;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_start;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_start;
RNA_EXTERN_C EnumPropertyRNA rna_EditBone_bbone_handle_type_end;
RNA_EXTERN_C PointerPropertyRNA rna_EditBone_bbone_custom_handle_end;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_end;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_end;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_rollin;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_rollout;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_endroll_as_inroll;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_curveinx;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_curveinz;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_curveoutx;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_curveoutz;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_easein;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_easeout;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_use_scale_easing;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_scalein;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_bbone_scaleout;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_hide;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_lock;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_select;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_select_head;
RNA_EXTERN_C BoolPropertyRNA rna_EditBone_select_tail;
RNA_EXTERN_C FloatPropertyRNA rna_EditBone_matrix;

extern FunctionRNA rna_EditBone_align_roll_func;
extern FloatPropertyRNA rna_EditBone_align_roll_vector;


static PointerRNA BoneColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoneColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneColor_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneColor_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoneColor_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoneColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoneColor_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int BoneColor_palette_get(PointerRNA *ptr)
{
    BoneColor *data = (BoneColor *)(ptr->data);
    return (int)(data->palette_index);
}

RNA_EXTERN_C void BoneColor_palette_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_BoneColor_palette_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool BoneColor_is_custom_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoneColor_is_custom_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA BoneColor_custom_get(PointerRNA *ptr)
{
    BoneColor *data = (BoneColor *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ThemeBoneColorSet, &data->custom);
}

static PointerRNA BoneCollection_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoneCollection_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneCollection_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollection_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneCollection_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoneCollection_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneCollection_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoneCollection_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoneCollection_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void BoneCollection_name_get(PointerRNA *ptr, char *value)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int BoneCollection_name_length(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void BoneCollection_name_set(PointerRNA *ptr, const char *value)
{
    rna_BoneCollection_name_set(ptr, value);
}

RNA_EXTERN_C bool BoneCollection_is_visible_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void BoneCollection_is_visible_set(PointerRNA *ptr, bool value)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C bool BoneCollection_is_local_override_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C bool BoneCollection_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoneCollection_is_editable_get;
    return fn(ptr);
}

static PointerRNA BoneCollection_bones_get(CollectionPropertyIterator *iter)
{
    return rna_BoneCollection_bones_get(iter);
}

RNA_EXTERN_C void BoneCollection_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneCollection_bones;

    rna_BoneCollection_bones_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollection_bones_get(iter);
    }
}

RNA_EXTERN_C void BoneCollection_bones_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BoneCollection_bones_get(iter);
    }
}

RNA_EXTERN_C void BoneCollection_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoneCollection_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    BoneCollection_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoneCollection_bones_get(&iter); }
    }

    BoneCollection_bones_end(&iter);

    return found;
}

RNA_EXTERN_C int Bone_name_length(PointerRNA *);
RNA_EXTERN_C void Bone_name_get(PointerRNA *, char *);

RNA_EXTERN_C int BoneCollection_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoneCollection_bones_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Bone_name_length(&iter.ptr);
            if (namelen < 1024) {
                Bone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Bone_name_get(&iter.ptr, name);
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
        BoneCollection_bones_next(&iter);
    }
    BoneCollection_bones_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Armature_animation_data_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Armature_bones_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Bone, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Armature_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Armature_bones;

    rna_iterator_listbase_begin(iter, &data->bonebase, nullptr);

    if (iter->valid) {
        iter->ptr = Armature_bones_get(iter);
    }
}

RNA_EXTERN_C void Armature_bones_next(CollectionPropertyIterator *iter)
{
    rna_Armature_bones_next(iter);

    if (iter->valid) {
        iter->ptr = Armature_bones_get(iter);
    }
}

RNA_EXTERN_C void Armature_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Armature_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_Armature_bones_lookup_string(ptr, key, r_ptr);
}

static PointerRNA Armature_edit_bones_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EditBone, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Armature_edit_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Armature_edit_bones;

    rna_iterator_listbase_begin(iter, data->edbo, nullptr);

    if (iter->valid) {
        iter->ptr = Armature_edit_bones_get(iter);
    }
}

RNA_EXTERN_C void Armature_edit_bones_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Armature_edit_bones_get(iter);
    }
}

RNA_EXTERN_C void Armature_edit_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Armature_edit_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Armature_edit_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = Armature_edit_bones_get(&iter); }
    }

    Armature_edit_bones_end(&iter);

    return found;
}

RNA_EXTERN_C int EditBone_name_length(PointerRNA *);
RNA_EXTERN_C void EditBone_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Armature_edit_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Armature_edit_bones_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = EditBone_name_length(&iter.ptr);
            if (namelen < 1024) {
                EditBone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                EditBone_name_get(&iter.ptr, name);
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
        Armature_edit_bones_next(&iter);
    }
    Armature_edit_bones_end(&iter);

    return found;
}

static PointerRNA Armature_collections_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoneCollection, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Armature_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Armature_collections;

    rna_iterator_listbase_begin(iter, &data->collections, nullptr);

    if (iter->valid) {
        iter->ptr = Armature_collections_get(iter);
    }
}

RNA_EXTERN_C void Armature_collections_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Armature_collections_get(iter);
    }
}

RNA_EXTERN_C void Armature_collections_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Armature_collections_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Armature_collections_begin(&iter, ptr);

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
        if (found) { *r_ptr = Armature_collections_get(&iter); }
    }

    Armature_collections_end(&iter);

    return found;
}

RNA_EXTERN_C int BoneCollection_name_length(PointerRNA *);
RNA_EXTERN_C void BoneCollection_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Armature_collections_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Armature_collections_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoneCollection_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoneCollection_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                BoneCollection_name_get(&iter.ptr, name);
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
        Armature_collections_next(&iter);
    }
    Armature_collections_end(&iter);

    return found;
}

RNA_EXTERN_C int Armature_pose_position_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((data->flag) & 1);
}

RNA_EXTERN_C void Armature_pose_position_set(PointerRNA *ptr, int value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->flag &= ~1;
    data->flag |= value;
}

RNA_EXTERN_C int Armature_display_type_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (int)(data->drawtype);
}

RNA_EXTERN_C void Armature_display_type_set(PointerRNA *ptr, int value)
{
    bArmature *data = (bArmature *)(ptr->data);
#ifdef __cplusplus
    data->drawtype = (std::remove_reference_t<decltype(data->drawtype)>)value;
#else
    data->drawtype = value;
#endif
}

RNA_EXTERN_C bool Armature_show_axes_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void Armature_show_axes_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C float Armature_axes_position_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (float)(data->axes_position);
}

RNA_EXTERN_C void Armature_axes_position_set(PointerRNA *ptr, float value)
{
    bArmature *data = (bArmature *)(ptr->data);
#ifdef __cplusplus
    data->axes_position = (std::remove_reference_t<decltype(data->axes_position)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->axes_position = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C int Armature_relation_line_position_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Armature_relation_line_position_get;
    return fn(ptr);
}

RNA_EXTERN_C void Armature_relation_line_position_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Armature_relation_line_position_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool Armature_show_names_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void Armature_show_names_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C bool Armature_use_mirror_x_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void Armature_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C bool Armature_show_bone_custom_shapes_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return !(((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void Armature_show_bone_custom_shapes_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (!value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool Armature_show_bone_colors_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void Armature_show_bone_colors_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool Armature_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Armature_is_editmode_get;
    return fn(ptr);
}

static PointerRNA ArmatureBones_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ArmatureBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ArmatureBones_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureBones_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ArmatureBones_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ArmatureBones_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ArmatureBones_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ArmatureBones_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ArmatureBones_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ArmatureBones_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->act_bone);
}

RNA_EXTERN_C void ArmatureBones_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Armature_act_bone_set(ptr, value, reports);
}

static PointerRNA ArmatureEditBones_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ArmatureEditBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ArmatureEditBones_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureEditBones_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ArmatureEditBones_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ArmatureEditBones_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ArmatureEditBones_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ArmatureEditBones_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ArmatureEditBones_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ArmatureEditBones_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EditBone, data->act_edbone);
}

RNA_EXTERN_C void ArmatureEditBones_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Armature_act_edit_bone_set(ptr, value, reports);
}

static PointerRNA BoneCollections_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoneCollections_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneCollections_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollections_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneCollections_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoneCollections_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneCollections_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoneCollections_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoneCollections_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA BoneCollections_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BoneCollection, data->runtime.active_collection);
}

RNA_EXTERN_C void BoneCollections_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_BoneCollections_active_set(ptr, value, reports);
}

RNA_EXTERN_C int BoneCollections_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoneCollections_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void BoneCollections_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoneCollections_active_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C void BoneCollections_active_name_get(PointerRNA *ptr, char *value)
{
    bArmature *data = (bArmature *)(ptr->data);
    BLI_assert(strlen(data->active_collection_name) < 64);
    strcpy(value, data->active_collection_name);
}

RNA_EXTERN_C int BoneCollections_active_name_length(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return strlen(data->active_collection_name);
}

RNA_EXTERN_C void BoneCollections_active_name_set(PointerRNA *ptr, const char *value)
{
    rna_BoneCollections_active_name_set(ptr, value);
}

static PointerRNA Bone_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Bone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Bone_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Bone_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Bone_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Bone_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Bone_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Bone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Bone_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA Bone_parent_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->parent);
}

static PointerRNA Bone_children_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Bone, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Bone_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Bone_children;

    rna_iterator_listbase_begin(iter, &data->childbase, nullptr);

    if (iter->valid) {
        iter->ptr = Bone_children_get(iter);
    }
}

RNA_EXTERN_C void Bone_children_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Bone_children_get(iter);
    }
}

RNA_EXTERN_C void Bone_children_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Bone_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Bone_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Bone_children_get(&iter); }
    }

    Bone_children_end(&iter);

    return found;
}

RNA_EXTERN_C int Bone_name_length(PointerRNA *);
RNA_EXTERN_C void Bone_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Bone_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Bone_children_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Bone_name_length(&iter.ptr);
            if (namelen < 1024) {
                Bone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Bone_name_get(&iter.ptr, name);
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
        Bone_children_next(&iter);
    }
    Bone_children_end(&iter);

    return found;
}

static PointerRNA Bone_collections_get(CollectionPropertyIterator *iter)
{
    return rna_Bone_collections_get(iter);
}

RNA_EXTERN_C void Bone_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Bone_collections;

    rna_Bone_collections_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Bone_collections_get(iter);
    }
}

RNA_EXTERN_C void Bone_collections_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Bone_collections_get(iter);
    }
}

RNA_EXTERN_C void Bone_collections_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C void Bone_name_get(PointerRNA *ptr, char *value)
{
    Bone *data = (Bone *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int Bone_name_length(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void Bone_name_set(PointerRNA *ptr, const char *value)
{
    rna_Bone_name_set(ptr, value);
}

RNA_EXTERN_C PointerRNA Bone_color_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BoneColor, &data->color);
}

RNA_EXTERN_C bool Bone_use_connect_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C bool Bone_use_inherit_rotation_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 512) != 0);
}

RNA_EXTERN_C void Bone_use_inherit_rotation_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool Bone_use_envelope_multiply_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void Bone_use_envelope_multiply_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool Bone_use_deform_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void Bone_use_deform_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C int Bone_inherit_scale_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->inherit_scale_mode);
}

RNA_EXTERN_C void Bone_inherit_scale_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->inherit_scale_mode = (std::remove_reference_t<decltype(data->inherit_scale_mode)>)value;
#else
    data->inherit_scale_mode = value;
#endif
}

RNA_EXTERN_C bool Bone_use_local_location_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 4194304) != 0);
}

RNA_EXTERN_C void Bone_use_local_location_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

RNA_EXTERN_C bool Bone_use_relative_parent_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 8388608) != 0);
}

RNA_EXTERN_C void Bone_use_relative_parent_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 8388608; }
    else { data->flag &= ~8388608; }
}

RNA_EXTERN_C bool Bone_show_wire_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void Bone_show_wire_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

RNA_EXTERN_C bool Bone_use_cyclic_offset_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 262144) != 0);
}

RNA_EXTERN_C void Bone_use_cyclic_offset_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

RNA_EXTERN_C bool Bone_hide_select_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 2097152) != 0);
}

RNA_EXTERN_C void Bone_hide_select_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 2097152; }
    else { data->flag &= ~2097152; }
}

RNA_EXTERN_C float Bone_envelope_distance_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->dist);
}

RNA_EXTERN_C void Bone_envelope_distance_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->dist = (std::remove_reference_t<decltype(data->dist)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->dist = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float Bone_envelope_weight_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void Bone_envelope_weight_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->weight = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float Bone_head_radius_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->rad_head);
}

RNA_EXTERN_C void Bone_head_radius_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->rad_head = (std::remove_reference_t<decltype(data->rad_head)>)value;
#else
    data->rad_head = value;
#endif
}

RNA_EXTERN_C float Bone_tail_radius_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->rad_tail);
}

RNA_EXTERN_C void Bone_tail_radius_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->rad_tail = (std::remove_reference_t<decltype(data->rad_tail)>)value;
#else
    data->rad_tail = value;
#endif
}

RNA_EXTERN_C int Bone_bbone_segments_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->segments);
}

RNA_EXTERN_C void Bone_bbone_segments_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->segments = (std::remove_reference_t<decltype(data->segments)>)CLAMPIS(value, 1, 32);
#else
    data->segments = CLAMPIS(value, 1, 32);
#endif
}

RNA_EXTERN_C int Bone_bbone_mapping_mode_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_mapping_mode);
}

RNA_EXTERN_C void Bone_bbone_mapping_mode_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->bbone_mapping_mode = (std::remove_reference_t<decltype(data->bbone_mapping_mode)>)value;
#else
    data->bbone_mapping_mode = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_x_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->xwidth);
}

RNA_EXTERN_C void Bone_bbone_x_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->xwidth = (std::remove_reference_t<decltype(data->xwidth)>)value;
#else
    data->xwidth = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_z_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->zwidth);
}

RNA_EXTERN_C void Bone_bbone_z_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->zwidth = (std::remove_reference_t<decltype(data->zwidth)>)value;
#else
    data->zwidth = value;
#endif
}

RNA_EXTERN_C int Bone_bbone_handle_type_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_prev_type);
}

RNA_EXTERN_C void Bone_bbone_handle_type_start_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->bbone_prev_type = (std::remove_reference_t<decltype(data->bbone_prev_type)>)value;
#else
    data->bbone_prev_type = value;
#endif
}

RNA_EXTERN_C PointerRNA Bone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->bbone_prev);
}

RNA_EXTERN_C void Bone_bbone_custom_handle_start_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Bone_bbone_prev_set(ptr, value, reports);
}

RNA_EXTERN_C void Bone_bbone_handle_use_scale_start_get(PointerRNA *ptr, bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_prev_flag & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void Bone_bbone_handle_use_scale_start_set(PointerRNA *ptr, const bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_prev_flag |= (1 << i); }
        else { data->bbone_prev_flag &= ~(1 << i); }
    }
}

RNA_EXTERN_C bool Bone_bbone_handle_use_ease_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_prev_flag) & 8) != 0);
}

RNA_EXTERN_C void Bone_bbone_handle_use_ease_start_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_prev_flag |= 8; }
    else { data->bbone_prev_flag &= ~8; }
}

RNA_EXTERN_C int Bone_bbone_handle_type_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_next_type);
}

RNA_EXTERN_C void Bone_bbone_handle_type_end_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->bbone_next_type = (std::remove_reference_t<decltype(data->bbone_next_type)>)value;
#else
    data->bbone_next_type = value;
#endif
}

RNA_EXTERN_C PointerRNA Bone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->bbone_next);
}

RNA_EXTERN_C void Bone_bbone_custom_handle_end_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Bone_bbone_next_set(ptr, value, reports);
}

RNA_EXTERN_C void Bone_bbone_handle_use_scale_end_get(PointerRNA *ptr, bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_next_flag & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void Bone_bbone_handle_use_scale_end_set(PointerRNA *ptr, const bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_next_flag |= (1 << i); }
        else { data->bbone_next_flag &= ~(1 << i); }
    }
}

RNA_EXTERN_C bool Bone_bbone_handle_use_ease_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_next_flag) & 8) != 0);
}

RNA_EXTERN_C void Bone_bbone_handle_use_ease_end_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_next_flag |= 8; }
    else { data->bbone_next_flag &= ~8; }
}

RNA_EXTERN_C float Bone_bbone_rollin_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->roll1);
}

RNA_EXTERN_C void Bone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->roll1 = (std::remove_reference_t<decltype(data->roll1)>)value;
#else
    data->roll1 = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_rollout_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->roll2);
}

RNA_EXTERN_C void Bone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->roll2 = (std::remove_reference_t<decltype(data->roll2)>)value;
#else
    data->roll2 = value;
#endif
}

RNA_EXTERN_C bool Bone_use_endroll_as_inroll_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_flag) & 1) != 0);
}

RNA_EXTERN_C void Bone_use_endroll_as_inroll_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_flag |= 1; }
    else { data->bbone_flag &= ~1; }
}

RNA_EXTERN_C float Bone_bbone_curveinx_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_in_x);
}

RNA_EXTERN_C void Bone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->curve_in_x = (std::remove_reference_t<decltype(data->curve_in_x)>)value;
#else
    data->curve_in_x = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_curveinz_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_in_z);
}

RNA_EXTERN_C void Bone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->curve_in_z = (std::remove_reference_t<decltype(data->curve_in_z)>)value;
#else
    data->curve_in_z = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_curveoutx_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_out_x);
}

RNA_EXTERN_C void Bone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->curve_out_x = (std::remove_reference_t<decltype(data->curve_out_x)>)value;
#else
    data->curve_out_x = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_curveoutz_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_out_z);
}

RNA_EXTERN_C void Bone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->curve_out_z = (std::remove_reference_t<decltype(data->curve_out_z)>)value;
#else
    data->curve_out_z = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_easein_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->ease1);
}

RNA_EXTERN_C void Bone_bbone_easein_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->ease1 = (std::remove_reference_t<decltype(data->ease1)>)value;
#else
    data->ease1 = value;
#endif
}

RNA_EXTERN_C float Bone_bbone_easeout_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->ease2);
}

RNA_EXTERN_C void Bone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
#ifdef __cplusplus
    data->ease2 = (std::remove_reference_t<decltype(data->ease2)>)value;
#else
    data->ease2 = value;
#endif
}

RNA_EXTERN_C bool Bone_use_scale_easing_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_flag) & 2) != 0);
}

RNA_EXTERN_C void Bone_use_scale_easing_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_flag |= 2; }
    else { data->bbone_flag &= ~2; }
}

RNA_EXTERN_C void Bone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_in)[i]);
    }
}

RNA_EXTERN_C void Bone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_in)[i] = values[i];
    }
}

RNA_EXTERN_C void Bone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_out)[i]);
    }
}

RNA_EXTERN_C void Bone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_out)[i] = values[i];
    }
}

RNA_EXTERN_C bool Bone_hide_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void Bone_hide_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

RNA_EXTERN_C bool Bone_select_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Bone_select_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool Bone_select_head_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Bone_select_head_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool Bone_select_tail_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void Bone_select_tail_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C void Bone_matrix_get(PointerRNA *ptr, float values[9])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->bone_mat)[i]);
    }
}

RNA_EXTERN_C void Bone_matrix_local_get(PointerRNA *ptr, float values[16])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->arm_mat)[i]);
    }
}

RNA_EXTERN_C void Bone_tail_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tail)[i]);
    }
}

RNA_EXTERN_C void Bone_tail_local_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->arm_tail)[i]);
    }
}

RNA_EXTERN_C void Bone_head_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->head)[i]);
    }
}

RNA_EXTERN_C void Bone_head_local_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->arm_head)[i]);
    }
}

RNA_EXTERN_C float Bone_length_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->length);
}

static PointerRNA BoneCollectionMemberships_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoneCollectionMemberships_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneCollectionMemberships_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollectionMemberships_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneCollectionMemberships_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoneCollectionMemberships_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoneCollectionMemberships_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoneCollectionMemberships_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoneCollectionMemberships_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA EditBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void EditBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EditBone_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EditBone_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void EditBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = EditBone_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void EditBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int EditBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA EditBone_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA EditBone_collections_get(CollectionPropertyIterator *iter)
{
    return rna_Bone_collections_get(iter);
}

RNA_EXTERN_C void EditBone_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EditBone_collections;

    rna_EditBone_collections_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EditBone_collections_get(iter);
    }
}

RNA_EXTERN_C void EditBone_collections_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = EditBone_collections_get(iter);
    }
}

RNA_EXTERN_C void EditBone_collections_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C PointerRNA EditBone_parent_get(PointerRNA *ptr)
{
    return rna_EditBone_parent_get(ptr);
}

RNA_EXTERN_C void EditBone_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_EditBone_parent_set(ptr, value, reports);
}

RNA_EXTERN_C float EditBone_roll_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll);
}

RNA_EXTERN_C void EditBone_roll_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->roll = (std::remove_reference_t<decltype(data->roll)>)value;
#else
    data->roll = value;
#endif
}

RNA_EXTERN_C void EditBone_head_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->head)[i]);
    }
}

RNA_EXTERN_C void EditBone_head_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->head)[i] = values[i];
    }
}

RNA_EXTERN_C void EditBone_tail_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->tail)[i]);
    }
}

RNA_EXTERN_C void EditBone_tail_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->tail)[i] = values[i];
    }
}

RNA_EXTERN_C float EditBone_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_EditBone_length_get;
    return fn(ptr);
}

RNA_EXTERN_C void EditBone_length_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_EditBone_length_set;
    fn(ptr, value);
}

RNA_EXTERN_C void EditBone_name_get(PointerRNA *ptr, char *value)
{
    EditBone *data = (EditBone *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

RNA_EXTERN_C int EditBone_name_length(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void EditBone_name_set(PointerRNA *ptr, const char *value)
{
    rna_EditBone_name_set(ptr, value);
}

RNA_EXTERN_C PointerRNA EditBone_color_get(PointerRNA *ptr)
{
    return rna_EditBone_color_get(ptr);
}

RNA_EXTERN_C bool EditBone_use_connect_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void EditBone_use_connect_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_EditBone_connected_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool EditBone_use_inherit_rotation_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 512) != 0);
}

RNA_EXTERN_C void EditBone_use_inherit_rotation_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

RNA_EXTERN_C bool EditBone_use_envelope_multiply_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

RNA_EXTERN_C void EditBone_use_envelope_multiply_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

RNA_EXTERN_C bool EditBone_use_deform_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void EditBone_use_deform_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C int EditBone_inherit_scale_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->inherit_scale_mode);
}

RNA_EXTERN_C void EditBone_inherit_scale_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->inherit_scale_mode = (std::remove_reference_t<decltype(data->inherit_scale_mode)>)value;
#else
    data->inherit_scale_mode = value;
#endif
}

RNA_EXTERN_C bool EditBone_use_local_location_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 4194304) != 0);
}

RNA_EXTERN_C void EditBone_use_local_location_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

RNA_EXTERN_C bool EditBone_use_relative_parent_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 8388608) != 0);
}

RNA_EXTERN_C void EditBone_use_relative_parent_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 8388608; }
    else { data->flag &= ~8388608; }
}

RNA_EXTERN_C bool EditBone_show_wire_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

RNA_EXTERN_C void EditBone_show_wire_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

RNA_EXTERN_C bool EditBone_use_cyclic_offset_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 262144) != 0);
}

RNA_EXTERN_C void EditBone_use_cyclic_offset_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

RNA_EXTERN_C bool EditBone_hide_select_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 2097152) != 0);
}

RNA_EXTERN_C void EditBone_hide_select_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 2097152; }
    else { data->flag &= ~2097152; }
}

RNA_EXTERN_C float EditBone_envelope_distance_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->dist);
}

RNA_EXTERN_C void EditBone_envelope_distance_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->dist = (std::remove_reference_t<decltype(data->dist)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->dist = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float EditBone_envelope_weight_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void EditBone_envelope_weight_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->weight = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float EditBone_head_radius_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->rad_head);
}

RNA_EXTERN_C void EditBone_head_radius_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->rad_head = (std::remove_reference_t<decltype(data->rad_head)>)value;
#else
    data->rad_head = value;
#endif
}

RNA_EXTERN_C float EditBone_tail_radius_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->rad_tail);
}

RNA_EXTERN_C void EditBone_tail_radius_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->rad_tail = (std::remove_reference_t<decltype(data->rad_tail)>)value;
#else
    data->rad_tail = value;
#endif
}

RNA_EXTERN_C int EditBone_bbone_segments_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->segments);
}

RNA_EXTERN_C void EditBone_bbone_segments_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->segments = (std::remove_reference_t<decltype(data->segments)>)CLAMPIS(value, 1, 32);
#else
    data->segments = CLAMPIS(value, 1, 32);
#endif
}

RNA_EXTERN_C int EditBone_bbone_mapping_mode_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_mapping_mode);
}

RNA_EXTERN_C void EditBone_bbone_mapping_mode_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->bbone_mapping_mode = (std::remove_reference_t<decltype(data->bbone_mapping_mode)>)value;
#else
    data->bbone_mapping_mode = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_x_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->xwidth);
}

RNA_EXTERN_C void EditBone_bbone_x_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->xwidth = (std::remove_reference_t<decltype(data->xwidth)>)value;
#else
    data->xwidth = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_z_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->zwidth);
}

RNA_EXTERN_C void EditBone_bbone_z_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->zwidth = (std::remove_reference_t<decltype(data->zwidth)>)value;
#else
    data->zwidth = value;
#endif
}

RNA_EXTERN_C int EditBone_bbone_handle_type_start_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_prev_type);
}

RNA_EXTERN_C void EditBone_bbone_handle_type_start_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->bbone_prev_type = (std::remove_reference_t<decltype(data->bbone_prev_type)>)value;
#else
    data->bbone_prev_type = value;
#endif
}

RNA_EXTERN_C PointerRNA EditBone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    return rna_EditBone_bbone_prev_get(ptr);
}

RNA_EXTERN_C void EditBone_bbone_custom_handle_start_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_EditBone_bbone_prev_set(ptr, value, reports);
}

RNA_EXTERN_C void EditBone_bbone_handle_use_scale_start_get(PointerRNA *ptr, bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_prev_flag & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void EditBone_bbone_handle_use_scale_start_set(PointerRNA *ptr, const bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_prev_flag |= (1 << i); }
        else { data->bbone_prev_flag &= ~(1 << i); }
    }
}

RNA_EXTERN_C bool EditBone_bbone_handle_use_ease_start_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_prev_flag) & 8) != 0);
}

RNA_EXTERN_C void EditBone_bbone_handle_use_ease_start_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_prev_flag |= 8; }
    else { data->bbone_prev_flag &= ~8; }
}

RNA_EXTERN_C int EditBone_bbone_handle_type_end_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_next_type);
}

RNA_EXTERN_C void EditBone_bbone_handle_type_end_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->bbone_next_type = (std::remove_reference_t<decltype(data->bbone_next_type)>)value;
#else
    data->bbone_next_type = value;
#endif
}

RNA_EXTERN_C PointerRNA EditBone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    return rna_EditBone_bbone_next_get(ptr);
}

RNA_EXTERN_C void EditBone_bbone_custom_handle_end_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_EditBone_bbone_next_set(ptr, value, reports);
}

RNA_EXTERN_C void EditBone_bbone_handle_use_scale_end_get(PointerRNA *ptr, bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_next_flag & (1 << i)) != 0);
    }
}

RNA_EXTERN_C void EditBone_bbone_handle_use_scale_end_set(PointerRNA *ptr, const bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_next_flag |= (1 << i); }
        else { data->bbone_next_flag &= ~(1 << i); }
    }
}

RNA_EXTERN_C bool EditBone_bbone_handle_use_ease_end_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_next_flag) & 8) != 0);
}

RNA_EXTERN_C void EditBone_bbone_handle_use_ease_end_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_next_flag |= 8; }
    else { data->bbone_next_flag &= ~8; }
}

RNA_EXTERN_C float EditBone_bbone_rollin_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll1);
}

RNA_EXTERN_C void EditBone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->roll1 = (std::remove_reference_t<decltype(data->roll1)>)value;
#else
    data->roll1 = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_rollout_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll2);
}

RNA_EXTERN_C void EditBone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->roll2 = (std::remove_reference_t<decltype(data->roll2)>)value;
#else
    data->roll2 = value;
#endif
}

RNA_EXTERN_C bool EditBone_use_endroll_as_inroll_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_flag) & 1) != 0);
}

RNA_EXTERN_C void EditBone_use_endroll_as_inroll_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_flag |= 1; }
    else { data->bbone_flag &= ~1; }
}

RNA_EXTERN_C float EditBone_bbone_curveinx_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_in_x);
}

RNA_EXTERN_C void EditBone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->curve_in_x = (std::remove_reference_t<decltype(data->curve_in_x)>)value;
#else
    data->curve_in_x = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_curveinz_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_in_z);
}

RNA_EXTERN_C void EditBone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->curve_in_z = (std::remove_reference_t<decltype(data->curve_in_z)>)value;
#else
    data->curve_in_z = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_curveoutx_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_out_x);
}

RNA_EXTERN_C void EditBone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->curve_out_x = (std::remove_reference_t<decltype(data->curve_out_x)>)value;
#else
    data->curve_out_x = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_curveoutz_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_out_z);
}

RNA_EXTERN_C void EditBone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->curve_out_z = (std::remove_reference_t<decltype(data->curve_out_z)>)value;
#else
    data->curve_out_z = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_easein_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->ease1);
}

RNA_EXTERN_C void EditBone_bbone_easein_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->ease1 = (std::remove_reference_t<decltype(data->ease1)>)value;
#else
    data->ease1 = value;
#endif
}

RNA_EXTERN_C float EditBone_bbone_easeout_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->ease2);
}

RNA_EXTERN_C void EditBone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
#ifdef __cplusplus
    data->ease2 = (std::remove_reference_t<decltype(data->ease2)>)value;
#else
    data->ease2 = value;
#endif
}

RNA_EXTERN_C bool EditBone_use_scale_easing_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_flag) & 2) != 0);
}

RNA_EXTERN_C void EditBone_use_scale_easing_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_flag |= 2; }
    else { data->bbone_flag &= ~2; }
}

RNA_EXTERN_C void EditBone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->scale_in)[i]);
    }
}

RNA_EXTERN_C void EditBone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->scale_in)[i] = values[i];
    }
}

RNA_EXTERN_C void EditBone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->scale_out)[i]);
    }
}

RNA_EXTERN_C void EditBone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->scale_out)[i] = values[i];
    }
}

RNA_EXTERN_C bool EditBone_hide_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C void EditBone_hide_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

RNA_EXTERN_C bool EditBone_lock_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

RNA_EXTERN_C void EditBone_lock_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

RNA_EXTERN_C bool EditBone_select_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void EditBone_select_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool EditBone_select_head_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void EditBone_select_head_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool EditBone_select_tail_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void EditBone_select_tail_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C void EditBone_matrix_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_EditBone_matrix_get;
    fn(ptr, values);
}

RNA_EXTERN_C void EditBone_matrix_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_EditBone_matrix_set;
    fn(ptr, values);
}


RNA_EXTERN_C bool BoneCollection_assign_func(struct BoneCollection *_self, bContext *C, ReportList *reports, struct PointerRNA *bone)
{
	return rna_BoneCollection_assign(_self, C, reports, bone);
}

static void BoneCollection_assign_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BoneCollection *_self;
	struct PointerRNA *bone;
	bool assigned;
	char *_data, *_retdata;
	
	_self = (struct BoneCollection *)_ptr->data;
	_data = (char *)_parms->data;
	bone = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	assigned = rna_BoneCollection_assign(_self, C, reports, bone);
	*((bool *)_retdata) = assigned;
}

RNA_EXTERN_C bool BoneCollection_unassign_func(struct BoneCollection *_self, bContext *C, ReportList *reports, struct PointerRNA *bone)
{
	return rna_BoneCollection_unassign(_self, C, reports, bone);
}

static void BoneCollection_unassign_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BoneCollection *_self;
	struct PointerRNA *bone;
	bool assigned;
	char *_data, *_retdata;
	
	_self = (struct BoneCollection *)_ptr->data;
	_data = (char *)_parms->data;
	bone = ((struct PointerRNA *)_data);
	_data += 24;
	_retdata = _data;
	
	assigned = rna_BoneCollection_unassign(_self, C, reports, bone);
	*((bool *)_retdata) = assigned;
}

/* Repeated prototypes to detect errors */

bool rna_BoneCollection_assign(struct BoneCollection *_self, bContext *C, ReportList *reports, struct PointerRNA *bone);
bool rna_BoneCollection_unassign(struct BoneCollection *_self, bContext *C, ReportList *reports, struct PointerRNA *bone);

RNA_EXTERN_C void Armature_transform_func(struct bArmature *_self, float matrix[16])
{
	rna_Armature_transform(_self, matrix);
}

static void Armature_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	const float *matrix;
	char *_data;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	
	rna_Armature_transform(_self, matrix);
}

/* Repeated prototypes to detect errors */

void rna_Armature_transform(struct bArmature *_self, float matrix[16]);


RNA_EXTERN_C struct EditBone *ArmatureEditBones_new_func(struct bArmature *_self, ReportList *reports, const char * name)
{
	return rna_Armature_edit_bone_new(_self, reports, name);
}

static void ArmatureEditBones_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	const char * name;
	struct EditBone *bone;
	char *_data, *_retdata;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	bone = rna_Armature_edit_bone_new(_self, reports, name);
	*((struct EditBone **)_retdata) = bone;
}

RNA_EXTERN_C void ArmatureEditBones_remove_func(struct bArmature *_self, ReportList *reports, struct PointerRNA *bone)
{
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

static void ArmatureEditBones_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	struct PointerRNA *bone;
	char *_data;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	bone = *((struct PointerRNA **)_data);
	
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

/* Repeated prototypes to detect errors */

struct EditBone *rna_Armature_edit_bone_new(struct bArmature *_self, ReportList *reports, const char * name);
void rna_Armature_edit_bone_remove(struct bArmature *_self, ReportList *reports, struct PointerRNA *bone);

RNA_EXTERN_C struct BoneCollection *BoneCollections_new_func(struct bArmature *_self, const char * name)
{
	return ANIM_armature_bonecoll_new(_self, name);
}

static void BoneCollections_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	const char * name;
	struct BoneCollection *bonecollection;
	char *_data, *_retdata;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	bonecollection = ANIM_armature_bonecoll_new(_self, name);
	*((struct BoneCollection **)_retdata) = bonecollection;
}

RNA_EXTERN_C void BoneCollections_remove_func(struct bArmature *_self, struct BoneCollection *bone_collection)
{
	ANIM_armature_bonecoll_remove(_self, bone_collection);
}

static void BoneCollections_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	struct BoneCollection *bone_collection;
	char *_data;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	bone_collection = *((struct BoneCollection **)_data);
	
	ANIM_armature_bonecoll_remove(_self, bone_collection);
}

RNA_EXTERN_C void BoneCollections_move_func(struct bArmature *_self, ReportList *reports, int from_index, int to_index)
{
	rna_BoneCollections_move(_self, reports, from_index, to_index);
}

static void BoneCollections_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_BoneCollections_move(_self, reports, from_index, to_index);
}

/* Repeated prototypes to detect errors */

struct BoneCollection *ANIM_armature_bonecoll_new(struct bArmature *_self, const char * name);
void ANIM_armature_bonecoll_remove(struct bArmature *_self, struct BoneCollection *bone_collection);
void rna_BoneCollections_move(struct bArmature *_self, ReportList *reports, int from_index, int to_index);

RNA_EXTERN_C float Bone_evaluate_envelope_func(struct Bone *_self, float point[3])
{
	return rna_Bone_do_envelope(_self, point);
}

static void Bone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Bone *_self;
	const float *point;
	float factor;
	char *_data, *_retdata;
	
	_self = (struct Bone *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((const float *)_data);
	_data += 16;
	_retdata = _data;
	
	factor = rna_Bone_do_envelope(_self, point);
	*((float *)_retdata) = factor;
}

RNA_EXTERN_C void Bone_convert_local_to_pose_func(struct Bone *_self, float matrix_return[16], float matrix[16], float matrix_local[16], float parent_matrix[16], float parent_matrix_local[16], bool invert)
{
	rna_Bone_convert_local_to_pose(_self, matrix_return, matrix, matrix_local, parent_matrix, parent_matrix_local, invert);
}

static void Bone_convert_local_to_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Bone *_self;
	float *matrix_return;
	const float *matrix;
	const float *matrix_local;
	const float *parent_matrix;
	const float *parent_matrix_local;
	bool invert;
	char *_data;
	
	_self = (struct Bone *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_return = ((float *)_data);
	_data += 64;
	matrix = ((const float *)_data);
	_data += 64;
	matrix_local = ((const float *)_data);
	_data += 64;
	parent_matrix = ((const float *)_data);
	_data += 64;
	parent_matrix_local = ((const float *)_data);
	_data += 64;
	invert = *((bool *)_data);
	
	rna_Bone_convert_local_to_pose(_self, matrix_return, matrix, matrix_local, parent_matrix, parent_matrix_local, invert);
}

RNA_EXTERN_C void Bone_MatrixFromAxisRoll_func(float axis[3], float roll, float result_matrix[9])
{
	rna_Bone_MatrixFromAxisRoll(axis, roll, result_matrix);
}

static void Bone_MatrixFromAxisRoll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const float *axis;
	float roll;
	float *result_matrix;
	char *_data;
	
	_data = (char *)_parms->data;
	axis = ((const float *)_data);
	_data += 16;
	roll = *((float *)_data);
	_data += 8;
	result_matrix = ((float *)_data);
	
	rna_Bone_MatrixFromAxisRoll(axis, roll, result_matrix);
}

RNA_EXTERN_C void Bone_AxisRollFromMatrix_func(float matrix[9], float axis[3], float result_axis[3], float *result_roll)
{
	rna_Bone_AxisRollFromMatrix(matrix, axis, result_axis, result_roll);
}

static void Bone_AxisRollFromMatrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const float *matrix;
	const float *axis;
	float *result_axis;
	float *result_roll;
	char *_data;
	
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 40;
	axis = ((const float *)_data);
	_data += 16;
	result_axis = ((float *)_data);
	_data += 16;
	result_roll = ((float *)_data);
	
	rna_Bone_AxisRollFromMatrix(matrix, axis, result_axis, result_roll);
}

/* Repeated prototypes to detect errors */

float rna_Bone_do_envelope(struct Bone *_self, float point[3]);
void rna_Bone_convert_local_to_pose(struct Bone *_self, float matrix_return[16], float matrix[16], float matrix_local[16], float parent_matrix[16], float parent_matrix_local[16], bool invert);
void rna_Bone_MatrixFromAxisRoll(float axis[3], float roll, float result_matrix[9]);
void rna_Bone_AxisRollFromMatrix(float matrix[9], float axis[3], float result_axis[3], float *result_roll);

RNA_EXTERN_C void BoneCollectionMemberships_clear_func(struct Bone *_self)
{
	rna_BoneCollectionMemberships_clear(_self);
}

static void BoneCollectionMemberships_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Bone *_self;
	_self = (struct Bone *)_ptr->data;
	
	rna_BoneCollectionMemberships_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_BoneCollectionMemberships_clear(struct Bone *_self);

RNA_EXTERN_C void EditBone_align_roll_func(struct EditBone *_self, float vector[3])
{
	rna_EditBone_align_roll(_self, vector);
}

static void EditBone_align_roll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct EditBone *_self;
	const float *vector;
	char *_data;
	
	_self = (struct EditBone *)_ptr->data;
	_data = (char *)_parms->data;
	vector = ((const float *)_data);
	
	rna_EditBone_align_roll(_self, vector);
}

/* Repeated prototypes to detect errors */

void rna_EditBone_align_roll(struct EditBone *_self, float vector[3]);

/* BoneColor */
CollectionPropertyRNA rna_BoneColor_rna_properties = {
	{(PropertyRNA *)&rna_BoneColor_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneColor_rna_properties_begin, BoneColor_rna_properties_next, BoneColor_rna_properties_end, BoneColor_rna_properties_get, nullptr, nullptr, BoneColor_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoneColor_rna_type = {
	{(PropertyRNA *)&rna_BoneColor_palette, (PropertyRNA *)&rna_BoneColor_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneColor_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_BoneColor_palette_items[23] = {
	{0, "DEFAULT", 0, "Default Colors", ""},
	{1, "THEME01", 850, "01 - Theme Color Set", ""},
	{2, "THEME02", 851, "02 - Theme Color Set", ""},
	{3, "THEME03", 852, "03 - Theme Color Set", ""},
	{4, "THEME04", 853, "04 - Theme Color Set", ""},
	{5, "THEME05", 854, "05 - Theme Color Set", ""},
	{6, "THEME06", 855, "06 - Theme Color Set", ""},
	{7, "THEME07", 856, "07 - Theme Color Set", ""},
	{8, "THEME08", 857, "08 - Theme Color Set", ""},
	{9, "THEME09", 858, "09 - Theme Color Set", ""},
	{10, "THEME10", 859, "10 - Theme Color Set", ""},
	{11, "THEME11", 860, "11 - Theme Color Set", ""},
	{12, "THEME12", 861, "12 - Theme Color Set", ""},
	{13, "THEME13", 862, "13 - Theme Color Set", ""},
	{14, "THEME14", 863, "14 - Theme Color Set", ""},
	{15, "THEME15", 864, "15 - Theme Color Set", ""},
	{16, "THEME16", 865, "16 - Theme Color Set", ""},
	{17, "THEME17", 866, "17 - Theme Color Set", ""},
	{18, "THEME18", 867, "18 - Theme Color Set", ""},
	{19, "THEME19", 868, "19 - Theme Color Set", ""},
	{20, "THEME20", 869, "20 - Theme Color Set", ""},
	{-1, "CUSTOM", 0, "Custom Color Set", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BoneColor_palette = {
	{(PropertyRNA *)&rna_BoneColor_is_custom, (PropertyRNA *)&rna_BoneColor_rna_type,
	-1, "palette", 1, 1, 0, 0, 0, "Color Set",
	"Color palette to use",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_BoneColor_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneColor_palette_get, BoneColor_palette_set, nullptr, nullptr, nullptr, rna_BoneColor_palette_items, 22, 0
};

BoolPropertyRNA rna_BoneColor_is_custom = {
	{(PropertyRNA *)&rna_BoneColor_custom, (PropertyRNA *)&rna_BoneColor_palette,
	-1, "is_custom", 2, 0, 0, 0, 0, "Use Custom Color",
	"A color palette is user-defined, instead of using a theme-defined one",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneColor_is_custom_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BoneColor_custom = {
	{nullptr, (PropertyRNA *)&rna_BoneColor_is_custom,
	-1, "custom", 8650752, 1, 0, 0, 0, "Custom",
	"The custom bone colors, used when palette is \'CUSTOM\'",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_BoneColor_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneColor_custom_get, nullptr, nullptr, nullptr,&RNA_ThemeBoneColorSet
};

StructRNA RNA_BoneColor = {
	{(ContainerRNA *)&RNA_BoneCollection, (ContainerRNA *)&RNA_MotionPathVert,
	nullptr,
	{(PropertyRNA *)&rna_BoneColor_rna_properties, (PropertyRNA *)&rna_BoneColor_custom}},
	"BoneColor", nullptr, nullptr, 516, nullptr, "BoneColor",
	"Theme color or custom color of a bone",
	"*", 174,
	nullptr, (PropertyRNA *)&rna_BoneColor_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_BoneColor_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* BoneCollection */
CollectionPropertyRNA rna_BoneCollection_rna_properties = {
	{(PropertyRNA *)&rna_BoneCollection_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_rna_properties_begin, BoneCollection_rna_properties_next, BoneCollection_rna_properties_end, BoneCollection_rna_properties_get, nullptr, nullptr, BoneCollection_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoneCollection_rna_type = {
	{(PropertyRNA *)&rna_BoneCollection_name, (PropertyRNA *)&rna_BoneCollection_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BoneCollection_name = {
	{(PropertyRNA *)&rna_BoneCollection_is_visible, (PropertyRNA *)&rna_BoneCollection_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Unique within the Armature",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_name_get, BoneCollection_name_length, BoneCollection_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_BoneCollection_is_visible = {
	{(PropertyRNA *)&rna_BoneCollection_is_local_override, (PropertyRNA *)&rna_BoneCollection_name,
	-1, "is_visible", 65539, 1, 0, 0, 0, "Visible",
	"Bones in this collection will be visible in pose/object mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 101974016, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_is_visible_get, BoneCollection_is_visible_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BoneCollection_is_local_override = {
	{(PropertyRNA *)&rna_BoneCollection_is_editable, (PropertyRNA *)&rna_BoneCollection_is_visible,
	-1, "is_local_override", 2, 0, 0, 0, 0, "Is Local Override",
	"This collection was added via a library override in the current blend file",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_is_local_override_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BoneCollection_is_editable = {
	{(PropertyRNA *)&rna_BoneCollection_bones, (PropertyRNA *)&rna_BoneCollection_is_local_override,
	-1, "is_editable", 2, 0, 0, 0, 0, "Is Editable",
	"This collection is owned by a local Armature, or was added via a library override in the current blend file",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_BoneCollection_bones = {
	{nullptr, (PropertyRNA *)&rna_BoneCollection_is_editable,
	-1, "bones", 128, 0, 0, 0, 0, "Bones",
	"Bones assigned to this bone collection. In armature edit mode this will always return an empty list of bones, as the bone collection memberships are only synchronised when exiting edit mode",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollection_bones_begin, BoneCollection_bones_next, BoneCollection_bones_end, BoneCollection_bones_get, nullptr, BoneCollection_bones_lookup_int, BoneCollection_bones_lookup_string, nullptr, &RNA_Bone
};

PointerPropertyRNA rna_BoneCollection_assign_bone = {
	{(PropertyRNA *)&rna_BoneCollection_assign_assigned, nullptr,
	-1, "bone", 8388608, 0, 5, 0, 0, "",
	"Bone to assign to this collection. This must be a Bone, PoseBone, or EditBone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AnyType
};

BoolPropertyRNA rna_BoneCollection_assign_assigned = {
	{nullptr, (PropertyRNA *)&rna_BoneCollection_assign_bone,
	-1, "assigned", 3, 0, 2, 0, 0, "Assigned",
	"Whether the bone was actually assigned; will be false if the bone was already member of the collection",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BoneCollection_assign_func = {
	{(FunctionRNA *)&rna_BoneCollection_unassign_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollection_assign_bone, (PropertyRNA *)&rna_BoneCollection_assign_assigned}},
	"assign", 24, "Assign the given bone to this collection",
	BoneCollection_assign_call,
	(PropertyRNA *)&rna_BoneCollection_assign_assigned
};

PointerPropertyRNA rna_BoneCollection_unassign_bone = {
	{(PropertyRNA *)&rna_BoneCollection_unassign_assigned, nullptr,
	-1, "bone", 8388608, 0, 5, 0, 0, "",
	"Bone to remove from this collection. This must be a Bone, PoseBone, or EditBone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AnyType
};

BoolPropertyRNA rna_BoneCollection_unassign_assigned = {
	{nullptr, (PropertyRNA *)&rna_BoneCollection_unassign_bone,
	-1, "assigned", 3, 0, 2, 0, 0, "Unassigned",
	"Whether the bone was actually removed; will be false if the bone was not a member of the collection to begin with",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BoneCollection_unassign_func = {
	{nullptr, (FunctionRNA *)&rna_BoneCollection_assign_func,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollection_unassign_bone, (PropertyRNA *)&rna_BoneCollection_unassign_assigned}},
	"unassign", 24, "Remove the given bone from this collection",
	BoneCollection_unassign_call,
	(PropertyRNA *)&rna_BoneCollection_unassign_assigned
};

StructRNA RNA_BoneCollection = {
	{(ContainerRNA *)&RNA_Armature, (ContainerRNA *)&RNA_BoneColor,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollection_rna_properties, (PropertyRNA *)&rna_BoneCollection_bones}},
	"BoneCollection", nullptr, nullptr, 516, nullptr, "BoneCollection",
	"Bone collection in an Armature data-block",
	"*", 17,
	(PropertyRNA *)&rna_BoneCollection_name, (PropertyRNA *)&rna_BoneCollection_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_BoneCollection_path,
	nullptr,
	nullptr,
	nullptr,
	rna_BoneCollection_idprops,
	{(FunctionRNA *)&rna_BoneCollection_assign_func, (FunctionRNA *)&rna_BoneCollection_unassign_func}
};

/* Armature */
PointerPropertyRNA rna_Armature_animation_data = {
	{(PropertyRNA *)&rna_Armature_bones, nullptr,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Armature_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

CollectionPropertyRNA rna_Armature_bones = {
	{(PropertyRNA *)&rna_Armature_edit_bones, (PropertyRNA *)&rna_Armature_animation_data,
	-1, "bones", 0, 1, 0, 0, 0, "Bones",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ArmatureBones},
	Armature_bones_begin, Armature_bones_next, Armature_bones_end, Armature_bones_get, nullptr, nullptr, Armature_bones_lookup_string, nullptr, &RNA_Bone
};

CollectionPropertyRNA rna_Armature_edit_bones = {
	{(PropertyRNA *)&rna_Armature_collections, (PropertyRNA *)&rna_Armature_bones,
	-1, "edit_bones", 0, 1, 0, 0, 0, "Edit Bones",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_ArmatureEditBones},
	Armature_edit_bones_begin, Armature_edit_bones_next, Armature_edit_bones_end, Armature_edit_bones_get, nullptr, Armature_edit_bones_lookup_int, Armature_edit_bones_lookup_string, nullptr, &RNA_EditBone
};

CollectionPropertyRNA rna_Armature_collections = {
	{(PropertyRNA *)&rna_Armature_pose_position, (PropertyRNA *)&rna_Armature_edit_bones,
	-1, "collections", 0, 1025, 0, 0, 0, "Bone Collections",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Armature_collections_override_apply,
	0, PROP_RAW_UNSET, &RNA_BoneCollections},
	Armature_collections_begin, Armature_collections_next, Armature_collections_end, Armature_collections_get, nullptr, Armature_collections_lookup_int, Armature_collections_lookup_string, nullptr, &RNA_BoneCollection
};

static const EnumPropertyItem rna_Armature_pose_position_items[3] = {
	{0, "POSE", 0, "Pose Position", "Show armature in posed state"},
	{1, "REST", 0, "Rest Position", "Show Armature in binding pose state (no posing possible)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Armature_pose_position = {
	{(PropertyRNA *)&rna_Armature_display_type, (PropertyRNA *)&rna_Armature_collections,
	-1, "pose_position", 65539, 1, 0, 4, 0, "Pose Position",
	"Show armature in binding pose or final posed state",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bArmature, flag), (RawPropertyType)0, nullptr},
	Armature_pose_position_get, Armature_pose_position_set, nullptr, nullptr, nullptr, rna_Armature_pose_position_items, 2, 0
};

static const EnumPropertyItem rna_Armature_display_type_items[6] = {
	{0, "OCTAHEDRAL", 0, "Octahedral", "Display bones as octahedral shape (default)"},
	{1, "STICK", 0, "Stick", "Display bones as simple 2D lines with dots"},
	{2, "BBONE", 0, "B-Bone", "Display bones as boxes, showing subdivision and B-Splines"},
	{3, "ENVELOPE", 0, "Envelope", "Display bones as extruded spheres, showing deformation influence volume"},
	{4, "WIRE", 0, "Wire", "Display bones as thin wires, showing subdivision and B-Splines"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Armature_display_type = {
	{(PropertyRNA *)&rna_Armature_show_axes, (PropertyRNA *)&rna_Armature_pose_position,
	-1, "display_type", 65539, 1, 0, 4, 0, "Display Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bArmature, drawtype), (RawPropertyType)0, nullptr},
	Armature_display_type_get, Armature_display_type_set, nullptr, nullptr, nullptr, rna_Armature_display_type_items, 5, 0
};

BoolPropertyRNA rna_Armature_show_axes = {
	{(PropertyRNA *)&rna_Armature_axes_position, (PropertyRNA *)&rna_Armature_display_type,
	-1, "show_axes", 65539, 1, 0, 0, 0, "Display Axes",
	"Display bone axes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_show_axes_get, Armature_show_axes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Armature_axes_position = {
	{(PropertyRNA *)&rna_Armature_relation_line_position, (PropertyRNA *)&rna_Armature_show_axes,
	-1, "axes_position", 3, 1, 0, 4, 0, "Axes Position",
	"The position for the axes on the bone. Increasing the value moves it closer to the tip; decreasing moves it closer to the root",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bArmature, axes_position), (RawPropertyType)5, nullptr},
	Armature_axes_position_get, Armature_axes_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 1, 0.0f, nullptr
};

static const EnumPropertyItem rna_Armature_relation_line_position_items[3] = {
	{0, "TAIL", 0, "Tail", "Draw the relationship line from the parent tail to the child head"},
	{1, "HEAD", 0, "Head", "Draw the relationship line from the parent head to the child head"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Armature_relation_line_position = {
	{(PropertyRNA *)&rna_Armature_show_names, (PropertyRNA *)&rna_Armature_axes_position,
	-1, "relation_line_position", 65539, 1, 0, 0, 0, "Relation Line Position",
	"The start position of the relation lines from parent to child bones",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_relation_line_position_get, Armature_relation_line_position_set, nullptr, nullptr, nullptr, rna_Armature_relation_line_position_items, 2, 0
};

BoolPropertyRNA rna_Armature_show_names = {
	{(PropertyRNA *)&rna_Armature_use_mirror_x, (PropertyRNA *)&rna_Armature_relation_line_position,
	-1, "show_names", 65539, 1, 0, 0, 0, "Display Names",
	"Display bone names",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_show_names_get, Armature_show_names_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Armature_use_mirror_x = {
	{(PropertyRNA *)&rna_Armature_show_bone_custom_shapes, (PropertyRNA *)&rna_Armature_show_names,
	-1, "use_mirror_x", 65539, 1, 0, 0, 0, "X-Axis Mirror",
	"Apply changes to matching bone on opposite side of X-Axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_use_mirror_x_get, Armature_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Armature_show_bone_custom_shapes = {
	{(PropertyRNA *)&rna_Armature_show_bone_colors, (PropertyRNA *)&rna_Armature_use_mirror_x,
	-1, "show_bone_custom_shapes", 3, 1, 0, 0, 0, "Display Custom Bone Shapes",
	"Display bones with their custom shapes",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_show_bone_custom_shapes_get, Armature_show_bone_custom_shapes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Armature_show_bone_colors = {
	{(PropertyRNA *)&rna_Armature_is_editmode, (PropertyRNA *)&rna_Armature_show_bone_custom_shapes,
	-1, "show_bone_colors", 3, 1, 0, 0, 0, "Display Bone Colors",
	"Display bone colors",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_show_bone_colors_get, Armature_show_bone_colors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Armature_is_editmode = {
	{nullptr, (PropertyRNA *)&rna_Armature_show_bone_colors,
	-1, "is_editmode", 2, 1, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Armature_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Armature_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Armature_transform_matrix = {
	{nullptr, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Armature_transform_matrix_default
};

FunctionRNA rna_Armature_transform_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Armature_transform_matrix, (PropertyRNA *)&rna_Armature_transform_matrix}},
	"transform", 0, "Transform armature bones by a matrix",
	Armature_transform_call,
	nullptr
};

StructRNA RNA_Armature = {
	{(ContainerRNA *)&RNA_ArmatureBones, (ContainerRNA *)&RNA_BoneCollection,
	nullptr,
	{(PropertyRNA *)&rna_Armature_animation_data, (PropertyRNA *)&rna_Armature_is_editmode}},
	"Armature", nullptr, nullptr, 519, nullptr, "Armature",
	"Armature data-block containing a hierarchy of bones, usually used for rigging characters",
	"*", 172,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Armature_transform_func, (FunctionRNA *)&rna_Armature_transform_func}
};

/* Armature Bones */
CollectionPropertyRNA rna_ArmatureBones_rna_properties = {
	{(PropertyRNA *)&rna_ArmatureBones_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ArmatureBones_rna_properties_begin, ArmatureBones_rna_properties_next, ArmatureBones_rna_properties_end, ArmatureBones_rna_properties_get, nullptr, nullptr, ArmatureBones_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ArmatureBones_rna_type = {
	{(PropertyRNA *)&rna_ArmatureBones_active, (PropertyRNA *)&rna_ArmatureBones_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ArmatureBones_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ArmatureBones_active = {
	{nullptr, (PropertyRNA *)&rna_ArmatureBones_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Bone",
	"Armature\'s active bone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ArmatureBones_active_get, ArmatureBones_active_set, nullptr, nullptr,&RNA_Bone
};

StructRNA RNA_ArmatureBones = {
	{(ContainerRNA *)&RNA_ArmatureEditBones, (ContainerRNA *)&RNA_Armature,
	nullptr,
	{(PropertyRNA *)&rna_ArmatureBones_rna_properties, (PropertyRNA *)&rna_ArmatureBones_active}},
	"ArmatureBones", nullptr, nullptr, 516, nullptr, "Armature Bones",
	"Collection of armature bones",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ArmatureBones_rna_properties,
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

/* Armature EditBones */
CollectionPropertyRNA rna_ArmatureEditBones_rna_properties = {
	{(PropertyRNA *)&rna_ArmatureEditBones_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ArmatureEditBones_rna_properties_begin, ArmatureEditBones_rna_properties_next, ArmatureEditBones_rna_properties_end, ArmatureEditBones_rna_properties_get, nullptr, nullptr, ArmatureEditBones_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ArmatureEditBones_rna_type = {
	{(PropertyRNA *)&rna_ArmatureEditBones_active, (PropertyRNA *)&rna_ArmatureEditBones_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ArmatureEditBones_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ArmatureEditBones_active = {
	{nullptr, (PropertyRNA *)&rna_ArmatureEditBones_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active EditBone",
	"Armatures active edit bone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ArmatureEditBones_active_get, ArmatureEditBones_active_set, nullptr, nullptr,&RNA_EditBone
};

StringPropertyRNA rna_ArmatureEditBones_new_name = {
	{(PropertyRNA *)&rna_ArmatureEditBones_new_bone, nullptr,
	-1, "name", 262145, 1, 1, 0, 0, "",
	"New name for the bone",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Object"
};

PointerPropertyRNA rna_ArmatureEditBones_new_bone = {
	{nullptr, (PropertyRNA *)&rna_ArmatureEditBones_new_name,
	-1, "bone", 8388608, 1, 2, 0, 0, "",
	"Newly created edit bone",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_EditBone
};

FunctionRNA rna_ArmatureEditBones_new_func = {
	{(FunctionRNA *)&rna_ArmatureEditBones_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ArmatureEditBones_new_name, (PropertyRNA *)&rna_ArmatureEditBones_new_bone}},
	"new", 16, "Add a new bone",
	ArmatureEditBones_new_call,
	(PropertyRNA *)&rna_ArmatureEditBones_new_bone
};

PointerPropertyRNA rna_ArmatureEditBones_remove_bone = {
	{nullptr, nullptr,
	-1, "bone", 262144, 1, 5, 0, 0, "",
	"EditBone to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_EditBone
};

FunctionRNA rna_ArmatureEditBones_remove_func = {
	{nullptr, (FunctionRNA *)&rna_ArmatureEditBones_new_func,
	nullptr,
	{(PropertyRNA *)&rna_ArmatureEditBones_remove_bone, (PropertyRNA *)&rna_ArmatureEditBones_remove_bone}},
	"remove", 16, "Remove an existing bone from the armature",
	ArmatureEditBones_remove_call,
	nullptr
};

StructRNA RNA_ArmatureEditBones = {
	{(ContainerRNA *)&RNA_BoneCollections, (ContainerRNA *)&RNA_ArmatureBones,
	nullptr,
	{(PropertyRNA *)&rna_ArmatureEditBones_rna_properties, (PropertyRNA *)&rna_ArmatureEditBones_active}},
	"ArmatureEditBones", nullptr, nullptr, 516, nullptr, "Armature EditBones",
	"Collection of armature edit bones",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ArmatureEditBones_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ArmatureEditBones_new_func, (FunctionRNA *)&rna_ArmatureEditBones_remove_func}
};

/* Armature Bone Collections */
CollectionPropertyRNA rna_BoneCollections_rna_properties = {
	{(PropertyRNA *)&rna_BoneCollections_rna_type, nullptr,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollections_rna_properties_begin, BoneCollections_rna_properties_next, BoneCollections_rna_properties_end, BoneCollections_rna_properties_get, nullptr, nullptr, BoneCollections_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoneCollections_rna_type = {
	{(PropertyRNA *)&rna_BoneCollections_active, (PropertyRNA *)&rna_BoneCollections_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollections_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_BoneCollections_active = {
	{(PropertyRNA *)&rna_BoneCollections_active_index, (PropertyRNA *)&rna_BoneCollections_rna_type,
	-1, "active", 8388609, 5, 0, 0, 0, "Active Collection",
	"Armature\'s active bone collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollections_active_get, BoneCollections_active_set, nullptr, nullptr,&RNA_BoneCollection
};

IntPropertyRNA rna_BoneCollections_active_index = {
	{(PropertyRNA *)&rna_BoneCollections_active_name, (PropertyRNA *)&rna_BoneCollections_active,
	-1, "active_index", 65539, 5, 0, 0, 0, "Active Collection Index",
	"The index of the Armature\'s active bone collection; -1 when there is no active collection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollections_active_index_get, BoneCollections_active_index_set, nullptr, nullptr, rna_BoneCollections_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_BoneCollections_active_name = {
	{nullptr, (PropertyRNA *)&rna_BoneCollections_active_index,
	-1, "active_name", 262145, 1, 0, 0, 0, "Active Collection Name",
	"The name of the Armature\'s active bone collection; empty when there is no active collection",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollections_active_name_get, BoneCollections_active_name_length, BoneCollections_active_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_BoneCollections_new_name = {
	{(PropertyRNA *)&rna_BoneCollections_new_bonecollection, nullptr,
	-1, "name", 262145, 1, 1, 0, 0, "Name",
	"Name of the new collection. Blender will ensure it is unique within the collections of the Armature",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_BoneCollections_new_bonecollection = {
	{nullptr, (PropertyRNA *)&rna_BoneCollections_new_name,
	-1, "bonecollection", 8388608, 1, 2, 0, 0, "",
	"Newly created bone collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_BoneCollection
};

FunctionRNA rna_BoneCollections_new_func = {
	{(FunctionRNA *)&rna_BoneCollections_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollections_new_name, (PropertyRNA *)&rna_BoneCollections_new_bonecollection}},
	"new", 0, "Add a new empty bone collection to the armature",
	BoneCollections_new_call,
	(PropertyRNA *)&rna_BoneCollections_new_bonecollection
};

PointerPropertyRNA rna_BoneCollections_remove_bone_collection = {
	{nullptr, nullptr,
	-1, "bone_collection", 8388608, 1, 1, 0, 0, "Bone Collection",
	"The bone collection to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_BoneCollection
};

FunctionRNA rna_BoneCollections_remove_func = {
	{(FunctionRNA *)&rna_BoneCollections_move_func, (FunctionRNA *)&rna_BoneCollections_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollections_remove_bone_collection, (PropertyRNA *)&rna_BoneCollections_remove_bone_collection}},
	"remove", 0, "Remove the bone collection from the armature",
	BoneCollections_remove_call,
	nullptr
};

IntPropertyRNA rna_BoneCollections_move_from_index = {
	{(PropertyRNA *)&rna_BoneCollections_move_to_index, nullptr,
	-1, "from_index", 3, 1, 1, 0, 0, "From Index",
	"Index to move",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

IntPropertyRNA rna_BoneCollections_move_to_index = {
	{nullptr, (PropertyRNA *)&rna_BoneCollections_move_from_index,
	-1, "to_index", 3, 1, 1, 0, 0, "To Index",
	"Target index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, -1, nullptr
};

FunctionRNA rna_BoneCollections_move_func = {
	{nullptr, (FunctionRNA *)&rna_BoneCollections_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollections_move_from_index, (PropertyRNA *)&rna_BoneCollections_move_to_index}},
	"move", 16, "Move a bone collection to a different position in the collection list",
	BoneCollections_move_call,
	nullptr
};

StructRNA RNA_BoneCollections = {
	{(ContainerRNA *)&RNA_Bone, (ContainerRNA *)&RNA_ArmatureEditBones,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollections_rna_properties, (PropertyRNA *)&rna_BoneCollections_active_name}},
	"BoneCollections", nullptr, nullptr, 516, nullptr, "Armature Bone Collections",
	"The Bone Collections of this Armature",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BoneCollections_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BoneCollections_new_func, (FunctionRNA *)&rna_BoneCollections_move_func}
};

/* Bone */
CollectionPropertyRNA rna_Bone_rna_properties = {
	{(PropertyRNA *)&rna_Bone_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_rna_properties_begin, Bone_rna_properties_next, Bone_rna_properties_end, Bone_rna_properties_get, nullptr, nullptr, Bone_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Bone_rna_type = {
	{(PropertyRNA *)&rna_Bone_parent, (PropertyRNA *)&rna_Bone_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Bone_parent = {
	{(PropertyRNA *)&rna_Bone_children, (PropertyRNA *)&rna_Bone_rna_type,
	-1, "parent", 8388736, 0, 0, 0, 0, "Parent",
	"Parent bone (in same Armature)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_parent_get, nullptr, nullptr, nullptr,&RNA_Bone
};

CollectionPropertyRNA rna_Bone_children = {
	{(PropertyRNA *)&rna_Bone_collections, (PropertyRNA *)&rna_Bone_parent,
	-1, "children", 128, 0, 0, 0, 0, "Children",
	"Bones which are children of this bone",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_children_begin, Bone_children_next, Bone_children_end, Bone_children_get, nullptr, Bone_children_lookup_int, Bone_children_lookup_string, nullptr, &RNA_Bone
};

CollectionPropertyRNA rna_Bone_collections = {
	{(PropertyRNA *)&rna_Bone_name, (PropertyRNA *)&rna_Bone_children,
	-1, "collections", 128, 0, 0, 0, 0, "Collections",
	"Bone Collections that contain this bone",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BoneCollectionMemberships},
	Bone_collections_begin, Bone_collections_next, Bone_collections_end, Bone_collections_get, nullptr, nullptr, nullptr, nullptr, &RNA_BoneCollection
};

StringPropertyRNA rna_Bone_name = {
	{(PropertyRNA *)&rna_Bone_color, (PropertyRNA *)&rna_Bone_collections,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	rna_Bone_update_renamed, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_name_get, Bone_name_length, Bone_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_Bone_color = {
	{(PropertyRNA *)&rna_Bone_use_connect, (PropertyRNA *)&rna_Bone_name,
	-1, "color", 8388608, 1, 0, 0, 0, "color",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_color_get, nullptr, nullptr, nullptr,&RNA_BoneColor
};

BoolPropertyRNA rna_Bone_use_connect = {
	{(PropertyRNA *)&rna_Bone_use_inherit_rotation, (PropertyRNA *)&rna_Bone_color,
	-1, "use_connect", 2, 1, 0, 0, 0, "Connected",
	"When bone has a parent, bone\'s head is stuck to the parent\'s tail",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_connect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_use_inherit_rotation = {
	{(PropertyRNA *)&rna_Bone_use_envelope_multiply, (PropertyRNA *)&rna_Bone_use_connect,
	-1, "use_inherit_rotation", 3, 1, 0, 0, 0, "Inherit Rotation",
	"Bone inherits rotation or scale from parent bone",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_inherit_rotation_get, Bone_use_inherit_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_use_envelope_multiply = {
	{(PropertyRNA *)&rna_Bone_use_deform, (PropertyRNA *)&rna_Bone_use_inherit_rotation,
	-1, "use_envelope_multiply", 3, 1, 0, 0, 0, "Multiply Vertex Group with Envelope",
	"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_envelope_multiply_get, Bone_use_envelope_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_use_deform = {
	{(PropertyRNA *)&rna_Bone_inherit_scale, (PropertyRNA *)&rna_Bone_use_envelope_multiply,
	-1, "use_deform", 3, 1, 0, 0, 0, "Deform",
	"Enable Bone to deform geometry",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_deform_get, Bone_use_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Bone_inherit_scale_items[7] = {
	{0, "FULL", 0, "Full", "Inherit all effects of parent scaling"},
	{1, "FIX_SHEAR", 0, "Fix Shear", "Inherit scaling, but remove shearing of the child in the rest orientation"},
	{5, "ALIGNED", 0, "Aligned", "Rotate non-uniform parent scaling to align with the child, applying parent X scale to child X axis, and so forth"},
	{2, "AVERAGE", 0, "Average", "Inherit uniform scaling representing the overall change in the volume of the parent"},
	{3, "NONE", 0, "None", "Completely ignore parent scaling"},
	{4, "NONE_LEGACY", 0, "None (Legacy)", "Ignore parent scaling without compensating for parent shear. Replicates the effect of disabling the original Inherit Scale checkbox"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Bone_inherit_scale = {
	{(PropertyRNA *)&rna_Bone_use_local_location, (PropertyRNA *)&rna_Bone_use_deform,
	-1, "inherit_scale", 3, 1, 0, 4, 0, "Inherit Scale",
	"Specifies how the bone inherits scaling from the parent bone",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, inherit_scale_mode), (RawPropertyType)2, nullptr},
	Bone_inherit_scale_get, Bone_inherit_scale_set, nullptr, nullptr, nullptr, rna_Bone_inherit_scale_items, 6, 0
};

BoolPropertyRNA rna_Bone_use_local_location = {
	{(PropertyRNA *)&rna_Bone_use_relative_parent, (PropertyRNA *)&rna_Bone_inherit_scale,
	-1, "use_local_location", 3, 1, 0, 0, 0, "Local Location",
	"Bone location is set in local space",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_local_location_get, Bone_use_local_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_use_relative_parent = {
	{(PropertyRNA *)&rna_Bone_show_wire, (PropertyRNA *)&rna_Bone_use_local_location,
	-1, "use_relative_parent", 3, 1, 0, 0, 0, "Relative Parenting",
	"Object children will use relative transform, like deform",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_relative_parent_get, Bone_use_relative_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_show_wire = {
	{(PropertyRNA *)&rna_Bone_use_cyclic_offset, (PropertyRNA *)&rna_Bone_use_relative_parent,
	-1, "show_wire", 3, 1, 0, 0, 0, "Display Wire",
	"Bone is always displayed in wireframe regardless of viewport shading mode (useful for non-obstructive custom bone shapes)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_show_wire_get, Bone_show_wire_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_use_cyclic_offset = {
	{(PropertyRNA *)&rna_Bone_hide_select, (PropertyRNA *)&rna_Bone_show_wire,
	-1, "use_cyclic_offset", 3, 1, 0, 0, 0, "Cyclic Offset",
	"When bone doesn\'t have a parent, it receives cyclic offset effects (Deprecated)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_cyclic_offset_get, Bone_use_cyclic_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_hide_select = {
	{(PropertyRNA *)&rna_Bone_envelope_distance, (PropertyRNA *)&rna_Bone_use_cyclic_offset,
	-1, "hide_select", 3, 1, 0, 0, 0, "Selectable",
	"Bone is able to be selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_hide_select_get, Bone_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Bone_envelope_distance = {
	{(PropertyRNA *)&rna_Bone_envelope_weight, (PropertyRNA *)&rna_Bone_hide_select,
	-1, "envelope_distance", 3, 1, 0, 4, 0, "Envelope Deform Distance",
	"Bone deformation distance (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, dist), (RawPropertyType)5, nullptr},
	Bone_envelope_distance_get, Bone_envelope_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_envelope_weight = {
	{(PropertyRNA *)&rna_Bone_head_radius, (PropertyRNA *)&rna_Bone_envelope_distance,
	-1, "envelope_weight", 3, 1, 0, 4, 0, "Envelope Deform Weight",
	"Bone deformation weight (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, weight), (RawPropertyType)5, nullptr},
	Bone_envelope_weight_get, Bone_envelope_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_head_radius = {
	{(PropertyRNA *)&rna_Bone_tail_radius, (PropertyRNA *)&rna_Bone_envelope_weight,
	-1, "head_radius", 3, 1, 0, 4, 0, "Envelope Head Radius",
	"Radius of head of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, rad_head), (RawPropertyType)5, nullptr},
	Bone_head_radius_get, Bone_head_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_tail_radius = {
	{(PropertyRNA *)&rna_Bone_bbone_segments, (PropertyRNA *)&rna_Bone_head_radius,
	-1, "tail_radius", 3, 1, 0, 4, 0, "Envelope Tail Radius",
	"Radius of tail of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, rad_tail), (RawPropertyType)5, nullptr},
	Bone_tail_radius_get, Bone_tail_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_Bone_bbone_segments = {
	{(PropertyRNA *)&rna_Bone_bbone_mapping_mode, (PropertyRNA *)&rna_Bone_tail_radius,
	-1, "bbone_segments", 3, 1, 0, 4, 0, "B-Bone Segments",
	"Number of subdivisions of bone (for B-Bones only)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, segments), (RawPropertyType)1, nullptr},
	Bone_bbone_segments_get, Bone_bbone_segments_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 32, 1, 32, 1, 0, nullptr
};

static const EnumPropertyItem rna_Bone_bbone_mapping_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "Fast mapping that is good for most situations, but ignores the rest pose curvature of the B-Bone"},
	{1, "CURVED", 0, "Curved", "Slower mapping that gives better deformation for B-Bones that are sharply curved in rest pose"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Bone_bbone_mapping_mode = {
	{(PropertyRNA *)&rna_Bone_bbone_x, (PropertyRNA *)&rna_Bone_bbone_segments,
	-1, "bbone_mapping_mode", 1, 1, 0, 4, 0, "B-Bone Vertex Mapping Mode",
	"Selects how the vertices are mapped to B-Bone segments based on their position",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bbone_mapping_mode), (RawPropertyType)2, nullptr},
	Bone_bbone_mapping_mode_get, Bone_bbone_mapping_mode_set, nullptr, nullptr, nullptr, rna_Bone_bbone_mapping_mode_items, 2, 0
};

FloatPropertyRNA rna_Bone_bbone_x = {
	{(PropertyRNA *)&rna_Bone_bbone_z, (PropertyRNA *)&rna_Bone_bbone_mapping_mode,
	-1, "bbone_x", 3, 1, 0, 4, 0, "B-Bone Display X Width",
	"B-Bone X size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, xwidth), (RawPropertyType)5, nullptr},
	Bone_bbone_x_get, Bone_bbone_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_z = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_type_start, (PropertyRNA *)&rna_Bone_bbone_x,
	-1, "bbone_z", 3, 1, 0, 4, 0, "B-Bone Display Z Width",
	"B-Bone Z size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, zwidth), (RawPropertyType)5, nullptr},
	Bone_bbone_z_get, Bone_bbone_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

static const EnumPropertyItem rna_Bone_bbone_handle_type_start_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Bone_bbone_handle_type_start = {
	{(PropertyRNA *)&rna_Bone_bbone_custom_handle_start, (PropertyRNA *)&rna_Bone_bbone_z,
	-1, "bbone_handle_type_start", 1, 1, 0, 4, 0, "B-Bone Start Handle Type",
	"Selects how the start handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bbone_prev_type), (RawPropertyType)2, nullptr},
	Bone_bbone_handle_type_start_get, Bone_bbone_handle_type_start_set, nullptr, nullptr, nullptr, rna_Bone_bbone_handle_type_start_items, 4, 0
};

PointerPropertyRNA rna_Bone_bbone_custom_handle_start = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_scale_start, (PropertyRNA *)&rna_Bone_bbone_handle_type_start,
	-1, "bbone_custom_handle_start", 8388737, 3, 0, 0, 0, "B-Bone Start Handle",
	"Bone that serves as the start handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Bone_bbone_handle_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_bbone_custom_handle_start_get, Bone_bbone_custom_handle_start_set, nullptr, nullptr,&RNA_Bone
};

static bool rna_Bone_bbone_handle_use_scale_start_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Bone_bbone_handle_use_scale_start = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_ease_start, (PropertyRNA *)&rna_Bone_bbone_custom_handle_start,
	-1, "bbone_handle_use_scale_start", 3, 1, 0, 0, 0, "Start Handle Scale",
	"Multiply B-Bone Scale In channels by the local scale values of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Bone_bbone_handle_use_scale_start_get, Bone_bbone_handle_use_scale_start_set, nullptr, nullptr, nullptr, nullptr, 0, rna_Bone_bbone_handle_use_scale_start_default
};

BoolPropertyRNA rna_Bone_bbone_handle_use_ease_start = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_type_end, (PropertyRNA *)&rna_Bone_bbone_handle_use_scale_start,
	-1, "bbone_handle_use_ease_start", 3, 1, 0, 0, 0, "Start Handle Ease",
	"Multiply the B-Bone Ease In channel by the local Y scale value of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_bbone_handle_use_ease_start_get, Bone_bbone_handle_use_ease_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Bone_bbone_handle_type_end_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Bone_bbone_handle_type_end = {
	{(PropertyRNA *)&rna_Bone_bbone_custom_handle_end, (PropertyRNA *)&rna_Bone_bbone_handle_use_ease_start,
	-1, "bbone_handle_type_end", 1, 1, 0, 4, 0, "B-Bone End Handle Type",
	"Selects how the end handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bbone_next_type), (RawPropertyType)2, nullptr},
	Bone_bbone_handle_type_end_get, Bone_bbone_handle_type_end_set, nullptr, nullptr, nullptr, rna_Bone_bbone_handle_type_end_items, 4, 0
};

PointerPropertyRNA rna_Bone_bbone_custom_handle_end = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_scale_end, (PropertyRNA *)&rna_Bone_bbone_handle_type_end,
	-1, "bbone_custom_handle_end", 8388737, 3, 0, 0, 0, "B-Bone End Handle",
	"Bone that serves as the end handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Bone_bbone_handle_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_bbone_custom_handle_end_get, Bone_bbone_custom_handle_end_set, nullptr, nullptr,&RNA_Bone
};

static bool rna_Bone_bbone_handle_use_scale_end_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Bone_bbone_handle_use_scale_end = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_ease_end, (PropertyRNA *)&rna_Bone_bbone_custom_handle_end,
	-1, "bbone_handle_use_scale_end", 3, 1, 0, 0, 0, "End Handle Scale",
	"Multiply B-Bone Scale Out channels by the local scale values of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Bone_bbone_handle_use_scale_end_get, Bone_bbone_handle_use_scale_end_set, nullptr, nullptr, nullptr, nullptr, 0, rna_Bone_bbone_handle_use_scale_end_default
};

BoolPropertyRNA rna_Bone_bbone_handle_use_ease_end = {
	{(PropertyRNA *)&rna_Bone_bbone_rollin, (PropertyRNA *)&rna_Bone_bbone_handle_use_scale_end,
	-1, "bbone_handle_use_ease_end", 3, 1, 0, 0, 0, "End Handle Ease",
	"Multiply the B-Bone Ease Out channel by the local Y scale value of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_bbone_handle_use_ease_end_get, Bone_bbone_handle_use_ease_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Bone_bbone_rollin = {
	{(PropertyRNA *)&rna_Bone_bbone_rollout, (PropertyRNA *)&rna_Bone_bbone_handle_use_ease_end,
	-1, "bbone_rollin", 3, 0, 0, 4, 0, "Roll In",
	"Roll offset for the start of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, roll1), (RawPropertyType)5, nullptr},
	Bone_bbone_rollin_get, Bone_bbone_rollin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_rollout = {
	{(PropertyRNA *)&rna_Bone_use_endroll_as_inroll, (PropertyRNA *)&rna_Bone_bbone_rollin,
	-1, "bbone_rollout", 3, 0, 0, 4, 0, "Roll Out",
	"Roll offset for the end of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, roll2), (RawPropertyType)5, nullptr},
	Bone_bbone_rollout_get, Bone_bbone_rollout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_Bone_use_endroll_as_inroll = {
	{(PropertyRNA *)&rna_Bone_bbone_curveinx, (PropertyRNA *)&rna_Bone_bbone_rollout,
	-1, "use_endroll_as_inroll", 1, 0, 0, 0, 0, "Inherit End Roll",
	"Add Roll Out of the Start Handle bone to the Roll In value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_endroll_as_inroll_get, Bone_use_endroll_as_inroll_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_Bone_bbone_curveinx = {
	{(PropertyRNA *)&rna_Bone_bbone_curveinz, (PropertyRNA *)&rna_Bone_use_endroll_as_inroll,
	-1, "bbone_curveinx", 3, 0, 0, 4, 0, "In X",
	"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_in_x), (RawPropertyType)5, nullptr},
	Bone_bbone_curveinx_get, Bone_bbone_curveinx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_curveinz = {
	{(PropertyRNA *)&rna_Bone_bbone_curveoutx, (PropertyRNA *)&rna_Bone_bbone_curveinx,
	-1, "bbone_curveinz", 3, 0, 0, 4, 0, "In Z",
	"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_in_z), (RawPropertyType)5, nullptr},
	Bone_bbone_curveinz_get, Bone_bbone_curveinz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_curveoutx = {
	{(PropertyRNA *)&rna_Bone_bbone_curveoutz, (PropertyRNA *)&rna_Bone_bbone_curveinz,
	-1, "bbone_curveoutx", 3, 0, 0, 4, 0, "Out X",
	"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_out_x), (RawPropertyType)5, nullptr},
	Bone_bbone_curveoutx_get, Bone_bbone_curveoutx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_curveoutz = {
	{(PropertyRNA *)&rna_Bone_bbone_easein, (PropertyRNA *)&rna_Bone_bbone_curveoutx,
	-1, "bbone_curveoutz", 3, 0, 0, 4, 0, "Out Z",
	"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_out_z), (RawPropertyType)5, nullptr},
	Bone_bbone_curveoutz_get, Bone_bbone_curveoutz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_easein = {
	{(PropertyRNA *)&rna_Bone_bbone_easeout, (PropertyRNA *)&rna_Bone_bbone_curveoutz,
	-1, "bbone_easein", 3, 0, 0, 4, 0, "Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0, "Armature",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, ease1), (RawPropertyType)5, nullptr},
	Bone_bbone_easein_get, Bone_bbone_easein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_Bone_bbone_easeout = {
	{(PropertyRNA *)&rna_Bone_use_scale_easing, (PropertyRNA *)&rna_Bone_bbone_easein,
	-1, "bbone_easeout", 3, 0, 0, 4, 0, "Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0, "Armature",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, ease2), (RawPropertyType)5, nullptr},
	Bone_bbone_easeout_get, Bone_bbone_easeout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_Bone_use_scale_easing = {
	{(PropertyRNA *)&rna_Bone_bbone_scalein, (PropertyRNA *)&rna_Bone_bbone_easeout,
	-1, "use_scale_easing", 3, 0, 0, 0, 0, "Scale Easing",
	"Multiply the final easing values by the Scale In/Out Y factors",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_use_scale_easing_get, Bone_use_scale_easing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Bone_bbone_scalein_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Bone_bbone_scalein = {
	{(PropertyRNA *)&rna_Bone_bbone_scaleout, (PropertyRNA *)&rna_Bone_use_scale_easing,
	-1, "bbone_scalein", 67108867, 0, 0, 4, 0, "Scale In",
	"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, scale_in), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_bbone_scalein_get, Bone_bbone_scalein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_bbone_scalein_default
};

static float rna_Bone_bbone_scaleout_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Bone_bbone_scaleout = {
	{(PropertyRNA *)&rna_Bone_hide, (PropertyRNA *)&rna_Bone_bbone_scalein,
	-1, "bbone_scaleout", 67108867, 0, 0, 4, 0, "Scale Out",
	"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, scale_out), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_bbone_scaleout_get, Bone_bbone_scaleout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_bbone_scaleout_default
};

BoolPropertyRNA rna_Bone_hide = {
	{(PropertyRNA *)&rna_Bone_select, (PropertyRNA *)&rna_Bone_bbone_scaleout,
	-1, "hide", 4355, 1, 0, 0, 0, "Hide",
	"Bone is not visible when it is not in Edit Mode (i.e. in Object or Pose Modes)",
	284, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Bone_hide_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_hide_get, Bone_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_select = {
	{(PropertyRNA *)&rna_Bone_select_head, (PropertyRNA *)&rna_Bone_hide,
	-1, "select", 1, 1, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Bone_select_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_select_get, Bone_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_select_head = {
	{(PropertyRNA *)&rna_Bone_select_tail, (PropertyRNA *)&rna_Bone_select,
	-1, "select_head", 1, 1, 0, 0, 0, "Select Head",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_select_head_get, Bone_select_head_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Bone_select_tail = {
	{(PropertyRNA *)&rna_Bone_matrix, (PropertyRNA *)&rna_Bone_select_head,
	-1, "select_tail", 1, 1, 0, 0, 0, "Select Tail",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Bone_select_tail_get, Bone_select_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_Bone_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_matrix = {
	{(PropertyRNA *)&rna_Bone_matrix_local, (PropertyRNA *)&rna_Bone_select_tail,
	-1, "matrix", 2, 1, 0, 4, 0, "Bone Matrix",
	"3×3 bone matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {3, 3, 0}, 9,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bone_mat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_matrix_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_matrix_default
};

static float rna_Bone_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_matrix_local = {
	{(PropertyRNA *)&rna_Bone_tail, (PropertyRNA *)&rna_Bone_matrix,
	-1, "matrix_local", 2, 1, 0, 4, 0, "Bone Armature-Relative Matrix",
	"4×4 bone matrix relative to armature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, arm_mat), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_matrix_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_matrix_local_default
};

static float rna_Bone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_tail = {
	{(PropertyRNA *)&rna_Bone_tail_local, (PropertyRNA *)&rna_Bone_matrix_local,
	-1, "tail", 2, 1, 0, 4, 0, "Tail",
	"Location of tail end of the bone relative to its parent",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, tail), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_tail_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_tail_default
};

static float rna_Bone_tail_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_tail_local = {
	{(PropertyRNA *)&rna_Bone_head, (PropertyRNA *)&rna_Bone_tail,
	-1, "tail_local", 2, 1, 0, 4, 0, "Armature-Relative Tail",
	"Location of tail end of the bone relative to armature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, arm_tail), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_tail_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_tail_local_default
};

static float rna_Bone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_head = {
	{(PropertyRNA *)&rna_Bone_head_local, (PropertyRNA *)&rna_Bone_tail_local,
	-1, "head", 2, 1, 0, 4, 0, "Head",
	"Location of head end of the bone relative to its parent",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, head), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_head_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_head_default
};

static float rna_Bone_head_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_head_local = {
	{(PropertyRNA *)&rna_Bone_length, (PropertyRNA *)&rna_Bone_head,
	-1, "head_local", 2, 1, 0, 4, 0, "Armature-Relative Head",
	"Location of head end of the bone relative to armature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, arm_head), (RawPropertyType)5, nullptr},
	nullptr, nullptr, Bone_head_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_head_local_default
};

FloatPropertyRNA rna_Bone_length = {
	{nullptr, (PropertyRNA *)&rna_Bone_head_local,
	-1, "length", 2, 1, 0, 4, 0, "Length",
	"Length of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, length), (RawPropertyType)5, nullptr},
	Bone_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_Bone_evaluate_envelope_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_evaluate_envelope_point = {
	{(PropertyRNA *)&rna_Bone_evaluate_envelope_factor, nullptr,
	-1, "point", 3, 0, 1, 0, 0, "Point",
	"Position in 3d space to evaluate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_evaluate_envelope_point_default
};

FloatPropertyRNA rna_Bone_evaluate_envelope_factor = {
	{nullptr, (PropertyRNA *)&rna_Bone_evaluate_envelope_point,
	-1, "factor", 3, 0, 2, 0, 0, "Factor",
	"Envelope factor",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_Bone_evaluate_envelope_func = {
	{(FunctionRNA *)&rna_Bone_convert_local_to_pose_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Bone_evaluate_envelope_point, (PropertyRNA *)&rna_Bone_evaluate_envelope_factor}},
	"evaluate_envelope", 0, "Calculate bone envelope at given point",
	Bone_evaluate_envelope_call,
	(PropertyRNA *)&rna_Bone_evaluate_envelope_factor
};

static float rna_Bone_convert_local_to_pose_matrix_return_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_return = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix, nullptr,
	-1, "matrix_return", 3, 0, 2, 0, 0, "",
	"The transformed matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_matrix_return_default
};

static float rna_Bone_convert_local_to_pose_matrix_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_local, (PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_return,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_matrix_default
};

static float rna_Bone_convert_local_to_pose_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_local = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix, (PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix,
	-1, "matrix_local", 3, 0, 1, 0, 0, "",
	"The custom rest matrix of this bone (Bone.matrix_local)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_matrix_local_default
};

static float rna_Bone_convert_local_to_pose_parent_matrix_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix_local, (PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_local,
	-1, "parent_matrix", 3, 0, 0, 0, 0, "",
	"The custom pose matrix of the parent bone (PoseBone.matrix)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_parent_matrix_default
};

static float rna_Bone_convert_local_to_pose_parent_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix_local = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_invert, (PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix,
	-1, "parent_matrix_local", 3, 0, 0, 0, 0, "",
	"The custom rest matrix of the parent bone (Bone.matrix_local)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_parent_matrix_local_default
};

BoolPropertyRNA rna_Bone_convert_local_to_pose_invert = {
	{nullptr, (PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix_local,
	-1, "invert", 3, 0, 0, 0, 0, "",
	"Convert from Pose to Local space",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Bone_convert_local_to_pose_func = {
	{(FunctionRNA *)&rna_Bone_MatrixFromAxisRoll_func, (FunctionRNA *)&rna_Bone_evaluate_envelope_func,
	nullptr,
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_return, (PropertyRNA *)&rna_Bone_convert_local_to_pose_invert}},
	"convert_local_to_pose", 0, "Transform a matrix from Local to Pose space (or back), taking into account options like Inherit Scale and Local Location. Unlike Object.convert_space, this uses custom rest and pose matrices provided by the caller. If the parent matrices are omitted, the bone is assumed to have no parent.",
	Bone_convert_local_to_pose_call,
	nullptr
};

static float rna_Bone_MatrixFromAxisRoll_axis_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_axis = {
	{(PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_roll, nullptr,
	-1, "axis", 262147, 0, 1, 0, 0, "",
	"The main axis of the bone (tail - head)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_MatrixFromAxisRoll_axis_default
};

FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_roll = {
	{(PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_result_matrix, (PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_axis,
	-1, "roll", 3, 0, 1, 0, 0, "",
	"The roll of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_Bone_MatrixFromAxisRoll_result_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_result_matrix = {
	{nullptr, (PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_roll,
	-1, "result_matrix", 3, 0, 2, 0, 0, "",
	"The resulting orientation matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {3, 3, 0}, 9,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_MatrixFromAxisRoll_result_matrix_default
};

FunctionRNA rna_Bone_MatrixFromAxisRoll_func = {
	{(FunctionRNA *)&rna_Bone_AxisRollFromMatrix_func, (FunctionRNA *)&rna_Bone_convert_local_to_pose_func,
	nullptr,
	{(PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_axis, (PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_result_matrix}},
	"MatrixFromAxisRoll", 1, "Convert the axis + roll representation to a matrix",
	Bone_MatrixFromAxisRoll_call,
	nullptr
};

static float rna_Bone_AxisRollFromMatrix_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_matrix = {
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_axis, nullptr,
	-1, "matrix", 262147, 0, 1, 0, 0, "",
	"The orientation matrix of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {3, 3, 0}, 9,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_AxisRollFromMatrix_matrix_default
};

static float rna_Bone_AxisRollFromMatrix_axis_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_axis = {
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_axis, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_matrix,
	-1, "axis", 3, 0, 0, 0, 0, "",
	"The optional override for the axis (finds closest approximation for the matrix)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_AxisRollFromMatrix_axis_default
};

static float rna_Bone_AxisRollFromMatrix_result_axis_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_axis = {
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_roll, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_axis,
	-1, "result_axis", 3, 0, 2, 0, 0, "",
	"The main axis of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_AxisRollFromMatrix_result_axis_default
};

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_roll = {
	{nullptr, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_axis,
	-1, "result_roll", 3, 0, 2, 0, 0, "",
	"The roll of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

FunctionRNA rna_Bone_AxisRollFromMatrix_func = {
	{nullptr, (FunctionRNA *)&rna_Bone_MatrixFromAxisRoll_func,
	nullptr,
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_matrix, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_roll}},
	"AxisRollFromMatrix", 1, "Convert a rotational matrix to the axis + roll representation. Note that the resulting value of the roll may not be as expected if the matrix has shear or negative determinant.",
	Bone_AxisRollFromMatrix_call,
	nullptr
};

StructRNA RNA_Bone = {
	{(ContainerRNA *)&RNA_BoneCollectionMemberships, (ContainerRNA *)&RNA_BoneCollections,
	nullptr,
	{(PropertyRNA *)&rna_Bone_rna_properties, (PropertyRNA *)&rna_Bone_length}},
	"Bone", nullptr, nullptr, 516, nullptr, "Bone",
	"Bone in an Armature data-block",
	"*", 174,
	(PropertyRNA *)&rna_Bone_name, (PropertyRNA *)&rna_Bone_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_Bone_path,
	nullptr,
	nullptr,
	nullptr,
	rna_Bone_idprops,
	{(FunctionRNA *)&rna_Bone_evaluate_envelope_func, (FunctionRNA *)&rna_Bone_AxisRollFromMatrix_func}
};

/* Bone Collection Memberships */
CollectionPropertyRNA rna_BoneCollectionMemberships_rna_properties = {
	{(PropertyRNA *)&rna_BoneCollectionMemberships_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollectionMemberships_rna_properties_begin, BoneCollectionMemberships_rna_properties_next, BoneCollectionMemberships_rna_properties_end, BoneCollectionMemberships_rna_properties_get, nullptr, nullptr, BoneCollectionMemberships_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoneCollectionMemberships_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BoneCollectionMemberships_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoneCollectionMemberships_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FunctionRNA rna_BoneCollectionMemberships_clear_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "Remove this bone from all bone collections",
	BoneCollectionMemberships_clear_call,
	nullptr
};

StructRNA RNA_BoneCollectionMemberships = {
	{(ContainerRNA *)&RNA_EditBone, (ContainerRNA *)&RNA_Bone,
	nullptr,
	{(PropertyRNA *)&rna_BoneCollectionMemberships_rna_properties, (PropertyRNA *)&rna_BoneCollectionMemberships_rna_type}},
	"BoneCollectionMemberships", nullptr, nullptr, 516, nullptr, "Bone Collection Memberships",
	"The Bone Collections that contain this Bone",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BoneCollectionMemberships_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BoneCollectionMemberships_clear_func, (FunctionRNA *)&rna_BoneCollectionMemberships_clear_func}
};

/* Edit Bone */
CollectionPropertyRNA rna_EditBone_rna_properties = {
	{(PropertyRNA *)&rna_EditBone_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_rna_properties_begin, EditBone_rna_properties_next, EditBone_rna_properties_end, EditBone_rna_properties_get, nullptr, nullptr, EditBone_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_EditBone_rna_type = {
	{(PropertyRNA *)&rna_EditBone_collections, (PropertyRNA *)&rna_EditBone_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_EditBone_collections = {
	{(PropertyRNA *)&rna_EditBone_parent, (PropertyRNA *)&rna_EditBone_rna_type,
	-1, "collections", 128, 0, 0, 0, 0, "Collections",
	"Bone Collections that contain this bone",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_collections_begin, EditBone_collections_next, EditBone_collections_end, EditBone_collections_get, nullptr, nullptr, nullptr, nullptr, &RNA_BoneCollection
};

PointerPropertyRNA rna_EditBone_parent = {
	{(PropertyRNA *)&rna_EditBone_roll, (PropertyRNA *)&rna_EditBone_collections,
	-1, "parent", 8388609, 0, 0, 0, 0, "Parent",
	"Parent edit bone (in same Armature)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_parent_get, EditBone_parent_set, nullptr, nullptr,&RNA_EditBone
};

FloatPropertyRNA rna_EditBone_roll = {
	{(PropertyRNA *)&rna_EditBone_head, (PropertyRNA *)&rna_EditBone_parent,
	-1, "roll", 1, 0, 0, 0, 0, "Roll",
	"Bone rotation around head-tail axis",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_roll_get, EditBone_roll_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

static float rna_EditBone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_head = {
	{(PropertyRNA *)&rna_EditBone_tail, (PropertyRNA *)&rna_EditBone_roll,
	-1, "head", 1, 0, 0, 0, 0, "Head",
	"Location of head end of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_head_get, EditBone_head_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_EditBone_head_default
};

static float rna_EditBone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_tail = {
	{(PropertyRNA *)&rna_EditBone_length, (PropertyRNA *)&rna_EditBone_head,
	-1, "tail", 1, 0, 0, 0, 0, "Tail",
	"Location of tail end of the bone",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_tail_get, EditBone_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_EditBone_tail_default
};

FloatPropertyRNA rna_EditBone_length = {
	{(PropertyRNA *)&rna_EditBone_name, (PropertyRNA *)&rna_EditBone_tail,
	-1, "length", 1, 0, 0, 0, 0, "Length",
	"Length of the bone. Changing moves the tail end",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_length_get, EditBone_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

StringPropertyRNA rna_EditBone_name = {
	{(PropertyRNA *)&rna_EditBone_color, (PropertyRNA *)&rna_EditBone_length,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Bone_update_renamed, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_name_get, EditBone_name_length, EditBone_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

PointerPropertyRNA rna_EditBone_color = {
	{(PropertyRNA *)&rna_EditBone_use_connect, (PropertyRNA *)&rna_EditBone_name,
	-1, "color", 8388608, 1, 0, 0, 0, "color",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_color_get, nullptr, nullptr, nullptr,&RNA_BoneColor
};

BoolPropertyRNA rna_EditBone_use_connect = {
	{(PropertyRNA *)&rna_EditBone_use_inherit_rotation, (PropertyRNA *)&rna_EditBone_color,
	-1, "use_connect", 3, 1, 0, 0, 0, "Connected",
	"When bone has a parent, bone\'s head is stuck to the parent\'s tail",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_connect_get, EditBone_use_connect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_use_inherit_rotation = {
	{(PropertyRNA *)&rna_EditBone_use_envelope_multiply, (PropertyRNA *)&rna_EditBone_use_connect,
	-1, "use_inherit_rotation", 3, 1, 0, 0, 0, "Inherit Rotation",
	"Bone inherits rotation or scale from parent bone",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_inherit_rotation_get, EditBone_use_inherit_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_use_envelope_multiply = {
	{(PropertyRNA *)&rna_EditBone_use_deform, (PropertyRNA *)&rna_EditBone_use_inherit_rotation,
	-1, "use_envelope_multiply", 3, 1, 0, 0, 0, "Multiply Vertex Group with Envelope",
	"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_envelope_multiply_get, EditBone_use_envelope_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_use_deform = {
	{(PropertyRNA *)&rna_EditBone_inherit_scale, (PropertyRNA *)&rna_EditBone_use_envelope_multiply,
	-1, "use_deform", 3, 1, 0, 0, 0, "Deform",
	"Enable Bone to deform geometry",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_deform_get, EditBone_use_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_EditBone_inherit_scale_items[7] = {
	{0, "FULL", 0, "Full", "Inherit all effects of parent scaling"},
	{1, "FIX_SHEAR", 0, "Fix Shear", "Inherit scaling, but remove shearing of the child in the rest orientation"},
	{5, "ALIGNED", 0, "Aligned", "Rotate non-uniform parent scaling to align with the child, applying parent X scale to child X axis, and so forth"},
	{2, "AVERAGE", 0, "Average", "Inherit uniform scaling representing the overall change in the volume of the parent"},
	{3, "NONE", 0, "None", "Completely ignore parent scaling"},
	{4, "NONE_LEGACY", 0, "None (Legacy)", "Ignore parent scaling without compensating for parent shear. Replicates the effect of disabling the original Inherit Scale checkbox"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_EditBone_inherit_scale = {
	{(PropertyRNA *)&rna_EditBone_use_local_location, (PropertyRNA *)&rna_EditBone_use_deform,
	-1, "inherit_scale", 3, 1, 0, 0, 0, "Inherit Scale",
	"Specifies how the bone inherits scaling from the parent bone",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_inherit_scale_get, EditBone_inherit_scale_set, nullptr, nullptr, nullptr, rna_EditBone_inherit_scale_items, 6, 0
};

BoolPropertyRNA rna_EditBone_use_local_location = {
	{(PropertyRNA *)&rna_EditBone_use_relative_parent, (PropertyRNA *)&rna_EditBone_inherit_scale,
	-1, "use_local_location", 3, 1, 0, 0, 0, "Local Location",
	"Bone location is set in local space",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_local_location_get, EditBone_use_local_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_use_relative_parent = {
	{(PropertyRNA *)&rna_EditBone_show_wire, (PropertyRNA *)&rna_EditBone_use_local_location,
	-1, "use_relative_parent", 3, 1, 0, 0, 0, "Relative Parenting",
	"Object children will use relative transform, like deform",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_relative_parent_get, EditBone_use_relative_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_show_wire = {
	{(PropertyRNA *)&rna_EditBone_use_cyclic_offset, (PropertyRNA *)&rna_EditBone_use_relative_parent,
	-1, "show_wire", 3, 1, 0, 0, 0, "Display Wire",
	"Bone is always displayed in wireframe regardless of viewport shading mode (useful for non-obstructive custom bone shapes)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_show_wire_get, EditBone_show_wire_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_use_cyclic_offset = {
	{(PropertyRNA *)&rna_EditBone_hide_select, (PropertyRNA *)&rna_EditBone_show_wire,
	-1, "use_cyclic_offset", 3, 1, 0, 0, 0, "Cyclic Offset",
	"When bone doesn\'t have a parent, it receives cyclic offset effects (Deprecated)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_cyclic_offset_get, EditBone_use_cyclic_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_hide_select = {
	{(PropertyRNA *)&rna_EditBone_envelope_distance, (PropertyRNA *)&rna_EditBone_use_cyclic_offset,
	-1, "hide_select", 3, 1, 0, 0, 0, "Selectable",
	"Bone is able to be selected",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_hide_select_get, EditBone_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_EditBone_envelope_distance = {
	{(PropertyRNA *)&rna_EditBone_envelope_weight, (PropertyRNA *)&rna_EditBone_hide_select,
	-1, "envelope_distance", 3, 1, 0, 0, 0, "Envelope Deform Distance",
	"Bone deformation distance (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_envelope_distance_get, EditBone_envelope_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_envelope_weight = {
	{(PropertyRNA *)&rna_EditBone_head_radius, (PropertyRNA *)&rna_EditBone_envelope_distance,
	-1, "envelope_weight", 3, 1, 0, 0, 0, "Envelope Deform Weight",
	"Bone deformation weight (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_envelope_weight_get, EditBone_envelope_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_head_radius = {
	{(PropertyRNA *)&rna_EditBone_tail_radius, (PropertyRNA *)&rna_EditBone_envelope_weight,
	-1, "head_radius", 3, 1, 0, 0, 0, "Envelope Head Radius",
	"Radius of head of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_head_radius_get, EditBone_head_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_tail_radius = {
	{(PropertyRNA *)&rna_EditBone_bbone_segments, (PropertyRNA *)&rna_EditBone_head_radius,
	-1, "tail_radius", 3, 1, 0, 0, 0, "Envelope Tail Radius",
	"Radius of tail of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_tail_radius_get, EditBone_tail_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_EditBone_bbone_segments = {
	{(PropertyRNA *)&rna_EditBone_bbone_mapping_mode, (PropertyRNA *)&rna_EditBone_tail_radius,
	-1, "bbone_segments", 3, 1, 0, 0, 0, "B-Bone Segments",
	"Number of subdivisions of bone (for B-Bones only)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_segments_get, EditBone_bbone_segments_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 32, 1, 32, 1, 0, nullptr
};

static const EnumPropertyItem rna_EditBone_bbone_mapping_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "Fast mapping that is good for most situations, but ignores the rest pose curvature of the B-Bone"},
	{1, "CURVED", 0, "Curved", "Slower mapping that gives better deformation for B-Bones that are sharply curved in rest pose"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_EditBone_bbone_mapping_mode = {
	{(PropertyRNA *)&rna_EditBone_bbone_x, (PropertyRNA *)&rna_EditBone_bbone_segments,
	-1, "bbone_mapping_mode", 1, 1, 0, 0, 0, "B-Bone Vertex Mapping Mode",
	"Selects how the vertices are mapped to B-Bone segments based on their position",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_mapping_mode_get, EditBone_bbone_mapping_mode_set, nullptr, nullptr, nullptr, rna_EditBone_bbone_mapping_mode_items, 2, 0
};

FloatPropertyRNA rna_EditBone_bbone_x = {
	{(PropertyRNA *)&rna_EditBone_bbone_z, (PropertyRNA *)&rna_EditBone_bbone_mapping_mode,
	-1, "bbone_x", 3, 1, 0, 0, 0, "B-Bone Display X Width",
	"B-Bone X size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_x_get, EditBone_bbone_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_z = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_type_start, (PropertyRNA *)&rna_EditBone_bbone_x,
	-1, "bbone_z", 3, 1, 0, 0, 0, "B-Bone Display Z Width",
	"B-Bone Z size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_z_get, EditBone_bbone_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

static const EnumPropertyItem rna_EditBone_bbone_handle_type_start_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_EditBone_bbone_handle_type_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_custom_handle_start, (PropertyRNA *)&rna_EditBone_bbone_z,
	-1, "bbone_handle_type_start", 1, 1, 0, 0, 0, "B-Bone Start Handle Type",
	"Selects how the start handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_handle_type_start_get, EditBone_bbone_handle_type_start_set, nullptr, nullptr, nullptr, rna_EditBone_bbone_handle_type_start_items, 4, 0
};

PointerPropertyRNA rna_EditBone_bbone_custom_handle_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_start, (PropertyRNA *)&rna_EditBone_bbone_handle_type_start,
	-1, "bbone_custom_handle_start", 8388737, 3, 0, 0, 0, "B-Bone Start Handle",
	"Bone that serves as the start handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_custom_handle_start_get, EditBone_bbone_custom_handle_start_set, nullptr, nullptr,&RNA_EditBone
};

static bool rna_EditBone_bbone_handle_use_scale_start_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_start, (PropertyRNA *)&rna_EditBone_bbone_custom_handle_start,
	-1, "bbone_handle_use_scale_start", 3, 1, 0, 0, 0, "Start Handle Scale",
	"Multiply B-Bone Scale In channels by the local scale values of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_bbone_handle_use_scale_start_get, EditBone_bbone_handle_use_scale_start_set, nullptr, nullptr, nullptr, nullptr, 0, rna_EditBone_bbone_handle_use_scale_start_default
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_type_end, (PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_start,
	-1, "bbone_handle_use_ease_start", 3, 1, 0, 0, 0, "Start Handle Ease",
	"Multiply the B-Bone Ease In channel by the local Y scale value of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_handle_use_ease_start_get, EditBone_bbone_handle_use_ease_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_EditBone_bbone_handle_type_end_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_EditBone_bbone_handle_type_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_custom_handle_end, (PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_start,
	-1, "bbone_handle_type_end", 1, 1, 0, 0, 0, "B-Bone End Handle Type",
	"Selects how the end handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_handle_type_end_get, EditBone_bbone_handle_type_end_set, nullptr, nullptr, nullptr, rna_EditBone_bbone_handle_type_end_items, 4, 0
};

PointerPropertyRNA rna_EditBone_bbone_custom_handle_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_end, (PropertyRNA *)&rna_EditBone_bbone_handle_type_end,
	-1, "bbone_custom_handle_end", 8388737, 3, 0, 0, 0, "B-Bone End Handle",
	"Bone that serves as the end handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_custom_handle_end_get, EditBone_bbone_custom_handle_end_set, nullptr, nullptr,&RNA_EditBone
};

static bool rna_EditBone_bbone_handle_use_scale_end_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_end, (PropertyRNA *)&rna_EditBone_bbone_custom_handle_end,
	-1, "bbone_handle_use_scale_end", 3, 1, 0, 0, 0, "End Handle Scale",
	"Multiply B-Bone Scale Out channels by the local scale values of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_bbone_handle_use_scale_end_get, EditBone_bbone_handle_use_scale_end_set, nullptr, nullptr, nullptr, nullptr, 0, rna_EditBone_bbone_handle_use_scale_end_default
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_rollin, (PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_end,
	-1, "bbone_handle_use_ease_end", 3, 1, 0, 0, 0, "End Handle Ease",
	"Multiply the B-Bone Ease Out channel by the local Y scale value of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_handle_use_ease_end_get, EditBone_bbone_handle_use_ease_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_rollin = {
	{(PropertyRNA *)&rna_EditBone_bbone_rollout, (PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_end,
	-1, "bbone_rollin", 3, 0, 0, 0, 0, "Roll In",
	"Roll offset for the start of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_rollin_get, EditBone_bbone_rollin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_rollout = {
	{(PropertyRNA *)&rna_EditBone_use_endroll_as_inroll, (PropertyRNA *)&rna_EditBone_bbone_rollin,
	-1, "bbone_rollout", 3, 0, 0, 0, 0, "Roll Out",
	"Roll offset for the end of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_rollout_get, EditBone_bbone_rollout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, nullptr
};

BoolPropertyRNA rna_EditBone_use_endroll_as_inroll = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveinx, (PropertyRNA *)&rna_EditBone_bbone_rollout,
	-1, "use_endroll_as_inroll", 1, 0, 0, 0, 0, "Inherit End Roll",
	"Add Roll Out of the Start Handle bone to the Roll In value",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_endroll_as_inroll_get, EditBone_use_endroll_as_inroll_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_curveinx = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveinz, (PropertyRNA *)&rna_EditBone_use_endroll_as_inroll,
	-1, "bbone_curveinx", 3, 0, 0, 0, 0, "In X",
	"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_curveinx_get, EditBone_bbone_curveinx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_curveinz = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveoutx, (PropertyRNA *)&rna_EditBone_bbone_curveinx,
	-1, "bbone_curveinz", 3, 0, 0, 0, 0, "In Z",
	"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_curveinz_get, EditBone_bbone_curveinz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_curveoutx = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveoutz, (PropertyRNA *)&rna_EditBone_bbone_curveinz,
	-1, "bbone_curveoutx", 3, 0, 0, 0, 0, "Out X",
	"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_curveoutx_get, EditBone_bbone_curveoutx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_curveoutz = {
	{(PropertyRNA *)&rna_EditBone_bbone_easein, (PropertyRNA *)&rna_EditBone_bbone_curveoutx,
	-1, "bbone_curveoutz", 3, 0, 0, 0, 0, "Out Z",
	"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_curveoutz_get, EditBone_bbone_curveoutz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_easein = {
	{(PropertyRNA *)&rna_EditBone_bbone_easeout, (PropertyRNA *)&rna_EditBone_bbone_curveoutz,
	-1, "bbone_easein", 3, 0, 0, 0, 0, "Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0, "Armature",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_easein_get, EditBone_bbone_easein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_EditBone_bbone_easeout = {
	{(PropertyRNA *)&rna_EditBone_use_scale_easing, (PropertyRNA *)&rna_EditBone_bbone_easein,
	-1, "bbone_easeout", 3, 0, 0, 0, 0, "Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0, "Armature",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_bbone_easeout_get, EditBone_bbone_easeout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, nullptr
};

BoolPropertyRNA rna_EditBone_use_scale_easing = {
	{(PropertyRNA *)&rna_EditBone_bbone_scalein, (PropertyRNA *)&rna_EditBone_bbone_easeout,
	-1, "use_scale_easing", 3, 0, 0, 0, 0, "Scale Easing",
	"Multiply the final easing values by the Scale In/Out Y factors",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_use_scale_easing_get, EditBone_use_scale_easing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_EditBone_bbone_scalein_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_EditBone_bbone_scalein = {
	{(PropertyRNA *)&rna_EditBone_bbone_scaleout, (PropertyRNA *)&rna_EditBone_use_scale_easing,
	-1, "bbone_scalein", 67108867, 0, 0, 0, 0, "Scale In",
	"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_bbone_scalein_get, EditBone_bbone_scalein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_bbone_scalein_default
};

static float rna_EditBone_bbone_scaleout_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_EditBone_bbone_scaleout = {
	{(PropertyRNA *)&rna_EditBone_hide, (PropertyRNA *)&rna_EditBone_bbone_scalein,
	-1, "bbone_scaleout", 67108867, 0, 0, 0, 0, "Scale Out",
	"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_bbone_scaleout_get, EditBone_bbone_scaleout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_bbone_scaleout_default
};

BoolPropertyRNA rna_EditBone_hide = {
	{(PropertyRNA *)&rna_EditBone_lock, (PropertyRNA *)&rna_EditBone_bbone_scaleout,
	-1, "hide", 1, 0, 0, 0, 0, "Hide",
	"Bone is not visible when in Edit Mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_hide_get, EditBone_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_lock = {
	{(PropertyRNA *)&rna_EditBone_select, (PropertyRNA *)&rna_EditBone_hide,
	-1, "lock", 1, 0, 0, 0, 0, "Lock",
	"Bone is not able to be transformed when in Edit Mode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_lock_get, EditBone_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_select = {
	{(PropertyRNA *)&rna_EditBone_select_head, (PropertyRNA *)&rna_EditBone_lock,
	-1, "select", 1, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_select_get, EditBone_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_select_head = {
	{(PropertyRNA *)&rna_EditBone_select_tail, (PropertyRNA *)&rna_EditBone_select,
	-1, "select_head", 1, 0, 0, 0, 0, "Head Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_select_head_get, EditBone_select_head_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_EditBone_select_tail = {
	{(PropertyRNA *)&rna_EditBone_matrix, (PropertyRNA *)&rna_EditBone_select_head,
	-1, "select_tail", 1, 0, 0, 0, 0, "Tail Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	EditBone_select_tail_get, EditBone_select_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_EditBone_matrix_default[16] = {
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

FloatPropertyRNA rna_EditBone_matrix = {
	{nullptr, (PropertyRNA *)&rna_EditBone_select_tail,
	-1, "matrix", 8388611, 0, 0, 0, 0, "Edit Bone Matrix",
	"Matrix combining location and rotation of the bone (head position, direction and roll), in armature space (does not include/support bone\'s length/size)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, EditBone_matrix_get, EditBone_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_EditBone_matrix_default
};

static float rna_EditBone_align_roll_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_align_roll_vector = {
	{nullptr, nullptr,
	-1, "vector", 3, 0, 1, 0, 0, "Vector",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_align_roll_vector_default
};

FunctionRNA rna_EditBone_align_roll_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_EditBone_align_roll_vector, (PropertyRNA *)&rna_EditBone_align_roll_vector}},
	"align_roll", 0, "Align the bone to a local-space roll so the Z axis points in the direction of the vector given",
	EditBone_align_roll_call,
	nullptr
};

StructRNA RNA_EditBone = {
	{(ContainerRNA *)&RNA_Attribute, (ContainerRNA *)&RNA_BoneCollectionMemberships,
	nullptr,
	{(PropertyRNA *)&rna_EditBone_rna_properties, (PropertyRNA *)&rna_EditBone_matrix}},
	"EditBone", nullptr, nullptr, 516, nullptr, "Edit Bone",
	"Edit mode bone in an armature data-block",
	"*", 174,
	(PropertyRNA *)&rna_EditBone_name, (PropertyRNA *)&rna_EditBone_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rna_EditBone_idprops,
	{(FunctionRNA *)&rna_EditBone_align_roll_func, (FunctionRNA *)&rna_EditBone_align_roll_func}
};

