
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

#include "rna_mesh.cc"
#include "rna_mesh_api.cc"

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

RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_vertices;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_edges;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_loops;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_polygons;
RNA_EXTERN_C EnumPropertyRNA rna_Mesh_normals_domain;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_vertex_normals;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_polygon_normals;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_corner_normals;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_loop_triangles;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_loop_triangle_polygons;
RNA_EXTERN_C PointerPropertyRNA rna_Mesh_texture_mesh;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_uv_layers;
RNA_EXTERN_C PointerPropertyRNA rna_Mesh_uv_layer_clone;
RNA_EXTERN_C IntPropertyRNA rna_Mesh_uv_layer_clone_index;
RNA_EXTERN_C PointerPropertyRNA rna_Mesh_uv_layer_stencil;
RNA_EXTERN_C IntPropertyRNA rna_Mesh_uv_layer_stencil_index;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_vertex_colors;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_skin_vertices;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_vertex_paint_masks;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_attributes;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_color_attributes;
RNA_EXTERN_C FloatPropertyRNA rna_Mesh_remesh_voxel_size;
RNA_EXTERN_C FloatPropertyRNA rna_Mesh_remesh_voxel_adaptivity;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_remesh_fix_poles;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_remesh_preserve_volume;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_remesh_preserve_paint_mask;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_remesh_preserve_sculpt_face_sets;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_remesh_preserve_vertex_colors;
RNA_EXTERN_C EnumPropertyRNA rna_Mesh_remesh_mode;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_mirror_x;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_mirror_y;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_mirror_z;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_mirror_vertex_groups;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_has_custom_normals;
RNA_EXTERN_C PointerPropertyRNA rna_Mesh_texco_mesh;
RNA_EXTERN_C PointerPropertyRNA rna_Mesh_shape_keys;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_auto_texspace;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_mirror_topology;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_paint_mask;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_use_paint_mask_vertex;
RNA_EXTERN_C IntPropertyRNA rna_Mesh_total_vert_sel;
RNA_EXTERN_C IntPropertyRNA rna_Mesh_total_edge_sel;
RNA_EXTERN_C IntPropertyRNA rna_Mesh_total_face_sel;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_is_editmode;
RNA_EXTERN_C PointerPropertyRNA rna_Mesh_animation_data;
RNA_EXTERN_C BoolPropertyRNA rna_Mesh_auto_texspace;
RNA_EXTERN_C FloatPropertyRNA rna_Mesh_texspace_location;
RNA_EXTERN_C FloatPropertyRNA rna_Mesh_texspace_size;
RNA_EXTERN_C CollectionPropertyRNA rna_Mesh_materials;

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


extern FunctionRNA rna_Mesh_transform_func;
extern FloatPropertyRNA rna_Mesh_transform_matrix;
extern BoolPropertyRNA rna_Mesh_transform_shape_keys;

extern FunctionRNA rna_Mesh_flip_normals_func;
extern FunctionRNA rna_Mesh_set_sharp_from_angle_func;
extern FloatPropertyRNA rna_Mesh_set_sharp_from_angle_angle;

extern FunctionRNA rna_Mesh_split_faces_func;
extern FunctionRNA rna_Mesh_calc_tangents_func;
extern StringPropertyRNA rna_Mesh_calc_tangents_uvmap;

extern FunctionRNA rna_Mesh_free_tangents_func;
extern FunctionRNA rna_Mesh_calc_loop_triangles_func;
extern FunctionRNA rna_Mesh_calc_smooth_groups_func;
extern BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags;
extern IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups;
extern IntPropertyRNA rna_Mesh_calc_smooth_groups_groups;

extern FunctionRNA rna_Mesh_normals_split_custom_set_func;
extern FloatPropertyRNA rna_Mesh_normals_split_custom_set_normals;

extern FunctionRNA rna_Mesh_normals_split_custom_set_from_vertices_func;
extern FloatPropertyRNA rna_Mesh_normals_split_custom_set_from_vertices_normals;

extern FunctionRNA rna_Mesh_update_func;
extern BoolPropertyRNA rna_Mesh_update_calc_edges;
extern BoolPropertyRNA rna_Mesh_update_calc_edges_loose;

extern FunctionRNA rna_Mesh_update_gpu_tag_func;
extern FunctionRNA rna_Mesh_unit_test_compare_func;
extern PointerPropertyRNA rna_Mesh_unit_test_compare_mesh;
extern FloatPropertyRNA rna_Mesh_unit_test_compare_threshold;
extern StringPropertyRNA rna_Mesh_unit_test_compare_result;

extern FunctionRNA rna_Mesh_clear_geometry_func;
extern FunctionRNA rna_Mesh_validate_func;
extern BoolPropertyRNA rna_Mesh_validate_verbose;
extern BoolPropertyRNA rna_Mesh_validate_clean_customdata;
extern BoolPropertyRNA rna_Mesh_validate_result;

extern FunctionRNA rna_Mesh_validate_material_indices_func;
extern BoolPropertyRNA rna_Mesh_validate_material_indices_result;

extern FunctionRNA rna_Mesh_count_selected_items_func;
extern IntPropertyRNA rna_Mesh_count_selected_items_result;



RNA_EXTERN_C CollectionPropertyRNA rna_MeshVertices_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshVertices_rna_type;

extern FunctionRNA rna_MeshVertices_add_func;
extern IntPropertyRNA rna_MeshVertices_add_count;



RNA_EXTERN_C CollectionPropertyRNA rna_MeshEdges_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshEdges_rna_type;

extern FunctionRNA rna_MeshEdges_add_func;
extern IntPropertyRNA rna_MeshEdges_add_count;



RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoops_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshLoops_rna_type;

extern FunctionRNA rna_MeshLoops_add_func;
extern IntPropertyRNA rna_MeshLoops_add_count;



RNA_EXTERN_C CollectionPropertyRNA rna_MeshPolygons_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshPolygons_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MeshPolygons_active;

extern FunctionRNA rna_MeshPolygons_add_func;
extern IntPropertyRNA rna_MeshPolygons_add_count;



RNA_EXTERN_C CollectionPropertyRNA rna_MeshNormalValue_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshNormalValue_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MeshNormalValue_vector;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoopTriangles_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshLoopTriangles_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_ReadOnlyInteger_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ReadOnlyInteger_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_ReadOnlyInteger_value;


RNA_EXTERN_C CollectionPropertyRNA rna_UVLoopLayers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UVLoopLayers_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_UVLoopLayers_active;
RNA_EXTERN_C IntPropertyRNA rna_UVLoopLayers_active_index;

extern FunctionRNA rna_UVLoopLayers_new_func;
extern StringPropertyRNA rna_UVLoopLayers_new_name;
extern BoolPropertyRNA rna_UVLoopLayers_new_do_init;
extern PointerPropertyRNA rna_UVLoopLayers_new_layer;

extern FunctionRNA rna_UVLoopLayers_remove_func;
extern PointerPropertyRNA rna_UVLoopLayers_remove_layer;



RNA_EXTERN_C CollectionPropertyRNA rna_LoopColors_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_LoopColors_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_LoopColors_active;
RNA_EXTERN_C IntPropertyRNA rna_LoopColors_active_index;

extern FunctionRNA rna_LoopColors_new_func;
extern StringPropertyRNA rna_LoopColors_new_name;
extern BoolPropertyRNA rna_LoopColors_new_do_init;
extern PointerPropertyRNA rna_LoopColors_new_layer;

extern FunctionRNA rna_LoopColors_remove_func;
extern PointerPropertyRNA rna_LoopColors_remove_layer;



RNA_EXTERN_C CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_MeshSkinVertexLayer_name;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshSkinVertexLayer_data;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshSkinVertex_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshSkinVertex_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MeshSkinVertex_radius;
RNA_EXTERN_C BoolPropertyRNA rna_MeshSkinVertex_use_root;
RNA_EXTERN_C BoolPropertyRNA rna_MeshSkinVertex_use_loose;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshPaintMaskLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshPaintMaskLayer_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshPaintMaskLayer_data;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshPaintMaskProperty_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshPaintMaskProperty_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MeshPaintMaskProperty_value;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshVertex_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshVertex_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MeshVertex_co;
RNA_EXTERN_C FloatPropertyRNA rna_MeshVertex_normal;
RNA_EXTERN_C BoolPropertyRNA rna_MeshVertex_select;
RNA_EXTERN_C BoolPropertyRNA rna_MeshVertex_hide;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshVertex_groups;
RNA_EXTERN_C IntPropertyRNA rna_MeshVertex_index;
RNA_EXTERN_C FloatPropertyRNA rna_MeshVertex_undeformed_co;


RNA_EXTERN_C CollectionPropertyRNA rna_VertexGroupElement_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_VertexGroupElement_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_VertexGroupElement_group;
RNA_EXTERN_C FloatPropertyRNA rna_VertexGroupElement_weight;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshEdge_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshEdge_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MeshEdge_vertices;
RNA_EXTERN_C BoolPropertyRNA rna_MeshEdge_select;
RNA_EXTERN_C BoolPropertyRNA rna_MeshEdge_hide;
RNA_EXTERN_C BoolPropertyRNA rna_MeshEdge_use_seam;
RNA_EXTERN_C BoolPropertyRNA rna_MeshEdge_use_edge_sharp;
RNA_EXTERN_C BoolPropertyRNA rna_MeshEdge_is_loose;
RNA_EXTERN_C BoolPropertyRNA rna_MeshEdge_use_freestyle_mark;
RNA_EXTERN_C IntPropertyRNA rna_MeshEdge_index;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoopTriangle_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshLoopTriangle_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoopTriangle_vertices;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoopTriangle_loops;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoopTriangle_polygon_index;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoopTriangle_normal;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoopTriangle_split_normals;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoopTriangle_area;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoopTriangle_index;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoopTriangle_material_index;
RNA_EXTERN_C BoolPropertyRNA rna_MeshLoopTriangle_use_smooth;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoop_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshLoop_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoop_vertex_index;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoop_edge_index;
RNA_EXTERN_C IntPropertyRNA rna_MeshLoop_index;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoop_normal;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoop_tangent;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoop_bitangent_sign;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoop_bitangent;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshPolygon_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshPolygon_rna_type;
RNA_EXTERN_C IntPropertyRNA rna_MeshPolygon_vertices;
RNA_EXTERN_C IntPropertyRNA rna_MeshPolygon_loop_start;
RNA_EXTERN_C IntPropertyRNA rna_MeshPolygon_loop_total;
RNA_EXTERN_C IntPropertyRNA rna_MeshPolygon_material_index;
RNA_EXTERN_C BoolPropertyRNA rna_MeshPolygon_select;
RNA_EXTERN_C BoolPropertyRNA rna_MeshPolygon_hide;
RNA_EXTERN_C BoolPropertyRNA rna_MeshPolygon_use_smooth;
RNA_EXTERN_C BoolPropertyRNA rna_MeshPolygon_use_freestyle_mark;
RNA_EXTERN_C FloatPropertyRNA rna_MeshPolygon_normal;
RNA_EXTERN_C FloatPropertyRNA rna_MeshPolygon_center;
RNA_EXTERN_C FloatPropertyRNA rna_MeshPolygon_area;
RNA_EXTERN_C IntPropertyRNA rna_MeshPolygon_index;

extern FunctionRNA rna_MeshPolygon_flip_func;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshUVLoopLayer_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoopLayer_data;
RNA_EXTERN_C StringPropertyRNA rna_MeshUVLoopLayer_name;
RNA_EXTERN_C BoolPropertyRNA rna_MeshUVLoopLayer_active;
RNA_EXTERN_C BoolPropertyRNA rna_MeshUVLoopLayer_active_render;
RNA_EXTERN_C BoolPropertyRNA rna_MeshUVLoopLayer_active_clone;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoopLayer_uv;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoopLayer_vertex_selection;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoopLayer_edge_selection;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoopLayer_pin;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshUVLoop_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshUVLoop_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MeshUVLoop_uv;
RNA_EXTERN_C BoolPropertyRNA rna_MeshUVLoop_pin_uv;
RNA_EXTERN_C BoolPropertyRNA rna_MeshUVLoop_select;
RNA_EXTERN_C BoolPropertyRNA rna_MeshUVLoop_select_edge;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshLoopColorLayer_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_MeshLoopColorLayer_name;
RNA_EXTERN_C BoolPropertyRNA rna_MeshLoopColorLayer_active;
RNA_EXTERN_C BoolPropertyRNA rna_MeshLoopColorLayer_active_render;
RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoopColorLayer_data;


RNA_EXTERN_C CollectionPropertyRNA rna_MeshLoopColor_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_MeshLoopColor_rna_type;
RNA_EXTERN_C FloatPropertyRNA rna_MeshLoopColor_color;

RNA_EXTERN_C int Mesh_vertices_length(PointerRNA *ptr)
{
    return rna_Mesh_vertices_length(ptr);
}

static PointerRNA Mesh_vertices_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertex, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertices;

    rna_Mesh_vertices_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertices_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertices_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertices_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertices_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_vertices_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_edges_length(PointerRNA *ptr)
{
    return rna_Mesh_edges_length(ptr);
}

static PointerRNA Mesh_edges_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshEdge, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_edges_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_edges;

    rna_Mesh_edges_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_edges_get(iter);
    }
}

RNA_EXTERN_C void Mesh_edges_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_edges_get(iter);
    }
}

RNA_EXTERN_C void Mesh_edges_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_edges_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_edges_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_loops_length(PointerRNA *ptr)
{
    return rna_Mesh_loops_length(ptr);
}

static PointerRNA Mesh_loops_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoop, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_loops_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_loops;

    rna_Mesh_loops_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_loops_get(iter);
    }
}

RNA_EXTERN_C void Mesh_loops_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loops_get(iter);
    }
}

RNA_EXTERN_C void Mesh_loops_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_loops_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_loops_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_polygons_length(PointerRNA *ptr)
{
    return rna_Mesh_polygons_length(ptr);
}

static PointerRNA Mesh_polygons_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygon, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_polygons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygons;

    rna_Mesh_polygons_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygons_get(iter);
    }
}

RNA_EXTERN_C void Mesh_polygons_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygons_get(iter);
    }
}

RNA_EXTERN_C void Mesh_polygons_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_polygons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_polygons_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_normals_domain_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Mesh_normals_domain_get;
    return fn(ptr);
}

RNA_EXTERN_C int Mesh_vertex_normals_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_normals_length(ptr);
}

static PointerRNA Mesh_vertex_normals_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_vertex_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_normals;

    rna_Mesh_vertex_normals_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_normals_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertex_normals_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_normals_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertex_normals_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_vertex_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_vertex_normals_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_polygon_normals_length(PointerRNA *ptr)
{
    return rna_Mesh_poly_normals_length(ptr);
}

static PointerRNA Mesh_polygon_normals_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_polygon_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygon_normals;

    rna_Mesh_poly_normals_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_normals_get(iter);
    }
}

RNA_EXTERN_C void Mesh_polygon_normals_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_normals_get(iter);
    }
}

RNA_EXTERN_C void Mesh_polygon_normals_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_polygon_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_poly_normals_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_corner_normals_length(PointerRNA *ptr)
{
    return rna_Mesh_corner_normals_length(ptr);
}

static PointerRNA Mesh_corner_normals_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_corner_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_corner_normals;

    rna_Mesh_corner_normals_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_corner_normals_get(iter);
    }
}

RNA_EXTERN_C void Mesh_corner_normals_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_corner_normals_get(iter);
    }
}

RNA_EXTERN_C void Mesh_corner_normals_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_corner_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_corner_normals_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_loop_triangles_length(PointerRNA *ptr)
{
    return rna_Mesh_loop_triangles_length(ptr);
}

static PointerRNA Mesh_loop_triangles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopTriangle, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_loop_triangles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_loop_triangles;

    rna_Mesh_loop_triangles_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangles_get(iter);
    }
}

RNA_EXTERN_C void Mesh_loop_triangles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangles_get(iter);
    }
}

RNA_EXTERN_C void Mesh_loop_triangles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_loop_triangles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_loop_triangles_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int Mesh_loop_triangle_polygons_length(PointerRNA *ptr)
{
    return rna_Mesh_loop_triangles_length(ptr);
}

static PointerRNA Mesh_loop_triangle_polygons_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ReadOnlyInteger, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_loop_triangle_polygons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_loop_triangle_polygons;

    rna_Mesh_loop_triangle_polygons_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangle_polygons_get(iter);
    }
}

RNA_EXTERN_C void Mesh_loop_triangle_polygons_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangle_polygons_get(iter);
    }
}

RNA_EXTERN_C void Mesh_loop_triangle_polygons_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_loop_triangle_polygons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_Mesh_loop_triangle_polygons_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C PointerRNA Mesh_texture_mesh_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

RNA_EXTERN_C void Mesh_texture_mesh_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Mesh *data = (Mesh *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->texcomesh) {
        id_us_min((ID *)data->texcomesh);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->texcomesh = value.data;
}

RNA_EXTERN_C int Mesh_uv_layers_length(PointerRNA *ptr)
{
    return rna_Mesh_uv_layers_length(ptr);
}

static PointerRNA Mesh_uv_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshUVLoopLayer, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_uv_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_uv_layers;

    rna_Mesh_uv_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_uv_layers_get(iter);
    }
}

RNA_EXTERN_C void Mesh_uv_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_uv_layers_get(iter);
    }
}

RNA_EXTERN_C void Mesh_uv_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_uv_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_uv_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_uv_layers_get(&iter); }
    }

    Mesh_uv_layers_end(&iter);

    return found;
}

RNA_EXTERN_C int MeshUVLoopLayer_name_length(PointerRNA *);
RNA_EXTERN_C void MeshUVLoopLayer_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Mesh_uv_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_uv_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshUVLoopLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshUVLoopLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                MeshUVLoopLayer_name_get(&iter.ptr, name);
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
        Mesh_uv_layers_next(&iter);
    }
    Mesh_uv_layers_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Mesh_uv_layer_clone_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_clone_get(ptr);
}

RNA_EXTERN_C void Mesh_uv_layer_clone_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_uv_layer_clone_set(ptr, value, reports);
}

RNA_EXTERN_C int Mesh_uv_layer_clone_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_clone_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Mesh_uv_layer_clone_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_clone_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA Mesh_uv_layer_stencil_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_stencil_get(ptr);
}

RNA_EXTERN_C void Mesh_uv_layer_stencil_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_uv_layer_stencil_set(ptr, value, reports);
}

RNA_EXTERN_C int Mesh_uv_layer_stencil_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_stencil_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Mesh_uv_layer_stencil_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_stencil_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Mesh_vertex_colors_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_colors_length(ptr);
}

static PointerRNA Mesh_vertex_colors_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopColorLayer, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_colors;

    rna_Mesh_vertex_colors_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_colors_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertex_colors_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_colors_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertex_colors_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_colors_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_colors_get(&iter); }
    }

    Mesh_vertex_colors_end(&iter);

    return found;
}

RNA_EXTERN_C int MeshLoopColorLayer_name_length(PointerRNA *);
RNA_EXTERN_C void MeshLoopColorLayer_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Mesh_vertex_colors_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_vertex_colors_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshLoopColorLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshLoopColorLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                MeshLoopColorLayer_name_get(&iter.ptr, name);
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
        Mesh_vertex_colors_next(&iter);
    }
    Mesh_vertex_colors_end(&iter);

    return found;
}

RNA_EXTERN_C int Mesh_skin_vertices_length(PointerRNA *ptr)
{
    return rna_Mesh_skin_vertices_length(ptr);
}

static PointerRNA Mesh_skin_vertices_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSkinVertexLayer, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_skin_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_skin_vertices;

    rna_Mesh_skin_vertices_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_skin_vertices_get(iter);
    }
}

RNA_EXTERN_C void Mesh_skin_vertices_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_skin_vertices_get(iter);
    }
}

RNA_EXTERN_C void Mesh_skin_vertices_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_skin_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_skin_vertices_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_skin_vertices_get(&iter); }
    }

    Mesh_skin_vertices_end(&iter);

    return found;
}

RNA_EXTERN_C int MeshSkinVertexLayer_name_length(PointerRNA *);
RNA_EXTERN_C void MeshSkinVertexLayer_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Mesh_skin_vertices_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_skin_vertices_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshSkinVertexLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshSkinVertexLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = (char *)MEM_mallocN(namelen+1, "name string");
                MeshSkinVertexLayer_name_get(&iter.ptr, name);
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
        Mesh_skin_vertices_next(&iter);
    }
    Mesh_skin_vertices_end(&iter);

    return found;
}

RNA_EXTERN_C int Mesh_vertex_paint_masks_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_paint_masks_length(ptr);
}

static PointerRNA Mesh_vertex_paint_masks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPaintMaskLayer, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void Mesh_vertex_paint_masks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_paint_masks;

    rna_Mesh_vertex_paint_masks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_paint_masks_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertex_paint_masks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_paint_masks_get(iter);
    }
}

RNA_EXTERN_C void Mesh_vertex_paint_masks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_vertex_paint_masks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_paint_masks_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_paint_masks_get(&iter); }
    }

    Mesh_vertex_paint_masks_end(&iter);

    return found;
}

RNA_EXTERN_C int Mesh_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_length(ptr);
}

static PointerRNA Mesh_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_iterator_get(iter);
}

RNA_EXTERN_C void Mesh_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_attributes;

    rna_AttributeGroup_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_attributes_get(iter);
    }
}

RNA_EXTERN_C void Mesh_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_attributes_get(iter);
    }
}

RNA_EXTERN_C void Mesh_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_color_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_color_length(ptr);
}

static PointerRNA Mesh_color_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_color_iterator_get(iter);
}

RNA_EXTERN_C void Mesh_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_color_attributes;

    rna_AttributeGroup_color_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_color_attributes_get(iter);
    }
}

RNA_EXTERN_C void Mesh_color_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_color_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_color_attributes_get(iter);
    }
}

RNA_EXTERN_C void Mesh_color_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C float Mesh_remesh_voxel_size_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->remesh_voxel_size);
}

RNA_EXTERN_C void Mesh_remesh_voxel_size_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
#ifdef __cplusplus
    data->remesh_voxel_size = (std::remove_reference_t<decltype(data->remesh_voxel_size)>)CLAMPIS(value, 0.0001000000f, FLT_MAX);
#else
    data->remesh_voxel_size = CLAMPIS(value, 0.0001000000f, FLT_MAX);
#endif
}

RNA_EXTERN_C float Mesh_remesh_voxel_adaptivity_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->remesh_voxel_adaptivity);
}

RNA_EXTERN_C void Mesh_remesh_voxel_adaptivity_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
#ifdef __cplusplus
    data->remesh_voxel_adaptivity = (std::remove_reference_t<decltype(data->remesh_voxel_adaptivity)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->remesh_voxel_adaptivity = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

RNA_EXTERN_C bool Mesh_use_remesh_fix_poles_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

RNA_EXTERN_C void Mesh_use_remesh_fix_poles_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

RNA_EXTERN_C bool Mesh_use_remesh_preserve_volume_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

RNA_EXTERN_C void Mesh_use_remesh_preserve_volume_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

RNA_EXTERN_C bool Mesh_use_remesh_preserve_paint_mask_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

RNA_EXTERN_C void Mesh_use_remesh_preserve_paint_mask_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

RNA_EXTERN_C bool Mesh_use_remesh_preserve_sculpt_face_sets_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

RNA_EXTERN_C void Mesh_use_remesh_preserve_sculpt_face_sets_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

RNA_EXTERN_C bool Mesh_use_remesh_preserve_vertex_colors_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

RNA_EXTERN_C void Mesh_use_remesh_preserve_vertex_colors_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

RNA_EXTERN_C int Mesh_remesh_mode_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (int)(data->remesh_mode);
}

RNA_EXTERN_C void Mesh_remesh_mode_set(PointerRNA *ptr, int value)
{
    Mesh *data = (Mesh *)(ptr->data);
#ifdef __cplusplus
    data->remesh_mode = (std::remove_reference_t<decltype(data->remesh_mode)>)value;
#else
    data->remesh_mode = value;
#endif
}

RNA_EXTERN_C bool Mesh_use_mirror_x_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->symmetry) & 1) != 0);
}

RNA_EXTERN_C void Mesh_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry |= 1; }
    else { data->symmetry &= ~1; }
}

RNA_EXTERN_C bool Mesh_use_mirror_y_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->symmetry) & 2) != 0);
}

RNA_EXTERN_C void Mesh_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry |= 2; }
    else { data->symmetry &= ~2; }
}

RNA_EXTERN_C bool Mesh_use_mirror_z_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->symmetry) & 4) != 0);
}

RNA_EXTERN_C void Mesh_use_mirror_z_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry |= 4; }
    else { data->symmetry &= ~4; }
}

RNA_EXTERN_C bool Mesh_use_mirror_vertex_groups_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 1) != 0);
}

RNA_EXTERN_C void Mesh_use_mirror_vertex_groups_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 1; }
    else { data->editflag &= ~1; }
}

RNA_EXTERN_C bool Mesh_has_custom_normals_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Mesh_has_custom_normals_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Mesh_texco_mesh_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

RNA_EXTERN_C void Mesh_texco_mesh_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Mesh *data = (Mesh *)(ptr->data);

    if (data->texcomesh) {
        id_us_min((ID *)data->texcomesh);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->texcomesh = value.data;
}

RNA_EXTERN_C PointerRNA Mesh_shape_keys_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

RNA_EXTERN_C bool Mesh_use_auto_texspace_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->texspace_flag) & 1) != 0);
}

RNA_EXTERN_C void Mesh_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->texspace_flag |= 1; }
    else { data->texspace_flag &= ~1; }
}

RNA_EXTERN_C bool Mesh_use_mirror_topology_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 16) != 0);
}

RNA_EXTERN_C void Mesh_use_mirror_topology_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 16; }
    else { data->editflag &= ~16; }
}

RNA_EXTERN_C bool Mesh_use_paint_mask_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 8) != 0);
}

RNA_EXTERN_C void Mesh_use_paint_mask_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 8; }
    else { data->editflag &= ~8; }
}

RNA_EXTERN_C bool Mesh_use_paint_mask_vertex_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 32) != 0);
}

RNA_EXTERN_C void Mesh_use_paint_mask_vertex_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 32; }
    else { data->editflag &= ~32; }
}

RNA_EXTERN_C int Mesh_total_vert_sel_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_tot_vert_get;
    return fn(ptr);
}

RNA_EXTERN_C int Mesh_total_edge_sel_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_tot_edge_get;
    return fn(ptr);
}

RNA_EXTERN_C int Mesh_total_face_sel_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_tot_face_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Mesh_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Mesh_is_editmode_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Mesh_animation_data_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

RNA_EXTERN_C bool Mesh_auto_texspace_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->texspace_flag) & 1) != 0);
}

RNA_EXTERN_C void Mesh_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->texspace_flag |= 1; }
    else { data->texspace_flag &= ~1; }
}

RNA_EXTERN_C void Mesh_texspace_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Mesh_texspace_location_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Mesh_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->texspace_location)[i] = values[i];
    }
}

RNA_EXTERN_C void Mesh_texspace_size_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Mesh_texspace_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void Mesh_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->texspace_size)[i] = values[i];
    }
}

RNA_EXTERN_C int Mesh_materials_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Mesh_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

RNA_EXTERN_C void Mesh_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Mesh_materials_get(iter);
    }
}

RNA_EXTERN_C void Mesh_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_materials_get(iter);
    }
}

RNA_EXTERN_C void Mesh_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int Mesh_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_materials_get(&iter); }
    }

    Mesh_materials_end(&iter);

    return found;
}

RNA_EXTERN_C int ID_name_length(PointerRNA *);
RNA_EXTERN_C void ID_name_get(PointerRNA *, char *);

RNA_EXTERN_C int Mesh_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_materials_begin(&iter, ptr);

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
        Mesh_materials_next(&iter);
    }
    Mesh_materials_end(&iter);

    return found;
}

static PointerRNA MeshVertices_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshVertices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertices_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertices_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshVertices_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertices_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshVertices_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshVertices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshVertices_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshEdges_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshEdges_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshEdges_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshEdges_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshEdges_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshEdges_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshEdges_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshEdges_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshEdges_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshLoops_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshLoops_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoops_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoops_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoops_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoops_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoops_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshLoops_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshLoops_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshPolygons_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshPolygons_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygons_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygons_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPolygons_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygons_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPolygons_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshPolygons_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshPolygons_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MeshPolygons_active_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (int)(data->act_face);
}

RNA_EXTERN_C void MeshPolygons_active_set(PointerRNA *ptr, int value)
{
    Mesh *data = (Mesh *)(ptr->data);
#ifdef __cplusplus
    data->act_face = (std::remove_reference_t<decltype(data->act_face)>)value;
#else
    data->act_face = value;
#endif
}

static PointerRNA MeshNormalValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshNormalValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshNormalValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshNormalValue_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshNormalValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshNormalValue_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshNormalValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshNormalValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshNormalValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshNormalValue_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

static PointerRNA MeshLoopTriangles_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshLoopTriangles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopTriangles_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopTriangles_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopTriangles_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshLoopTriangles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshLoopTriangles_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ReadOnlyInteger_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ReadOnlyInteger_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ReadOnlyInteger_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ReadOnlyInteger_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ReadOnlyInteger_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ReadOnlyInteger_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ReadOnlyInteger_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ReadOnlyInteger_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ReadOnlyInteger_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int ReadOnlyInteger_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

static PointerRNA UVLoopLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UVLoopLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UVLoopLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UVLoopLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UVLoopLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UVLoopLayers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UVLoopLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UVLoopLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UVLoopLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA UVLoopLayers_active_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_active_get(ptr);
}

RNA_EXTERN_C void UVLoopLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_uv_layer_active_set(ptr, value, reports);
}

RNA_EXTERN_C int UVLoopLayers_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void UVLoopLayers_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_active_index_set;
    fn(ptr, value);
}

static PointerRNA LoopColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void LoopColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LoopColors_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LoopColors_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LoopColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LoopColors_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LoopColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LoopColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA LoopColors_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA LoopColors_active_get(PointerRNA *ptr)
{
    return rna_Mesh_vertex_color_active_get(ptr);
}

RNA_EXTERN_C void LoopColors_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_vertex_color_active_set(ptr, value, reports);
}

RNA_EXTERN_C int LoopColors_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_vertex_color_active_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void LoopColors_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_vertex_color_active_index_set;
    fn(ptr, value);
}

static PointerRNA MeshSkinVertexLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshSkinVertexLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshSkinVertexLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshSkinVertexLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshSkinVertexLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshSkinVertexLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshSkinVertexLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MeshSkinVertexLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MeshSkinVertexLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshVertexLayer_name_set(ptr, value);
}

RNA_EXTERN_C int MeshSkinVertexLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshSkinVertexLayer_data_length(ptr);
}

static PointerRNA MeshSkinVertexLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSkinVertex, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshSkinVertexLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshSkinVertexLayer_data;

    rna_MeshSkinVertexLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshSkinVertexLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshSkinVertexLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshSkinVertexLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshSkinVertexLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshSkinVertexLayer_data_get(&iter); }
    }

    MeshSkinVertexLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshSkinVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshSkinVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshSkinVertex_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertex_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshSkinVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertex_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshSkinVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshSkinVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshSkinVertex_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshSkinVertex_radius_get(PointerRNA *ptr, float values[2])
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->radius)[i]);
    }
}

RNA_EXTERN_C void MeshSkinVertex_radius_set(PointerRNA *ptr, const float values[2])
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->radius)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

RNA_EXTERN_C bool MeshSkinVertex_use_root_get(PointerRNA *ptr)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

RNA_EXTERN_C void MeshSkinVertex_use_root_set(PointerRNA *ptr, bool value)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool MeshSkinVertex_use_loose_get(PointerRNA *ptr)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void MeshSkinVertex_use_loose_set(PointerRNA *ptr, bool value)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA MeshPaintMaskLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshPaintMaskLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPaintMaskLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPaintMaskLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshPaintMaskLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshPaintMaskLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MeshPaintMaskLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshPaintMaskLayer_data_length(ptr);
}

static PointerRNA MeshPaintMaskLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPaintMaskProperty, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshPaintMaskLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPaintMaskLayer_data;

    rna_MeshPaintMaskLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshPaintMaskLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshPaintMaskLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshPaintMaskLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshPaintMaskLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshPaintMaskLayer_data_get(&iter); }
    }

    MeshPaintMaskLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshPaintMaskProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshPaintMaskProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskProperty_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPaintMaskProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskProperty_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPaintMaskProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshPaintMaskProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshPaintMaskProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C float MeshPaintMaskProperty_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

RNA_EXTERN_C void MeshPaintMaskProperty_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
#ifdef __cplusplus
    data->f = (std::remove_reference_t<decltype(data->f)>)value;
#else
    data->f = value;
#endif
}

static PointerRNA MeshVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertex_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertex_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertex_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshVertex_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshVertex_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshVertex_co_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshVertex_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_MeshVertex_co_set;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshVertex_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshVertex_normal_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool MeshVertex_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshVertex_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshVertex_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshVertex_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshVertex_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshVertex_hide_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshVertex_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshVertex_hide_set;
    fn(ptr, value);
}

static PointerRNA MeshVertex_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshVertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertex_groups;

    rna_MeshVertex_groups_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertex_groups_get(iter);
    }
}

RNA_EXTERN_C void MeshVertex_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertex_groups_get(iter);
    }
}

RNA_EXTERN_C void MeshVertex_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshVertex_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshVertex_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshVertex_undeformed_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshVertex_undeformed_co_get;
    fn(ptr, values);
}

static PointerRNA VertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void VertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexGroupElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroupElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexGroupElement_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void VertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int VertexGroupElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA VertexGroupElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int VertexGroupElement_group_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (int)(data->def_nr);
}

RNA_EXTERN_C float VertexGroupElement_weight_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (float)(data->weight);
}

RNA_EXTERN_C void VertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
#ifdef __cplusplus
    data->weight = (std::remove_reference_t<decltype(data->weight)>)CLAMPIS(value, 0.0f, 1.0f);
#else
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
#endif
}

static PointerRNA MeshEdge_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshEdge_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshEdge_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshEdge_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshEdge_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshEdge_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshEdge_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshEdge_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshEdge_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshEdge_vertices_get(PointerRNA *ptr, int values[2])
{
    vec2i *data = (vec2i *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)((&data->x)[i]);
    }
}

RNA_EXTERN_C void MeshEdge_vertices_set(PointerRNA *ptr, const int values[2])
{
    vec2i *data = (vec2i *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->x)[i] = CLAMPIS(values[i], 0, INT_MAX);
    }
}

RNA_EXTERN_C bool MeshEdge_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshEdge_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshEdge_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_hide_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshEdge_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_hide_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshEdge_use_seam_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_use_seam_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshEdge_use_seam_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_use_seam_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshEdge_use_edge_sharp_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_use_edge_sharp_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshEdge_use_edge_sharp_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_use_edge_sharp_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshEdge_is_loose_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_is_loose_get;
    return fn(ptr);
}

RNA_EXTERN_C bool MeshEdge_use_freestyle_mark_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MEdge_freestyle_edge_mark_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshEdge_use_freestyle_mark_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MEdge_freestyle_edge_mark_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MeshEdge_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshEdge_index_get;
    return fn(ptr);
}

static PointerRNA MeshLoopTriangle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshLoopTriangle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopTriangle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangle_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopTriangle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangle_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopTriangle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshLoopTriangle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshLoopTriangle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshLoopTriangle_vertices_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_MeshLoopTriangle_verts_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshLoopTriangle_loops_get(PointerRNA *ptr, int values[3])
{
    MLoopTri *data = (MLoopTri *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->tri)[i]);
    }
}

RNA_EXTERN_C int MeshLoopTriangle_polygon_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoopTriangle_polygon_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoopTriangle_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoopTriangle_normal_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshLoopTriangle_split_normals_get(PointerRNA *ptr, float values[9])
{
    PropFloatArrayGetFunc fn = rna_MeshLoopTriangle_split_normals_get;
    fn(ptr, values);
}

RNA_EXTERN_C float MeshLoopTriangle_area_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MeshLoopTriangle_area_get;
    return fn(ptr);
}

RNA_EXTERN_C int MeshLoopTriangle_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoopTriangle_index_get;
    return fn(ptr);
}

RNA_EXTERN_C int MeshLoopTriangle_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoopTriangle_material_index_get;
    return fn(ptr);
}

RNA_EXTERN_C bool MeshLoopTriangle_use_smooth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshLoopTriangle_use_smooth_get;
    return fn(ptr);
}

static PointerRNA MeshLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoop_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoop_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoop_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshLoop_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MeshLoop_vertex_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoop_vertex_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoop_vertex_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_MeshLoop_vertex_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MeshLoop_edge_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoop_edge_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoop_edge_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_MeshLoop_edge_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MeshLoop_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoop_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoop_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoop_normal_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshLoop_tangent_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoop_tangent_get;
    fn(ptr, values);
}

RNA_EXTERN_C float MeshLoop_bitangent_sign_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MeshLoop_bitangent_sign_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoop_bitangent_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoop_bitangent_get;
    fn(ptr, values);
}

static PointerRNA MeshPolygon_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshPolygon_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygon_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygon_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPolygon_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygon_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshPolygon_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshPolygon_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshPolygon_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshPolygon_vertices_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_MeshPoly_vertices_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshPolygon_vertices_set(PointerRNA *ptr, const int values[])
{
    PropIntArraySetFunc fn = rna_MeshPoly_vertices_set;
    fn(ptr, values);
}

RNA_EXTERN_C int MeshPolygon_loop_start_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

RNA_EXTERN_C void MeshPolygon_loop_start_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
#ifdef __cplusplus
    data->i = (std::remove_reference_t<decltype(data->i)>)CLAMPIS(value, 0, INT_MAX);
#else
    data->i = CLAMPIS(value, 0, INT_MAX);
#endif
}

RNA_EXTERN_C int MeshPolygon_loop_total_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshPolygon_loop_total_get;
    return fn(ptr);
}

RNA_EXTERN_C int MeshPolygon_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshPolygon_material_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshPolygon_material_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_MeshPolygon_material_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshPolygon_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshPolygon_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshPolygon_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshPolygon_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshPolygon_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshPolygon_hide_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshPolygon_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshPolygon_hide_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshPolygon_use_smooth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshPolygon_use_smooth_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshPolygon_use_smooth_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshPolygon_use_smooth_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshPolygon_use_freestyle_mark_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MPoly_freestyle_face_mark_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshPolygon_use_freestyle_mark_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MPoly_freestyle_face_mark_set;
    fn(ptr, value);
}

RNA_EXTERN_C void MeshPolygon_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshPolygon_normal_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshPolygon_center_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshPolygon_center_get;
    fn(ptr, values);
}

RNA_EXTERN_C float MeshPolygon_area_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MeshPolygon_area_get;
    return fn(ptr);
}

RNA_EXTERN_C int MeshPolygon_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshPolygon_index_get;
    return fn(ptr);
}

static PointerRNA MeshUVLoopLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshUVLoopLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshUVLoopLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshUVLoopLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int MeshUVLoopLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_data_length(ptr);
}

static PointerRNA MeshUVLoopLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshUVLoop, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshUVLoopLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_data;

    rna_MeshUVLoopLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshUVLoopLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshUVLoopLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshUVLoopLayer_data_get(&iter); }
    }

    MeshUVLoopLayer_data_end(&iter);

    return found;
}

RNA_EXTERN_C void MeshUVLoopLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MeshUVLoopLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MeshUVLoopLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshLoopLayer_name_set(ptr, value);
}

RNA_EXTERN_C bool MeshUVLoopLayer_active_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoopLayer_active_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshUVLoopLayer_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoopLayer_active_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshUVLoopLayer_active_render_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoopLayer_active_render_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshUVLoopLayer_active_render_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoopLayer_active_render_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshUVLoopLayer_active_clone_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoopLayer_clone_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshUVLoopLayer_active_clone_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoopLayer_clone_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MeshUVLoopLayer_uv_length(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_data_length(ptr);
}

static PointerRNA MeshUVLoopLayer_uv_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Float2AttributeValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshUVLoopLayer_uv_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_uv;

    rna_MeshUVLoopLayer_uv_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_uv_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_uv_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_uv_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_uv_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshUVLoopLayer_uv_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_MeshUVLoopLayer_uv_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int MeshUVLoopLayer_vertex_selection_length(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_data_length(ptr);
}

static PointerRNA MeshUVLoopLayer_vertex_selection_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoolAttributeValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshUVLoopLayer_vertex_selection_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_vertex_selection;

    rna_MeshUVLoopLayer_vert_select_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_vertex_selection_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_vertex_selection_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_vertex_selection_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_vertex_selection_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshUVLoopLayer_vertex_selection_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_MeshUVLoopLayer_vert_select_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int MeshUVLoopLayer_edge_selection_length(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_data_length(ptr);
}

static PointerRNA MeshUVLoopLayer_edge_selection_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoolAttributeValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshUVLoopLayer_edge_selection_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_edge_selection;

    rna_MeshUVLoopLayer_edge_select_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_edge_selection_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_edge_selection_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_edge_selection_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_edge_selection_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshUVLoopLayer_edge_selection_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_MeshUVLoopLayer_edge_select_lookup_int(ptr, index, r_ptr);
}

RNA_EXTERN_C int MeshUVLoopLayer_pin_length(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_data_length(ptr);
}

static PointerRNA MeshUVLoopLayer_pin_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoolAttributeValue, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshUVLoopLayer_pin_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_pin;

    rna_MeshUVLoopLayer_pin_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_pin_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_pin_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_pin_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoopLayer_pin_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshUVLoopLayer_pin_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_MeshUVLoopLayer_pin_lookup_int(ptr, index, r_ptr);
}

static PointerRNA MeshUVLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshUVLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoop_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoop_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoop_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshUVLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshUVLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshUVLoop_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshUVLoop_uv_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MeshUVLoop_uv_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshUVLoop_uv_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MeshUVLoop_uv_set;
    fn(ptr, values);
}

RNA_EXTERN_C bool MeshUVLoop_pin_uv_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoop_pin_uv_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshUVLoop_pin_uv_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoop_pin_uv_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshUVLoop_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoop_select_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshUVLoop_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoop_select_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshUVLoop_select_edge_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoop_select_edge_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshUVLoop_select_edge_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoop_select_edge_set;
    fn(ptr, value);
}

static PointerRNA MeshLoopColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshLoopColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshLoopColorLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshLoopColorLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshLoopColorLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

RNA_EXTERN_C int MeshLoopColorLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

RNA_EXTERN_C void MeshLoopColorLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshLoopLayer_name_set(ptr, value);
}

RNA_EXTERN_C bool MeshLoopColorLayer_active_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_mesh_color_active_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoopColorLayer_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_mesh_color_active_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool MeshLoopColorLayer_active_render_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_mesh_color_active_render_get;
    return fn(ptr);
}

RNA_EXTERN_C void MeshLoopColorLayer_active_render_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_mesh_color_active_render_set;
    fn(ptr, value);
}

RNA_EXTERN_C int MeshLoopColorLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshLoopColorLayer_data_length(ptr);
}

static PointerRNA MeshLoopColorLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopColor, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void MeshLoopColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopColorLayer_data;

    rna_MeshLoopColorLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopColorLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_data_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopColorLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

RNA_EXTERN_C int MeshLoopColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshLoopColorLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshLoopColorLayer_data_get(&iter); }
    }

    MeshLoopColorLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshLoopColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void MeshLoopColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopColor_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColor_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColor_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void MeshLoopColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int MeshLoopColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA MeshLoopColor_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void MeshLoopColor_color_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_MeshLoopColor_color_get;
    fn(ptr, values);
}

RNA_EXTERN_C void MeshLoopColor_color_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_MeshLoopColor_color_set;
    fn(ptr, values);
}

RNA_EXTERN_C void Mesh_transform_func(struct Mesh *_self, float matrix[16], bool shape_keys)
{
	rna_Mesh_transform(_self, matrix, shape_keys);
}

static void Mesh_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Mesh_transform(_self, matrix, shape_keys);
}

RNA_EXTERN_C void Mesh_flip_normals_func(struct Mesh *_self)
{
	rna_Mesh_flip_normals(_self);
}

static void Mesh_flip_normals_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_flip_normals(_self);
}

RNA_EXTERN_C void Mesh_set_sharp_from_angle_func(struct Mesh *_self, float angle)
{
	rna_Mesh_sharp_from_angle_set(_self, angle);
}

static void Mesh_set_sharp_from_angle_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	float angle;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	angle = *((float *)_data);
	
	rna_Mesh_sharp_from_angle_set(_self, angle);
}

RNA_EXTERN_C void Mesh_split_faces_func(struct Mesh *_self)
{
	ED_mesh_split_faces(_self);
}

static void Mesh_split_faces_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	ED_mesh_split_faces(_self);
}

RNA_EXTERN_C void Mesh_calc_tangents_func(struct Mesh *_self, ReportList *reports, const char * uvmap)
{
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

static void Mesh_calc_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * uvmap;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	uvmap = *((const char * *)_data);
	
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

RNA_EXTERN_C void Mesh_free_tangents_func(struct Mesh *_self)
{
	rna_Mesh_free_tangents(_self);
}

static void Mesh_free_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_free_tangents(_self);
}

RNA_EXTERN_C void Mesh_calc_loop_triangles_func(struct Mesh *_self)
{
	rna_Mesh_calc_looptri(_self);
}

static void Mesh_calc_loop_triangles_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_calc_looptri(_self);
}

RNA_EXTERN_C void Mesh_calc_smooth_groups_func(struct Mesh *_self, bool use_bitflags, int *poly_groups_num, int **poly_groups, int *groups)
{
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, poly_groups, poly_groups_num, groups);
}

static void Mesh_calc_smooth_groups_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool use_bitflags;
	int *poly_groups_num;
	int **poly_groups;
	int *groups;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	use_bitflags = *((bool *)_data);
	_data += 8;
	poly_groups_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	poly_groups = ((int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	groups = ((int *)_data);
	
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, poly_groups, poly_groups_num, groups);
}

RNA_EXTERN_C void Mesh_normals_split_custom_set_func(struct Mesh *_self, ReportList *reports, int normals_num, float *normals)
{
	rna_Mesh_normals_split_custom_set(_self, reports, normals, normals_num);
}

static void Mesh_normals_split_custom_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int normals_num;
	const float *normals;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	normals = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Mesh_normals_split_custom_set(_self, reports, normals, normals_num);
}

RNA_EXTERN_C void Mesh_normals_split_custom_set_from_vertices_func(struct Mesh *_self, ReportList *reports, int normals_num, float *normals)
{
	rna_Mesh_normals_split_custom_set_from_vertices(_self, reports, normals, normals_num);
}

static void Mesh_normals_split_custom_set_from_vertices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int normals_num;
	const float *normals;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	normals = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Mesh_normals_split_custom_set_from_vertices(_self, reports, normals, normals_num);
}

RNA_EXTERN_C void Mesh_update_func(struct Mesh *_self, bContext *C, bool calc_edges, bool calc_edges_loose)
{
	rna_Mesh_update(_self, C, calc_edges, calc_edges_loose);
}

static void Mesh_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool calc_edges;
	bool calc_edges_loose;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	calc_edges = *((bool *)_data);
	_data += 8;
	calc_edges_loose = *((bool *)_data);
	
	rna_Mesh_update(_self, C, calc_edges, calc_edges_loose);
}

RNA_EXTERN_C void Mesh_update_gpu_tag_func(struct Mesh *_self)
{
	rna_Mesh_update_gpu_tag(_self);
}

static void Mesh_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_update_gpu_tag(_self);
}

RNA_EXTERN_C const char * Mesh_unit_test_compare_func(struct Mesh *_self, struct Mesh *mesh, float threshold)
{
	return rna_Mesh_unit_test_compare(_self, mesh, threshold);
}

static void Mesh_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct Mesh *mesh;
	float threshold;
	const char * result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((struct Mesh **)_data);
	_data += 8;
	threshold = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Mesh_unit_test_compare(_self, mesh, threshold);
	*((const char * *)_retdata) = result;
}

RNA_EXTERN_C void Mesh_clear_geometry_func(struct Mesh *_self)
{
	rna_Mesh_clear_geometry(_self);
}

static void Mesh_clear_geometry_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_clear_geometry(_self);
}

RNA_EXTERN_C bool Mesh_validate_func(struct Mesh *_self, bool verbose, bool clean_customdata)
{
	return BKE_mesh_validate(_self, verbose, clean_customdata);
}

static void Mesh_validate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool verbose;
	bool clean_customdata;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	verbose = *((bool *)_data);
	_data += 8;
	clean_customdata = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = BKE_mesh_validate(_self, verbose, clean_customdata);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C bool Mesh_validate_material_indices_func(struct Mesh *_self)
{
	return BKE_mesh_validate_material_indices(_self);
}

static void Mesh_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = BKE_mesh_validate_material_indices(_self);
	*((bool *)_retdata) = result;
}

RNA_EXTERN_C void Mesh_count_selected_items_func(struct Mesh *_self, int result[3])
{
	rna_Mesh_count_selected_items (_self, result);
}

static void Mesh_count_selected_items_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int *result;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	result = ((int *)_data);
	
	rna_Mesh_count_selected_items (_self, result);
}

/* Repeated prototypes to detect errors */

void rna_Mesh_transform(struct Mesh *_self, float matrix[16], bool shape_keys);
void rna_Mesh_flip_normals(struct Mesh *_self);
void rna_Mesh_sharp_from_angle_set(struct Mesh *_self, float angle);
void ED_mesh_split_faces(struct Mesh *_self);
void rna_Mesh_calc_tangents(struct Mesh *_self, ReportList *reports, const char * uvmap);
void rna_Mesh_free_tangents(struct Mesh *_self);
void rna_Mesh_calc_looptri(struct Mesh *_self);
void rna_Mesh_calc_smooth_groups(struct Mesh *_self, bool use_bitflags, int *poly_groups_num, int **poly_groups, int *groups);
void rna_Mesh_normals_split_custom_set(struct Mesh *_self, ReportList *reports, int normals_num, float *normals);
void rna_Mesh_normals_split_custom_set_from_vertices(struct Mesh *_self, ReportList *reports, int normals_num, float *normals);
void rna_Mesh_update(struct Mesh *_self, bContext *C, bool calc_edges, bool calc_edges_loose);
void rna_Mesh_update_gpu_tag(struct Mesh *_self);
const char * rna_Mesh_unit_test_compare(struct Mesh *_self, struct Mesh *mesh, float threshold);
void rna_Mesh_clear_geometry(struct Mesh *_self);
bool BKE_mesh_validate(struct Mesh *_self, bool verbose, bool clean_customdata);
bool BKE_mesh_validate_material_indices(struct Mesh *_self);
void rna_Mesh_count_selected_items (struct Mesh *_self, int result[3]);

RNA_EXTERN_C void MeshVertices_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_verts_add(_self, reports, count);
}

static void MeshVertices_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_verts_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_verts_add(struct Mesh *_self, ReportList *reports, int count);

RNA_EXTERN_C void MeshEdges_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_edges_add(_self, reports, count);
}

static void MeshEdges_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_edges_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_edges_add(struct Mesh *_self, ReportList *reports, int count);

RNA_EXTERN_C void MeshLoops_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_loops_add(_self, reports, count);
}

static void MeshLoops_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_loops_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_loops_add(struct Mesh *_self, ReportList *reports, int count);

RNA_EXTERN_C void MeshPolygons_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_faces_add(_self, reports, count);
}

static void MeshPolygons_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_faces_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_faces_add(struct Mesh *_self, ReportList *reports, int count);




RNA_EXTERN_C struct PointerRNA UVLoopLayers_new_func(struct Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_uv_layers_new(_self, reports, name, do_init);
}

static void UVLoopLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	bool do_init;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_uv_layers_new(_self, reports, name, do_init);
	*((struct PointerRNA *)_retdata) = layer;
}

RNA_EXTERN_C void UVLoopLayers_remove_func(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_uv_layers_remove(_self, reports, layer);
}

static void UVLoopLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_uv_layers_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_uv_layers_new(struct Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_uv_layers_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);

RNA_EXTERN_C struct PointerRNA LoopColors_new_func(struct Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_vertex_color_new(_self, reports, name, do_init);
}

static void LoopColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	bool do_init;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_vertex_color_new(_self, reports, name, do_init);
	*((struct PointerRNA *)_retdata) = layer;
}

RNA_EXTERN_C void LoopColors_remove_func(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

static void LoopColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_vertex_color_new(struct Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_vertex_color_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);










RNA_EXTERN_C int MeshPolygon_vertices_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_MeshPoly_vertices_get_length(ptr, arraylen);
}

RNA_EXTERN_C void MeshPolygon_flip_func(struct ID *_selfid, struct MIntProperty *_self)
{
	rna_MeshPolygon_flip(_selfid, _self);
}

static void MeshPolygon_flip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MIntProperty *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MIntProperty *)_ptr->data;
	
	rna_MeshPolygon_flip(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_MeshPolygon_flip(struct ID *_selfid, struct MIntProperty *_self);





/* Mesh */
CollectionPropertyRNA rna_Mesh_vertices = {
	{(PropertyRNA *)&rna_Mesh_edges, nullptr,
	-1, "vertices", 0, 4, 0, 8, 0, "Vertices",
	"Vertices of the mesh",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MeshVertices},
	Mesh_vertices_begin, Mesh_vertices_next, Mesh_vertices_end, Mesh_vertices_get, Mesh_vertices_length, Mesh_vertices_lookup_int, nullptr, nullptr, &RNA_MeshVertex
};

CollectionPropertyRNA rna_Mesh_edges = {
	{(PropertyRNA *)&rna_Mesh_loops, (PropertyRNA *)&rna_Mesh_vertices,
	-1, "edges", 0, 4, 0, 8, 0, "Edges",
	"Edges of the mesh",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MeshEdges},
	Mesh_edges_begin, Mesh_edges_next, Mesh_edges_end, Mesh_edges_get, Mesh_edges_length, Mesh_edges_lookup_int, nullptr, nullptr, &RNA_MeshEdge
};

CollectionPropertyRNA rna_Mesh_loops = {
	{(PropertyRNA *)&rna_Mesh_polygons, (PropertyRNA *)&rna_Mesh_edges,
	-1, "loops", 0, 4, 0, 8, 0, "Loops",
	"Loops of the mesh (face corners)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MeshLoops},
	Mesh_loops_begin, Mesh_loops_next, Mesh_loops_end, Mesh_loops_get, Mesh_loops_length, Mesh_loops_lookup_int, nullptr, nullptr, &RNA_MeshLoop
};

CollectionPropertyRNA rna_Mesh_polygons = {
	{(PropertyRNA *)&rna_Mesh_normals_domain, (PropertyRNA *)&rna_Mesh_loops,
	-1, "polygons", 0, 4, 0, 8, 0, "Polygons",
	"Polygons of the mesh",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MeshPolygons},
	Mesh_polygons_begin, Mesh_polygons_next, Mesh_polygons_end, Mesh_polygons_get, Mesh_polygons_length, Mesh_polygons_lookup_int, nullptr, nullptr, &RNA_MeshPolygon
};

static const EnumPropertyItem rna_Mesh_normals_domain_items[4] = {
	{1, "POINT", 0, "Point", ""},
	{0, "FACE", 0, "Face", ""},
	{2, "CORNER", 0, "Corner", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Mesh_normals_domain = {
	{(PropertyRNA *)&rna_Mesh_vertex_normals, (PropertyRNA *)&rna_Mesh_polygons,
	-1, "normals_domain", 2, 0, 0, 0, 0, "Normal Domain",
	"The attribute domain that gives enough information to represent the mesh\'s normals",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_normals_domain_get, nullptr, nullptr, nullptr, nullptr, rna_Mesh_normals_domain_items, 3, 0
};

CollectionPropertyRNA rna_Mesh_vertex_normals = {
	{(PropertyRNA *)&rna_Mesh_polygon_normals, (PropertyRNA *)&rna_Mesh_normals_domain,
	-1, "vertex_normals", 0, 4, 0, 8, 0, "Vertex Normals",
	"The normal direction of each vertex, defined as the average of the surrounding face normals",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_vertex_normals_begin, Mesh_vertex_normals_next, Mesh_vertex_normals_end, Mesh_vertex_normals_get, Mesh_vertex_normals_length, Mesh_vertex_normals_lookup_int, nullptr, nullptr, &RNA_MeshNormalValue
};

CollectionPropertyRNA rna_Mesh_polygon_normals = {
	{(PropertyRNA *)&rna_Mesh_corner_normals, (PropertyRNA *)&rna_Mesh_vertex_normals,
	-1, "polygon_normals", 0, 4, 0, 8, 0, "Polygon Normals",
	"The normal direction of each face, defined by the winding order and position of its vertices",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_polygon_normals_begin, Mesh_polygon_normals_next, Mesh_polygon_normals_end, Mesh_polygon_normals_get, Mesh_polygon_normals_length, Mesh_polygon_normals_lookup_int, nullptr, nullptr, &RNA_MeshNormalValue
};

CollectionPropertyRNA rna_Mesh_corner_normals = {
	{(PropertyRNA *)&rna_Mesh_loop_triangles, (PropertyRNA *)&rna_Mesh_polygon_normals,
	-1, "corner_normals", 0, 4, 0, 8, 0, "Corner Normals",
	"The \"slit\" normal direction of each face corner, influenced by vertex normals, sharp faces, sharp edges, and custom normals. May be empty",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_corner_normals_begin, Mesh_corner_normals_next, Mesh_corner_normals_end, Mesh_corner_normals_get, Mesh_corner_normals_length, Mesh_corner_normals_lookup_int, nullptr, nullptr, &RNA_MeshNormalValue
};

CollectionPropertyRNA rna_Mesh_loop_triangles = {
	{(PropertyRNA *)&rna_Mesh_loop_triangle_polygons, (PropertyRNA *)&rna_Mesh_corner_normals,
	-1, "loop_triangles", 0, 4, 0, 8, 0, "Loop Triangles",
	"Tessellation of mesh polygons into triangles",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_MeshLoopTriangles},
	Mesh_loop_triangles_begin, Mesh_loop_triangles_next, Mesh_loop_triangles_end, Mesh_loop_triangles_get, Mesh_loop_triangles_length, Mesh_loop_triangles_lookup_int, nullptr, nullptr, &RNA_MeshLoopTriangle
};

CollectionPropertyRNA rna_Mesh_loop_triangle_polygons = {
	{(PropertyRNA *)&rna_Mesh_texture_mesh, (PropertyRNA *)&rna_Mesh_loop_triangles,
	-1, "loop_triangle_polygons", 0, 4, 0, 8, 0, "Triangle Faces",
	"The face index for each loop triangle",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_loop_triangle_polygons_begin, Mesh_loop_triangle_polygons_next, Mesh_loop_triangle_polygons_end, Mesh_loop_triangle_polygons_get, Mesh_loop_triangle_polygons_length, Mesh_loop_triangle_polygons_lookup_int, nullptr, nullptr, &RNA_ReadOnlyInteger
};

PointerPropertyRNA rna_Mesh_texture_mesh = {
	{(PropertyRNA *)&rna_Mesh_uv_layers, (PropertyRNA *)&rna_Mesh_loop_triangle_polygons,
	-1, "texture_mesh", 9437377, 1, 0, 0, 0, "Texture Mesh",
	"Use another mesh for texture indices (vertex indices must be aligned)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_texture_mesh_get, Mesh_texture_mesh_set, nullptr, nullptr,&RNA_Mesh
};

CollectionPropertyRNA rna_Mesh_uv_layers = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_clone, (PropertyRNA *)&rna_Mesh_texture_mesh,
	-1, "uv_layers", 0, 4, 0, 8, 0, "UV Loop Layers",
	"All UV loop layers",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_UVLoopLayers},
	Mesh_uv_layers_begin, Mesh_uv_layers_next, Mesh_uv_layers_end, Mesh_uv_layers_get, Mesh_uv_layers_length, Mesh_uv_layers_lookup_int, Mesh_uv_layers_lookup_string, nullptr, &RNA_MeshUVLoopLayer
};

PointerPropertyRNA rna_Mesh_uv_layer_clone = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_clone_index, (PropertyRNA *)&rna_Mesh_uv_layers,
	-1, "uv_layer_clone", 8388609, 4, 0, 0, 0, "Clone UV Loop Layer",
	"UV loop layer to be used as cloning source",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_uv_layer_clone_get, Mesh_uv_layer_clone_set, nullptr, nullptr,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_Mesh_uv_layer_clone_index = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_stencil, (PropertyRNA *)&rna_Mesh_uv_layer_clone,
	-1, "uv_layer_clone_index", 3, 0, 0, 0, 0, "Clone UV Loop Layer Index",
	"Clone UV loop layer index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_uv_layer_clone_index_get, Mesh_uv_layer_clone_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_Mesh_uv_layer_stencil = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_stencil_index, (PropertyRNA *)&rna_Mesh_uv_layer_clone_index,
	-1, "uv_layer_stencil", 8388609, 4, 0, 0, 0, "Mask UV Loop Layer",
	"UV loop layer to mask the painted area",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_uv_layer_stencil_get, Mesh_uv_layer_stencil_set, nullptr, nullptr,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_Mesh_uv_layer_stencil_index = {
	{(PropertyRNA *)&rna_Mesh_vertex_colors, (PropertyRNA *)&rna_Mesh_uv_layer_stencil,
	-1, "uv_layer_stencil_index", 3, 0, 0, 0, 0, "Mask UV Loop Layer Index",
	"Mask UV loop layer index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_uv_layer_stencil_index_get, Mesh_uv_layer_stencil_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

CollectionPropertyRNA rna_Mesh_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_skin_vertices, (PropertyRNA *)&rna_Mesh_uv_layer_stencil_index,
	-1, "vertex_colors", 0, 4, 0, 8, 0, "Vertex Colors",
	"Legacy vertex color layers. Deprecated, use color attributes instead",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_LoopColors},
	Mesh_vertex_colors_begin, Mesh_vertex_colors_next, Mesh_vertex_colors_end, Mesh_vertex_colors_get, Mesh_vertex_colors_length, Mesh_vertex_colors_lookup_int, Mesh_vertex_colors_lookup_string, nullptr, &RNA_MeshLoopColorLayer
};

CollectionPropertyRNA rna_Mesh_skin_vertices = {
	{(PropertyRNA *)&rna_Mesh_vertex_paint_masks, (PropertyRNA *)&rna_Mesh_vertex_colors,
	-1, "skin_vertices", 0, 4, 0, 8, 0, "Skin Vertices",
	"All skin vertices",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_skin_vertices_begin, Mesh_skin_vertices_next, Mesh_skin_vertices_end, Mesh_skin_vertices_get, Mesh_skin_vertices_length, Mesh_skin_vertices_lookup_int, Mesh_skin_vertices_lookup_string, nullptr, &RNA_MeshSkinVertexLayer
};

CollectionPropertyRNA rna_Mesh_vertex_paint_masks = {
	{(PropertyRNA *)&rna_Mesh_attributes, (PropertyRNA *)&rna_Mesh_skin_vertices,
	-1, "vertex_paint_masks", 0, 4, 0, 8, 0, "Vertex Paint Mask",
	"Vertex paint mask",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_vertex_paint_masks_begin, Mesh_vertex_paint_masks_next, Mesh_vertex_paint_masks_end, Mesh_vertex_paint_masks_get, Mesh_vertex_paint_masks_length, Mesh_vertex_paint_masks_lookup_int, nullptr, nullptr, &RNA_MeshPaintMaskLayer
};

CollectionPropertyRNA rna_Mesh_attributes = {
	{(PropertyRNA *)&rna_Mesh_color_attributes, (PropertyRNA *)&rna_Mesh_vertex_paint_masks,
	-1, "attributes", 0, 0, 0, 0, 0, "Attributes",
	"Geometry attributes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AttributeGroup},
	Mesh_attributes_begin, Mesh_attributes_next, Mesh_attributes_end, Mesh_attributes_get, Mesh_attributes_length, nullptr, nullptr, nullptr, &RNA_Attribute
};

CollectionPropertyRNA rna_Mesh_color_attributes = {
	{(PropertyRNA *)&rna_Mesh_remesh_voxel_size, (PropertyRNA *)&rna_Mesh_attributes,
	-1, "color_attributes", 0, 0, 0, 0, 0, "Color Attributes",
	"Geometry color attributes",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AttributeGroup},
	Mesh_color_attributes_begin, Mesh_color_attributes_next, Mesh_color_attributes_end, Mesh_color_attributes_get, Mesh_color_attributes_length, nullptr, nullptr, nullptr, &RNA_Attribute
};

FloatPropertyRNA rna_Mesh_remesh_voxel_size = {
	{(PropertyRNA *)&rna_Mesh_remesh_voxel_adaptivity, (PropertyRNA *)&rna_Mesh_color_attributes,
	-1, "remesh_voxel_size", 1073741827, 0, 0, 4, 0, "Voxel Size",
	"Size of the voxel in object space used for volume evaluation. Lower values preserve finer details",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, remesh_voxel_size), (RawPropertyType)5, nullptr},
	Mesh_remesh_voxel_size_get, Mesh_remesh_voxel_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, FLT_MAX, 0.0001000000f, FLT_MAX, 0.0099999998f, 4, 0.1000000015f, nullptr
};

FloatPropertyRNA rna_Mesh_remesh_voxel_adaptivity = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_fix_poles, (PropertyRNA *)&rna_Mesh_remesh_voxel_size,
	-1, "remesh_voxel_adaptivity", 1073741827, 0, 0, 4, 0, "Adaptivity",
	"Reduces the final face count by simplifying geometry where detail is not needed, generating triangles. A value greater than 0 disables Fix Poles",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DISTANCE | (int)PROP_UNIT_LENGTH), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, remesh_voxel_adaptivity), (RawPropertyType)5, nullptr},
	Mesh_remesh_voxel_adaptivity_get, Mesh_remesh_voxel_adaptivity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 4, 0.0f, nullptr
};

BoolPropertyRNA rna_Mesh_use_remesh_fix_poles = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_volume, (PropertyRNA *)&rna_Mesh_remesh_voxel_adaptivity,
	-1, "use_remesh_fix_poles", 1073741827, 0, 0, 0, 0, "Fix Poles",
	"Produces less poles and a better topology flow",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_remesh_fix_poles_get, Mesh_use_remesh_fix_poles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_volume = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_paint_mask, (PropertyRNA *)&rna_Mesh_use_remesh_fix_poles,
	-1, "use_remesh_preserve_volume", 1073741827, 0, 0, 0, 0, "Preserve Volume",
	"Projects the mesh to preserve the volume and details of the original mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_remesh_preserve_volume_get, Mesh_use_remesh_preserve_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_paint_mask = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_sculpt_face_sets, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_volume,
	-1, "use_remesh_preserve_paint_mask", 1073741827, 0, 0, 0, 0, "Preserve Paint Mask",
	"Keep the current mask on the new mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_remesh_preserve_paint_mask_get, Mesh_use_remesh_preserve_paint_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_sculpt_face_sets = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_vertex_colors, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_paint_mask,
	-1, "use_remesh_preserve_sculpt_face_sets", 1073741827, 0, 0, 0, 0, "Preserve Face Sets",
	"Keep the current Face Sets on the new mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_remesh_preserve_sculpt_face_sets_get, Mesh_use_remesh_preserve_sculpt_face_sets_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_remesh_mode, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_sculpt_face_sets,
	-1, "use_remesh_preserve_vertex_colors", 1073741827, 0, 0, 0, 0, "Preserve Vertex Colors",
	"Keep the current vertex colors on the new mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_remesh_preserve_vertex_colors_get, Mesh_use_remesh_preserve_vertex_colors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Mesh_remesh_mode_items[3] = {
	{0, "VOXEL", 0, "Voxel", "Use the voxel remesher"},
	{1, "QUAD", 0, "Quad", "Use the quad remesher"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Mesh_remesh_mode = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_x, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_vertex_colors,
	-1, "remesh_mode", 1073741827, 0, 0, 4, 0, "Remesh Mode",
	"",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, remesh_mode), (RawPropertyType)2, nullptr},
	Mesh_remesh_mode_get, Mesh_remesh_mode_set, nullptr, nullptr, nullptr, rna_Mesh_remesh_mode_items, 2, 0
};

BoolPropertyRNA rna_Mesh_use_mirror_x = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_y, (PropertyRNA *)&rna_Mesh_remesh_mode,
	-1, "use_mirror_x", 3, 0, 0, 0, 0, "X",
	"Enable symmetry in the X axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_mirror_x_get, Mesh_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_mirror_y = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_z, (PropertyRNA *)&rna_Mesh_use_mirror_x,
	-1, "use_mirror_y", 3, 0, 0, 0, 0, "Y",
	"Enable symmetry in the Y axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_mirror_y_get, Mesh_use_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_mirror_z = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_vertex_groups, (PropertyRNA *)&rna_Mesh_use_mirror_y,
	-1, "use_mirror_z", 3, 0, 0, 0, 0, "Z",
	"Enable symmetry in the Z axis",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_mirror_z_get, Mesh_use_mirror_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_mirror_vertex_groups = {
	{(PropertyRNA *)&rna_Mesh_has_custom_normals, (PropertyRNA *)&rna_Mesh_use_mirror_z,
	-1, "use_mirror_vertex_groups", 3, 0, 0, 0, 0, "Mirror Vertex Groups",
	"Mirror the left/right vertex groups when painting. The symmetry axis is determined by the symmetry settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_mirror_vertex_groups_get, Mesh_use_mirror_vertex_groups_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Mesh_has_custom_normals = {
	{(PropertyRNA *)&rna_Mesh_texco_mesh, (PropertyRNA *)&rna_Mesh_use_mirror_vertex_groups,
	-1, "has_custom_normals", 2, 0, 0, 0, 0, "Has Custom Normals",
	"True if there are custom split normals data in this mesh",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_has_custom_normals_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Mesh_texco_mesh = {
	{(PropertyRNA *)&rna_Mesh_shape_keys, (PropertyRNA *)&rna_Mesh_has_custom_normals,
	-1, "texco_mesh", 8388801, 1, 0, 0, 0, "Texture Space Mesh",
	"Derive texture coordinates from another mesh",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_texco_mesh_get, Mesh_texco_mesh_set, nullptr, nullptr,&RNA_Mesh
};

PointerPropertyRNA rna_Mesh_shape_keys = {
	{(PropertyRNA *)&rna_Mesh_use_auto_texspace, (PropertyRNA *)&rna_Mesh_texco_mesh,
	-1, "shape_keys", 8388672, 1, 0, 32, 0, "Shape Keys",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_shape_keys_get, nullptr, nullptr, nullptr,&RNA_Key
};

BoolPropertyRNA rna_Mesh_use_auto_texspace = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_topology, (PropertyRNA *)&rna_Mesh_shape_keys,
	-1, "use_auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_geom_and_params, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_auto_texspace_get, Mesh_use_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Mesh_use_mirror_topology = {
	{(PropertyRNA *)&rna_Mesh_use_paint_mask, (PropertyRNA *)&rna_Mesh_use_auto_texspace,
	-1, "use_mirror_topology", 3, 0, 0, 0, 0, "Topology Mirror",
	"Use topology based mirroring (for when both sides of mesh have matching, unique topology)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_mirror_topology_get, Mesh_use_mirror_topology_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_paint_mask = {
	{(PropertyRNA *)&rna_Mesh_use_paint_mask_vertex, (PropertyRNA *)&rna_Mesh_use_mirror_topology,
	-1, "use_paint_mask", 3, 0, 0, 0, 0, "Paint Mask",
	"Face selection masking for painting",
	548, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_facemask, 269090816, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_paint_mask_get, Mesh_use_paint_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_use_paint_mask_vertex = {
	{(PropertyRNA *)&rna_Mesh_total_vert_sel, (PropertyRNA *)&rna_Mesh_use_paint_mask,
	-1, "use_paint_mask_vertex", 3, 0, 0, 0, 0, "Vertex Selection",
	"Vertex selection masking for painting",
	546, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_vertmask, 269090816, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_use_paint_mask_vertex_get, Mesh_use_paint_mask_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_Mesh_total_vert_sel = {
	{(PropertyRNA *)&rna_Mesh_total_edge_sel, (PropertyRNA *)&rna_Mesh_use_paint_mask_vertex,
	-1, "total_vert_sel", 2, 0, 0, 0, 0, "Selected Vertex Total",
	"Selected vertex count in editmode",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_total_vert_sel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Mesh_total_edge_sel = {
	{(PropertyRNA *)&rna_Mesh_total_face_sel, (PropertyRNA *)&rna_Mesh_total_vert_sel,
	-1, "total_edge_sel", 2, 0, 0, 0, 0, "Selected Edge Total",
	"Selected edge count in editmode",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_total_edge_sel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Mesh_total_face_sel = {
	{(PropertyRNA *)&rna_Mesh_is_editmode, (PropertyRNA *)&rna_Mesh_total_edge_sel,
	-1, "total_face_sel", 2, 0, 0, 0, 0, "Selected Face Total",
	"Selected face count in editmode",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_total_face_sel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_Mesh_is_editmode = {
	{(PropertyRNA *)&rna_Mesh_animation_data, (PropertyRNA *)&rna_Mesh_total_face_sel,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_Mesh_animation_data = {
	{(PropertyRNA *)&rna_Mesh_auto_texspace, (PropertyRNA *)&rna_Mesh_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_animation_data_get, nullptr, nullptr, nullptr,&RNA_AnimData
};

BoolPropertyRNA rna_Mesh_auto_texspace = {
	{(PropertyRNA *)&rna_Mesh_texspace_location, (PropertyRNA *)&rna_Mesh_animation_data,
	-1, "auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Mesh_auto_texspace_get, Mesh_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static float rna_Mesh_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_texspace_location = {
	{(PropertyRNA *)&rna_Mesh_texspace_size, (PropertyRNA *)&rna_Mesh_auto_texspace,
	-1, "texspace_location", 3, 0, 0, 0, 0, "Texture Space Location",
	"Texture space location",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, rna_Mesh_texspace_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Mesh_texspace_location_get, Mesh_texspace_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_location_default
};

static float rna_Mesh_texspace_size_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Mesh_texspace_size = {
	{(PropertyRNA *)&rna_Mesh_materials, (PropertyRNA *)&rna_Mesh_texspace_location,
	-1, "texspace_size", 67108867, 0, 0, 0, 0, "Texture Space Size",
	"Texture space size",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, rna_Mesh_texspace_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Mesh_texspace_size_get, Mesh_texspace_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_size_default
};

CollectionPropertyRNA rna_Mesh_materials = {
	{nullptr, (PropertyRNA *)&rna_Mesh_texspace_size,
	-1, "materials", 128, 1, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_Mesh_materials_override_apply,
	0, PROP_RAW_UNSET, &RNA_IDMaterials},
	Mesh_materials_begin, Mesh_materials_next, Mesh_materials_end, Mesh_materials_get, Mesh_materials_length, Mesh_materials_lookup_int, Mesh_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

static float rna_Mesh_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Mesh_transform_matrix = {
	{(PropertyRNA *)&rna_Mesh_transform_shape_keys, nullptr,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_MATRIX | (int)PROP_UNIT_NONE), nullptr, 2, {4, 4, 0}, 16,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Mesh_transform_matrix_default
};

BoolPropertyRNA rna_Mesh_transform_shape_keys = {
	{nullptr, (PropertyRNA *)&rna_Mesh_transform_matrix,
	-1, "shape_keys", 3, 0, 0, 0, 0, "",
	"Transform Shape Keys",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Mesh_transform_func = {
	{(FunctionRNA *)&rna_Mesh_flip_normals_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_transform_matrix, (PropertyRNA *)&rna_Mesh_transform_shape_keys}},
	"transform", 0, "Transform mesh vertices by a matrix (Warning: inverts normals if matrix is negative)",
	Mesh_transform_call,
	nullptr
};

FunctionRNA rna_Mesh_flip_normals_func = {
	{(FunctionRNA *)&rna_Mesh_set_sharp_from_angle_func, (FunctionRNA *)&rna_Mesh_transform_func,
	nullptr,
	{nullptr, nullptr}},
	"flip_normals", 0, "Invert winding of all polygons (clears tessellation, does not handle custom normals)",
	Mesh_flip_normals_call,
	nullptr
};

FloatPropertyRNA rna_Mesh_set_sharp_from_angle_angle = {
	{nullptr, nullptr,
	-1, "angle", 3, 0, 0, 0, 0, "Angle",
	"Angle between faces beyond which edges are marked sharp",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 1.0f, 3, 3.1415927410f, nullptr
};

FunctionRNA rna_Mesh_set_sharp_from_angle_func = {
	{(FunctionRNA *)&rna_Mesh_split_faces_func, (FunctionRNA *)&rna_Mesh_flip_normals_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_set_sharp_from_angle_angle, (PropertyRNA *)&rna_Mesh_set_sharp_from_angle_angle}},
	"set_sharp_from_angle", 0, "Reset and fill the \"sharp_edge\" attribute based on the angle of faces neighboring manifold edges",
	Mesh_set_sharp_from_angle_call,
	nullptr
};

FunctionRNA rna_Mesh_split_faces_func = {
	{(FunctionRNA *)&rna_Mesh_calc_tangents_func, (FunctionRNA *)&rna_Mesh_set_sharp_from_angle_func,
	nullptr,
	{nullptr, nullptr}},
	"split_faces", 0, "Split faces based on the edge angle",
	Mesh_split_faces_call,
	nullptr
};

StringPropertyRNA rna_Mesh_calc_tangents_uvmap = {
	{nullptr, nullptr,
	-1, "uvmap", 262145, 0, 0, 0, 0, "",
	"Name of the UV map to use for tangent space computation",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

FunctionRNA rna_Mesh_calc_tangents_func = {
	{(FunctionRNA *)&rna_Mesh_free_tangents_func, (FunctionRNA *)&rna_Mesh_split_faces_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_calc_tangents_uvmap, (PropertyRNA *)&rna_Mesh_calc_tangents_uvmap}},
	"calc_tangents", 16, "Compute tangents and bitangent signs, to be used together with the split normals to get a complete tangent space for normal mapping (split normals are also computed if not yet present)",
	Mesh_calc_tangents_call,
	nullptr
};

FunctionRNA rna_Mesh_free_tangents_func = {
	{(FunctionRNA *)&rna_Mesh_calc_loop_triangles_func, (FunctionRNA *)&rna_Mesh_calc_tangents_func,
	nullptr,
	{nullptr, nullptr}},
	"free_tangents", 0, "Free tangents",
	Mesh_free_tangents_call,
	nullptr
};

FunctionRNA rna_Mesh_calc_loop_triangles_func = {
	{(FunctionRNA *)&rna_Mesh_calc_smooth_groups_func, (FunctionRNA *)&rna_Mesh_free_tangents_func,
	nullptr,
	{nullptr, nullptr}},
	"calc_loop_triangles", 0, "Calculate loop triangle tessellation (supports editmode too)",
	Mesh_calc_loop_triangles_call,
	nullptr
};

BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags = {
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_poly_groups, nullptr,
	-1, "use_bitflags", 3, 0, 0, 0, 0, "",
	"Produce bitflags groups instead of simple numeric values",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static int rna_Mesh_calc_smooth_groups_poly_groups_default[1] = {
	0
};

IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups = {
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_groups, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_use_bitflags,
	-1, "poly_groups", 131075, 0, 2, 0, 0, "",
	"Smooth Groups",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_Mesh_calc_smooth_groups_poly_groups_default
};

IntPropertyRNA rna_Mesh_calc_smooth_groups_groups = {
	{nullptr, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_poly_groups,
	-1, "groups", 3, 0, 2, 0, 0, "groups",
	"Total number of groups",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Mesh_calc_smooth_groups_func = {
	{(FunctionRNA *)&rna_Mesh_normals_split_custom_set_func, (FunctionRNA *)&rna_Mesh_calc_loop_triangles_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_use_bitflags, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_groups}},
	"calc_smooth_groups", 0, "Calculate smooth groups from sharp edges",
	Mesh_calc_smooth_groups_call,
	nullptr
};

static float rna_Mesh_normals_split_custom_set_normals_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_normals_split_custom_set_normals = {
	{nullptr, nullptr,
	-1, "normals", 131075, 0, 1, 0, 0, "",
	"Normals",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 2, {1, 3, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f, 3, 0.0f, rna_Mesh_normals_split_custom_set_normals_default
};

FunctionRNA rna_Mesh_normals_split_custom_set_func = {
	{(FunctionRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_func, (FunctionRNA *)&rna_Mesh_calc_smooth_groups_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_normals_split_custom_set_normals, (PropertyRNA *)&rna_Mesh_normals_split_custom_set_normals}},
	"normals_split_custom_set", 16, "Define custom split normals of this mesh (use zero-vectors to keep auto ones)",
	Mesh_normals_split_custom_set_call,
	nullptr
};

static float rna_Mesh_normals_split_custom_set_from_vertices_normals_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_normals_split_custom_set_from_vertices_normals = {
	{nullptr, nullptr,
	-1, "normals", 131075, 0, 1, 0, 0, "",
	"Normals",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 2, {1, 3, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f, 3, 0.0f, rna_Mesh_normals_split_custom_set_from_vertices_normals_default
};

FunctionRNA rna_Mesh_normals_split_custom_set_from_vertices_func = {
	{(FunctionRNA *)&rna_Mesh_update_func, (FunctionRNA *)&rna_Mesh_normals_split_custom_set_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_normals, (PropertyRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_normals}},
	"normals_split_custom_set_from_vertices", 16, "Define custom split normals of this mesh, from vertices\' normals (use zero-vectors to keep auto ones)",
	Mesh_normals_split_custom_set_from_vertices_call,
	nullptr
};

BoolPropertyRNA rna_Mesh_update_calc_edges = {
	{(PropertyRNA *)&rna_Mesh_update_calc_edges_loose, nullptr,
	-1, "calc_edges", 3, 0, 0, 0, 0, "Calculate Edges",
	"Force recalculation of edges",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_update_calc_edges_loose = {
	{nullptr, (PropertyRNA *)&rna_Mesh_update_calc_edges,
	-1, "calc_edges_loose", 3, 0, 0, 0, 0, "Calculate Loose Edges",
	"Calculate the loose state of each edge",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Mesh_update_func = {
	{(FunctionRNA *)&rna_Mesh_update_gpu_tag_func, (FunctionRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_update_calc_edges, (PropertyRNA *)&rna_Mesh_update_calc_edges_loose}},
	"update", 8, "update",
	Mesh_update_call,
	nullptr
};

FunctionRNA rna_Mesh_update_gpu_tag_func = {
	{(FunctionRNA *)&rna_Mesh_unit_test_compare_func, (FunctionRNA *)&rna_Mesh_update_func,
	nullptr,
	{nullptr, nullptr}},
	"update_gpu_tag", 0, "update_gpu_tag",
	Mesh_update_gpu_tag_call,
	nullptr
};

PointerPropertyRNA rna_Mesh_unit_test_compare_mesh = {
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_threshold, nullptr,
	-1, "mesh", 8388736, 0, 0, 0, 0, "",
	"Mesh to compare to",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mesh
};

FloatPropertyRNA rna_Mesh_unit_test_compare_threshold = {
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_result, (PropertyRNA *)&rna_Mesh_unit_test_compare_mesh,
	-1, "threshold", 3, 0, 0, 0, 0, "Threshold",
	"Comparison tolerance threshold",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_FACTOR | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0000071526f, nullptr
};

StringPropertyRNA rna_Mesh_unit_test_compare_result = {
	{nullptr, (PropertyRNA *)&rna_Mesh_unit_test_compare_threshold,
	-1, "result", 262145, 0, 2, 0, 0, "Return value",
	"String description of result of comparison",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, "nothing"
};

FunctionRNA rna_Mesh_unit_test_compare_func = {
	{(FunctionRNA *)&rna_Mesh_clear_geometry_func, (FunctionRNA *)&rna_Mesh_update_gpu_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_mesh, (PropertyRNA *)&rna_Mesh_unit_test_compare_result}},
	"unit_test_compare", 0, "unit_test_compare",
	Mesh_unit_test_compare_call,
	(PropertyRNA *)&rna_Mesh_unit_test_compare_result
};

FunctionRNA rna_Mesh_clear_geometry_func = {
	{(FunctionRNA *)&rna_Mesh_validate_func, (FunctionRNA *)&rna_Mesh_unit_test_compare_func,
	nullptr,
	{nullptr, nullptr}},
	"clear_geometry", 0, "Remove all geometry from the mesh. Note that this does not free shape keys or materials",
	Mesh_clear_geometry_call,
	nullptr
};

BoolPropertyRNA rna_Mesh_validate_verbose = {
	{(PropertyRNA *)&rna_Mesh_validate_clean_customdata, nullptr,
	-1, "verbose", 3, 0, 0, 0, 0, "Verbose",
	"Output information about the errors found",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Mesh_validate_clean_customdata = {
	{(PropertyRNA *)&rna_Mesh_validate_result, (PropertyRNA *)&rna_Mesh_validate_verbose,
	-1, "clean_customdata", 3, 0, 0, 0, 0, "Clean Custom Data",
	"Remove temp/cached custom-data layers, like e.g. normals...",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_Mesh_validate_result = {
	{nullptr, (PropertyRNA *)&rna_Mesh_validate_clean_customdata,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Mesh_validate_func = {
	{(FunctionRNA *)&rna_Mesh_validate_material_indices_func, (FunctionRNA *)&rna_Mesh_clear_geometry_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_validate_verbose, (PropertyRNA *)&rna_Mesh_validate_result}},
	"validate", 0, "Validate geometry, return True when the mesh has had invalid geometry corrected/removed",
	Mesh_validate_call,
	(PropertyRNA *)&rna_Mesh_validate_result
};

BoolPropertyRNA rna_Mesh_validate_material_indices_result = {
	{nullptr, nullptr,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Mesh_validate_material_indices_func = {
	{(FunctionRNA *)&rna_Mesh_count_selected_items_func, (FunctionRNA *)&rna_Mesh_validate_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_validate_material_indices_result, (PropertyRNA *)&rna_Mesh_validate_material_indices_result}},
	"validate_material_indices", 0, "Validate material indices of polygons, return True when the mesh has had invalid indices corrected (to default 0)",
	Mesh_validate_material_indices_call,
	(PropertyRNA *)&rna_Mesh_validate_material_indices_result
};

static int rna_Mesh_count_selected_items_result_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Mesh_count_selected_items_result = {
	{nullptr, nullptr,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	nullptr,
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, rna_Mesh_count_selected_items_result_default
};

FunctionRNA rna_Mesh_count_selected_items_func = {
	{nullptr, (FunctionRNA *)&rna_Mesh_validate_material_indices_func,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_count_selected_items_result, (PropertyRNA *)&rna_Mesh_count_selected_items_result}},
	"count_selected_items", 0, "Return the number of selected items (vert, edge, face)",
	Mesh_count_selected_items_call,
	nullptr
};

StructRNA RNA_Mesh = {
	{(ContainerRNA *)&RNA_MeshVertices, (ContainerRNA *)&RNA_MaterialLineArt,
	nullptr,
	{(PropertyRNA *)&rna_Mesh_vertices, (PropertyRNA *)&rna_Mesh_materials}},
	"Mesh", nullptr, nullptr, 519, nullptr, "Mesh",
	"Mesh data-block defining geometric surfaces",
	"*", 160,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Mesh_transform_func, (FunctionRNA *)&rna_Mesh_count_selected_items_func}
};

/* Mesh Vertices */
CollectionPropertyRNA rna_MeshVertices_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertices_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertices_rna_properties_begin, MeshVertices_rna_properties_next, MeshVertices_rna_properties_end, MeshVertices_rna_properties_get, nullptr, nullptr, MeshVertices_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshVertices_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MeshVertices_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertices_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MeshVertices_add_count = {
	{nullptr, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of vertices to add",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_MeshVertices_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MeshVertices_add_count, (PropertyRNA *)&rna_MeshVertices_add_count}},
	"add", 16, "add",
	MeshVertices_add_call,
	nullptr
};

StructRNA RNA_MeshVertices = {
	{(ContainerRNA *)&RNA_MeshEdges, (ContainerRNA *)&RNA_Mesh,
	nullptr,
	{(PropertyRNA *)&rna_MeshVertices_rna_properties, (PropertyRNA *)&rna_MeshVertices_rna_type}},
	"MeshVertices", nullptr, nullptr, 516, nullptr, "Mesh Vertices",
	"Collection of mesh vertices",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshVertices_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MeshVertices_add_func, (FunctionRNA *)&rna_MeshVertices_add_func}
};

/* Mesh Edges */
CollectionPropertyRNA rna_MeshEdges_rna_properties = {
	{(PropertyRNA *)&rna_MeshEdges_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdges_rna_properties_begin, MeshEdges_rna_properties_next, MeshEdges_rna_properties_end, MeshEdges_rna_properties_get, nullptr, nullptr, MeshEdges_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshEdges_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MeshEdges_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdges_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MeshEdges_add_count = {
	{nullptr, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of edges to add",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_MeshEdges_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MeshEdges_add_count, (PropertyRNA *)&rna_MeshEdges_add_count}},
	"add", 16, "add",
	MeshEdges_add_call,
	nullptr
};

StructRNA RNA_MeshEdges = {
	{(ContainerRNA *)&RNA_MeshLoops, (ContainerRNA *)&RNA_MeshVertices,
	nullptr,
	{(PropertyRNA *)&rna_MeshEdges_rna_properties, (PropertyRNA *)&rna_MeshEdges_rna_type}},
	"MeshEdges", nullptr, nullptr, 516, nullptr, "Mesh Edges",
	"Collection of mesh edges",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshEdges_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MeshEdges_add_func, (FunctionRNA *)&rna_MeshEdges_add_func}
};

/* Mesh Loops */
CollectionPropertyRNA rna_MeshLoops_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoops_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoops_rna_properties_begin, MeshLoops_rna_properties_next, MeshLoops_rna_properties_end, MeshLoops_rna_properties_get, nullptr, nullptr, MeshLoops_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshLoops_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MeshLoops_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoops_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MeshLoops_add_count = {
	{nullptr, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of loops to add",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_MeshLoops_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoops_add_count, (PropertyRNA *)&rna_MeshLoops_add_count}},
	"add", 16, "add",
	MeshLoops_add_call,
	nullptr
};

StructRNA RNA_MeshLoops = {
	{(ContainerRNA *)&RNA_MeshPolygons, (ContainerRNA *)&RNA_MeshEdges,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoops_rna_properties, (PropertyRNA *)&rna_MeshLoops_rna_type}},
	"MeshLoops", nullptr, nullptr, 516, nullptr, "Mesh Loops",
	"Collection of mesh loops",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshLoops_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MeshLoops_add_func, (FunctionRNA *)&rna_MeshLoops_add_func}
};

/* Mesh Polygons */
CollectionPropertyRNA rna_MeshPolygons_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygons_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygons_rna_properties_begin, MeshPolygons_rna_properties_next, MeshPolygons_rna_properties_end, MeshPolygons_rna_properties_get, nullptr, nullptr, MeshPolygons_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygons_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygons_active, (PropertyRNA *)&rna_MeshPolygons_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygons_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MeshPolygons_active = {
	{nullptr, (PropertyRNA *)&rna_MeshPolygons_rna_type,
	-1, "active", 3, 0, 0, 4, 0, "Active Polygon",
	"The active face for this mesh",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, act_face), (RawPropertyType)0, nullptr},
	MeshPolygons_active_get, MeshPolygons_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MeshPolygons_add_count = {
	{nullptr, nullptr,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of polygons to add",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_MeshPolygons_add_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_MeshPolygons_add_count, (PropertyRNA *)&rna_MeshPolygons_add_count}},
	"add", 16, "add",
	MeshPolygons_add_call,
	nullptr
};

StructRNA RNA_MeshPolygons = {
	{(ContainerRNA *)&RNA_MeshNormalValue, (ContainerRNA *)&RNA_MeshLoops,
	nullptr,
	{(PropertyRNA *)&rna_MeshPolygons_rna_properties, (PropertyRNA *)&rna_MeshPolygons_active}},
	"MeshPolygons", nullptr, nullptr, 516, nullptr, "Mesh Polygons",
	"Collection of mesh polygons",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshPolygons_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MeshPolygons_add_func, (FunctionRNA *)&rna_MeshPolygons_add_func}
};

/* Mesh Normal Vector */
CollectionPropertyRNA rna_MeshNormalValue_rna_properties = {
	{(PropertyRNA *)&rna_MeshNormalValue_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshNormalValue_rna_properties_begin, MeshNormalValue_rna_properties_next, MeshNormalValue_rna_properties_end, MeshNormalValue_rna_properties_get, nullptr, nullptr, MeshNormalValue_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshNormalValue_rna_type = {
	{(PropertyRNA *)&rna_MeshNormalValue_vector, (PropertyRNA *)&rna_MeshNormalValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshNormalValue_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MeshNormalValue_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshNormalValue_vector = {
	{nullptr, (PropertyRNA *)&rna_MeshNormalValue_rna_type,
	-1, "vector", 2, 0, 0, 4, 0, "Vector",
	"3D vector",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(vec3f, x), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MeshNormalValue_vector_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshNormalValue_vector_default
};

StructRNA RNA_MeshNormalValue = {
	{(ContainerRNA *)&RNA_MeshLoopTriangles, (ContainerRNA *)&RNA_MeshPolygons,
	nullptr,
	{(PropertyRNA *)&rna_MeshNormalValue_rna_properties, (PropertyRNA *)&rna_MeshNormalValue_vector}},
	"MeshNormalValue", nullptr, nullptr, 516, nullptr, "Mesh Normal Vector",
	"Vector in a mesh normal array",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshNormalValue_rna_properties,
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

/* Mesh Loop Triangles */
CollectionPropertyRNA rna_MeshLoopTriangles_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopTriangles_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangles_rna_properties_begin, MeshLoopTriangles_rna_properties_next, MeshLoopTriangles_rna_properties_end, MeshLoopTriangles_rna_properties_get, nullptr, nullptr, MeshLoopTriangles_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopTriangles_rna_type = {
	{nullptr, (PropertyRNA *)&rna_MeshLoopTriangles_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangles_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_MeshLoopTriangles = {
	{(ContainerRNA *)&RNA_ReadOnlyInteger, (ContainerRNA *)&RNA_MeshNormalValue,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoopTriangles_rna_properties, (PropertyRNA *)&rna_MeshLoopTriangles_rna_type}},
	"MeshLoopTriangles", nullptr, nullptr, 516, nullptr, "Mesh Loop Triangles",
	"Tessellation of mesh polygons into triangles",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshLoopTriangles_rna_properties,
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

/* Read-only Integer */
CollectionPropertyRNA rna_ReadOnlyInteger_rna_properties = {
	{(PropertyRNA *)&rna_ReadOnlyInteger_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ReadOnlyInteger_rna_properties_begin, ReadOnlyInteger_rna_properties_next, ReadOnlyInteger_rna_properties_end, ReadOnlyInteger_rna_properties_get, nullptr, nullptr, ReadOnlyInteger_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ReadOnlyInteger_rna_type = {
	{(PropertyRNA *)&rna_ReadOnlyInteger_value, (PropertyRNA *)&rna_ReadOnlyInteger_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ReadOnlyInteger_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_ReadOnlyInteger_value = {
	{nullptr, (PropertyRNA *)&rna_ReadOnlyInteger_rna_type,
	-1, "value", 2, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MIntProperty, i), (RawPropertyType)0, nullptr},
	ReadOnlyInteger_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_ReadOnlyInteger = {
	{(ContainerRNA *)&RNA_UVLoopLayers, (ContainerRNA *)&RNA_MeshLoopTriangles,
	nullptr,
	{(PropertyRNA *)&rna_ReadOnlyInteger_rna_properties, (PropertyRNA *)&rna_ReadOnlyInteger_value}},
	"ReadOnlyInteger", nullptr, nullptr, 516, nullptr, "Read-only Integer",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ReadOnlyInteger_rna_properties,
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

/* UV Map Layers */
CollectionPropertyRNA rna_UVLoopLayers_rna_properties = {
	{(PropertyRNA *)&rna_UVLoopLayers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UVLoopLayers_rna_properties_begin, UVLoopLayers_rna_properties_next, UVLoopLayers_rna_properties_end, UVLoopLayers_rna_properties_get, nullptr, nullptr, UVLoopLayers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UVLoopLayers_rna_type = {
	{(PropertyRNA *)&rna_UVLoopLayers_active, (PropertyRNA *)&rna_UVLoopLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UVLoopLayers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_UVLoopLayers_active = {
	{(PropertyRNA *)&rna_UVLoopLayers_active_index, (PropertyRNA *)&rna_UVLoopLayers_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active UV Map Layer",
	"Active UV Map layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UVLoopLayers_active_get, UVLoopLayers_active_set, nullptr, nullptr,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_UVLoopLayers_active_index = {
	{nullptr, (PropertyRNA *)&rna_UVLoopLayers_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active UV Map Index",
	"Active UV map index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UVLoopLayers_active_index_get, UVLoopLayers_active_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_UVLoopLayers_new_name = {
	{(PropertyRNA *)&rna_UVLoopLayers_new_do_init, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"UV map name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "UVMap"
};

BoolPropertyRNA rna_UVLoopLayers_new_do_init = {
	{(PropertyRNA *)&rna_UVLoopLayers_new_layer, (PropertyRNA *)&rna_UVLoopLayers_new_name,
	-1, "do_init", 3, 0, 0, 0, 0, "",
	"Whether new layer\'s data should be initialized by copying current active one, or if none is active, with a default UVmap",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_UVLoopLayers_new_layer = {
	{nullptr, (PropertyRNA *)&rna_UVLoopLayers_new_do_init,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MeshUVLoopLayer
};

FunctionRNA rna_UVLoopLayers_new_func = {
	{(FunctionRNA *)&rna_UVLoopLayers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_UVLoopLayers_new_name, (PropertyRNA *)&rna_UVLoopLayers_new_layer}},
	"new", 16, "Add a UV map layer to Mesh",
	UVLoopLayers_new_call,
	(PropertyRNA *)&rna_UVLoopLayers_new_layer
};

PointerPropertyRNA rna_UVLoopLayers_remove_layer = {
	{nullptr, nullptr,
	-1, "layer", 8650752, 0, 1, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MeshUVLoopLayer
};

FunctionRNA rna_UVLoopLayers_remove_func = {
	{nullptr, (FunctionRNA *)&rna_UVLoopLayers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_UVLoopLayers_remove_layer, (PropertyRNA *)&rna_UVLoopLayers_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	UVLoopLayers_remove_call,
	nullptr
};

StructRNA RNA_UVLoopLayers = {
	{(ContainerRNA *)&RNA_LoopColors, (ContainerRNA *)&RNA_ReadOnlyInteger,
	nullptr,
	{(PropertyRNA *)&rna_UVLoopLayers_rna_properties, (PropertyRNA *)&rna_UVLoopLayers_active_index}},
	"UVLoopLayers", nullptr, nullptr, 516, nullptr, "UV Map Layers",
	"Collection of UV map layers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UVLoopLayers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_UVLoopLayers_new_func, (FunctionRNA *)&rna_UVLoopLayers_remove_func}
};

/* Loop Colors */
CollectionPropertyRNA rna_LoopColors_rna_properties = {
	{(PropertyRNA *)&rna_LoopColors_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LoopColors_rna_properties_begin, LoopColors_rna_properties_next, LoopColors_rna_properties_end, LoopColors_rna_properties_get, nullptr, nullptr, LoopColors_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_LoopColors_rna_type = {
	{(PropertyRNA *)&rna_LoopColors_active, (PropertyRNA *)&rna_LoopColors_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LoopColors_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_LoopColors_active = {
	{(PropertyRNA *)&rna_LoopColors_active_index, (PropertyRNA *)&rna_LoopColors_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Vertex Color Layer",
	"Active vertex color layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_active_color, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LoopColors_active_get, LoopColors_active_set, nullptr, nullptr,&RNA_MeshLoopColorLayer
};

IntPropertyRNA rna_LoopColors_active_index = {
	{nullptr, (PropertyRNA *)&rna_LoopColors_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Vertex Color Index",
	"Active vertex color index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_active_color, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LoopColors_active_index_get, LoopColors_active_index_set, nullptr, nullptr, rna_Mesh_vertex_color_index_range, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StringPropertyRNA rna_LoopColors_new_name = {
	{(PropertyRNA *)&rna_LoopColors_new_do_init, nullptr,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Vertex color name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Col"
};

BoolPropertyRNA rna_LoopColors_new_do_init = {
	{(PropertyRNA *)&rna_LoopColors_new_layer, (PropertyRNA *)&rna_LoopColors_new_name,
	-1, "do_init", 3, 0, 0, 0, 0, "",
	"Whether new layer\'s data should be initialized by copying current active one",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_LoopColors_new_layer = {
	{nullptr, (PropertyRNA *)&rna_LoopColors_new_do_init,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MeshLoopColorLayer
};

FunctionRNA rna_LoopColors_new_func = {
	{(FunctionRNA *)&rna_LoopColors_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_LoopColors_new_name, (PropertyRNA *)&rna_LoopColors_new_layer}},
	"new", 16, "Add a vertex color layer to Mesh",
	LoopColors_new_call,
	(PropertyRNA *)&rna_LoopColors_new_layer
};

PointerPropertyRNA rna_LoopColors_remove_layer = {
	{nullptr, nullptr,
	-1, "layer", 262144, 0, 1, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MeshLoopColorLayer
};

FunctionRNA rna_LoopColors_remove_func = {
	{nullptr, (FunctionRNA *)&rna_LoopColors_new_func,
	nullptr,
	{(PropertyRNA *)&rna_LoopColors_remove_layer, (PropertyRNA *)&rna_LoopColors_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	LoopColors_remove_call,
	nullptr
};

StructRNA RNA_LoopColors = {
	{(ContainerRNA *)&RNA_MeshSkinVertexLayer, (ContainerRNA *)&RNA_UVLoopLayers,
	nullptr,
	{(PropertyRNA *)&rna_LoopColors_rna_properties, (PropertyRNA *)&rna_LoopColors_active_index}},
	"LoopColors", nullptr, nullptr, 516, nullptr, "Loop Colors",
	"Collection of vertex colors",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_LoopColors_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_LoopColors_new_func, (FunctionRNA *)&rna_LoopColors_remove_func}
};

/* Mesh Skin Vertex Layer */
CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertexLayer_rna_properties_begin, MeshSkinVertexLayer_rna_properties_next, MeshSkinVertexLayer_rna_properties_end, MeshSkinVertexLayer_rna_properties_get, nullptr, nullptr, MeshSkinVertexLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_name, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertexLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_MeshSkinVertexLayer_name = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_data, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of skin layer",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertexLayer_name_get, MeshSkinVertexLayer_name_length, MeshSkinVertexLayer_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

CollectionPropertyRNA rna_MeshSkinVertexLayer_data = {
	{nullptr, (PropertyRNA *)&rna_MeshSkinVertexLayer_name,
	-1, "data", 0, 4, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertexLayer_data_begin, MeshSkinVertexLayer_data_next, MeshSkinVertexLayer_data_end, MeshSkinVertexLayer_data_get, MeshSkinVertexLayer_data_length, MeshSkinVertexLayer_data_lookup_int, nullptr, nullptr, &RNA_MeshSkinVertex
};

StructRNA RNA_MeshSkinVertexLayer = {
	{(ContainerRNA *)&RNA_MeshSkinVertex, (ContainerRNA *)&RNA_LoopColors,
	nullptr,
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties, (PropertyRNA *)&rna_MeshSkinVertexLayer_data}},
	"MeshSkinVertexLayer", nullptr, nullptr, 516, nullptr, "Mesh Skin Vertex Layer",
	"Per-vertex skin data for use with the Skin modifier",
	"*", 17,
	(PropertyRNA *)&rna_MeshSkinVertexLayer_name, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshSkinVertexLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Skin Vertex */
CollectionPropertyRNA rna_MeshSkinVertex_rna_properties = {
	{(PropertyRNA *)&rna_MeshSkinVertex_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertex_rna_properties_begin, MeshSkinVertex_rna_properties_next, MeshSkinVertex_rna_properties_end, MeshSkinVertex_rna_properties_get, nullptr, nullptr, MeshSkinVertex_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshSkinVertex_rna_type = {
	{(PropertyRNA *)&rna_MeshSkinVertex_radius, (PropertyRNA *)&rna_MeshSkinVertex_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertex_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MeshSkinVertex_radius_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshSkinVertex_radius = {
	{(PropertyRNA *)&rna_MeshSkinVertex_use_root, (PropertyRNA *)&rna_MeshSkinVertex_rna_type,
	-1, "radius", 3, 0, 0, 4, 0, "Radius",
	"Radius of the skin",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MVertSkin, radius), (RawPropertyType)5, nullptr},
	nullptr, nullptr, MeshSkinVertex_radius_get, MeshSkinVertex_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, rna_MeshSkinVertex_radius_default
};

BoolPropertyRNA rna_MeshSkinVertex_use_root = {
	{(PropertyRNA *)&rna_MeshSkinVertex_use_loose, (PropertyRNA *)&rna_MeshSkinVertex_radius,
	-1, "use_root", 3, 0, 0, 0, 0, "Root",
	"Vertex is a root for rotation calculations and armature generation, setting this flag does not clear other roots in the same mesh island",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertex_use_root_get, MeshSkinVertex_use_root_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshSkinVertex_use_loose = {
	{nullptr, (PropertyRNA *)&rna_MeshSkinVertex_use_root,
	-1, "use_loose", 3, 0, 0, 0, 0, "Loose",
	"If vertex has multiple adjacent edges, it is hulled to them directly",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshSkinVertex_use_loose_get, MeshSkinVertex_use_loose_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MeshSkinVertex = {
	{(ContainerRNA *)&RNA_MeshPaintMaskLayer, (ContainerRNA *)&RNA_MeshSkinVertexLayer,
	nullptr,
	{(PropertyRNA *)&rna_MeshSkinVertex_rna_properties, (PropertyRNA *)&rna_MeshSkinVertex_use_loose}},
	"MeshSkinVertex", nullptr, nullptr, 516, nullptr, "Skin Vertex",
	"Per-vertex skin data for use with the Skin modifier",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshSkinVertex_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshSkinVertex_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Paint Mask Layer */
CollectionPropertyRNA rna_MeshPaintMaskLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshPaintMaskLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPaintMaskLayer_rna_properties_begin, MeshPaintMaskLayer_rna_properties_next, MeshPaintMaskLayer_rna_properties_end, MeshPaintMaskLayer_rna_properties_get, nullptr, nullptr, MeshPaintMaskLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshPaintMaskLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshPaintMaskLayer_data, (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPaintMaskLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_MeshPaintMaskLayer_data = {
	{nullptr, (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_type,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPaintMaskLayer_data_begin, MeshPaintMaskLayer_data_next, MeshPaintMaskLayer_data_end, MeshPaintMaskLayer_data_get, MeshPaintMaskLayer_data_length, MeshPaintMaskLayer_data_lookup_int, nullptr, nullptr, &RNA_MeshPaintMaskProperty
};

StructRNA RNA_MeshPaintMaskLayer = {
	{(ContainerRNA *)&RNA_MeshPaintMaskProperty, (ContainerRNA *)&RNA_MeshSkinVertex,
	nullptr,
	{(PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties, (PropertyRNA *)&rna_MeshPaintMaskLayer_data}},
	"MeshPaintMaskLayer", nullptr, nullptr, 516, nullptr, "Mesh Paint Mask Layer",
	"Per-vertex paint mask data",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshPaintMaskLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Paint Mask Property */
CollectionPropertyRNA rna_MeshPaintMaskProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshPaintMaskProperty_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPaintMaskProperty_rna_properties_begin, MeshPaintMaskProperty_rna_properties_next, MeshPaintMaskProperty_rna_properties_end, MeshPaintMaskProperty_rna_properties_get, nullptr, nullptr, MeshPaintMaskProperty_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshPaintMaskProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshPaintMaskProperty_value, (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPaintMaskProperty_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_MeshPaintMaskProperty_value = {
	{nullptr, (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MFloatProperty, f), (RawPropertyType)5, nullptr},
	MeshPaintMaskProperty_value_get, MeshPaintMaskProperty_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_MeshPaintMaskProperty = {
	{(ContainerRNA *)&RNA_MeshVertex, (ContainerRNA *)&RNA_MeshPaintMaskLayer,
	nullptr,
	{(PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties, (PropertyRNA *)&rna_MeshPaintMaskProperty_value}},
	"MeshPaintMaskProperty", nullptr, nullptr, 516, nullptr, "Mesh Paint Mask Property",
	"Floating-point paint mask value",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshPaintMask_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Vertex */
CollectionPropertyRNA rna_MeshVertex_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertex_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertex_rna_properties_begin, MeshVertex_rna_properties_next, MeshVertex_rna_properties_end, MeshVertex_rna_properties_get, nullptr, nullptr, MeshVertex_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshVertex_rna_type = {
	{(PropertyRNA *)&rna_MeshVertex_co, (PropertyRNA *)&rna_MeshVertex_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertex_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MeshVertex_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_co = {
	{(PropertyRNA *)&rna_MeshVertex_normal, (PropertyRNA *)&rna_MeshVertex_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Position",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	rna_Mesh_update_positions_tag, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshVertex_co_get, MeshVertex_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_co_default
};

static float rna_MeshVertex_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_normal = {
	{(PropertyRNA *)&rna_MeshVertex_select, (PropertyRNA *)&rna_MeshVertex_co,
	-1, "normal", 2, 0, 0, 0, 0, "Normal",
	"Vertex Normal",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshVertex_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_normal_default
};

BoolPropertyRNA rna_MeshVertex_select = {
	{(PropertyRNA *)&rna_MeshVertex_hide, (PropertyRNA *)&rna_MeshVertex_normal,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertex_select_get, MeshVertex_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshVertex_hide = {
	{(PropertyRNA *)&rna_MeshVertex_groups, (PropertyRNA *)&rna_MeshVertex_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertex_hide_get, MeshVertex_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MeshVertex_groups = {
	{(PropertyRNA *)&rna_MeshVertex_index, (PropertyRNA *)&rna_MeshVertex_hide,
	-1, "groups", 0, 0, 0, 8, 0, "Groups",
	"Weights for the vertex groups this vertex is member of",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertex_groups_begin, MeshVertex_groups_next, MeshVertex_groups_end, MeshVertex_groups_get, nullptr, nullptr, nullptr, nullptr, &RNA_VertexGroupElement
};

IntPropertyRNA rna_MeshVertex_index = {
	{(PropertyRNA *)&rna_MeshVertex_undeformed_co, (PropertyRNA *)&rna_MeshVertex_groups,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this vertex",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshVertex_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static float rna_MeshVertex_undeformed_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_undeformed_co = {
	{nullptr, (PropertyRNA *)&rna_MeshVertex_index,
	-1, "undeformed_co", 2, 0, 0, 0, 0, "Undeformed Location",
	"For meshes with modifiers applied, the coordinate of the vertex with no deforming modifiers applied, as used for generated texture coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_TRANSLATION | (int)PROP_UNIT_LENGTH), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshVertex_undeformed_co_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_undeformed_co_default
};

StructRNA RNA_MeshVertex = {
	{(ContainerRNA *)&RNA_VertexGroupElement, (ContainerRNA *)&RNA_MeshPaintMaskProperty,
	nullptr,
	{(PropertyRNA *)&rna_MeshVertex_rna_properties, (PropertyRNA *)&rna_MeshVertex_undeformed_co}},
	"MeshVertex", nullptr, nullptr, 516, nullptr, "Mesh Vertex",
	"Vertex in a Mesh data-block",
	"*", 546,
	nullptr, (PropertyRNA *)&rna_MeshVertex_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshVertex_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Vertex Group Element */
CollectionPropertyRNA rna_VertexGroupElement_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroupElement_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroupElement_rna_properties_begin, VertexGroupElement_rna_properties_next, VertexGroupElement_rna_properties_end, VertexGroupElement_rna_properties_get, nullptr, nullptr, VertexGroupElement_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_VertexGroupElement_rna_type = {
	{(PropertyRNA *)&rna_VertexGroupElement_group, (PropertyRNA *)&rna_VertexGroupElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	VertexGroupElement_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_VertexGroupElement_group = {
	{(PropertyRNA *)&rna_VertexGroupElement_weight, (PropertyRNA *)&rna_VertexGroupElement_rna_type,
	-1, "group", 2, 0, 0, 4, 0, "Group Index",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, def_nr), (RawPropertyType)0, nullptr},
	VertexGroupElement_group_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_VertexGroupElement_weight = {
	{nullptr, (PropertyRNA *)&rna_VertexGroupElement_group,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Vertex Weight",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_weight, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, weight), (RawPropertyType)5, nullptr},
	VertexGroupElement_weight_get, VertexGroupElement_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

StructRNA RNA_VertexGroupElement = {
	{(ContainerRNA *)&RNA_MeshEdge, (ContainerRNA *)&RNA_MeshVertex,
	nullptr,
	{(PropertyRNA *)&rna_VertexGroupElement_rna_properties, (PropertyRNA *)&rna_VertexGroupElement_weight}},
	"VertexGroupElement", nullptr, nullptr, 516, nullptr, "Vertex Group Element",
	"Weight value of a vertex in a vertex group",
	"*", 201,
	nullptr, (PropertyRNA *)&rna_VertexGroupElement_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_VertexGroupElement_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Edge */
CollectionPropertyRNA rna_MeshEdge_rna_properties = {
	{(PropertyRNA *)&rna_MeshEdge_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_rna_properties_begin, MeshEdge_rna_properties_next, MeshEdge_rna_properties_end, MeshEdge_rna_properties_get, nullptr, nullptr, MeshEdge_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshEdge_rna_type = {
	{(PropertyRNA *)&rna_MeshEdge_vertices, (PropertyRNA *)&rna_MeshEdge_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static int rna_MeshEdge_vertices_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MeshEdge_vertices = {
	{(PropertyRNA *)&rna_MeshEdge_select, (PropertyRNA *)&rna_MeshEdge_rna_type,
	-1, "vertices", 3, 0, 0, 4, 0, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(vec2i, x), (RawPropertyType)0, nullptr},
	nullptr, nullptr, MeshEdge_vertices_get, MeshEdge_vertices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshEdge_vertices_default
};

BoolPropertyRNA rna_MeshEdge_select = {
	{(PropertyRNA *)&rna_MeshEdge_hide, (PropertyRNA *)&rna_MeshEdge_vertices,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_select_get, MeshEdge_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshEdge_hide = {
	{(PropertyRNA *)&rna_MeshEdge_use_seam, (PropertyRNA *)&rna_MeshEdge_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_hide_get, MeshEdge_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshEdge_use_seam = {
	{(PropertyRNA *)&rna_MeshEdge_use_edge_sharp, (PropertyRNA *)&rna_MeshEdge_hide,
	-1, "use_seam", 3, 0, 0, 0, 0, "Seam",
	"Seam edge for UV unwrapping",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_use_seam_get, MeshEdge_use_seam_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshEdge_use_edge_sharp = {
	{(PropertyRNA *)&rna_MeshEdge_is_loose, (PropertyRNA *)&rna_MeshEdge_use_seam,
	-1, "use_edge_sharp", 3, 0, 0, 0, 0, "Sharp",
	"Sharp edge for shading",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_use_edge_sharp_get, MeshEdge_use_edge_sharp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshEdge_is_loose = {
	{(PropertyRNA *)&rna_MeshEdge_use_freestyle_mark, (PropertyRNA *)&rna_MeshEdge_use_edge_sharp,
	-1, "is_loose", 2, 0, 0, 0, 0, "Loose",
	"Edge is not connected to any faces",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_is_loose_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshEdge_use_freestyle_mark = {
	{(PropertyRNA *)&rna_MeshEdge_index, (PropertyRNA *)&rna_MeshEdge_is_loose,
	-1, "use_freestyle_mark", 3, 0, 0, 0, 0, "Freestyle Edge Mark",
	"Edge mark for Freestyle line rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_use_freestyle_mark_get, MeshEdge_use_freestyle_mark_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

IntPropertyRNA rna_MeshEdge_index = {
	{nullptr, (PropertyRNA *)&rna_MeshEdge_use_freestyle_mark,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this edge",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshEdge_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

StructRNA RNA_MeshEdge = {
	{(ContainerRNA *)&RNA_MeshLoopTriangle, (ContainerRNA *)&RNA_VertexGroupElement,
	nullptr,
	{(PropertyRNA *)&rna_MeshEdge_rna_properties, (PropertyRNA *)&rna_MeshEdge_index}},
	"MeshEdge", nullptr, nullptr, 516, nullptr, "Mesh Edge",
	"Edge in a Mesh data-block",
	"*", 547,
	nullptr, (PropertyRNA *)&rna_MeshEdge_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshEdge_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Loop Triangle */
CollectionPropertyRNA rna_MeshLoopTriangle_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_rna_properties_begin, MeshLoopTriangle_rna_properties_next, MeshLoopTriangle_rna_properties_end, MeshLoopTriangle_rna_properties_get, nullptr, nullptr, MeshLoopTriangle_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopTriangle_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_vertices, (PropertyRNA *)&rna_MeshLoopTriangle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static int rna_MeshLoopTriangle_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshLoopTriangle_vertices = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_loops, (PropertyRNA *)&rna_MeshLoopTriangle_rna_type,
	-1, "vertices", 2, 0, 0, 0, 0, "Vertices",
	"Indices of triangle vertices",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoopTriangle_vertices_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshLoopTriangle_vertices_default
};

static int rna_MeshLoopTriangle_loops_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshLoopTriangle_loops = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_polygon_index, (PropertyRNA *)&rna_MeshLoopTriangle_vertices,
	-1, "loops", 2, 0, 0, 4, 0, "Loops",
	"Indices of mesh loops that make up the triangle",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MLoopTri, tri), (RawPropertyType)0, nullptr},
	nullptr, nullptr, MeshLoopTriangle_loops_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshLoopTriangle_loops_default
};

IntPropertyRNA rna_MeshLoopTriangle_polygon_index = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_normal, (PropertyRNA *)&rna_MeshLoopTriangle_loops,
	-1, "polygon_index", 2, 0, 0, 0, 0, "Polygon",
	"Index of mesh face that the triangle is a part of",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_polygon_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static float rna_MeshLoopTriangle_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoopTriangle_normal = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_split_normals, (PropertyRNA *)&rna_MeshLoopTriangle_polygon_index,
	-1, "normal", 2, 0, 0, 0, 0, "Triangle Normal",
	"Local space unit length normal vector for this triangle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoopTriangle_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopTriangle_normal_default
};

static float rna_MeshLoopTriangle_split_normals_default[9] = {
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

FloatPropertyRNA rna_MeshLoopTriangle_split_normals = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_area, (PropertyRNA *)&rna_MeshLoopTriangle_normal,
	-1, "split_normals", 2, 0, 0, 0, 0, "Split Normals",
	"Local space unit length split normal vectors of the face corners of this triangle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 2, {3, 3, 0}, 9,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoopTriangle_split_normals_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopTriangle_split_normals_default
};

FloatPropertyRNA rna_MeshLoopTriangle_area = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_index, (PropertyRNA *)&rna_MeshLoopTriangle_split_normals,
	-1, "area", 2, 0, 0, 0, 0, "Triangle Area",
	"Area of this triangle",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_area_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_MeshLoopTriangle_index = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_material_index, (PropertyRNA *)&rna_MeshLoopTriangle_area,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this loop triangle",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MeshLoopTriangle_material_index = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_use_smooth, (PropertyRNA *)&rna_MeshLoopTriangle_index,
	-1, "material_index", 2, 0, 0, 0, 0, "Material Index",
	"Material slot index of this triangle",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_material_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_MeshLoopTriangle_use_smooth = {
	{nullptr, (PropertyRNA *)&rna_MeshLoopTriangle_material_index,
	-1, "use_smooth", 2, 0, 0, 0, 0, "Smooth",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopTriangle_use_smooth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MeshLoopTriangle = {
	{(ContainerRNA *)&RNA_MeshLoop, (ContainerRNA *)&RNA_MeshEdge,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoopTriangle_rna_properties, (PropertyRNA *)&rna_MeshLoopTriangle_use_smooth}},
	"MeshLoopTriangle", nullptr, nullptr, 516, nullptr, "Mesh Loop Triangle",
	"Tessellated triangle in a Mesh data-block",
	"*", 548,
	nullptr, (PropertyRNA *)&rna_MeshLoopTriangle_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshLoopTriangle_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Loop */
CollectionPropertyRNA rna_MeshLoop_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoop_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoop_rna_properties_begin, MeshLoop_rna_properties_next, MeshLoop_rna_properties_end, MeshLoop_rna_properties_get, nullptr, nullptr, MeshLoop_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshLoop_rna_type = {
	{(PropertyRNA *)&rna_MeshLoop_vertex_index, (PropertyRNA *)&rna_MeshLoop_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoop_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

IntPropertyRNA rna_MeshLoop_vertex_index = {
	{(PropertyRNA *)&rna_MeshLoop_edge_index, (PropertyRNA *)&rna_MeshLoop_rna_type,
	-1, "vertex_index", 3, 0, 0, 0, 0, "Vertex",
	"Vertex index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoop_vertex_index_get, MeshLoop_vertex_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MeshLoop_edge_index = {
	{(PropertyRNA *)&rna_MeshLoop_index, (PropertyRNA *)&rna_MeshLoop_vertex_index,
	-1, "edge_index", 3, 0, 0, 0, 0, "Edge",
	"Edge index",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoop_edge_index_get, MeshLoop_edge_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MeshLoop_index = {
	{(PropertyRNA *)&rna_MeshLoop_normal, (PropertyRNA *)&rna_MeshLoop_edge_index,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this loop",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoop_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

static float rna_MeshLoop_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_normal = {
	{(PropertyRNA *)&rna_MeshLoop_tangent, (PropertyRNA *)&rna_MeshLoop_index,
	-1, "normal", 2, 0, 0, 0, 0, "Normal",
	"The normal direction of the face corner, taking into account sharp faces, sharp edges, and custom normal data",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoop_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_normal_default
};

static float rna_MeshLoop_tangent_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_tangent = {
	{(PropertyRNA *)&rna_MeshLoop_bitangent_sign, (PropertyRNA *)&rna_MeshLoop_normal,
	-1, "tangent", 2, 0, 0, 0, 0, "Tangent",
	"Local space unit length tangent vector of this vertex for this face (must be computed beforehand using calc_tangents)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoop_tangent_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_tangent_default
};

FloatPropertyRNA rna_MeshLoop_bitangent_sign = {
	{(PropertyRNA *)&rna_MeshLoop_bitangent, (PropertyRNA *)&rna_MeshLoop_tangent,
	-1, "bitangent_sign", 2, 0, 0, 0, 0, "Bitangent Sign",
	"Sign of the bitangent vector of this vertex for this face (must be computed beforehand using calc_tangents, bitangent = bitangent_sign * cross(normal, tangent))",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoop_bitangent_sign_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, nullptr
};

static float rna_MeshLoop_bitangent_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_bitangent = {
	{nullptr, (PropertyRNA *)&rna_MeshLoop_bitangent_sign,
	-1, "bitangent", 2, 0, 0, 0, 0, "Bitangent",
	"Bitangent vector of this vertex for this face (must be computed beforehand using calc_tangents, use it only if really needed, slower access than bitangent_sign)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoop_bitangent_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_bitangent_default
};

StructRNA RNA_MeshLoop = {
	{(ContainerRNA *)&RNA_MeshPolygon, (ContainerRNA *)&RNA_MeshLoopTriangle,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoop_rna_properties, (PropertyRNA *)&rna_MeshLoop_bitangent}},
	"MeshLoop", nullptr, nullptr, 516, nullptr, "Mesh Loop",
	"Loop in a Mesh data-block",
	"*", 547,
	nullptr, (PropertyRNA *)&rna_MeshLoop_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshLoop_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Polygon */
CollectionPropertyRNA rna_MeshPolygon_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygon_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_rna_properties_begin, MeshPolygon_rna_properties_next, MeshPolygon_rna_properties_end, MeshPolygon_rna_properties_get, nullptr, nullptr, MeshPolygon_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygon_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygon_vertices, (PropertyRNA *)&rna_MeshPolygon_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static int rna_MeshPolygon_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshPolygon_vertices = {
	{(PropertyRNA *)&rna_MeshPolygon_loop_start, (PropertyRNA *)&rna_MeshPolygon_rna_type,
	-1, "vertices", 131075, 0, 0, 0, 0, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), rna_MeshPoly_vertices_get_length, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshPolygon_vertices_get, MeshPolygon_vertices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshPolygon_vertices_default
};

IntPropertyRNA rna_MeshPolygon_loop_start = {
	{(PropertyRNA *)&rna_MeshPolygon_loop_total, (PropertyRNA *)&rna_MeshPolygon_vertices,
	-1, "loop_start", 3, 0, 0, 4, 0, "Loop Start",
	"Index of the first loop of this face",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MIntProperty, i), (RawPropertyType)0, nullptr},
	MeshPolygon_loop_start_get, MeshPolygon_loop_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MeshPolygon_loop_total = {
	{(PropertyRNA *)&rna_MeshPolygon_material_index, (PropertyRNA *)&rna_MeshPolygon_loop_start,
	-1, "loop_total", 2, 0, 0, 0, 0, "Loop Total",
	"Number of loops used by this face",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_loop_total_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_MeshPolygon_material_index = {
	{(PropertyRNA *)&rna_MeshPolygon_select, (PropertyRNA *)&rna_MeshPolygon_loop_total,
	-1, "material_index", 3, 0, 0, 0, 0, "Material Index",
	"Material slot index of this face",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_material_index_get, MeshPolygon_material_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_MeshPolygon_select = {
	{(PropertyRNA *)&rna_MeshPolygon_hide, (PropertyRNA *)&rna_MeshPolygon_material_index,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_select_get, MeshPolygon_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshPolygon_hide = {
	{(PropertyRNA *)&rna_MeshPolygon_use_smooth, (PropertyRNA *)&rna_MeshPolygon_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_hide_get, MeshPolygon_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshPolygon_use_smooth = {
	{(PropertyRNA *)&rna_MeshPolygon_use_freestyle_mark, (PropertyRNA *)&rna_MeshPolygon_hide,
	-1, "use_smooth", 3, 0, 0, 0, 0, "Smooth",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_use_smooth_get, MeshPolygon_use_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshPolygon_use_freestyle_mark = {
	{(PropertyRNA *)&rna_MeshPolygon_normal, (PropertyRNA *)&rna_MeshPolygon_use_smooth,
	-1, "use_freestyle_mark", 3, 0, 0, 0, 0, "Freestyle Face Mark",
	"Face mark for Freestyle line rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_use_freestyle_mark_get, MeshPolygon_use_freestyle_mark_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static float rna_MeshPolygon_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshPolygon_normal = {
	{(PropertyRNA *)&rna_MeshPolygon_center, (PropertyRNA *)&rna_MeshPolygon_use_freestyle_mark,
	-1, "normal", 2, 0, 0, 0, 0, "Polygon Normal",
	"Local space unit length normal vector for this face",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_DIRECTION | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshPolygon_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshPolygon_normal_default
};

static float rna_MeshPolygon_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshPolygon_center = {
	{(PropertyRNA *)&rna_MeshPolygon_area, (PropertyRNA *)&rna_MeshPolygon_normal,
	-1, "center", 2, 0, 0, 0, 0, "Polygon Center",
	"Center of this face",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshPolygon_center_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshPolygon_center_default
};

FloatPropertyRNA rna_MeshPolygon_area = {
	{(PropertyRNA *)&rna_MeshPolygon_index, (PropertyRNA *)&rna_MeshPolygon_center,
	-1, "area", 2, 0, 0, 0, 0, "Polygon Area",
	"Read only area of this face",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_area_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_MeshPolygon_index = {
	{nullptr, (PropertyRNA *)&rna_MeshPolygon_area,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this face",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshPolygon_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_MeshPolygon_flip_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"flip", 2048, "Invert winding of this face (flip its normal)",
	MeshPolygon_flip_call,
	nullptr
};

StructRNA RNA_MeshPolygon = {
	{(ContainerRNA *)&RNA_MeshUVLoopLayer, (ContainerRNA *)&RNA_MeshLoop,
	nullptr,
	{(PropertyRNA *)&rna_MeshPolygon_rna_properties, (PropertyRNA *)&rna_MeshPolygon_index}},
	"MeshPolygon", nullptr, nullptr, 516, nullptr, "Mesh Polygon",
	"Polygon in a Mesh data-block",
	"*", 548,
	nullptr, (PropertyRNA *)&rna_MeshPolygon_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshPolygon_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_MeshPolygon_flip_func, (FunctionRNA *)&rna_MeshPolygon_flip_func}
};

/* MeshUVLoopLayer */
CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_rna_properties_begin, MeshUVLoopLayer_rna_properties_next, MeshUVLoopLayer_rna_properties_end, MeshUVLoopLayer_rna_properties_get, nullptr, nullptr, MeshUVLoopLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshUVLoopLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_data, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_MeshUVLoopLayer_data = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_name, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_type,
	-1, "data", 0, 4, 0, 8, 0, "MeshUVLoop (Deprecated)",
	"Deprecated, use \'uv\', \'vertex_select\', \'edge_select\' or \'pin\' properties instead",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_data_begin, MeshUVLoopLayer_data_next, MeshUVLoopLayer_data_end, MeshUVLoopLayer_data_get, MeshUVLoopLayer_data_length, MeshUVLoopLayer_data_lookup_int, nullptr, nullptr, &RNA_MeshUVLoop
};

StringPropertyRNA rna_MeshUVLoopLayer_name = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_active, (PropertyRNA *)&rna_MeshUVLoopLayer_data,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of UV map",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_name_get, MeshUVLoopLayer_name_length, MeshUVLoopLayer_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_MeshUVLoopLayer_active = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_active_render, (PropertyRNA *)&rna_MeshUVLoopLayer_name,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"Set the map as active for display and editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_active_get, MeshUVLoopLayer_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshUVLoopLayer_active_render = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_active_clone, (PropertyRNA *)&rna_MeshUVLoopLayer_active,
	-1, "active_render", 3, 0, 0, 0, 0, "Active Render",
	"Set the UV map as active for rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_active_render_get, MeshUVLoopLayer_active_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshUVLoopLayer_active_clone = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_uv, (PropertyRNA *)&rna_MeshUVLoopLayer_active_render,
	-1, "active_clone", 3, 0, 0, 0, 0, "Active Clone",
	"Set the map as active for cloning",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_active_clone_get, MeshUVLoopLayer_active_clone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MeshUVLoopLayer_uv = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_vertex_selection, (PropertyRNA *)&rna_MeshUVLoopLayer_active_clone,
	-1, "uv", 0, 4, 0, 8, 0, "UV",
	"UV coordinates on face corners",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_uv_begin, MeshUVLoopLayer_uv_next, MeshUVLoopLayer_uv_end, MeshUVLoopLayer_uv_get, MeshUVLoopLayer_uv_length, MeshUVLoopLayer_uv_lookup_int, nullptr, nullptr, &RNA_Float2AttributeValue
};

CollectionPropertyRNA rna_MeshUVLoopLayer_vertex_selection = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_edge_selection, (PropertyRNA *)&rna_MeshUVLoopLayer_uv,
	-1, "vertex_selection", 0, 4, 0, 8, 0, "UV Vertex Selection",
	"Selection state of the face corner the UV editor",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_vertex_selection_begin, MeshUVLoopLayer_vertex_selection_next, MeshUVLoopLayer_vertex_selection_end, MeshUVLoopLayer_vertex_selection_get, MeshUVLoopLayer_vertex_selection_length, MeshUVLoopLayer_vertex_selection_lookup_int, nullptr, nullptr, &RNA_BoolAttributeValue
};

CollectionPropertyRNA rna_MeshUVLoopLayer_edge_selection = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_pin, (PropertyRNA *)&rna_MeshUVLoopLayer_vertex_selection,
	-1, "edge_selection", 0, 4, 0, 8, 0, "UV Edge Selection",
	"Selection state of the edge in the UV editor",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_edge_selection_begin, MeshUVLoopLayer_edge_selection_next, MeshUVLoopLayer_edge_selection_end, MeshUVLoopLayer_edge_selection_get, MeshUVLoopLayer_edge_selection_length, MeshUVLoopLayer_edge_selection_lookup_int, nullptr, nullptr, &RNA_BoolAttributeValue
};

CollectionPropertyRNA rna_MeshUVLoopLayer_pin = {
	{nullptr, (PropertyRNA *)&rna_MeshUVLoopLayer_edge_selection,
	-1, "pin", 0, 4, 0, 8, 0, "UV Pin",
	"UV pinned state in the UV editor",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoopLayer_pin_begin, MeshUVLoopLayer_pin_next, MeshUVLoopLayer_pin_end, MeshUVLoopLayer_pin_get, MeshUVLoopLayer_pin_length, MeshUVLoopLayer_pin_lookup_int, nullptr, nullptr, &RNA_BoolAttributeValue
};

StructRNA RNA_MeshUVLoopLayer = {
	{(ContainerRNA *)&RNA_MeshUVLoop, (ContainerRNA *)&RNA_MeshPolygon,
	nullptr,
	{(PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties, (PropertyRNA *)&rna_MeshUVLoopLayer_pin}},
	"MeshUVLoopLayer", nullptr, nullptr, 516, nullptr, "MeshUVLoopLayer",
	"",
	"*", 17,
	(PropertyRNA *)&rna_MeshUVLoopLayer_name, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshUVLoopLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh UV Layer */
CollectionPropertyRNA rna_MeshUVLoop_rna_properties = {
	{(PropertyRNA *)&rna_MeshUVLoop_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoop_rna_properties_begin, MeshUVLoop_rna_properties_next, MeshUVLoop_rna_properties_end, MeshUVLoop_rna_properties_get, nullptr, nullptr, MeshUVLoop_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshUVLoop_rna_type = {
	{(PropertyRNA *)&rna_MeshUVLoop_uv, (PropertyRNA *)&rna_MeshUVLoop_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoop_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MeshUVLoop_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshUVLoop_uv = {
	{(PropertyRNA *)&rna_MeshUVLoop_pin_uv, (PropertyRNA *)&rna_MeshUVLoop_rna_type,
	-1, "uv", 3, 0, 0, 0, 0, "uv",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshUVLoop_uv_get, MeshUVLoop_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshUVLoop_uv_default
};

BoolPropertyRNA rna_MeshUVLoop_pin_uv = {
	{(PropertyRNA *)&rna_MeshUVLoop_select, (PropertyRNA *)&rna_MeshUVLoop_uv,
	-1, "pin_uv", 3, 0, 0, 0, 0, "UV Pinned",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoop_pin_uv_get, MeshUVLoop_pin_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshUVLoop_select = {
	{(PropertyRNA *)&rna_MeshUVLoop_select_edge, (PropertyRNA *)&rna_MeshUVLoop_pin_uv,
	-1, "select", 3, 0, 0, 0, 0, "UV Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoop_select_get, MeshUVLoop_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshUVLoop_select_edge = {
	{nullptr, (PropertyRNA *)&rna_MeshUVLoop_select,
	-1, "select_edge", 3, 0, 0, 0, 0, "UV Edge Select",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshUVLoop_select_edge_get, MeshUVLoop_select_edge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StructRNA RNA_MeshUVLoop = {
	{(ContainerRNA *)&RNA_MeshLoopColorLayer, (ContainerRNA *)&RNA_MeshUVLoopLayer,
	nullptr,
	{(PropertyRNA *)&rna_MeshUVLoop_rna_properties, (PropertyRNA *)&rna_MeshUVLoop_select_edge}},
	"MeshUVLoop", nullptr, nullptr, 516, nullptr, "Mesh UV Layer",
	"(Deprecated) Layer of UV coordinates in a Mesh data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshUVLoop_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshUVLoop_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Vertex Color Layer */
CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColorLayer_rna_properties_begin, MeshLoopColorLayer_rna_properties_next, MeshLoopColorLayer_rna_properties_end, MeshLoopColorLayer_rna_properties_get, nullptr, nullptr, MeshLoopColorLayer_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopColorLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_name, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColorLayer_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_MeshLoopColorLayer_name = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_active, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of Vertex color layer",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {68, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColorLayer_name_get, MeshLoopColorLayer_name_length, MeshLoopColorLayer_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

BoolPropertyRNA rna_MeshLoopColorLayer_active = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_active_render, (PropertyRNA *)&rna_MeshLoopColorLayer_name,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"Sets the layer as active for display and editing",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColorLayer_active_get, MeshLoopColorLayer_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_MeshLoopColorLayer_active_render = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_data, (PropertyRNA *)&rna_MeshLoopColorLayer_active,
	-1, "active_render", 3, 0, 0, 0, 0, "Active Render",
	"Sets the layer as active for rendering",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColorLayer_active_render_get, MeshLoopColorLayer_active_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_MeshLoopColorLayer_data = {
	{nullptr, (PropertyRNA *)&rna_MeshLoopColorLayer_active_render,
	-1, "data", 0, 4, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColorLayer_data_begin, MeshLoopColorLayer_data_next, MeshLoopColorLayer_data_end, MeshLoopColorLayer_data_get, MeshLoopColorLayer_data_length, MeshLoopColorLayer_data_lookup_int, nullptr, nullptr, &RNA_MeshLoopColor
};

StructRNA RNA_MeshLoopColorLayer = {
	{(ContainerRNA *)&RNA_MeshLoopColor, (ContainerRNA *)&RNA_MeshUVLoop,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties, (PropertyRNA *)&rna_MeshLoopColorLayer_data}},
	"MeshLoopColorLayer", nullptr, nullptr, 516, nullptr, "Mesh Vertex Color Layer",
	"Layer of vertex colors in a Mesh data-block",
	"*", 202,
	(PropertyRNA *)&rna_MeshLoopColorLayer_name, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshLoopColorLayer_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

/* Mesh Vertex Color */
CollectionPropertyRNA rna_MeshLoopColor_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopColor_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColor_rna_properties_begin, MeshLoopColor_rna_properties_next, MeshLoopColor_rna_properties_end, MeshLoopColor_rna_properties_get, nullptr, nullptr, MeshLoopColor_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopColor_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopColor_color, (PropertyRNA *)&rna_MeshLoopColor_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	MeshLoopColor_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static float rna_MeshLoopColor_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoopColor_color = {
	{nullptr, (PropertyRNA *)&rna_MeshLoopColor_rna_type,
	-1, "color", 3, 0, 0, 0, 0, "Color",
	"Color in sRGB color space",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_COLOR | (int)PROP_UNIT_NONE), nullptr, 1, {4, 0, 0}, 4,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, MeshLoopColor_color_get, MeshLoopColor_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopColor_color_default
};

StructRNA RNA_MeshLoopColor = {
	{(ContainerRNA *)&RNA_MetaElement, (ContainerRNA *)&RNA_MeshLoopColorLayer,
	nullptr,
	{(PropertyRNA *)&rna_MeshLoopColor_rna_properties, (PropertyRNA *)&rna_MeshLoopColor_color}},
	"MeshLoopColor", nullptr, nullptr, 516, nullptr, "Mesh Vertex Color",
	"Vertex loop colors in a Mesh",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_MeshLoopColor_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	rna_MeshColor_path,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{nullptr, nullptr}
};

