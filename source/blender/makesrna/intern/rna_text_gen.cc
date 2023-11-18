
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

#include "rna_text.cc"
#include "rna_text_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_TextLine_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_TextLine_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_TextLine_body;


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

RNA_EXTERN_C StringPropertyRNA rna_Text_filepath;
RNA_EXTERN_C BoolPropertyRNA rna_Text_is_dirty;
RNA_EXTERN_C BoolPropertyRNA rna_Text_is_modified;
RNA_EXTERN_C BoolPropertyRNA rna_Text_is_in_memory;
RNA_EXTERN_C BoolPropertyRNA rna_Text_use_module;
RNA_EXTERN_C EnumPropertyRNA rna_Text_indentation;
RNA_EXTERN_C CollectionPropertyRNA rna_Text_lines;
RNA_EXTERN_C PointerPropertyRNA rna_Text_current_line;
RNA_EXTERN_C IntPropertyRNA rna_Text_current_character;
RNA_EXTERN_C IntPropertyRNA rna_Text_current_line_index;
RNA_EXTERN_C PointerPropertyRNA rna_Text_select_end_line;
RNA_EXTERN_C IntPropertyRNA rna_Text_select_end_line_index;
RNA_EXTERN_C IntPropertyRNA rna_Text_select_end_character;

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


extern FunctionRNA rna_Text_clear_func;
extern FunctionRNA rna_Text_write_func;
extern StringPropertyRNA rna_Text_write_text;

extern FunctionRNA rna_Text_from_string_func;
extern StringPropertyRNA rna_Text_from_string_text;

extern FunctionRNA rna_Text_as_string_func;
extern StringPropertyRNA rna_Text_as_string_text;

extern FunctionRNA rna_Text_is_syntax_highlight_supported_func;
extern BoolPropertyRNA rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported;

extern FunctionRNA rna_Text_select_set_func;
extern IntPropertyRNA rna_Text_select_set_line_start;
extern IntPropertyRNA rna_Text_select_set_char_start;
extern IntPropertyRNA rna_Text_select_set_line_end;
extern IntPropertyRNA rna_Text_select_set_char_end;

extern FunctionRNA rna_Text_cursor_set_func;
extern IntPropertyRNA rna_Text_cursor_set_line;
extern IntPropertyRNA rna_Text_cursor_set_character;
extern BoolPropertyRNA rna_Text_cursor_set_select;


static PointerRNA TextLine_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void TextLine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextLine_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextLine_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TextLine_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TextLine_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void TextLine_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int TextLine_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA TextLine_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void TextLine_body_get(PointerRNA *ptr, char *value)
{
    rna_TextLine_body_get(ptr, value);
}

RNA_EXTERN_C int TextLine_body_length(PointerRNA *ptr)
{
    return rna_TextLine_body_length(ptr);
}

RNA_EXTERN_C void TextLine_body_set(PointerRNA *ptr, const char *value)
{
    rna_TextLine_body_set(ptr, value);
}

RNA_EXTERN_C void Text_filepath_get(PointerRNA *ptr, char *value)
{
    rna_Text_filepath_get(ptr, value);
}

RNA_EXTERN_C int Text_filepath_length(PointerRNA *ptr)
{
    return rna_Text_filepath_length(ptr);
}

RNA_EXTERN_C void Text_filepath_set(PointerRNA *ptr, const char *value)
{
    rna_Text_filepath_set(ptr, value);
}

RNA_EXTERN_C bool Text_is_dirty_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

RNA_EXTERN_C bool Text_is_modified_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Text_modified_get;
    return fn(ptr);
}

RNA_EXTERN_C bool Text_is_in_memory_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

RNA_EXTERN_C bool Text_use_module_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

RNA_EXTERN_C void Text_use_module_set(PointerRNA *ptr, bool value)
{
    Text *data = (Text *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

RNA_EXTERN_C int Text_indentation_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return ((data->flags) & 1024);
}

RNA_EXTERN_C void Text_indentation_set(PointerRNA *ptr, int value)
{
    Text *data = (Text *)(ptr->data);
    data->flags &= ~1024;
    data->flags |= value;
}

static PointerRNA Text_lines_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TextLine, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void Text_lines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Text_lines;

    rna_iterator_listbase_begin(iter, &data->lines, nullptr);

    if (iter->valid) {
        iter->ptr = Text_lines_get(iter);
    }
}

RNA_EXTERN_C void Text_lines_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Text_lines_get(iter);
    }
}

RNA_EXTERN_C void Text_lines_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int Text_lines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Text_lines_begin(&iter, ptr);

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
        if (found) { *r_ptr = Text_lines_get(&iter); }
    }

    Text_lines_end(&iter);

    return found;
}

RNA_EXTERN_C PointerRNA Text_current_line_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_TextLine, data->curl);
}

RNA_EXTERN_C int Text_current_character_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_current_character_get;
    return fn(ptr);
}

RNA_EXTERN_C void Text_current_character_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_current_character_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Text_current_line_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_current_line_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Text_current_line_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_current_line_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C PointerRNA Text_select_end_line_get(PointerRNA *ptr)
{
    Text *data = (Text *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_TextLine, data->sell);
}

RNA_EXTERN_C int Text_select_end_line_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_select_end_line_index_get;
    return fn(ptr);
}

RNA_EXTERN_C void Text_select_end_line_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_select_end_line_index_set;
    fn(ptr, value);
}

RNA_EXTERN_C int Text_select_end_character_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Text_select_end_character_get;
    return fn(ptr);
}

RNA_EXTERN_C void Text_select_end_character_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Text_select_end_character_set;
    fn(ptr, value);
}


RNA_EXTERN_C void Text_clear_func(struct Text *_self)
{
	rna_Text_clear(_self);
}

static void Text_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	_self = (struct Text *)_ptr->data;
	
	rna_Text_clear(_self);
}

RNA_EXTERN_C void Text_write_func(struct Text *_self, const char * text)
{
	rna_Text_write(_self, text);
}

static void Text_write_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	const char * text;
	char *_data;
	
	_self = (struct Text *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	rna_Text_write(_self, text);
}

RNA_EXTERN_C void Text_from_string_func(struct Text *_self, const char * text)
{
	rna_Text_from_string(_self, text);
}

static void Text_from_string_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	const char * text;
	char *_data;
	
	_self = (struct Text *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	rna_Text_from_string(_self, text);
}

RNA_EXTERN_C void Text_as_string_func(struct Text *_self, int *text_num, const char * *text)
{
	rna_Text_as_string(_self, text, text_num);
}

static void Text_as_string_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	int *text_num;
	const char * *text;
	char *_data;
	
	_self = (struct Text *)_ptr->data;
	_data = (char *)_parms->data;
	text_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	text = ((const char * *)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Text_as_string(_self, text, text_num);
}

RNA_EXTERN_C bool Text_is_syntax_highlight_supported_func(struct Text *_self)
{
	return ED_text_is_syntax_highlight_supported(_self);
}

static void Text_is_syntax_highlight_supported_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	bool is_syntax_highlight_supported;
	char *_data, *_retdata;
	
	_self = (struct Text *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	is_syntax_highlight_supported = ED_text_is_syntax_highlight_supported(_self);
	*((bool *)_retdata) = is_syntax_highlight_supported;
}

RNA_EXTERN_C void Text_select_set_func(struct Text *_self, int line_start, int char_start, int line_end, int char_end)
{
	rna_Text_select_set(_self, line_start, char_start, line_end, char_end);
}

static void Text_select_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	int line_start;
	int char_start;
	int line_end;
	int char_end;
	char *_data;
	
	_self = (struct Text *)_ptr->data;
	_data = (char *)_parms->data;
	line_start = *((int *)_data);
	_data += 8;
	char_start = *((int *)_data);
	_data += 8;
	line_end = *((int *)_data);
	_data += 8;
	char_end = *((int *)_data);
	
	rna_Text_select_set(_self, line_start, char_start, line_end, char_end);
}

RNA_EXTERN_C void Text_cursor_set_func(struct Text *_self, int line, int character, bool select)
{
	rna_Text_cursor_set(_self, line, character, select);
}

static void Text_cursor_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Text *_self;
	int line;
	int character;
	bool select;
	char *_data;
	
	_self = (struct Text *)_ptr->data;
	_data = (char *)_parms->data;
	line = *((int *)_data);
	_data += 8;
	character = *((int *)_data);
	_data += 8;
	select = *((bool *)_data);
	
	rna_Text_cursor_set(_self, line, character, select);
}

/* Repeated prototypes to detect errors */

void rna_Text_clear(struct Text *_self);
void rna_Text_write(struct Text *_self, const char * text);
void rna_Text_from_string(struct Text *_self, const char * text);
void rna_Text_as_string(struct Text *_self, int *text_num, const char * *text);
bool ED_text_is_syntax_highlight_supported(struct Text *_self);
void rna_Text_select_set(struct Text *_self, int line_start, int char_start, int line_end, int char_end);
void rna_Text_cursor_set(struct Text *_self, int line, int character, bool select);

/* Text Line */
CollectionPropertyRNA rna_TextLine_rna_properties = {
	{(PropertyRNA *)&rna_TextLine_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextLine_rna_properties_begin, TextLine_rna_properties_next, TextLine_rna_properties_end, TextLine_rna_properties_get, nullptr, nullptr, TextLine_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_TextLine_rna_type = {
	{(PropertyRNA *)&rna_TextLine_body, (PropertyRNA *)&rna_TextLine_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextLine_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_TextLine_body = {
	{nullptr, (PropertyRNA *)&rna_TextLine_rna_type,
	-1, "body", 262145, 0, 0, 0, 0, "Line",
	"Text in the line",
	0, "Text",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 218103809, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	TextLine_body_get, TextLine_body_length, TextLine_body_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

StructRNA RNA_TextLine = {
	{(ContainerRNA *)&RNA_Text, (ContainerRNA *)&RNA_Speaker,
	nullptr,
	{(PropertyRNA *)&rna_TextLine_rna_properties, (PropertyRNA *)&rna_TextLine_body}},
	"TextLine", nullptr, nullptr, 516, nullptr, "Text Line",
	"Line of text in a Text data-block",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_TextLine_rna_properties,
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

/* Text */
StringPropertyRNA rna_Text_filepath = {
	{(PropertyRNA *)&rna_Text_is_dirty, nullptr,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Filename of the text file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_filepath_get, Text_filepath_length, Text_filepath_set, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, ""
};

BoolPropertyRNA rna_Text_is_dirty = {
	{(PropertyRNA *)&rna_Text_is_modified, (PropertyRNA *)&rna_Text_filepath,
	-1, "is_dirty", 2, 0, 0, 0, 0, "Dirty",
	"Text file has been edited since last save",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_is_dirty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Text_is_modified = {
	{(PropertyRNA *)&rna_Text_is_in_memory, (PropertyRNA *)&rna_Text_is_dirty,
	-1, "is_modified", 2, 0, 0, 0, 0, "Modified",
	"Text file on disk is different than the one in memory",
	0, "Text",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_is_modified_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Text_is_in_memory = {
	{(PropertyRNA *)&rna_Text_use_module, (PropertyRNA *)&rna_Text_is_modified,
	-1, "is_in_memory", 2, 0, 0, 0, 0, "Memory",
	"Text file is in memory, without a corresponding file on disk",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_is_in_memory_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_Text_use_module = {
	{(PropertyRNA *)&rna_Text_indentation, (PropertyRNA *)&rna_Text_is_in_memory,
	-1, "use_module", 3, 0, 0, 0, 0, "Register",
	"Run this text as a Python script on loading",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_use_module_get, Text_use_module_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static const EnumPropertyItem rna_Text_indentation_items[3] = {
	{0, "TABS", 0, "Tabs", "Indent using tabs"},
	{1024, "SPACES", 0, "Spaces", "Indent using spaces"},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_Text_indentation = {
	{(PropertyRNA *)&rna_Text_lines, (PropertyRNA *)&rna_Text_use_module,
	-1, "indentation", 3, 0, 0, 4, 0, "Indentation",
	"Use tabs or spaces for indentation",
	0, "Text",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Text, flags), (RawPropertyType)0, nullptr},
	Text_indentation_get, Text_indentation_set, nullptr, nullptr, nullptr, rna_Text_indentation_items, 2, 0
};

CollectionPropertyRNA rna_Text_lines = {
	{(PropertyRNA *)&rna_Text_current_line, (PropertyRNA *)&rna_Text_indentation,
	-1, "lines", 0, 0, 0, 0, 0, "Lines",
	"Lines of text",
	0, "Text",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_lines_begin, Text_lines_next, Text_lines_end, Text_lines_get, nullptr, Text_lines_lookup_int, nullptr, nullptr, &RNA_TextLine
};

PointerPropertyRNA rna_Text_current_line = {
	{(PropertyRNA *)&rna_Text_current_character, (PropertyRNA *)&rna_Text_lines,
	-1, "current_line", 8650752, 0, 0, 0, 0, "Current Line",
	"Current line, and start line of selection if one exists",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_current_line_get, nullptr, nullptr, nullptr,&RNA_TextLine
};

IntPropertyRNA rna_Text_current_character = {
	{(PropertyRNA *)&rna_Text_current_line_index, (PropertyRNA *)&rna_Text_current_line,
	-1, "current_character", 3, 0, 0, 0, 0, "Current Character",
	"Index of current character in current line, and also start index of character in selection if one exists",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 221380608, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_current_character_get, Text_current_character_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Text_current_line_index = {
	{(PropertyRNA *)&rna_Text_select_end_line, (PropertyRNA *)&rna_Text_current_character,
	-1, "current_line_index", 3, 0, 0, 0, 0, "Current Line Index",
	"Index of current TextLine in TextLine collection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 221380608, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_current_line_index_get, Text_current_line_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

PointerPropertyRNA rna_Text_select_end_line = {
	{(PropertyRNA *)&rna_Text_select_end_line_index, (PropertyRNA *)&rna_Text_current_line_index,
	-1, "select_end_line", 8650752, 0, 0, 0, 0, "Selection End Line",
	"End line of selection",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_select_end_line_get, nullptr, nullptr, nullptr,&RNA_TextLine
};

IntPropertyRNA rna_Text_select_end_line_index = {
	{(PropertyRNA *)&rna_Text_select_end_character, (PropertyRNA *)&rna_Text_select_end_line,
	-1, "select_end_line_index", 3, 0, 0, 0, 0, "Select End Line Index",
	"Index of last TextLine in selection",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 221380608, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_select_end_line_index_get, Text_select_end_line_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Text_select_end_character = {
	{nullptr, (PropertyRNA *)&rna_Text_select_end_line_index,
	-1, "select_end_character", 3, 0, 0, 0, 0, "Selection End Character",
	"Index of character after end of selection in the selection end line",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_UNSIGNED | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 221380608, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	Text_select_end_character_get, Text_select_end_character_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Text_clear_func = {
	{(FunctionRNA *)&rna_Text_write_func, nullptr,
	nullptr,
	{nullptr, nullptr}},
	"clear", 0, "clear the text block",
	Text_clear_call,
	nullptr
};

StringPropertyRNA rna_Text_write_text = {
	{nullptr, nullptr,
	-1, "text", 262145, 0, 1, 0, 0, "",
	"New text for this data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Text"
};

FunctionRNA rna_Text_write_func = {
	{(FunctionRNA *)&rna_Text_from_string_func, (FunctionRNA *)&rna_Text_clear_func,
	nullptr,
	{(PropertyRNA *)&rna_Text_write_text, (PropertyRNA *)&rna_Text_write_text}},
	"write", 0, "write text at the cursor location and advance to the end of the text block",
	Text_write_call,
	nullptr
};

StringPropertyRNA rna_Text_from_string_text = {
	{nullptr, nullptr,
	-1, "text", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Text"
};

FunctionRNA rna_Text_from_string_func = {
	{(FunctionRNA *)&rna_Text_as_string_func, (FunctionRNA *)&rna_Text_write_func,
	nullptr,
	{(PropertyRNA *)&rna_Text_from_string_text, (PropertyRNA *)&rna_Text_from_string_text}},
	"from_string", 0, "Replace text with this string.",
	Text_from_string_call,
	nullptr
};

StringPropertyRNA rna_Text_as_string_text = {
	{nullptr, nullptr,
	-1, "text", 393217, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Text"
};

FunctionRNA rna_Text_as_string_func = {
	{(FunctionRNA *)&rna_Text_is_syntax_highlight_supported_func, (FunctionRNA *)&rna_Text_from_string_func,
	nullptr,
	{(PropertyRNA *)&rna_Text_as_string_text, (PropertyRNA *)&rna_Text_as_string_text}},
	"as_string", 0, "Return the text as a string",
	Text_as_string_call,
	nullptr
};

BoolPropertyRNA rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported = {
	{nullptr, nullptr,
	-1, "is_syntax_highlight_supported", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Text_is_syntax_highlight_supported_func = {
	{(FunctionRNA *)&rna_Text_select_set_func, (FunctionRNA *)&rna_Text_as_string_func,
	nullptr,
	{(PropertyRNA *)&rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported, (PropertyRNA *)&rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported}},
	"is_syntax_highlight_supported", 0, "Returns True if the editor supports syntax highlighting for the current text datablock",
	Text_is_syntax_highlight_supported_call,
	(PropertyRNA *)&rna_Text_is_syntax_highlight_supported_is_syntax_highlight_supported
};

IntPropertyRNA rna_Text_select_set_line_start = {
	{(PropertyRNA *)&rna_Text_select_set_char_start, nullptr,
	-1, "line_start", 3, 0, 1, 0, 0, "Start Line",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Text_select_set_char_start = {
	{(PropertyRNA *)&rna_Text_select_set_line_end, (PropertyRNA *)&rna_Text_select_set_line_start,
	-1, "char_start", 3, 0, 1, 0, 0, "Start Character",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Text_select_set_line_end = {
	{(PropertyRNA *)&rna_Text_select_set_char_end, (PropertyRNA *)&rna_Text_select_set_char_start,
	-1, "line_end", 3, 0, 1, 0, 0, "End Line",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Text_select_set_char_end = {
	{nullptr, (PropertyRNA *)&rna_Text_select_set_line_end,
	-1, "char_end", 3, 0, 1, 0, 0, "End Character",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, nullptr
};

FunctionRNA rna_Text_select_set_func = {
	{(FunctionRNA *)&rna_Text_cursor_set_func, (FunctionRNA *)&rna_Text_is_syntax_highlight_supported_func,
	nullptr,
	{(PropertyRNA *)&rna_Text_select_set_line_start, (PropertyRNA *)&rna_Text_select_set_char_end}},
	"select_set", 0, "Set selection range by line and character index",
	Text_select_set_call,
	nullptr
};

IntPropertyRNA rna_Text_cursor_set_line = {
	{(PropertyRNA *)&rna_Text_cursor_set_character, nullptr,
	-1, "line", 3, 0, 1, 0, 0, "Line",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

IntPropertyRNA rna_Text_cursor_set_character = {
	{(PropertyRNA *)&rna_Text_cursor_set_select, (PropertyRNA *)&rna_Text_cursor_set_line,
	-1, "character", 3, 0, 0, 0, 0, "Character",
	"",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, nullptr
};

BoolPropertyRNA rna_Text_cursor_set_select = {
	{nullptr, (PropertyRNA *)&rna_Text_cursor_set_character,
	-1, "select", 3, 0, 0, 0, 0, "",
	"Select when moving the cursor",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_Text_cursor_set_func = {
	{nullptr, (FunctionRNA *)&rna_Text_select_set_func,
	nullptr,
	{(PropertyRNA *)&rna_Text_cursor_set_line, (PropertyRNA *)&rna_Text_cursor_set_select}},
	"cursor_set", 0, "Set cursor by line and (optionally) character index",
	Text_cursor_set_call,
	nullptr
};

StructRNA RNA_Text = {
	{(ContainerRNA *)&RNA_TimelineMarker, (ContainerRNA *)&RNA_TextLine,
	nullptr,
	{(PropertyRNA *)&rna_Text_filepath, (PropertyRNA *)&rna_Text_select_end_character}},
	"Text", nullptr, nullptr, 517, nullptr, "Text",
	"Text data-block referencing an external or packed text file",
	"*", 112,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	nullptr,
	rna_ID_refine,
	nullptr,
	nullptr,
	nullptr,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Text_clear_func, (FunctionRNA *)&rna_Text_cursor_set_func}
};

