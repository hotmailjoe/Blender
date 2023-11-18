
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

#include "rna_ID.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_UnknownType_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_UnknownType_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_AnyType_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AnyType_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_ID_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ID_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_ID_name;
RNA_EXTERN_C StringPropertyRNA rna_ID_name_full;
RNA_EXTERN_C BoolPropertyRNA rna_ID_is_evaluated;
RNA_EXTERN_C PointerPropertyRNA rna_ID_original;
RNA_EXTERN_C IntPropertyRNA rna_ID_users;
RNA_EXTERN_C BoolPropertyRNA rna_ID_use_fake_user;
RNA_EXTERN_C BoolPropertyRNA rna_ID_use_extra_user;
RNA_EXTERN_C BoolPropertyRNA rna_ID_is_embedded_data;
RNA_EXTERN_C BoolPropertyRNA rna_ID_is_missing;
RNA_EXTERN_C BoolPropertyRNA rna_ID_is_runtime_data;
RNA_EXTERN_C BoolPropertyRNA rna_ID_tag;
RNA_EXTERN_C BoolPropertyRNA rna_ID_is_library_indirect;
RNA_EXTERN_C PointerPropertyRNA rna_ID_library;
RNA_EXTERN_C PointerPropertyRNA rna_ID_library_weak_reference;
RNA_EXTERN_C PointerPropertyRNA rna_ID_asset_data;
RNA_EXTERN_C PointerPropertyRNA rna_ID_override_library;
RNA_EXTERN_C PointerPropertyRNA rna_ID_preview;

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



RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibrary_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibrary_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibrary_reference;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibrary_hierarchy_root;
RNA_EXTERN_C BoolPropertyRNA rna_IDOverrideLibrary_is_in_hierarchy;
RNA_EXTERN_C BoolPropertyRNA rna_IDOverrideLibrary_is_system_override;
RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibrary_properties;

extern FunctionRNA rna_IDOverrideLibrary_operations_update_func;
extern FunctionRNA rna_IDOverrideLibrary_reset_func;
extern BoolPropertyRNA rna_IDOverrideLibrary_reset_do_hierarchy;
extern BoolPropertyRNA rna_IDOverrideLibrary_reset_set_system_override;

extern FunctionRNA rna_IDOverrideLibrary_destroy_func;
extern BoolPropertyRNA rna_IDOverrideLibrary_destroy_do_hierarchy;

extern FunctionRNA rna_IDOverrideLibrary_resync_func;
extern BoolPropertyRNA rna_IDOverrideLibrary_resync_success;
extern PointerPropertyRNA rna_IDOverrideLibrary_resync_scene;
extern PointerPropertyRNA rna_IDOverrideLibrary_resync_view_layer;
extern PointerPropertyRNA rna_IDOverrideLibrary_resync_residual_storage;
extern BoolPropertyRNA rna_IDOverrideLibrary_resync_do_hierarchy_enforce;
extern BoolPropertyRNA rna_IDOverrideLibrary_resync_do_whole_hierarchy;



RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibraryProperties_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibraryProperties_rna_type;

extern FunctionRNA rna_IDOverrideLibraryProperties_add_func;
extern PointerPropertyRNA rna_IDOverrideLibraryProperties_add_property;
extern StringPropertyRNA rna_IDOverrideLibraryProperties_add_rna_path;

extern FunctionRNA rna_IDOverrideLibraryProperties_remove_func;
extern PointerPropertyRNA rna_IDOverrideLibraryProperties_remove_property;



RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibraryProperty_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibraryProperty_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_IDOverrideLibraryProperty_rna_path;
RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibraryProperty_operations;


RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_type;

extern FunctionRNA rna_IDOverrideLibraryPropertyOperations_add_func;
extern EnumPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_operation;
extern BoolPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_use_id;
extern StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name;
extern StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name;
extern PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id;
extern PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id;
extern IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index;
extern IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index;
extern PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_property;

extern FunctionRNA rna_IDOverrideLibraryPropertyOperations_remove_func;
extern PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_remove_operation;



RNA_EXTERN_C CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_operation;
RNA_EXTERN_C EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_flag;
RNA_EXTERN_C StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_name;
RNA_EXTERN_C StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_name;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_id;
RNA_EXTERN_C PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_id;
RNA_EXTERN_C IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_index;
RNA_EXTERN_C IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_index;


RNA_EXTERN_C CollectionPropertyRNA rna_ImagePreview_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_ImagePreview_rna_type;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePreview_is_image_custom;
RNA_EXTERN_C IntPropertyRNA rna_ImagePreview_image_size;
RNA_EXTERN_C IntPropertyRNA rna_ImagePreview_image_pixels;
RNA_EXTERN_C FloatPropertyRNA rna_ImagePreview_image_pixels_float;
RNA_EXTERN_C BoolPropertyRNA rna_ImagePreview_is_icon_custom;
RNA_EXTERN_C IntPropertyRNA rna_ImagePreview_icon_size;
RNA_EXTERN_C IntPropertyRNA rna_ImagePreview_icon_pixels;
RNA_EXTERN_C FloatPropertyRNA rna_ImagePreview_icon_pixels_float;
RNA_EXTERN_C IntPropertyRNA rna_ImagePreview_icon_id;

extern FunctionRNA rna_ImagePreview_reload_func;


RNA_EXTERN_C CollectionPropertyRNA rna_PropertyGroupItem_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PropertyGroupItem_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_PropertyGroupItem_string;
RNA_EXTERN_C IntPropertyRNA rna_PropertyGroupItem_int;
RNA_EXTERN_C IntPropertyRNA rna_PropertyGroupItem_int_array;
RNA_EXTERN_C FloatPropertyRNA rna_PropertyGroupItem_float;
RNA_EXTERN_C FloatPropertyRNA rna_PropertyGroupItem_float_array;
RNA_EXTERN_C FloatPropertyRNA rna_PropertyGroupItem_double;
RNA_EXTERN_C FloatPropertyRNA rna_PropertyGroupItem_double_array;
RNA_EXTERN_C BoolPropertyRNA rna_PropertyGroupItem_bool;
RNA_EXTERN_C BoolPropertyRNA rna_PropertyGroupItem_bool_array;
RNA_EXTERN_C PointerPropertyRNA rna_PropertyGroupItem_group;
RNA_EXTERN_C CollectionPropertyRNA rna_PropertyGroupItem_collection;
RNA_EXTERN_C CollectionPropertyRNA rna_PropertyGroupItem_idp_array;
RNA_EXTERN_C PointerPropertyRNA rna_PropertyGroupItem_id;


RNA_EXTERN_C CollectionPropertyRNA rna_PropertyGroup_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_PropertyGroup_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_PropertyGroup_name;


RNA_EXTERN_C CollectionPropertyRNA rna_IDMaterials_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDMaterials_rna_type;

extern FunctionRNA rna_IDMaterials_append_func;
extern PointerPropertyRNA rna_IDMaterials_append_material;

extern FunctionRNA rna_IDMaterials_pop_func;
extern IntPropertyRNA rna_IDMaterials_pop_index;
extern PointerPropertyRNA rna_IDMaterials_pop_material;

extern FunctionRNA rna_IDMaterials_clear_func;


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

RNA_EXTERN_C StringPropertyRNA rna_Library_filepath;
RNA_EXTERN_C PointerPropertyRNA rna_Library_parent;
RNA_EXTERN_C PointerPropertyRNA rna_Library_packed_file;
RNA_EXTERN_C IntPropertyRNA rna_Library_version;
RNA_EXTERN_C BoolPropertyRNA rna_Library_needs_liboverride_resync;

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


extern FunctionRNA rna_Library_reload_func;


RNA_EXTERN_C CollectionPropertyRNA rna_LibraryWeakReference_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_LibraryWeakReference_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_LibraryWeakReference_filepath;
RNA_EXTERN_C StringPropertyRNA rna_LibraryWeakReference_id_name;


RNA_EXTERN_C CollectionPropertyRNA rna_IDPropertyWrapPtr_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_IDPropertyWrapPtr_rna_type;

static PointerRNA UnknownType_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void UnknownType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UnknownType_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UnknownType_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UnknownType_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UnknownType_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void UnknownType_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int UnknownType_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA UnknownType_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA AnyType_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AnyType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnyType_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnyType_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AnyType_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnyType_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AnyType_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AnyType_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AnyType_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ID_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ID_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ID_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ID_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ID_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ID_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ID_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ID_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void ID_name_get(PointerRNA *ptr, char *value)
{
    rna_ID_name_get(ptr, value);
}

RNA_EXTERN_C int ID_name_length(PointerRNA *ptr)
{
    return rna_ID_name_length(ptr);
}

RNA_EXTERN_C void ID_name_set(PointerRNA *ptr, const char *value)
{
    rna_ID_name_set(ptr, value);
}

RNA_EXTERN_C void ID_name_full_get(PointerRNA *ptr, char *value)
{
    rna_ID_name_full_get(ptr, value);
}

RNA_EXTERN_C int ID_name_full_length(PointerRNA *ptr)
{
    return rna_ID_name_full_length(ptr);
}

RNA_EXTERN_C bool ID_is_evaluated_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ID_is_evaluated_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA ID_original_get(PointerRNA *ptr)
{
    return rna_ID_original_get(ptr);
}

RNA_EXTERN_C int ID_users_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (int)(data->us);
}

RNA_EXTERN_C bool ID_use_fake_user_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

RNA_EXTERN_C void ID_use_fake_user_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ID_fake_user_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool ID_use_extra_user_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & 16) != 0);
}

RNA_EXTERN_C void ID_use_extra_user_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ID_extra_user_set;
    fn(ptr, value);
}

RNA_EXTERN_C bool ID_is_embedded_data_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

RNA_EXTERN_C bool ID_is_missing_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & 8) != 0);
}

RNA_EXTERN_C bool ID_is_runtime_data_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ID_is_runtime_get;
    return fn(ptr);
}

RNA_EXTERN_C void ID_is_runtime_data_set(PointerRNA *ptr, bool value)
{
    ID *data = (ID *)(ptr->data);
    if (value) { data->tag |= 4; }
    else { data->tag &= ~4; }
}

RNA_EXTERN_C bool ID_tag_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & INT_MIN) != 0);
}

RNA_EXTERN_C void ID_tag_set(PointerRNA *ptr, bool value)
{
    ID *data = (ID *)(ptr->data);
    if (value) { data->tag |= INT_MIN; }
    else { data->tag &= ~INT_MIN; }
}

RNA_EXTERN_C bool ID_is_library_indirect_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & 2) != 0);
}

RNA_EXTERN_C PointerRNA ID_library_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Library, data->lib);
}

RNA_EXTERN_C PointerRNA ID_library_weak_reference_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_LibraryWeakReference, data->library_weak_reference);
}

RNA_EXTERN_C PointerRNA ID_asset_data_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AssetMetaData, data->asset_data);
}

RNA_EXTERN_C void ID_asset_data_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ID_asset_data_set(ptr, value, reports);
}

RNA_EXTERN_C PointerRNA ID_override_library_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_IDOverrideLibrary, data->override_library);
}

RNA_EXTERN_C PointerRNA ID_preview_get(PointerRNA *ptr)
{
    return rna_IDPreview_get(ptr);
}

static PointerRNA IDOverrideLibrary_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDOverrideLibrary_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibrary_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibrary_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibrary_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibrary_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibrary_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibrary_reference_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->reference);
}

RNA_EXTERN_C PointerRNA IDOverrideLibrary_hierarchy_root_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->hierarchy_root);
}

RNA_EXTERN_C bool IDOverrideLibrary_is_in_hierarchy_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void IDOverrideLibrary_is_in_hierarchy_set(PointerRNA *ptr, bool value)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C bool IDOverrideLibrary_is_system_override_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

RNA_EXTERN_C void IDOverrideLibrary_is_system_override_set(PointerRNA *ptr, bool value)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA IDOverrideLibrary_properties_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IDOverrideLibraryProperty, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void IDOverrideLibrary_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibrary_properties;

    rna_iterator_listbase_begin(iter, &data->properties, nullptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibrary_properties_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibrary_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibrary_properties_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    IDOverrideLibrary_properties_begin(&iter, ptr);

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
        if (found) { *r_ptr = IDOverrideLibrary_properties_get(&iter); }
    }

    IDOverrideLibrary_properties_end(&iter);

    return found;
}

static PointerRNA IDOverrideLibraryProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDOverrideLibraryProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperties_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibraryProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibraryProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA IDOverrideLibraryProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDOverrideLibraryProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibraryProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibraryProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void IDOverrideLibraryProperty_rna_path_get(PointerRNA *ptr, char *value)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);
    if (data->rna_path == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->rna_path);
}

RNA_EXTERN_C int IDOverrideLibraryProperty_rna_path_length(PointerRNA *ptr)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);
    return (data->rna_path == nullptr) ? 0 : strlen(data->rna_path);
}

static PointerRNA IDOverrideLibraryProperty_operations_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IDOverrideLibraryPropertyOperation, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void IDOverrideLibraryProperty_operations_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryProperty_operations;

    rna_iterator_listbase_begin(iter, &data->operations, nullptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_operations_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryProperty_operations_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_operations_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryProperty_operations_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibraryProperty_operations_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    IDOverrideLibraryProperty_operations_begin(&iter, ptr);

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
        if (found) { *r_ptr = IDOverrideLibraryProperty_operations_get(&iter); }
    }

    IDOverrideLibraryProperty_operations_end(&iter);

    return found;
}

static PointerRNA IDOverrideLibraryPropertyOperations_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperations_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperations_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperations_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperations_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibraryPropertyOperations_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA IDOverrideLibraryPropertyOperation_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperation_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperation_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperation_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperation_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibraryPropertyOperation_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_operation_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->operation);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_flag_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->flag);
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperation_subitem_reference_name_get(PointerRNA *ptr, char *value)
{
    rna_ID_override_library_property_operation_refname_get(ptr, value);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_subitem_reference_name_length(PointerRNA *ptr)
{
    return rna_ID_override_library_property_operation_refname_length(ptr);
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperation_subitem_local_name_get(PointerRNA *ptr, char *value)
{
    rna_ID_override_library_property_operation_locname_get(ptr, value);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_subitem_local_name_length(PointerRNA *ptr)
{
    return rna_ID_override_library_property_operation_locname_length(ptr);
}

RNA_EXTERN_C PointerRNA IDOverrideLibraryPropertyOperation_subitem_reference_id_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->subitem_reference_id);
}

RNA_EXTERN_C PointerRNA IDOverrideLibraryPropertyOperation_subitem_local_id_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->subitem_local_id);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_subitem_reference_index_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->subitem_reference_index);
}

RNA_EXTERN_C int IDOverrideLibraryPropertyOperation_subitem_local_index_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->subitem_local_index);
}

static PointerRNA ImagePreview_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void ImagePreview_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ImagePreview_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImagePreview_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ImagePreview_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ImagePreview_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void ImagePreview_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int ImagePreview_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA ImagePreview_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C bool ImagePreview_is_image_custom_get(PointerRNA *ptr)
{
    PreviewImage *data = (PreviewImage *)(ptr->data);
    return (((data->flag[ICON_SIZE_PREVIEW]) & 2) != 0);
}

RNA_EXTERN_C void ImagePreview_is_image_custom_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ImagePreview_is_image_custom_set;
    fn(ptr, value);
}

RNA_EXTERN_C void ImagePreview_image_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_image_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_image_size_set(PointerRNA *ptr, const int values[2])
{
    PropIntArraySetFunc fn = rna_ImagePreview_image_size_set;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_image_pixels_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_image_pixels_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_image_pixels_set(PointerRNA *ptr, const int values[])
{
    PropIntArraySetFunc fn = rna_ImagePreview_image_pixels_set;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_image_pixels_float_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_ImagePreview_image_pixels_float_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_image_pixels_float_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_ImagePreview_image_pixels_float_set;
    fn(ptr, values);
}

RNA_EXTERN_C bool ImagePreview_is_icon_custom_get(PointerRNA *ptr)
{
    PreviewImage *data = (PreviewImage *)(ptr->data);
    return (((data->flag[ICON_SIZE_ICON]) & 2) != 0);
}

RNA_EXTERN_C void ImagePreview_is_icon_custom_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ImagePreview_is_icon_custom_set;
    fn(ptr, value);
}

RNA_EXTERN_C void ImagePreview_icon_size_get(PointerRNA *ptr, int values[2])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_icon_size_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_icon_size_set(PointerRNA *ptr, const int values[2])
{
    PropIntArraySetFunc fn = rna_ImagePreview_icon_size_set;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_icon_pixels_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_ImagePreview_icon_pixels_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_icon_pixels_set(PointerRNA *ptr, const int values[])
{
    PropIntArraySetFunc fn = rna_ImagePreview_icon_pixels_set;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_icon_pixels_float_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_ImagePreview_icon_pixels_float_get;
    fn(ptr, values);
}

RNA_EXTERN_C void ImagePreview_icon_pixels_float_set(PointerRNA *ptr, const float values[])
{
    PropFloatArraySetFunc fn = rna_ImagePreview_icon_pixels_float_set;
    fn(ptr, values);
}

RNA_EXTERN_C int ImagePreview_icon_id_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ImagePreview_icon_id_get;
    return fn(ptr);
}

static PointerRNA PropertyGroupItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PropertyGroupItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PropertyGroupItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PropertyGroupItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PropertyGroupItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PropertyGroupItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PropertyGroupItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int PropertyGroupItem_idp_array_length(PointerRNA *ptr)
{
    return rna_IDPArray_length(ptr);
}

static PointerRNA PropertyGroupItem_idp_array_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PropertyGroup, rna_iterator_array_get(iter));
}

RNA_EXTERN_C void PropertyGroupItem_idp_array_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PropertyGroupItem_idp_array;

    rna_IDPArray_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_idp_array_get(iter);
    }
}

RNA_EXTERN_C void PropertyGroupItem_idp_array_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_idp_array_get(iter);
    }
}

RNA_EXTERN_C void PropertyGroupItem_idp_array_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA PropertyGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void PropertyGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PropertyGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PropertyGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroup_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void PropertyGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int PropertyGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA PropertyGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA IDMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDMaterials_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDMaterials_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDMaterials_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDMaterials_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDMaterials_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void Library_filepath_get(PointerRNA *ptr, char *value)
{
    Library *data = (Library *)(ptr->data);
    BLI_assert(strlen(data->filepath) < 1024);
    strcpy(value, data->filepath);
}

RNA_EXTERN_C int Library_filepath_length(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return strlen(data->filepath);
}

RNA_EXTERN_C void Library_filepath_set(PointerRNA *ptr, const char *value)
{
    rna_Library_filepath_set(ptr, value);
}

RNA_EXTERN_C PointerRNA Library_parent_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Library, data->parent);
}

RNA_EXTERN_C PointerRNA Library_packed_file_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

RNA_EXTERN_C void Library_version_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Library_version_get;
    fn(ptr, values);
}

RNA_EXTERN_C bool Library_needs_liboverride_resync_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return (((data->tag) & 1) != 0);
}

RNA_EXTERN_C void Library_needs_liboverride_resync_set(PointerRNA *ptr, bool value)
{
    Library *data = (Library *)(ptr->data);
    if (value) { data->tag |= 1; }
    else { data->tag &= ~1; }
}

static PointerRNA LibraryWeakReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void LibraryWeakReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LibraryWeakReference_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LibraryWeakReference_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LibraryWeakReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LibraryWeakReference_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void LibraryWeakReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int LibraryWeakReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA LibraryWeakReference_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void LibraryWeakReference_filepath_get(PointerRNA *ptr, char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_assert(strlen(data->library_filepath) < 1024);
    strcpy(value, data->library_filepath);
}

RNA_EXTERN_C int LibraryWeakReference_filepath_length(PointerRNA *ptr)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    return strlen(data->library_filepath);
}

RNA_EXTERN_C void LibraryWeakReference_id_name_get(PointerRNA *ptr, char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_assert(strlen(data->library_id_name) < 66);
    strcpy(value, data->library_id_name);
}

RNA_EXTERN_C int LibraryWeakReference_id_name_length(PointerRNA *ptr)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    return strlen(data->library_id_name);
}

static PointerRNA IDPropertyWrapPtr_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void IDPropertyWrapPtr_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDPropertyWrapPtr_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDPropertyWrapPtr_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDPropertyWrapPtr_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void IDPropertyWrapPtr_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int IDPropertyWrapPtr_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA IDPropertyWrapPtr_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}



RNA_EXTERN_C struct ID *ID_evaluated_get_func(struct ID *_self, struct Depsgraph *depsgraph)
{
	return rna_ID_evaluated_get(_self, depsgraph);
}

static void ID_evaluated_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct Depsgraph *depsgraph;
	struct ID *id;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	id = rna_ID_evaluated_get(_self, depsgraph);
	*((struct ID **)_retdata) = id;
}

RNA_EXTERN_C struct ID *ID_copy_func(struct ID *_self, Main *bmain)
{
	return rna_ID_copy(_self, bmain);
}

static void ID_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	id = rna_ID_copy(_self, CTX_data_main(C));
	*((struct ID **)_retdata) = id;
}

RNA_EXTERN_C void ID_asset_mark_func(struct ID *_self)
{
	rna_ID_asset_mark(_self);
}

static void ID_asset_mark_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_asset_mark(_self);
}

RNA_EXTERN_C void ID_asset_clear_func(struct ID *_self)
{
	rna_ID_asset_clear(_self);
}

static void ID_asset_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_asset_clear(_self);
}

RNA_EXTERN_C void ID_asset_generate_preview_func(struct ID *_self, bContext *C)
{
	rna_ID_asset_generate_preview(_self, C);
}

static void ID_asset_generate_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_asset_generate_preview(_self, C);
}

RNA_EXTERN_C struct ID *ID_override_create_func(struct ID *_self, Main *bmain, bool remap_local_usages)
{
	return rna_ID_override_create(_self, bmain, remap_local_usages);
}

static void ID_override_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	bool remap_local_usages;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	remap_local_usages = *((bool *)_data);
	
	id = rna_ID_override_create(_self, CTX_data_main(C), remap_local_usages);
	*((struct ID **)_retdata) = id;
}

RNA_EXTERN_C struct ID *ID_override_hierarchy_create_func(struct ID *_self, Main *bmain, struct Scene *scene, struct ViewLayer *view_layer, struct ID *reference, bool do_fully_editable)
{
	return rna_ID_override_hierarchy_create(_self, bmain, scene, view_layer, reference, do_fully_editable);
}

static void ID_override_hierarchy_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	struct Scene *scene;
	struct ViewLayer *view_layer;
	struct ID *reference;
	bool do_fully_editable;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	scene = *((struct Scene **)_data);
	_data += 8;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	reference = *((struct ID **)_data);
	_data += 8;
	do_fully_editable = *((bool *)_data);
	
	id = rna_ID_override_hierarchy_create(_self, CTX_data_main(C), scene, view_layer, reference, do_fully_editable);
	*((struct ID **)_retdata) = id;
}

RNA_EXTERN_C void ID_override_template_create_func(struct ID *_self, ReportList *reports)
{
	rna_ID_override_template_create(_self, reports);
}

static void ID_override_template_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_override_template_create(_self, reports);
}

RNA_EXTERN_C void ID_user_clear_func(struct ID *_self)
{
	rna_ID_user_clear(_self);
}

static void ID_user_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_user_clear(_self);
}

RNA_EXTERN_C void ID_user_remap_func(struct ID *_self, Main *bmain, struct ID *new_id)
{
	rna_ID_user_remap(_self, bmain, new_id);
}

static void ID_user_remap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *new_id;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	new_id = *((struct ID **)_data);
	
	rna_ID_user_remap(_self, CTX_data_main(C), new_id);
}

RNA_EXTERN_C struct ID *ID_make_local_func(struct ID *_self, Main *bmain, bool clear_proxy)
{
	return rna_ID_make_local(_self, bmain, clear_proxy);
}

static void ID_make_local_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	bool clear_proxy;
	struct ID *id;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	clear_proxy = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	id = rna_ID_make_local(_self, CTX_data_main(C), clear_proxy);
	*((struct ID **)_retdata) = id;
}

RNA_EXTERN_C int ID_user_of_id_func(struct ID *_self, struct ID *id)
{
	return BKE_library_ID_use_ID(_self, id);
}

static void ID_user_of_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	int count;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((struct ID **)_data);
	_data += 8;
	_retdata = _data;
	
	count = BKE_library_ID_use_ID(_self, id);
	*((int *)_retdata) = count;
}

RNA_EXTERN_C struct AnimData *ID_animation_data_create_func(struct ID *_self, Main *bmain)
{
	return rna_ID_animation_data_create(_self, bmain);
}

static void ID_animation_data_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct AnimData *anim_data;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	anim_data = rna_ID_animation_data_create(_self, CTX_data_main(C));
	*((struct AnimData **)_retdata) = anim_data;
}

RNA_EXTERN_C void ID_animation_data_clear_func(struct ID *_self, Main *bmain)
{
	rna_ID_animation_data_free(_self, bmain);
}

static void ID_animation_data_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_animation_data_free(_self, CTX_data_main(C));
}

RNA_EXTERN_C void ID_update_tag_func(struct ID *_self, Main *bmain, ReportList *reports, int refresh)
{
	rna_ID_update_tag(_self, bmain, reports, refresh);
}

static void ID_update_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	int refresh;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	refresh = *((int *)_data);
	
	rna_ID_update_tag(_self, CTX_data_main(C), reports, refresh);
}

RNA_EXTERN_C struct PreviewImage *ID_preview_ensure_func(struct ID *_self)
{
	return BKE_previewimg_id_ensure(_self);
}

static void ID_preview_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct PreviewImage *preview_image;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	preview_image = BKE_previewimg_id_ensure(_self);
	*((struct PreviewImage **)_retdata) = preview_image;
}

/* Repeated prototypes to detect errors */

struct ID *rna_ID_evaluated_get(struct ID *_self, struct Depsgraph *depsgraph);
struct ID *rna_ID_copy(struct ID *_self, Main *bmain);
void rna_ID_asset_mark(struct ID *_self);
void rna_ID_asset_clear(struct ID *_self);
void rna_ID_asset_generate_preview(struct ID *_self, bContext *C);
struct ID *rna_ID_override_create(struct ID *_self, Main *bmain, bool remap_local_usages);
struct ID *rna_ID_override_hierarchy_create(struct ID *_self, Main *bmain, struct Scene *scene, struct ViewLayer *view_layer, struct ID *reference, bool do_fully_editable);
void rna_ID_override_template_create(struct ID *_self, ReportList *reports);
void rna_ID_user_clear(struct ID *_self);
void rna_ID_user_remap(struct ID *_self, Main *bmain, struct ID *new_id);
struct ID *rna_ID_make_local(struct ID *_self, Main *bmain, bool clear_proxy);
int BKE_library_ID_use_ID(struct ID *_self, struct ID *id);
struct AnimData *rna_ID_animation_data_create(struct ID *_self, Main *bmain);
void rna_ID_animation_data_free(struct ID *_self, Main *bmain);
void rna_ID_update_tag(struct ID *_self, Main *bmain, ReportList *reports, int refresh);
struct PreviewImage *BKE_previewimg_id_ensure(struct ID *_self);

RNA_EXTERN_C void IDOverrideLibrary_operations_update_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports)
{
	rna_ID_override_library_operations_update(_selfid, _self, bmain, reports);
}

static void IDOverrideLibrary_operations_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	
	rna_ID_override_library_operations_update(_selfid, _self, CTX_data_main(C), reports);
}

RNA_EXTERN_C void IDOverrideLibrary_reset_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy, bool set_system_override)
{
	rna_ID_override_library_reset(_selfid, _self, bmain, reports, do_hierarchy, set_system_override);
}

static void IDOverrideLibrary_reset_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	bool do_hierarchy;
	bool set_system_override;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	do_hierarchy = *((bool *)_data);
	_data += 8;
	set_system_override = *((bool *)_data);
	
	rna_ID_override_library_reset(_selfid, _self, CTX_data_main(C), reports, do_hierarchy, set_system_override);
}

RNA_EXTERN_C void IDOverrideLibrary_destroy_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy)
{
	rna_ID_override_library_destroy(_selfid, _self, bmain, reports, do_hierarchy);
}

static void IDOverrideLibrary_destroy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	bool do_hierarchy;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	do_hierarchy = *((bool *)_data);
	
	rna_ID_override_library_destroy(_selfid, _self, CTX_data_main(C), reports, do_hierarchy);
}

RNA_EXTERN_C bool IDOverrideLibrary_resync_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, struct Scene *scene, struct ViewLayer *view_layer, struct Collection *residual_storage, bool do_hierarchy_enforce, bool do_whole_hierarchy)
{
	return rna_ID_override_library_resync(_selfid, _self, bmain, reports, scene, view_layer, residual_storage, do_hierarchy_enforce, do_whole_hierarchy);
}

static void IDOverrideLibrary_resync_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	bool success;
	struct Scene *scene;
	struct ViewLayer *view_layer;
	struct Collection *residual_storage;
	bool do_hierarchy_enforce;
	bool do_whole_hierarchy;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	scene = *((struct Scene **)_data);
	_data += 8;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	residual_storage = *((struct Collection **)_data);
	_data += 8;
	do_hierarchy_enforce = *((bool *)_data);
	_data += 8;
	do_whole_hierarchy = *((bool *)_data);
	
	success = rna_ID_override_library_resync(_selfid, _self, CTX_data_main(C), reports, scene, view_layer, residual_storage, do_hierarchy_enforce, do_whole_hierarchy);
	*((bool *)_retdata) = success;
}

/* Repeated prototypes to detect errors */

void rna_ID_override_library_operations_update(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports);
void rna_ID_override_library_reset(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy, bool set_system_override);
void rna_ID_override_library_destroy(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy);
bool rna_ID_override_library_resync(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, struct Scene *scene, struct ViewLayer *view_layer, struct Collection *residual_storage, bool do_hierarchy_enforce, bool do_whole_hierarchy);

RNA_EXTERN_C struct IDOverrideLibraryProperty *IDOverrideLibraryProperties_add_func(struct IDOverrideLibrary *_self, ReportList *reports, const char * rna_path)
{
	return rna_ID_override_library_properties_add(_self, reports, rna_path);
}

static void IDOverrideLibraryProperties_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibrary *_self;
	struct IDOverrideLibraryProperty *property;
	const char * rna_path;
	char *_data, *_retdata;
	
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	rna_path = *((const char * *)_data);
	
	property = rna_ID_override_library_properties_add(_self, reports, rna_path);
	*((struct IDOverrideLibraryProperty **)_retdata) = property;
}

RNA_EXTERN_C void IDOverrideLibraryProperties_remove_func(struct IDOverrideLibrary *_self, ReportList *reports, struct IDOverrideLibraryProperty *property)
{
	rna_ID_override_library_properties_remove(_self, reports, property);
}

static void IDOverrideLibraryProperties_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibrary *_self;
	struct IDOverrideLibraryProperty *property;
	char *_data;
	
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	property = *((struct IDOverrideLibraryProperty **)_data);
	
	rna_ID_override_library_properties_remove(_self, reports, property);
}

/* Repeated prototypes to detect errors */

struct IDOverrideLibraryProperty *rna_ID_override_library_properties_add(struct IDOverrideLibrary *_self, ReportList *reports, const char * rna_path);
void rna_ID_override_library_properties_remove(struct IDOverrideLibrary *_self, ReportList *reports, struct IDOverrideLibraryProperty *property);


RNA_EXTERN_C struct IDOverrideLibraryPropertyOperation *IDOverrideLibraryPropertyOperations_add_func(struct IDOverrideLibraryProperty *_self, ReportList *reports, int operation, bool use_id, const char * subitem_reference_name, const char * subitem_local_name, struct ID *subitem_reference_id, struct ID *subitem_local_id, int subitem_reference_index, int subitem_local_index)
{
	return rna_ID_override_library_property_operations_add(_self, reports, operation, use_id, subitem_reference_name, subitem_local_name, subitem_reference_id, subitem_local_id, subitem_reference_index, subitem_local_index);
}

static void IDOverrideLibraryPropertyOperations_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibraryProperty *_self;
	int operation;
	bool use_id;
	const char * subitem_reference_name;
	const char * subitem_local_name;
	struct ID *subitem_reference_id;
	struct ID *subitem_local_id;
	int subitem_reference_index;
	int subitem_local_index;
	struct IDOverrideLibraryPropertyOperation *property;
	char *_data, *_retdata;
	
	_self = (struct IDOverrideLibraryProperty *)_ptr->data;
	_data = (char *)_parms->data;
	operation = *((int *)_data);
	_data += 8;
	use_id = *((bool *)_data);
	_data += 8;
	subitem_reference_name = *((const char * *)_data);
	_data += 8;
	subitem_local_name = *((const char * *)_data);
	_data += 8;
	subitem_reference_id = *((struct ID **)_data);
	_data += 8;
	subitem_local_id = *((struct ID **)_data);
	_data += 8;
	subitem_reference_index = *((int *)_data);
	_data += 8;
	subitem_local_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	property = rna_ID_override_library_property_operations_add(_self, reports, operation, use_id, subitem_reference_name, subitem_local_name, subitem_reference_id, subitem_local_id, subitem_reference_index, subitem_local_index);
	*((struct IDOverrideLibraryPropertyOperation **)_retdata) = property;
}

RNA_EXTERN_C void IDOverrideLibraryPropertyOperations_remove_func(struct IDOverrideLibraryProperty *_self, ReportList *reports, struct IDOverrideLibraryPropertyOperation *operation)
{
	rna_ID_override_library_property_operations_remove(_self, reports, operation);
}

static void IDOverrideLibraryPropertyOperations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibraryProperty *_self;
	struct IDOverrideLibraryPropertyOperation *operation;
	char *_data;
	
	_self = (struct IDOverrideLibraryProperty *)_ptr->data;
	_data = (char *)_parms->data;
	operation = *((struct IDOverrideLibraryPropertyOperation **)_data);
	
	rna_ID_override_library_property_operations_remove(_self, reports, operation);
}

/* Repeated prototypes to detect errors */

struct IDOverrideLibraryPropertyOperation *rna_ID_override_library_property_operations_add(struct IDOverrideLibraryProperty *_self, ReportList *reports, int operation, bool use_id, const char * subitem_reference_name, const char * subitem_local_name, struct ID *subitem_reference_id, struct ID *subitem_local_id, int subitem_reference_index, int subitem_local_index);
void rna_ID_override_library_property_operations_remove(struct IDOverrideLibraryProperty *_self, ReportList *reports, struct IDOverrideLibraryPropertyOperation *operation);


RNA_EXTERN_C int ImagePreview_image_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_image_pixels_get_length(ptr, arraylen);
}

RNA_EXTERN_C int ImagePreview_image_pixels_float_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_image_pixels_float_get_length(ptr, arraylen);
}

RNA_EXTERN_C int ImagePreview_icon_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_icon_pixels_get_length(ptr, arraylen);
}

RNA_EXTERN_C int ImagePreview_icon_pixels_float_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_icon_pixels_float_get_length(ptr, arraylen);
}

RNA_EXTERN_C void ImagePreview_reload_func(struct PreviewImage *_self)
{
	rna_ImagePreview_icon_reload(_self);
}

static void ImagePreview_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PreviewImage *_self;
	_self = (struct PreviewImage *)_ptr->data;
	
	rna_ImagePreview_icon_reload(_self);
}

/* Repeated prototypes to detect errors */

void rna_ImagePreview_icon_reload(struct PreviewImage *_self);



RNA_EXTERN_C void IDMaterials_append_func(struct ID *_self, Main *bmain, struct Material *material)
{
	rna_IDMaterials_append_id(_self, bmain, material);
}

static void IDMaterials_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct Material *material;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	material = *((struct Material **)_data);
	
	rna_IDMaterials_append_id(_self, CTX_data_main(C), material);
}

RNA_EXTERN_C struct Material *IDMaterials_pop_func(struct ID *_self, Main *bmain, ReportList *reports, int index)
{
	return rna_IDMaterials_pop_id(_self, bmain, reports, index);
}

static void IDMaterials_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	int index;
	struct Material *material;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	material = rna_IDMaterials_pop_id(_self, CTX_data_main(C), reports, index);
	*((struct Material **)_retdata) = material;
}

RNA_EXTERN_C void IDMaterials_clear_func(struct ID *_self, Main *bmain)
{
	rna_IDMaterials_clear_id(_self, bmain);
}

static void IDMaterials_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_IDMaterials_clear_id(_self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_IDMaterials_append_id(struct ID *_self, Main *bmain, struct Material *material);
struct Material *rna_IDMaterials_pop_id(struct ID *_self, Main *bmain, ReportList *reports, int index);
void rna_IDMaterials_clear_id(struct ID *_self, Main *bmain);

RNA_EXTERN_C void Library_reload_func(struct Library *_self, bContext *C, ReportList *reports)
{
	rna_Library_reload(_self, C, reports);
}

static void Library_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Library *_self;
	_self = (struct Library *)_ptr->data;
	
	rna_Library_reload(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_Library_reload(struct Library *_self, bContext *C, ReportList *reports);



/* Unknown Type */
CollectionPropertyRNA rna_UnknownType_rna_properties = {
	{(PropertyRNA *)&rna_UnknownType_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UnknownType_rna_properties_begin, UnknownType_rna_properties_next, UnknownType_rna_properties_end, UnknownType_rna_properties_get, nullptr, nullptr, UnknownType_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_UnknownType_rna_type = {
	{nullptr, (PropertyRNA *)&rna_UnknownType_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	UnknownType_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_UnknownType = {
	{(ContainerRNA *)&RNA_AnyType, (ContainerRNA *)&RNA_PrimitiveBoolean,
	nullptr,
	{(PropertyRNA *)&rna_UnknownType_rna_properties, (PropertyRNA *)&rna_UnknownType_rna_type}},
	"UnknownType", nullptr, nullptr, 516, nullptr, "Unknown Type",
	"Stub RNA type used for pointers to unknown or internal data",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_UnknownType_rna_properties,
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

/* Any Type */
CollectionPropertyRNA rna_AnyType_rna_properties = {
	{(PropertyRNA *)&rna_AnyType_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnyType_rna_properties_begin, AnyType_rna_properties_next, AnyType_rna_properties_end, AnyType_rna_properties_get, nullptr, nullptr, AnyType_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AnyType_rna_type = {
	{nullptr, (PropertyRNA *)&rna_AnyType_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AnyType_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_AnyType = {
	{(ContainerRNA *)&RNA_ID, (ContainerRNA *)&RNA_UnknownType,
	nullptr,
	{(PropertyRNA *)&rna_AnyType_rna_properties, (PropertyRNA *)&rna_AnyType_rna_type}},
	"AnyType", nullptr, nullptr, 516, nullptr, "Any Type",
	"RNA type used for pointers to any possible data",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AnyType_rna_properties,
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

/* ID */
CollectionPropertyRNA rna_ID_rna_properties = {
	{(PropertyRNA *)&rna_ID_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_rna_properties_begin, ID_rna_properties_next, ID_rna_properties_end, ID_rna_properties_get, nullptr, nullptr, ID_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ID_rna_type = {
	{(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_ID_name = {
	{(PropertyRNA *)&rna_ID_name_full, (PropertyRNA *)&rna_ID_rna_type,
	-1, "name", 262145, 4, 0, 0, 0, "Name",
	"Unique data-block ID name",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {66, 0, 0}, 0,
	nullptr, 318767109, rna_ID_name_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_name_get, ID_name_length, ID_name_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

StringPropertyRNA rna_ID_name_full = {
	{(PropertyRNA *)&rna_ID_is_evaluated, (PropertyRNA *)&rna_ID_name,
	-1, "name_full", 262144, 0, 0, 0, 0, "Full Name",
	"Unique data-block ID name, including library one is any",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_name_full_get, ID_name_full_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 132, ""
};

BoolPropertyRNA rna_ID_is_evaluated = {
	{(PropertyRNA *)&rna_ID_original, (PropertyRNA *)&rna_ID_name_full,
	-1, "is_evaluated", 2, 0, 0, 0, 0, "Is Evaluated",
	"Whether this ID is runtime-only, evaluated data-block, or actual data from .blend file",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_is_evaluated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ID_original = {
	{(PropertyRNA *)&rna_ID_users, (PropertyRNA *)&rna_ID_is_evaluated,
	-1, "original", 8912896, 2, 0, 32, 0, "Original ID",
	"Actual data-block from .blend file (Main database) that generated that evaluated one",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_original_get, nullptr, nullptr, nullptr,&RNA_ID
};

IntPropertyRNA rna_ID_users = {
	{(PropertyRNA *)&rna_ID_use_fake_user, (PropertyRNA *)&rna_ID_original,
	-1, "users", 2, 0, 0, 4, 0, "Users",
	"Number of times this data-block is referenced",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ID, us), (RawPropertyType)0, nullptr},
	ID_users_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_ID_use_fake_user = {
	{(PropertyRNA *)&rna_ID_use_extra_user, (PropertyRNA *)&rna_ID_users,
	-1, "use_fake_user", 4099, 0, 0, 0, 0, "Fake User",
	"Save this data-block even if it has no users",
	102, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_use_fake_user_get, ID_use_fake_user_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ID_use_extra_user = {
	{(PropertyRNA *)&rna_ID_is_embedded_data, (PropertyRNA *)&rna_ID_use_fake_user,
	-1, "use_extra_user", 3, 0, 0, 0, 0, "Extra User",
	"Indicates whether an extra user is set or not (mainly for internal/debug usages)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_use_extra_user_get, ID_use_extra_user_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ID_is_embedded_data = {
	{(PropertyRNA *)&rna_ID_is_missing, (PropertyRNA *)&rna_ID_use_extra_user,
	-1, "is_embedded_data", 2, 0, 0, 0, 0, "Embedded Data",
	"This data-block is not an independent one, but is actually a sub-data of another ID (typical example: root node trees or master collections)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_is_embedded_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ID_is_missing = {
	{(PropertyRNA *)&rna_ID_is_runtime_data, (PropertyRNA *)&rna_ID_is_embedded_data,
	-1, "is_missing", 2, 0, 0, 0, 0, "Missing Data",
	"This data-block is a place-holder for missing linked data (i.e. it is [an override of] a linked data that could not be found anymore)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_is_missing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ID_is_runtime_data = {
	{(PropertyRNA *)&rna_ID_tag, (PropertyRNA *)&rna_ID_is_missing,
	-1, "is_runtime_data", 3, 2, 0, 0, 0, "Runtime Data",
	"This data-block is runtime data, i.e. it won\'t be saved in .blend file. Note that e.g. evaluated IDs are always runtime, so this value is only editable for data-blocks in Main data-base",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_ID_is_runtime_editable, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_is_runtime_data_get, ID_is_runtime_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ID_tag = {
	{(PropertyRNA *)&rna_ID_is_library_indirect, (PropertyRNA *)&rna_ID_is_runtime_data,
	-1, "tag", 65539, 0, 0, 0, 0, "Tag",
	"Tools can use this to tag data for their own purposes (initial state is undefined)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_tag_get, ID_tag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_ID_is_library_indirect = {
	{(PropertyRNA *)&rna_ID_library, (PropertyRNA *)&rna_ID_tag,
	-1, "is_library_indirect", 2, 0, 0, 0, 0, "Is Indirect",
	"Is this ID block linked indirectly",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_is_library_indirect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_ID_library = {
	{(PropertyRNA *)&rna_ID_library_weak_reference, (PropertyRNA *)&rna_ID_is_library_indirect,
	-1, "library", 8388800, 2, 0, 0, 0, "Library",
	"Library file the data-block is linked from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_library_get, nullptr, nullptr, nullptr,&RNA_Library
};

PointerPropertyRNA rna_ID_library_weak_reference = {
	{(PropertyRNA *)&rna_ID_asset_data, (PropertyRNA *)&rna_ID_library,
	-1, "library_weak_reference", 8388608, 2, 0, 0, 0, "Library Weak Reference",
	"Weak reference to a data-block in another library .blend file (used to re-use already appended data instead of appending new copies)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_library_weak_reference_get, nullptr, nullptr, nullptr,&RNA_LibraryWeakReference
};

PointerPropertyRNA rna_ID_asset_data = {
	{(PropertyRNA *)&rna_ID_override_library, (PropertyRNA *)&rna_ID_library_weak_reference,
	-1, "asset_data", 8388609, 2, 0, 0, 0, "Asset Data",
	"Additional data for an asset data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_asset_data_get, ID_asset_data_set, nullptr, nullptr,&RNA_AssetMetaData
};

PointerPropertyRNA rna_ID_override_library = {
	{(PropertyRNA *)&rna_ID_preview, (PropertyRNA *)&rna_ID_asset_data,
	-1, "override_library", 8388608, 3, 0, 0, 0, "Library Override",
	"Library override data",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_override_library_get, nullptr, nullptr, nullptr,&RNA_IDOverrideLibrary
};

PointerPropertyRNA rna_ID_preview = {
	{nullptr, (PropertyRNA *)&rna_ID_override_library,
	-1, "preview", 8388608, 2, 0, 0, 0, "Preview",
	"Preview image and icon of this data-block (always None if not supported for this type of data)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ID_preview_get, nullptr, nullptr, nullptr,&RNA_ImagePreview
};

PointerPropertyRNA rna_ID_evaluated_get_depsgraph = {
	{(PropertyRNA *)&rna_ID_evaluated_get_id, nullptr,
	-1, "depsgraph", 8650752, 0, 1, 0, 0, "",
	"Dependency graph to perform lookup in",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

PointerPropertyRNA rna_ID_evaluated_get_id = {
	{nullptr, (PropertyRNA *)&rna_ID_evaluated_get_depsgraph,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New copy of the ID",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

FunctionRNA rna_ID_evaluated_get_func = {
	{(FunctionRNA *)&rna_ID_copy_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_ID_evaluated_get_depsgraph, (PropertyRNA *)&rna_ID_evaluated_get_id}},
	"evaluated_get", 0, "Get corresponding evaluated ID from the given dependency graph",
	ID_evaluated_get_call,
	(PropertyRNA *)&rna_ID_evaluated_get_id
};

PointerPropertyRNA rna_ID_copy_id = {
	{nullptr, nullptr,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New copy of the ID",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

FunctionRNA rna_ID_copy_func = {
	{(FunctionRNA *)&rna_ID_asset_mark_func, (FunctionRNA *)&rna_ID_evaluated_get_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_copy_id, (PropertyRNA *)&rna_ID_copy_id}},
	"copy", 4, "Create a copy of this data-block (not supported for all data-blocks). The result is added to the Blend-File Data (Main database), with all references to other data-blocks ensured to be from within the same Blend-File Data",
	ID_copy_call,
	(PropertyRNA *)&rna_ID_copy_id
};

FunctionRNA rna_ID_asset_mark_func = {
	{(FunctionRNA *)&rna_ID_asset_clear_func, (FunctionRNA *)&rna_ID_copy_func,
	nullptr,
	{nullptr, nullptr}},
	"asset_mark", 0, "Enable easier reuse of the data-block through the Asset Browser, with the help of customizable metadata (like previews, descriptions and tags)",
	ID_asset_mark_call,
	nullptr
};

FunctionRNA rna_ID_asset_clear_func = {
	{(FunctionRNA *)&rna_ID_asset_generate_preview_func, (FunctionRNA *)&rna_ID_asset_mark_func,
	nullptr,
	{nullptr, nullptr}},
	"asset_clear", 0, "Delete all asset metadata and turn the asset data-block back into a normal data-block",
	ID_asset_clear_call,
	nullptr
};

FunctionRNA rna_ID_asset_generate_preview_func = {
	{(FunctionRNA *)&rna_ID_override_create_func, (FunctionRNA *)&rna_ID_asset_clear_func,
	nullptr,
	{nullptr, nullptr}},
	"asset_generate_preview", 8, "Generate preview image (might be scheduled in a background thread)",
	ID_asset_generate_preview_call,
	nullptr
};

PointerPropertyRNA rna_ID_override_create_id = {
	{(PropertyRNA *)&rna_ID_override_create_remap_local_usages, nullptr,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New overridden local copy of the ID",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

BoolPropertyRNA rna_ID_override_create_remap_local_usages = {
	{nullptr, (PropertyRNA *)&rna_ID_override_create_id,
	-1, "remap_local_usages", 3, 0, 0, 0, 0, "",
	"Whether local usages of the linked ID should be remapped to the new library override of it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_ID_override_create_func = {
	{(FunctionRNA *)&rna_ID_override_hierarchy_create_func, (FunctionRNA *)&rna_ID_asset_generate_preview_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_override_create_id, (PropertyRNA *)&rna_ID_override_create_remap_local_usages}},
	"override_create", 4, "Create an overridden local copy of this linked data-block (not supported for all data-blocks)",
	ID_override_create_call,
	(PropertyRNA *)&rna_ID_override_create_id
};

PointerPropertyRNA rna_ID_override_hierarchy_create_id = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_scene, nullptr,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New overridden local copy of the root ID",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

PointerPropertyRNA rna_ID_override_hierarchy_create_scene = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_view_layer, (PropertyRNA *)&rna_ID_override_hierarchy_create_id,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"In which scene the new overrides should be instantiated",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

PointerPropertyRNA rna_ID_override_hierarchy_create_view_layer = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_reference, (PropertyRNA *)&rna_ID_override_hierarchy_create_scene,
	-1, "view_layer", 8650752, 0, 1, 0, 0, "",
	"In which view layer the new overrides should be instantiated",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

PointerPropertyRNA rna_ID_override_hierarchy_create_reference = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_do_fully_editable, (PropertyRNA *)&rna_ID_override_hierarchy_create_view_layer,
	-1, "reference", 8388736, 0, 0, 0, 0, "",
	"Another ID (usually an Object or Collection) used as a hint to decide where to instantiate the new overrides",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

BoolPropertyRNA rna_ID_override_hierarchy_create_do_fully_editable = {
	{nullptr, (PropertyRNA *)&rna_ID_override_hierarchy_create_reference,
	-1, "do_fully_editable", 3, 0, 0, 0, 0, "",
	"Make all library overrides generated by this call fully editable by the user (none will be \'system overrides\')",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_ID_override_hierarchy_create_func = {
	{(FunctionRNA *)&rna_ID_override_template_create_func, (FunctionRNA *)&rna_ID_override_create_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_id, (PropertyRNA *)&rna_ID_override_hierarchy_create_do_fully_editable}},
	"override_hierarchy_create", 4, "Create an overridden local copy of this linked data-block, and most of its dependencies when it is a Collection or and Object",
	ID_override_hierarchy_create_call,
	(PropertyRNA *)&rna_ID_override_hierarchy_create_id
};

FunctionRNA rna_ID_override_template_create_func = {
	{(FunctionRNA *)&rna_ID_user_clear_func, (FunctionRNA *)&rna_ID_override_hierarchy_create_func,
	nullptr,
	{nullptr, nullptr}},
	"override_template_create", 16, "Create an override template for this ID",
	ID_override_template_create_call,
	nullptr
};

FunctionRNA rna_ID_user_clear_func = {
	{(FunctionRNA *)&rna_ID_user_remap_func, (FunctionRNA *)&rna_ID_override_template_create_func,
	nullptr,
	{nullptr, nullptr}},
	"user_clear", 0, "Clear the user count of a data-block so its not saved, on reload the data will be removed",
	ID_user_clear_call,
	nullptr
};

PointerPropertyRNA rna_ID_user_remap_new_id = {
	{nullptr, nullptr,
	-1, "new_id", 8650880, 0, 1, 0, 0, "",
	"New ID to use",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

FunctionRNA rna_ID_user_remap_func = {
	{(FunctionRNA *)&rna_ID_make_local_func, (FunctionRNA *)&rna_ID_user_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_user_remap_new_id, (PropertyRNA *)&rna_ID_user_remap_new_id}},
	"user_remap", 4, "Replace all usage in the .blend file of this ID by new given one",
	ID_user_remap_call,
	nullptr
};

BoolPropertyRNA rna_ID_make_local_clear_proxy = {
	{(PropertyRNA *)&rna_ID_make_local_id, nullptr,
	-1, "clear_proxy", 3, 0, 0, 0, 0, "",
	"Deprecated, has no effect",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

PointerPropertyRNA rna_ID_make_local_id = {
	{nullptr, (PropertyRNA *)&rna_ID_make_local_clear_proxy,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"This ID, or the new ID if it was copied",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

FunctionRNA rna_ID_make_local_func = {
	{(FunctionRNA *)&rna_ID_user_of_id_func, (FunctionRNA *)&rna_ID_user_remap_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_make_local_clear_proxy, (PropertyRNA *)&rna_ID_make_local_id}},
	"make_local", 4, "Make this datablock local, return local one (may be a copy of the original, in case it is also indirectly used)",
	ID_make_local_call,
	(PropertyRNA *)&rna_ID_make_local_id
};

PointerPropertyRNA rna_ID_user_of_id_id = {
	{(PropertyRNA *)&rna_ID_user_of_id_count, nullptr,
	-1, "id", 8650880, 0, 1, 0, 0, "",
	"ID to count usages",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

IntPropertyRNA rna_ID_user_of_id_count = {
	{nullptr, (PropertyRNA *)&rna_ID_user_of_id_id,
	-1, "count", 3, 0, 2, 0, 0, "",
	"Number of usages/references of given id by current data-block",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_ID_user_of_id_func = {
	{(FunctionRNA *)&rna_ID_animation_data_create_func, (FunctionRNA *)&rna_ID_make_local_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_user_of_id_id, (PropertyRNA *)&rna_ID_user_of_id_count}},
	"user_of_id", 0, "Count the number of times that ID uses/references given one",
	ID_user_of_id_call,
	(PropertyRNA *)&rna_ID_user_of_id_count
};

PointerPropertyRNA rna_ID_animation_data_create_anim_data = {
	{nullptr, nullptr,
	-1, "anim_data", 8388608, 0, 2, 0, 0, "",
	"New animation data or nullptr",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_AnimData
};

FunctionRNA rna_ID_animation_data_create_func = {
	{(FunctionRNA *)&rna_ID_animation_data_clear_func, (FunctionRNA *)&rna_ID_user_of_id_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_animation_data_create_anim_data, (PropertyRNA *)&rna_ID_animation_data_create_anim_data}},
	"animation_data_create", 4, "Create animation data to this ID, note that not all ID types support this",
	ID_animation_data_create_call,
	(PropertyRNA *)&rna_ID_animation_data_create_anim_data
};

FunctionRNA rna_ID_animation_data_clear_func = {
	{(FunctionRNA *)&rna_ID_update_tag_func, (FunctionRNA *)&rna_ID_animation_data_create_func,
	nullptr,
	{nullptr, nullptr}},
	"animation_data_clear", 4, "Clear animation on this ID",
	ID_animation_data_clear_call,
	nullptr
};

static const EnumPropertyItem rna_ID_update_tag_refresh_items[4] = {
	{1, "OBJECT", 0, "Object", ""},
	{2, "DATA", 0, "Data", ""},
	{4, "TIME", 0, "Time", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_ID_update_tag_refresh = {
	{nullptr, nullptr,
	-1, "refresh", 2097155, 0, 0, 0, 0, "",
	"Type of updates to perform",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_ID_update_tag_refresh_items, 3, 0
};

FunctionRNA rna_ID_update_tag_func = {
	{(FunctionRNA *)&rna_ID_preview_ensure_func, (FunctionRNA *)&rna_ID_animation_data_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_update_tag_refresh, (PropertyRNA *)&rna_ID_update_tag_refresh}},
	"update_tag", 20, "Tag the ID to update its display data, e.g. when calling :class:`bpy.types.Scene.update`",
	ID_update_tag_call,
	nullptr
};

PointerPropertyRNA rna_ID_preview_ensure_preview_image = {
	{nullptr, nullptr,
	-1, "preview_image", 8388608, 0, 2, 0, 0, "",
	"The existing or created preview",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ImagePreview
};

FunctionRNA rna_ID_preview_ensure_func = {
	{nullptr, (FunctionRNA *)&rna_ID_update_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_ID_preview_ensure_preview_image, (PropertyRNA *)&rna_ID_preview_ensure_preview_image}},
	"preview_ensure", 0, "Ensure that this ID has preview data (if ID type supports it)",
	ID_preview_ensure_call,
	(PropertyRNA *)&rna_ID_preview_ensure_preview_image
};

StructRNA RNA_ID = {
	{(ContainerRNA *)&RNA_IDOverrideLibrary, (ContainerRNA *)&RNA_AnyType,
	nullptr,
	{(PropertyRNA *)&rna_ID_rna_properties, (PropertyRNA *)&rna_ID_preview}},
	"ID", nullptr, nullptr, 519, nullptr, "ID",
	"Base type for data-blocks, defining a unique name, linking from other libraries and garbage collection",
	"*", 17,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	nullptr,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_ID_evaluated_get_func, (FunctionRNA *)&rna_ID_preview_ensure_func}
};

/* ID Library Override */
CollectionPropertyRNA rna_IDOverrideLibrary_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibrary_rna_properties_begin, IDOverrideLibrary_rna_properties_next, IDOverrideLibrary_rna_properties_end, IDOverrideLibrary_rna_properties_get, nullptr, nullptr, IDOverrideLibrary_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibrary_rna_type = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_reference, (PropertyRNA *)&rna_IDOverrideLibrary_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibrary_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_IDOverrideLibrary_reference = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_hierarchy_root, (PropertyRNA *)&rna_IDOverrideLibrary_rna_type,
	-1, "reference", 8388800, 0, 0, 0, 0, "Reference ID",
	"Linked ID used as reference by this override",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17301504, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibrary_reference_get, nullptr, nullptr, nullptr,&RNA_ID
};

PointerPropertyRNA rna_IDOverrideLibrary_hierarchy_root = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_is_in_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_reference,
	-1, "hierarchy_root", 8388800, 0, 0, 0, 0, "Hierarchy Root ID",
	"Library override ID used as root of the override hierarchy this ID is a member of",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibrary_hierarchy_root_get, nullptr, nullptr, nullptr,&RNA_ID
};

BoolPropertyRNA rna_IDOverrideLibrary_is_in_hierarchy = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_is_system_override, (PropertyRNA *)&rna_IDOverrideLibrary_hierarchy_root,
	-1, "is_in_hierarchy", 3, 1, 0, 0, 0, "Is In Hierarchy",
	"Whether this library override is defined as part of a library hierarchy, or as a single, isolated and autonomous override",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17301504, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibrary_is_in_hierarchy_get, IDOverrideLibrary_is_in_hierarchy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_IDOverrideLibrary_is_system_override = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_properties, (PropertyRNA *)&rna_IDOverrideLibrary_is_in_hierarchy,
	-1, "is_system_override", 3, 1, 0, 0, 0, "Is System Override",
	"Whether this library override exists only for the override hierarchy, or if it is actually editable by the user",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17301504, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibrary_is_system_override_get, IDOverrideLibrary_is_system_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

CollectionPropertyRNA rna_IDOverrideLibrary_properties = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibrary_is_system_override,
	-1, "properties", 0, 0, 0, 0, 0, "Properties",
	"List of overridden properties",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17301504, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDOverrideLibraryProperties},
	IDOverrideLibrary_properties_begin, IDOverrideLibrary_properties_next, IDOverrideLibrary_properties_end, IDOverrideLibrary_properties_get, nullptr, IDOverrideLibrary_properties_lookup_int, nullptr, nullptr, &RNA_IDOverrideLibraryProperty
};

FunctionRNA rna_IDOverrideLibrary_operations_update_func = {
	{(FunctionRNA *)&rna_IDOverrideLibrary_reset_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"operations_update", 2068, "Update the library override operations based on the differences between this override ID and its reference",
	IDOverrideLibrary_operations_update_call,
	nullptr
};

BoolPropertyRNA rna_IDOverrideLibrary_reset_do_hierarchy = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_reset_set_system_override, nullptr,
	-1, "do_hierarchy", 3, 0, 0, 0, 0, "",
	"Also reset all the dependencies of this override to match their reference linked IDs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_IDOverrideLibrary_reset_set_system_override = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibrary_reset_do_hierarchy,
	-1, "set_system_override", 3, 0, 0, 0, 0, "",
	"Reset all user-editable overrides as (non-editable) system overrides",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_IDOverrideLibrary_reset_func = {
	{(FunctionRNA *)&rna_IDOverrideLibrary_destroy_func, (FunctionRNA *)&rna_IDOverrideLibrary_operations_update_func,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibrary_reset_do_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_reset_set_system_override}},
	"reset", 2068, "Reset this override to match again its linked reference ID",
	IDOverrideLibrary_reset_call,
	nullptr
};

BoolPropertyRNA rna_IDOverrideLibrary_destroy_do_hierarchy = {
	{nullptr, nullptr,
	-1, "do_hierarchy", 3, 0, 0, 0, 0, "",
	"Also delete all the dependencies of this override and remap their usages to their reference linked IDs",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_IDOverrideLibrary_destroy_func = {
	{(FunctionRNA *)&rna_IDOverrideLibrary_resync_func, (FunctionRNA *)&rna_IDOverrideLibrary_reset_func,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibrary_destroy_do_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_destroy_do_hierarchy}},
	"destroy", 2068, "Delete this override ID and remap its usages to its linked reference ID instead",
	IDOverrideLibrary_destroy_call,
	nullptr
};

BoolPropertyRNA rna_IDOverrideLibrary_resync_success = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_resync_scene, nullptr,
	-1, "success", 3, 0, 2, 0, 0, "Success",
	"Whether the resync process was successful or not",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_IDOverrideLibrary_resync_scene = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_resync_view_layer, (PropertyRNA *)&rna_IDOverrideLibrary_resync_success,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"The scene to operate in (for contextual things like keeping active object active, ensuring all overridden objects remain instantiated, etc.)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

PointerPropertyRNA rna_IDOverrideLibrary_resync_view_layer = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_resync_residual_storage, (PropertyRNA *)&rna_IDOverrideLibrary_resync_scene,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"The view layer to operate in (same usage as the `scene` data, in case it is not provided the scene\'s collection will be used instead)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ViewLayer
};

PointerPropertyRNA rna_IDOverrideLibrary_resync_residual_storage = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_resync_do_hierarchy_enforce, (PropertyRNA *)&rna_IDOverrideLibrary_resync_view_layer,
	-1, "residual_storage", 8388736, 0, 0, 0, 0, "",
	"Collection where to store objects that are instantiated in any other collection anymore (garbage collection, will be created if needed and none is provided)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Collection
};

BoolPropertyRNA rna_IDOverrideLibrary_resync_do_hierarchy_enforce = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_resync_do_whole_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_resync_residual_storage,
	-1, "do_hierarchy_enforce", 3, 0, 0, 0, 0, "",
	"Enforce restoring the dependency hierarchy between data-blocks to match the one from the reference linked hierarchy (WARNING: if some ID pointers have been purposedly overridden, these will be reset to their default value)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_IDOverrideLibrary_resync_do_whole_hierarchy = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibrary_resync_do_hierarchy_enforce,
	-1, "do_whole_hierarchy", 3, 0, 0, 0, 0, "",
	"Resync the whole hierarchy this data-block belongs to, not only its own sub-hierarchy",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_IDOverrideLibrary_resync_func = {
	{nullptr, (FunctionRNA *)&rna_IDOverrideLibrary_destroy_func,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibrary_resync_success, (PropertyRNA *)&rna_IDOverrideLibrary_resync_do_whole_hierarchy}},
	"resync", 2068, "Resync the data-block and its sub-hierarchy, or the whole hierarchy if requested",
	IDOverrideLibrary_resync_call,
	(PropertyRNA *)&rna_IDOverrideLibrary_resync_success
};

StructRNA RNA_IDOverrideLibrary = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryProperties, (ContainerRNA *)&RNA_ID,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibrary_rna_properties, (PropertyRNA *)&rna_IDOverrideLibrary_properties}},
	"IDOverrideLibrary", nullptr, nullptr, 516, nullptr, "ID Library Override",
	"Struct gathering all data needed by overridden linked IDs",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDOverrideLibrary_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_IDOverrideLibrary_operations_update_func, (FunctionRNA *)&rna_IDOverrideLibrary_resync_func}
};

/* Override Properties */
CollectionPropertyRNA rna_IDOverrideLibraryProperties_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryProperties_rna_properties_begin, IDOverrideLibraryProperties_rna_properties_next, IDOverrideLibraryProperties_rna_properties_end, IDOverrideLibraryProperties_rna_properties_get, nullptr, nullptr, IDOverrideLibraryProperties_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryProperties_rna_type = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryProperties_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_IDOverrideLibraryProperties_add_property = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_add_rna_path, nullptr,
	-1, "property", 8388608, 0, 2, 0, 0, "New Property",
	"Newly created override property or existing one",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_IDOverrideLibraryProperty
};

StringPropertyRNA rna_IDOverrideLibraryProperties_add_rna_path = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibraryProperties_add_property,
	-1, "rna_path", 262145, 0, 1, 0, 0, "RNA Path",
	"RNA-Path of the property to add",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 256, ""
};

FunctionRNA rna_IDOverrideLibraryProperties_add_func = {
	{(FunctionRNA *)&rna_IDOverrideLibraryProperties_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_add_property, (PropertyRNA *)&rna_IDOverrideLibraryProperties_add_rna_path}},
	"add", 16, "Add a property to the override library when it doesn\'t exist yet",
	IDOverrideLibraryProperties_add_call,
	(PropertyRNA *)&rna_IDOverrideLibraryProperties_add_property
};

PointerPropertyRNA rna_IDOverrideLibraryProperties_remove_property = {
	{nullptr, nullptr,
	-1, "property", 8388608, 0, 1, 0, 0, "Property",
	"Override property to be deleted",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_IDOverrideLibraryProperty
};

FunctionRNA rna_IDOverrideLibraryProperties_remove_func = {
	{nullptr, (FunctionRNA *)&rna_IDOverrideLibraryProperties_add_func,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_remove_property, (PropertyRNA *)&rna_IDOverrideLibraryProperties_remove_property}},
	"remove", 16, "Remove and delete a property",
	IDOverrideLibraryProperties_remove_call,
	nullptr
};

StructRNA RNA_IDOverrideLibraryProperties = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryProperty, (ContainerRNA *)&RNA_IDOverrideLibrary,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_type}},
	"IDOverrideLibraryProperties", nullptr, nullptr, 516, nullptr, "Override Properties",
	"Collection of override properties",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_IDOverrideLibraryProperties_add_func, (FunctionRNA *)&rna_IDOverrideLibraryProperties_remove_func}
};

/* ID Library Override Property */
CollectionPropertyRNA rna_IDOverrideLibraryProperty_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryProperty_rna_properties_begin, IDOverrideLibraryProperty_rna_properties_next, IDOverrideLibraryProperty_rna_properties_end, IDOverrideLibraryProperty_rna_properties_get, nullptr, nullptr, IDOverrideLibraryProperty_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryProperty_rna_type = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_path, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryProperty_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_IDOverrideLibraryProperty_rna_path = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_operations, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_type,
	-1, "rna_path", 262144, 0, 0, 0, 0, "RNA Path",
	"RNA path leading to that property, from owning ID",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryProperty_rna_path_get, IDOverrideLibraryProperty_rna_path_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 2147483647, ""
};

CollectionPropertyRNA rna_IDOverrideLibraryProperty_operations = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_path,
	-1, "operations", 0, 0, 0, 0, 0, "Operations",
	"List of overriding operations for a property",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 17301504, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_IDOverrideLibraryPropertyOperations},
	IDOverrideLibraryProperty_operations_begin, IDOverrideLibraryProperty_operations_next, IDOverrideLibraryProperty_operations_end, IDOverrideLibraryProperty_operations_get, nullptr, IDOverrideLibraryProperty_operations_lookup_int, nullptr, nullptr, &RNA_IDOverrideLibraryPropertyOperation
};

StructRNA RNA_IDOverrideLibraryProperty = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperations, (ContainerRNA *)&RNA_IDOverrideLibraryProperties,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryProperty_operations}},
	"IDOverrideLibraryProperty", nullptr, nullptr, 516, nullptr, "ID Library Override Property",
	"Description of an overridden property",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties,
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

/* Override Operations */
CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperations_rna_properties_begin, IDOverrideLibraryPropertyOperations_rna_properties_next, IDOverrideLibraryPropertyOperations_rna_properties_end, IDOverrideLibraryPropertyOperations_rna_properties_get, nullptr, nullptr, IDOverrideLibraryPropertyOperations_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_type = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperations_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperations_add_operation_items[8] = {
	{0, "NOOP", 0, "No-Op", "Does nothing, prevents adding actual overrides (NOT USED)"},
	{1, "REPLACE", 0, "Replace", "Replace value of reference by overriding one"},
	{101, "DIFF_ADD", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{102, "DIFF_SUB", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{103, "FACT_MULTIPLY", 0, "Factor", "Stores and apply multiplication factor between reference and local value (NOT USED)"},
	{201, "INSERT_AFTER", 0, "Insert After", "Insert a new item into collection after the one referenced in subitem_reference_name/_id or _index"},
	{202, "INSERT_BEFORE", 0, "Insert Before", "Insert a new item into collection before the one referenced in subitem_reference_name/_id or _index (NOT USED)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_operation = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_use_id, nullptr,
	-1, "operation", 3, 0, 1, 0, 0, "Operation",
	"What override operation is performed",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_IDOverrideLibraryPropertyOperations_add_operation_items, 7, 1
};

BoolPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_use_id = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_operation,
	-1, "use_id", 3, 0, 0, 0, 0, "Use ID Pointer Subitem",
	"Whether the found or created liboverride operation should use ID pointers or not",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_use_id,
	-1, "subitem_reference_name", 262145, 0, 0, 0, 0, "Subitem Reference Name",
	"Used to handle insertions or ID replacements into collection",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 2147483647, ""
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name,
	-1, "subitem_local_name", 262145, 0, 0, 0, 0, "Subitem Local Name",
	"Used to handle insertions or ID replacements into collection",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 2147483647, ""
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name,
	-1, "subitem_reference_id", 8388736, 0, 0, 0, 0, "Subitem Reference ID",
	"Used to handle ID replacements into collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_id,
	-1, "subitem_local_id", 8388736, 0, 0, 0, 0, "Subitem Local ID",
	"Used to handle ID replacements into collection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_id,
	-1, "subitem_reference_index", 3, 0, 0, 0, 0, "Subitem Reference Index",
	"Used to handle insertions or ID replacements into collection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_property, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index,
	-1, "subitem_local_index", 3, 0, 0, 0, 0, "Subitem Local Index",
	"Used to handle insertions or ID replacements into collection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_property = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index,
	-1, "property", 8388608, 0, 2, 0, 0, "New Operation",
	"Created operation",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_IDOverrideLibraryPropertyOperation
};

FunctionRNA rna_IDOverrideLibraryPropertyOperations_add_func = {
	{(FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_operation, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_property}},
	"add", 16, "Add a new operation",
	IDOverrideLibraryPropertyOperations_add_call,
	(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_property
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_remove_operation = {
	{nullptr, nullptr,
	-1, "operation", 8388608, 0, 1, 0, 0, "Operation",
	"Override operation to be deleted",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_IDOverrideLibraryPropertyOperation
};

FunctionRNA rna_IDOverrideLibraryPropertyOperations_remove_func = {
	{nullptr, (FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_add_func,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_operation, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_operation}},
	"remove", 16, "Remove and delete an operation",
	IDOverrideLibraryPropertyOperations_remove_call,
	nullptr
};

StructRNA RNA_IDOverrideLibraryPropertyOperations = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperation, (ContainerRNA *)&RNA_IDOverrideLibraryProperty,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_type}},
	"IDOverrideLibraryPropertyOperations", nullptr, nullptr, 516, nullptr, "Override Operations",
	"Collection of override operations",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_add_func, (FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_func}
};

/* ID Library Override Property Operation */
CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperation_rna_properties_begin, IDOverrideLibraryPropertyOperation_rna_properties_next, IDOverrideLibraryPropertyOperation_rna_properties_end, IDOverrideLibraryPropertyOperation_rna_properties_get, nullptr, nullptr, IDOverrideLibraryPropertyOperation_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_type = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_operation, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperation_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperation_operation_items[8] = {
	{0, "NOOP", 0, "No-Op", "Does nothing, prevents adding actual overrides (NOT USED)"},
	{1, "REPLACE", 0, "Replace", "Replace value of reference by overriding one"},
	{101, "DIFF_ADD", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{102, "DIFF_SUB", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{103, "FACT_MULTIPLY", 0, "Factor", "Stores and apply multiplication factor between reference and local value (NOT USED)"},
	{201, "INSERT_AFTER", 0, "Insert After", "Insert a new item into collection after the one referenced in subitem_reference_name/_id or _index"},
	{202, "INSERT_BEFORE", 0, "Insert Before", "Insert a new item into collection before the one referenced in subitem_reference_name/_id or _index (NOT USED)"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_operation = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_flag, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_type,
	-1, "operation", 2, 0, 0, 4, 0, "Operation",
	"What override operation is performed",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, operation), (RawPropertyType)1, nullptr},
	IDOverrideLibraryPropertyOperation_operation_get, nullptr, nullptr, nullptr, nullptr, rna_IDOverrideLibraryPropertyOperation_operation_items, 7, 1
};

static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperation_flag_items[5] = {
	{1, "MANDATORY", 0, "Mandatory", "For templates, prevents the user from removing predefined operation (NOT USED)"},
	{2, "LOCKED", 0, "Locked", "Prevents the user from modifying that override operation (NOT USED)"},
	{256, "IDPOINTER_MATCH_REFERENCE", 0, "Match Reference", "The ID pointer overridden by this operation is expected to match the reference hierarchy"},
	{512, "IDPOINTER_ITEM_USE_ID", 0, "ID Item Use ID Pointer", "RNA collections of IDs only, the reference to the item also uses the ID pointer itself, not only its name"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_flag = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_operation,
	-1, "flag", 2097154, 0, 0, 4, 0, "Flags",
	"Status flags",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, flag), (RawPropertyType)1, nullptr},
	IDOverrideLibraryPropertyOperation_flag_get, nullptr, nullptr, nullptr, nullptr, rna_IDOverrideLibraryPropertyOperation_flag_items, 4, 1
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_flag,
	-1, "subitem_reference_name", 262144, 0, 0, 0, 0, "Subitem Reference Name",
	"Used to handle changes into collection",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperation_subitem_reference_name_get, IDOverrideLibraryPropertyOperation_subitem_reference_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 2147483647, ""
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_id, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_name,
	-1, "subitem_local_name", 262144, 0, 0, 0, 0, "Subitem Local Name",
	"Used to handle changes into collection",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperation_subitem_local_name_get, IDOverrideLibraryPropertyOperation_subitem_local_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 2147483647, ""
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_id = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_id, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_name,
	-1, "subitem_reference_id", 8388800, 0, 0, 0, 0, "Subitem Reference ID",
	"Collection of IDs only, used to disambiguate between potential IDs with same name from different libraries",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperation_subitem_reference_id_get, nullptr, nullptr, nullptr,&RNA_ID
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_id = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_id,
	-1, "subitem_local_id", 8388800, 0, 0, 0, 0, "Subitem Local ID",
	"Collection of IDs only, used to disambiguate between potential IDs with same name from different libraries",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDOverrideLibraryPropertyOperation_subitem_local_id_get, nullptr, nullptr, nullptr,&RNA_ID
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_index = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_id,
	-1, "subitem_reference_index", 2, 0, 0, 4, 0, "Subitem Reference Index",
	"Used to handle changes into collection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, subitem_reference_index), (RawPropertyType)0, nullptr},
	IDOverrideLibraryPropertyOperation_subitem_reference_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_index = {
	{nullptr, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_index,
	-1, "subitem_local_index", 2, 0, 0, 4, 0, "Subitem Local Index",
	"Used to handle changes into collection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, subitem_local_index), (RawPropertyType)0, nullptr},
	IDOverrideLibraryPropertyOperation_subitem_local_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, -1, nullptr
};

StructRNA RNA_IDOverrideLibraryPropertyOperation = {
	{(ContainerRNA *)&RNA_ImagePreview, (ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperations,
	nullptr,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_index}},
	"IDOverrideLibraryPropertyOperation", nullptr, nullptr, 516, nullptr, "ID Library Override Property Operation",
	"Description of an override operation over an overridden property",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties,
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

/* Image Preview */
CollectionPropertyRNA rna_ImagePreview_rna_properties = {
	{(PropertyRNA *)&rna_ImagePreview_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePreview_rna_properties_begin, ImagePreview_rna_properties_next, ImagePreview_rna_properties_end, ImagePreview_rna_properties_get, nullptr, nullptr, ImagePreview_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_ImagePreview_rna_type = {
	{(PropertyRNA *)&rna_ImagePreview_is_image_custom, (PropertyRNA *)&rna_ImagePreview_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePreview_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_ImagePreview_is_image_custom = {
	{(PropertyRNA *)&rna_ImagePreview_image_size, (PropertyRNA *)&rna_ImagePreview_rna_type,
	-1, "is_image_custom", 3, 0, 0, 0, 0, "Custom Image",
	"True if this preview image has been modified by py script, and is no more auto-generated by Blender",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePreview_is_image_custom_get, ImagePreview_is_image_custom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static int rna_ImagePreview_image_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePreview_image_size = {
	{(PropertyRNA *)&rna_ImagePreview_image_pixels, (PropertyRNA *)&rna_ImagePreview_is_image_custom,
	-1, "image_size", 3, 0, 0, 0, 0, "Image Size",
	"Width and height in pixels",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ImagePreview_image_size_get, ImagePreview_image_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_ImagePreview_image_size_default
};

IntPropertyRNA rna_ImagePreview_image_pixels = {
	{(PropertyRNA *)&rna_ImagePreview_image_pixels_float, (PropertyRNA *)&rna_ImagePreview_image_size,
	-1, "image_pixels", 131075, 0, 0, 0, 0, "Image Pixels",
	"Image pixels, as bytes (always 32-bit RGBA)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_ImagePreview_image_pixels_get_length, 1, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ImagePreview_image_pixels_get, ImagePreview_image_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_ImagePreview_image_pixels_float = {
	{(PropertyRNA *)&rna_ImagePreview_is_icon_custom, (PropertyRNA *)&rna_ImagePreview_image_pixels,
	-1, "image_pixels_float", 131075, 0, 0, 0, 0, "Float Image Pixels",
	"Image pixels components, as floats (RGBA concatenated values)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_ImagePreview_image_pixels_float_get_length, 1, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ImagePreview_image_pixels_float_get, ImagePreview_image_pixels_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_ImagePreview_is_icon_custom = {
	{(PropertyRNA *)&rna_ImagePreview_icon_size, (PropertyRNA *)&rna_ImagePreview_image_pixels_float,
	-1, "is_icon_custom", 3, 0, 0, 0, 0, "Custom Icon",
	"True if this preview icon has been modified by py script, and is no more auto-generated by Blender",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePreview_is_icon_custom_get, ImagePreview_is_icon_custom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static int rna_ImagePreview_icon_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePreview_icon_size = {
	{(PropertyRNA *)&rna_ImagePreview_icon_pixels, (PropertyRNA *)&rna_ImagePreview_is_icon_custom,
	-1, "icon_size", 3, 0, 0, 0, 0, "Icon Size",
	"Width and height in pixels",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_PIXEL | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ImagePreview_icon_size_get, ImagePreview_icon_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_ImagePreview_icon_size_default
};

IntPropertyRNA rna_ImagePreview_icon_pixels = {
	{(PropertyRNA *)&rna_ImagePreview_icon_pixels_float, (PropertyRNA *)&rna_ImagePreview_icon_size,
	-1, "icon_pixels", 131075, 0, 0, 0, 0, "Icon Pixels",
	"Icon pixels, as bytes (always 32-bit RGBA)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_ImagePreview_icon_pixels_get_length, 1, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ImagePreview_icon_pixels_get, ImagePreview_icon_pixels_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

FloatPropertyRNA rna_ImagePreview_icon_pixels_float = {
	{(PropertyRNA *)&rna_ImagePreview_icon_id, (PropertyRNA *)&rna_ImagePreview_icon_pixels,
	-1, "icon_pixels_float", 131075, 0, 0, 0, 0, "Float Icon Pixels",
	"Icon pixels components, as floats (RGBA concatenated values)",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), rna_ImagePreview_icon_pixels_float_get_length, 1, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, ImagePreview_icon_pixels_float_get, ImagePreview_icon_pixels_float_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

IntPropertyRNA rna_ImagePreview_icon_id = {
	{nullptr, (PropertyRNA *)&rna_ImagePreview_icon_pixels_float,
	-1, "icon_id", 2, 0, 0, 0, 0, "Icon ID",
	"Unique integer identifying this preview as an icon (zero means invalid)",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	ImagePreview_icon_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_ImagePreview_reload_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"reload", 0, "Reload the preview from its source path",
	ImagePreview_reload_call,
	nullptr
};

StructRNA RNA_ImagePreview = {
	{(ContainerRNA *)&RNA_PropertyGroupItem, (ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperation,
	nullptr,
	{(PropertyRNA *)&rna_ImagePreview_rna_properties, (PropertyRNA *)&rna_ImagePreview_icon_id}},
	"ImagePreview", nullptr, nullptr, 516, nullptr, "Image Preview",
	"Preview image and icon",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_ImagePreview_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_ImagePreview_reload_func, (FunctionRNA *)&rna_ImagePreview_reload_func}
};

/* ID Property */
CollectionPropertyRNA rna_PropertyGroupItem_rna_properties = {
	{(PropertyRNA *)&rna_PropertyGroupItem_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PropertyGroupItem_rna_properties_begin, PropertyGroupItem_rna_properties_next, PropertyGroupItem_rna_properties_end, PropertyGroupItem_rna_properties_get, nullptr, nullptr, PropertyGroupItem_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PropertyGroupItem_rna_type = {
	{(PropertyRNA *)&rna_PropertyGroupItem_string, (PropertyRNA *)&rna_PropertyGroupItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PropertyGroupItem_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_PropertyGroupItem_string = {
	{(PropertyRNA *)&rna_PropertyGroupItem_int, (PropertyRNA *)&rna_PropertyGroupItem_rna_type,
	-1, "string", 263169, 0, 0, 0, 0, "string",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

IntPropertyRNA rna_PropertyGroupItem_int = {
	{(PropertyRNA *)&rna_PropertyGroupItem_int_array, (PropertyRNA *)&rna_PropertyGroupItem_string,
	-1, "int", 1027, 0, 0, 0, 0, "int",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

static int rna_PropertyGroupItem_int_array_default[1] = {
	0
};

IntPropertyRNA rna_PropertyGroupItem_int_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_float, (PropertyRNA *)&rna_PropertyGroupItem_int,
	-1, "int_array", 1027, 0, 0, 0, 0, "int_array",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_PropertyGroupItem_int_array_default
};

FloatPropertyRNA rna_PropertyGroupItem_float = {
	{(PropertyRNA *)&rna_PropertyGroupItem_float_array, (PropertyRNA *)&rna_PropertyGroupItem_int_array,
	-1, "float", 1027, 0, 0, 0, 0, "float",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_PropertyGroupItem_float_array_default[1] = {
	0.0f
};

FloatPropertyRNA rna_PropertyGroupItem_float_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_double, (PropertyRNA *)&rna_PropertyGroupItem_float,
	-1, "float_array", 1027, 0, 0, 0, 0, "float_array",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PropertyGroupItem_float_array_default
};

FloatPropertyRNA rna_PropertyGroupItem_double = {
	{(PropertyRNA *)&rna_PropertyGroupItem_double_array, (PropertyRNA *)&rna_PropertyGroupItem_float_array,
	-1, "double", 1027, 0, 0, 0, 0, "double",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, nullptr
};

static float rna_PropertyGroupItem_double_array_default[1] = {
	0.0f
};

FloatPropertyRNA rna_PropertyGroupItem_double_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_bool, (PropertyRNA *)&rna_PropertyGroupItem_double,
	-1, "double_array", 1027, 0, 0, 0, 0, "double_array",
	"",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PropertyGroupItem_double_array_default
};

BoolPropertyRNA rna_PropertyGroupItem_bool = {
	{(PropertyRNA *)&rna_PropertyGroupItem_bool_array, (PropertyRNA *)&rna_PropertyGroupItem_double_array,
	-1, "bool", 1027, 0, 0, 0, 0, "bool",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static bool rna_PropertyGroupItem_bool_array_default[1] = {
	0
};

BoolPropertyRNA rna_PropertyGroupItem_bool_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_group, (PropertyRNA *)&rna_PropertyGroupItem_bool,
	-1, "bool_array", 1027, 0, 0, 0, 0, "bool_array",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {1, 0, 0}, 1,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_PropertyGroupItem_bool_array_default
};

PointerPropertyRNA rna_PropertyGroupItem_group = {
	{(PropertyRNA *)&rna_PropertyGroupItem_collection, (PropertyRNA *)&rna_PropertyGroupItem_bool_array,
	-1, "group", 8389632, 0, 0, 0, 0, "group",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_PropertyGroup
};

CollectionPropertyRNA rna_PropertyGroupItem_collection = {
	{(PropertyRNA *)&rna_PropertyGroupItem_idp_array, (PropertyRNA *)&rna_PropertyGroupItem_group,
	-1, "collection", 1024, 0, 0, 0, 0, "collection",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, &RNA_PropertyGroup
};

CollectionPropertyRNA rna_PropertyGroupItem_idp_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_id, (PropertyRNA *)&rna_PropertyGroupItem_collection,
	-1, "idp_array", 1024, 0, 0, 8, 0, "idp_array",
	"",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PropertyGroupItem_idp_array_begin, PropertyGroupItem_idp_array_next, PropertyGroupItem_idp_array_end, PropertyGroupItem_idp_array_get, PropertyGroupItem_idp_array_length, nullptr, nullptr, nullptr, &RNA_PropertyGroup
};

PointerPropertyRNA rna_PropertyGroupItem_id = {
	{nullptr, (PropertyRNA *)&rna_PropertyGroupItem_idp_array,
	-1, "id", 8389761, 0, 0, 0, 0, "id",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

StructRNA RNA_PropertyGroupItem = {
	{(ContainerRNA *)&RNA_PropertyGroup, (ContainerRNA *)&RNA_ImagePreview,
	nullptr,
	{(PropertyRNA *)&rna_PropertyGroupItem_rna_properties, (PropertyRNA *)&rna_PropertyGroupItem_id}},
	"PropertyGroupItem", nullptr, nullptr, 516, nullptr, "ID Property",
	"Property that stores arbitrary, user defined properties",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_PropertyGroupItem_rna_properties,
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

/* ID Property Group */
CollectionPropertyRNA rna_PropertyGroup_rna_properties = {
	{(PropertyRNA *)&rna_PropertyGroup_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PropertyGroup_rna_properties_begin, PropertyGroup_rna_properties_next, PropertyGroup_rna_properties_end, PropertyGroup_rna_properties_get, nullptr, nullptr, PropertyGroup_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_PropertyGroup_rna_type = {
	{(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	PropertyGroup_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_PropertyGroup_name = {
	{nullptr, (PropertyRNA *)&rna_PropertyGroup_rna_type,
	-1, "name", 263169, 0, 0, 0, 0, "Name",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_PropertyGroup = {
	{(ContainerRNA *)&RNA_IDMaterials, (ContainerRNA *)&RNA_PropertyGroupItem,
	nullptr,
	{(PropertyRNA *)&rna_PropertyGroup_rna_properties, (PropertyRNA *)&rna_PropertyGroup_name}},
	"PropertyGroup", nullptr, nullptr, 516, nullptr, "ID Property Group",
	"Group of ID properties",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	nullptr,
	nullptr,
	rna_PropertyGroup_refine,
	nullptr,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	nullptr,
	rna_PropertyGroup_idprops,
	{nullptr, nullptr}
};

/* ID Materials */
CollectionPropertyRNA rna_IDMaterials_rna_properties = {
	{(PropertyRNA *)&rna_IDMaterials_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDMaterials_rna_properties_begin, IDMaterials_rna_properties_next, IDMaterials_rna_properties_end, IDMaterials_rna_properties_get, nullptr, nullptr, IDMaterials_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDMaterials_rna_type = {
	{nullptr, (PropertyRNA *)&rna_IDMaterials_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDMaterials_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_IDMaterials_append_material = {
	{nullptr, nullptr,
	-1, "material", 8388736, 0, 1, 0, 0, "",
	"Material to add",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Material
};

FunctionRNA rna_IDMaterials_append_func = {
	{(FunctionRNA *)&rna_IDMaterials_pop_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_IDMaterials_append_material, (PropertyRNA *)&rna_IDMaterials_append_material}},
	"append", 4, "Add a new material to the data-block",
	IDMaterials_append_call,
	nullptr
};

IntPropertyRNA rna_IDMaterials_pop_index = {
	{(PropertyRNA *)&rna_IDMaterials_pop_material, nullptr,
	-1, "index", 3, 0, 0, 0, 0, "",
	"Index of material to remove",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32766, -32766, 32766, 1, -1, nullptr
};

PointerPropertyRNA rna_IDMaterials_pop_material = {
	{nullptr, (PropertyRNA *)&rna_IDMaterials_pop_index,
	-1, "material", 8388736, 0, 2, 0, 0, "",
	"Material to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Material
};

FunctionRNA rna_IDMaterials_pop_func = {
	{(FunctionRNA *)&rna_IDMaterials_clear_func, (FunctionRNA *)&rna_IDMaterials_append_func,
	nullptr,
	{(PropertyRNA *)&rna_IDMaterials_pop_index, (PropertyRNA *)&rna_IDMaterials_pop_material}},
	"pop", 20, "Remove a material from the data-block",
	IDMaterials_pop_call,
	(PropertyRNA *)&rna_IDMaterials_pop_material
};

FunctionRNA rna_IDMaterials_clear_func = {
	{nullptr, (FunctionRNA *)&rna_IDMaterials_pop_func,
	nullptr,
	{nullptr, nullptr}},
	"clear", 4, "Remove all materials from the data-block",
	IDMaterials_clear_call,
	nullptr
};

StructRNA RNA_IDMaterials = {
	{(ContainerRNA *)&RNA_Library, (ContainerRNA *)&RNA_PropertyGroup,
	nullptr,
	{(PropertyRNA *)&rna_IDMaterials_rna_properties, (PropertyRNA *)&rna_IDMaterials_rna_type}},
	"IDMaterials", nullptr, nullptr, 516, nullptr, "ID Materials",
	"Collection of materials",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDMaterials_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_IDMaterials_append_func, (FunctionRNA *)&rna_IDMaterials_clear_func}
};

/* Library */
StringPropertyRNA rna_Library_filepath = {
	{(PropertyRNA *)&rna_Library_parent, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Path to the library .blend file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Library_filepath_get, Library_filepath_length, Library_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

PointerPropertyRNA rna_Library_parent = {
	{(PropertyRNA *)&rna_Library_packed_file, (PropertyRNA *)&rna_Library_filepath,
	-1, "parent", 8388800, 2, 0, 0, 0, "Parent",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Library_parent_get, nullptr, nullptr, nullptr,&RNA_Library
};

PointerPropertyRNA rna_Library_packed_file = {
	{(PropertyRNA *)&rna_Library_version, (PropertyRNA *)&rna_Library_parent,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Library_packed_file_get, nullptr, nullptr, nullptr,&RNA_PackedFile
};

static int rna_Library_version_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Library_version = {
	{(PropertyRNA *)&rna_Library_needs_liboverride_resync, (PropertyRNA *)&rna_Library_packed_file,
	-1, "version", 8388610, 0, 0, 0, 0, "Version",
	"Version of Blender the library .blend was saved with",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, Library_version_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, rna_Library_version_default
};

BoolPropertyRNA rna_Library_needs_liboverride_resync = {
	{nullptr, (PropertyRNA *)&rna_Library_version,
	-1, "needs_liboverride_resync", 3, 0, 0, 0, 0, "Library Overrides Need resync",
	"True if this library contains library overrides that are linked in current blendfile, and that had to be recursively resynced on load (it is recommended to open and re-save that library blendfile then)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Library_needs_liboverride_resync_get, Library_needs_liboverride_resync_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Library_reload_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"reload", 24, "Reload this library and all its linked data-blocks",
	Library_reload_call,
	nullptr
};

StructRNA RNA_Library = {
	{(ContainerRNA *)&RNA_LibraryWeakReference, (ContainerRNA *)&RNA_IDMaterials,
	nullptr,
	{(PropertyRNA *)&rna_Library_filepath, (PropertyRNA *)&rna_Library_needs_liboverride_resync}},
	"Library", nullptr, nullptr, 519, nullptr, "Library",
	"External .blend file from which data is linked",
	"*", 170,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Library_reload_func, (FunctionRNA *)&rna_Library_reload_func}
};

/* LibraryWeakReference */
CollectionPropertyRNA rna_LibraryWeakReference_rna_properties = {
	{(PropertyRNA *)&rna_LibraryWeakReference_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LibraryWeakReference_rna_properties_begin, LibraryWeakReference_rna_properties_next, LibraryWeakReference_rna_properties_end, LibraryWeakReference_rna_properties_get, nullptr, nullptr, LibraryWeakReference_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_LibraryWeakReference_rna_type = {
	{(PropertyRNA *)&rna_LibraryWeakReference_filepath, (PropertyRNA *)&rna_LibraryWeakReference_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LibraryWeakReference_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_LibraryWeakReference_filepath = {
	{(PropertyRNA *)&rna_LibraryWeakReference_id_name, (PropertyRNA *)&rna_LibraryWeakReference_rna_type,
	-1, "filepath", 262144, 0, 0, 0, 0, "File Path",
	"Path to the library .blend file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {1024, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LibraryWeakReference_filepath_get, LibraryWeakReference_filepath_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

StringPropertyRNA rna_LibraryWeakReference_id_name = {
	{nullptr, (PropertyRNA *)&rna_LibraryWeakReference_filepath,
	-1, "id_name", 262144, 0, 0, 0, 0, "ID name",
	"Full ID name in the library .blend file (including the two leading \'id type\' chars)",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {66, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	LibraryWeakReference_id_name_get, LibraryWeakReference_id_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 66, ""
};

StructRNA RNA_LibraryWeakReference = {
	{(ContainerRNA *)&RNA_IDPropertyWrapPtr, (ContainerRNA *)&RNA_Library,
	nullptr,
	{(PropertyRNA *)&rna_LibraryWeakReference_rna_properties, (PropertyRNA *)&rna_LibraryWeakReference_id_name}},
	"LibraryWeakReference", nullptr, nullptr, 516, nullptr, "LibraryWeakReference",
	"Read-only external reference to a linked data-block and its library file",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_LibraryWeakReference_rna_properties,
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

/* IDPropertyWrapPtr */
CollectionPropertyRNA rna_IDPropertyWrapPtr_rna_properties = {
	{(PropertyRNA *)&rna_IDPropertyWrapPtr_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDPropertyWrapPtr_rna_properties_begin, IDPropertyWrapPtr_rna_properties_next, IDPropertyWrapPtr_rna_properties_end, IDPropertyWrapPtr_rna_properties_get, nullptr, nullptr, IDPropertyWrapPtr_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_IDPropertyWrapPtr_rna_type = {
	{nullptr, (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	IDPropertyWrapPtr_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_IDPropertyWrapPtr = {
	{(ContainerRNA *)&RNA_Texture, (ContainerRNA *)&RNA_LibraryWeakReference,
	nullptr,
	{(PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties, (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_type}},
	"IDPropertyWrapPtr", nullptr, nullptr, 644, nullptr, "IDPropertyWrapPtr",
	"",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rna_IDPropertyWrapPtr_idprops,
	{nullptr, nullptr}
};

#include "rna_define.cc"

BlenderRNA BLENDER_RNA = {
	/*structs*/ {&RNA_Struct, &RNA_XrEventData},
	/*structs_map*/ nullptr,
	/*structs_len*/ 0,
};

