
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

#include "rna_layer.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_ViewLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_ViewLayer_name;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_material_override;
RNA_EXTERN_C IntPropertyRNA rna_ViewLayer_samples;
RNA_EXTERN_C FloatPropertyRNA rna_ViewLayer_pass_alpha_threshold;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_eevee;
RNA_EXTERN_C CollectionPropertyRNA rna_ViewLayer_aovs;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_active_aov;
RNA_EXTERN_C IntPropertyRNA rna_ViewLayer_active_aov_index;
RNA_EXTERN_C CollectionPropertyRNA rna_ViewLayer_lightgroups;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_active_lightgroup;
RNA_EXTERN_C IntPropertyRNA rna_ViewLayer_active_lightgroup_index;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_object;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_material;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_asset;
RNA_EXTERN_C IntPropertyRNA rna_ViewLayer_pass_cryptomatte_depth;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_accurate;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_solid;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_sky;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_ao;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_strand;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_volumes;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_motion_blur;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_combined;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_z;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_vector;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_position;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_normal;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_uv;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_mist;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_object_index;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_material_index;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_shadow;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_ambient_occlusion;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_emit;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_environment;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_direct;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_indirect;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_color;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_glossy_direct;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_glossy_indirect;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_glossy_color;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_transmission_direct;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_transmission_indirect;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_transmission_color;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_direct;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_indirect;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_color;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_layer_collection;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_active_layer_collection;
RNA_EXTERN_C CollectionPropertyRNA rna_ViewLayer_objects;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use;
RNA_EXTERN_C BoolPropertyRNA rna_ViewLayer_use_freestyle;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_freestyle_settings;
RNA_EXTERN_C PointerPropertyRNA rna_ViewLayer_depsgraph;

extern FunctionRNA rna_ViewLayer_update_render_passes_func;
extern FunctionRNA rna_ViewLayer_update_func;


RNA_EXTERN_C CollectionPropertyRNA rna_AOVs_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AOVs_rna_type;

extern FunctionRNA rna_AOVs_add_func;
extern PointerPropertyRNA rna_AOVs_add_aov;

extern FunctionRNA rna_AOVs_remove_func;
extern PointerPropertyRNA rna_AOVs_remove_aov;



RNA_EXTERN_C CollectionPropertyRNA rna_Lightgroups_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Lightgroups_rna_type;

extern FunctionRNA rna_Lightgroups_add_func;
extern PointerPropertyRNA rna_Lightgroups_add_lightgroup;
extern StringPropertyRNA rna_Lightgroups_add_name;



RNA_EXTERN_C CollectionPropertyRNA rna_LayerObjects_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_LayerObjects_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_LayerObjects_active;
RNA_EXTERN_C CollectionPropertyRNA rna_LayerObjects_selected;


RNA_EXTERN_C CollectionPropertyRNA rna_FreestyleLineSet_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleLineSet_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleLineSet_linestyle;
RNA_EXTERN_C StringPropertyRNA rna_FreestyleLineSet_name;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_show_render;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_by_visibility;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_by_edge_types;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_by_collection;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_by_image_border;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_by_face_marks;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleLineSet_edge_type_negation;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleLineSet_edge_type_combination;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleLineSet_collection;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleLineSet_collection_negation;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleLineSet_face_mark_negation;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleLineSet_face_mark_condition;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_silhouette;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_border;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_crease;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_ridge_valley;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_suggestive_contour;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_material_boundary;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_contour;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_external_contour;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_select_edge_mark;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_silhouette;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_border;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_crease;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_ridge_valley;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_suggestive_contour;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_material_boundary;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_contour;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_external_contour;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleLineSet_exclude_edge_mark;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleLineSet_visibility;
RNA_EXTERN_C IntPropertyRNA rna_FreestyleLineSet_qi_start;
RNA_EXTERN_C IntPropertyRNA rna_FreestyleLineSet_qi_end;


RNA_EXTERN_C CollectionPropertyRNA rna_FreestyleModuleSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleModuleSettings_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleModuleSettings_script;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleModuleSettings_use;


RNA_EXTERN_C CollectionPropertyRNA rna_FreestyleSettings_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleSettings_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_FreestyleSettings_modules;
RNA_EXTERN_C EnumPropertyRNA rna_FreestyleSettings_mode;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_use_culling;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_use_suggestive_contours;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_use_ridges_and_valleys;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_use_material_boundaries;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_use_smoothness;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_use_view_map_cache;
RNA_EXTERN_C BoolPropertyRNA rna_FreestyleSettings_as_render_pass;
RNA_EXTERN_C FloatPropertyRNA rna_FreestyleSettings_sphere_radius;
RNA_EXTERN_C FloatPropertyRNA rna_FreestyleSettings_kr_derivative_epsilon;
RNA_EXTERN_C FloatPropertyRNA rna_FreestyleSettings_crease_angle;
RNA_EXTERN_C CollectionPropertyRNA rna_FreestyleSettings_linesets;


RNA_EXTERN_C CollectionPropertyRNA rna_FreestyleModules_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FreestyleModules_rna_type;

extern FunctionRNA rna_FreestyleModules_new_func;
extern PointerPropertyRNA rna_FreestyleModules_new_module;

extern FunctionRNA rna_FreestyleModules_remove_func;
extern PointerPropertyRNA rna_FreestyleModules_remove_module;



RNA_EXTERN_C CollectionPropertyRNA rna_Linesets_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Linesets_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_Linesets_active;
RNA_EXTERN_C IntPropertyRNA rna_Linesets_active_index;

extern FunctionRNA rna_Linesets_new_func;
extern StringPropertyRNA rna_Linesets_new_name;
extern PointerPropertyRNA rna_Linesets_new_lineset;

extern FunctionRNA rna_Linesets_remove_func;
extern PointerPropertyRNA rna_Linesets_remove_lineset;



RNA_EXTERN_C CollectionPropertyRNA rna_LayerCollection_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_LayerCollection_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_LayerCollection_collection;
RNA_EXTERN_C StringPropertyRNA rna_LayerCollection_name;
RNA_EXTERN_C CollectionPropertyRNA rna_LayerCollection_children;
RNA_EXTERN_C BoolPropertyRNA rna_LayerCollection_exclude;
RNA_EXTERN_C BoolPropertyRNA rna_LayerCollection_holdout;
RNA_EXTERN_C BoolPropertyRNA rna_LayerCollection_indirect_only;
RNA_EXTERN_C BoolPropertyRNA rna_LayerCollection_hide_viewport;
RNA_EXTERN_C BoolPropertyRNA rna_LayerCollection_is_visible;

extern FunctionRNA rna_LayerCollection_visible_get_func;
extern BoolPropertyRNA rna_LayerCollection_visible_get_result;

extern FunctionRNA rna_LayerCollection_has_objects_func;
extern BoolPropertyRNA rna_LayerCollection_has_objects_result;

extern FunctionRNA rna_LayerCollection_has_selected_objects_func;
extern PointerPropertyRNA rna_LayerCollection_has_selected_objects_view_layer;
extern BoolPropertyRNA rna_LayerCollection_has_selected_objects_result;



RNA_EXTERN_C CollectionPropertyRNA rna_ObjectBase_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectBase_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_ObjectBase_object;
RNA_EXTERN_C BoolPropertyRNA rna_ObjectBase_select;
RNA_EXTERN_C BoolPropertyRNA rna_ObjectBase_hide_viewport;

static PointerRNA ViewLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ViewLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ViewLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ViewLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ViewLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ViewLayer_name_get(PointerRNA *ptr, char *value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int ViewLayer_name_length(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void ViewLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_ViewLayer_name_set(ptr, value);
}

RNA_EXTERN_C PointerRNA ViewLayer_material_override_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Material, data->mat_override);
}

RNA_EXTERN_C void ViewLayer_material_override_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    if (data->mat_override) {
        id_us_min((ID *)data->mat_override);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mat_override = value.data;
}

RNA_EXTERN_C int ViewLayer_samples_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (int)(data->samples);
}

RNA_EXTERN_C void ViewLayer_samples_set(PointerRNA *ptr, int value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
#ifdef __cplusplus
    data->samples = (std::remove_reference_t<decltype(data->samples)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->samples = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C float ViewLayer_pass_alpha_threshold_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (float)(data->pass_alpha_threshold);
}

RNA_EXTERN_C void ViewLayer_pass_alpha_threshold_set(PointerRNA *ptr, float value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
#ifdef __cplusplus
    data->pass_alpha_threshold = (std::remove_reference_t<decltype(data->pass_alpha_threshold)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->pass_alpha_threshold = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C PointerRNA ViewLayer_eevee_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ViewLayerEEVEE, &data->eevee);
}

static PointerRNA ViewLayer_aovs_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_AOV, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void ViewLayer_aovs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ViewLayer_aovs;

    rna_iterator_listbase_begin(iter, &data->aovs, nullptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_aovs_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_aovs_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_aovs_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_aovs_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ViewLayer_aovs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ViewLayer_aovs_begin(&iter, ptr);

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
        if (found) { *r_ptr = ViewLayer_aovs_get(&iter); }
    }

    ViewLayer_aovs_end(&iter);

    return found;
}

RNA_EXTERN_C int AOV_name_length(PointerRNA *);
RNA_EXTERN_C void AOV_name_get(PointerRNA *, char *);

RNA_EXTERN_C int ViewLayer_aovs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ViewLayer_aovs_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = AOV_name_length(&iter.ptr);
            if (namelen < 1024) {
                AOV_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                AOV_name_get(&iter.ptr, name);
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
        ViewLayer_aovs_next(&iter);
    }
    ViewLayer_aovs_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA ViewLayer_active_aov_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AOV, data->active_aov);
}

RNA_EXTERN_C int ViewLayer_active_aov_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ViewLayer_active_aov_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void ViewLayer_active_aov_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ViewLayer_active_aov_index_set;
    fn(ptr, value);
}

static PointerRNA ViewLayer_lightgroups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Lightgroup, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void ViewLayer_lightgroups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ViewLayer_lightgroups;

    rna_iterator_listbase_begin(iter, &data->lightgroups, nullptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_lightgroups_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_lightgroups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_lightgroups_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_lightgroups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ViewLayer_lightgroups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ViewLayer_lightgroups_begin(&iter, ptr);

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
        if (found) { *r_ptr = ViewLayer_lightgroups_get(&iter); }
    }

    ViewLayer_lightgroups_end(&iter);

    return found;
}

RNA_EXTERN_C int Lightgroup_name_length(PointerRNA *);
RNA_EXTERN_C void Lightgroup_name_get(PointerRNA *, char *);

RNA_EXTERN_C int ViewLayer_lightgroups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ViewLayer_lightgroups_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Lightgroup_name_length(&iter.ptr);
            if (namelen < 1024) {
                Lightgroup_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                Lightgroup_name_get(&iter.ptr, name);
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
        ViewLayer_lightgroups_next(&iter);
    }
    ViewLayer_lightgroups_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA ViewLayer_active_lightgroup_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Lightgroup, data->active_lightgroup);
}

RNA_EXTERN_C int ViewLayer_active_lightgroup_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ViewLayer_active_lightgroup_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void ViewLayer_active_lightgroup_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ViewLayer_active_lightgroup_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool ViewLayer_use_pass_cryptomatte_object_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->cryptomatte_flag) & 1) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_cryptomatte_object_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag |= 1; }
    else { data->cryptomatte_flag &= ~1; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_cryptomatte_material_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->cryptomatte_flag) & 2) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_cryptomatte_material_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag |= 2; }
    else { data->cryptomatte_flag &= ~2; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_cryptomatte_asset_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->cryptomatte_flag) & 4) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_cryptomatte_asset_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag |= 4; }
    else { data->cryptomatte_flag &= ~4; }
}

RNA_EXTERN_C int ViewLayer_pass_cryptomatte_depth_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (int)(data->cryptomatte_levels);
}

RNA_EXTERN_C void ViewLayer_pass_cryptomatte_depth_set(PointerRNA *ptr, int value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
#ifdef __cplusplus
    data->cryptomatte_levels = (std::remove_reference_t<decltype(data->cryptomatte_levels)>)CLAMPIS(value, 2, 16);
#else
    data->cryptomatte_levels = CLAMPIS(value, 2, 16);
#endif
}

RNA_EXTERN_C bool ViewLayer_use_pass_cryptomatte_accurate_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->cryptomatte_flag) & 8) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_cryptomatte_accurate_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag |= 8; }
    else { data->cryptomatte_flag &= ~8; }
}

RNA_EXTERN_C bool ViewLayer_use_solid_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->layflag) & 1) != 0);
}

RNA_EXTERN_C void ViewLayer_use_solid_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag |= 1; }
    else { data->layflag &= ~1; }
}

RNA_EXTERN_C bool ViewLayer_use_sky_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->layflag) & 16) != 0);
}

RNA_EXTERN_C void ViewLayer_use_sky_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag |= 16; }
    else { data->layflag &= ~16; }
}

RNA_EXTERN_C bool ViewLayer_use_ao_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->layflag) & 128) != 0);
}

RNA_EXTERN_C void ViewLayer_use_ao_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag |= 128; }
    else { data->layflag &= ~128; }
}

RNA_EXTERN_C bool ViewLayer_use_strand_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->layflag) & 32) != 0);
}

RNA_EXTERN_C void ViewLayer_use_strand_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag |= 32; }
    else { data->layflag &= ~32; }
}

RNA_EXTERN_C bool ViewLayer_use_volumes_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->layflag) & 256) != 0);
}

RNA_EXTERN_C void ViewLayer_use_volumes_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag |= 256; }
    else { data->layflag &= ~256; }
}

RNA_EXTERN_C bool ViewLayer_use_motion_blur_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->layflag) & 512) != 0);
}

RNA_EXTERN_C void ViewLayer_use_motion_blur_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag |= 512; }
    else { data->layflag &= ~512; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_combined_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 1) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_combined_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 1; }
    else { data->passflag &= ~1; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_z_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 2) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_z_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 2; }
    else { data->passflag &= ~2; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_vector_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 512) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_vector_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 512; }
    else { data->passflag &= ~512; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_position_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 128) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_position_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 128; }
    else { data->passflag &= ~128; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_normal_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 256) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_normal_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 256; }
    else { data->passflag &= ~256; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_uv_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 4096) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_uv_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 4096; }
    else { data->passflag &= ~4096; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_mist_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 16384) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_mist_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 16384; }
    else { data->passflag &= ~16384; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_object_index_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 2048) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_object_index_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 2048; }
    else { data->passflag &= ~2048; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_material_index_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 262144) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_material_index_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 262144; }
    else { data->passflag &= ~262144; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_shadow_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 32) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_shadow_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 32; }
    else { data->passflag &= ~32; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 64) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_ambient_occlusion_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 64; }
    else { data->passflag &= ~64; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_emit_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 65536) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_emit_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 65536; }
    else { data->passflag &= ~65536; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_environment_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 131072) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_environment_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 131072; }
    else { data->passflag &= ~131072; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_diffuse_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 524288) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_diffuse_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 524288; }
    else { data->passflag &= ~524288; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_diffuse_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 1048576) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_diffuse_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 1048576; }
    else { data->passflag &= ~1048576; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_diffuse_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 2097152) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_diffuse_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 2097152; }
    else { data->passflag &= ~2097152; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_glossy_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 4194304) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_glossy_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 4194304; }
    else { data->passflag &= ~4194304; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_glossy_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 8388608) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_glossy_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 8388608; }
    else { data->passflag &= ~8388608; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_glossy_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 16777216) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_glossy_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 16777216; }
    else { data->passflag &= ~16777216; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_transmission_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 33554432) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_transmission_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 33554432; }
    else { data->passflag &= ~33554432; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_transmission_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 67108864) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_transmission_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 67108864; }
    else { data->passflag &= ~67108864; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_transmission_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 134217728) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_transmission_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 134217728; }
    else { data->passflag &= ~134217728; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_subsurface_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 268435456) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_subsurface_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 268435456; }
    else { data->passflag &= ~268435456; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_subsurface_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 536870912) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_subsurface_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 536870912; }
    else { data->passflag &= ~536870912; }
}

RNA_EXTERN_C bool ViewLayer_use_pass_subsurface_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->passflag) & 1073741824) != 0);
}

RNA_EXTERN_C void ViewLayer_use_pass_subsurface_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag |= 1073741824; }
    else { data->passflag &= ~1073741824; }
}

RNA_EXTERN_C PointerRNA ViewLayer_layer_collection_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_LayerCollection, data->layer_collections.first);
}

RNA_EXTERN_C PointerRNA ViewLayer_active_layer_collection_get(PointerRNA *ptr)
{
    return rna_ViewLayer_active_layer_collection_get(ptr);
}

RNA_EXTERN_C void ViewLayer_active_layer_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ViewLayer_active_layer_collection_set(ptr, value, reports);
}

static PointerRNA ViewLayer_objects_get(CollectionPropertyIterator *iter)
{
    return rna_ViewLayer_objects_get(iter);
}

RNA_EXTERN_C void ViewLayer_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ViewLayer_objects;

    rna_iterator_listbase_begin(iter, &data->object_bases, nullptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_objects_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_objects_get(iter);
    }
}

RNA_EXTERN_C void ViewLayer_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ViewLayer_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ViewLayer_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = ViewLayer_objects_get(&iter); }
    }

    ViewLayer_objects_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int ViewLayer_objects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ViewLayer_objects_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ID_name_get(&iter.ptr, name);
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
        ViewLayer_objects_next(&iter);
    }
    ViewLayer_objects_end(&iter);

    return found;
}

RNA_EXTERN_C bool ViewLayer_use_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ViewLayer_use_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool ViewLayer_use_freestyle_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

RNA_EXTERN_C void ViewLayer_use_freestyle_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

RNA_EXTERN_C PointerRNA ViewLayer_freestyle_settings_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_FreestyleSettings, &data->freestyle_config);
}

RNA_EXTERN_C PointerRNA ViewLayer_depsgraph_get(PointerRNA *ptr)
{
    return rna_ViewLayer_depsgraph_get(ptr);
}

static PointerRNA AOVs_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AOVs_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AOVs_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AOVs_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AOVs_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AOVs_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AOVs_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AOVs_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AOVs_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Lightgroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Lightgroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Lightgroups_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Lightgroups_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Lightgroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Lightgroups_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Lightgroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Lightgroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Lightgroups_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA LayerObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void LayerObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LayerObjects_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LayerObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LayerObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LayerObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LayerObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA LayerObjects_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA LayerObjects_active_get(PointerRNA *ptr)
{
    return rna_LayerObjects_active_object_get(ptr);
}

RNA_EXTERN_C void LayerObjects_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_LayerObjects_active_object_set(ptr, value, reports);
}

static PointerRNA LayerObjects_selected_get(CollectionPropertyIterator *iter)
{
    return rna_ViewLayer_objects_get(iter);
}

RNA_EXTERN_C void LayerObjects_selected_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LayerObjects_selected;

    rna_LayerObjects_selected_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerObjects_selected_get(iter);
    }
}

RNA_EXTERN_C void LayerObjects_selected_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = LayerObjects_selected_get(iter);
    }
}

RNA_EXTERN_C void LayerObjects_selected_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LayerObjects_selected_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    LayerObjects_selected_begin(&iter, ptr);

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
        if (found) { *r_ptr = LayerObjects_selected_get(&iter); }
    }

    LayerObjects_selected_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int LayerObjects_selected_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    LayerObjects_selected_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                ID_name_get(&iter.ptr, name);
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
        LayerObjects_selected_next(&iter);
    }
    LayerObjects_selected_end(&iter);

    return found;
}

static PointerRNA FreestyleLineSet_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FreestyleLineSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FreestyleLineSet_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleLineSet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleLineSet_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FreestyleLineSet_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleLineSet_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FreestyleLineSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FreestyleLineSet_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA FreestyleLineSet_linestyle_get(PointerRNA *ptr)
{
    return rna_FreestyleLineSet_linestyle_get(ptr);
}

RNA_EXTERN_C void FreestyleLineSet_linestyle_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_FreestyleLineSet_linestyle_set(ptr, value, reports);
}

RNA_EXTERN_C void FreestyleLineSet_name_get(PointerRNA *ptr, char *value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int FreestyleLineSet_name_length(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void FreestyleLineSet_name_set(PointerRNA *ptr, const char *value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

RNA_EXTERN_C bool FreestyleLineSet_show_render_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_show_render_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_by_visibility_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->selection) & 1) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_by_visibility_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection |= 1; }
    else { data->selection &= ~1; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_by_edge_types_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->selection) & 2) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_by_edge_types_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection |= 2; }
    else { data->selection &= ~2; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_by_collection_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->selection) & 4) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_by_collection_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection |= 4; }
    else { data->selection &= ~4; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_by_image_border_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->selection) & 8) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_by_image_border_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection |= 8; }
    else { data->selection &= ~8; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_by_face_marks_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->selection) & 16) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_by_face_marks_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection |= 16; }
    else { data->selection &= ~16; }
}

RNA_EXTERN_C int FreestyleLineSet_edge_type_negation_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((data->flags) & 4);
}

RNA_EXTERN_C void FreestyleLineSet_edge_type_negation_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags &= ~4;
    data->flags |= value;
}

RNA_EXTERN_C int FreestyleLineSet_edge_type_combination_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((data->flags) & 8);
}

RNA_EXTERN_C void FreestyleLineSet_edge_type_combination_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags &= ~8;
    data->flags |= value;
}

RNA_EXTERN_C PointerRNA FreestyleLineSet_collection_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->group);
}

RNA_EXTERN_C void FreestyleLineSet_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

RNA_EXTERN_C int FreestyleLineSet_collection_negation_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((data->flags) & 16);
}

RNA_EXTERN_C void FreestyleLineSet_collection_negation_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags &= ~16;
    data->flags |= value;
}

RNA_EXTERN_C int FreestyleLineSet_face_mark_negation_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((data->flags) & 32);
}

RNA_EXTERN_C void FreestyleLineSet_face_mark_negation_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags &= ~32;
    data->flags |= value;
}

RNA_EXTERN_C int FreestyleLineSet_face_mark_condition_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((data->flags) & 64);
}

RNA_EXTERN_C void FreestyleLineSet_face_mark_condition_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags &= ~64;
    data->flags |= value;
}

RNA_EXTERN_C bool FreestyleLineSet_select_silhouette_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 1) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_silhouette_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 1; }
    else { data->edge_types &= ~1; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_border_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 2) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_border_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 2; }
    else { data->edge_types &= ~2; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_crease_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 4) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_crease_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 4; }
    else { data->edge_types &= ~4; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_ridge_valley_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 8) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_ridge_valley_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 8; }
    else { data->edge_types &= ~8; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_suggestive_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 32) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_suggestive_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 32; }
    else { data->edge_types &= ~32; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_material_boundary_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 64) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_material_boundary_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 64; }
    else { data->edge_types &= ~64; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 128) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 128; }
    else { data->edge_types &= ~128; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_external_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 256) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_external_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 256; }
    else { data->edge_types &= ~256; }
}

RNA_EXTERN_C bool FreestyleLineSet_select_edge_mark_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->edge_types) & 512) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_select_edge_mark_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types |= 512; }
    else { data->edge_types &= ~512; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_silhouette_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 1) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_silhouette_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 1; }
    else { data->exclude_edge_types &= ~1; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_border_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 2) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_border_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 2; }
    else { data->exclude_edge_types &= ~2; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_crease_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 4) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_crease_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 4; }
    else { data->exclude_edge_types &= ~4; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_ridge_valley_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 8) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_ridge_valley_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 8; }
    else { data->exclude_edge_types &= ~8; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_suggestive_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 32) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_suggestive_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 32; }
    else { data->exclude_edge_types &= ~32; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_material_boundary_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 64) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_material_boundary_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 64; }
    else { data->exclude_edge_types &= ~64; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 128) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 128; }
    else { data->exclude_edge_types &= ~128; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_external_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 256) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_external_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 256; }
    else { data->exclude_edge_types &= ~256; }
}

RNA_EXTERN_C bool FreestyleLineSet_exclude_edge_mark_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (((data->exclude_edge_types) & 512) != 0);
}

RNA_EXTERN_C void FreestyleLineSet_exclude_edge_mark_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types |= 512; }
    else { data->exclude_edge_types &= ~512; }
}

RNA_EXTERN_C int FreestyleLineSet_visibility_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (int)(data->qi);
}

RNA_EXTERN_C void FreestyleLineSet_visibility_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
#ifdef __cplusplus
    data->qi = (std::remove_reference_t<decltype(data->qi)>)value;
#else
    data->qi = value;
#endif
}

RNA_EXTERN_C int FreestyleLineSet_qi_start_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (int)(data->qi_start);
}

RNA_EXTERN_C void FreestyleLineSet_qi_start_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
#ifdef __cplusplus
    data->qi_start = (std::remove_reference_t<decltype(data->qi_start)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->qi_start = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C int FreestyleLineSet_qi_end_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (int)(data->qi_end);
}

RNA_EXTERN_C void FreestyleLineSet_qi_end_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
#ifdef __cplusplus
    data->qi_end = (std::remove_reference_t<decltype(data->qi_end)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->qi_end = CLAMPIS(value, 0, INT_MAX);
#endif
}

static PointerRNA FreestyleModuleSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FreestyleModuleSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleModuleSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleModuleSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FreestyleModuleSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleModuleSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FreestyleModuleSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FreestyleModuleSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA FreestyleModuleSettings_script_get(PointerRNA *ptr)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Text, data->script);
}

RNA_EXTERN_C void FreestyleModuleSettings_script_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->script = value.data;
}

RNA_EXTERN_C bool FreestyleModuleSettings_use_get(PointerRNA *ptr)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    return (((data->is_displayed) & 1) != 0);
}

RNA_EXTERN_C void FreestyleModuleSettings_use_set(PointerRNA *ptr, bool value)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    if (value) { data->is_displayed |= 1; }
    else { data->is_displayed &= ~1; }
}

static PointerRNA FreestyleSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FreestyleSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FreestyleSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FreestyleSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FreestyleSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FreestyleSettings_modules_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FreestyleModuleSettings, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void FreestyleSettings_modules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FreestyleSettings_modules;

    rna_iterator_listbase_begin(iter, &data->modules, nullptr);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_modules_get(iter);
    }
}

RNA_EXTERN_C void FreestyleSettings_modules_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_modules_get(iter);
    }
}

RNA_EXTERN_C void FreestyleSettings_modules_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FreestyleSettings_modules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FreestyleSettings_modules_begin(&iter, ptr);

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
        if (found) { *r_ptr = FreestyleSettings_modules_get(&iter); }
    }

    FreestyleSettings_modules_end(&iter);

    return found;
}

RNA_EXTERN_C int FreestyleSettings_mode_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (int)(data->mode);
}

RNA_EXTERN_C void FreestyleSettings_mode_set(PointerRNA *ptr, int value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
#ifdef __cplusplus
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
#else
    data->mode = value;
#endif
}

RNA_EXTERN_C bool FreestyleSettings_use_culling_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

RNA_EXTERN_C void FreestyleSettings_use_culling_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

RNA_EXTERN_C bool FreestyleSettings_use_suggestive_contours_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C void FreestyleSettings_use_suggestive_contours_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

RNA_EXTERN_C bool FreestyleSettings_use_ridges_and_valleys_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

RNA_EXTERN_C void FreestyleSettings_use_ridges_and_valleys_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

RNA_EXTERN_C bool FreestyleSettings_use_material_boundaries_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C void FreestyleSettings_use_material_boundaries_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

RNA_EXTERN_C bool FreestyleSettings_use_smoothness_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

RNA_EXTERN_C void FreestyleSettings_use_smoothness_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

RNA_EXTERN_C bool FreestyleSettings_use_view_map_cache_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 64) != 0);
}

RNA_EXTERN_C void FreestyleSettings_use_view_map_cache_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 64; }
    else { data->flags &= ~64; }
}

RNA_EXTERN_C bool FreestyleSettings_as_render_pass_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

RNA_EXTERN_C void FreestyleSettings_as_render_pass_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

RNA_EXTERN_C float FreestyleSettings_sphere_radius_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (float)(data->sphere_radius);
}

RNA_EXTERN_C void FreestyleSettings_sphere_radius_set(PointerRNA *ptr, float value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
#ifdef __cplusplus
    data->sphere_radius = (std::remove_reference_t<decltype(data->sphere_radius)>)CLAMPIS(value, 0.0f, 1000.0f);
#else
    data->sphere_radius = CLAMPIS(value, 0.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FreestyleSettings_kr_derivative_epsilon_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (float)(data->dkr_epsilon);
}

RNA_EXTERN_C void FreestyleSettings_kr_derivative_epsilon_set(PointerRNA *ptr, float value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
#ifdef __cplusplus
    data->dkr_epsilon = (std::remove_reference_t<decltype(data->dkr_epsilon)>)CLAMPIS(value, -1000.0f, 1000.0f);
#else
    data->dkr_epsilon = CLAMPIS(value, -1000.0f, 1000.0f);
#endif
}

RNA_EXTERN_C float FreestyleSettings_crease_angle_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (float)(data->crease_angle);
}

RNA_EXTERN_C void FreestyleSettings_crease_angle_set(PointerRNA *ptr, float value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
#ifdef __cplusplus
    data->crease_angle = (std::remove_reference_t<decltype(data->crease_angle)>)CLAMPIS(value, 0.0f, 3.1415927410f);
#else
    data->crease_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
#endif
}

static PointerRNA FreestyleSettings_linesets_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FreestyleLineSet, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void FreestyleSettings_linesets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FreestyleSettings_linesets;

    rna_iterator_listbase_begin(iter, &data->linesets, nullptr);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_linesets_get(iter);
    }
}

RNA_EXTERN_C void FreestyleSettings_linesets_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_linesets_get(iter);
    }
}

RNA_EXTERN_C void FreestyleSettings_linesets_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FreestyleSettings_linesets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FreestyleSettings_linesets_begin(&iter, ptr);

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
        if (found) { *r_ptr = FreestyleSettings_linesets_get(&iter); }
    }

    FreestyleSettings_linesets_end(&iter);

    return found;
}

RNA_EXTERN_C int FreestyleLineSet_name_length(PointerRNA *);
RNA_EXTERN_C void FreestyleLineSet_name_get(PointerRNA *, char *);

RNA_EXTERN_C int FreestyleSettings_linesets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    FreestyleSettings_linesets_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FreestyleLineSet_name_length(&iter.ptr);
            if (namelen < 1024) {
                FreestyleLineSet_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                FreestyleLineSet_name_get(&iter.ptr, name);
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
        FreestyleSettings_linesets_next(&iter);
    }
    FreestyleSettings_linesets_end(&iter);

    return found;
}

static PointerRNA FreestyleModules_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FreestyleModules_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FreestyleModules_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleModules_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleModules_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FreestyleModules_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FreestyleModules_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FreestyleModules_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FreestyleModules_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Linesets_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Linesets_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Linesets_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Linesets_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Linesets_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Linesets_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Linesets_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Linesets_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Linesets_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA Linesets_active_get(PointerRNA *ptr)
{
    return rna_FreestyleSettings_active_lineset_get(ptr);
}

RNA_EXTERN_C int Linesets_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_FreestyleSettings_active_lineset_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Linesets_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_FreestyleSettings_active_lineset_index_set;
    fn(ptr, value);
}

static PointerRNA LayerCollection_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void LayerCollection_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LayerCollection_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerCollection_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LayerCollection_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LayerCollection_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LayerCollection_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LayerCollection_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA LayerCollection_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA LayerCollection_collection_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->collection);
}

RNA_EXTERN_C void LayerCollection_name_get(PointerRNA *ptr, char *value)
{
    rna_LayerCollection_name_get(ptr, value);
}

RNA_EXTERN_C int LayerCollection_name_length(PointerRNA *ptr)
{
    return rna_LayerCollection_name_length(ptr);
}

static PointerRNA LayerCollection_children_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_LayerCollection, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void LayerCollection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LayerCollection_children;

    rna_LayerCollection_children_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerCollection_children_get(iter);
    }
}

RNA_EXTERN_C void LayerCollection_children_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = LayerCollection_children_get(iter);
    }
}

RNA_EXTERN_C void LayerCollection_children_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LayerCollection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_LayerCollection_children_lookupint(ptr, index, r_ptr);
}

RNA_EXTERN_C int LayerCollection_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_LayerCollection_children_lookupstring(ptr, key, r_ptr);
}

RNA_EXTERN_C bool LayerCollection_exclude_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

RNA_EXTERN_C void LayerCollection_exclude_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_exclude_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool LayerCollection_holdout_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

RNA_EXTERN_C void LayerCollection_holdout_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_holdout_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool LayerCollection_indirect_only_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

RNA_EXTERN_C void LayerCollection_indirect_only_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_indirect_only_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool LayerCollection_hide_viewport_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

RNA_EXTERN_C void LayerCollection_hide_viewport_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_hide_viewport_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool LayerCollection_is_visible_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return (((data->runtime_flag) & 16) != 0);
}

static PointerRNA ObjectBase_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ObjectBase_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectBase_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectBase_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectBase_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectBase_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ObjectBase_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ObjectBase_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ObjectBase_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA ObjectBase_object_get(PointerRNA *ptr)
{
    Base *data = (Base *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

RNA_EXTERN_C bool ObjectBase_select_get(PointerRNA *ptr)
{
    Base *data = (Base *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void ObjectBase_select_set(PointerRNA *ptr, bool value)
{
    Base *data = (Base *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool ObjectBase_hide_viewport_get(PointerRNA *ptr)
{
    Base *data = (Base *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void ObjectBase_hide_viewport_set(PointerRNA *ptr, bool value)
{
    Base *data = (Base *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C void ViewLayer_update_render_passes_func(struct ID *_selfid)
{
	rna_ViewLayer_update_render_passes(_selfid);
}

static void ViewLayer_update_render_passes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	_selfid = (struct ID *)_ptr->owner_id;
	
	rna_ViewLayer_update_render_passes(_selfid);
}

RNA_EXTERN_C void ViewLayer_update_func(struct ID *_selfid, struct ViewLayer *_self, Main *bmain, ReportList *reports)
{
	rna_ViewLayer_update_tagged(_selfid, _self, bmain, reports);
}

static void ViewLayer_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct ViewLayer *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct ViewLayer *)_ptr->data;
	
	rna_ViewLayer_update_tagged(_selfid, _self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

void rna_ViewLayer_update_render_passes(struct ID *_selfid);
void rna_ViewLayer_update_tagged(struct ID *_selfid, struct ViewLayer *_self, Main *bmain, ReportList *reports);

RNA_EXTERN_C struct ViewLayerAOV *AOVs_add_func(struct ViewLayer *_self)
{
	return BKE_view_layer_add_aov(_self);
}

static void AOVs_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ViewLayer *_self;
	struct ViewLayerAOV *aov;
	char *_data, *_retdata;
	
	_self = (struct ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	aov = BKE_view_layer_add_aov(_self);
	*((struct ViewLayerAOV **)_retdata) = aov;
}

RNA_EXTERN_C void AOVs_remove_func(struct ViewLayer *_self, ReportList *reports, struct ViewLayerAOV *aov)
{
	rna_ViewLayer_remove_aov(_self, reports, aov);
}

static void AOVs_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ViewLayer *_self;
	struct ViewLayerAOV *aov;
	char *_data;
	
	_self = (struct ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	aov = *((struct ViewLayerAOV **)_data);
	
	rna_ViewLayer_remove_aov(_self, reports, aov);
}

/* Repeated prototypes to detect errors */

struct ViewLayerAOV *BKE_view_layer_add_aov(struct ViewLayer *_self);
void rna_ViewLayer_remove_aov(struct ViewLayer *_self, ReportList *reports, struct ViewLayerAOV *aov);

RNA_EXTERN_C struct ViewLayerLightgroup *Lightgroups_add_func(struct ViewLayer *_self, const char * name)
{
	return BKE_view_layer_add_lightgroup(_self, name);
}

static void Lightgroups_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ViewLayer *_self;
	struct ViewLayerLightgroup *lightgroup;
	const char * name;
	char *_data, *_retdata;
	
	_self = (struct ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	name = *((const char * *)_data);
	
	lightgroup = BKE_view_layer_add_lightgroup(_self, name);
	*((struct ViewLayerLightgroup **)_retdata) = lightgroup;
}

/* Repeated prototypes to detect errors */

struct ViewLayerLightgroup *BKE_view_layer_add_lightgroup(struct ViewLayer *_self, const char * name);





RNA_EXTERN_C struct FreestyleModuleConfig *FreestyleModules_new_func(struct ID *_selfid, struct FreestyleSettings *_self)
{
	return rna_FreestyleSettings_module_add(_selfid, _self);
}

static void FreestyleModules_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	struct FreestyleModuleConfig *module;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	module = rna_FreestyleSettings_module_add(_selfid, _self);
	*((struct FreestyleModuleConfig **)_retdata) = module;
}

RNA_EXTERN_C void FreestyleModules_remove_func(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *module)
{
	rna_FreestyleSettings_module_remove(_selfid, _self, reports, module);
}

static void FreestyleModules_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	struct PointerRNA *module;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	module = *((struct PointerRNA **)_data);
	
	rna_FreestyleSettings_module_remove(_selfid, _self, reports, module);
}

/* Repeated prototypes to detect errors */

struct FreestyleModuleConfig *rna_FreestyleSettings_module_add(struct ID *_selfid, struct FreestyleSettings *_self);
void rna_FreestyleSettings_module_remove(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *module);

RNA_EXTERN_C struct FreestyleLineSet *Linesets_new_func(struct ID *_selfid, struct FreestyleSettings *_self, Main *bmain, const char * name)
{
	return rna_FreestyleSettings_lineset_add(_selfid, _self, bmain, name);
}

static void Linesets_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	const char * name;
	struct FreestyleLineSet *lineset;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	lineset = rna_FreestyleSettings_lineset_add(_selfid, _self, CTX_data_main(C), name);
	*((struct FreestyleLineSet **)_retdata) = lineset;
}

RNA_EXTERN_C void Linesets_remove_func(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *lineset)
{
	rna_FreestyleSettings_lineset_remove(_selfid, _self, reports, lineset);
}

static void Linesets_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	struct PointerRNA *lineset;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	lineset = *((struct PointerRNA **)_data);
	
	rna_FreestyleSettings_lineset_remove(_selfid, _self, reports, lineset);
}

/* Repeated prototypes to detect errors */

struct FreestyleLineSet *rna_FreestyleSettings_lineset_add(struct ID *_selfid, struct FreestyleSettings *_self, Main *bmain, const char * name);
void rna_FreestyleSettings_lineset_remove(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *lineset);

RNA_EXTERN_C bool LayerCollection_visible_get_func(struct LayerCollection *_self, bContext *C)
{
	return rna_LayerCollection_visible_get(_self, C);
}

static void LayerCollection_visible_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct LayerCollection *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct LayerCollection *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_LayerCollection_visible_get(_self, C);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool LayerCollection_has_objects_func(struct LayerCollection *_self)
{
	return rna_LayerCollection_has_objects(_self);
}

static void LayerCollection_has_objects_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct LayerCollection *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct LayerCollection *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_LayerCollection_has_objects(_self);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool LayerCollection_has_selected_objects_func(struct LayerCollection *_self, Main *bmain, struct ViewLayer *view_layer)
{
	return rna_LayerCollection_has_selected_objects(_self, bmain, view_layer);
}

static void LayerCollection_has_selected_objects_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct LayerCollection *_self;
	struct ViewLayer *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct LayerCollection *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_LayerCollection_has_selected_objects(_self, CTX_data_main(C), view_layer);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

bool rna_LayerCollection_visible_get(struct LayerCollection *_self, bContext *C);
bool rna_LayerCollection_has_objects(struct LayerCollection *_self);
bool rna_LayerCollection_has_selected_objects(struct LayerCollection *_self, Main *bmain, struct ViewLayer *view_layer);


/* View Layer */
CollectionPropertyRNA rna_ViewLayer_rna_properties = {
	{(PropertyRNA *)&rna_ViewLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_rna_properties_begin, ViewLayer_rna_properties_next, ViewLayer_rna_properties_end, ViewLayer_rna_properties_get, nullptr, nullptr, ViewLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ViewLayer_rna_type = {
	{(PropertyRNA *)&rna_ViewLayer_name, (PropertyRNA *)&rna_ViewLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ViewLayer_name = {
	{(PropertyRNA *)&rna_ViewLayer_material_override, (PropertyRNA *)&rna_ViewLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"View layer name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_name_get, ViewLayer_name_length, ViewLayer_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_ViewLayer_material_override = {
	{(PropertyRNA *)&rna_ViewLayer_samples, (PropertyRNA *)&rna_ViewLayer_name,
	-1, "material_override", 8388801, 1, 0, 0, 0, "Material Override",
	"Material to override all other materials in this view layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_material_override_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_material_override_get, ViewLayer_material_override_set, nullptr, nullptr,&RNA_Material
};

IntPropertyRNA rna_ViewLayer_samples = {
	{(PropertyRNA *)&rna_ViewLayer_pass_alpha_threshold, (PropertyRNA *)&rna_ViewLayer_material_override,
	-1, "samples", 3, 0, 0, 4, 0, "Samples",
	"Override number of render samples for this view layer, 0 will use the scene setting",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ViewLayer, samples), (RawPropertyType)0, nullptr},
	ViewLayer_samples_get, ViewLayer_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_ViewLayer_pass_alpha_threshold = {
	{(PropertyRNA *)&rna_ViewLayer_eevee, (PropertyRNA *)&rna_ViewLayer_samples,
	-1, "pass_alpha_threshold", 3, 0, 0, 4, 0, "Alpha Threshold",
	"Z, Index, normal, UV and vector passes are only affected by surfaces with alpha transparency equal to or higher than this threshold",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ViewLayer, pass_alpha_threshold), (RawPropertyType)5, nullptr},
	ViewLayer_pass_alpha_threshold_get, ViewLayer_pass_alpha_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

PointerPropertyRNA rna_ViewLayer_eevee = {
	{(PropertyRNA *)&rna_ViewLayer_aovs, (PropertyRNA *)&rna_ViewLayer_pass_alpha_threshold,
	-1, "eevee", 8650752, 0, 0, 0, 0, "EEVEE Settings",
	"View layer settings for EEVEE",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_eevee_get, nullptr, nullptr, nullptr,&RNA_ViewLayerEEVEE
};

CollectionPropertyRNA rna_ViewLayer_aovs = {
	{(PropertyRNA *)&rna_ViewLayer_active_aov, (PropertyRNA *)&rna_ViewLayer_eevee,
	-1, "aovs", 0, 0, 0, 0, 0, "Shader AOV",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AOVs},
	ViewLayer_aovs_begin, ViewLayer_aovs_next, ViewLayer_aovs_end, ViewLayer_aovs_get, nullptr, ViewLayer_aovs_lookup_int, ViewLayer_aovs_lookup_string, nullptr, &RNA_AOV
};

PointerPropertyRNA rna_ViewLayer_active_aov = {
	{(PropertyRNA *)&rna_ViewLayer_active_aov_index, (PropertyRNA *)&rna_ViewLayer_aovs,
	-1, "active_aov", 8388608, 0, 0, 0, 0, "Shader AOV",
	"Active AOV",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_active_aov_get, nullptr, nullptr, nullptr,&RNA_AOV
};

IntPropertyRNA rna_ViewLayer_active_aov_index = {
	{(PropertyRNA *)&rna_ViewLayer_lightgroups, (PropertyRNA *)&rna_ViewLayer_active_aov,
	-1, "active_aov_index", 3, 0, 0, 0, 0, "Active AOV Index",
	"Index of active AOV",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_active_aov_index_get, ViewLayer_active_aov_index_set, nullptr, nullptr, rna_ViewLayer_active_aov_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

CollectionPropertyRNA rna_ViewLayer_lightgroups = {
	{(PropertyRNA *)&rna_ViewLayer_active_lightgroup, (PropertyRNA *)&rna_ViewLayer_active_aov_index,
	-1, "lightgroups", 0, 0, 0, 0, 0, "Light Groups",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_Lightgroups},
	ViewLayer_lightgroups_begin, ViewLayer_lightgroups_next, ViewLayer_lightgroups_end, ViewLayer_lightgroups_get, nullptr, ViewLayer_lightgroups_lookup_int, ViewLayer_lightgroups_lookup_string, nullptr, &RNA_Lightgroup
};

PointerPropertyRNA rna_ViewLayer_active_lightgroup = {
	{(PropertyRNA *)&rna_ViewLayer_active_lightgroup_index, (PropertyRNA *)&rna_ViewLayer_lightgroups,
	-1, "active_lightgroup", 8388608, 0, 0, 0, 0, "Light Groups",
	"Active Lightgroup",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_active_lightgroup_get, nullptr, nullptr, nullptr,&RNA_Lightgroup
};

IntPropertyRNA rna_ViewLayer_active_lightgroup_index = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_object, (PropertyRNA *)&rna_ViewLayer_active_lightgroup,
	-1, "active_lightgroup_index", 3, 0, 0, 0, 0, "Active Lightgroup Index",
	"Index of active lightgroup",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_active_lightgroup_index_get, ViewLayer_active_lightgroup_index_set, nullptr, nullptr, rna_ViewLayer_active_lightgroup_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_object = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_material, (PropertyRNA *)&rna_ViewLayer_active_lightgroup_index,
	-1, "use_pass_cryptomatte_object", 3, 0, 0, 0, 0, "Cryptomatte Object",
	"Render cryptomatte object pass, for isolating objects in compositing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_cryptomatte_object_get, ViewLayer_use_pass_cryptomatte_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_material = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_asset, (PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_object,
	-1, "use_pass_cryptomatte_material", 3, 0, 0, 0, 0, "Cryptomatte Material",
	"Render cryptomatte material pass, for isolating materials in compositing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_cryptomatte_material_get, ViewLayer_use_pass_cryptomatte_material_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_asset = {
	{(PropertyRNA *)&rna_ViewLayer_pass_cryptomatte_depth, (PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_material,
	-1, "use_pass_cryptomatte_asset", 3, 0, 0, 0, 0, "Cryptomatte Asset",
	"Render cryptomatte asset pass, for isolating groups of objects with the same parent",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_cryptomatte_asset_get, ViewLayer_use_pass_cryptomatte_asset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_ViewLayer_pass_cryptomatte_depth = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_accurate, (PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_asset,
	-1, "pass_cryptomatte_depth", 3, 0, 0, 4, 0, "Cryptomatte Levels",
	"Sets how many unique objects can be distinguished per pixel",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ViewLayer, cryptomatte_levels), (RawPropertyType)1, nullptr},
	ViewLayer_pass_cryptomatte_depth_get, ViewLayer_pass_cryptomatte_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 2, 16, 2, 16, 2, 6, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_accurate = {
	{(PropertyRNA *)&rna_ViewLayer_use_solid, (PropertyRNA *)&rna_ViewLayer_pass_cryptomatte_depth,
	-1, "use_pass_cryptomatte_accurate", 3, 0, 0, 0, 0, "Cryptomatte Accurate",
	"Generate a more accurate cryptomatte pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_cryptomatte_accurate_get, ViewLayer_use_pass_cryptomatte_accurate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_solid = {
	{(PropertyRNA *)&rna_ViewLayer_use_sky, (PropertyRNA *)&rna_ViewLayer_use_pass_cryptomatte_accurate,
	-1, "use_solid", 3, 0, 0, 0, 0, "Solid",
	"Render Solid faces in this Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_solid_get, ViewLayer_use_solid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_sky = {
	{(PropertyRNA *)&rna_ViewLayer_use_ao, (PropertyRNA *)&rna_ViewLayer_use_solid,
	-1, "use_sky", 3, 0, 0, 0, 0, "Sky",
	"Render Sky in this Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_render_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_sky_get, ViewLayer_use_sky_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_ao = {
	{(PropertyRNA *)&rna_ViewLayer_use_strand, (PropertyRNA *)&rna_ViewLayer_use_sky,
	-1, "use_ao", 3, 0, 0, 0, 0, "Ambient Occlusion",
	"Render Ambient Occlusion in this Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_render_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_ao_get, ViewLayer_use_ao_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_strand = {
	{(PropertyRNA *)&rna_ViewLayer_use_volumes, (PropertyRNA *)&rna_ViewLayer_use_ao,
	-1, "use_strand", 3, 0, 0, 0, 0, "Strand",
	"Render Strands in this Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_strand_get, ViewLayer_use_strand_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_volumes = {
	{(PropertyRNA *)&rna_ViewLayer_use_motion_blur, (PropertyRNA *)&rna_ViewLayer_use_strand,
	-1, "use_volumes", 3, 0, 0, 0, 0, "Volumes",
	"Render volumes in this Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_volumes_get, ViewLayer_use_volumes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_motion_blur = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_combined, (PropertyRNA *)&rna_ViewLayer_use_volumes,
	-1, "use_motion_blur", 3, 0, 0, 0, 0, "Motion Blur",
	"Render motion blur in this Layer, if enabled in the scene",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_motion_blur_get, ViewLayer_use_motion_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_combined = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_z, (PropertyRNA *)&rna_ViewLayer_use_motion_blur,
	-1, "use_pass_combined", 3, 0, 0, 0, 0, "Combined",
	"Deliver full combined RGBA buffer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_combined_get, ViewLayer_use_pass_combined_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_z = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_vector, (PropertyRNA *)&rna_ViewLayer_use_pass_combined,
	-1, "use_pass_z", 3, 0, 0, 0, 0, "Z",
	"Deliver Z values pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_z_get, ViewLayer_use_pass_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_vector = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_position, (PropertyRNA *)&rna_ViewLayer_use_pass_z,
	-1, "use_pass_vector", 3, 0, 0, 0, 0, "Vector",
	"Deliver speed vector pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_vector_get, ViewLayer_use_pass_vector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_position = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_normal, (PropertyRNA *)&rna_ViewLayer_use_pass_vector,
	-1, "use_pass_position", 3, 0, 0, 0, 0, "Position",
	"Deliver position pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_position_get, ViewLayer_use_pass_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_normal = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_uv, (PropertyRNA *)&rna_ViewLayer_use_pass_position,
	-1, "use_pass_normal", 3, 0, 0, 0, 0, "Normal",
	"Deliver normal pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_normal_get, ViewLayer_use_pass_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_uv = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_mist, (PropertyRNA *)&rna_ViewLayer_use_pass_normal,
	-1, "use_pass_uv", 3, 0, 0, 0, 0, "UV",
	"Deliver texture UV pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_uv_get, ViewLayer_use_pass_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_mist = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_object_index, (PropertyRNA *)&rna_ViewLayer_use_pass_uv,
	-1, "use_pass_mist", 3, 0, 0, 0, 0, "Mist",
	"Deliver mist factor pass (0.0 to 1.0)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_mist_get, ViewLayer_use_pass_mist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_object_index = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_material_index, (PropertyRNA *)&rna_ViewLayer_use_pass_mist,
	-1, "use_pass_object_index", 3, 0, 0, 0, 0, "Object Index",
	"Deliver object index pass",
	0, "Scene",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_object_index_get, ViewLayer_use_pass_object_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_material_index = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_shadow, (PropertyRNA *)&rna_ViewLayer_use_pass_object_index,
	-1, "use_pass_material_index", 3, 0, 0, 0, 0, "Material Index",
	"Deliver material index pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_material_index_get, ViewLayer_use_pass_material_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_shadow = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_ambient_occlusion, (PropertyRNA *)&rna_ViewLayer_use_pass_material_index,
	-1, "use_pass_shadow", 3, 0, 0, 0, 0, "Shadow",
	"Deliver shadow pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_shadow_get, ViewLayer_use_pass_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_ambient_occlusion = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_emit, (PropertyRNA *)&rna_ViewLayer_use_pass_shadow,
	-1, "use_pass_ambient_occlusion", 3, 0, 0, 0, 0, "Ambient Occlusion",
	"Deliver Ambient Occlusion pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_ambient_occlusion_get, ViewLayer_use_pass_ambient_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_emit = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_environment, (PropertyRNA *)&rna_ViewLayer_use_pass_ambient_occlusion,
	-1, "use_pass_emit", 3, 0, 0, 0, 0, "Emit",
	"Deliver emission pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_emit_get, ViewLayer_use_pass_emit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_environment = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_diffuse_direct, (PropertyRNA *)&rna_ViewLayer_use_pass_emit,
	-1, "use_pass_environment", 3, 0, 0, 0, 0, "Environment",
	"Deliver environment lighting pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_environment_get, ViewLayer_use_pass_environment_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_direct = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_diffuse_indirect, (PropertyRNA *)&rna_ViewLayer_use_pass_environment,
	-1, "use_pass_diffuse_direct", 3, 0, 0, 0, 0, "Diffuse Direct",
	"Deliver diffuse direct pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_diffuse_direct_get, ViewLayer_use_pass_diffuse_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_indirect = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_diffuse_color, (PropertyRNA *)&rna_ViewLayer_use_pass_diffuse_direct,
	-1, "use_pass_diffuse_indirect", 3, 0, 0, 0, 0, "Diffuse Indirect",
	"Deliver diffuse indirect pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_diffuse_indirect_get, ViewLayer_use_pass_diffuse_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_color = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_glossy_direct, (PropertyRNA *)&rna_ViewLayer_use_pass_diffuse_indirect,
	-1, "use_pass_diffuse_color", 3, 0, 0, 0, 0, "Diffuse Color",
	"Deliver diffuse color pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_diffuse_color_get, ViewLayer_use_pass_diffuse_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_glossy_direct = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_glossy_indirect, (PropertyRNA *)&rna_ViewLayer_use_pass_diffuse_color,
	-1, "use_pass_glossy_direct", 3, 0, 0, 0, 0, "Glossy Direct",
	"Deliver glossy direct pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_glossy_direct_get, ViewLayer_use_pass_glossy_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_glossy_indirect = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_glossy_color, (PropertyRNA *)&rna_ViewLayer_use_pass_glossy_direct,
	-1, "use_pass_glossy_indirect", 3, 0, 0, 0, 0, "Glossy Indirect",
	"Deliver glossy indirect pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_glossy_indirect_get, ViewLayer_use_pass_glossy_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_glossy_color = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_transmission_direct, (PropertyRNA *)&rna_ViewLayer_use_pass_glossy_indirect,
	-1, "use_pass_glossy_color", 3, 0, 0, 0, 0, "Glossy Color",
	"Deliver glossy color pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_glossy_color_get, ViewLayer_use_pass_glossy_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_transmission_direct = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_transmission_indirect, (PropertyRNA *)&rna_ViewLayer_use_pass_glossy_color,
	-1, "use_pass_transmission_direct", 3, 0, 0, 0, 0, "Transmission Direct",
	"Deliver transmission direct pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_transmission_direct_get, ViewLayer_use_pass_transmission_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_transmission_indirect = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_transmission_color, (PropertyRNA *)&rna_ViewLayer_use_pass_transmission_direct,
	-1, "use_pass_transmission_indirect", 3, 0, 0, 0, 0, "Transmission Indirect",
	"Deliver transmission indirect pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_transmission_indirect_get, ViewLayer_use_pass_transmission_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_transmission_color = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_subsurface_direct, (PropertyRNA *)&rna_ViewLayer_use_pass_transmission_indirect,
	-1, "use_pass_transmission_color", 3, 0, 0, 0, 0, "Transmission Color",
	"Deliver transmission color pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_transmission_color_get, ViewLayer_use_pass_transmission_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_direct = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_subsurface_indirect, (PropertyRNA *)&rna_ViewLayer_use_pass_transmission_color,
	-1, "use_pass_subsurface_direct", 3, 0, 0, 0, 0, "Subsurface Direct",
	"Deliver subsurface direct pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_subsurface_direct_get, ViewLayer_use_pass_subsurface_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_indirect = {
	{(PropertyRNA *)&rna_ViewLayer_use_pass_subsurface_color, (PropertyRNA *)&rna_ViewLayer_use_pass_subsurface_direct,
	-1, "use_pass_subsurface_indirect", 3, 0, 0, 0, 0, "Subsurface Indirect",
	"Deliver subsurface indirect pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_subsurface_indirect_get, ViewLayer_use_pass_subsurface_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_color = {
	{(PropertyRNA *)&rna_ViewLayer_layer_collection, (PropertyRNA *)&rna_ViewLayer_use_pass_subsurface_indirect,
	-1, "use_pass_subsurface_color", 3, 0, 0, 0, 0, "Subsurface Color",
	"Deliver subsurface color pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_pass_subsurface_color_get, ViewLayer_use_pass_subsurface_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ViewLayer_layer_collection = {
	{(PropertyRNA *)&rna_ViewLayer_active_layer_collection, (PropertyRNA *)&rna_ViewLayer_use_pass_subsurface_color,
	-1, "layer_collection", 8650752, 0, 0, 0, 0, "Layer Collection",
	"Root of collections hierarchy of this view layer, its \'collection\' pointer property is the same as the scene\'s master collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_layer_collection_get, nullptr, nullptr, nullptr,&RNA_LayerCollection
};

PointerPropertyRNA rna_ViewLayer_active_layer_collection = {
	{(PropertyRNA *)&rna_ViewLayer_objects, (PropertyRNA *)&rna_ViewLayer_layer_collection,
	-1, "active_layer_collection", 8650753, 0, 0, 0, 0, "Active Layer Collection",
	"Active layer collection in this view layer\'s hierarchy",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84934656, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_active_layer_collection_get, ViewLayer_active_layer_collection_set, nullptr, nullptr,&RNA_LayerCollection
};

CollectionPropertyRNA rna_ViewLayer_objects = {
	{(PropertyRNA *)&rna_ViewLayer_use, (PropertyRNA *)&rna_ViewLayer_active_layer_collection,
	-1, "objects", 128, 0, 0, 0, 0, "Objects",
	"All the objects in this layer",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_LayerObjects},
	ViewLayer_objects_begin, ViewLayer_objects_next, ViewLayer_objects_end, ViewLayer_objects_get, nullptr, ViewLayer_objects_lookup_int, ViewLayer_objects_lookup_string, nullptr, &RNA_Object
};

BoolPropertyRNA rna_ViewLayer_use = {
	{(PropertyRNA *)&rna_ViewLayer_use_freestyle, (PropertyRNA *)&rna_ViewLayer_objects,
	-1, "use", 3, 0, 0, 0, 0, "Enabled",
	"Enable or disable rendering of this View Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84934656, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_get, ViewLayer_use_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ViewLayer_use_freestyle = {
	{(PropertyRNA *)&rna_ViewLayer_freestyle_settings, (PropertyRNA *)&rna_ViewLayer_use,
	-1, "use_freestyle", 3, 0, 0, 0, 0, "Freestyle",
	"Render stylized strokes in this Layer",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84934656, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_use_freestyle_get, ViewLayer_use_freestyle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ViewLayer_freestyle_settings = {
	{(PropertyRNA *)&rna_ViewLayer_depsgraph, (PropertyRNA *)&rna_ViewLayer_use_freestyle,
	-1, "freestyle_settings", 8650752, 0, 0, 0, 0, "Freestyle Settings",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_freestyle_settings_get, nullptr, nullptr, nullptr,&RNA_FreestyleSettings
};

PointerPropertyRNA rna_ViewLayer_depsgraph = {
	{nullptr, (PropertyRNA *)&rna_ViewLayer_freestyle_settings,
	-1, "depsgraph", 8388608, 2, 0, 0, 0, "Dependency Graph",
	"Dependencies in the scene data",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ViewLayer_depsgraph_get, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

FunctionRNA rna_ViewLayer_update_render_passes_func = {
	{(FunctionRNA *)&rna_ViewLayer_update_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"update_render_passes", 2049, "Requery the enabled render passes from the render engine",
	ViewLayer_update_render_passes_call,
	nullptr
};

FunctionRNA rna_ViewLayer_update_func = {
	{nullptr, (FunctionRNA *)&rna_ViewLayer_update_render_passes_func,
	nullptr,
	{nullptr, nullptr}},
	"update", 2068, "Update data tagged to be updated from previous access to data or operators",
	ViewLayer_update_call,
	nullptr
};

StructRNA RNA_ViewLayer = {
	{(ContainerRNA *)&RNA_AOVs, (ContainerRNA *)&RNA_LatticePoint,
	nullptr,
	{(PropertyRNA *)&rna_ViewLayer_rna_properties, (PropertyRNA *)&rna_ViewLayer_depsgraph}},
	"ViewLayer", nullptr, nullptr, 516, nullptr, "View Layer",
	"View layer",
	"*", 187,
	(PropertyRNA *)&rna_ViewLayer_name, (PropertyRNA *)&rna_ViewLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_ViewLayer_path,
	nullptr,
	nullptr,
	nullptr,
	rna_ViewLayer_idprops,
	{(FunctionRNA *)&rna_ViewLayer_update_render_passes_func, (FunctionRNA *)&rna_ViewLayer_update_func}
};

/* List of AOVs */
CollectionPropertyRNA rna_AOVs_rna_properties = {
	{(PropertyRNA *)&rna_AOVs_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AOVs_rna_properties_begin, AOVs_rna_properties_next, AOVs_rna_properties_end, AOVs_rna_properties_get, nullptr, nullptr, AOVs_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AOVs_rna_type = {
	{nullptr, (PropertyRNA *)&rna_AOVs_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AOVs_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_AOVs_add_aov = {
	{nullptr, nullptr,
	-1, "aov", 8388608, 0, 2, 0, 0, "",
	"Newly created AOV",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AOV
};

FunctionRNA rna_AOVs_add_func = {
	{(FunctionRNA *)&rna_AOVs_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_AOVs_add_aov, (PropertyRNA *)&rna_AOVs_add_aov}},
	"add", 0, "add",
	AOVs_add_call,
	(PropertyRNA *)&rna_AOVs_add_aov
};

PointerPropertyRNA rna_AOVs_remove_aov = {
	{nullptr, nullptr,
	-1, "aov", 262144, 0, 1, 0, 0, "",
	"AOV to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AOV
};

FunctionRNA rna_AOVs_remove_func = {
	{nullptr, (FunctionRNA *)&rna_AOVs_add_func,
	nullptr,
	{(PropertyRNA *)&rna_AOVs_remove_aov, (PropertyRNA *)&rna_AOVs_remove_aov}},
	"remove", 16, "Remove an AOV",
	AOVs_remove_call,
	nullptr
};

StructRNA RNA_AOVs = {
	{(ContainerRNA *)&RNA_Lightgroups, (ContainerRNA *)&RNA_ViewLayer,
	nullptr,
	{(PropertyRNA *)&rna_AOVs_rna_properties, (PropertyRNA *)&rna_AOVs_rna_type}},
	"AOVs", nullptr, nullptr, 516, nullptr, "List of AOVs",
	"Collection of AOVs",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AOVs_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_AOVs_add_func, (FunctionRNA *)&rna_AOVs_remove_func}
};

/* List of Lightgroups */
CollectionPropertyRNA rna_Lightgroups_rna_properties = {
	{(PropertyRNA *)&rna_Lightgroups_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lightgroups_rna_properties_begin, Lightgroups_rna_properties_next, Lightgroups_rna_properties_end, Lightgroups_rna_properties_get, nullptr, nullptr, Lightgroups_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Lightgroups_rna_type = {
	{nullptr, (PropertyRNA *)&rna_Lightgroups_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Lightgroups_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Lightgroups_add_lightgroup = {
	{(PropertyRNA *)&rna_Lightgroups_add_name, nullptr,
	-1, "lightgroup", 8388608, 0, 2, 0, 0, "",
	"Newly created Lightgroup",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Lightgroup
};

StringPropertyRNA rna_Lightgroups_add_name = {
	{nullptr, (PropertyRNA *)&rna_Lightgroups_add_lightgroup,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of newly created lightgroup",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_Lightgroups_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Lightgroups_add_lightgroup, (PropertyRNA *)&rna_Lightgroups_add_name}},
	"add", 0, "add",
	Lightgroups_add_call,
	(PropertyRNA *)&rna_Lightgroups_add_lightgroup
};

StructRNA RNA_Lightgroups = {
	{(ContainerRNA *)&RNA_LayerObjects, (ContainerRNA *)&RNA_AOVs,
	nullptr,
	{(PropertyRNA *)&rna_Lightgroups_rna_properties, (PropertyRNA *)&rna_Lightgroups_rna_type}},
	"Lightgroups", nullptr, nullptr, 516, nullptr, "List of Lightgroups",
	"Collection of Lightgroups",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Lightgroups_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Lightgroups_add_func, (FunctionRNA *)&rna_Lightgroups_add_func}
};

/* Layer Objects */
CollectionPropertyRNA rna_LayerObjects_rna_properties = {
	{(PropertyRNA *)&rna_LayerObjects_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerObjects_rna_properties_begin, LayerObjects_rna_properties_next, LayerObjects_rna_properties_end, LayerObjects_rna_properties_get, nullptr, nullptr, LayerObjects_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_LayerObjects_rna_type = {
	{(PropertyRNA *)&rna_LayerObjects_active, (PropertyRNA *)&rna_LayerObjects_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerObjects_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_LayerObjects_active = {
	{(PropertyRNA *)&rna_LayerObjects_selected, (PropertyRNA *)&rna_LayerObjects_rna_type,
	-1, "active", 41943169, 0, 0, 0, 0, "Active Object",
	"Active object for this layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84344832, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerObjects_active_get, LayerObjects_active_set, nullptr, nullptr,&RNA_Object
};

CollectionPropertyRNA rna_LayerObjects_selected = {
	{nullptr, (PropertyRNA *)&rna_LayerObjects_active,
	-1, "selected", 128, 0, 0, 0, 0, "Selected Objects",
	"All the selected objects of this layer",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerObjects_selected_begin, LayerObjects_selected_next, LayerObjects_selected_end, LayerObjects_selected_get, nullptr, LayerObjects_selected_lookup_int, LayerObjects_selected_lookup_string, nullptr, &RNA_Object
};

StructRNA RNA_LayerObjects = {
	{(ContainerRNA *)&RNA_FreestyleLineSet, (ContainerRNA *)&RNA_Lightgroups,
	nullptr,
	{(PropertyRNA *)&rna_LayerObjects_rna_properties, (PropertyRNA *)&rna_LayerObjects_selected}},
	"LayerObjects", nullptr, nullptr, 516, nullptr, "Layer Objects",
	"Collections of objects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_LayerObjects_rna_properties,
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

/* Freestyle Line Set */
CollectionPropertyRNA rna_FreestyleLineSet_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleLineSet_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_rna_properties_begin, FreestyleLineSet_rna_properties_next, FreestyleLineSet_rna_properties_end, FreestyleLineSet_rna_properties_get, nullptr, nullptr, FreestyleLineSet_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FreestyleLineSet_rna_type = {
	{(PropertyRNA *)&rna_FreestyleLineSet_linestyle, (PropertyRNA *)&rna_FreestyleLineSet_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_FreestyleLineSet_linestyle = {
	{(PropertyRNA *)&rna_FreestyleLineSet_name, (PropertyRNA *)&rna_FreestyleLineSet_rna_type,
	-1, "linestyle", 8650945, 0, 0, 0, 0, "Line Style",
	"Line style settings",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_linestyle_get, FreestyleLineSet_linestyle_set, nullptr, nullptr,&RNA_FreestyleLineStyle
};

StringPropertyRNA rna_FreestyleLineSet_name = {
	{(PropertyRNA *)&rna_FreestyleLineSet_show_render, (PropertyRNA *)&rna_FreestyleLineSet_linestyle,
	-1, "name", 262145, 0, 0, 0, 0, "Line Set Name",
	"Line set name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {64, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_name_get, FreestyleLineSet_name_length, FreestyleLineSet_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_FreestyleLineSet_show_render = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_visibility, (PropertyRNA *)&rna_FreestyleLineSet_name,
	-1, "show_render", 3, 0, 0, 0, 0, "Render",
	"Enable or disable this line set during stroke rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_show_render_get, FreestyleLineSet_show_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_visibility = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_edge_types, (PropertyRNA *)&rna_FreestyleLineSet_show_render,
	-1, "select_by_visibility", 3, 0, 0, 0, 0, "Selection by Visibility",
	"Select feature edges based on visibility",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_by_visibility_get, FreestyleLineSet_select_by_visibility_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_edge_types = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_collection, (PropertyRNA *)&rna_FreestyleLineSet_select_by_visibility,
	-1, "select_by_edge_types", 3, 0, 0, 0, 0, "Selection by Edge Types",
	"Select feature edges based on edge types",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_by_edge_types_get, FreestyleLineSet_select_by_edge_types_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_collection = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_image_border, (PropertyRNA *)&rna_FreestyleLineSet_select_by_edge_types,
	-1, "select_by_collection", 3, 0, 0, 0, 0, "Selection by Collection",
	"Select feature edges based on a collection of objects",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_by_collection_get, FreestyleLineSet_select_by_collection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_image_border = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_face_marks, (PropertyRNA *)&rna_FreestyleLineSet_select_by_collection,
	-1, "select_by_image_border", 3, 0, 0, 0, 0, "Selection by Image Border",
	"Select feature edges by image border (less memory consumption)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_by_image_border_get, FreestyleLineSet_select_by_image_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_face_marks = {
	{(PropertyRNA *)&rna_FreestyleLineSet_edge_type_negation, (PropertyRNA *)&rna_FreestyleLineSet_select_by_image_border,
	-1, "select_by_face_marks", 3, 0, 0, 0, 0, "Selection by Face Marks",
	"Select feature edges by face marks",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_by_face_marks_get, FreestyleLineSet_select_by_face_marks_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FreestyleLineSet_edge_type_negation_items[3] = {
	{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges satisfying the given edge type conditions"},
	{4, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not satisfying the given edge type conditions"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleLineSet_edge_type_negation = {
	{(PropertyRNA *)&rna_FreestyleLineSet_edge_type_combination, (PropertyRNA *)&rna_FreestyleLineSet_select_by_face_marks,
	-1, "edge_type_negation", 3, 0, 0, 4, 0, "Edge Type Negation",
	"Specify either inclusion or exclusion of feature edges selected by edge types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, flags), (RawPropertyType)0, nullptr},
	FreestyleLineSet_edge_type_negation_get, FreestyleLineSet_edge_type_negation_set, nullptr, nullptr, nullptr, rna_FreestyleLineSet_edge_type_negation_items, 2, 0
};

static const EnumPropertyItem rna_FreestyleLineSet_edge_type_combination_items[3] = {
	{0, "OR", 0, "Logical OR", "Select feature edges satisfying at least one of edge type conditions"},
	{8, "AND", 0, "Logical AND", "Select feature edges satisfying all edge type conditions"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleLineSet_edge_type_combination = {
	{(PropertyRNA *)&rna_FreestyleLineSet_collection, (PropertyRNA *)&rna_FreestyleLineSet_edge_type_negation,
	-1, "edge_type_combination", 3, 0, 0, 4, 0, "Edge Type Combination",
	"Specify a logical combination of selection conditions on feature edge types",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, flags), (RawPropertyType)0, nullptr},
	FreestyleLineSet_edge_type_combination_get, FreestyleLineSet_edge_type_combination_set, nullptr, nullptr, nullptr, rna_FreestyleLineSet_edge_type_combination_items, 2, 0
};

PointerPropertyRNA rna_FreestyleLineSet_collection = {
	{(PropertyRNA *)&rna_FreestyleLineSet_collection_negation, (PropertyRNA *)&rna_FreestyleLineSet_edge_type_combination,
	-1, "collection", 8388737, 0, 0, 0, 0, "Collection",
	"A collection of objects based on which feature edges are selected",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_collection_get, FreestyleLineSet_collection_set, nullptr, nullptr,&RNA_Collection
};

static const EnumPropertyItem rna_FreestyleLineSet_collection_negation_items[3] = {
	{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges belonging to some object in the group"},
	{16, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not belonging to any object in the group"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleLineSet_collection_negation = {
	{(PropertyRNA *)&rna_FreestyleLineSet_face_mark_negation, (PropertyRNA *)&rna_FreestyleLineSet_collection,
	-1, "collection_negation", 3, 0, 0, 4, 0, "Collection Negation",
	"Specify either inclusion or exclusion of feature edges belonging to a collection of objects",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, flags), (RawPropertyType)0, nullptr},
	FreestyleLineSet_collection_negation_get, FreestyleLineSet_collection_negation_set, nullptr, nullptr, nullptr, rna_FreestyleLineSet_collection_negation_items, 2, 0
};

static const EnumPropertyItem rna_FreestyleLineSet_face_mark_negation_items[3] = {
	{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges satisfying the given face mark conditions"},
	{32, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not satisfying the given face mark conditions"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleLineSet_face_mark_negation = {
	{(PropertyRNA *)&rna_FreestyleLineSet_face_mark_condition, (PropertyRNA *)&rna_FreestyleLineSet_collection_negation,
	-1, "face_mark_negation", 3, 0, 0, 4, 0, "Face Mark Negation",
	"Specify either inclusion or exclusion of feature edges selected by face marks",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, flags), (RawPropertyType)0, nullptr},
	FreestyleLineSet_face_mark_negation_get, FreestyleLineSet_face_mark_negation_set, nullptr, nullptr, nullptr, rna_FreestyleLineSet_face_mark_negation_items, 2, 0
};

static const EnumPropertyItem rna_FreestyleLineSet_face_mark_condition_items[3] = {
	{0, "ONE", 0, "One Face", "Select a feature edge if either of its adjacent faces is marked"},
	{64, "BOTH", 0, "Both Faces", "Select a feature edge if both of its adjacent faces are marked"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleLineSet_face_mark_condition = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_silhouette, (PropertyRNA *)&rna_FreestyleLineSet_face_mark_negation,
	-1, "face_mark_condition", 3, 0, 0, 4, 0, "Face Mark Condition",
	"Specify a feature edge selection condition based on face marks",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, flags), (RawPropertyType)0, nullptr},
	FreestyleLineSet_face_mark_condition_get, FreestyleLineSet_face_mark_condition_set, nullptr, nullptr, nullptr, rna_FreestyleLineSet_face_mark_condition_items, 2, 0
};

BoolPropertyRNA rna_FreestyleLineSet_select_silhouette = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_border, (PropertyRNA *)&rna_FreestyleLineSet_face_mark_condition,
	-1, "select_silhouette", 3, 0, 0, 0, 0, "Silhouette",
	"Select silhouettes (edges at the boundary of visible and hidden faces)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_silhouette_get, FreestyleLineSet_select_silhouette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_border = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_crease, (PropertyRNA *)&rna_FreestyleLineSet_select_silhouette,
	-1, "select_border", 3, 0, 0, 0, 0, "Border",
	"Select border edges (open mesh edges)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_border_get, FreestyleLineSet_select_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_crease = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_ridge_valley, (PropertyRNA *)&rna_FreestyleLineSet_select_border,
	-1, "select_crease", 3, 0, 0, 0, 0, "Crease",
	"Select crease edges (those between two faces making an angle smaller than the Crease Angle)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_crease_get, FreestyleLineSet_select_crease_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_ridge_valley = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_suggestive_contour, (PropertyRNA *)&rna_FreestyleLineSet_select_crease,
	-1, "select_ridge_valley", 3, 0, 0, 0, 0, "Ridge & Valley",
	"Select ridges and valleys (boundary lines between convex and concave areas of surface)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_ridge_valley_get, FreestyleLineSet_select_ridge_valley_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_suggestive_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_material_boundary, (PropertyRNA *)&rna_FreestyleLineSet_select_ridge_valley,
	-1, "select_suggestive_contour", 3, 0, 0, 0, 0, "Suggestive Contour",
	"Select suggestive contours (almost silhouette/contour edges)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_suggestive_contour_get, FreestyleLineSet_select_suggestive_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_material_boundary = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_contour, (PropertyRNA *)&rna_FreestyleLineSet_select_suggestive_contour,
	-1, "select_material_boundary", 3, 0, 0, 0, 0, "Material Boundary",
	"Select edges at material boundaries",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_material_boundary_get, FreestyleLineSet_select_material_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_external_contour, (PropertyRNA *)&rna_FreestyleLineSet_select_material_boundary,
	-1, "select_contour", 3, 0, 0, 0, 0, "Contour",
	"Select contours (outer silhouettes of each object)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_contour_get, FreestyleLineSet_select_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_external_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_edge_mark, (PropertyRNA *)&rna_FreestyleLineSet_select_contour,
	-1, "select_external_contour", 3, 0, 0, 0, 0, "External Contour",
	"Select external contours (outer silhouettes of occluding and occluded objects)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_external_contour_get, FreestyleLineSet_select_external_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_select_edge_mark = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_silhouette, (PropertyRNA *)&rna_FreestyleLineSet_select_external_contour,
	-1, "select_edge_mark", 3, 0, 0, 0, 0, "Edge Mark",
	"Select edge marks (edges annotated by Freestyle edge marks)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_select_edge_mark_get, FreestyleLineSet_select_edge_mark_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_silhouette = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_border, (PropertyRNA *)&rna_FreestyleLineSet_select_edge_mark,
	-1, "exclude_silhouette", 3, 0, 0, 0, 0, "Silhouette",
	"Exclude silhouette edges",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_silhouette_get, FreestyleLineSet_exclude_silhouette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_border = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_crease, (PropertyRNA *)&rna_FreestyleLineSet_exclude_silhouette,
	-1, "exclude_border", 3, 0, 0, 0, 0, "Border",
	"Exclude border edges",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_border_get, FreestyleLineSet_exclude_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_crease = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_ridge_valley, (PropertyRNA *)&rna_FreestyleLineSet_exclude_border,
	-1, "exclude_crease", 3, 0, 0, 0, 0, "Crease",
	"Exclude crease edges",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_crease_get, FreestyleLineSet_exclude_crease_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_ridge_valley = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_suggestive_contour, (PropertyRNA *)&rna_FreestyleLineSet_exclude_crease,
	-1, "exclude_ridge_valley", 3, 0, 0, 0, 0, "Ridge & Valley",
	"Exclude ridges and valleys",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_ridge_valley_get, FreestyleLineSet_exclude_ridge_valley_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_suggestive_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_material_boundary, (PropertyRNA *)&rna_FreestyleLineSet_exclude_ridge_valley,
	-1, "exclude_suggestive_contour", 3, 0, 0, 0, 0, "Suggestive Contour",
	"Exclude suggestive contours",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_suggestive_contour_get, FreestyleLineSet_exclude_suggestive_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_material_boundary = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_contour, (PropertyRNA *)&rna_FreestyleLineSet_exclude_suggestive_contour,
	-1, "exclude_material_boundary", 3, 0, 0, 0, 0, "Material Boundary",
	"Exclude edges at material boundaries",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_material_boundary_get, FreestyleLineSet_exclude_material_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_external_contour, (PropertyRNA *)&rna_FreestyleLineSet_exclude_material_boundary,
	-1, "exclude_contour", 3, 0, 0, 0, 0, "Contour",
	"Exclude contours",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_contour_get, FreestyleLineSet_exclude_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_external_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_edge_mark, (PropertyRNA *)&rna_FreestyleLineSet_exclude_contour,
	-1, "exclude_external_contour", 3, 0, 0, 0, 0, "External Contour",
	"Exclude external contours",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_external_contour_get, FreestyleLineSet_exclude_external_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_edge_mark = {
	{(PropertyRNA *)&rna_FreestyleLineSet_visibility, (PropertyRNA *)&rna_FreestyleLineSet_exclude_external_contour,
	-1, "exclude_edge_mark", 3, 0, 0, 0, 0, "Edge Mark",
	"Exclude edge marks",
	19, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleLineSet_exclude_edge_mark_get, FreestyleLineSet_exclude_edge_mark_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_FreestyleLineSet_visibility_items[4] = {
	{1, "VISIBLE", 0, "Visible", "Select visible feature edges"},
	{2, "HIDDEN", 0, "Hidden", "Select hidden feature edges"},
	{3, "RANGE", 0, "Quantitative Invisibility", "Select feature edges within a range of quantitative invisibility (QI) values"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleLineSet_visibility = {
	{(PropertyRNA *)&rna_FreestyleLineSet_qi_start, (PropertyRNA *)&rna_FreestyleLineSet_exclude_edge_mark,
	-1, "visibility", 3, 0, 0, 4, 0, "Visibility",
	"Determine how to use visibility for feature edge selection",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, qi), (RawPropertyType)1, nullptr},
	FreestyleLineSet_visibility_get, FreestyleLineSet_visibility_set, nullptr, nullptr, nullptr, rna_FreestyleLineSet_visibility_items, 3, 1
};

IntPropertyRNA rna_FreestyleLineSet_qi_start = {
	{(PropertyRNA *)&rna_FreestyleLineSet_qi_end, (PropertyRNA *)&rna_FreestyleLineSet_visibility,
	-1, "qi_start", 3, 0, 0, 4, 0, "Start",
	"First QI value of the QI range",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, qi_start), (RawPropertyType)0, nullptr},
	FreestyleLineSet_qi_start_get, FreestyleLineSet_qi_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_FreestyleLineSet_qi_end = {
	{nullptr, (PropertyRNA *)&rna_FreestyleLineSet_qi_start,
	-1, "qi_end", 3, 0, 0, 4, 0, "End",
	"Last QI value of the QI range",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleLineSet, qi_end), (RawPropertyType)0, nullptr},
	FreestyleLineSet_qi_end_get, FreestyleLineSet_qi_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_FreestyleLineSet = {
	{(ContainerRNA *)&RNA_FreestyleModuleSettings, (ContainerRNA *)&RNA_LayerObjects,
	nullptr,
	{(PropertyRNA *)&rna_FreestyleLineSet_rna_properties, (PropertyRNA *)&rna_FreestyleLineSet_qi_end}},
	"FreestyleLineSet", nullptr, nullptr, 516, nullptr, "Freestyle Line Set",
	"Line set for associating lines and style parameters",
	"*", 17,
	(PropertyRNA *)&rna_FreestyleLineSet_name, (PropertyRNA *)&rna_FreestyleLineSet_rna_properties,
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

/* Freestyle Module */
CollectionPropertyRNA rna_FreestyleModuleSettings_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleModuleSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleModuleSettings_rna_properties_begin, FreestyleModuleSettings_rna_properties_next, FreestyleModuleSettings_rna_properties_end, FreestyleModuleSettings_rna_properties_get, nullptr, nullptr, FreestyleModuleSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FreestyleModuleSettings_rna_type = {
	{(PropertyRNA *)&rna_FreestyleModuleSettings_script, (PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleModuleSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_FreestyleModuleSettings_script = {
	{(PropertyRNA *)&rna_FreestyleModuleSettings_use, (PropertyRNA *)&rna_FreestyleModuleSettings_rna_type,
	-1, "script", 8388737, 0, 0, 0, 0, "Style Module",
	"Python script to define a style module",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleModuleSettings_script_get, FreestyleModuleSettings_script_set, nullptr, nullptr,&RNA_Text
};

BoolPropertyRNA rna_FreestyleModuleSettings_use = {
	{nullptr, (PropertyRNA *)&rna_FreestyleModuleSettings_script,
	-1, "use", 3, 0, 0, 0, 0, "Use",
	"Enable or disable this style module during stroke rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleModuleSettings_use_get, FreestyleModuleSettings_use_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_FreestyleModuleSettings = {
	{(ContainerRNA *)&RNA_FreestyleSettings, (ContainerRNA *)&RNA_FreestyleLineSet,
	nullptr,
	{(PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties, (PropertyRNA *)&rna_FreestyleModuleSettings_use}},
	"FreestyleModuleSettings", nullptr, nullptr, 516, nullptr, "Freestyle Module",
	"Style module configuration for specifying a style module",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties,
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

/* Freestyle Settings */
CollectionPropertyRNA rna_FreestyleSettings_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleSettings_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_rna_properties_begin, FreestyleSettings_rna_properties_next, FreestyleSettings_rna_properties_end, FreestyleSettings_rna_properties_get, nullptr, nullptr, FreestyleSettings_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FreestyleSettings_rna_type = {
	{(PropertyRNA *)&rna_FreestyleSettings_modules, (PropertyRNA *)&rna_FreestyleSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_FreestyleSettings_modules = {
	{(PropertyRNA *)&rna_FreestyleSettings_mode, (PropertyRNA *)&rna_FreestyleSettings_rna_type,
	-1, "modules", 0, 0, 0, 0, 0, "Style Modules",
	"A list of style modules (to be applied from top to bottom)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_FreestyleModules},
	FreestyleSettings_modules_begin, FreestyleSettings_modules_next, FreestyleSettings_modules_end, FreestyleSettings_modules_get, nullptr, FreestyleSettings_modules_lookup_int, nullptr, nullptr, &RNA_FreestyleModuleSettings
};

static const EnumPropertyItem rna_FreestyleSettings_mode_items[3] = {
	{1, "SCRIPT", 0, "Python Scripting", "Advanced mode for using style modules written in Python"},
	{2, "EDITOR", 0, "Parameter Editor", "Basic mode for interactive style parameter editing"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_FreestyleSettings_mode = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_culling, (PropertyRNA *)&rna_FreestyleSettings_modules,
	-1, "mode", 3, 0, 0, 4, 0, "Control Mode",
	"Select the Freestyle control mode",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleConfig, mode), (RawPropertyType)0, nullptr},
	FreestyleSettings_mode_get, FreestyleSettings_mode_set, nullptr, nullptr, nullptr, rna_FreestyleSettings_mode_items, 2, 1
};

BoolPropertyRNA rna_FreestyleSettings_use_culling = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_suggestive_contours, (PropertyRNA *)&rna_FreestyleSettings_mode,
	-1, "use_culling", 3, 0, 0, 0, 0, "Culling",
	"If enabled, out-of-view edges are ignored",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_use_culling_get, FreestyleSettings_use_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleSettings_use_suggestive_contours = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_ridges_and_valleys, (PropertyRNA *)&rna_FreestyleSettings_use_culling,
	-1, "use_suggestive_contours", 3, 0, 0, 0, 0, "Suggestive Contours",
	"Enable suggestive contours",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_use_suggestive_contours_get, FreestyleSettings_use_suggestive_contours_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleSettings_use_ridges_and_valleys = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_material_boundaries, (PropertyRNA *)&rna_FreestyleSettings_use_suggestive_contours,
	-1, "use_ridges_and_valleys", 3, 0, 0, 0, 0, "Ridges and Valleys",
	"Enable ridges and valleys",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_use_ridges_and_valleys_get, FreestyleSettings_use_ridges_and_valleys_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleSettings_use_material_boundaries = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_smoothness, (PropertyRNA *)&rna_FreestyleSettings_use_ridges_and_valleys,
	-1, "use_material_boundaries", 3, 0, 0, 0, 0, "Material Boundaries",
	"Enable material boundaries",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_use_material_boundaries_get, FreestyleSettings_use_material_boundaries_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleSettings_use_smoothness = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_view_map_cache, (PropertyRNA *)&rna_FreestyleSettings_use_material_boundaries,
	-1, "use_smoothness", 3, 0, 0, 0, 0, "Face Smoothness",
	"Take face smoothness into account in view map calculation",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_use_smoothness_get, FreestyleSettings_use_smoothness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleSettings_use_view_map_cache = {
	{(PropertyRNA *)&rna_FreestyleSettings_as_render_pass, (PropertyRNA *)&rna_FreestyleSettings_use_smoothness,
	-1, "use_view_map_cache", 3, 0, 0, 0, 0, "View Map Cache",
	"Keep the computed view map and avoid recalculating it if mesh geometry is unchanged",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_use_view_map_cache_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_use_view_map_cache_get, FreestyleSettings_use_view_map_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_FreestyleSettings_as_render_pass = {
	{(PropertyRNA *)&rna_FreestyleSettings_sphere_radius, (PropertyRNA *)&rna_FreestyleSettings_use_view_map_cache,
	-1, "as_render_pass", 3, 0, 0, 0, 0, "As Render Pass",
	"Renders Freestyle output to a separate pass instead of overlaying it on the Combined pass",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleSettings_as_render_pass_get, FreestyleSettings_as_render_pass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FloatPropertyRNA rna_FreestyleSettings_sphere_radius = {
	{(PropertyRNA *)&rna_FreestyleSettings_kr_derivative_epsilon, (PropertyRNA *)&rna_FreestyleSettings_as_render_pass,
	-1, "sphere_radius", 3, 0, 0, 4, 0, "Sphere Radius",
	"Sphere radius for computing curvatures",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleConfig, sphere_radius), (RawPropertyType)5, nullptr},
	FreestyleSettings_sphere_radius_get, FreestyleSettings_sphere_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 1.0f, nullptr
};

FloatPropertyRNA rna_FreestyleSettings_kr_derivative_epsilon = {
	{(PropertyRNA *)&rna_FreestyleSettings_crease_angle, (PropertyRNA *)&rna_FreestyleSettings_sphere_radius,
	-1, "kr_derivative_epsilon", 3, 0, 0, 4, 0, "Kr Derivative Epsilon",
	"Kr derivative epsilon for computing suggestive contours",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleConfig, dkr_epsilon), (RawPropertyType)5, nullptr},
	FreestyleSettings_kr_derivative_epsilon_get, FreestyleSettings_kr_derivative_epsilon_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_FreestyleSettings_crease_angle = {
	{(PropertyRNA *)&rna_FreestyleSettings_linesets, (PropertyRNA *)&rna_FreestyleSettings_kr_derivative_epsilon,
	-1, "crease_angle", 3, 0, 0, 4, 0, "Crease Angle",
	"Angular threshold for detecting crease edges",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_ANGLE | (int)PROP_UNIT_ROTATION), nullptr, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FreestyleConfig, crease_angle), (RawPropertyType)5, nullptr},
	FreestyleSettings_crease_angle_get, FreestyleSettings_crease_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, nullptr
};

CollectionPropertyRNA rna_FreestyleSettings_linesets = {
	{nullptr, (PropertyRNA *)&rna_FreestyleSettings_crease_angle,
	-1, "linesets", 0, 0, 0, 0, 0, "Line Sets",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_Linesets},
	FreestyleSettings_linesets_begin, FreestyleSettings_linesets_next, FreestyleSettings_linesets_end, FreestyleSettings_linesets_get, nullptr, FreestyleSettings_linesets_lookup_int, FreestyleSettings_linesets_lookup_string, nullptr, &RNA_FreestyleLineSet
};

StructRNA RNA_FreestyleSettings = {
	{(ContainerRNA *)&RNA_FreestyleModules, (ContainerRNA *)&RNA_FreestyleModuleSettings,
	nullptr,
	{(PropertyRNA *)&rna_FreestyleSettings_rna_properties, (PropertyRNA *)&rna_FreestyleSettings_linesets}},
	"FreestyleSettings", nullptr, nullptr, 516, nullptr, "Freestyle Settings",
	"Freestyle settings for a ViewLayer data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FreestyleSettings_rna_properties,
	nullptr,
	&RNA_ViewLayer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Style Modules */
CollectionPropertyRNA rna_FreestyleModules_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleModules_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleModules_rna_properties_begin, FreestyleModules_rna_properties_next, FreestyleModules_rna_properties_end, FreestyleModules_rna_properties_get, nullptr, nullptr, FreestyleModules_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FreestyleModules_rna_type = {
	{nullptr, (PropertyRNA *)&rna_FreestyleModules_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FreestyleModules_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_FreestyleModules_new_module = {
	{nullptr, nullptr,
	-1, "module", 8388608, 0, 2, 0, 0, "",
	"Newly created style module",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FreestyleModuleSettings
};

FunctionRNA rna_FreestyleModules_new_func = {
	{(FunctionRNA *)&rna_FreestyleModules_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_FreestyleModules_new_module, (PropertyRNA *)&rna_FreestyleModules_new_module}},
	"new", 2048, "Add a style module to scene render layer Freestyle settings",
	FreestyleModules_new_call,
	(PropertyRNA *)&rna_FreestyleModules_new_module
};

PointerPropertyRNA rna_FreestyleModules_remove_module = {
	{nullptr, nullptr,
	-1, "module", 262144, 0, 5, 0, 0, "",
	"Style module to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FreestyleModuleSettings
};

FunctionRNA rna_FreestyleModules_remove_func = {
	{nullptr, (FunctionRNA *)&rna_FreestyleModules_new_func,
	nullptr,
	{(PropertyRNA *)&rna_FreestyleModules_remove_module, (PropertyRNA *)&rna_FreestyleModules_remove_module}},
	"remove", 2064, "Remove a style module from scene render layer Freestyle settings",
	FreestyleModules_remove_call,
	nullptr
};

StructRNA RNA_FreestyleModules = {
	{(ContainerRNA *)&RNA_Linesets, (ContainerRNA *)&RNA_FreestyleSettings,
	nullptr,
	{(PropertyRNA *)&rna_FreestyleModules_rna_properties, (PropertyRNA *)&rna_FreestyleModules_rna_type}},
	"FreestyleModules", nullptr, nullptr, 516, nullptr, "Style Modules",
	"A list of style modules (to be applied from top to bottom)",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FreestyleModules_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_FreestyleModules_new_func, (FunctionRNA *)&rna_FreestyleModules_remove_func}
};

/* Line Sets */
CollectionPropertyRNA rna_Linesets_rna_properties = {
	{(PropertyRNA *)&rna_Linesets_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Linesets_rna_properties_begin, Linesets_rna_properties_next, Linesets_rna_properties_end, Linesets_rna_properties_get, nullptr, nullptr, Linesets_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Linesets_rna_type = {
	{(PropertyRNA *)&rna_Linesets_active, (PropertyRNA *)&rna_Linesets_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Linesets_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_Linesets_active = {
	{(PropertyRNA *)&rna_Linesets_active_index, (PropertyRNA *)&rna_Linesets_rna_type,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Line Set",
	"Active line set being displayed",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Linesets_active_get, nullptr, nullptr, nullptr,&RNA_FreestyleLineSet
};

IntPropertyRNA rna_Linesets_active_index = {
	{nullptr, (PropertyRNA *)&rna_Linesets_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Line Set Index",
	"Index of active line set slot",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 84148224, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Linesets_active_index_get, Linesets_active_index_set, nullptr, nullptr, rna_FreestyleSettings_active_lineset_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_Linesets_new_name = {
	{(PropertyRNA *)&rna_Linesets_new_lineset, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the line set (not unique)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "LineSet"
};

PointerPropertyRNA rna_Linesets_new_lineset = {
	{nullptr, (PropertyRNA *)&rna_Linesets_new_name,
	-1, "lineset", 8388608, 0, 2, 0, 0, "",
	"Newly created line set",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FreestyleLineSet
};

FunctionRNA rna_Linesets_new_func = {
	{(FunctionRNA *)&rna_Linesets_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Linesets_new_name, (PropertyRNA *)&rna_Linesets_new_lineset}},
	"new", 2052, "Add a line set to scene render layer Freestyle settings",
	Linesets_new_call,
	(PropertyRNA *)&rna_Linesets_new_lineset
};

PointerPropertyRNA rna_Linesets_remove_lineset = {
	{nullptr, nullptr,
	-1, "lineset", 262144, 0, 5, 0, 0, "",
	"Line set to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FreestyleLineSet
};

FunctionRNA rna_Linesets_remove_func = {
	{nullptr, (FunctionRNA *)&rna_Linesets_new_func,
	nullptr,
	{(PropertyRNA *)&rna_Linesets_remove_lineset, (PropertyRNA *)&rna_Linesets_remove_lineset}},
	"remove", 2064, "Remove a line set from scene render layer Freestyle settings",
	Linesets_remove_call,
	nullptr
};

StructRNA RNA_Linesets = {
	{(ContainerRNA *)&RNA_LayerCollection, (ContainerRNA *)&RNA_FreestyleModules,
	nullptr,
	{(PropertyRNA *)&rna_Linesets_rna_properties, (PropertyRNA *)&rna_Linesets_active_index}},
	"Linesets", nullptr, nullptr, 516, nullptr, "Line Sets",
	"Line sets for associating lines and style parameters",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Linesets_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Linesets_new_func, (FunctionRNA *)&rna_Linesets_remove_func}
};

/* Layer Collection */
CollectionPropertyRNA rna_LayerCollection_rna_properties = {
	{(PropertyRNA *)&rna_LayerCollection_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_rna_properties_begin, LayerCollection_rna_properties_next, LayerCollection_rna_properties_end, LayerCollection_rna_properties_get, nullptr, nullptr, LayerCollection_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_LayerCollection_rna_type = {
	{(PropertyRNA *)&rna_LayerCollection_collection, (PropertyRNA *)&rna_LayerCollection_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_LayerCollection_collection = {
	{(PropertyRNA *)&rna_LayerCollection_name, (PropertyRNA *)&rna_LayerCollection_rna_type,
	-1, "collection", 8650880, 0, 0, 0, 0, "Collection",
	"Collection this layer collection is wrapping",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_collection_get, nullptr, nullptr, nullptr,&RNA_Collection
};

StringPropertyRNA rna_LayerCollection_name = {
	{(PropertyRNA *)&rna_LayerCollection_children, (PropertyRNA *)&rna_LayerCollection_collection,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Name of this layer collection (same as its collection one)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {66, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_name_get, LayerCollection_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 66, ""
};

CollectionPropertyRNA rna_LayerCollection_children = {
	{(PropertyRNA *)&rna_LayerCollection_exclude, (PropertyRNA *)&rna_LayerCollection_name,
	-1, "children", 0, 0, 0, 0, 0, "Children",
	"Layer collection children",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_children_begin, LayerCollection_children_next, LayerCollection_children_end, LayerCollection_children_get, nullptr, LayerCollection_children_lookup_int, LayerCollection_children_lookup_string, nullptr, &RNA_LayerCollection
};

BoolPropertyRNA rna_LayerCollection_exclude = {
	{(PropertyRNA *)&rna_LayerCollection_holdout, (PropertyRNA *)&rna_LayerCollection_children,
	-1, "exclude", 4353, 0, 0, 0, 0, "Exclude from View Layer",
	"Exclude from view layer",
	39, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LayerCollection_exclude_update, 84934656, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_exclude_get, LayerCollection_exclude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LayerCollection_holdout = {
	{(PropertyRNA *)&rna_LayerCollection_indirect_only, (PropertyRNA *)&rna_LayerCollection_exclude,
	-1, "holdout", 4097, 0, 0, 0, 0, "Holdout",
	"Mask out objects in collection from view layer",
	412, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LayerCollection_update, 84934656, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_holdout_get, LayerCollection_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LayerCollection_indirect_only = {
	{(PropertyRNA *)&rna_LayerCollection_hide_viewport, (PropertyRNA *)&rna_LayerCollection_holdout,
	-1, "indirect_only", 4097, 0, 0, 0, 0, "Indirect Only",
	"Objects in collection only contribute indirectly (through shadows and reflections) in the view layer",
	414, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LayerCollection_update, 84934656, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_indirect_only_get, LayerCollection_indirect_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LayerCollection_hide_viewport = {
	{(PropertyRNA *)&rna_LayerCollection_is_visible, (PropertyRNA *)&rna_LayerCollection_indirect_only,
	-1, "hide_viewport", 4353, 1, 0, 0, 0, "Hide in Viewport",
	"Temporarily hide in viewport",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_LayerCollection_update, 90505216, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_hide_viewport_get, LayerCollection_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LayerCollection_is_visible = {
	{nullptr, (PropertyRNA *)&rna_LayerCollection_hide_viewport,
	-1, "is_visible", 0, 0, 0, 0, 0, "Visible",
	"Whether this collection is visible for the view layer, take into account the collection parent",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LayerCollection_is_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_LayerCollection_visible_get_result = {
	{nullptr, nullptr,
	-1, "result", 1, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_LayerCollection_visible_get_func = {
	{(FunctionRNA *)&rna_LayerCollection_has_objects_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_LayerCollection_visible_get_result, (PropertyRNA *)&rna_LayerCollection_visible_get_result}},
	"visible_get", 8, "Whether this collection is visible, take into account the collection parent and the viewport",
	LayerCollection_visible_get_call,
	(PropertyRNA *)&rna_LayerCollection_visible_get_result
};

BoolPropertyRNA rna_LayerCollection_has_objects_result = {
	{nullptr, nullptr,
	-1, "result", 1, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_LayerCollection_has_objects_func = {
	{(FunctionRNA *)&rna_LayerCollection_has_selected_objects_func, (FunctionRNA *)&rna_LayerCollection_visible_get_func,
	nullptr,
	{(PropertyRNA *)&rna_LayerCollection_has_objects_result, (PropertyRNA *)&rna_LayerCollection_has_objects_result}},
	"has_objects", 0, "",
	LayerCollection_has_objects_call,
	(PropertyRNA *)&rna_LayerCollection_has_objects_result
};

PointerPropertyRNA rna_LayerCollection_has_selected_objects_view_layer = {
	{(PropertyRNA *)&rna_LayerCollection_has_selected_objects_result, nullptr,
	-1, "view_layer", 8388608, 0, 1, 0, 0, "",
	"View layer the layer collection belongs to",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

BoolPropertyRNA rna_LayerCollection_has_selected_objects_result = {
	{nullptr, (PropertyRNA *)&rna_LayerCollection_has_selected_objects_view_layer,
	-1, "result", 1, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_LayerCollection_has_selected_objects_func = {
	{nullptr, (FunctionRNA *)&rna_LayerCollection_has_objects_func,
	nullptr,
	{(PropertyRNA *)&rna_LayerCollection_has_selected_objects_view_layer, (PropertyRNA *)&rna_LayerCollection_has_selected_objects_result}},
	"has_selected_objects", 4, "",
	LayerCollection_has_selected_objects_call,
	(PropertyRNA *)&rna_LayerCollection_has_selected_objects_result
};

StructRNA RNA_LayerCollection = {
	{(ContainerRNA *)&RNA_ObjectBase, (ContainerRNA *)&RNA_Linesets,
	nullptr,
	{(PropertyRNA *)&rna_LayerCollection_rna_properties, (PropertyRNA *)&rna_LayerCollection_is_visible}},
	"LayerCollection", nullptr, nullptr, 516, nullptr, "Layer Collection",
	"Layer collection",
	"*", 250,
	(PropertyRNA *)&rna_LayerCollection_name, (PropertyRNA *)&rna_LayerCollection_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_LayerCollection_visible_get_func, (FunctionRNA *)&rna_LayerCollection_has_selected_objects_func}
};

/* Object Base */
CollectionPropertyRNA rna_ObjectBase_rna_properties = {
	{(PropertyRNA *)&rna_ObjectBase_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectBase_rna_properties_begin, ObjectBase_rna_properties_next, ObjectBase_rna_properties_end, ObjectBase_rna_properties_get, nullptr, nullptr, ObjectBase_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ObjectBase_rna_type = {
	{(PropertyRNA *)&rna_ObjectBase_object, (PropertyRNA *)&rna_ObjectBase_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectBase_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_ObjectBase_object = {
	{(PropertyRNA *)&rna_ObjectBase_select, (PropertyRNA *)&rna_ObjectBase_rna_type,
	-1, "object", 8388736, 0, 0, 0, 0, "Object",
	"Object this base links to",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectBase_object_get, nullptr, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_ObjectBase_select = {
	{(PropertyRNA *)&rna_ObjectBase_hide_viewport, (PropertyRNA *)&rna_ObjectBase_object,
	-1, "select", 1, 0, 0, 0, 0, "Select",
	"Object base selection state",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_ObjectBase_select_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectBase_select_get, ObjectBase_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ObjectBase_hide_viewport = {
	{nullptr, (PropertyRNA *)&rna_ObjectBase_select,
	-1, "hide_viewport", 4264193, 1, 0, 0, 0, "Hide in Viewport",
	"Temporarily hide in viewport",
	254, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_ObjectBase_hide_viewport_update, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ObjectBase_hide_viewport_get, ObjectBase_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_ObjectBase = {
	{(ContainerRNA *)&RNA_LineStyleModifier, (ContainerRNA *)&RNA_LayerCollection,
	nullptr,
	{(PropertyRNA *)&rna_ObjectBase_rna_properties, (PropertyRNA *)&rna_ObjectBase_hide_viewport}},
	"ObjectBase", nullptr, nullptr, 516, nullptr, "Object Base",
	"An object instance in a render layer",
	"*", 159,
	nullptr, (PropertyRNA *)&rna_ObjectBase_rna_properties,
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

