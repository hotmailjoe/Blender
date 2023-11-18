
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

#include "rna_screen.cc"

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

RNA_EXTERN_C CollectionPropertyRNA rna_Screen_areas;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_is_animation_playing;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_is_scrubbing;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_is_temporary;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_show_fullscreen;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_show_statusbar;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_top_left_3d_editor;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_3d_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_follow;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_animation_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_properties_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_image_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_sequence_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_node_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_clip_editors;
RNA_EXTERN_C BoolPropertyRNA rna_Screen_use_play_spreadsheet_editors;

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


extern FunctionRNA rna_Screen_statusbar_info_func;
extern StringPropertyRNA rna_Screen_statusbar_info_statusbar_info;



RNA_EXTERN_C CollectionPropertyRNA rna_Area_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Area_rna_type;
RNA_EXTERN_C CollectionPropertyRNA rna_Area_spaces;
RNA_EXTERN_C CollectionPropertyRNA rna_Area_regions;
RNA_EXTERN_C BoolPropertyRNA rna_Area_show_menus;
RNA_EXTERN_C EnumPropertyRNA rna_Area_type;
RNA_EXTERN_C EnumPropertyRNA rna_Area_ui_type;
RNA_EXTERN_C IntPropertyRNA rna_Area_x;
RNA_EXTERN_C IntPropertyRNA rna_Area_y;
RNA_EXTERN_C IntPropertyRNA rna_Area_width;
RNA_EXTERN_C IntPropertyRNA rna_Area_height;

extern FunctionRNA rna_Area_tag_redraw_func;
extern FunctionRNA rna_Area_header_text_set_func;
extern StringPropertyRNA rna_Area_header_text_set_text;



RNA_EXTERN_C CollectionPropertyRNA rna_AreaSpaces_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_AreaSpaces_rna_type;
RNA_EXTERN_C PointerPropertyRNA rna_AreaSpaces_active;


RNA_EXTERN_C CollectionPropertyRNA rna_Region_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_Region_rna_type;
RNA_EXTERN_C EnumPropertyRNA rna_Region_type;
RNA_EXTERN_C IntPropertyRNA rna_Region_x;
RNA_EXTERN_C IntPropertyRNA rna_Region_y;
RNA_EXTERN_C IntPropertyRNA rna_Region_width;
RNA_EXTERN_C IntPropertyRNA rna_Region_height;
RNA_EXTERN_C PointerPropertyRNA rna_Region_view2d;
RNA_EXTERN_C EnumPropertyRNA rna_Region_alignment;
RNA_EXTERN_C PointerPropertyRNA rna_Region_data;
RNA_EXTERN_C EnumPropertyRNA rna_Region_active_panel_category;

extern FunctionRNA rna_Region_tag_redraw_func;


RNA_EXTERN_C CollectionPropertyRNA rna_View2D_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_View2D_rna_type;

extern FunctionRNA rna_View2D_region_to_view_func;
extern FloatPropertyRNA rna_View2D_region_to_view_x;
extern FloatPropertyRNA rna_View2D_region_to_view_y;
extern FloatPropertyRNA rna_View2D_region_to_view_result;

extern FunctionRNA rna_View2D_view_to_region_func;
extern FloatPropertyRNA rna_View2D_view_to_region_x;
extern FloatPropertyRNA rna_View2D_view_to_region_y;
extern BoolPropertyRNA rna_View2D_view_to_region_clip;
extern IntPropertyRNA rna_View2D_view_to_region_result;


static PointerRNA Screen_areas_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Area, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Screen_areas_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Screen_areas;

    rna_iterator_listbase_begin(iter, &data->areabase, nullptr);

    if (iter->valid) {
        iter->ptr = Screen_areas_get(iter);
    }
}

RNA_EXTERN_C void Screen_areas_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Screen_areas_get(iter);
    }
}

RNA_EXTERN_C void Screen_areas_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Screen_areas_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Screen_areas_begin(&iter, ptr);

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
        if (found) { *r_ptr = Screen_areas_get(&iter); }
    }

    Screen_areas_end(&iter);

    return found;
}

RNA_EXTERN_C bool Screen_is_animation_playing_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Screen_is_animation_playing_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Screen_is_scrubbing_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Screen_is_scrubbing_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Screen_is_temporary_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->temp) & 1) != 0);
}

RNA_EXTERN_C bool Screen_show_fullscreen_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Screen_fullscreen_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Screen_show_statusbar_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

RNA_EXTERN_C void Screen_show_statusbar_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (!value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

RNA_EXTERN_C bool Screen_use_play_top_left_3d_editor_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 1) != 0);
}

RNA_EXTERN_C void Screen_use_play_top_left_3d_editor_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 1; }
    else { data->redraws_flag &= ~1; }
}

RNA_EXTERN_C bool Screen_use_play_3d_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 2) != 0);
}

RNA_EXTERN_C void Screen_use_play_3d_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 2; }
    else { data->redraws_flag &= ~2; }
}

RNA_EXTERN_C bool Screen_use_follow_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 32768) != 0);
}

RNA_EXTERN_C void Screen_use_follow_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 32768; }
    else { data->redraws_flag &= ~32768; }
}

RNA_EXTERN_C bool Screen_use_play_animation_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 4) != 0);
}

RNA_EXTERN_C void Screen_use_play_animation_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 4; }
    else { data->redraws_flag &= ~4; }
}

RNA_EXTERN_C bool Screen_use_play_properties_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 8) != 0);
}

RNA_EXTERN_C void Screen_use_play_properties_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 8; }
    else { data->redraws_flag &= ~8; }
}

RNA_EXTERN_C bool Screen_use_play_image_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 64) != 0);
}

RNA_EXTERN_C void Screen_use_play_image_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 64; }
    else { data->redraws_flag &= ~64; }
}

RNA_EXTERN_C bool Screen_use_play_sequence_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 32) != 0);
}

RNA_EXTERN_C void Screen_use_play_sequence_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 32; }
    else { data->redraws_flag &= ~32; }
}

RNA_EXTERN_C bool Screen_use_play_node_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 256) != 0);
}

RNA_EXTERN_C void Screen_use_play_node_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 256; }
    else { data->redraws_flag &= ~256; }
}

RNA_EXTERN_C bool Screen_use_play_clip_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 512) != 0);
}

RNA_EXTERN_C void Screen_use_play_clip_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 512; }
    else { data->redraws_flag &= ~512; }
}

RNA_EXTERN_C bool Screen_use_play_spreadsheet_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 1024) != 0);
}

RNA_EXTERN_C void Screen_use_play_spreadsheet_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 1024; }
    else { data->redraws_flag &= ~1024; }
}

static PointerRNA Area_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Area_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Area_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Area_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Area_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Area_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Area_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Area_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Area_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Area_spaces_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Space, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Area_spaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Area_spaces;

    rna_iterator_listbase_begin(iter, &data->spacedata, nullptr);

    if (iter->valid) {
        iter->ptr = Area_spaces_get(iter);
    }
}

RNA_EXTERN_C void Area_spaces_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Area_spaces_get(iter);
    }
}

RNA_EXTERN_C void Area_spaces_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Area_spaces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Area_spaces_begin(&iter, ptr);

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
        if (found) { *r_ptr = Area_spaces_get(&iter); }
    }

    Area_spaces_end(&iter);

    return found;
}

static PointerRNA Area_regions_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Region, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Area_regions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Area_regions;

    rna_iterator_listbase_begin(iter, &data->regionbase, nullptr);

    if (iter->valid) {
        iter->ptr = Area_regions_get(iter);
    }
}

RNA_EXTERN_C void Area_regions_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Area_regions_get(iter);
    }
}

RNA_EXTERN_C void Area_regions_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Area_regions_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Area_regions_begin(&iter, ptr);

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
        if (found) { *r_ptr = Area_regions_get(&iter); }
    }

    Area_regions_end(&iter);

    return found;
}

RNA_EXTERN_C bool Area_show_menus_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

RNA_EXTERN_C void Area_show_menus_set(PointerRNA *ptr, bool value)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

RNA_EXTERN_C int Area_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Area_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void Area_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Area_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Area_ui_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Area_ui_type_get;
    return fn(ptr);
}

RNA_EXTERN_C void Area_ui_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Area_ui_type_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Area_x_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->totrct.xmin);
}

RNA_EXTERN_C int Area_y_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->totrct.ymin);
}

RNA_EXTERN_C int Area_width_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->winx);
}

RNA_EXTERN_C int Area_height_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->winy);
}

static PointerRNA AreaSpaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void AreaSpaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AreaSpaces_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AreaSpaces_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AreaSpaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AreaSpaces_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void AreaSpaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int AreaSpaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA AreaSpaces_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C PointerRNA AreaSpaces_active_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Space, data->spacedata.first);
}

static PointerRNA Region_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void Region_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Region_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Region_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Region_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Region_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void Region_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Region_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA Region_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C int Region_type_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->regiontype);
}

RNA_EXTERN_C int Region_x_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winrct.xmin);
}

RNA_EXTERN_C int Region_y_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winrct.ymin);
}

RNA_EXTERN_C int Region_width_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winx);
}

RNA_EXTERN_C int Region_height_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winy);
}

RNA_EXTERN_C PointerRNA Region_view2d_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_View2D, &data->v2d);
}

RNA_EXTERN_C int Region_alignment_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_region_alignment_get;
    return fn(ptr);
}

RNA_EXTERN_C PointerRNA Region_data_get(PointerRNA *ptr)
{
    return rna_Region_data_get(ptr);
}

RNA_EXTERN_C int Region_active_panel_category_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_region_active_panel_category_get;
    return fn(ptr);
}

RNA_EXTERN_C void Region_active_panel_category_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_region_active_panel_category_set;
    fn(ptr, value);
}

static PointerRNA View2D_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void View2D_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_View2D_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = View2D_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void View2D_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = View2D_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void View2D_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int View2D_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA View2D_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C const char * Screen_statusbar_info_func(struct bScreen *_self, Main *bmain, bContext *C)
{
	return rna_Screen_statusbar_info_get(_self, bmain, C);
}

static void Screen_statusbar_info_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bScreen *_self;
	const char * statusbar_info;
	char *_data, *_retdata;
	
	_self = (struct bScreen *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	statusbar_info = rna_Screen_statusbar_info_get(_self, CTX_data_main(C), C);
	*((const char * *)_retdata) = statusbar_info;
}

/* Repeated prototypes to detect errors */

const char * rna_Screen_statusbar_info_get(struct bScreen *_self, Main *bmain, bContext *C);

RNA_EXTERN_C void Area_tag_redraw_func(struct ScrArea *_self)
{
	ED_area_tag_redraw(_self);
}

static void Area_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ScrArea *_self;
	_self = (struct ScrArea *)_ptr->data;
	
	ED_area_tag_redraw(_self);
}

RNA_EXTERN_C void Area_header_text_set_func(struct ScrArea *_self, const char * text)
{
	ED_area_status_text(_self, text);
}

static void Area_header_text_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ScrArea *_self;
	const char * text;
	char *_data;
	
	_self = (struct ScrArea *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	ED_area_status_text(_self, text);
}

/* Repeated prototypes to detect errors */

void ED_area_tag_redraw(struct ScrArea *_self);
void ED_area_status_text(struct ScrArea *_self, const char * text);


RNA_EXTERN_C void Region_tag_redraw_func(struct ARegion *_self)
{
	ED_region_tag_redraw(_self);
}

static void Region_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ARegion *_self;
	_self = (struct ARegion *)_ptr->data;
	
	ED_region_tag_redraw(_self);
}

/* Repeated prototypes to detect errors */

void ED_region_tag_redraw(struct ARegion *_self);

RNA_EXTERN_C void View2D_region_to_view_func(struct View2D *_self, float x, float y, float result[2])
{
	rna_View2D_region_to_view(_self, x, y, result);
}

static void View2D_region_to_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View2D *_self;
	float x;
	float y;
	float *result;
	char *_data;
	
	_self = (struct View2D *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	result = ((float *)_data);
	
	rna_View2D_region_to_view(_self, x, y, result);
}

RNA_EXTERN_C void View2D_view_to_region_func(struct View2D *_self, float x, float y, bool clip, int result[2])
{
	rna_View2D_view_to_region(_self, x, y, clip, result);
}

static void View2D_view_to_region_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View2D *_self;
	float x;
	float y;
	bool clip;
	int *result;
	char *_data;
	
	_self = (struct View2D *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	clip = *((bool *)_data);
	_data += 8;
	result = ((int *)_data);
	
	rna_View2D_view_to_region(_self, x, y, clip, result);
}

/* Repeated prototypes to detect errors */

void rna_View2D_region_to_view(struct View2D *_self, float x, float y, float result[2]);
void rna_View2D_view_to_region(struct View2D *_self, float x, float y, bool clip, int result[2]);

/* Screen */
CollectionPropertyRNA rna_Screen_areas = {
	{(PropertyRNA *)&rna_Screen_is_animation_playing, nullptr,
	-1, "areas", 0, 0, 0, 0, 0, "Areas",
	"Areas the screen is subdivided into",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_areas_begin, Screen_areas_next, Screen_areas_end, Screen_areas_get, nullptr, Screen_areas_lookup_int, nullptr, nullptr, &RNA_Area
};

BoolPropertyRNA rna_Screen_is_animation_playing = {
	{(PropertyRNA *)&rna_Screen_is_scrubbing, (PropertyRNA *)&rna_Screen_areas,
	-1, "is_animation_playing", 2, 0, 0, 0, 0, "Animation Playing",
	"Animation playback is active",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_is_animation_playing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_is_scrubbing = {
	{(PropertyRNA *)&rna_Screen_is_temporary, (PropertyRNA *)&rna_Screen_is_animation_playing,
	-1, "is_scrubbing", 2, 0, 0, 0, 0, "User is Scrubbing",
	"True when the user is scrubbing through time",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_is_scrubbing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_is_temporary = {
	{(PropertyRNA *)&rna_Screen_show_fullscreen, (PropertyRNA *)&rna_Screen_is_scrubbing,
	-1, "is_temporary", 2, 0, 0, 0, 0, "Temporary",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_is_temporary_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_show_fullscreen = {
	{(PropertyRNA *)&rna_Screen_show_statusbar, (PropertyRNA *)&rna_Screen_is_temporary,
	-1, "show_fullscreen", 2, 0, 0, 0, 0, "Maximize",
	"An area is maximized, filling this screen",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_show_fullscreen_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_show_statusbar = {
	{(PropertyRNA *)&rna_Screen_use_play_top_left_3d_editor, (PropertyRNA *)&rna_Screen_show_fullscreen,
	-1, "show_statusbar", 3, 0, 0, 0, 0, "Show Status Bar",
	"Show status bar",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_bar_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_show_statusbar_get, Screen_show_statusbar_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_top_left_3d_editor = {
	{(PropertyRNA *)&rna_Screen_use_play_3d_editors, (PropertyRNA *)&rna_Screen_show_statusbar,
	-1, "use_play_top_left_3d_editor", 3, 0, 0, 0, 0, "Top-Left 3D Editor",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_top_left_3d_editor_get, Screen_use_play_top_left_3d_editor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_3d_editors = {
	{(PropertyRNA *)&rna_Screen_use_follow, (PropertyRNA *)&rna_Screen_use_play_top_left_3d_editor,
	-1, "use_play_3d_editors", 3, 0, 0, 0, 0, "All 3D Viewports",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_3d_editors_get, Screen_use_play_3d_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_follow = {
	{(PropertyRNA *)&rna_Screen_use_play_animation_editors, (PropertyRNA *)&rna_Screen_use_play_3d_editors,
	-1, "use_follow", 3, 0, 0, 0, 0, "Follow",
	"Follow current frame in editors",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_follow_get, Screen_use_follow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_animation_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_properties_editors, (PropertyRNA *)&rna_Screen_use_follow,
	-1, "use_play_animation_editors", 3, 0, 0, 0, 0, "Animation Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_animation_editors_get, Screen_use_play_animation_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_properties_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_image_editors, (PropertyRNA *)&rna_Screen_use_play_animation_editors,
	-1, "use_play_properties_editors", 3, 0, 0, 0, 0, "Property Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_properties_editors_get, Screen_use_play_properties_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_image_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_sequence_editors, (PropertyRNA *)&rna_Screen_use_play_properties_editors,
	-1, "use_play_image_editors", 3, 0, 0, 0, 0, "Image Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_image_editors_get, Screen_use_play_image_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_sequence_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_node_editors, (PropertyRNA *)&rna_Screen_use_play_image_editors,
	-1, "use_play_sequence_editors", 3, 0, 0, 0, 0, "Sequencer Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_sequence_editors_get, Screen_use_play_sequence_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_node_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_clip_editors, (PropertyRNA *)&rna_Screen_use_play_sequence_editors,
	-1, "use_play_node_editors", 3, 0, 0, 0, 0, "Node Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_node_editors_get, Screen_use_play_node_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_clip_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_spreadsheet_editors, (PropertyRNA *)&rna_Screen_use_play_node_editors,
	-1, "use_play_clip_editors", 3, 0, 0, 0, 0, "Clip Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_clip_editors_get, Screen_use_play_clip_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Screen_use_play_spreadsheet_editors = {
	{nullptr, (PropertyRNA *)&rna_Screen_use_play_clip_editors,
	-1, "use_play_spreadsheet_editors", 3, 0, 0, 0, 0, "Spreadsheet Editors",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Screen_use_play_spreadsheet_editors_get, Screen_use_play_spreadsheet_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

StringPropertyRNA rna_Screen_statusbar_info_statusbar_info = {
	{nullptr, nullptr,
	-1, "statusbar_info", 262145, 0, 2, 0, 0, "Status Bar Info",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_Screen_statusbar_info_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_Screen_statusbar_info_statusbar_info, (PropertyRNA *)&rna_Screen_statusbar_info_statusbar_info}},
	"statusbar_info", 12, "statusbar_info",
	Screen_statusbar_info_call,
	(PropertyRNA *)&rna_Screen_statusbar_info_statusbar_info
};

StructRNA RNA_Screen = {
	{(ContainerRNA *)&RNA_Area, (ContainerRNA *)&RNA_SceneRenderView,
	nullptr,
	{(PropertyRNA *)&rna_Screen_areas, (PropertyRNA *)&rna_Screen_use_play_spreadsheet_editors}},
	"Screen", nullptr, nullptr, 519, nullptr, "Screen",
	"Screen data-block, defining the layout of areas in a window",
	"*", 27,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Screen_statusbar_info_func, (FunctionRNA *)&rna_Screen_statusbar_info_func}
};

/* Area */
CollectionPropertyRNA rna_Area_rna_properties = {
	{(PropertyRNA *)&rna_Area_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Area_rna_properties_begin, Area_rna_properties_next, Area_rna_properties_end, Area_rna_properties_get, nullptr, nullptr, Area_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Area_rna_type = {
	{(PropertyRNA *)&rna_Area_spaces, (PropertyRNA *)&rna_Area_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Area_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

CollectionPropertyRNA rna_Area_spaces = {
	{(PropertyRNA *)&rna_Area_regions, (PropertyRNA *)&rna_Area_rna_type,
	-1, "spaces", 0, 0, 0, 0, 0, "Spaces",
	"Spaces contained in this area, the first being the active space (NOTE: Useful for example to restore a previously used 3D view space in a certain area to get the old view orientation)",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_AreaSpaces},
	Area_spaces_begin, Area_spaces_next, Area_spaces_end, Area_spaces_get, nullptr, Area_spaces_lookup_int, nullptr, nullptr, &RNA_Space
};

CollectionPropertyRNA rna_Area_regions = {
	{(PropertyRNA *)&rna_Area_show_menus, (PropertyRNA *)&rna_Area_spaces,
	-1, "regions", 0, 0, 0, 0, 0, "Regions",
	"Regions this area is subdivided in",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Area_regions_begin, Area_regions_next, Area_regions_end, Area_regions_get, nullptr, Area_regions_lookup_int, nullptr, nullptr, &RNA_Region
};

BoolPropertyRNA rna_Area_show_menus = {
	{(PropertyRNA *)&rna_Area_type, (PropertyRNA *)&rna_Area_regions,
	-1, "show_menus", 3, 0, 0, 0, 0, "Show Menus",
	"Show menus in the header",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Area_show_menus_get, Area_show_menus_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

EnumPropertyRNA rna_Area_type = {
	{(PropertyRNA *)&rna_Area_ui_type, (PropertyRNA *)&rna_Area_show_menus,
	-1, "type", 4194305, 0, 0, 0, 0, "Editor Type",
	"Current editor type for this area",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Area_type_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Area_type_get, Area_type_set, nullptr, nullptr, nullptr, rna_enum_space_type_items, 23, 1
};

EnumPropertyRNA rna_Area_ui_type = {
	{(PropertyRNA *)&rna_Area_x, (PropertyRNA *)&rna_Area_type,
	-1, "ui_type", 4194305, 0, 0, 0, 0, "Editor Type",
	"Current editor type for this area",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	(UpdateFunc)(void *)rna_Area_ui_type_update, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Area_ui_type_get, Area_ui_type_set, rna_Area_ui_type_itemf, nullptr, nullptr, rna_enum_dummy_NULL_items, 0, 65536
};

IntPropertyRNA rna_Area_x = {
	{(PropertyRNA *)&rna_Area_y, (PropertyRNA *)&rna_Area_ui_type,
	-1, "x", 2, 0, 0, 4, 0, "X Position",
	"The window relative vertical location of the area",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, totrct.xmin), (RawPropertyType)0, nullptr},
	Area_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Area_y = {
	{(PropertyRNA *)&rna_Area_width, (PropertyRNA *)&rna_Area_x,
	-1, "y", 2, 0, 0, 4, 0, "Y Position",
	"The window relative horizontal location of the area",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, totrct.ymin), (RawPropertyType)0, nullptr},
	Area_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Area_width = {
	{(PropertyRNA *)&rna_Area_height, (PropertyRNA *)&rna_Area_y,
	-1, "width", 2, 0, 0, 4, 0, "Width",
	"Area width",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, winx), (RawPropertyType)1, nullptr},
	Area_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Area_height = {
	{nullptr, (PropertyRNA *)&rna_Area_width,
	-1, "height", 2, 0, 0, 4, 0, "Height",
	"Area height",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, winy), (RawPropertyType)1, nullptr},
	Area_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

FunctionRNA rna_Area_tag_redraw_func = {
	{(FunctionRNA *)&rna_Area_header_text_set_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"tag_redraw", 0, "tag_redraw",
	Area_tag_redraw_call,
	nullptr
};

StringPropertyRNA rna_Area_header_text_set_text = {
	{nullptr, nullptr,
	-1, "text", 1, 0, 1, 0, 0, "Text",
	"New string for the header, None clears the text",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

FunctionRNA rna_Area_header_text_set_func = {
	{nullptr, (FunctionRNA *)&rna_Area_tag_redraw_func,
	nullptr,
	{(PropertyRNA *)&rna_Area_header_text_set_text, (PropertyRNA *)&rna_Area_header_text_set_text}},
	"header_text_set", 0, "Set the header status text",
	Area_header_text_set_call,
	nullptr
};

StructRNA RNA_Area = {
	{(ContainerRNA *)&RNA_AreaSpaces, (ContainerRNA *)&RNA_Screen,
	nullptr,
	{(PropertyRNA *)&rna_Area_rna_properties, (PropertyRNA *)&rna_Area_height}},
	"Area", nullptr, nullptr, 516, nullptr, "Area",
	"Area in a subdivided screen, containing an editor",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Area_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Area_tag_redraw_func, (FunctionRNA *)&rna_Area_header_text_set_func}
};

/* Area Spaces */
CollectionPropertyRNA rna_AreaSpaces_rna_properties = {
	{(PropertyRNA *)&rna_AreaSpaces_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AreaSpaces_rna_properties_begin, AreaSpaces_rna_properties_next, AreaSpaces_rna_properties_end, AreaSpaces_rna_properties_get, nullptr, nullptr, AreaSpaces_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_AreaSpaces_rna_type = {
	{(PropertyRNA *)&rna_AreaSpaces_active, (PropertyRNA *)&rna_AreaSpaces_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AreaSpaces_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

PointerPropertyRNA rna_AreaSpaces_active = {
	{nullptr, (PropertyRNA *)&rna_AreaSpaces_rna_type,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Space",
	"Space currently being displayed in this area",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	AreaSpaces_active_get, nullptr, nullptr, nullptr,&RNA_Space
};

StructRNA RNA_AreaSpaces = {
	{(ContainerRNA *)&RNA_Region, (ContainerRNA *)&RNA_Area,
	nullptr,
	{(PropertyRNA *)&rna_AreaSpaces_rna_properties, (PropertyRNA *)&rna_AreaSpaces_active}},
	"AreaSpaces", nullptr, nullptr, 516, nullptr, "Area Spaces",
	"Collection of spaces",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_AreaSpaces_rna_properties,
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

/* Region */
CollectionPropertyRNA rna_Region_rna_properties = {
	{(PropertyRNA *)&rna_Region_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Region_rna_properties_begin, Region_rna_properties_next, Region_rna_properties_end, Region_rna_properties_get, nullptr, nullptr, Region_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_Region_rna_type = {
	{(PropertyRNA *)&rna_Region_type, (PropertyRNA *)&rna_Region_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Region_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

EnumPropertyRNA rna_Region_type = {
	{(PropertyRNA *)&rna_Region_x, (PropertyRNA *)&rna_Region_rna_type,
	-1, "type", 2, 0, 0, 4, 0, "Region Type",
	"Type of this region",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, regiontype), (RawPropertyType)1, nullptr},
	Region_type_get, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 16, 0
};

IntPropertyRNA rna_Region_x = {
	{(PropertyRNA *)&rna_Region_y, (PropertyRNA *)&rna_Region_type,
	-1, "x", 2, 0, 0, 4, 0, "X Position",
	"The window relative vertical location of the region",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winrct.xmin), (RawPropertyType)0, nullptr},
	Region_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Region_y = {
	{(PropertyRNA *)&rna_Region_width, (PropertyRNA *)&rna_Region_x,
	-1, "y", 2, 0, 0, 4, 0, "Y Position",
	"The window relative horizontal location of the region",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winrct.ymin), (RawPropertyType)0, nullptr},
	Region_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Region_width = {
	{(PropertyRNA *)&rna_Region_height, (PropertyRNA *)&rna_Region_y,
	-1, "width", 2, 0, 0, 4, 0, "Width",
	"Region width",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winx), (RawPropertyType)1, nullptr},
	Region_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

IntPropertyRNA rna_Region_height = {
	{(PropertyRNA *)&rna_Region_view2d, (PropertyRNA *)&rna_Region_width,
	-1, "height", 2, 0, 0, 4, 0, "Height",
	"Region height",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winy), (RawPropertyType)1, nullptr},
	Region_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, 0, nullptr
};

PointerPropertyRNA rna_Region_view2d = {
	{(PropertyRNA *)&rna_Region_alignment, (PropertyRNA *)&rna_Region_height,
	-1, "view2d", 8650752, 0, 0, 0, 0, "View2D",
	"2D view of the region",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Region_view2d_get, nullptr, nullptr, nullptr,&RNA_View2D
};

static const EnumPropertyItem rna_Region_alignment_items[10] = {
	{0, "NONE", 0, "None", "Don\'t use any fixed alignment, fill available space"},
	{1, "TOP", 0, "Top", ""},
	{2, "BOTTOM", 0, "Bottom", ""},
	{3, "LEFT", 0, "Left", ""},
	{4, "RIGHT", 0, "Right", ""},
	{5, "HORIZONTAL_SPLIT", 0, "Horizontal Split", ""},
	{6, "VERTICAL_SPLIT", 0, "Vertical Split", ""},
	{7, "FLOAT", 0, "Float", "Region floats on screen, doesn\'t use any fixed alignment"},
	{8, "QUAD_SPLIT", 0, "Quad Split", "Region is split horizontally and vertically"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Region_alignment = {
	{(PropertyRNA *)&rna_Region_data, (PropertyRNA *)&rna_Region_view2d,
	-1, "alignment", 2, 0, 0, 0, 0, "Alignment",
	"Alignment of the region within the area",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Region_alignment_get, nullptr, nullptr, nullptr, nullptr, rna_Region_alignment_items, 9, 0
};

PointerPropertyRNA rna_Region_data = {
	{(PropertyRNA *)&rna_Region_active_panel_category, (PropertyRNA *)&rna_Region_alignment,
	-1, "data", 8388608, 0, 0, 0, 0, "Region Data",
	"Region specific data (the type depends on the region type)",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Region_data_get, nullptr, nullptr, nullptr,&RNA_AnyType
};

static const EnumPropertyItem rna_Region_active_panel_category_items[2] = {
	{-1, "UNSUPPORTED", 0, "Not Supported", "This region does not support panel categories"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Region_active_panel_category = {
	{nullptr, (PropertyRNA *)&rna_Region_data,
	-1, "active_panel_category", 3, 0, 0, 0, 0, "Active Panel Category",
	"The current active panel category, may be Null if the region does not support this feature (NOTE: these categories are generated at runtime, so list may be empty at initialization, before any drawing took place)",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, rna_region_active_panel_category_editable_get, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Region_active_panel_category_get, Region_active_panel_category_set, rna_region_active_panel_category_itemf, nullptr, nullptr, rna_Region_active_panel_category_items, 1, -1
};

FunctionRNA rna_Region_tag_redraw_func = {
	{nullptr, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"tag_redraw", 0, "tag_redraw",
	Region_tag_redraw_call,
	nullptr
};

StructRNA RNA_Region = {
	{(ContainerRNA *)&RNA_View2D, (ContainerRNA *)&RNA_AreaSpaces,
	nullptr,
	{(PropertyRNA *)&rna_Region_rna_properties, (PropertyRNA *)&rna_Region_active_panel_category}},
	"Region", nullptr, nullptr, 516, nullptr, "Region",
	"Region in a subdivided screen area",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_Region_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_Region_tag_redraw_func, (FunctionRNA *)&rna_Region_tag_redraw_func}
};

/* View2D */
CollectionPropertyRNA rna_View2D_rna_properties = {
	{(PropertyRNA *)&rna_View2D_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	View2D_rna_properties_begin, View2D_rna_properties_next, View2D_rna_properties_end, View2D_rna_properties_get, nullptr, nullptr, View2D_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_View2D_rna_type = {
	{nullptr, (PropertyRNA *)&rna_View2D_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	View2D_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

FloatPropertyRNA rna_View2D_region_to_view_x = {
	{(PropertyRNA *)&rna_View2D_region_to_view_y, nullptr,
	-1, "x", 3, 0, 1, 0, 0, "x",
	"Region x coordinate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_View2D_region_to_view_y = {
	{(PropertyRNA *)&rna_View2D_region_to_view_result, (PropertyRNA *)&rna_View2D_region_to_view_x,
	-1, "y", 3, 0, 1, 0, 0, "y",
	"Region y coordinate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

static float rna_View2D_region_to_view_result_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_View2D_region_to_view_result = {
	{nullptr, (PropertyRNA *)&rna_View2D_region_to_view_y,
	-1, "result", 8388611, 0, 2, 0, 0, "Result",
	"View coordinates",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_View2D_region_to_view_result_default
};

FunctionRNA rna_View2D_region_to_view_func = {
	{(FunctionRNA *)&rna_View2D_view_to_region_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_View2D_region_to_view_x, (PropertyRNA *)&rna_View2D_region_to_view_result}},
	"region_to_view", 0, "Transform region coordinates to 2D view",
	View2D_region_to_view_call,
	nullptr
};

FloatPropertyRNA rna_View2D_view_to_region_x = {
	{(PropertyRNA *)&rna_View2D_view_to_region_y, nullptr,
	-1, "x", 3, 0, 1, 0, 0, "x",
	"2D View x coordinate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

FloatPropertyRNA rna_View2D_view_to_region_y = {
	{(PropertyRNA *)&rna_View2D_view_to_region_clip, (PropertyRNA *)&rna_View2D_view_to_region_x,
	-1, "y", 3, 0, 1, 0, 0, "y",
	"2D View y coordinate",
	0, "*",
	PROP_FLOAT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, nullptr
};

BoolPropertyRNA rna_View2D_view_to_region_clip = {
	{(PropertyRNA *)&rna_View2D_view_to_region_result, (PropertyRNA *)&rna_View2D_view_to_region_y,
	-1, "clip", 3, 0, 0, 0, 0, "Clip",
	"Clip coordinates to the visible region",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

static int rna_View2D_view_to_region_result_default[2] = {
	0,
	0
};

IntPropertyRNA rna_View2D_view_to_region_result = {
	{nullptr, (PropertyRNA *)&rna_View2D_view_to_region_clip,
	-1, "result", 8388611, 0, 2, 0, 0, "Result",
	"Region coordinates",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 1, {2, 0, 0}, 2,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_View2D_view_to_region_result_default
};

FunctionRNA rna_View2D_view_to_region_func = {
	{nullptr, (FunctionRNA *)&rna_View2D_region_to_view_func,
	nullptr,
	{(PropertyRNA *)&rna_View2D_view_to_region_x, (PropertyRNA *)&rna_View2D_view_to_region_result}},
	"view_to_region", 0, "Transform 2D view coordinates to region",
	View2D_view_to_region_call,
	nullptr
};

StructRNA RNA_View2D = {
	{(ContainerRNA *)&RNA_PaintCurve, (ContainerRNA *)&RNA_Region,
	nullptr,
	{(PropertyRNA *)&rna_View2D_rna_properties, (PropertyRNA *)&rna_View2D_rna_type}},
	"View2D", nullptr, nullptr, 516, nullptr, "View2D",
	"Scroll and zoom for a 2D region",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_View2D_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_View2D_region_to_view_func, (FunctionRNA *)&rna_View2D_view_to_region_func}
};

