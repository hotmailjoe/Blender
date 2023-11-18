
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

#include "rna_boid.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C BoolPropertyRNA rna_BoidRule_use_on_land;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_on_land;

RNA_EXTERN_C PointerPropertyRNA rna_BoidRuleGoal_object;
RNA_EXTERN_C BoolPropertyRNA rna_BoidRuleGoal_use_predict;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_on_land;

RNA_EXTERN_C PointerPropertyRNA rna_BoidRuleAvoid_object;
RNA_EXTERN_C BoolPropertyRNA rna_BoidRuleAvoid_use_predict;
RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleAvoid_fear_factor;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_on_land;

RNA_EXTERN_C BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid;
RNA_EXTERN_C BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision;
RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_on_land;

RNA_EXTERN_C PointerPropertyRNA rna_BoidRuleFollowLeader_object;
RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleFollowLeader_distance;
RNA_EXTERN_C IntPropertyRNA rna_BoidRuleFollowLeader_queue_count;
RNA_EXTERN_C BoolPropertyRNA rna_BoidRuleFollowLeader_use_line;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_on_land;

RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleAverageSpeed_wander;
RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleAverageSpeed_level;
RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleAverageSpeed_speed;


RNA_EXTERN_C_OR_EXTERN CollectionPropertyRNA rna_BoidRule_rna_properties;
RNA_EXTERN_C_OR_EXTERN PointerPropertyRNA rna_BoidRule_rna_type;
RNA_EXTERN_C_OR_EXTERN StringPropertyRNA rna_BoidRule_name;
RNA_EXTERN_C_OR_EXTERN EnumPropertyRNA rna_BoidRule_type;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_in_air;
RNA_EXTERN_C_OR_EXTERN BoolPropertyRNA rna_BoidRule_use_on_land;

RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleFight_distance;
RNA_EXTERN_C FloatPropertyRNA rna_BoidRuleFight_flee_distance;


RNA_EXTERN_C CollectionPropertyRNA rna_BoidState_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoidState_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_BoidState_name;
RNA_EXTERN_C EnumPropertyRNA rna_BoidState_ruleset_type;
RNA_EXTERN_C CollectionPropertyRNA rna_BoidState_rules;
RNA_EXTERN_C PointerPropertyRNA rna_BoidState_active_boid_rule;
RNA_EXTERN_C IntPropertyRNA rna_BoidState_active_boid_rule_index;
RNA_EXTERN_C FloatPropertyRNA rna_BoidState_rule_fuzzy;
RNA_EXTERN_C FloatPropertyRNA rna_BoidState_volume;
RNA_EXTERN_C FloatPropertyRNA rna_BoidState_falloff;


RNA_EXTERN_C CollectionPropertyRNA rna_BoidSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BoidSettings_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_smooth;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_bank;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_pitch;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_height;
RNA_EXTERN_C CollectionPropertyRNA rna_BoidSettings_states;
RNA_EXTERN_C PointerPropertyRNA rna_BoidSettings_active_boid_state;
RNA_EXTERN_C IntPropertyRNA rna_BoidSettings_active_boid_state_index;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_health;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_strength;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_aggression;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_accuracy;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_range;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_air_speed_min;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_air_speed_max;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_air_acc_max;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_air_ave_max;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_air_personal_space;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_jump_speed;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_speed_max;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_acc_max;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_ave_max;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_personal_space;
RNA_EXTERN_C FloatPropertyRNA rna_BoidSettings_land_stick_force;
RNA_EXTERN_C BoolPropertyRNA rna_BoidSettings_use_flight;
RNA_EXTERN_C BoolPropertyRNA rna_BoidSettings_use_land;
RNA_EXTERN_C BoolPropertyRNA rna_BoidSettings_use_climb;

static PointerRNA BoidRule_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoidRule_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidRule_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidRule_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoidRule_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoidRule_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoidRule_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoidRule_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoidRule_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void BoidRule_name_get(PointerRNA *ptr, char *value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    BLI_assert(strlen(data->name) < 32);
    strcpy(value, data->name);
}

RNA_EXTERN_C int BoidRule_name_length(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void BoidRule_name_set(PointerRNA *ptr, const char *value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 32);
}

RNA_EXTERN_C int BoidRule_type_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (int)(data->type);
}

RNA_EXTERN_C bool BoidRule_use_in_air_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void BoidRule_use_in_air_set(PointerRNA *ptr, bool value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C bool BoidRule_use_on_land_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

RNA_EXTERN_C void BoidRule_use_on_land_set(PointerRNA *ptr, bool value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

RNA_EXTERN_C PointerRNA BoidRuleGoal_object_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

RNA_EXTERN_C void BoidRuleGoal_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

RNA_EXTERN_C bool BoidRuleGoal_use_predict_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (((data->options) & 1) != 0);
}

RNA_EXTERN_C void BoidRuleGoal_use_predict_set(PointerRNA *ptr, bool value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

RNA_EXTERN_C PointerRNA BoidRuleAvoid_object_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

RNA_EXTERN_C void BoidRuleAvoid_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

RNA_EXTERN_C bool BoidRuleAvoid_use_predict_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (((data->options) & 1) != 0);
}

RNA_EXTERN_C void BoidRuleAvoid_use_predict_set(PointerRNA *ptr, bool value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

RNA_EXTERN_C float BoidRuleAvoid_fear_factor_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (float)(data->fear_factor);
}

RNA_EXTERN_C void BoidRuleAvoid_fear_factor_set(PointerRNA *ptr, float value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
#ifdef __cplusplus
    data->fear_factor = (std::remove_reference_t<decltype(data->fear_factor)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->fear_factor = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C bool BoidRuleAvoidCollision_use_avoid_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (((data->options) & 1) != 0);
}

RNA_EXTERN_C void BoidRuleAvoidCollision_use_avoid_set(PointerRNA *ptr, bool value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

RNA_EXTERN_C bool BoidRuleAvoidCollision_use_avoid_collision_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (((data->options) & 2) != 0);
}

RNA_EXTERN_C void BoidRuleAvoidCollision_use_avoid_collision_set(PointerRNA *ptr, bool value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    if (value) { data->options |= 2; }
    else { data->options &= ~2; }
}

RNA_EXTERN_C float BoidRuleAvoidCollision_look_ahead_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (float)(data->look_ahead);
}

RNA_EXTERN_C void BoidRuleAvoidCollision_look_ahead_set(PointerRNA *ptr, float value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
#ifdef __cplusplus
    data->look_ahead = (std::remove_reference_t<decltype(data->look_ahead)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->look_ahead = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C PointerRNA BoidRuleFollowLeader_object_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

RNA_EXTERN_C void BoidRuleFollowLeader_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

RNA_EXTERN_C float BoidRuleFollowLeader_distance_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (float)(data->distance);
}

RNA_EXTERN_C void BoidRuleFollowLeader_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
#ifdef __cplusplus
    data->distance = (std::remove_reference_t<decltype(data->distance)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->distance = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C int BoidRuleFollowLeader_queue_count_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (int)(data->queue_size);
}

RNA_EXTERN_C void BoidRuleFollowLeader_queue_count_set(PointerRNA *ptr, int value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
#ifdef __cplusplus
    data->queue_size = (std::remove_reference_t<decltype(data->queue_size)>)CLAMPIS(value, 0, 100);
#else
    data->queue_size = CLAMPIS(value, 0, 100);
#endif
}

RNA_EXTERN_C bool BoidRuleFollowLeader_use_line_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (((data->options) & 1) != 0);
}

RNA_EXTERN_C void BoidRuleFollowLeader_use_line_set(PointerRNA *ptr, bool value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

RNA_EXTERN_C float BoidRuleAverageSpeed_wander_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->wander);
}

RNA_EXTERN_C void BoidRuleAverageSpeed_wander_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
#ifdef __cplusplus
    data->wander = (std::remove_reference_t<decltype(data->wander)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->wander = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidRuleAverageSpeed_level_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->level);
}

RNA_EXTERN_C void BoidRuleAverageSpeed_level_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
#ifdef __cplusplus
    data->level = (std::remove_reference_t<decltype(data->level)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->level = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidRuleAverageSpeed_speed_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->speed);
}

RNA_EXTERN_C void BoidRuleAverageSpeed_speed_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
#ifdef __cplusplus
    data->speed = (std::remove_reference_t<decltype(data->speed)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->speed = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidRuleFight_distance_get(PointerRNA *ptr)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    return (float)(data->distance);
}

RNA_EXTERN_C void BoidRuleFight_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
#ifdef __cplusplus
    data->distance = (std::remove_reference_t<decltype(data->distance)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->distance = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidRuleFight_flee_distance_get(PointerRNA *ptr)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    return (float)(data->flee_distance);
}

RNA_EXTERN_C void BoidRuleFight_flee_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
#ifdef __cplusplus
    data->flee_distance = (std::remove_reference_t<decltype(data->flee_distance)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->flee_distance = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

static PointerRNA BoidState_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoidState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidState_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidState_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoidState_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoidState_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoidState_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoidState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoidState_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void BoidState_name_get(PointerRNA *ptr, char *value)
{
    BoidState *data = (BoidState *)(ptr->data);
    BLI_assert(strlen(data->name) < 32);
    strcpy(value, data->name);
}

RNA_EXTERN_C int BoidState_name_length(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void BoidState_name_set(PointerRNA *ptr, const char *value)
{
    BoidState *data = (BoidState *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 32);
}

RNA_EXTERN_C int BoidState_ruleset_type_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (int)(data->ruleset_type);
}

RNA_EXTERN_C void BoidState_ruleset_type_set(PointerRNA *ptr, int value)
{
    BoidState *data = (BoidState *)(ptr->data);
#ifdef __cplusplus
    data->ruleset_type = (std::remove_reference_t<decltype(data->ruleset_type)>)value;
#else
    data->ruleset_type = value;
#endif
}

static PointerRNA BoidState_rules_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidRule, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BoidState_rules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidState_rules;

    rna_iterator_listbase_begin(iter, &data->rules, nullptr);

    if (iter->valid) {
        iter->ptr = BoidState_rules_get(iter);
    }
}

RNA_EXTERN_C void BoidState_rules_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BoidState_rules_get(iter);
    }
}

RNA_EXTERN_C void BoidState_rules_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoidState_rules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    BoidState_rules_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoidState_rules_get(&iter); }
    }

    BoidState_rules_end(&iter);

    return found;
}

RNA_EXTERN_C int BoidRule_name_length(PointerRNA *);
RNA_EXTERN_C void BoidRule_name_get(PointerRNA *, char *);

RNA_EXTERN_C int BoidState_rules_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoidState_rules_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoidRule_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoidRule_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                BoidRule_name_get(&iter.ptr, name);
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
        BoidState_rules_next(&iter);
    }
    BoidState_rules_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA BoidState_active_boid_rule_get(PointerRNA *ptr)
{
    return rna_BoidState_active_boid_rule_get(ptr);
}

RNA_EXTERN_C int BoidState_active_boid_rule_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoidState_active_boid_rule_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void BoidState_active_boid_rule_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoidState_active_boid_rule_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C float BoidState_rule_fuzzy_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->rule_fuzziness);
}

RNA_EXTERN_C void BoidState_rule_fuzzy_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
#ifdef __cplusplus
    data->rule_fuzziness = (std::remove_reference_t<decltype(data->rule_fuzziness)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->rule_fuzziness = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidState_volume_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->volume);
}

RNA_EXTERN_C void BoidState_volume_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
#ifdef __cplusplus
    data->volume = (std::remove_reference_t<decltype(data->volume)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->volume = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidState_falloff_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->falloff);
}

RNA_EXTERN_C void BoidState_falloff_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
#ifdef __cplusplus
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->falloff = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

static PointerRNA BoidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BoidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoidSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BoidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BoidSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float BoidSettings_land_smooth_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->landing_smoothness);
}

RNA_EXTERN_C void BoidSettings_land_smooth_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->landing_smoothness = (std::remove_reference_t<decltype(data->landing_smoothness)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->landing_smoothness = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_bank_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->banking);
}

RNA_EXTERN_C void BoidSettings_bank_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->banking = (std::remove_reference_t<decltype(data->banking)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->banking = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_pitch_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->pitch);
}

RNA_EXTERN_C void BoidSettings_pitch_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->pitch = (std::remove_reference_t<decltype(data->pitch)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->pitch = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_height_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->height);
}

RNA_EXTERN_C void BoidSettings_height_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->height = (std::remove_reference_t<decltype(data->height)>)CLAMPIS(value, 0.0f, 2.0f);
#else
    data->height = CLAMPIS(value, 0.0f, 2.0f);
#endif
}

static PointerRNA BoidSettings_states_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidState, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BoidSettings_states_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidSettings_states;

    rna_iterator_listbase_begin(iter, &data->states, nullptr);

    if (iter->valid) {
        iter->ptr = BoidSettings_states_get(iter);
    }
}

RNA_EXTERN_C void BoidSettings_states_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BoidSettings_states_get(iter);
    }
}

RNA_EXTERN_C void BoidSettings_states_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BoidSettings_states_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    BoidSettings_states_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoidSettings_states_get(&iter); }
    }

    BoidSettings_states_end(&iter);

    return found;
}

RNA_EXTERN_C int BoidState_name_length(PointerRNA *);
RNA_EXTERN_C void BoidState_name_get(PointerRNA *, char *);

RNA_EXTERN_C int BoidSettings_states_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoidSettings_states_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoidState_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoidState_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                BoidState_name_get(&iter.ptr, name);
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
        BoidSettings_states_next(&iter);
    }
    BoidSettings_states_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA BoidSettings_active_boid_state_get(PointerRNA *ptr)
{
    return rna_BoidSettings_active_boid_state_get(ptr);
}

RNA_EXTERN_C int BoidSettings_active_boid_state_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoidSettings_active_boid_state_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void BoidSettings_active_boid_state_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoidSettings_active_boid_state_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C float BoidSettings_health_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->health);
}

RNA_EXTERN_C void BoidSettings_health_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->health = (std::remove_reference_t<decltype(data->health)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->health = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_strength_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->strength);
}

RNA_EXTERN_C void BoidSettings_strength_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->strength = (std::remove_reference_t<decltype(data->strength)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->strength = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_aggression_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->aggression);
}

RNA_EXTERN_C void BoidSettings_aggression_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->aggression = (std::remove_reference_t<decltype(data->aggression)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->aggression = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_accuracy_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->accuracy);
}

RNA_EXTERN_C void BoidSettings_accuracy_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->accuracy = (std::remove_reference_t<decltype(data->accuracy)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->accuracy = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_range_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->range);
}

RNA_EXTERN_C void BoidSettings_range_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->range = (std::remove_reference_t<decltype(data->range)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->range = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_air_speed_min_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_min_speed);
}

RNA_EXTERN_C void BoidSettings_air_speed_min_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->air_min_speed = (std::remove_reference_t<decltype(data->air_min_speed)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->air_min_speed = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_air_speed_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_speed);
}

RNA_EXTERN_C void BoidSettings_air_speed_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->air_max_speed = (std::remove_reference_t<decltype(data->air_max_speed)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->air_max_speed = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_air_acc_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_acc);
}

RNA_EXTERN_C void BoidSettings_air_acc_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->air_max_acc = (std::remove_reference_t<decltype(data->air_max_acc)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->air_max_acc = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_air_ave_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_ave);
}

RNA_EXTERN_C void BoidSettings_air_ave_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->air_max_ave = (std::remove_reference_t<decltype(data->air_max_ave)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->air_max_ave = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_air_personal_space_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_personal_space);
}

RNA_EXTERN_C void BoidSettings_air_personal_space_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->air_personal_space = (std::remove_reference_t<decltype(data->air_personal_space)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->air_personal_space = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_land_jump_speed_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_jump_speed);
}

RNA_EXTERN_C void BoidSettings_land_jump_speed_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->land_jump_speed = (std::remove_reference_t<decltype(data->land_jump_speed)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->land_jump_speed = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_land_speed_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_speed);
}

RNA_EXTERN_C void BoidSettings_land_speed_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->land_max_speed = (std::remove_reference_t<decltype(data->land_max_speed)>)CLAMPIS(value, 0.0f, 100.0f);
#else
    data->land_max_speed = CLAMPIS(value, 0.0f, 100.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_land_acc_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_acc);
}

RNA_EXTERN_C void BoidSettings_land_acc_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->land_max_acc = (std::remove_reference_t<decltype(data->land_max_acc)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->land_max_acc = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_land_ave_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_ave);
}

RNA_EXTERN_C void BoidSettings_land_ave_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->land_max_ave = (std::remove_reference_t<decltype(data->land_max_ave)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->land_max_ave = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_land_personal_space_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_personal_space);
}

RNA_EXTERN_C void BoidSettings_land_personal_space_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->land_personal_space = (std::remove_reference_t<decltype(data->land_personal_space)>)CLAMPIS(value, 0.0f, 10.0f);
#else
    data->land_personal_space = CLAMPIS(value, 0.0f, 10.0f);
#endif
}

RNA_EXTERN_C float BoidSettings_land_stick_force_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_stick_force);
}

RNA_EXTERN_C void BoidSettings_land_stick_force_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
#ifdef __cplusplus
    data->land_stick_force = (std::remove_reference_t<decltype(data->land_stick_force)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->land_stick_force = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C bool BoidSettings_use_flight_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (((data->options) & 1) != 0);
}

RNA_EXTERN_C void BoidSettings_use_flight_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

RNA_EXTERN_C bool BoidSettings_use_land_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (((data->options) & 2) != 0);
}

RNA_EXTERN_C void BoidSettings_use_land_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options |= 2; }
    else { data->options &= ~2; }
}

RNA_EXTERN_C bool BoidSettings_use_climb_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (((data->options) & 4) != 0);
}

RNA_EXTERN_C void BoidSettings_use_climb_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options |= 4; }
    else { data->options &= ~4; }
}










/* Boid Rule */
CollectionPropertyRNA rna_BoidRule_rna_properties = {
	{(PropertyRNA *)&rna_BoidRule_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRule_rna_properties_begin, BoidRule_rna_properties_next, BoidRule_rna_properties_end, BoidRule_rna_properties_get, nullptr, nullptr, BoidRule_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoidRule_rna_type = {
	{(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRule_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BoidRule_name = {
	{(PropertyRNA *)&rna_BoidRule_type, (PropertyRNA *)&rna_BoidRule_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Boid rule name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {32, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRule_name_get, BoidRule_name_length, BoidRule_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 32, ""
};

EnumPropertyRNA rna_BoidRule_type = {
	{(PropertyRNA *)&rna_BoidRule_use_in_air, (PropertyRNA *)&rna_BoidRule_name,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRule, type), (RawPropertyType)0, nullptr},
	BoidRule_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_boidrule_type_items, 8, 1
};

BoolPropertyRNA rna_BoidRule_use_in_air = {
	{(PropertyRNA *)&rna_BoidRule_use_on_land, (PropertyRNA *)&rna_BoidRule_type,
	-1, "use_in_air", 3, 0, 0, 0, 0, "In Air",
	"Use rule when boid is flying",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRule_use_in_air_get, BoidRule_use_in_air_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BoidRule_use_on_land = {
	{nullptr, (PropertyRNA *)&rna_BoidRule_use_in_air,
	-1, "use_on_land", 3, 0, 0, 0, 0, "On Land",
	"Use rule when boid is on land",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRule_use_on_land_get, BoidRule_use_on_land_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BoidRule = {
	{(ContainerRNA *)&RNA_BoidRuleGoal, (ContainerRNA *)&RNA_AssetCatalogPath,
	nullptr,
	{(PropertyRNA *)&rna_BoidRule_rna_properties, (PropertyRNA *)&rna_BoidRule_use_on_land}},
	"BoidRule", nullptr, nullptr, 516, nullptr, "Boid Rule",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	nullptr,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Goal */
PointerPropertyRNA rna_BoidRuleGoal_object = {
	{(PropertyRNA *)&rna_BoidRuleGoal_use_predict, nullptr,
	-1, "object", 8388737, 0, 0, 0, 0, "Object",
	"Goal object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleGoal_object_get, BoidRuleGoal_object_set, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_BoidRuleGoal_use_predict = {
	{nullptr, (PropertyRNA *)&rna_BoidRuleGoal_object,
	-1, "use_predict", 3, 0, 0, 0, 0, "Predict",
	"Predict target movement",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleGoal_use_predict_get, BoidRuleGoal_use_predict_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BoidRuleGoal = {
	{(ContainerRNA *)&RNA_BoidRuleAvoid, (ContainerRNA *)&RNA_BoidRule,
	nullptr,
	{(PropertyRNA *)&rna_BoidRuleGoal_object, (PropertyRNA *)&rna_BoidRuleGoal_use_predict}},
	"BoidRuleGoal", nullptr, nullptr, 516, nullptr, "Goal",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Avoid */
PointerPropertyRNA rna_BoidRuleAvoid_object = {
	{(PropertyRNA *)&rna_BoidRuleAvoid_use_predict, nullptr,
	-1, "object", 8388737, 0, 0, 0, 0, "Object",
	"Object to avoid",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleAvoid_object_get, BoidRuleAvoid_object_set, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_BoidRuleAvoid_use_predict = {
	{(PropertyRNA *)&rna_BoidRuleAvoid_fear_factor, (PropertyRNA *)&rna_BoidRuleAvoid_object,
	-1, "use_predict", 3, 0, 0, 0, 0, "Predict",
	"Predict target movement",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleAvoid_use_predict_get, BoidRuleAvoid_use_predict_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_BoidRuleAvoid_fear_factor = {
	{nullptr, (PropertyRNA *)&rna_BoidRuleAvoid_use_predict,
	-1, "fear_factor", 3, 0, 0, 4, 0, "Fear Factor",
	"Avoid object if danger from it is above this threshold",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleGoalAvoid, fear_factor), (RawPropertyType)5, nullptr},
	BoidRuleAvoid_fear_factor_get, BoidRuleAvoid_fear_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_BoidRuleAvoid = {
	{(ContainerRNA *)&RNA_BoidRuleAvoidCollision, (ContainerRNA *)&RNA_BoidRuleGoal,
	nullptr,
	{(PropertyRNA *)&rna_BoidRuleAvoid_object, (PropertyRNA *)&rna_BoidRuleAvoid_fear_factor}},
	"BoidRuleAvoid", nullptr, nullptr, 516, nullptr, "Avoid",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Avoid Collision */
BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid = {
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid_collision, nullptr,
	-1, "use_avoid", 3, 0, 0, 0, 0, "Boids",
	"Avoid collision with other boids",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleAvoidCollision_use_avoid_get, BoidRuleAvoidCollision_use_avoid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision = {
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_look_ahead, (PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid,
	-1, "use_avoid_collision", 3, 0, 0, 0, 0, "Deflectors",
	"Avoid collision with deflector objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleAvoidCollision_use_avoid_collision_get, BoidRuleAvoidCollision_use_avoid_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead = {
	{nullptr, (PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid_collision,
	-1, "look_ahead", 3, 0, 0, 4, 0, "Look Ahead",
	"Time to look ahead in seconds",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAvoidCollision, look_ahead), (RawPropertyType)5, nullptr},
	BoidRuleAvoidCollision_look_ahead_get, BoidRuleAvoidCollision_look_ahead_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_BoidRuleAvoidCollision = {
	{(ContainerRNA *)&RNA_BoidRuleFollowLeader, (ContainerRNA *)&RNA_BoidRuleAvoid,
	nullptr,
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid, (PropertyRNA *)&rna_BoidRuleAvoidCollision_look_ahead}},
	"BoidRuleAvoidCollision", nullptr, nullptr, 516, nullptr, "Avoid Collision",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Follow Leader */
PointerPropertyRNA rna_BoidRuleFollowLeader_object = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_distance, nullptr,
	-1, "object", 8388737, 0, 0, 0, 0, "Object",
	"Follow this object instead of a boid",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleFollowLeader_object_get, BoidRuleFollowLeader_object_set, nullptr, nullptr,&RNA_Object
};

FloatPropertyRNA rna_BoidRuleFollowLeader_distance = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_queue_count, (PropertyRNA *)&rna_BoidRuleFollowLeader_object,
	-1, "distance", 3, 0, 0, 4, 0, "Distance",
	"Distance behind leader to follow",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFollowLeader, distance), (RawPropertyType)5, nullptr},
	BoidRuleFollowLeader_distance_get, BoidRuleFollowLeader_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_BoidRuleFollowLeader_queue_count = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_use_line, (PropertyRNA *)&rna_BoidRuleFollowLeader_distance,
	-1, "queue_count", 3, 0, 0, 4, 0, "Queue Size",
	"How many boids in a line",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFollowLeader, queue_size), (RawPropertyType)0, nullptr},
	BoidRuleFollowLeader_queue_count_get, BoidRuleFollowLeader_queue_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, 0, nullptr
};

BoolPropertyRNA rna_BoidRuleFollowLeader_use_line = {
	{nullptr, (PropertyRNA *)&rna_BoidRuleFollowLeader_queue_count,
	-1, "use_line", 3, 0, 0, 0, 0, "Line",
	"Follow leader in a line",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidRuleFollowLeader_use_line_get, BoidRuleFollowLeader_use_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BoidRuleFollowLeader = {
	{(ContainerRNA *)&RNA_BoidRuleAverageSpeed, (ContainerRNA *)&RNA_BoidRuleAvoidCollision,
	nullptr,
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_object, (PropertyRNA *)&rna_BoidRuleFollowLeader_use_line}},
	"BoidRuleFollowLeader", nullptr, nullptr, 516, nullptr, "Follow Leader",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Average Speed */
FloatPropertyRNA rna_BoidRuleAverageSpeed_wander = {
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_level, nullptr,
	-1, "wander", 3, 0, 0, 4, 0, "Wander",
	"How fast velocity\'s direction is randomized",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAverageSpeed, wander), (RawPropertyType)5, nullptr},
	BoidRuleAverageSpeed_wander_get, BoidRuleAverageSpeed_wander_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_level = {
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_speed, (PropertyRNA *)&rna_BoidRuleAverageSpeed_wander,
	-1, "level", 3, 0, 0, 4, 0, "Level",
	"How much velocity\'s z-component is kept constant",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAverageSpeed, level), (RawPropertyType)5, nullptr},
	BoidRuleAverageSpeed_level_get, BoidRuleAverageSpeed_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_speed = {
	{nullptr, (PropertyRNA *)&rna_BoidRuleAverageSpeed_level,
	-1, "speed", 3, 0, 0, 4, 0, "Speed",
	"Percentage of maximum speed",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAverageSpeed, speed), (RawPropertyType)5, nullptr},
	BoidRuleAverageSpeed_speed_get, BoidRuleAverageSpeed_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_BoidRuleAverageSpeed = {
	{(ContainerRNA *)&RNA_BoidRuleFight, (ContainerRNA *)&RNA_BoidRuleFollowLeader,
	nullptr,
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_wander, (PropertyRNA *)&rna_BoidRuleAverageSpeed_speed}},
	"BoidRuleAverageSpeed", nullptr, nullptr, 516, nullptr, "Average Speed",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Fight */
FloatPropertyRNA rna_BoidRuleFight_distance = {
	{(PropertyRNA *)&rna_BoidRuleFight_flee_distance, nullptr,
	-1, "distance", 3, 0, 0, 4, 0, "Fight Distance",
	"Attack boids at max this distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFight, distance), (RawPropertyType)5, nullptr},
	BoidRuleFight_distance_get, BoidRuleFight_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidRuleFight_flee_distance = {
	{nullptr, (PropertyRNA *)&rna_BoidRuleFight_distance,
	-1, "flee_distance", 3, 0, 0, 4, 0, "Flee Distance",
	"Flee to this distance",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFight, flee_distance), (RawPropertyType)5, nullptr},
	BoidRuleFight_flee_distance_get, BoidRuleFight_flee_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_BoidRuleFight = {
	{(ContainerRNA *)&RNA_BoidState, (ContainerRNA *)&RNA_BoidRuleAverageSpeed,
	nullptr,
	{(PropertyRNA *)&rna_BoidRuleFight_distance, (PropertyRNA *)&rna_BoidRuleFight_flee_distance}},
	"BoidRuleFight", nullptr, nullptr, 516, nullptr, "Fight",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	nullptr,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Boid State */
CollectionPropertyRNA rna_BoidState_rna_properties = {
	{(PropertyRNA *)&rna_BoidState_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidState_rna_properties_begin, BoidState_rna_properties_next, BoidState_rna_properties_end, BoidState_rna_properties_get, nullptr, nullptr, BoidState_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoidState_rna_type = {
	{(PropertyRNA *)&rna_BoidState_name, (PropertyRNA *)&rna_BoidState_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidState_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BoidState_name = {
	{(PropertyRNA *)&rna_BoidState_ruleset_type, (PropertyRNA *)&rna_BoidState_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Boid state name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {32, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidState_name_get, BoidState_name_length, BoidState_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 32, ""
};

static const EnumPropertyItem rna_BoidState_ruleset_type_items[4] = {
	{0, "FUZZY", 0, "Fuzzy", "Rules are gone through top to bottom (only the first rule which effect is above fuzziness threshold is evaluated)"},
	{1, "RANDOM", 0, "Random", "A random rule is selected for each boid"},
	{2, "AVERAGE", 0, "Average", "All rules are averaged"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BoidState_ruleset_type = {
	{(PropertyRNA *)&rna_BoidState_rules, (PropertyRNA *)&rna_BoidState_name,
	-1, "ruleset_type", 3, 0, 0, 4, 0, "Rule Evaluation",
	"How the rules in the list are evaluated",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, ruleset_type), (RawPropertyType)0, nullptr},
	BoidState_ruleset_type_get, BoidState_ruleset_type_set, nullptr, nullptr, nullptr, rna_BoidState_ruleset_type_items, 3, 0
};

CollectionPropertyRNA rna_BoidState_rules = {
	{(PropertyRNA *)&rna_BoidState_active_boid_rule, (PropertyRNA *)&rna_BoidState_ruleset_type,
	-1, "rules", 0, 0, 0, 0, 0, "Boid Rules",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidState_rules_begin, BoidState_rules_next, BoidState_rules_end, BoidState_rules_get, nullptr, BoidState_rules_lookup_int, BoidState_rules_lookup_string, nullptr, &RNA_BoidRule
};

PointerPropertyRNA rna_BoidState_active_boid_rule = {
	{(PropertyRNA *)&rna_BoidState_active_boid_rule_index, (PropertyRNA *)&rna_BoidState_rules,
	-1, "active_boid_rule", 8388608, 0, 0, 0, 0, "Active Boid Rule",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidState_active_boid_rule_get, nullptr, nullptr, nullptr,&RNA_BoidRule
};

IntPropertyRNA rna_BoidState_active_boid_rule_index = {
	{(PropertyRNA *)&rna_BoidState_rule_fuzzy, (PropertyRNA *)&rna_BoidState_active_boid_rule,
	-1, "active_boid_rule_index", 3, 0, 0, 0, 0, "Active Boid Rule Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidState_active_boid_rule_index_get, BoidState_active_boid_rule_index_set, nullptr, nullptr, rna_BoidState_active_boid_rule_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_BoidState_rule_fuzzy = {
	{(PropertyRNA *)&rna_BoidState_volume, (PropertyRNA *)&rna_BoidState_active_boid_rule_index,
	-1, "rule_fuzzy", 3, 0, 0, 4, 0, "Rule Fuzziness",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, rule_fuzziness), (RawPropertyType)5, nullptr},
	BoidState_rule_fuzzy_get, BoidState_rule_fuzzy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidState_volume = {
	{(PropertyRNA *)&rna_BoidState_falloff, (PropertyRNA *)&rna_BoidState_rule_fuzzy,
	-1, "volume", 3, 0, 0, 4, 0, "Volume",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, volume), (RawPropertyType)5, nullptr},
	BoidState_volume_get, BoidState_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidState_falloff = {
	{nullptr, (PropertyRNA *)&rna_BoidState_volume,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, falloff), (RawPropertyType)5, nullptr},
	BoidState_falloff_get, BoidState_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_BoidState = {
	{(ContainerRNA *)&RNA_BoidSettings, (ContainerRNA *)&RNA_BoidRuleFight,
	nullptr,
	{(PropertyRNA *)&rna_BoidState_rna_properties, (PropertyRNA *)&rna_BoidState_falloff}},
	"BoidState", nullptr, nullptr, 516, nullptr, "Boid State",
	"Boid state for boid physics",
	"*", 17,
	(PropertyRNA *)&rna_BoidState_name, (PropertyRNA *)&rna_BoidState_rna_properties,
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

/* Boid Settings */
CollectionPropertyRNA rna_BoidSettings_rna_properties = {
	{(PropertyRNA *)&rna_BoidSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_rna_properties_begin, BoidSettings_rna_properties_next, BoidSettings_rna_properties_end, BoidSettings_rna_properties_get, nullptr, nullptr, BoidSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BoidSettings_rna_type = {
	{(PropertyRNA *)&rna_BoidSettings_land_smooth, (PropertyRNA *)&rna_BoidSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_BoidSettings_land_smooth = {
	{(PropertyRNA *)&rna_BoidSettings_bank, (PropertyRNA *)&rna_BoidSettings_rna_type,
	-1, "land_smooth", 3, 0, 0, 4, 0, "Landing Smoothness",
	"How smoothly the boids land",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, landing_smoothness), (RawPropertyType)5, nullptr},
	BoidSettings_land_smooth_get, BoidSettings_land_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_bank = {
	{(PropertyRNA *)&rna_BoidSettings_pitch, (PropertyRNA *)&rna_BoidSettings_land_smooth,
	-1, "bank", 3, 0, 0, 4, 0, "Banking",
	"Amount of rotation around velocity vector on turns",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, banking), (RawPropertyType)5, nullptr},
	BoidSettings_bank_get, BoidSettings_bank_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_pitch = {
	{(PropertyRNA *)&rna_BoidSettings_height, (PropertyRNA *)&rna_BoidSettings_bank,
	-1, "pitch", 3, 0, 0, 4, 0, "Pitch",
	"Amount of rotation around side vector",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, pitch), (RawPropertyType)5, nullptr},
	BoidSettings_pitch_get, BoidSettings_pitch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_height = {
	{(PropertyRNA *)&rna_BoidSettings_states, (PropertyRNA *)&rna_BoidSettings_pitch,
	-1, "height", 3, 0, 0, 4, 0, "Height",
	"Boid height relative to particle size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, height), (RawPropertyType)5, nullptr},
	BoidSettings_height_get, BoidSettings_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, nullptr
};

CollectionPropertyRNA rna_BoidSettings_states = {
	{(PropertyRNA *)&rna_BoidSettings_active_boid_state, (PropertyRNA *)&rna_BoidSettings_height,
	-1, "states", 0, 0, 0, 0, 0, "Boid States",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_states_begin, BoidSettings_states_next, BoidSettings_states_end, BoidSettings_states_get, nullptr, BoidSettings_states_lookup_int, BoidSettings_states_lookup_string, nullptr, &RNA_BoidState
};

PointerPropertyRNA rna_BoidSettings_active_boid_state = {
	{(PropertyRNA *)&rna_BoidSettings_active_boid_state_index, (PropertyRNA *)&rna_BoidSettings_states,
	-1, "active_boid_state", 8388608, 0, 0, 0, 0, "Active Boid Rule",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_active_boid_state_get, nullptr, nullptr, nullptr,&RNA_BoidRule
};

IntPropertyRNA rna_BoidSettings_active_boid_state_index = {
	{(PropertyRNA *)&rna_BoidSettings_health, (PropertyRNA *)&rna_BoidSettings_active_boid_state,
	-1, "active_boid_state_index", 3, 0, 0, 0, 0, "Active Boid State Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_active_boid_state_index_get, BoidSettings_active_boid_state_index_set, nullptr, nullptr, rna_BoidSettings_active_boid_state_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_BoidSettings_health = {
	{(PropertyRNA *)&rna_BoidSettings_strength, (PropertyRNA *)&rna_BoidSettings_active_boid_state_index,
	-1, "health", 3, 0, 0, 4, 0, "Health",
	"Initial boid health when born",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, health), (RawPropertyType)5, nullptr},
	BoidSettings_health_get, BoidSettings_health_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_strength = {
	{(PropertyRNA *)&rna_BoidSettings_aggression, (PropertyRNA *)&rna_BoidSettings_health,
	-1, "strength", 3, 0, 0, 4, 0, "Strength",
	"Maximum caused damage on attack per second",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, strength), (RawPropertyType)5, nullptr},
	BoidSettings_strength_get, BoidSettings_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_aggression = {
	{(PropertyRNA *)&rna_BoidSettings_accuracy, (PropertyRNA *)&rna_BoidSettings_strength,
	-1, "aggression", 3, 0, 0, 4, 0, "Aggression",
	"Boid will fight this times stronger enemy",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, aggression), (RawPropertyType)5, nullptr},
	BoidSettings_aggression_get, BoidSettings_aggression_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_accuracy = {
	{(PropertyRNA *)&rna_BoidSettings_range, (PropertyRNA *)&rna_BoidSettings_aggression,
	-1, "accuracy", 3, 0, 0, 4, 0, "Accuracy",
	"Accuracy of attack",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, accuracy), (RawPropertyType)5, nullptr},
	BoidSettings_accuracy_get, BoidSettings_accuracy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_range = {
	{(PropertyRNA *)&rna_BoidSettings_air_speed_min, (PropertyRNA *)&rna_BoidSettings_accuracy,
	-1, "range", 3, 0, 0, 4, 0, "Range",
	"Maximum distance from which a boid can attack",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, range), (RawPropertyType)5, nullptr},
	BoidSettings_range_get, BoidSettings_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_air_speed_min = {
	{(PropertyRNA *)&rna_BoidSettings_air_speed_max, (PropertyRNA *)&rna_BoidSettings_range,
	-1, "air_speed_min", 3, 0, 0, 4, 0, "Min Air Speed",
	"Minimum speed in air (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_min_speed), (RawPropertyType)5, nullptr},
	BoidSettings_air_speed_min_get, BoidSettings_air_speed_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_air_speed_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_acc_max, (PropertyRNA *)&rna_BoidSettings_air_speed_min,
	-1, "air_speed_max", 3, 0, 0, 4, 0, "Max Air Speed",
	"Maximum speed in air",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_max_speed), (RawPropertyType)5, nullptr},
	BoidSettings_air_speed_max_get, BoidSettings_air_speed_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_air_acc_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_ave_max, (PropertyRNA *)&rna_BoidSettings_air_speed_max,
	-1, "air_acc_max", 3, 0, 0, 4, 0, "Max Air Acceleration",
	"Maximum acceleration in air (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_max_acc), (RawPropertyType)5, nullptr},
	BoidSettings_air_acc_max_get, BoidSettings_air_acc_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_air_ave_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_personal_space, (PropertyRNA *)&rna_BoidSettings_air_acc_max,
	-1, "air_ave_max", 3, 0, 0, 4, 0, "Max Air Angular Velocity",
	"Maximum angular velocity in air (relative to 180 degrees)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_max_ave), (RawPropertyType)5, nullptr},
	BoidSettings_air_ave_max_get, BoidSettings_air_ave_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_air_personal_space = {
	{(PropertyRNA *)&rna_BoidSettings_land_jump_speed, (PropertyRNA *)&rna_BoidSettings_air_ave_max,
	-1, "air_personal_space", 3, 0, 0, 4, 0, "Air Personal Space",
	"Radius of boids personal space in air (% of particle size)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_personal_space), (RawPropertyType)5, nullptr},
	BoidSettings_air_personal_space_get, BoidSettings_air_personal_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_land_jump_speed = {
	{(PropertyRNA *)&rna_BoidSettings_land_speed_max, (PropertyRNA *)&rna_BoidSettings_air_personal_space,
	-1, "land_jump_speed", 3, 0, 0, 4, 0, "Jump Speed",
	"Maximum speed for jumping",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_jump_speed), (RawPropertyType)5, nullptr},
	BoidSettings_land_jump_speed_get, BoidSettings_land_jump_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_land_speed_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_acc_max, (PropertyRNA *)&rna_BoidSettings_land_jump_speed,
	-1, "land_speed_max", 3, 0, 0, 4, 0, "Max Land Speed",
	"Maximum speed on land",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_max_speed), (RawPropertyType)5, nullptr},
	BoidSettings_land_speed_max_get, BoidSettings_land_speed_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_land_acc_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_ave_max, (PropertyRNA *)&rna_BoidSettings_land_speed_max,
	-1, "land_acc_max", 3, 0, 0, 4, 0, "Max Land Acceleration",
	"Maximum acceleration on land (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_max_acc), (RawPropertyType)5, nullptr},
	BoidSettings_land_acc_max_get, BoidSettings_land_acc_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_land_ave_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_personal_space, (PropertyRNA *)&rna_BoidSettings_land_acc_max,
	-1, "land_ave_max", 3, 0, 0, 4, 0, "Max Land Angular Velocity",
	"Maximum angular velocity on land (relative to 180 degrees)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_max_ave), (RawPropertyType)5, nullptr},
	BoidSettings_land_ave_max_get, BoidSettings_land_ave_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_land_personal_space = {
	{(PropertyRNA *)&rna_BoidSettings_land_stick_force, (PropertyRNA *)&rna_BoidSettings_land_ave_max,
	-1, "land_personal_space", 3, 0, 0, 4, 0, "Land Personal Space",
	"Radius of boids personal space on land (% of particle size)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_personal_space), (RawPropertyType)5, nullptr},
	BoidSettings_land_personal_space_get, BoidSettings_land_personal_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_BoidSettings_land_stick_force = {
	{(PropertyRNA *)&rna_BoidSettings_use_flight, (PropertyRNA *)&rna_BoidSettings_land_personal_space,
	-1, "land_stick_force", 3, 0, 0, 4, 0, "Land Stick Force",
	"How strong a force must be to start effecting a boid on land",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_stick_force), (RawPropertyType)5, nullptr},
	BoidSettings_land_stick_force_get, BoidSettings_land_stick_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_BoidSettings_use_flight = {
	{(PropertyRNA *)&rna_BoidSettings_use_land, (PropertyRNA *)&rna_BoidSettings_land_stick_force,
	-1, "use_flight", 3, 0, 0, 0, 0, "Allow Flight",
	"Allow boids to move in air",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_use_flight_get, BoidSettings_use_flight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BoidSettings_use_land = {
	{(PropertyRNA *)&rna_BoidSettings_use_climb, (PropertyRNA *)&rna_BoidSettings_use_flight,
	-1, "use_land", 3, 0, 0, 0, 0, "Allow Land",
	"Allow boids to move on land",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_use_land_get, BoidSettings_use_land_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BoidSettings_use_climb = {
	{nullptr, (PropertyRNA *)&rna_BoidSettings_use_land,
	-1, "use_climb", 3, 0, 0, 0, 0, "Allow Climbing",
	"Allow boids to climb goal objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BoidSettings_use_climb_get, BoidSettings_use_climb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_BoidSettings = {
	{(ContainerRNA *)&RNA_Brush, (ContainerRNA *)&RNA_BoidState,
	nullptr,
	{(PropertyRNA *)&rna_BoidSettings_rna_properties, (PropertyRNA *)&rna_BoidSettings_use_climb}},
	"BoidSettings", nullptr, nullptr, 516, nullptr, "Boid Settings",
	"Settings for boid physics",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BoidSettings_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_BoidSettings_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

