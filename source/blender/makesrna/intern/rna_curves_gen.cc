
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

#include "rna_curves.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_CurvePoint_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurvePoint_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_CurvePoint_position;
RNA_EXTERN_C FloatPropertyRNA rna_CurvePoint_radius;
RNA_EXTERN_C IntPropertyRNA rna_CurvePoint_index;


RNA_EXTERN_C CollectionPropertyRNA rna_CurveSlice_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_CurveSlice_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_CurveSlice_points;
RNA_EXTERN_C IntPropertyRNA rna_CurveSlice_first_point_index;
RNA_EXTERN_C IntPropertyRNA rna_CurveSlice_points_length;
RNA_EXTERN_C IntPropertyRNA rna_CurveSlice_index;


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

RNA_EXTERN_C CollectionPropertyRNA rna_Curves_curves;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_points;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_position_data;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_curve_offset_data;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_normals;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_materials;
RNA_EXTERN_C PointerPropertyRNA rna_Curves_surface;
RNA_EXTERN_C StringPropertyRNA rna_Curves_surface_uv_map;
RNA_EXTERN_C BoolPropertyRNA rna_Curves_use_mirror_x;
RNA_EXTERN_C BoolPropertyRNA rna_Curves_use_mirror_y;
RNA_EXTERN_C BoolPropertyRNA rna_Curves_use_mirror_z;
RNA_EXTERN_C EnumPropertyRNA rna_Curves_selection_domain;
RNA_EXTERN_C BoolPropertyRNA rna_Curves_use_sculpt_collision;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_attributes;
RNA_EXTERN_C CollectionPropertyRNA rna_Curves_color_attributes;
RNA_EXTERN_C PointerPropertyRNA rna_Curves_animation_data;

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


extern FunctionRNA rna_Curves_add_curves_func;
extern IntPropertyRNA rna_Curves_add_curves_sizes;



RNA_EXTERN_C CollectionPropertyRNA rna_FloatVectorValueReadOnly_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_FloatVectorValueReadOnly_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_FloatVectorValueReadOnly_vector;

static PointerRNA CurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurvePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurvePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurvePoint_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurvePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void CurvePoint_position_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_CurvePoint_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void CurvePoint_position_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_CurvePoint_location_set;
    fn(ptr, values);
}

RNA_EXTERN_C float CurvePoint_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_CurvePoint_radius_get;
    return fn(ptr);
}

RNA_EXTERN_C void CurvePoint_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_CurvePoint_radius_set;
    fn(ptr, value);
}

RNA_EXTERN_C int CurvePoint_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurvePoint_index_get;
    return fn(ptr);
}

static PointerRNA CurveSlice_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void CurveSlice_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveSlice_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSlice_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveSlice_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveSlice_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void CurveSlice_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int CurveSlice_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA CurveSlice_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int CurveSlice_points_length(PointerRNA *ptr)
{
    return rna_CurveSlice_points_length_get(ptr);
}

static PointerRNA CurveSlice_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurvePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void CurveSlice_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveSlice_points;

    rna_CurveSlice_points_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSlice_points_get(iter);
    }
}

RNA_EXTERN_C void CurveSlice_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = CurveSlice_points_get(iter);
    }
}

RNA_EXTERN_C void CurveSlice_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int CurveSlice_first_point_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurveSlice_first_point_index_get;
    return fn(ptr);
}

RNA_EXTERN_C int CurveSlice_points_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurveSlice_points_length_get;
    return fn(ptr);
}

RNA_EXTERN_C int CurveSlice_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_CurveSlice_index_get;
    return fn(ptr);
}

RNA_EXTERN_C int Curves_curves_length(PointerRNA *ptr)
{
    return rna_Curves_curves_length(ptr);
}

static PointerRNA Curves_curves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveSlice, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Curves_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_curves;

    rna_Curves_curves_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_curves_get(iter);
    }
}

RNA_EXTERN_C void Curves_curves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_curves_get(iter);
    }
}

RNA_EXTERN_C void Curves_curves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Curves_curves_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Curves_points_length(PointerRNA *ptr)
{
    return rna_Curves_position_data_length(ptr);
}

static PointerRNA Curves_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurvePoint, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Curves_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_points;

    rna_Curves_position_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_points_get(iter);
    }
}

RNA_EXTERN_C void Curves_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_points_get(iter);
    }
}

RNA_EXTERN_C void Curves_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Curves_points_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Curves_position_data_length(PointerRNA *ptr)
{
    return rna_Curves_position_data_length(ptr);
}

static PointerRNA Curves_position_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FloatVectorAttributeValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Curves_position_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_position_data;

    rna_Curves_position_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_position_data_get(iter);
    }
}

RNA_EXTERN_C void Curves_position_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_position_data_get(iter);
    }
}

RNA_EXTERN_C void Curves_position_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_position_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Curves_position_data_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Curves_curve_offset_data_length(PointerRNA *ptr)
{
    return rna_Curves_curve_offset_data_length(ptr);
}

static PointerRNA Curves_curve_offset_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IntAttributeValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Curves_curve_offset_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_curve_offset_data;

    rna_Curves_curve_offset_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_curve_offset_data_get(iter);
    }
}

RNA_EXTERN_C void Curves_curve_offset_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_curve_offset_data_get(iter);
    }
}

RNA_EXTERN_C void Curves_curve_offset_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_curve_offset_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Curves_curve_offset_data_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Curves_normals_length(PointerRNA *ptr)
{
    return rna_Curves_position_data_length(ptr);
}

static PointerRNA Curves_normals_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FloatVectorValueReadOnly, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Curves_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_normals;

    rna_Curves_normals_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_normals_get(iter);
    }
}

RNA_EXTERN_C void Curves_normals_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_normals_get(iter);
    }
}

RNA_EXTERN_C void Curves_normals_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_materials_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Curves_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void Curves_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Curves_materials_get(iter);
    }
}

RNA_EXTERN_C void Curves_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_materials_get(iter);
    }
}

RNA_EXTERN_C void Curves_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Curves_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_materials_get(&iter); }
    }

    Curves_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Curves_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Curves_materials_begin(&iter, ptr);

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
        Curves_materials_next(&iter);
    }
    Curves_materials_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Curves_surface_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->surface);
}

RNA_EXTERN_C void Curves_surface_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curves *data = (Curves *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->surface = value.data;
}

RNA_EXTERN_C void Curves_surface_uv_map_get(PointerRNA *ptr, char *value)
{
    Curves *data = (Curves *)(ptr->data);
    if (data->surface_uv_map == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->surface_uv_map);
}

RNA_EXTERN_C int Curves_surface_uv_map_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->surface_uv_map == nullptr) ? 0 : strlen(data->surface_uv_map);
}

RNA_EXTERN_C void Curves_surface_uv_map_set(PointerRNA *ptr, const char *value)
{
    Curves *data = (Curves *)(ptr->data);
    if (data->surface_uv_map != nullptr) { MEM_freeN(data->surface_uv_map); }
    const int length = strlen(value);
    if (length > 0) {
        data->surface_uv_map = (char *)MEM_mallocN(length + 1, __func__);
        memcpy(data->surface_uv_map, value, length + 1);
    } else { data->surface_uv_map = nullptr; }
}

RNA_EXTERN_C bool Curves_use_mirror_x_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->symmetry) & 1) != 0);
}

RNA_EXTERN_C void Curves_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry |= 1; }
    else { data->symmetry &= ~1; }
}

RNA_EXTERN_C bool Curves_use_mirror_y_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->symmetry) & 2) != 0);
}

RNA_EXTERN_C void Curves_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry |= 2; }
    else { data->symmetry &= ~2; }
}

RNA_EXTERN_C bool Curves_use_mirror_z_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->symmetry) & 4) != 0);
}

RNA_EXTERN_C void Curves_use_mirror_z_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry |= 4; }
    else { data->symmetry &= ~4; }
}

RNA_EXTERN_C int Curves_selection_domain_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (int)(data->selection_domain);
}

RNA_EXTERN_C void Curves_selection_domain_set(PointerRNA *ptr, int value)
{
    Curves *data = (Curves *)(ptr->data);
#ifdef __cplusplus
    data->selection_domain = (std::remove_reference_t<decltype(data->selection_domain)>)value;
#else
    data->selection_domain = value;
#endif
}

RNA_EXTERN_C bool Curves_use_sculpt_collision_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Curves_use_sculpt_collision_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C int Curves_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_length(ptr);
}

static PointerRNA Curves_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_iterator_get(iter);
}

RNA_EXTERN_C void Curves_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_attributes;

    rna_AttributeGroup_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_attributes_get(iter);
    }
}

RNA_EXTERN_C void Curves_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_attributes_get(iter);
    }
}

RNA_EXTERN_C void Curves_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Curves_color_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_color_length(ptr);
}

static PointerRNA Curves_color_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_color_iterator_get(iter);
}

RNA_EXTERN_C void Curves_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_color_attributes;

    rna_AttributeGroup_color_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_color_attributes_get(iter);
    }
}

RNA_EXTERN_C void Curves_color_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_color_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_color_attributes_get(iter);
    }
}

RNA_EXTERN_C void Curves_color_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C PointerRNA Curves_animation_data_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA FloatVectorValueReadOnly_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void FloatVectorValueReadOnly_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatVectorValueReadOnly_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatVectorValueReadOnly_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FloatVectorValueReadOnly_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FloatVectorValueReadOnly_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void FloatVectorValueReadOnly_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int FloatVectorValueReadOnly_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA FloatVectorValueReadOnly_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void FloatVectorValueReadOnly_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}



RNA_EXTERN_C void Curves_add_curves_func(struct Curves *_self, ReportList *reports, int sizes_num, int *sizes)
{
	rna_Curves_add_curves(_self, reports, sizes, sizes_num);
}

static void Curves_add_curves_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curves *_self;
	int sizes_num;
	const int *sizes;
	char *_data;
	
	_self = (struct Curves *)_ptr->data;
	_data = (char *)_parms->data;
	sizes_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	sizes = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Curves_add_curves(_self, reports, sizes, sizes_num);
}

/* Repeated prototypes to detect errors */

void rna_Curves_add_curves(struct Curves *_self, ReportList *reports, int sizes_num, int *sizes);


/* Curve Point */
CollectionPropertyRNA rna_CurvePoint_rna_properties = {
	{(PropertyRNA *)&rna_CurvePoint_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurvePoint_rna_properties_begin, CurvePoint_rna_properties_next, CurvePoint_rna_properties_end, CurvePoint_rna_properties_get, nullptr, nullptr, CurvePoint_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurvePoint_rna_type = {
	{(PropertyRNA *)&rna_CurvePoint_position, (PropertyRNA *)&rna_CurvePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurvePoint_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_CurvePoint_position_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurvePoint_position = {
	{(PropertyRNA *)&rna_CurvePoint_radius, (PropertyRNA *)&rna_CurvePoint_rna_type,
	-1, "position", 3, 0, 0, 0, 0, "Position",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Curves_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, CurvePoint_position_get, CurvePoint_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_CurvePoint_position_default
};

FloatPropertyRNA rna_CurvePoint_radius = {
	{(PropertyRNA *)&rna_CurvePoint_index, (PropertyRNA *)&rna_CurvePoint_position,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurvePoint_radius_get, CurvePoint_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_CurvePoint_index = {
	{nullptr, (PropertyRNA *)&rna_CurvePoint_radius,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this point",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurvePoint_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_CurvePoint = {
	{(ContainerRNA *)&RNA_CurveSlice, (ContainerRNA *)&RNA_GreasePencilLayerGroup,
	nullptr,
	{(PropertyRNA *)&rna_CurvePoint_rna_properties, (PropertyRNA *)&rna_CurvePoint_index}},
	"CurvePoint", nullptr, nullptr, 516, nullptr, "Curve Point",
	"Curve control point",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurvePoint_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_CurvePoint_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Curve Slice */
CollectionPropertyRNA rna_CurveSlice_rna_properties = {
	{(PropertyRNA *)&rna_CurveSlice_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSlice_rna_properties_begin, CurveSlice_rna_properties_next, CurveSlice_rna_properties_end, CurveSlice_rna_properties_get, nullptr, nullptr, CurveSlice_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_CurveSlice_rna_type = {
	{(PropertyRNA *)&rna_CurveSlice_points, (PropertyRNA *)&rna_CurveSlice_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSlice_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_CurveSlice_points = {
	{(PropertyRNA *)&rna_CurveSlice_first_point_index, (PropertyRNA *)&rna_CurveSlice_rna_type,
	-1, "points", 0, 4, 0, 8, 0, "Points",
	"Control points of the curve",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSlice_points_begin, CurveSlice_points_next, CurveSlice_points_end, CurveSlice_points_get, CurveSlice_points_length, nullptr, nullptr, nullptr, &RNA_CurvePoint
};

IntPropertyRNA rna_CurveSlice_first_point_index = {
	{(PropertyRNA *)&rna_CurveSlice_points_length, (PropertyRNA *)&rna_CurveSlice_points,
	-1, "first_point_index", 2, 0, 0, 0, 0, "First Point Index",
	"The index of this curve\'s first control point",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSlice_first_point_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_CurveSlice_points_length = {
	{(PropertyRNA *)&rna_CurveSlice_index, (PropertyRNA *)&rna_CurveSlice_first_point_index,
	-1, "points_length", 2, 0, 0, 0, 0, "Number of Points",
	"Number of control points in the curve",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSlice_points_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_CurveSlice_index = {
	{nullptr, (PropertyRNA *)&rna_CurveSlice_points_length,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this curve",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	CurveSlice_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_CurveSlice = {
	{(ContainerRNA *)&RNA_Curves, (ContainerRNA *)&RNA_CurvePoint,
	nullptr,
	{(PropertyRNA *)&rna_CurveSlice_rna_properties, (PropertyRNA *)&rna_CurveSlice_index}},
	"CurveSlice", nullptr, nullptr, 516, nullptr, "Curve Slice",
	"A single curve from a curves data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_CurveSlice_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_CurveSlice_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Hair Curves */
CollectionPropertyRNA rna_Curves_curves = {
	{(PropertyRNA *)&rna_Curves_points, nullptr,
	-1, "curves", 0, 4, 0, 8, 0, "Curves",
	"All curves in the data-block",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_curves_begin, Curves_curves_next, Curves_curves_end, Curves_curves_get, Curves_curves_length, Curves_curves_lookup_int, nullptr, nullptr, &RNA_CurveSlice
};

CollectionPropertyRNA rna_Curves_points = {
	{(PropertyRNA *)&rna_Curves_position_data, (PropertyRNA *)&rna_Curves_curves,
	-1, "points", 0, 4, 0, 8, 0, "Points",
	"Control points of all curves",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_points_begin, Curves_points_next, Curves_points_end, Curves_points_get, Curves_points_length, Curves_points_lookup_int, nullptr, nullptr, &RNA_CurvePoint
};

CollectionPropertyRNA rna_Curves_position_data = {
	{(PropertyRNA *)&rna_Curves_curve_offset_data, (PropertyRNA *)&rna_Curves_points,
	-1, "position_data", 0, 4, 0, 8, 0, "position_data",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_position_data_begin, Curves_position_data_next, Curves_position_data_end, Curves_position_data_get, Curves_position_data_length, Curves_position_data_lookup_int, nullptr, nullptr, &RNA_FloatVectorAttributeValue
};

CollectionPropertyRNA rna_Curves_curve_offset_data = {
	{(PropertyRNA *)&rna_Curves_normals, (PropertyRNA *)&rna_Curves_position_data,
	-1, "curve_offset_data", 0, 4, 0, 8, 0, "curve_offset_data",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_curve_offset_data_begin, Curves_curve_offset_data_next, Curves_curve_offset_data_end, Curves_curve_offset_data_get, Curves_curve_offset_data_length, Curves_curve_offset_data_lookup_int, nullptr, nullptr, &RNA_IntAttributeValue
};

CollectionPropertyRNA rna_Curves_normals = {
	{(PropertyRNA *)&rna_Curves_materials, (PropertyRNA *)&rna_Curves_curve_offset_data,
	-1, "normals", 0, 4, 0, 8, 0, "Normals",
	"The curve normal value at each of the curve\'s control points",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_normals_begin, Curves_normals_next, Curves_normals_end, Curves_normals_get, Curves_normals_length, nullptr, nullptr, nullptr, &RNA_FloatVectorValueReadOnly
};

CollectionPropertyRNA rna_Curves_materials = {
	{(PropertyRNA *)&rna_Curves_surface, (PropertyRNA *)&rna_Curves_normals,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDMaterials},
	Curves_materials_begin, Curves_materials_next, Curves_materials_end, Curves_materials_get, Curves_materials_length, Curves_materials_lookup_int, Curves_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

PointerPropertyRNA rna_Curves_surface = {
	{(PropertyRNA *)&rna_Curves_surface_uv_map, (PropertyRNA *)&rna_Curves_materials,
	-1, "surface", 8388737, 0, 0, 0, 0, "Surface",
	"Mesh object that the curves can be attached to",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 102170624, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_surface_get, Curves_surface_set, nullptr, rna_Mesh_object_poll,&RNA_Object
};

StringPropertyRNA rna_Curves_surface_uv_map = {
	{(PropertyRNA *)&rna_Curves_use_mirror_x, (PropertyRNA *)&rna_Curves_surface,
	-1, "surface_uv_map", 262145, 0, 0, 0, 0, "Surface UV Map",
	"The name of the attribute on the surface mesh used to define the attachment of each curve",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_surface_uv_map_get, Curves_surface_uv_map_length, Curves_surface_uv_map_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_Curves_use_mirror_x = {
	{(PropertyRNA *)&rna_Curves_use_mirror_y, (PropertyRNA *)&rna_Curves_surface_uv_map,
	-1, "use_mirror_x", 3, 0, 0, 0, 0, "X",
	"Enable symmetry in the X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_use_mirror_x_get, Curves_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curves_use_mirror_y = {
	{(PropertyRNA *)&rna_Curves_use_mirror_z, (PropertyRNA *)&rna_Curves_use_mirror_x,
	-1, "use_mirror_y", 3, 0, 0, 0, 0, "Y",
	"Enable symmetry in the Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_use_mirror_y_get, Curves_use_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Curves_use_mirror_z = {
	{(PropertyRNA *)&rna_Curves_selection_domain, (PropertyRNA *)&rna_Curves_use_mirror_y,
	-1, "use_mirror_z", 3, 0, 0, 0, 0, "Z",
	"Enable symmetry in the Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_use_mirror_z_get, Curves_use_mirror_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_Curves_selection_domain = {
	{(PropertyRNA *)&rna_Curves_use_sculpt_collision, (PropertyRNA *)&rna_Curves_use_mirror_z,
	-1, "selection_domain", 1, 0, 0, 4, 0, "Selection Domain",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curves, selection_domain), (RawPropertyType)2, nullptr},
	Curves_selection_domain_get, Curves_selection_domain_set, nullptr, nullptr, nullptr, rna_enum_attribute_curves_domain_items, 2, 0
};

BoolPropertyRNA rna_Curves_use_sculpt_collision = {
	{(PropertyRNA *)&rna_Curves_attributes, (PropertyRNA *)&rna_Curves_selection_domain,
	-1, "use_sculpt_collision", 1, 0, 0, 0, 0, "Use Sculpt Collision",
	"Enable collision with the surface while sculpting",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Curves_use_sculpt_collision_get, Curves_use_sculpt_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_Curves_attributes = {
	{(PropertyRNA *)&rna_Curves_color_attributes, (PropertyRNA *)&rna_Curves_use_sculpt_collision,
	-1, "attributes", 0, 0, 0, 0, 0, "Attributes",
	"Geometry attributes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AttributeGroup},
	Curves_attributes_begin, Curves_attributes_next, Curves_attributes_end, Curves_attributes_get, Curves_attributes_length, nullptr, nullptr, nullptr, &RNA_Attribute
};

CollectionPropertyRNA rna_Curves_color_attributes = {
	{(PropertyRNA *)&rna_Curves_animation_data, (PropertyRNA *)&rna_Curves_attributes,
	-1, "color_attributes", 0, 0, 0, 0, 0, "Color Attributes",
	"Geometry color attributes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AttributeGroup},
	Curves_color_attributes_begin, Curves_color_attributes_next, Curves_color_attributes_end, Curves_color_attributes_get, Curves_color_attributes_length, nullptr, nullptr, nullptr, &RNA_Attribute
};

PointerPropertyRNA rna_Curves_animation_data = {
	{nullptr, (PropertyRNA *)&rna_Curves_color_attributes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Curves_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

static int rna_Curves_add_curves_sizes_default[32] = {
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

IntPropertyRNA rna_Curves_add_curves_sizes = {
	{nullptr, nullptr,
	-1, "sizes", 131075, 0, 1, 0, 0, "Sizes",
	"The number of points in each curve",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {32, 0, 0}, 32,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, 10000, 0, INT_MAX, 1, 0, rna_Curves_add_curves_sizes_default
};

FunctionRNA rna_Curves_add_curves_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Curves_add_curves_sizes, (PropertyRNA *)&rna_Curves_add_curves_sizes}},
	"add_curves", 16, "add_curves",
	Curves_add_curves_call,
	nullptr
};

StructRNA RNA_Curves = {
	{(ContainerRNA *)&RNA_FloatVectorValueReadOnly, (ContainerRNA *)&RNA_CurveSlice,
	nullptr,
	{(PropertyRNA *)&rna_Curves_curves, (PropertyRNA *)&rna_Curves_animation_data}},
	"Curves", nullptr, nullptr, 519, nullptr, "Hair Curves",
	"Hair data-block for hair curves",
	"*", 652,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Curves_add_curves_func, (FunctionRNA *)&rna_Curves_add_curves_func}
};

/* Read-Only Vector */
CollectionPropertyRNA rna_FloatVectorValueReadOnly_rna_properties = {
	{(PropertyRNA *)&rna_FloatVectorValueReadOnly_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatVectorValueReadOnly_rna_properties_begin, FloatVectorValueReadOnly_rna_properties_next, FloatVectorValueReadOnly_rna_properties_end, FloatVectorValueReadOnly_rna_properties_get, nullptr, nullptr, FloatVectorValueReadOnly_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_FloatVectorValueReadOnly_rna_type = {
	{(PropertyRNA *)&rna_FloatVectorValueReadOnly_vector, (PropertyRNA *)&rna_FloatVectorValueReadOnly_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	FloatVectorValueReadOnly_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_FloatVectorValueReadOnly_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FloatVectorValueReadOnly_vector = {
	{nullptr, (PropertyRNA *)&rna_FloatVectorValueReadOnly_rna_type,
	-1, "vector", 2, 0, 0, 4, 0, "Vector",
	"3D vector",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(vec3f, x), (RawPropertyType)5, nullptr},
	nullptr, nullptr, FloatVectorValueReadOnly_vector_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FloatVectorValueReadOnly_vector_default
};

StructRNA RNA_FloatVectorValueReadOnly = {
	{(ContainerRNA *)&RNA_RenderSlot, (ContainerRNA *)&RNA_Curves,
	nullptr,
	{(PropertyRNA *)&rna_FloatVectorValueReadOnly_rna_properties, (PropertyRNA *)&rna_FloatVectorValueReadOnly_vector}},
	"FloatVectorValueReadOnly", nullptr, nullptr, 516, nullptr, "Read-Only Vector",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_FloatVectorValueReadOnly_rna_properties,
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

