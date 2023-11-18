
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

#include "rna_main.cc"
#include "rna_main_api.cc"

#ifdef __cplusplus
#  define RNA_EXTERN_C extern "C"
#  define RNA_EXTERN_C_OR_EXTERN extern "C"
#else
#  define RNA_EXTERN_C
#  define RNA_EXTERN_C_OR_EXTERN extern
#endif
/* Auto-generated Functions. */


RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendData_rna_type;
RNA_EXTERN_C StringPropertyRNA rna_BlendData_filepath;
RNA_EXTERN_C BoolPropertyRNA rna_BlendData_is_dirty;
RNA_EXTERN_C BoolPropertyRNA rna_BlendData_is_saved;
RNA_EXTERN_C BoolPropertyRNA rna_BlendData_use_autopack;
RNA_EXTERN_C IntPropertyRNA rna_BlendData_version;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_cameras;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_scenes;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_objects;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_materials;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_node_groups;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_meshes;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_lights;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_libraries;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_screens;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_window_managers;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_images;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_lattices;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_curves;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_metaballs;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_fonts;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_textures;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_brushes;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_worlds;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_collections;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_shape_keys;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_texts;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_speakers;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_sounds;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_armatures;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_actions;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_particles;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_palettes;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_grease_pencils;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_grease_pencils_v3;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_movieclips;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_masks;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_linestyles;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_cache_files;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_paint_curves;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_workspaces;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_lightprobes;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_hair_curves;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_pointclouds;
RNA_EXTERN_C CollectionPropertyRNA rna_BlendData_volumes;


RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataCameras_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataCameras_rna_type;

extern FunctionRNA rna_BlendDataCameras_new_func;
extern StringPropertyRNA rna_BlendDataCameras_new_name;
extern PointerPropertyRNA rna_BlendDataCameras_new_camera;

extern FunctionRNA rna_BlendDataCameras_remove_func;
extern PointerPropertyRNA rna_BlendDataCameras_remove_camera;
extern BoolPropertyRNA rna_BlendDataCameras_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataCameras_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataCameras_remove_do_ui_user;

extern FunctionRNA rna_BlendDataCameras_tag_func;
extern BoolPropertyRNA rna_BlendDataCameras_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataScenes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataScenes_rna_type;

extern FunctionRNA rna_BlendDataScenes_new_func;
extern StringPropertyRNA rna_BlendDataScenes_new_name;
extern PointerPropertyRNA rna_BlendDataScenes_new_scene;

extern FunctionRNA rna_BlendDataScenes_remove_func;
extern PointerPropertyRNA rna_BlendDataScenes_remove_scene;
extern BoolPropertyRNA rna_BlendDataScenes_remove_do_unlink;

extern FunctionRNA rna_BlendDataScenes_tag_func;
extern BoolPropertyRNA rna_BlendDataScenes_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataObjects_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataObjects_rna_type;

extern FunctionRNA rna_BlendDataObjects_new_func;
extern StringPropertyRNA rna_BlendDataObjects_new_name;
extern PointerPropertyRNA rna_BlendDataObjects_new_object_data;
extern PointerPropertyRNA rna_BlendDataObjects_new_object;

extern FunctionRNA rna_BlendDataObjects_remove_func;
extern PointerPropertyRNA rna_BlendDataObjects_remove_object;
extern BoolPropertyRNA rna_BlendDataObjects_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataObjects_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataObjects_remove_do_ui_user;

extern FunctionRNA rna_BlendDataObjects_tag_func;
extern BoolPropertyRNA rna_BlendDataObjects_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataMaterials_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataMaterials_rna_type;

extern FunctionRNA rna_BlendDataMaterials_new_func;
extern StringPropertyRNA rna_BlendDataMaterials_new_name;
extern PointerPropertyRNA rna_BlendDataMaterials_new_material;

extern FunctionRNA rna_BlendDataMaterials_create_gpencil_data_func;
extern PointerPropertyRNA rna_BlendDataMaterials_create_gpencil_data_material;

extern FunctionRNA rna_BlendDataMaterials_remove_gpencil_data_func;
extern PointerPropertyRNA rna_BlendDataMaterials_remove_gpencil_data_material;

extern FunctionRNA rna_BlendDataMaterials_remove_func;
extern PointerPropertyRNA rna_BlendDataMaterials_remove_material;
extern BoolPropertyRNA rna_BlendDataMaterials_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataMaterials_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataMaterials_remove_do_ui_user;

extern FunctionRNA rna_BlendDataMaterials_tag_func;
extern BoolPropertyRNA rna_BlendDataMaterials_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataNodeTrees_rna_type;

extern FunctionRNA rna_BlendDataNodeTrees_new_func;
extern StringPropertyRNA rna_BlendDataNodeTrees_new_name;
extern EnumPropertyRNA rna_BlendDataNodeTrees_new_type;
extern PointerPropertyRNA rna_BlendDataNodeTrees_new_tree;

extern FunctionRNA rna_BlendDataNodeTrees_remove_func;
extern PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree;
extern BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_ui_user;

extern FunctionRNA rna_BlendDataNodeTrees_tag_func;
extern BoolPropertyRNA rna_BlendDataNodeTrees_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataMeshes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataMeshes_rna_type;

extern FunctionRNA rna_BlendDataMeshes_new_func;
extern StringPropertyRNA rna_BlendDataMeshes_new_name;
extern PointerPropertyRNA rna_BlendDataMeshes_new_mesh;

extern FunctionRNA rna_BlendDataMeshes_new_from_object_func;
extern PointerPropertyRNA rna_BlendDataMeshes_new_from_object_object;
extern BoolPropertyRNA rna_BlendDataMeshes_new_from_object_preserve_all_data_layers;
extern PointerPropertyRNA rna_BlendDataMeshes_new_from_object_depsgraph;
extern PointerPropertyRNA rna_BlendDataMeshes_new_from_object_mesh;

extern FunctionRNA rna_BlendDataMeshes_remove_func;
extern PointerPropertyRNA rna_BlendDataMeshes_remove_mesh;
extern BoolPropertyRNA rna_BlendDataMeshes_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataMeshes_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataMeshes_remove_do_ui_user;

extern FunctionRNA rna_BlendDataMeshes_tag_func;
extern BoolPropertyRNA rna_BlendDataMeshes_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataLights_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataLights_rna_type;

extern FunctionRNA rna_BlendDataLights_new_func;
extern StringPropertyRNA rna_BlendDataLights_new_name;
extern EnumPropertyRNA rna_BlendDataLights_new_type;
extern PointerPropertyRNA rna_BlendDataLights_new_light;

extern FunctionRNA rna_BlendDataLights_remove_func;
extern PointerPropertyRNA rna_BlendDataLights_remove_light;
extern BoolPropertyRNA rna_BlendDataLights_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataLights_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataLights_remove_do_ui_user;

extern FunctionRNA rna_BlendDataLights_tag_func;
extern BoolPropertyRNA rna_BlendDataLights_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataLibraries_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataLibraries_rna_type;

extern FunctionRNA rna_BlendDataLibraries_tag_func;
extern BoolPropertyRNA rna_BlendDataLibraries_tag_value;

extern FunctionRNA rna_BlendDataLibraries_remove_func;
extern PointerPropertyRNA rna_BlendDataLibraries_remove_library;
extern BoolPropertyRNA rna_BlendDataLibraries_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataLibraries_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataLibraries_remove_do_ui_user;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataScreens_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataScreens_rna_type;

extern FunctionRNA rna_BlendDataScreens_tag_func;
extern BoolPropertyRNA rna_BlendDataScreens_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataWindowManagers_rna_type;

extern FunctionRNA rna_BlendDataWindowManagers_tag_func;
extern BoolPropertyRNA rna_BlendDataWindowManagers_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataImages_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataImages_rna_type;

extern FunctionRNA rna_BlendDataImages_new_func;
extern StringPropertyRNA rna_BlendDataImages_new_name;
extern IntPropertyRNA rna_BlendDataImages_new_width;
extern IntPropertyRNA rna_BlendDataImages_new_height;
extern BoolPropertyRNA rna_BlendDataImages_new_alpha;
extern BoolPropertyRNA rna_BlendDataImages_new_float_buffer;
extern BoolPropertyRNA rna_BlendDataImages_new_stereo3d;
extern BoolPropertyRNA rna_BlendDataImages_new_is_data;
extern BoolPropertyRNA rna_BlendDataImages_new_tiled;
extern PointerPropertyRNA rna_BlendDataImages_new_image;

extern FunctionRNA rna_BlendDataImages_load_func;
extern StringPropertyRNA rna_BlendDataImages_load_filepath;
extern BoolPropertyRNA rna_BlendDataImages_load_check_existing;
extern PointerPropertyRNA rna_BlendDataImages_load_image;

extern FunctionRNA rna_BlendDataImages_remove_func;
extern PointerPropertyRNA rna_BlendDataImages_remove_image;
extern BoolPropertyRNA rna_BlendDataImages_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataImages_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataImages_remove_do_ui_user;

extern FunctionRNA rna_BlendDataImages_tag_func;
extern BoolPropertyRNA rna_BlendDataImages_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataLattices_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataLattices_rna_type;

extern FunctionRNA rna_BlendDataLattices_new_func;
extern StringPropertyRNA rna_BlendDataLattices_new_name;
extern PointerPropertyRNA rna_BlendDataLattices_new_lattice;

extern FunctionRNA rna_BlendDataLattices_remove_func;
extern PointerPropertyRNA rna_BlendDataLattices_remove_lattice;
extern BoolPropertyRNA rna_BlendDataLattices_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataLattices_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataLattices_remove_do_ui_user;

extern FunctionRNA rna_BlendDataLattices_tag_func;
extern BoolPropertyRNA rna_BlendDataLattices_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataCurves_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataCurves_rna_type;

extern FunctionRNA rna_BlendDataCurves_new_func;
extern StringPropertyRNA rna_BlendDataCurves_new_name;
extern EnumPropertyRNA rna_BlendDataCurves_new_type;
extern PointerPropertyRNA rna_BlendDataCurves_new_curve;

extern FunctionRNA rna_BlendDataCurves_remove_func;
extern PointerPropertyRNA rna_BlendDataCurves_remove_curve;
extern BoolPropertyRNA rna_BlendDataCurves_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataCurves_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataCurves_remove_do_ui_user;

extern FunctionRNA rna_BlendDataCurves_tag_func;
extern BoolPropertyRNA rna_BlendDataCurves_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataMetaBalls_rna_type;

extern FunctionRNA rna_BlendDataMetaBalls_new_func;
extern StringPropertyRNA rna_BlendDataMetaBalls_new_name;
extern PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball;

extern FunctionRNA rna_BlendDataMetaBalls_remove_func;
extern PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball;
extern BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_ui_user;

extern FunctionRNA rna_BlendDataMetaBalls_tag_func;
extern BoolPropertyRNA rna_BlendDataMetaBalls_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataFonts_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataFonts_rna_type;

extern FunctionRNA rna_BlendDataFonts_load_func;
extern StringPropertyRNA rna_BlendDataFonts_load_filepath;
extern BoolPropertyRNA rna_BlendDataFonts_load_check_existing;
extern PointerPropertyRNA rna_BlendDataFonts_load_vfont;

extern FunctionRNA rna_BlendDataFonts_remove_func;
extern PointerPropertyRNA rna_BlendDataFonts_remove_vfont;
extern BoolPropertyRNA rna_BlendDataFonts_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataFonts_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataFonts_remove_do_ui_user;

extern FunctionRNA rna_BlendDataFonts_tag_func;
extern BoolPropertyRNA rna_BlendDataFonts_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataTextures_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataTextures_rna_type;

extern FunctionRNA rna_BlendDataTextures_new_func;
extern StringPropertyRNA rna_BlendDataTextures_new_name;
extern EnumPropertyRNA rna_BlendDataTextures_new_type;
extern PointerPropertyRNA rna_BlendDataTextures_new_texture;

extern FunctionRNA rna_BlendDataTextures_remove_func;
extern PointerPropertyRNA rna_BlendDataTextures_remove_texture;
extern BoolPropertyRNA rna_BlendDataTextures_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataTextures_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataTextures_remove_do_ui_user;

extern FunctionRNA rna_BlendDataTextures_tag_func;
extern BoolPropertyRNA rna_BlendDataTextures_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataBrushes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataBrushes_rna_type;

extern FunctionRNA rna_BlendDataBrushes_new_func;
extern StringPropertyRNA rna_BlendDataBrushes_new_name;
extern EnumPropertyRNA rna_BlendDataBrushes_new_mode;
extern PointerPropertyRNA rna_BlendDataBrushes_new_brush;

extern FunctionRNA rna_BlendDataBrushes_remove_func;
extern PointerPropertyRNA rna_BlendDataBrushes_remove_brush;
extern BoolPropertyRNA rna_BlendDataBrushes_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataBrushes_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataBrushes_remove_do_ui_user;

extern FunctionRNA rna_BlendDataBrushes_tag_func;
extern BoolPropertyRNA rna_BlendDataBrushes_tag_value;

extern FunctionRNA rna_BlendDataBrushes_create_gpencil_data_func;
extern PointerPropertyRNA rna_BlendDataBrushes_create_gpencil_data_brush;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataWorlds_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataWorlds_rna_type;

extern FunctionRNA rna_BlendDataWorlds_new_func;
extern StringPropertyRNA rna_BlendDataWorlds_new_name;
extern PointerPropertyRNA rna_BlendDataWorlds_new_world;

extern FunctionRNA rna_BlendDataWorlds_remove_func;
extern PointerPropertyRNA rna_BlendDataWorlds_remove_world;
extern BoolPropertyRNA rna_BlendDataWorlds_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataWorlds_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataWorlds_remove_do_ui_user;

extern FunctionRNA rna_BlendDataWorlds_tag_func;
extern BoolPropertyRNA rna_BlendDataWorlds_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataCollections_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataCollections_rna_type;

extern FunctionRNA rna_BlendDataCollections_new_func;
extern StringPropertyRNA rna_BlendDataCollections_new_name;
extern PointerPropertyRNA rna_BlendDataCollections_new_collection;

extern FunctionRNA rna_BlendDataCollections_remove_func;
extern PointerPropertyRNA rna_BlendDataCollections_remove_collection;
extern BoolPropertyRNA rna_BlendDataCollections_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataCollections_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataCollections_remove_do_ui_user;

extern FunctionRNA rna_BlendDataCollections_tag_func;
extern BoolPropertyRNA rna_BlendDataCollections_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataTexts_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataTexts_rna_type;

extern FunctionRNA rna_BlendDataTexts_new_func;
extern StringPropertyRNA rna_BlendDataTexts_new_name;
extern PointerPropertyRNA rna_BlendDataTexts_new_text;

extern FunctionRNA rna_BlendDataTexts_remove_func;
extern PointerPropertyRNA rna_BlendDataTexts_remove_text;
extern BoolPropertyRNA rna_BlendDataTexts_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataTexts_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataTexts_remove_do_ui_user;

extern FunctionRNA rna_BlendDataTexts_load_func;
extern StringPropertyRNA rna_BlendDataTexts_load_filepath;
extern BoolPropertyRNA rna_BlendDataTexts_load_internal;
extern PointerPropertyRNA rna_BlendDataTexts_load_text;

extern FunctionRNA rna_BlendDataTexts_tag_func;
extern BoolPropertyRNA rna_BlendDataTexts_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataSpeakers_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataSpeakers_rna_type;

extern FunctionRNA rna_BlendDataSpeakers_new_func;
extern StringPropertyRNA rna_BlendDataSpeakers_new_name;
extern PointerPropertyRNA rna_BlendDataSpeakers_new_speaker;

extern FunctionRNA rna_BlendDataSpeakers_remove_func;
extern PointerPropertyRNA rna_BlendDataSpeakers_remove_speaker;
extern BoolPropertyRNA rna_BlendDataSpeakers_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataSpeakers_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataSpeakers_remove_do_ui_user;

extern FunctionRNA rna_BlendDataSpeakers_tag_func;
extern BoolPropertyRNA rna_BlendDataSpeakers_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataSounds_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataSounds_rna_type;

extern FunctionRNA rna_BlendDataSounds_load_func;
extern StringPropertyRNA rna_BlendDataSounds_load_filepath;
extern BoolPropertyRNA rna_BlendDataSounds_load_check_existing;
extern PointerPropertyRNA rna_BlendDataSounds_load_sound;

extern FunctionRNA rna_BlendDataSounds_remove_func;
extern PointerPropertyRNA rna_BlendDataSounds_remove_sound;
extern BoolPropertyRNA rna_BlendDataSounds_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataSounds_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataSounds_remove_do_ui_user;

extern FunctionRNA rna_BlendDataSounds_tag_func;
extern BoolPropertyRNA rna_BlendDataSounds_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataArmatures_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataArmatures_rna_type;

extern FunctionRNA rna_BlendDataArmatures_new_func;
extern StringPropertyRNA rna_BlendDataArmatures_new_name;
extern PointerPropertyRNA rna_BlendDataArmatures_new_armature;

extern FunctionRNA rna_BlendDataArmatures_remove_func;
extern PointerPropertyRNA rna_BlendDataArmatures_remove_armature;
extern BoolPropertyRNA rna_BlendDataArmatures_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataArmatures_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataArmatures_remove_do_ui_user;

extern FunctionRNA rna_BlendDataArmatures_tag_func;
extern BoolPropertyRNA rna_BlendDataArmatures_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataActions_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataActions_rna_type;

extern FunctionRNA rna_BlendDataActions_new_func;
extern StringPropertyRNA rna_BlendDataActions_new_name;
extern PointerPropertyRNA rna_BlendDataActions_new_action;

extern FunctionRNA rna_BlendDataActions_remove_func;
extern PointerPropertyRNA rna_BlendDataActions_remove_action;
extern BoolPropertyRNA rna_BlendDataActions_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataActions_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataActions_remove_do_ui_user;

extern FunctionRNA rna_BlendDataActions_tag_func;
extern BoolPropertyRNA rna_BlendDataActions_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataParticles_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataParticles_rna_type;

extern FunctionRNA rna_BlendDataParticles_new_func;
extern StringPropertyRNA rna_BlendDataParticles_new_name;
extern PointerPropertyRNA rna_BlendDataParticles_new_particle;

extern FunctionRNA rna_BlendDataParticles_remove_func;
extern PointerPropertyRNA rna_BlendDataParticles_remove_particle;
extern BoolPropertyRNA rna_BlendDataParticles_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataParticles_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataParticles_remove_do_ui_user;

extern FunctionRNA rna_BlendDataParticles_tag_func;
extern BoolPropertyRNA rna_BlendDataParticles_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataPalettes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataPalettes_rna_type;

extern FunctionRNA rna_BlendDataPalettes_new_func;
extern StringPropertyRNA rna_BlendDataPalettes_new_name;
extern PointerPropertyRNA rna_BlendDataPalettes_new_palette;

extern FunctionRNA rna_BlendDataPalettes_remove_func;
extern PointerPropertyRNA rna_BlendDataPalettes_remove_palette;
extern BoolPropertyRNA rna_BlendDataPalettes_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataPalettes_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataPalettes_remove_do_ui_user;

extern FunctionRNA rna_BlendDataPalettes_tag_func;
extern BoolPropertyRNA rna_BlendDataPalettes_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataGreasePencils_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataGreasePencils_rna_type;

extern FunctionRNA rna_BlendDataGreasePencils_tag_func;
extern BoolPropertyRNA rna_BlendDataGreasePencils_tag_value;

extern FunctionRNA rna_BlendDataGreasePencils_new_func;
extern StringPropertyRNA rna_BlendDataGreasePencils_new_name;
extern PointerPropertyRNA rna_BlendDataGreasePencils_new_grease_pencil;

extern FunctionRNA rna_BlendDataGreasePencils_remove_func;
extern PointerPropertyRNA rna_BlendDataGreasePencils_remove_grease_pencil;
extern BoolPropertyRNA rna_BlendDataGreasePencils_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataGreasePencils_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataGreasePencils_remove_do_ui_user;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataGreasePencilsV3_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataGreasePencilsV3_rna_type;


RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataMovieClips_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataMovieClips_rna_type;

extern FunctionRNA rna_BlendDataMovieClips_tag_func;
extern BoolPropertyRNA rna_BlendDataMovieClips_tag_value;

extern FunctionRNA rna_BlendDataMovieClips_remove_func;
extern PointerPropertyRNA rna_BlendDataMovieClips_remove_clip;
extern BoolPropertyRNA rna_BlendDataMovieClips_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataMovieClips_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataMovieClips_remove_do_ui_user;

extern FunctionRNA rna_BlendDataMovieClips_load_func;
extern StringPropertyRNA rna_BlendDataMovieClips_load_filepath;
extern BoolPropertyRNA rna_BlendDataMovieClips_load_check_existing;
extern PointerPropertyRNA rna_BlendDataMovieClips_load_clip;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataMasks_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataMasks_rna_type;

extern FunctionRNA rna_BlendDataMasks_tag_func;
extern BoolPropertyRNA rna_BlendDataMasks_tag_value;

extern FunctionRNA rna_BlendDataMasks_new_func;
extern StringPropertyRNA rna_BlendDataMasks_new_name;
extern PointerPropertyRNA rna_BlendDataMasks_new_mask;

extern FunctionRNA rna_BlendDataMasks_remove_func;
extern PointerPropertyRNA rna_BlendDataMasks_remove_mask;
extern BoolPropertyRNA rna_BlendDataMasks_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataMasks_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataMasks_remove_do_ui_user;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataLineStyles_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataLineStyles_rna_type;

extern FunctionRNA rna_BlendDataLineStyles_tag_func;
extern BoolPropertyRNA rna_BlendDataLineStyles_tag_value;

extern FunctionRNA rna_BlendDataLineStyles_new_func;
extern StringPropertyRNA rna_BlendDataLineStyles_new_name;
extern PointerPropertyRNA rna_BlendDataLineStyles_new_linestyle;

extern FunctionRNA rna_BlendDataLineStyles_remove_func;
extern PointerPropertyRNA rna_BlendDataLineStyles_remove_linestyle;
extern BoolPropertyRNA rna_BlendDataLineStyles_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataLineStyles_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataLineStyles_remove_do_ui_user;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataCacheFiles_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataCacheFiles_rna_type;

extern FunctionRNA rna_BlendDataCacheFiles_tag_func;
extern BoolPropertyRNA rna_BlendDataCacheFiles_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataPaintCurves_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataPaintCurves_rna_type;

extern FunctionRNA rna_BlendDataPaintCurves_tag_func;
extern BoolPropertyRNA rna_BlendDataPaintCurves_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataWorkSpaces_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataWorkSpaces_rna_type;

extern FunctionRNA rna_BlendDataWorkSpaces_tag_func;
extern BoolPropertyRNA rna_BlendDataWorkSpaces_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataProbes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataProbes_rna_type;

extern FunctionRNA rna_BlendDataProbes_new_func;
extern StringPropertyRNA rna_BlendDataProbes_new_name;
extern EnumPropertyRNA rna_BlendDataProbes_new_type;
extern PointerPropertyRNA rna_BlendDataProbes_new_lightprobe;

extern FunctionRNA rna_BlendDataProbes_remove_func;
extern PointerPropertyRNA rna_BlendDataProbes_remove_lightprobe;
extern BoolPropertyRNA rna_BlendDataProbes_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataProbes_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataProbes_remove_do_ui_user;

extern FunctionRNA rna_BlendDataProbes_tag_func;
extern BoolPropertyRNA rna_BlendDataProbes_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataHairCurves_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataHairCurves_rna_type;

extern FunctionRNA rna_BlendDataHairCurves_new_func;
extern StringPropertyRNA rna_BlendDataHairCurves_new_name;
extern PointerPropertyRNA rna_BlendDataHairCurves_new_curves;

extern FunctionRNA rna_BlendDataHairCurves_remove_func;
extern PointerPropertyRNA rna_BlendDataHairCurves_remove_curves;
extern BoolPropertyRNA rna_BlendDataHairCurves_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataHairCurves_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataHairCurves_remove_do_ui_user;

extern FunctionRNA rna_BlendDataHairCurves_tag_func;
extern BoolPropertyRNA rna_BlendDataHairCurves_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataPointClouds_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataPointClouds_rna_type;

extern FunctionRNA rna_BlendDataPointClouds_new_func;
extern StringPropertyRNA rna_BlendDataPointClouds_new_name;
extern PointerPropertyRNA rna_BlendDataPointClouds_new_pointcloud;

extern FunctionRNA rna_BlendDataPointClouds_remove_func;
extern PointerPropertyRNA rna_BlendDataPointClouds_remove_pointcloud;
extern BoolPropertyRNA rna_BlendDataPointClouds_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataPointClouds_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataPointClouds_remove_do_ui_user;

extern FunctionRNA rna_BlendDataPointClouds_tag_func;
extern BoolPropertyRNA rna_BlendDataPointClouds_tag_value;



RNA_EXTERN_C CollectionPropertyRNA rna_BlendDataVolumes_rna_properties;
RNA_EXTERN_C PointerPropertyRNA rna_BlendDataVolumes_rna_type;

extern FunctionRNA rna_BlendDataVolumes_new_func;
extern StringPropertyRNA rna_BlendDataVolumes_new_name;
extern PointerPropertyRNA rna_BlendDataVolumes_new_volume;

extern FunctionRNA rna_BlendDataVolumes_remove_func;
extern PointerPropertyRNA rna_BlendDataVolumes_remove_volume;
extern BoolPropertyRNA rna_BlendDataVolumes_remove_do_unlink;
extern BoolPropertyRNA rna_BlendDataVolumes_remove_do_id_user;
extern BoolPropertyRNA rna_BlendDataVolumes_remove_do_ui_user;

extern FunctionRNA rna_BlendDataVolumes_tag_func;
extern BoolPropertyRNA rna_BlendDataVolumes_tag_value;


static PointerRNA BlendData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

RNA_EXTERN_C void BlendData_filepath_get(PointerRNA *ptr, char *value)
{
    rna_Main_filepath_get(ptr, value);
}

RNA_EXTERN_C int BlendData_filepath_length(PointerRNA *ptr)
{
    return rna_Main_filepath_length(ptr);
}

RNA_EXTERN_C bool BlendData_is_dirty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Main_is_dirty_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BlendData_is_saved_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Main_is_saved_get;
    return fn(ptr);
}

RNA_EXTERN_C bool BlendData_use_autopack_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Main_use_autopack_get;
    return fn(ptr);
}

RNA_EXTERN_C void BlendData_use_autopack_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Main_use_autopack_set;
    fn(ptr, value);
}

RNA_EXTERN_C void BlendData_version_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Main_version_get;
    fn(ptr, values);
}

static PointerRNA BlendData_cameras_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Camera, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_cameras;

    rna_Main_cameras_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_cameras_get(iter);
    }
}

RNA_EXTERN_C void BlendData_cameras_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_cameras_get(iter);
    }
}

RNA_EXTERN_C void BlendData_cameras_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_scenes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Scene, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_scenes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_scenes;

    rna_Main_scenes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_scenes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_scenes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_scenes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_scenes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_objects_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Object, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_objects;

    rna_Main_objects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_objects_get(iter);
    }
}

RNA_EXTERN_C void BlendData_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_objects_get(iter);
    }
}

RNA_EXTERN_C void BlendData_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_materials;

    rna_Main_materials_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_materials_get(iter);
    }
}

RNA_EXTERN_C void BlendData_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_materials_get(iter);
    }
}

RNA_EXTERN_C void BlendData_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_node_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NodeTree, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_node_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_node_groups;

    rna_Main_nodetrees_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_node_groups_get(iter);
    }
}

RNA_EXTERN_C void BlendData_node_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_node_groups_get(iter);
    }
}

RNA_EXTERN_C void BlendData_node_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_meshes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Mesh, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_meshes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_meshes;

    rna_Main_meshes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_meshes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_meshes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_meshes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_meshes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lights_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Light, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_lights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_lights;

    rna_Main_lights_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_lights_get(iter);
    }
}

RNA_EXTERN_C void BlendData_lights_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_lights_get(iter);
    }
}

RNA_EXTERN_C void BlendData_lights_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_libraries_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Library, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_libraries;

    rna_Main_libraries_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_libraries_get(iter);
    }
}

RNA_EXTERN_C void BlendData_libraries_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_libraries_get(iter);
    }
}

RNA_EXTERN_C void BlendData_libraries_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_screens_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Screen, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_screens;

    rna_Main_screens_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_screens_get(iter);
    }
}

RNA_EXTERN_C void BlendData_screens_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_screens_get(iter);
    }
}

RNA_EXTERN_C void BlendData_screens_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_window_managers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_WindowManager, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_window_managers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_window_managers;

    rna_Main_wm_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_window_managers_get(iter);
    }
}

RNA_EXTERN_C void BlendData_window_managers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_window_managers_get(iter);
    }
}

RNA_EXTERN_C void BlendData_window_managers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_images_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Image, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_images;

    rna_Main_images_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_images_get(iter);
    }
}

RNA_EXTERN_C void BlendData_images_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_images_get(iter);
    }
}

RNA_EXTERN_C void BlendData_images_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lattices_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Lattice, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_lattices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_lattices;

    rna_Main_lattices_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_lattices_get(iter);
    }
}

RNA_EXTERN_C void BlendData_lattices_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_lattices_get(iter);
    }
}

RNA_EXTERN_C void BlendData_lattices_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_curves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Curve, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_curves;

    rna_Main_curves_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_curves_get(iter);
    }
}

RNA_EXTERN_C void BlendData_curves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_curves_get(iter);
    }
}

RNA_EXTERN_C void BlendData_curves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_metaballs_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MetaBall, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_metaballs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_metaballs;

    rna_Main_metaballs_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_metaballs_get(iter);
    }
}

RNA_EXTERN_C void BlendData_metaballs_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_metaballs_get(iter);
    }
}

RNA_EXTERN_C void BlendData_metaballs_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_fonts_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_VectorFont, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_fonts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_fonts;

    rna_Main_fonts_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_fonts_get(iter);
    }
}

RNA_EXTERN_C void BlendData_fonts_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_fonts_get(iter);
    }
}

RNA_EXTERN_C void BlendData_fonts_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_textures_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Texture, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_textures;

    rna_Main_textures_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_textures_get(iter);
    }
}

RNA_EXTERN_C void BlendData_textures_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_textures_get(iter);
    }
}

RNA_EXTERN_C void BlendData_textures_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_brushes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Brush, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_brushes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_brushes;

    rna_Main_brushes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_brushes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_brushes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_brushes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_brushes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_worlds_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_World, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_worlds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_worlds;

    rna_Main_worlds_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_worlds_get(iter);
    }
}

RNA_EXTERN_C void BlendData_worlds_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_worlds_get(iter);
    }
}

RNA_EXTERN_C void BlendData_worlds_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_collections_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Collection, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_collections;

    rna_Main_collections_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_collections_get(iter);
    }
}

RNA_EXTERN_C void BlendData_collections_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_collections_get(iter);
    }
}

RNA_EXTERN_C void BlendData_collections_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_shape_keys_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Key, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_shape_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_shape_keys;

    rna_Main_shapekeys_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_shape_keys_get(iter);
    }
}

RNA_EXTERN_C void BlendData_shape_keys_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_shape_keys_get(iter);
    }
}

RNA_EXTERN_C void BlendData_shape_keys_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_texts_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Text, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_texts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_texts;

    rna_Main_texts_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_texts_get(iter);
    }
}

RNA_EXTERN_C void BlendData_texts_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_texts_get(iter);
    }
}

RNA_EXTERN_C void BlendData_texts_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_speakers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Speaker, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_speakers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_speakers;

    rna_Main_speakers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_speakers_get(iter);
    }
}

RNA_EXTERN_C void BlendData_speakers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_speakers_get(iter);
    }
}

RNA_EXTERN_C void BlendData_speakers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_sounds_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Sound, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_sounds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_sounds;

    rna_Main_sounds_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_sounds_get(iter);
    }
}

RNA_EXTERN_C void BlendData_sounds_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_sounds_get(iter);
    }
}

RNA_EXTERN_C void BlendData_sounds_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_armatures_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Armature, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_armatures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_armatures;

    rna_Main_armatures_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_armatures_get(iter);
    }
}

RNA_EXTERN_C void BlendData_armatures_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_armatures_get(iter);
    }
}

RNA_EXTERN_C void BlendData_armatures_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_actions_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Action, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_actions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_actions;

    rna_Main_actions_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_actions_get(iter);
    }
}

RNA_EXTERN_C void BlendData_actions_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_actions_get(iter);
    }
}

RNA_EXTERN_C void BlendData_actions_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_particles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSettings, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_particles;

    rna_Main_particles_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_particles_get(iter);
    }
}

RNA_EXTERN_C void BlendData_particles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_particles_get(iter);
    }
}

RNA_EXTERN_C void BlendData_particles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_palettes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Palette, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_palettes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_palettes;

    rna_Main_palettes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_palettes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_palettes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_palettes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_palettes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_grease_pencils_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GreasePencil, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_grease_pencils_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_grease_pencils;

    rna_Main_gpencils_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_grease_pencils_get(iter);
    }
}

RNA_EXTERN_C void BlendData_grease_pencils_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_grease_pencils_get(iter);
    }
}

RNA_EXTERN_C void BlendData_grease_pencils_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_grease_pencils_v3_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GreasePencilv3, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_grease_pencils_v3_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_grease_pencils_v3;

    rna_Main_grease_pencils_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_grease_pencils_v3_get(iter);
    }
}

RNA_EXTERN_C void BlendData_grease_pencils_v3_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_grease_pencils_v3_get(iter);
    }
}

RNA_EXTERN_C void BlendData_grease_pencils_v3_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_movieclips_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieClip, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_movieclips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_movieclips;

    rna_Main_movieclips_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_movieclips_get(iter);
    }
}

RNA_EXTERN_C void BlendData_movieclips_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_movieclips_get(iter);
    }
}

RNA_EXTERN_C void BlendData_movieclips_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_masks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Mask, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_masks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_masks;

    rna_Main_masks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_masks_get(iter);
    }
}

RNA_EXTERN_C void BlendData_masks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_masks_get(iter);
    }
}

RNA_EXTERN_C void BlendData_masks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_linestyles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FreestyleLineStyle, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_linestyles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_linestyles;

    rna_Main_linestyles_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_linestyles_get(iter);
    }
}

RNA_EXTERN_C void BlendData_linestyles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_linestyles_get(iter);
    }
}

RNA_EXTERN_C void BlendData_linestyles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_cache_files_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CacheFile, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_cache_files_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_cache_files;

    rna_Main_cachefiles_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_cache_files_get(iter);
    }
}

RNA_EXTERN_C void BlendData_cache_files_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_cache_files_get(iter);
    }
}

RNA_EXTERN_C void BlendData_cache_files_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_paint_curves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PaintCurve, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_paint_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_paint_curves;

    rna_Main_paintcurves_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_paint_curves_get(iter);
    }
}

RNA_EXTERN_C void BlendData_paint_curves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_paint_curves_get(iter);
    }
}

RNA_EXTERN_C void BlendData_paint_curves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_workspaces_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_WorkSpace, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_workspaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_workspaces;

    rna_Main_workspaces_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_workspaces_get(iter);
    }
}

RNA_EXTERN_C void BlendData_workspaces_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_workspaces_get(iter);
    }
}

RNA_EXTERN_C void BlendData_workspaces_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lightprobes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_LightProbe, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_lightprobes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_lightprobes;

    rna_Main_lightprobes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_lightprobes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_lightprobes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_lightprobes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_lightprobes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_hair_curves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Curves, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_hair_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_hair_curves;

    rna_Main_hair_curves_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_hair_curves_get(iter);
    }
}

RNA_EXTERN_C void BlendData_hair_curves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_hair_curves_get(iter);
    }
}

RNA_EXTERN_C void BlendData_hair_curves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_pointclouds_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PointCloud, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_pointclouds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_pointclouds;

    rna_Main_pointclouds_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_pointclouds_get(iter);
    }
}

RNA_EXTERN_C void BlendData_pointclouds_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_pointclouds_get(iter);
    }
}

RNA_EXTERN_C void BlendData_pointclouds_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_volumes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Volume, rna_iterator_listbase_get(iter));
}

RNA_EXTERN_C void BlendData_volumes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendData_volumes;

    rna_Main_volumes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_volumes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_volumes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BlendData_volumes_get(iter);
    }
}

RNA_EXTERN_C void BlendData_volumes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA BlendDataCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataCameras_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCameras_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCameras_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataCameras_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataCameras_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataScenes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataScenes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataScenes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataScenes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataScenes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataScenes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataScenes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataScenes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataScenes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataObjects_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataObjects_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataObjects_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataMaterials_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMaterials_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMaterials_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataMaterials_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataMaterials_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataNodeTrees_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataNodeTrees_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataNodeTrees_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataNodeTrees_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataNodeTrees_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataNodeTrees_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataNodeTrees_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataNodeTrees_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMeshes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataMeshes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataMeshes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMeshes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMeshes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMeshes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMeshes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataMeshes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataMeshes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLights_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataLights_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataLights_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLights_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLights_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLights_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLights_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataLights_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataLights_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLibraries_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataLibraries_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataLibraries_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLibraries_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLibraries_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLibraries_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLibraries_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataLibraries_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataLibraries_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataScreens_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataScreens_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataScreens_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataScreens_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataScreens_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataScreens_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataScreens_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataScreens_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataScreens_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataWindowManagers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataWindowManagers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataWindowManagers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataWindowManagers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataWindowManagers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataWindowManagers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataWindowManagers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataWindowManagers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataImages_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataImages_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataImages_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataImages_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataImages_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataImages_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataImages_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLattices_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataLattices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataLattices_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLattices_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLattices_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLattices_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLattices_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataLattices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataLattices_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMetaBalls_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataMetaBalls_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMetaBalls_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMetaBalls_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMetaBalls_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMetaBalls_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataMetaBalls_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataMetaBalls_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataFonts_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataFonts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataFonts_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataFonts_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataFonts_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataFonts_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataFonts_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataFonts_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataFonts_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataTextures_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataTextures_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataTextures_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataTextures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataTextures_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataBrushes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataBrushes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataBrushes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataBrushes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataBrushes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataBrushes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataBrushes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataBrushes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataBrushes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataWorlds_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataWorlds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataWorlds_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataWorlds_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataWorlds_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataWorlds_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataWorlds_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataWorlds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataWorlds_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataCollections_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataCollections_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataCollections_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCollections_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCollections_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCollections_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCollections_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataCollections_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataCollections_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataTexts_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataTexts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataTexts_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataTexts_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataTexts_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataTexts_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataTexts_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataTexts_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataTexts_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataSpeakers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataSpeakers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataSpeakers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataSpeakers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataSpeakers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataSpeakers_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataSpeakers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataSpeakers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataSpeakers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataSounds_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataSounds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataSounds_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataSounds_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataSounds_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataSounds_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataSounds_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataSounds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataSounds_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataArmatures_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataArmatures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataArmatures_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataArmatures_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataArmatures_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataArmatures_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataArmatures_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataArmatures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataArmatures_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataActions_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataActions_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataActions_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataActions_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataActions_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataActions_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataActions_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataActions_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataActions_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataParticles_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataParticles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataParticles_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataParticles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataParticles_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataParticles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataParticles_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataParticles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataParticles_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataPalettes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataPalettes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataPalettes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataPalettes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataPalettes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataPalettes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataPalettes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataPalettes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataPalettes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataGreasePencils_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataGreasePencils_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataGreasePencils_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataGreasePencils_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataGreasePencils_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataGreasePencils_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataGreasePencils_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataGreasePencils_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataGreasePencilsV3_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataGreasePencilsV3_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataGreasePencilsV3_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataGreasePencilsV3_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataGreasePencilsV3_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataGreasePencilsV3_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataGreasePencilsV3_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataGreasePencilsV3_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataGreasePencilsV3_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMovieClips_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataMovieClips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataMovieClips_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMovieClips_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMovieClips_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMovieClips_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMovieClips_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataMovieClips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataMovieClips_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMasks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataMasks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataMasks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMasks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMasks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMasks_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataMasks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataMasks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataMasks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLineStyles_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataLineStyles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataLineStyles_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLineStyles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLineStyles_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLineStyles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataLineStyles_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataLineStyles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataLineStyles_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataCacheFiles_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataCacheFiles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataCacheFiles_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCacheFiles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCacheFiles_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCacheFiles_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataCacheFiles_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataCacheFiles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataCacheFiles_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataPaintCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataPaintCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataPaintCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataPaintCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataPaintCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataPaintCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataPaintCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataPaintCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataPaintCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataWorkSpaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataWorkSpaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataWorkSpaces_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataWorkSpaces_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataWorkSpaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataWorkSpaces_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataWorkSpaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataWorkSpaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataWorkSpaces_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataProbes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataProbes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataProbes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataProbes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataProbes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataProbes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataProbes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataProbes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataProbes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataHairCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataHairCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataHairCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataHairCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataHairCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataHairCurves_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataHairCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataHairCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataHairCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataPointClouds_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataPointClouds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataPointClouds_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataPointClouds_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataPointClouds_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataPointClouds_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataPointClouds_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataPointClouds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataPointClouds_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataVolumes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

RNA_EXTERN_C void BlendDataVolumes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BlendDataVolumes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataVolumes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataVolumes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BlendDataVolumes_rna_properties_get(iter);
    }
}

RNA_EXTERN_C void BlendDataVolumes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

RNA_EXTERN_C int BlendDataVolumes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

RNA_EXTERN_C PointerRNA BlendDataVolumes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


RNA_EXTERN_C struct Camera *BlendDataCameras_new_func(struct Main *_self, const char * name)
{
	return rna_Main_cameras_new(_self, name);
}

static void BlendDataCameras_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Camera *camera;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	camera = rna_Main_cameras_new(_self, name);
	*((struct Camera **)_retdata) = camera;
}

RNA_EXTERN_C void BlendDataCameras_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *camera, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, camera, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataCameras_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *camera;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, camera, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataCameras_tag_func(struct Main *_self, bool value)
{
	rna_Main_cameras_tag(_self, value);
}

static void BlendDataCameras_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_cameras_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Camera *rna_Main_cameras_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *camera, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_cameras_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Scene *BlendDataScenes_new_func(struct Main *_self, const char * name)
{
	return rna_Main_scenes_new(_self, name);
}

static void BlendDataScenes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Scene *scene;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	scene = rna_Main_scenes_new(_self, name);
	*((struct Scene **)_retdata) = scene;
}

RNA_EXTERN_C void BlendDataScenes_remove_func(struct Main *_self, bContext *C, ReportList *reports, struct PointerRNA *scene, bool do_unlink)
{
	rna_Main_scenes_remove(_self, C, reports, scene, do_unlink);
}

static void BlendDataScenes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *scene;
	bool do_unlink;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	
	rna_Main_scenes_remove(_self, C, reports, scene, do_unlink);
}

RNA_EXTERN_C void BlendDataScenes_tag_func(struct Main *_self, bool value)
{
	rna_Main_scenes_tag(_self, value);
}

static void BlendDataScenes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_scenes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Scene *rna_Main_scenes_new(struct Main *_self, const char * name);
void rna_Main_scenes_remove(struct Main *_self, bContext *C, ReportList *reports, struct PointerRNA *scene, bool do_unlink);
void rna_Main_scenes_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Object *BlendDataObjects_new_func(struct Main *_self, ReportList *reports, const char * name, struct ID *object_data)
{
	return rna_Main_objects_new(_self, reports, name, object_data);
}

static void BlendDataObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct ID *object_data;
	struct Object *object;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	object_data = *((struct ID **)_data);
	_data += 8;
	_retdata = _data;
	
	object = rna_Main_objects_new(_self, reports, name, object_data);
	*((struct Object **)_retdata) = object;
}

RNA_EXTERN_C void BlendDataObjects_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *object, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, object, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *object;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, object, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataObjects_tag_func(struct Main *_self, bool value)
{
	rna_Main_objects_tag(_self, value);
}

static void BlendDataObjects_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_objects_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Object *rna_Main_objects_new(struct Main *_self, ReportList *reports, const char * name, struct ID *object_data);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *object, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_objects_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Material *BlendDataMaterials_new_func(struct Main *_self, const char * name)
{
	return rna_Main_materials_new(_self, name);
}

static void BlendDataMaterials_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Material *material;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	material = rna_Main_materials_new(_self, name);
	*((struct Material **)_retdata) = material;
}

RNA_EXTERN_C void BlendDataMaterials_create_gpencil_data_func(struct Main *_self, struct PointerRNA *material)
{
	rna_Main_materials_gpencil_data(_self, material);
}

static void BlendDataMaterials_create_gpencil_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *material;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = ((struct PointerRNA *)_data);
	
	rna_Main_materials_gpencil_data(_self, material);
}

RNA_EXTERN_C void BlendDataMaterials_remove_gpencil_data_func(struct Main *_self, struct PointerRNA *material)
{
	rna_Main_materials_gpencil_remove(_self, material);
}

static void BlendDataMaterials_remove_gpencil_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *material;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = ((struct PointerRNA *)_data);
	
	rna_Main_materials_gpencil_remove(_self, material);
}

RNA_EXTERN_C void BlendDataMaterials_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *material, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, material, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMaterials_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *material;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, material, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataMaterials_tag_func(struct Main *_self, bool value)
{
	rna_Main_materials_tag(_self, value);
}

static void BlendDataMaterials_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_materials_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Material *rna_Main_materials_new(struct Main *_self, const char * name);
void rna_Main_materials_gpencil_data(struct Main *_self, struct PointerRNA *material);
void rna_Main_materials_gpencil_remove(struct Main *_self, struct PointerRNA *material);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *material, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_materials_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct bNodeTree *BlendDataNodeTrees_new_func(struct Main *_self, const char * name, int type)
{
	return rna_Main_nodetree_new(_self, name, type);
}

static void BlendDataNodeTrees_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct bNodeTree *tree;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	tree = rna_Main_nodetree_new(_self, name, type);
	*((struct bNodeTree **)_retdata) = tree;
}

RNA_EXTERN_C void BlendDataNodeTrees_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *tree, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, tree, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataNodeTrees_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *tree;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	tree = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, tree, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataNodeTrees_tag_func(struct Main *_self, bool value)
{
	rna_Main_node_groups_tag(_self, value);
}

static void BlendDataNodeTrees_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_node_groups_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bNodeTree *rna_Main_nodetree_new(struct Main *_self, const char * name, int type);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *tree, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_node_groups_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Mesh *BlendDataMeshes_new_func(struct Main *_self, const char * name)
{
	return rna_Main_meshes_new(_self, name);
}

static void BlendDataMeshes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Main_meshes_new(_self, name);
	*((struct Mesh **)_retdata) = mesh;
}

RNA_EXTERN_C struct Mesh *BlendDataMeshes_new_from_object_func(struct Main *_self, ReportList *reports, struct Object *object, bool preserve_all_data_layers, struct Depsgraph *depsgraph)
{
	return rna_Main_meshes_new_from_object(_self, reports, object, preserve_all_data_layers, depsgraph);
}

static void BlendDataMeshes_new_from_object_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct Object *object;
	bool preserve_all_data_layers;
	struct Depsgraph *depsgraph;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	preserve_all_data_layers = *((bool *)_data);
	_data += 8;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Main_meshes_new_from_object(_self, reports, object, preserve_all_data_layers, depsgraph);
	*((struct Mesh **)_retdata) = mesh;
}

RNA_EXTERN_C void BlendDataMeshes_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *mesh, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, mesh, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMeshes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *mesh;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, mesh, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataMeshes_tag_func(struct Main *_self, bool value)
{
	rna_Main_meshes_tag(_self, value);
}

static void BlendDataMeshes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_meshes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Mesh *rna_Main_meshes_new(struct Main *_self, const char * name);
struct Mesh *rna_Main_meshes_new_from_object(struct Main *_self, ReportList *reports, struct Object *object, bool preserve_all_data_layers, struct Depsgraph *depsgraph);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *mesh, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_meshes_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Light *BlendDataLights_new_func(struct Main *_self, const char * name, int type)
{
	return rna_Main_lights_new(_self, name, type);
}

static void BlendDataLights_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct Light *light;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	light = rna_Main_lights_new(_self, name, type);
	*((struct Light **)_retdata) = light;
}

RNA_EXTERN_C void BlendDataLights_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *light, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, light, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLights_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *light;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	light = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, light, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataLights_tag_func(struct Main *_self, bool value)
{
	rna_Main_lights_tag(_self, value);
}

static void BlendDataLights_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_lights_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Light *rna_Main_lights_new(struct Main *_self, const char * name, int type);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *light, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_lights_tag(struct Main *_self, bool value);

RNA_EXTERN_C void BlendDataLibraries_tag_func(struct Main *_self, bool value)
{
	rna_Main_libraries_tag(_self, value);
}

static void BlendDataLibraries_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_libraries_tag(_self, value);
}

RNA_EXTERN_C void BlendDataLibraries_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *library, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, library, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLibraries_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *library;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	library = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, library, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_libraries_tag(struct Main *_self, bool value);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *library, bool do_unlink, bool do_id_user, bool do_ui_user);

RNA_EXTERN_C void BlendDataScreens_tag_func(struct Main *_self, bool value)
{
	rna_Main_screens_tag(_self, value);
}

static void BlendDataScreens_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_screens_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_screens_tag(struct Main *_self, bool value);

RNA_EXTERN_C void BlendDataWindowManagers_tag_func(struct Main *_self, bool value)
{
	rna_Main_window_managers_tag(_self, value);
}

static void BlendDataWindowManagers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_window_managers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_window_managers_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Image *BlendDataImages_new_func(struct Main *_self, const char * name, int width, int height, bool alpha, bool float_buffer, bool stereo3d, bool is_data, bool tiled)
{
	return rna_Main_images_new(_self, name, width, height, alpha, float_buffer, stereo3d, is_data, tiled);
}

static void BlendDataImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int width;
	int height;
	bool alpha;
	bool float_buffer;
	bool stereo3d;
	bool is_data;
	bool tiled;
	struct Image *image;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	height = *((int *)_data);
	_data += 8;
	alpha = *((bool *)_data);
	_data += 8;
	float_buffer = *((bool *)_data);
	_data += 8;
	stereo3d = *((bool *)_data);
	_data += 8;
	is_data = *((bool *)_data);
	_data += 8;
	tiled = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	image = rna_Main_images_new(_self, name, width, height, alpha, float_buffer, stereo3d, is_data, tiled);
	*((struct Image **)_retdata) = image;
}

RNA_EXTERN_C struct Image *BlendDataImages_load_func(struct Main *_self, ReportList *reports, const char * filepath, bool check_existing)
{
	return rna_Main_images_load(_self, reports, filepath, check_existing);
}

static void BlendDataImages_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	bool check_existing;
	struct Image *image;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	image = rna_Main_images_load(_self, reports, filepath, check_existing);
	*((struct Image **)_retdata) = image;
}

RNA_EXTERN_C void BlendDataImages_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *image, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, image, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *image;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, image, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataImages_tag_func(struct Main *_self, bool value)
{
	rna_Main_images_tag(_self, value);
}

static void BlendDataImages_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_images_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Image *rna_Main_images_new(struct Main *_self, const char * name, int width, int height, bool alpha, bool float_buffer, bool stereo3d, bool is_data, bool tiled);
struct Image *rna_Main_images_load(struct Main *_self, ReportList *reports, const char * filepath, bool check_existing);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *image, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_images_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Lattice *BlendDataLattices_new_func(struct Main *_self, const char * name)
{
	return rna_Main_lattices_new(_self, name);
}

static void BlendDataLattices_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Lattice *lattice;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	lattice = rna_Main_lattices_new(_self, name);
	*((struct Lattice **)_retdata) = lattice;
}

RNA_EXTERN_C void BlendDataLattices_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *lattice, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, lattice, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLattices_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *lattice;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	lattice = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, lattice, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataLattices_tag_func(struct Main *_self, bool value)
{
	rna_Main_lattices_tag(_self, value);
}

static void BlendDataLattices_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_lattices_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Lattice *rna_Main_lattices_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *lattice, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_lattices_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Curve *BlendDataCurves_new_func(struct Main *_self, const char * name, int type)
{
	return rna_Main_curves_new(_self, name, type);
}

static void BlendDataCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct Curve *curve;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	curve = rna_Main_curves_new(_self, name, type);
	*((struct Curve **)_retdata) = curve;
}

RNA_EXTERN_C void BlendDataCurves_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *curve, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, curve, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *curve;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	curve = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, curve, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataCurves_tag_func(struct Main *_self, bool value)
{
	rna_Main_curves_tag(_self, value);
}

static void BlendDataCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_curves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Curve *rna_Main_curves_new(struct Main *_self, const char * name, int type);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *curve, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_curves_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct MetaBall *BlendDataMetaBalls_new_func(struct Main *_self, const char * name)
{
	return rna_Main_metaballs_new(_self, name);
}

static void BlendDataMetaBalls_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct MetaBall *metaball;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	metaball = rna_Main_metaballs_new(_self, name);
	*((struct MetaBall **)_retdata) = metaball;
}

RNA_EXTERN_C void BlendDataMetaBalls_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *metaball, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, metaball, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMetaBalls_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *metaball;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	metaball = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, metaball, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataMetaBalls_tag_func(struct Main *_self, bool value)
{
	rna_Main_metaballs_tag(_self, value);
}

static void BlendDataMetaBalls_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_metaballs_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct MetaBall *rna_Main_metaballs_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *metaball, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_metaballs_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct VFont *BlendDataFonts_load_func(struct Main *_self, ReportList *reports, const char * filepath, bool check_existing)
{
	return rna_Main_fonts_load(_self, reports, filepath, check_existing);
}

static void BlendDataFonts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	bool check_existing;
	struct VFont *vfont;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	vfont = rna_Main_fonts_load(_self, reports, filepath, check_existing);
	*((struct VFont **)_retdata) = vfont;
}

RNA_EXTERN_C void BlendDataFonts_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *vfont, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, vfont, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataFonts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *vfont;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	vfont = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, vfont, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataFonts_tag_func(struct Main *_self, bool value)
{
	rna_Main_fonts_tag(_self, value);
}

static void BlendDataFonts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_fonts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct VFont *rna_Main_fonts_load(struct Main *_self, ReportList *reports, const char * filepath, bool check_existing);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *vfont, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_fonts_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Tex *BlendDataTextures_new_func(struct Main *_self, const char * name, int type)
{
	return rna_Main_textures_new(_self, name, type);
}

static void BlendDataTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct Tex *texture;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	texture = rna_Main_textures_new(_self, name, type);
	*((struct Tex **)_retdata) = texture;
}

RNA_EXTERN_C void BlendDataTextures_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *texture, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, texture, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataTextures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *texture;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	texture = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, texture, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataTextures_tag_func(struct Main *_self, bool value)
{
	rna_Main_textures_tag(_self, value);
}

static void BlendDataTextures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_textures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Tex *rna_Main_textures_new(struct Main *_self, const char * name, int type);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *texture, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_textures_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Brush *BlendDataBrushes_new_func(struct Main *_self, const char * name, int mode)
{
	return rna_Main_brushes_new(_self, name, mode);
}

static void BlendDataBrushes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int mode;
	struct Brush *brush;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	mode = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	brush = rna_Main_brushes_new(_self, name, mode);
	*((struct Brush **)_retdata) = brush;
}

RNA_EXTERN_C void BlendDataBrushes_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *brush, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, brush, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataBrushes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *brush;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	brush = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, brush, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataBrushes_tag_func(struct Main *_self, bool value)
{
	rna_Main_brushes_tag(_self, value);
}

static void BlendDataBrushes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_brushes_tag(_self, value);
}

RNA_EXTERN_C void BlendDataBrushes_create_gpencil_data_func(struct Main *_self, struct PointerRNA *brush)
{
	rna_Main_brush_gpencil_data(_self, brush);
}

static void BlendDataBrushes_create_gpencil_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *brush;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	brush = ((struct PointerRNA *)_data);
	
	rna_Main_brush_gpencil_data(_self, brush);
}

/* Repeated prototypes to detect errors */

struct Brush *rna_Main_brushes_new(struct Main *_self, const char * name, int mode);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *brush, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_brushes_tag(struct Main *_self, bool value);
void rna_Main_brush_gpencil_data(struct Main *_self, struct PointerRNA *brush);

RNA_EXTERN_C struct World *BlendDataWorlds_new_func(struct Main *_self, const char * name)
{
	return rna_Main_worlds_new(_self, name);
}

static void BlendDataWorlds_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct World *world;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	world = rna_Main_worlds_new(_self, name);
	*((struct World **)_retdata) = world;
}

RNA_EXTERN_C void BlendDataWorlds_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *world, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, world, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataWorlds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *world;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	world = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, world, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataWorlds_tag_func(struct Main *_self, bool value)
{
	rna_Main_worlds_tag(_self, value);
}

static void BlendDataWorlds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_worlds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct World *rna_Main_worlds_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *world, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_worlds_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Collection *BlendDataCollections_new_func(struct Main *_self, const char * name)
{
	return rna_Main_collections_new(_self, name);
}

static void BlendDataCollections_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Collection *collection;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	collection = rna_Main_collections_new(_self, name);
	*((struct Collection **)_retdata) = collection;
}

RNA_EXTERN_C void BlendDataCollections_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *collection, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, collection, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataCollections_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *collection;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	collection = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, collection, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataCollections_tag_func(struct Main *_self, bool value)
{
	rna_Main_collections_tag(_self, value);
}

static void BlendDataCollections_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_collections_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Collection *rna_Main_collections_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *collection, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_collections_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Text *BlendDataTexts_new_func(struct Main *_self, const char * name)
{
	return rna_Main_texts_new(_self, name);
}

static void BlendDataTexts_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Text *text;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	text = rna_Main_texts_new(_self, name);
	*((struct Text **)_retdata) = text;
}

RNA_EXTERN_C void BlendDataTexts_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *text, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, text, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataTexts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *text;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, text, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C struct Text *BlendDataTexts_load_func(struct Main *_self, ReportList *reports, const char * filepath, bool internal)
{
	return rna_Main_texts_load(_self, reports, filepath, internal);
}

static void BlendDataTexts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	bool internal;
	struct Text *text;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	internal = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	text = rna_Main_texts_load(_self, reports, filepath, internal);
	*((struct Text **)_retdata) = text;
}

RNA_EXTERN_C void BlendDataTexts_tag_func(struct Main *_self, bool value)
{
	rna_Main_texts_tag(_self, value);
}

static void BlendDataTexts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_texts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Text *rna_Main_texts_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *text, bool do_unlink, bool do_id_user, bool do_ui_user);
struct Text *rna_Main_texts_load(struct Main *_self, ReportList *reports, const char * filepath, bool internal);
void rna_Main_texts_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Speaker *BlendDataSpeakers_new_func(struct Main *_self, const char * name)
{
	return rna_Main_speakers_new(_self, name);
}

static void BlendDataSpeakers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Speaker *speaker;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	speaker = rna_Main_speakers_new(_self, name);
	*((struct Speaker **)_retdata) = speaker;
}

RNA_EXTERN_C void BlendDataSpeakers_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *speaker, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, speaker, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataSpeakers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *speaker;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	speaker = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, speaker, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataSpeakers_tag_func(struct Main *_self, bool value)
{
	rna_Main_speakers_tag(_self, value);
}

static void BlendDataSpeakers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_speakers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Speaker *rna_Main_speakers_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *speaker, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_speakers_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct bSound *BlendDataSounds_load_func(struct Main *_self, const char * filepath, bool check_existing)
{
	return rna_Main_sounds_load(_self, filepath, check_existing);
}

static void BlendDataSounds_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	bool check_existing;
	struct bSound *sound;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	sound = rna_Main_sounds_load(_self, filepath, check_existing);
	*((struct bSound **)_retdata) = sound;
}

RNA_EXTERN_C void BlendDataSounds_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *sound, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, sound, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataSounds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *sound;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	sound = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, sound, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataSounds_tag_func(struct Main *_self, bool value)
{
	rna_Main_sounds_tag(_self, value);
}

static void BlendDataSounds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_sounds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bSound *rna_Main_sounds_load(struct Main *_self, const char * filepath, bool check_existing);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *sound, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_sounds_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct bArmature *BlendDataArmatures_new_func(struct Main *_self, const char * name)
{
	return rna_Main_armatures_new(_self, name);
}

static void BlendDataArmatures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct bArmature *armature;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	armature = rna_Main_armatures_new(_self, name);
	*((struct bArmature **)_retdata) = armature;
}

RNA_EXTERN_C void BlendDataArmatures_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *armature, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, armature, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataArmatures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *armature;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	armature = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, armature, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataArmatures_tag_func(struct Main *_self, bool value)
{
	rna_Main_armatures_tag(_self, value);
}

static void BlendDataArmatures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_armatures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bArmature *rna_Main_armatures_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *armature, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_armatures_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct bAction *BlendDataActions_new_func(struct Main *_self, const char * name)
{
	return rna_Main_actions_new(_self, name);
}

static void BlendDataActions_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct bAction *action;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	action = rna_Main_actions_new(_self, name);
	*((struct bAction **)_retdata) = action;
}

RNA_EXTERN_C void BlendDataActions_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *action, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, action, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataActions_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *action;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	action = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, action, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataActions_tag_func(struct Main *_self, bool value)
{
	rna_Main_actions_tag(_self, value);
}

static void BlendDataActions_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_actions_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bAction *rna_Main_actions_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *action, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_actions_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct ParticleSettings *BlendDataParticles_new_func(struct Main *_self, const char * name)
{
	return rna_Main_particles_new(_self, name);
}

static void BlendDataParticles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct ParticleSettings *particle;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	particle = rna_Main_particles_new(_self, name);
	*((struct ParticleSettings **)_retdata) = particle;
}

RNA_EXTERN_C void BlendDataParticles_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *particle, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, particle, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataParticles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *particle;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	particle = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, particle, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataParticles_tag_func(struct Main *_self, bool value)
{
	rna_Main_particles_tag(_self, value);
}

static void BlendDataParticles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_particles_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct ParticleSettings *rna_Main_particles_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *particle, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_particles_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Palette *BlendDataPalettes_new_func(struct Main *_self, const char * name)
{
	return rna_Main_palettes_new(_self, name);
}

static void BlendDataPalettes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Palette *palette;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	palette = rna_Main_palettes_new(_self, name);
	*((struct Palette **)_retdata) = palette;
}

RNA_EXTERN_C void BlendDataPalettes_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *palette, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, palette, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataPalettes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *palette;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	palette = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, palette, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataPalettes_tag_func(struct Main *_self, bool value)
{
	rna_Main_palettes_tag(_self, value);
}

static void BlendDataPalettes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_palettes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Palette *rna_Main_palettes_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *palette, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_palettes_tag(struct Main *_self, bool value);

RNA_EXTERN_C void BlendDataGreasePencils_tag_func(struct Main *_self, bool value)
{
	rna_Main_gpencils_tag(_self, value);
}

static void BlendDataGreasePencils_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_gpencils_tag(_self, value);
}

RNA_EXTERN_C struct bGPdata *BlendDataGreasePencils_new_func(struct Main *_self, const char * name)
{
	return rna_Main_gpencils_new(_self, name);
}

static void BlendDataGreasePencils_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct bGPdata *grease_pencil;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	grease_pencil = rna_Main_gpencils_new(_self, name);
	*((struct bGPdata **)_retdata) = grease_pencil;
}

RNA_EXTERN_C void BlendDataGreasePencils_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *grease_pencil, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, grease_pencil, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataGreasePencils_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *grease_pencil;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	grease_pencil = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, grease_pencil, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_gpencils_tag(struct Main *_self, bool value);
struct bGPdata *rna_Main_gpencils_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *grease_pencil, bool do_unlink, bool do_id_user, bool do_ui_user);


RNA_EXTERN_C void BlendDataMovieClips_tag_func(struct Main *_self, bool value)
{
	rna_Main_movieclips_tag(_self, value);
}

static void BlendDataMovieClips_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_movieclips_tag(_self, value);
}

RNA_EXTERN_C void BlendDataMovieClips_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *clip, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, clip, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMovieClips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *clip;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	clip = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, clip, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C struct MovieClip *BlendDataMovieClips_load_func(struct Main *_self, ReportList *reports, const char * filepath, bool check_existing)
{
	return rna_Main_movieclip_load(_self, reports, filepath, check_existing);
}

static void BlendDataMovieClips_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	bool check_existing;
	struct MovieClip *clip;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	clip = rna_Main_movieclip_load(_self, reports, filepath, check_existing);
	*((struct MovieClip **)_retdata) = clip;
}

/* Repeated prototypes to detect errors */

void rna_Main_movieclips_tag(struct Main *_self, bool value);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *clip, bool do_unlink, bool do_id_user, bool do_ui_user);
struct MovieClip *rna_Main_movieclip_load(struct Main *_self, ReportList *reports, const char * filepath, bool check_existing);

RNA_EXTERN_C void BlendDataMasks_tag_func(struct Main *_self, bool value)
{
	rna_Main_masks_tag(_self, value);
}

static void BlendDataMasks_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_masks_tag(_self, value);
}

RNA_EXTERN_C struct Mask *BlendDataMasks_new_func(struct Main *_self, const char * name)
{
	return rna_Main_mask_new(_self, name);
}

static void BlendDataMasks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Mask *mask;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	mask = rna_Main_mask_new(_self, name);
	*((struct Mask **)_retdata) = mask;
}

RNA_EXTERN_C void BlendDataMasks_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *mask, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, mask, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMasks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *mask;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	mask = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, mask, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_masks_tag(struct Main *_self, bool value);
struct Mask *rna_Main_mask_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *mask, bool do_unlink, bool do_id_user, bool do_ui_user);

RNA_EXTERN_C void BlendDataLineStyles_tag_func(struct Main *_self, bool value)
{
	rna_Main_linestyle_tag(_self, value);
}

static void BlendDataLineStyles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_linestyle_tag(_self, value);
}

RNA_EXTERN_C struct FreestyleLineStyle *BlendDataLineStyles_new_func(struct Main *_self, const char * name)
{
	return rna_Main_linestyles_new(_self, name);
}

static void BlendDataLineStyles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct FreestyleLineStyle *linestyle;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	linestyle = rna_Main_linestyles_new(_self, name);
	*((struct FreestyleLineStyle **)_retdata) = linestyle;
}

RNA_EXTERN_C void BlendDataLineStyles_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *linestyle, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, linestyle, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLineStyles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *linestyle;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	linestyle = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, linestyle, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_linestyle_tag(struct Main *_self, bool value);
struct FreestyleLineStyle *rna_Main_linestyles_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *linestyle, bool do_unlink, bool do_id_user, bool do_ui_user);

RNA_EXTERN_C void BlendDataCacheFiles_tag_func(struct Main *_self, bool value)
{
	rna_Main_cachefiles_tag(_self, value);
}

static void BlendDataCacheFiles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_cachefiles_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_cachefiles_tag(struct Main *_self, bool value);

RNA_EXTERN_C void BlendDataPaintCurves_tag_func(struct Main *_self, bool value)
{
	rna_Main_paintcurves_tag(_self, value);
}

static void BlendDataPaintCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_paintcurves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_paintcurves_tag(struct Main *_self, bool value);

RNA_EXTERN_C void BlendDataWorkSpaces_tag_func(struct Main *_self, bool value)
{
	rna_Main_workspaces_tag(_self, value);
}

static void BlendDataWorkSpaces_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_workspaces_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_workspaces_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct LightProbe *BlendDataProbes_new_func(struct Main *_self, const char * name, int type)
{
	return rna_Main_lightprobe_new(_self, name, type);
}

static void BlendDataProbes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct LightProbe *lightprobe;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	lightprobe = rna_Main_lightprobe_new(_self, name, type);
	*((struct LightProbe **)_retdata) = lightprobe;
}

RNA_EXTERN_C void BlendDataProbes_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *lightprobe, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, lightprobe, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataProbes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *lightprobe;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	lightprobe = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, lightprobe, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataProbes_tag_func(struct Main *_self, bool value)
{
	rna_Main_lightprobes_tag(_self, value);
}

static void BlendDataProbes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_lightprobes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct LightProbe *rna_Main_lightprobe_new(struct Main *_self, const char * name, int type);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *lightprobe, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_lightprobes_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Curves *BlendDataHairCurves_new_func(struct Main *_self, const char * name)
{
	return rna_Main_hair_curves_new(_self, name);
}

static void BlendDataHairCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Curves *curves;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	curves = rna_Main_hair_curves_new(_self, name);
	*((struct Curves **)_retdata) = curves;
}

RNA_EXTERN_C void BlendDataHairCurves_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *curves, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, curves, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataHairCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *curves;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	curves = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, curves, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataHairCurves_tag_func(struct Main *_self, bool value)
{
	rna_Main_hair_curves_tag(_self, value);
}

static void BlendDataHairCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_hair_curves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Curves *rna_Main_hair_curves_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *curves, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_hair_curves_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct PointCloud *BlendDataPointClouds_new_func(struct Main *_self, const char * name)
{
	return rna_Main_pointclouds_new(_self, name);
}

static void BlendDataPointClouds_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct PointCloud *pointcloud;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	pointcloud = rna_Main_pointclouds_new(_self, name);
	*((struct PointCloud **)_retdata) = pointcloud;
}

RNA_EXTERN_C void BlendDataPointClouds_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *pointcloud, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, pointcloud, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataPointClouds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *pointcloud;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	pointcloud = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, pointcloud, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataPointClouds_tag_func(struct Main *_self, bool value)
{
	rna_Main_pointclouds_tag(_self, value);
}

static void BlendDataPointClouds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_pointclouds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct PointCloud *rna_Main_pointclouds_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *pointcloud, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_pointclouds_tag(struct Main *_self, bool value);

RNA_EXTERN_C struct Volume *BlendDataVolumes_new_func(struct Main *_self, const char * name)
{
	return rna_Main_volumes_new(_self, name);
}

static void BlendDataVolumes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Volume *volume;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	volume = rna_Main_volumes_new(_self, name);
	*((struct Volume **)_retdata) = volume;
}

RNA_EXTERN_C void BlendDataVolumes_remove_func(struct Main *_self, ReportList *reports, struct PointerRNA *volume, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, volume, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataVolumes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *volume;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	volume = *((struct PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, volume, do_unlink, do_id_user, do_ui_user);
}

RNA_EXTERN_C void BlendDataVolumes_tag_func(struct Main *_self, bool value)
{
	rna_Main_volumes_tag(_self, value);
}

static void BlendDataVolumes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	bool value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_volumes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Volume *rna_Main_volumes_new(struct Main *_self, const char * name);
void rna_Main_ID_remove(struct Main *_self, ReportList *reports, struct PointerRNA *volume, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_volumes_tag(struct Main *_self, bool value);

/* Blend-File Data */
CollectionPropertyRNA rna_BlendData_rna_properties = {
	{(PropertyRNA *)&rna_BlendData_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_rna_properties_begin, BlendData_rna_properties_next, BlendData_rna_properties_end, BlendData_rna_properties_get, nullptr, nullptr, BlendData_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendData_rna_type = {
	{(PropertyRNA *)&rna_BlendData_filepath, (PropertyRNA *)&rna_BlendData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendData_filepath = {
	{(PropertyRNA *)&rna_BlendData_is_dirty, (PropertyRNA *)&rna_BlendData_rna_type,
	-1, "filepath", 262144, 0, 0, 0, 0, "Filename",
	"Path to the .blend file",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_filepath_get, BlendData_filepath_length, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, ""
};

BoolPropertyRNA rna_BlendData_is_dirty = {
	{(PropertyRNA *)&rna_BlendData_is_saved, (PropertyRNA *)&rna_BlendData_filepath,
	-1, "is_dirty", 2, 0, 0, 0, 0, "File Has Unsaved Changes",
	"Have recent edits been saved to disk",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_is_dirty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BlendData_is_saved = {
	{(PropertyRNA *)&rna_BlendData_use_autopack, (PropertyRNA *)&rna_BlendData_is_dirty,
	-1, "is_saved", 2, 0, 0, 0, 0, "File is Saved",
	"Has the current session been saved to disk as a .blend file",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_is_saved_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BlendData_use_autopack = {
	{(PropertyRNA *)&rna_BlendData_version, (PropertyRNA *)&rna_BlendData_is_saved,
	-1, "use_autopack", 3, 0, 0, 0, 0, "Use Auto-Pack",
	"Automatically pack all external data into .blend file",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_use_autopack_get, BlendData_use_autopack_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

static int rna_BlendData_version_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_BlendData_version = {
	{(PropertyRNA *)&rna_BlendData_cameras, (PropertyRNA *)&rna_BlendData_use_autopack,
	-1, "version", 8388610, 0, 0, 0, 0, "Version",
	"File format version the .blend file was saved with",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_XYZ | (int)PROP_UNIT_NONE), nullptr, 1, {3, 0, 0}, 3,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, BlendData_version_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, 0, rna_BlendData_version_default
};

CollectionPropertyRNA rna_BlendData_cameras = {
	{(PropertyRNA *)&rna_BlendData_scenes, (PropertyRNA *)&rna_BlendData_version,
	-1, "cameras", 128, 0, 0, 0, 0, "Cameras",
	"Camera data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataCameras},
	BlendData_cameras_begin, BlendData_cameras_next, BlendData_cameras_end, BlendData_cameras_get, nullptr, nullptr, nullptr, nullptr, &RNA_Camera
};

CollectionPropertyRNA rna_BlendData_scenes = {
	{(PropertyRNA *)&rna_BlendData_objects, (PropertyRNA *)&rna_BlendData_cameras,
	-1, "scenes", 128, 0, 0, 0, 0, "Scenes",
	"Scene data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataScenes},
	BlendData_scenes_begin, BlendData_scenes_next, BlendData_scenes_end, BlendData_scenes_get, nullptr, nullptr, nullptr, nullptr, &RNA_Scene
};

CollectionPropertyRNA rna_BlendData_objects = {
	{(PropertyRNA *)&rna_BlendData_materials, (PropertyRNA *)&rna_BlendData_scenes,
	-1, "objects", 128, 0, 0, 0, 0, "Objects",
	"Object data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataObjects},
	BlendData_objects_begin, BlendData_objects_next, BlendData_objects_end, BlendData_objects_get, nullptr, nullptr, nullptr, nullptr, &RNA_Object
};

CollectionPropertyRNA rna_BlendData_materials = {
	{(PropertyRNA *)&rna_BlendData_node_groups, (PropertyRNA *)&rna_BlendData_objects,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"Material data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataMaterials},
	BlendData_materials_begin, BlendData_materials_next, BlendData_materials_end, BlendData_materials_get, nullptr, nullptr, nullptr, nullptr, &RNA_Material
};

CollectionPropertyRNA rna_BlendData_node_groups = {
	{(PropertyRNA *)&rna_BlendData_meshes, (PropertyRNA *)&rna_BlendData_materials,
	-1, "node_groups", 128, 0, 0, 0, 0, "Node Groups",
	"Node group data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataNodeTrees},
	BlendData_node_groups_begin, BlendData_node_groups_next, BlendData_node_groups_end, BlendData_node_groups_get, nullptr, nullptr, nullptr, nullptr, &RNA_NodeTree
};

CollectionPropertyRNA rna_BlendData_meshes = {
	{(PropertyRNA *)&rna_BlendData_lights, (PropertyRNA *)&rna_BlendData_node_groups,
	-1, "meshes", 128, 0, 0, 0, 0, "Meshes",
	"Mesh data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataMeshes},
	BlendData_meshes_begin, BlendData_meshes_next, BlendData_meshes_end, BlendData_meshes_get, nullptr, nullptr, nullptr, nullptr, &RNA_Mesh
};

CollectionPropertyRNA rna_BlendData_lights = {
	{(PropertyRNA *)&rna_BlendData_libraries, (PropertyRNA *)&rna_BlendData_meshes,
	-1, "lights", 128, 0, 0, 0, 0, "Lights",
	"Light data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataLights},
	BlendData_lights_begin, BlendData_lights_next, BlendData_lights_end, BlendData_lights_get, nullptr, nullptr, nullptr, nullptr, &RNA_Light
};

CollectionPropertyRNA rna_BlendData_libraries = {
	{(PropertyRNA *)&rna_BlendData_screens, (PropertyRNA *)&rna_BlendData_lights,
	-1, "libraries", 128, 0, 0, 0, 0, "Libraries",
	"Library data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataLibraries},
	BlendData_libraries_begin, BlendData_libraries_next, BlendData_libraries_end, BlendData_libraries_get, nullptr, nullptr, nullptr, nullptr, &RNA_Library
};

CollectionPropertyRNA rna_BlendData_screens = {
	{(PropertyRNA *)&rna_BlendData_window_managers, (PropertyRNA *)&rna_BlendData_libraries,
	-1, "screens", 128, 0, 0, 0, 0, "Screens",
	"Screen data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataScreens},
	BlendData_screens_begin, BlendData_screens_next, BlendData_screens_end, BlendData_screens_get, nullptr, nullptr, nullptr, nullptr, &RNA_Screen
};

CollectionPropertyRNA rna_BlendData_window_managers = {
	{(PropertyRNA *)&rna_BlendData_images, (PropertyRNA *)&rna_BlendData_screens,
	-1, "window_managers", 128, 0, 0, 0, 0, "Window Managers",
	"Window manager data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataWindowManagers},
	BlendData_window_managers_begin, BlendData_window_managers_next, BlendData_window_managers_end, BlendData_window_managers_get, nullptr, nullptr, nullptr, nullptr, &RNA_WindowManager
};

CollectionPropertyRNA rna_BlendData_images = {
	{(PropertyRNA *)&rna_BlendData_lattices, (PropertyRNA *)&rna_BlendData_window_managers,
	-1, "images", 128, 0, 0, 0, 0, "Images",
	"Image data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataImages},
	BlendData_images_begin, BlendData_images_next, BlendData_images_end, BlendData_images_get, nullptr, nullptr, nullptr, nullptr, &RNA_Image
};

CollectionPropertyRNA rna_BlendData_lattices = {
	{(PropertyRNA *)&rna_BlendData_curves, (PropertyRNA *)&rna_BlendData_images,
	-1, "lattices", 128, 0, 0, 0, 0, "Lattices",
	"Lattice data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataLattices},
	BlendData_lattices_begin, BlendData_lattices_next, BlendData_lattices_end, BlendData_lattices_get, nullptr, nullptr, nullptr, nullptr, &RNA_Lattice
};

CollectionPropertyRNA rna_BlendData_curves = {
	{(PropertyRNA *)&rna_BlendData_metaballs, (PropertyRNA *)&rna_BlendData_lattices,
	-1, "curves", 128, 0, 0, 0, 0, "Curves",
	"Curve data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataCurves},
	BlendData_curves_begin, BlendData_curves_next, BlendData_curves_end, BlendData_curves_get, nullptr, nullptr, nullptr, nullptr, &RNA_Curve
};

CollectionPropertyRNA rna_BlendData_metaballs = {
	{(PropertyRNA *)&rna_BlendData_fonts, (PropertyRNA *)&rna_BlendData_curves,
	-1, "metaballs", 128, 0, 0, 0, 0, "Metaballs",
	"Metaball data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataMetaBalls},
	BlendData_metaballs_begin, BlendData_metaballs_next, BlendData_metaballs_end, BlendData_metaballs_get, nullptr, nullptr, nullptr, nullptr, &RNA_MetaBall
};

CollectionPropertyRNA rna_BlendData_fonts = {
	{(PropertyRNA *)&rna_BlendData_textures, (PropertyRNA *)&rna_BlendData_metaballs,
	-1, "fonts", 128, 0, 0, 0, 0, "Vector Fonts",
	"Vector font data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataFonts},
	BlendData_fonts_begin, BlendData_fonts_next, BlendData_fonts_end, BlendData_fonts_get, nullptr, nullptr, nullptr, nullptr, &RNA_VectorFont
};

CollectionPropertyRNA rna_BlendData_textures = {
	{(PropertyRNA *)&rna_BlendData_brushes, (PropertyRNA *)&rna_BlendData_fonts,
	-1, "textures", 128, 0, 0, 0, 0, "Textures",
	"Texture data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataTextures},
	BlendData_textures_begin, BlendData_textures_next, BlendData_textures_end, BlendData_textures_get, nullptr, nullptr, nullptr, nullptr, &RNA_Texture
};

CollectionPropertyRNA rna_BlendData_brushes = {
	{(PropertyRNA *)&rna_BlendData_worlds, (PropertyRNA *)&rna_BlendData_textures,
	-1, "brushes", 128, 0, 0, 0, 0, "Brushes",
	"Brush data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataBrushes},
	BlendData_brushes_begin, BlendData_brushes_next, BlendData_brushes_end, BlendData_brushes_get, nullptr, nullptr, nullptr, nullptr, &RNA_Brush
};

CollectionPropertyRNA rna_BlendData_worlds = {
	{(PropertyRNA *)&rna_BlendData_collections, (PropertyRNA *)&rna_BlendData_brushes,
	-1, "worlds", 128, 0, 0, 0, 0, "Worlds",
	"World data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataWorlds},
	BlendData_worlds_begin, BlendData_worlds_next, BlendData_worlds_end, BlendData_worlds_get, nullptr, nullptr, nullptr, nullptr, &RNA_World
};

CollectionPropertyRNA rna_BlendData_collections = {
	{(PropertyRNA *)&rna_BlendData_shape_keys, (PropertyRNA *)&rna_BlendData_worlds,
	-1, "collections", 128, 0, 0, 0, 0, "Collections",
	"Collection data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataCollections},
	BlendData_collections_begin, BlendData_collections_next, BlendData_collections_end, BlendData_collections_get, nullptr, nullptr, nullptr, nullptr, &RNA_Collection
};

CollectionPropertyRNA rna_BlendData_shape_keys = {
	{(PropertyRNA *)&rna_BlendData_texts, (PropertyRNA *)&rna_BlendData_collections,
	-1, "shape_keys", 128, 0, 0, 0, 0, "Shape Keys",
	"Shape Key data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendData_shape_keys_begin, BlendData_shape_keys_next, BlendData_shape_keys_end, BlendData_shape_keys_get, nullptr, nullptr, nullptr, nullptr, &RNA_Key
};

CollectionPropertyRNA rna_BlendData_texts = {
	{(PropertyRNA *)&rna_BlendData_speakers, (PropertyRNA *)&rna_BlendData_shape_keys,
	-1, "texts", 128, 0, 0, 0, 0, "Texts",
	"Text data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataTexts},
	BlendData_texts_begin, BlendData_texts_next, BlendData_texts_end, BlendData_texts_get, nullptr, nullptr, nullptr, nullptr, &RNA_Text
};

CollectionPropertyRNA rna_BlendData_speakers = {
	{(PropertyRNA *)&rna_BlendData_sounds, (PropertyRNA *)&rna_BlendData_texts,
	-1, "speakers", 128, 0, 0, 0, 0, "Speakers",
	"Speaker data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataSpeakers},
	BlendData_speakers_begin, BlendData_speakers_next, BlendData_speakers_end, BlendData_speakers_get, nullptr, nullptr, nullptr, nullptr, &RNA_Speaker
};

CollectionPropertyRNA rna_BlendData_sounds = {
	{(PropertyRNA *)&rna_BlendData_armatures, (PropertyRNA *)&rna_BlendData_speakers,
	-1, "sounds", 128, 0, 0, 0, 0, "Sounds",
	"Sound data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataSounds},
	BlendData_sounds_begin, BlendData_sounds_next, BlendData_sounds_end, BlendData_sounds_get, nullptr, nullptr, nullptr, nullptr, &RNA_Sound
};

CollectionPropertyRNA rna_BlendData_armatures = {
	{(PropertyRNA *)&rna_BlendData_actions, (PropertyRNA *)&rna_BlendData_sounds,
	-1, "armatures", 128, 0, 0, 0, 0, "Armatures",
	"Armature data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataArmatures},
	BlendData_armatures_begin, BlendData_armatures_next, BlendData_armatures_end, BlendData_armatures_get, nullptr, nullptr, nullptr, nullptr, &RNA_Armature
};

CollectionPropertyRNA rna_BlendData_actions = {
	{(PropertyRNA *)&rna_BlendData_particles, (PropertyRNA *)&rna_BlendData_armatures,
	-1, "actions", 128, 0, 0, 0, 0, "Actions",
	"Action data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataActions},
	BlendData_actions_begin, BlendData_actions_next, BlendData_actions_end, BlendData_actions_get, nullptr, nullptr, nullptr, nullptr, &RNA_Action
};

CollectionPropertyRNA rna_BlendData_particles = {
	{(PropertyRNA *)&rna_BlendData_palettes, (PropertyRNA *)&rna_BlendData_actions,
	-1, "particles", 128, 0, 0, 0, 0, "Particles",
	"Particle data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataParticles},
	BlendData_particles_begin, BlendData_particles_next, BlendData_particles_end, BlendData_particles_get, nullptr, nullptr, nullptr, nullptr, &RNA_ParticleSettings
};

CollectionPropertyRNA rna_BlendData_palettes = {
	{(PropertyRNA *)&rna_BlendData_grease_pencils, (PropertyRNA *)&rna_BlendData_particles,
	-1, "palettes", 128, 0, 0, 0, 0, "Palettes",
	"Palette data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataPalettes},
	BlendData_palettes_begin, BlendData_palettes_next, BlendData_palettes_end, BlendData_palettes_get, nullptr, nullptr, nullptr, nullptr, &RNA_Palette
};

CollectionPropertyRNA rna_BlendData_grease_pencils = {
	{(PropertyRNA *)&rna_BlendData_grease_pencils_v3, (PropertyRNA *)&rna_BlendData_palettes,
	-1, "grease_pencils", 128, 0, 0, 0, 0, "Grease Pencil",
	"Grease Pencil data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataGreasePencils},
	BlendData_grease_pencils_begin, BlendData_grease_pencils_next, BlendData_grease_pencils_end, BlendData_grease_pencils_get, nullptr, nullptr, nullptr, nullptr, &RNA_GreasePencil
};

CollectionPropertyRNA rna_BlendData_grease_pencils_v3 = {
	{(PropertyRNA *)&rna_BlendData_movieclips, (PropertyRNA *)&rna_BlendData_grease_pencils,
	-1, "grease_pencils_v3", 128, 0, 0, 0, 0, "Grease Pencil v3",
	"Grease Pencil v3 data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataGreasePencilsV3},
	BlendData_grease_pencils_v3_begin, BlendData_grease_pencils_v3_next, BlendData_grease_pencils_v3_end, BlendData_grease_pencils_v3_get, nullptr, nullptr, nullptr, nullptr, &RNA_GreasePencilv3
};

CollectionPropertyRNA rna_BlendData_movieclips = {
	{(PropertyRNA *)&rna_BlendData_masks, (PropertyRNA *)&rna_BlendData_grease_pencils_v3,
	-1, "movieclips", 128, 0, 0, 0, 0, "Movie Clips",
	"Movie Clip data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataMovieClips},
	BlendData_movieclips_begin, BlendData_movieclips_next, BlendData_movieclips_end, BlendData_movieclips_get, nullptr, nullptr, nullptr, nullptr, &RNA_MovieClip
};

CollectionPropertyRNA rna_BlendData_masks = {
	{(PropertyRNA *)&rna_BlendData_linestyles, (PropertyRNA *)&rna_BlendData_movieclips,
	-1, "masks", 128, 0, 0, 0, 0, "Masks",
	"Masks data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataMasks},
	BlendData_masks_begin, BlendData_masks_next, BlendData_masks_end, BlendData_masks_get, nullptr, nullptr, nullptr, nullptr, &RNA_Mask
};

CollectionPropertyRNA rna_BlendData_linestyles = {
	{(PropertyRNA *)&rna_BlendData_cache_files, (PropertyRNA *)&rna_BlendData_masks,
	-1, "linestyles", 128, 0, 0, 0, 0, "Line Styles",
	"Line Style data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataLineStyles},
	BlendData_linestyles_begin, BlendData_linestyles_next, BlendData_linestyles_end, BlendData_linestyles_get, nullptr, nullptr, nullptr, nullptr, &RNA_FreestyleLineStyle
};

CollectionPropertyRNA rna_BlendData_cache_files = {
	{(PropertyRNA *)&rna_BlendData_paint_curves, (PropertyRNA *)&rna_BlendData_linestyles,
	-1, "cache_files", 128, 0, 0, 0, 0, "Cache Files",
	"Cache Files data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataCacheFiles},
	BlendData_cache_files_begin, BlendData_cache_files_next, BlendData_cache_files_end, BlendData_cache_files_get, nullptr, nullptr, nullptr, nullptr, &RNA_CacheFile
};

CollectionPropertyRNA rna_BlendData_paint_curves = {
	{(PropertyRNA *)&rna_BlendData_workspaces, (PropertyRNA *)&rna_BlendData_cache_files,
	-1, "paint_curves", 128, 0, 0, 0, 0, "Paint Curves",
	"Paint Curves data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataPaintCurves},
	BlendData_paint_curves_begin, BlendData_paint_curves_next, BlendData_paint_curves_end, BlendData_paint_curves_get, nullptr, nullptr, nullptr, nullptr, &RNA_PaintCurve
};

CollectionPropertyRNA rna_BlendData_workspaces = {
	{(PropertyRNA *)&rna_BlendData_lightprobes, (PropertyRNA *)&rna_BlendData_paint_curves,
	-1, "workspaces", 128, 0, 0, 0, 0, "Workspaces",
	"Workspace data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataWorkSpaces},
	BlendData_workspaces_begin, BlendData_workspaces_next, BlendData_workspaces_end, BlendData_workspaces_get, nullptr, nullptr, nullptr, nullptr, &RNA_WorkSpace
};

CollectionPropertyRNA rna_BlendData_lightprobes = {
	{(PropertyRNA *)&rna_BlendData_hair_curves, (PropertyRNA *)&rna_BlendData_workspaces,
	-1, "lightprobes", 128, 0, 0, 0, 0, "Light Probes",
	"Light Probe data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataProbes},
	BlendData_lightprobes_begin, BlendData_lightprobes_next, BlendData_lightprobes_end, BlendData_lightprobes_get, nullptr, nullptr, nullptr, nullptr, &RNA_LightProbe
};

CollectionPropertyRNA rna_BlendData_hair_curves = {
	{(PropertyRNA *)&rna_BlendData_pointclouds, (PropertyRNA *)&rna_BlendData_lightprobes,
	-1, "hair_curves", 128, 0, 0, 0, 0, "Hair Curves",
	"Hair curve data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataHairCurves},
	BlendData_hair_curves_begin, BlendData_hair_curves_next, BlendData_hair_curves_end, BlendData_hair_curves_get, nullptr, nullptr, nullptr, nullptr, &RNA_Curves
};

CollectionPropertyRNA rna_BlendData_pointclouds = {
	{(PropertyRNA *)&rna_BlendData_volumes, (PropertyRNA *)&rna_BlendData_hair_curves,
	-1, "pointclouds", 128, 0, 0, 0, 0, "Point Clouds",
	"Point cloud data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataPointClouds},
	BlendData_pointclouds_begin, BlendData_pointclouds_next, BlendData_pointclouds_end, BlendData_pointclouds_get, nullptr, nullptr, nullptr, nullptr, &RNA_PointCloud
};

CollectionPropertyRNA rna_BlendData_volumes = {
	{nullptr, (PropertyRNA *)&rna_BlendData_pointclouds,
	-1, "volumes", 128, 0, 0, 0, 0, "Volumes",
	"Volume data-blocks",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, &RNA_BlendDataVolumes},
	BlendData_volumes_begin, BlendData_volumes_next, BlendData_volumes_end, BlendData_volumes_get, nullptr, nullptr, nullptr, nullptr, &RNA_Volume
};

StructRNA RNA_BlendData = {
	{(ContainerRNA *)&RNA_BlendDataCameras, (ContainerRNA *)&RNA_LineStyleTextureSlot,
	nullptr,
	{(PropertyRNA *)&rna_BlendData_rna_properties, (PropertyRNA *)&rna_BlendData_volumes}},
	"BlendData", nullptr, nullptr, 516, nullptr, "Blend-File Data",
	"Main data structure representing a .blend file and all its data-blocks",
	"*", 15,
	nullptr, (PropertyRNA *)&rna_BlendData_rna_properties,
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

/* Main Cameras */
CollectionPropertyRNA rna_BlendDataCameras_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataCameras_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCameras_rna_properties_begin, BlendDataCameras_rna_properties_next, BlendDataCameras_rna_properties_end, BlendDataCameras_rna_properties_get, nullptr, nullptr, BlendDataCameras_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataCameras_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCameras_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCameras_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataCameras_new_name = {
	{(PropertyRNA *)&rna_BlendDataCameras_new_camera, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Camera"
};

PointerPropertyRNA rna_BlendDataCameras_new_camera = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCameras_new_name,
	-1, "camera", 8388736, 0, 2, 0, 0, "",
	"New camera data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Camera
};

FunctionRNA rna_BlendDataCameras_new_func = {
	{(FunctionRNA *)&rna_BlendDataCameras_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCameras_new_name, (PropertyRNA *)&rna_BlendDataCameras_new_camera}},
	"new", 0, "Add a new camera to the main database",
	BlendDataCameras_new_call,
	(PropertyRNA *)&rna_BlendDataCameras_new_camera
};

PointerPropertyRNA rna_BlendDataCameras_remove_camera = {
	{(PropertyRNA *)&rna_BlendDataCameras_remove_do_unlink, nullptr,
	-1, "camera", 262272, 0, 5, 0, 0, "",
	"Camera to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Camera
};

BoolPropertyRNA rna_BlendDataCameras_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataCameras_remove_do_id_user, (PropertyRNA *)&rna_BlendDataCameras_remove_camera,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this camera before deleting it (WARNING: will also delete objects instancing that camera data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataCameras_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataCameras_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataCameras_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this camera",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataCameras_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCameras_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this camera",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataCameras_remove_func = {
	{(FunctionRNA *)&rna_BlendDataCameras_tag_func, (FunctionRNA *)&rna_BlendDataCameras_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCameras_remove_camera, (PropertyRNA *)&rna_BlendDataCameras_remove_do_ui_user}},
	"remove", 16, "Remove a camera from the current blendfile",
	BlendDataCameras_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataCameras_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataCameras_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataCameras_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCameras_tag_value, (PropertyRNA *)&rna_BlendDataCameras_tag_value}},
	"tag", 0, "tag",
	BlendDataCameras_tag_call,
	nullptr
};

StructRNA RNA_BlendDataCameras = {
	{(ContainerRNA *)&RNA_BlendDataScenes, (ContainerRNA *)&RNA_BlendData,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCameras_rna_properties, (PropertyRNA *)&rna_BlendDataCameras_rna_type}},
	"BlendDataCameras", nullptr, nullptr, 516, nullptr, "Main Cameras",
	"Collection of cameras",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataCameras_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataCameras_new_func, (FunctionRNA *)&rna_BlendDataCameras_tag_func}
};

/* Main Scenes */
CollectionPropertyRNA rna_BlendDataScenes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataScenes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataScenes_rna_properties_begin, BlendDataScenes_rna_properties_next, BlendDataScenes_rna_properties_end, BlendDataScenes_rna_properties_get, nullptr, nullptr, BlendDataScenes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataScenes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataScenes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataScenes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataScenes_new_name = {
	{(PropertyRNA *)&rna_BlendDataScenes_new_scene, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Scene"
};

PointerPropertyRNA rna_BlendDataScenes_new_scene = {
	{nullptr, (PropertyRNA *)&rna_BlendDataScenes_new_name,
	-1, "scene", 8388736, 0, 2, 0, 0, "",
	"New scene data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

FunctionRNA rna_BlendDataScenes_new_func = {
	{(FunctionRNA *)&rna_BlendDataScenes_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataScenes_new_name, (PropertyRNA *)&rna_BlendDataScenes_new_scene}},
	"new", 0, "Add a new scene to the main database",
	BlendDataScenes_new_call,
	(PropertyRNA *)&rna_BlendDataScenes_new_scene
};

PointerPropertyRNA rna_BlendDataScenes_remove_scene = {
	{(PropertyRNA *)&rna_BlendDataScenes_remove_do_unlink, nullptr,
	-1, "scene", 262272, 0, 5, 0, 0, "",
	"Scene to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Scene
};

BoolPropertyRNA rna_BlendDataScenes_remove_do_unlink = {
	{nullptr, (PropertyRNA *)&rna_BlendDataScenes_remove_scene,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this scene before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataScenes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataScenes_tag_func, (FunctionRNA *)&rna_BlendDataScenes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataScenes_remove_scene, (PropertyRNA *)&rna_BlendDataScenes_remove_do_unlink}},
	"remove", 24, "Remove a scene from the current blendfile",
	BlendDataScenes_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataScenes_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataScenes_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataScenes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataScenes_tag_value, (PropertyRNA *)&rna_BlendDataScenes_tag_value}},
	"tag", 0, "tag",
	BlendDataScenes_tag_call,
	nullptr
};

StructRNA RNA_BlendDataScenes = {
	{(ContainerRNA *)&RNA_BlendDataObjects, (ContainerRNA *)&RNA_BlendDataCameras,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataScenes_rna_properties, (PropertyRNA *)&rna_BlendDataScenes_rna_type}},
	"BlendDataScenes", nullptr, nullptr, 516, nullptr, "Main Scenes",
	"Collection of scenes",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataScenes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataScenes_new_func, (FunctionRNA *)&rna_BlendDataScenes_tag_func}
};

/* Main Objects */
CollectionPropertyRNA rna_BlendDataObjects_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataObjects_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataObjects_rna_properties_begin, BlendDataObjects_rna_properties_next, BlendDataObjects_rna_properties_end, BlendDataObjects_rna_properties_get, nullptr, nullptr, BlendDataObjects_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataObjects_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataObjects_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataObjects_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataObjects_new_name = {
	{(PropertyRNA *)&rna_BlendDataObjects_new_object_data, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Object"
};

PointerPropertyRNA rna_BlendDataObjects_new_object_data = {
	{(PropertyRNA *)&rna_BlendDataObjects_new_object, (PropertyRNA *)&rna_BlendDataObjects_new_name,
	-1, "object_data", 8388736, 0, 1, 0, 0, "",
	"Object data or None for an empty object",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ID
};

PointerPropertyRNA rna_BlendDataObjects_new_object = {
	{nullptr, (PropertyRNA *)&rna_BlendDataObjects_new_object_data,
	-1, "object", 8388736, 0, 2, 0, 0, "",
	"New object data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

FunctionRNA rna_BlendDataObjects_new_func = {
	{(FunctionRNA *)&rna_BlendDataObjects_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataObjects_new_name, (PropertyRNA *)&rna_BlendDataObjects_new_object}},
	"new", 16, "Add a new object to the main database",
	BlendDataObjects_new_call,
	(PropertyRNA *)&rna_BlendDataObjects_new_object
};

PointerPropertyRNA rna_BlendDataObjects_remove_object = {
	{(PropertyRNA *)&rna_BlendDataObjects_remove_do_unlink, nullptr,
	-1, "object", 262272, 0, 5, 0, 0, "",
	"Object to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_BlendDataObjects_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataObjects_remove_do_id_user, (PropertyRNA *)&rna_BlendDataObjects_remove_object,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this object before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataObjects_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataObjects_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataObjects_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataObjects_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataObjects_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this object",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataObjects_remove_func = {
	{(FunctionRNA *)&rna_BlendDataObjects_tag_func, (FunctionRNA *)&rna_BlendDataObjects_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataObjects_remove_object, (PropertyRNA *)&rna_BlendDataObjects_remove_do_ui_user}},
	"remove", 16, "Remove an object from the current blendfile",
	BlendDataObjects_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataObjects_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataObjects_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataObjects_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataObjects_tag_value, (PropertyRNA *)&rna_BlendDataObjects_tag_value}},
	"tag", 0, "tag",
	BlendDataObjects_tag_call,
	nullptr
};

StructRNA RNA_BlendDataObjects = {
	{(ContainerRNA *)&RNA_BlendDataMaterials, (ContainerRNA *)&RNA_BlendDataScenes,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataObjects_rna_properties, (PropertyRNA *)&rna_BlendDataObjects_rna_type}},
	"BlendDataObjects", nullptr, nullptr, 516, nullptr, "Main Objects",
	"Collection of objects",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataObjects_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataObjects_new_func, (FunctionRNA *)&rna_BlendDataObjects_tag_func}
};

/* Main Materials */
CollectionPropertyRNA rna_BlendDataMaterials_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMaterials_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMaterials_rna_properties_begin, BlendDataMaterials_rna_properties_next, BlendDataMaterials_rna_properties_end, BlendDataMaterials_rna_properties_get, nullptr, nullptr, BlendDataMaterials_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMaterials_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMaterials_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMaterials_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataMaterials_new_name = {
	{(PropertyRNA *)&rna_BlendDataMaterials_new_material, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Material"
};

PointerPropertyRNA rna_BlendDataMaterials_new_material = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMaterials_new_name,
	-1, "material", 8388736, 0, 2, 0, 0, "",
	"New material data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_new_func = {
	{(FunctionRNA *)&rna_BlendDataMaterials_create_gpencil_data_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMaterials_new_name, (PropertyRNA *)&rna_BlendDataMaterials_new_material}},
	"new", 0, "Add a new material to the main database",
	BlendDataMaterials_new_call,
	(PropertyRNA *)&rna_BlendDataMaterials_new_material
};

PointerPropertyRNA rna_BlendDataMaterials_create_gpencil_data_material = {
	{nullptr, nullptr,
	-1, "material", 8650880, 0, 5, 0, 0, "",
	"Material",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_create_gpencil_data_func = {
	{(FunctionRNA *)&rna_BlendDataMaterials_remove_gpencil_data_func, (FunctionRNA *)&rna_BlendDataMaterials_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMaterials_create_gpencil_data_material, (PropertyRNA *)&rna_BlendDataMaterials_create_gpencil_data_material}},
	"create_gpencil_data", 0, "Add grease pencil material settings",
	BlendDataMaterials_create_gpencil_data_call,
	nullptr
};

PointerPropertyRNA rna_BlendDataMaterials_remove_gpencil_data_material = {
	{nullptr, nullptr,
	-1, "material", 8650880, 0, 5, 0, 0, "",
	"Material",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_remove_gpencil_data_func = {
	{(FunctionRNA *)&rna_BlendDataMaterials_remove_func, (FunctionRNA *)&rna_BlendDataMaterials_create_gpencil_data_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMaterials_remove_gpencil_data_material, (PropertyRNA *)&rna_BlendDataMaterials_remove_gpencil_data_material}},
	"remove_gpencil_data", 0, "Remove grease pencil material settings",
	BlendDataMaterials_remove_gpencil_data_call,
	nullptr
};

PointerPropertyRNA rna_BlendDataMaterials_remove_material = {
	{(PropertyRNA *)&rna_BlendDataMaterials_remove_do_unlink, nullptr,
	-1, "material", 262272, 0, 5, 0, 0, "",
	"Material to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Material
};

BoolPropertyRNA rna_BlendDataMaterials_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataMaterials_remove_do_id_user, (PropertyRNA *)&rna_BlendDataMaterials_remove_material,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this material before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMaterials_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataMaterials_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataMaterials_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this material",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMaterials_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMaterials_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this material",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataMaterials_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMaterials_tag_func, (FunctionRNA *)&rna_BlendDataMaterials_remove_gpencil_data_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMaterials_remove_material, (PropertyRNA *)&rna_BlendDataMaterials_remove_do_ui_user}},
	"remove", 16, "Remove a material from the current blendfile",
	BlendDataMaterials_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataMaterials_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataMaterials_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataMaterials_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMaterials_tag_value, (PropertyRNA *)&rna_BlendDataMaterials_tag_value}},
	"tag", 0, "tag",
	BlendDataMaterials_tag_call,
	nullptr
};

StructRNA RNA_BlendDataMaterials = {
	{(ContainerRNA *)&RNA_BlendDataNodeTrees, (ContainerRNA *)&RNA_BlendDataObjects,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMaterials_rna_properties, (PropertyRNA *)&rna_BlendDataMaterials_rna_type}},
	"BlendDataMaterials", nullptr, nullptr, 516, nullptr, "Main Materials",
	"Collection of materials",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataMaterials_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataMaterials_new_func, (FunctionRNA *)&rna_BlendDataMaterials_tag_func}
};

/* Main Node Trees */
CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataNodeTrees_rna_properties_begin, BlendDataNodeTrees_rna_properties_next, BlendDataNodeTrees_rna_properties_end, BlendDataNodeTrees_rna_properties_get, nullptr, nullptr, BlendDataNodeTrees_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataNodeTrees_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataNodeTrees_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataNodeTrees_new_name = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_new_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "NodeGroup"
};

static const EnumPropertyItem rna_BlendDataNodeTrees_new_type_items[2] = {
	{0, "DUMMY", 0, "", ""},
	{0, nullptr, 0, nullptr, nullptr}
};

EnumPropertyRNA rna_BlendDataNodeTrees_new_type = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_new_tree, (PropertyRNA *)&rna_BlendDataNodeTrees_new_name,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"The type of node_group to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, rna_Main_nodetree_type_itemf, nullptr, nullptr, rna_BlendDataNodeTrees_new_type_items, 1, 0
};

PointerPropertyRNA rna_BlendDataNodeTrees_new_tree = {
	{nullptr, (PropertyRNA *)&rna_BlendDataNodeTrees_new_type,
	-1, "tree", 8388736, 0, 2, 0, 0, "",
	"New node tree data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NodeTree
};

FunctionRNA rna_BlendDataNodeTrees_new_func = {
	{(FunctionRNA *)&rna_BlendDataNodeTrees_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_new_name, (PropertyRNA *)&rna_BlendDataNodeTrees_new_tree}},
	"new", 0, "Add a new node tree to the main database",
	BlendDataNodeTrees_new_call,
	(PropertyRNA *)&rna_BlendDataNodeTrees_new_tree
};

PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_remove_do_unlink, nullptr,
	-1, "tree", 262272, 0, 5, 0, 0, "",
	"Node tree to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_NodeTree
};

BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_remove_do_id_user, (PropertyRNA *)&rna_BlendDataNodeTrees_remove_tree,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this node tree before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataNodeTrees_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this node tree",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataNodeTrees_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this node tree",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataNodeTrees_remove_func = {
	{(FunctionRNA *)&rna_BlendDataNodeTrees_tag_func, (FunctionRNA *)&rna_BlendDataNodeTrees_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_remove_tree, (PropertyRNA *)&rna_BlendDataNodeTrees_remove_do_ui_user}},
	"remove", 16, "Remove a node tree from the current blendfile",
	BlendDataNodeTrees_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataNodeTrees_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataNodeTrees_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataNodeTrees_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_tag_value, (PropertyRNA *)&rna_BlendDataNodeTrees_tag_value}},
	"tag", 0, "tag",
	BlendDataNodeTrees_tag_call,
	nullptr
};

StructRNA RNA_BlendDataNodeTrees = {
	{(ContainerRNA *)&RNA_BlendDataMeshes, (ContainerRNA *)&RNA_BlendDataMaterials,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties, (PropertyRNA *)&rna_BlendDataNodeTrees_rna_type}},
	"BlendDataNodeTrees", nullptr, nullptr, 516, nullptr, "Main Node Trees",
	"Collection of node trees",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataNodeTrees_new_func, (FunctionRNA *)&rna_BlendDataNodeTrees_tag_func}
};

/* Main Meshes */
CollectionPropertyRNA rna_BlendDataMeshes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMeshes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMeshes_rna_properties_begin, BlendDataMeshes_rna_properties_next, BlendDataMeshes_rna_properties_end, BlendDataMeshes_rna_properties_get, nullptr, nullptr, BlendDataMeshes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMeshes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMeshes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMeshes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataMeshes_new_name = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_mesh, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Mesh"
};

PointerPropertyRNA rna_BlendDataMeshes_new_mesh = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMeshes_new_name,
	-1, "mesh", 8388736, 0, 2, 0, 0, "",
	"New mesh data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_new_func = {
	{(FunctionRNA *)&rna_BlendDataMeshes_new_from_object_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMeshes_new_name, (PropertyRNA *)&rna_BlendDataMeshes_new_mesh}},
	"new", 0, "Add a new mesh to the main database",
	BlendDataMeshes_new_call,
	(PropertyRNA *)&rna_BlendDataMeshes_new_mesh
};

PointerPropertyRNA rna_BlendDataMeshes_new_from_object_object = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_preserve_all_data_layers, nullptr,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"Object to create mesh from",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Object
};

BoolPropertyRNA rna_BlendDataMeshes_new_from_object_preserve_all_data_layers = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_depsgraph, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_object,
	-1, "preserve_all_data_layers", 3, 0, 0, 0, 0, "",
	"Preserve all data layers in the mesh, like UV maps and vertex groups. By default Blender only computes the subset of data layers needed for viewport display and rendering, for better performance",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataMeshes_new_from_object_depsgraph = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_mesh, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_preserve_all_data_layers,
	-1, "depsgraph", 8388608, 0, 0, 0, 0, "Dependency Graph",
	"Evaluated dependency graph which is required when preserve_all_data_layers is true",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Depsgraph
};

PointerPropertyRNA rna_BlendDataMeshes_new_from_object_mesh = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_depsgraph,
	-1, "mesh", 8388736, 0, 2, 0, 0, "",
	"Mesh created from object, remove it if it is only used for export",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_new_from_object_func = {
	{(FunctionRNA *)&rna_BlendDataMeshes_remove_func, (FunctionRNA *)&rna_BlendDataMeshes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_object, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_mesh}},
	"new_from_object", 16, "Add a new mesh created from given object (undeformed geometry if object is original, and final evaluated geometry, with all modifiers etc., if object is evaluated)",
	BlendDataMeshes_new_from_object_call,
	(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_mesh
};

PointerPropertyRNA rna_BlendDataMeshes_remove_mesh = {
	{(PropertyRNA *)&rna_BlendDataMeshes_remove_do_unlink, nullptr,
	-1, "mesh", 262272, 0, 5, 0, 0, "",
	"Mesh to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mesh
};

BoolPropertyRNA rna_BlendDataMeshes_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataMeshes_remove_do_id_user, (PropertyRNA *)&rna_BlendDataMeshes_remove_mesh,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this mesh before deleting it (WARNING: will also delete objects instancing that mesh data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMeshes_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataMeshes_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataMeshes_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this mesh data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMeshes_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMeshes_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this mesh data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataMeshes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMeshes_tag_func, (FunctionRNA *)&rna_BlendDataMeshes_new_from_object_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMeshes_remove_mesh, (PropertyRNA *)&rna_BlendDataMeshes_remove_do_ui_user}},
	"remove", 16, "Remove a mesh from the current blendfile",
	BlendDataMeshes_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataMeshes_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataMeshes_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataMeshes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMeshes_tag_value, (PropertyRNA *)&rna_BlendDataMeshes_tag_value}},
	"tag", 0, "tag",
	BlendDataMeshes_tag_call,
	nullptr
};

StructRNA RNA_BlendDataMeshes = {
	{(ContainerRNA *)&RNA_BlendDataLights, (ContainerRNA *)&RNA_BlendDataNodeTrees,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMeshes_rna_properties, (PropertyRNA *)&rna_BlendDataMeshes_rna_type}},
	"BlendDataMeshes", nullptr, nullptr, 516, nullptr, "Main Meshes",
	"Collection of meshes",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataMeshes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataMeshes_new_func, (FunctionRNA *)&rna_BlendDataMeshes_tag_func}
};

/* Main Lights */
CollectionPropertyRNA rna_BlendDataLights_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLights_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLights_rna_properties_begin, BlendDataLights_rna_properties_next, BlendDataLights_rna_properties_end, BlendDataLights_rna_properties_get, nullptr, nullptr, BlendDataLights_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLights_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLights_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLights_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataLights_new_name = {
	{(PropertyRNA *)&rna_BlendDataLights_new_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Light"
};

EnumPropertyRNA rna_BlendDataLights_new_type = {
	{(PropertyRNA *)&rna_BlendDataLights_new_light, (PropertyRNA *)&rna_BlendDataLights_new_name,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"The type of light to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_light_type_items, 4, 0
};

PointerPropertyRNA rna_BlendDataLights_new_light = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLights_new_type,
	-1, "light", 8388736, 0, 2, 0, 0, "",
	"New light data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Light
};

FunctionRNA rna_BlendDataLights_new_func = {
	{(FunctionRNA *)&rna_BlendDataLights_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLights_new_name, (PropertyRNA *)&rna_BlendDataLights_new_light}},
	"new", 0, "Add a new light to the main database",
	BlendDataLights_new_call,
	(PropertyRNA *)&rna_BlendDataLights_new_light
};

PointerPropertyRNA rna_BlendDataLights_remove_light = {
	{(PropertyRNA *)&rna_BlendDataLights_remove_do_unlink, nullptr,
	-1, "light", 262272, 0, 5, 0, 0, "",
	"Light to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Light
};

BoolPropertyRNA rna_BlendDataLights_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataLights_remove_do_id_user, (PropertyRNA *)&rna_BlendDataLights_remove_light,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this light before deleting it (WARNING: will also delete objects instancing that light data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLights_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataLights_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataLights_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this light data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLights_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLights_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this light data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataLights_remove_func = {
	{(FunctionRNA *)&rna_BlendDataLights_tag_func, (FunctionRNA *)&rna_BlendDataLights_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLights_remove_light, (PropertyRNA *)&rna_BlendDataLights_remove_do_ui_user}},
	"remove", 16, "Remove a light from the current blendfile",
	BlendDataLights_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataLights_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataLights_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataLights_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLights_tag_value, (PropertyRNA *)&rna_BlendDataLights_tag_value}},
	"tag", 0, "tag",
	BlendDataLights_tag_call,
	nullptr
};

StructRNA RNA_BlendDataLights = {
	{(ContainerRNA *)&RNA_BlendDataLibraries, (ContainerRNA *)&RNA_BlendDataMeshes,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLights_rna_properties, (PropertyRNA *)&rna_BlendDataLights_rna_type}},
	"BlendDataLights", nullptr, nullptr, 516, nullptr, "Main Lights",
	"Collection of lights",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataLights_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataLights_new_func, (FunctionRNA *)&rna_BlendDataLights_tag_func}
};

/* Main Libraries */
CollectionPropertyRNA rna_BlendDataLibraries_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLibraries_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLibraries_rna_properties_begin, BlendDataLibraries_rna_properties_next, BlendDataLibraries_rna_properties_end, BlendDataLibraries_rna_properties_get, nullptr, nullptr, BlendDataLibraries_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLibraries_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLibraries_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLibraries_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataLibraries_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataLibraries_tag_func = {
	{(FunctionRNA *)&rna_BlendDataLibraries_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLibraries_tag_value, (PropertyRNA *)&rna_BlendDataLibraries_tag_value}},
	"tag", 0, "tag",
	BlendDataLibraries_tag_call,
	nullptr
};

PointerPropertyRNA rna_BlendDataLibraries_remove_library = {
	{(PropertyRNA *)&rna_BlendDataLibraries_remove_do_unlink, nullptr,
	-1, "library", 262272, 0, 5, 0, 0, "",
	"Library to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Library
};

BoolPropertyRNA rna_BlendDataLibraries_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataLibraries_remove_do_id_user, (PropertyRNA *)&rna_BlendDataLibraries_remove_library,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this library before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLibraries_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataLibraries_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataLibraries_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this library",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLibraries_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLibraries_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this library",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataLibraries_remove_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataLibraries_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLibraries_remove_library, (PropertyRNA *)&rna_BlendDataLibraries_remove_do_ui_user}},
	"remove", 16, "Remove a library from the current blendfile",
	BlendDataLibraries_remove_call,
	nullptr
};

StructRNA RNA_BlendDataLibraries = {
	{(ContainerRNA *)&RNA_BlendDataScreens, (ContainerRNA *)&RNA_BlendDataLights,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLibraries_rna_properties, (PropertyRNA *)&rna_BlendDataLibraries_rna_type}},
	"BlendDataLibraries", nullptr, nullptr, 516, nullptr, "Main Libraries",
	"Collection of libraries",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataLibraries_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataLibraries_tag_func, (FunctionRNA *)&rna_BlendDataLibraries_remove_func}
};

/* Main Screens */
CollectionPropertyRNA rna_BlendDataScreens_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataScreens_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataScreens_rna_properties_begin, BlendDataScreens_rna_properties_next, BlendDataScreens_rna_properties_end, BlendDataScreens_rna_properties_get, nullptr, nullptr, BlendDataScreens_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataScreens_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataScreens_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataScreens_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataScreens_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataScreens_tag_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataScreens_tag_value, (PropertyRNA *)&rna_BlendDataScreens_tag_value}},
	"tag", 0, "tag",
	BlendDataScreens_tag_call,
	nullptr
};

StructRNA RNA_BlendDataScreens = {
	{(ContainerRNA *)&RNA_BlendDataWindowManagers, (ContainerRNA *)&RNA_BlendDataLibraries,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataScreens_rna_properties, (PropertyRNA *)&rna_BlendDataScreens_rna_type}},
	"BlendDataScreens", nullptr, nullptr, 516, nullptr, "Main Screens",
	"Collection of screens",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataScreens_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataScreens_tag_func, (FunctionRNA *)&rna_BlendDataScreens_tag_func}
};

/* Main Window Managers */
CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataWindowManagers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataWindowManagers_rna_properties_begin, BlendDataWindowManagers_rna_properties_next, BlendDataWindowManagers_rna_properties_end, BlendDataWindowManagers_rna_properties_get, nullptr, nullptr, BlendDataWindowManagers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataWindowManagers_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataWindowManagers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataWindowManagers_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataWindowManagers_tag_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWindowManagers_tag_value, (PropertyRNA *)&rna_BlendDataWindowManagers_tag_value}},
	"tag", 0, "tag",
	BlendDataWindowManagers_tag_call,
	nullptr
};

StructRNA RNA_BlendDataWindowManagers = {
	{(ContainerRNA *)&RNA_BlendDataImages, (ContainerRNA *)&RNA_BlendDataScreens,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties, (PropertyRNA *)&rna_BlendDataWindowManagers_rna_type}},
	"BlendDataWindowManagers", nullptr, nullptr, 516, nullptr, "Main Window Managers",
	"Collection of window managers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataWindowManagers_tag_func, (FunctionRNA *)&rna_BlendDataWindowManagers_tag_func}
};

/* Main Images */
CollectionPropertyRNA rna_BlendDataImages_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataImages_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataImages_rna_properties_begin, BlendDataImages_rna_properties_next, BlendDataImages_rna_properties_end, BlendDataImages_rna_properties_get, nullptr, nullptr, BlendDataImages_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataImages_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataImages_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataImages_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataImages_new_name = {
	{(PropertyRNA *)&rna_BlendDataImages_new_width, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Image"
};

IntPropertyRNA rna_BlendDataImages_new_width = {
	{(PropertyRNA *)&rna_BlendDataImages_new_height, (PropertyRNA *)&rna_BlendDataImages_new_name,
	-1, "width", 3, 0, 1, 0, 0, "",
	"Width of the image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, 1024, nullptr
};

IntPropertyRNA rna_BlendDataImages_new_height = {
	{(PropertyRNA *)&rna_BlendDataImages_new_alpha, (PropertyRNA *)&rna_BlendDataImages_new_width,
	-1, "height", 3, 0, 1, 0, 0, "",
	"Height of the image",
	0, "*",
	PROP_INT, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, 1024, nullptr
};

BoolPropertyRNA rna_BlendDataImages_new_alpha = {
	{(PropertyRNA *)&rna_BlendDataImages_new_float_buffer, (PropertyRNA *)&rna_BlendDataImages_new_height,
	-1, "alpha", 3, 0, 0, 0, 0, "Alpha",
	"Use alpha channel",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BlendDataImages_new_float_buffer = {
	{(PropertyRNA *)&rna_BlendDataImages_new_stereo3d, (PropertyRNA *)&rna_BlendDataImages_new_alpha,
	-1, "float_buffer", 3, 0, 0, 0, 0, "Float Buffer",
	"Create an image with floating-point color",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BlendDataImages_new_stereo3d = {
	{(PropertyRNA *)&rna_BlendDataImages_new_is_data, (PropertyRNA *)&rna_BlendDataImages_new_float_buffer,
	-1, "stereo3d", 3, 0, 0, 0, 0, "Stereo 3D",
	"Create left and right views",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BlendDataImages_new_is_data = {
	{(PropertyRNA *)&rna_BlendDataImages_new_tiled, (PropertyRNA *)&rna_BlendDataImages_new_stereo3d,
	-1, "is_data", 3, 0, 0, 0, 0, "Is Data",
	"Create image with non-color data color space",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

BoolPropertyRNA rna_BlendDataImages_new_tiled = {
	{(PropertyRNA *)&rna_BlendDataImages_new_image, (PropertyRNA *)&rna_BlendDataImages_new_is_data,
	-1, "tiled", 3, 0, 0, 0, 0, "Tiled",
	"Create a tiled image",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataImages_new_image = {
	{nullptr, (PropertyRNA *)&rna_BlendDataImages_new_tiled,
	-1, "image", 8388736, 0, 2, 0, 0, "",
	"New image data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Image
};

FunctionRNA rna_BlendDataImages_new_func = {
	{(FunctionRNA *)&rna_BlendDataImages_load_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataImages_new_name, (PropertyRNA *)&rna_BlendDataImages_new_image}},
	"new", 0, "Add a new image to the main database",
	BlendDataImages_new_call,
	(PropertyRNA *)&rna_BlendDataImages_new_image
};

StringPropertyRNA rna_BlendDataImages_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataImages_load_check_existing, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"Path of the file to load",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "File Path"
};

BoolPropertyRNA rna_BlendDataImages_load_check_existing = {
	{(PropertyRNA *)&rna_BlendDataImages_load_image, (PropertyRNA *)&rna_BlendDataImages_load_filepath,
	-1, "check_existing", 3, 0, 0, 0, 0, "",
	"Using existing data-block if this file is already loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataImages_load_image = {
	{nullptr, (PropertyRNA *)&rna_BlendDataImages_load_check_existing,
	-1, "image", 8388736, 0, 2, 0, 0, "",
	"New image data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Image
};

FunctionRNA rna_BlendDataImages_load_func = {
	{(FunctionRNA *)&rna_BlendDataImages_remove_func, (FunctionRNA *)&rna_BlendDataImages_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataImages_load_filepath, (PropertyRNA *)&rna_BlendDataImages_load_image}},
	"load", 16, "Load a new image into the main database",
	BlendDataImages_load_call,
	(PropertyRNA *)&rna_BlendDataImages_load_image
};

PointerPropertyRNA rna_BlendDataImages_remove_image = {
	{(PropertyRNA *)&rna_BlendDataImages_remove_do_unlink, nullptr,
	-1, "image", 262272, 0, 5, 0, 0, "",
	"Image to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Image
};

BoolPropertyRNA rna_BlendDataImages_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataImages_remove_do_id_user, (PropertyRNA *)&rna_BlendDataImages_remove_image,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this image before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataImages_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataImages_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataImages_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this image",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataImages_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataImages_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this image",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataImages_remove_func = {
	{(FunctionRNA *)&rna_BlendDataImages_tag_func, (FunctionRNA *)&rna_BlendDataImages_load_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataImages_remove_image, (PropertyRNA *)&rna_BlendDataImages_remove_do_ui_user}},
	"remove", 16, "Remove an image from the current blendfile",
	BlendDataImages_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataImages_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataImages_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataImages_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataImages_tag_value, (PropertyRNA *)&rna_BlendDataImages_tag_value}},
	"tag", 0, "tag",
	BlendDataImages_tag_call,
	nullptr
};

StructRNA RNA_BlendDataImages = {
	{(ContainerRNA *)&RNA_BlendDataLattices, (ContainerRNA *)&RNA_BlendDataWindowManagers,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataImages_rna_properties, (PropertyRNA *)&rna_BlendDataImages_rna_type}},
	"BlendDataImages", nullptr, nullptr, 516, nullptr, "Main Images",
	"Collection of images",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataImages_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataImages_new_func, (FunctionRNA *)&rna_BlendDataImages_tag_func}
};

/* Main Lattices */
CollectionPropertyRNA rna_BlendDataLattices_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLattices_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLattices_rna_properties_begin, BlendDataLattices_rna_properties_next, BlendDataLattices_rna_properties_end, BlendDataLattices_rna_properties_get, nullptr, nullptr, BlendDataLattices_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLattices_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLattices_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLattices_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataLattices_new_name = {
	{(PropertyRNA *)&rna_BlendDataLattices_new_lattice, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Lattice"
};

PointerPropertyRNA rna_BlendDataLattices_new_lattice = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLattices_new_name,
	-1, "lattice", 8388736, 0, 2, 0, 0, "",
	"New lattice data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Lattice
};

FunctionRNA rna_BlendDataLattices_new_func = {
	{(FunctionRNA *)&rna_BlendDataLattices_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLattices_new_name, (PropertyRNA *)&rna_BlendDataLattices_new_lattice}},
	"new", 0, "Add a new lattice to the main database",
	BlendDataLattices_new_call,
	(PropertyRNA *)&rna_BlendDataLattices_new_lattice
};

PointerPropertyRNA rna_BlendDataLattices_remove_lattice = {
	{(PropertyRNA *)&rna_BlendDataLattices_remove_do_unlink, nullptr,
	-1, "lattice", 262272, 0, 5, 0, 0, "",
	"Lattice to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Lattice
};

BoolPropertyRNA rna_BlendDataLattices_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataLattices_remove_do_id_user, (PropertyRNA *)&rna_BlendDataLattices_remove_lattice,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this lattice before deleting it (WARNING: will also delete objects instancing that lattice data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLattices_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataLattices_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataLattices_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this lattice data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLattices_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLattices_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this lattice data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataLattices_remove_func = {
	{(FunctionRNA *)&rna_BlendDataLattices_tag_func, (FunctionRNA *)&rna_BlendDataLattices_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLattices_remove_lattice, (PropertyRNA *)&rna_BlendDataLattices_remove_do_ui_user}},
	"remove", 16, "Remove a lattice from the current blendfile",
	BlendDataLattices_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataLattices_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataLattices_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataLattices_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLattices_tag_value, (PropertyRNA *)&rna_BlendDataLattices_tag_value}},
	"tag", 0, "tag",
	BlendDataLattices_tag_call,
	nullptr
};

StructRNA RNA_BlendDataLattices = {
	{(ContainerRNA *)&RNA_BlendDataCurves, (ContainerRNA *)&RNA_BlendDataImages,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLattices_rna_properties, (PropertyRNA *)&rna_BlendDataLattices_rna_type}},
	"BlendDataLattices", nullptr, nullptr, 516, nullptr, "Main Lattices",
	"Collection of lattices",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataLattices_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataLattices_new_func, (FunctionRNA *)&rna_BlendDataLattices_tag_func}
};

/* Main Curves */
CollectionPropertyRNA rna_BlendDataCurves_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataCurves_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCurves_rna_properties_begin, BlendDataCurves_rna_properties_next, BlendDataCurves_rna_properties_end, BlendDataCurves_rna_properties_get, nullptr, nullptr, BlendDataCurves_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataCurves_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCurves_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCurves_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataCurves_new_name = {
	{(PropertyRNA *)&rna_BlendDataCurves_new_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Curve"
};

EnumPropertyRNA rna_BlendDataCurves_new_type = {
	{(PropertyRNA *)&rna_BlendDataCurves_new_curve, (PropertyRNA *)&rna_BlendDataCurves_new_name,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"The type of curve to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_type_curve_items, 3, 2
};

PointerPropertyRNA rna_BlendDataCurves_new_curve = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCurves_new_type,
	-1, "curve", 8388736, 0, 2, 0, 0, "",
	"New curve data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Curve
};

FunctionRNA rna_BlendDataCurves_new_func = {
	{(FunctionRNA *)&rna_BlendDataCurves_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCurves_new_name, (PropertyRNA *)&rna_BlendDataCurves_new_curve}},
	"new", 0, "Add a new curve to the main database",
	BlendDataCurves_new_call,
	(PropertyRNA *)&rna_BlendDataCurves_new_curve
};

PointerPropertyRNA rna_BlendDataCurves_remove_curve = {
	{(PropertyRNA *)&rna_BlendDataCurves_remove_do_unlink, nullptr,
	-1, "curve", 262272, 0, 5, 0, 0, "",
	"Curve to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Curve
};

BoolPropertyRNA rna_BlendDataCurves_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataCurves_remove_do_id_user, (PropertyRNA *)&rna_BlendDataCurves_remove_curve,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this curve before deleting it (WARNING: will also delete objects instancing that curve data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataCurves_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataCurves_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataCurves_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this curve data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataCurves_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCurves_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this curve data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataCurves_remove_func = {
	{(FunctionRNA *)&rna_BlendDataCurves_tag_func, (FunctionRNA *)&rna_BlendDataCurves_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCurves_remove_curve, (PropertyRNA *)&rna_BlendDataCurves_remove_do_ui_user}},
	"remove", 16, "Remove a curve from the current blendfile",
	BlendDataCurves_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataCurves_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataCurves_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataCurves_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCurves_tag_value, (PropertyRNA *)&rna_BlendDataCurves_tag_value}},
	"tag", 0, "tag",
	BlendDataCurves_tag_call,
	nullptr
};

StructRNA RNA_BlendDataCurves = {
	{(ContainerRNA *)&RNA_BlendDataMetaBalls, (ContainerRNA *)&RNA_BlendDataLattices,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCurves_rna_properties, (PropertyRNA *)&rna_BlendDataCurves_rna_type}},
	"BlendDataCurves", nullptr, nullptr, 516, nullptr, "Main Curves",
	"Collection of curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataCurves_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataCurves_new_func, (FunctionRNA *)&rna_BlendDataCurves_tag_func}
};

/* Main Metaballs */
CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMetaBalls_rna_properties_begin, BlendDataMetaBalls_rna_properties_next, BlendDataMetaBalls_rna_properties_end, BlendDataMetaBalls_rna_properties_get, nullptr, nullptr, BlendDataMetaBalls_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMetaBalls_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMetaBalls_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataMetaBalls_new_name = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_new_metaball, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "MetaBall"
};

PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMetaBalls_new_name,
	-1, "metaball", 8388736, 0, 2, 0, 0, "",
	"New metaball data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MetaBall
};

FunctionRNA rna_BlendDataMetaBalls_new_func = {
	{(FunctionRNA *)&rna_BlendDataMetaBalls_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_new_name, (PropertyRNA *)&rna_BlendDataMetaBalls_new_metaball}},
	"new", 0, "Add a new metaball to the main database",
	BlendDataMetaBalls_new_call,
	(PropertyRNA *)&rna_BlendDataMetaBalls_new_metaball
};

PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_remove_do_unlink, nullptr,
	-1, "metaball", 262272, 0, 5, 0, 0, "",
	"Metaball to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MetaBall
};

BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_remove_do_id_user, (PropertyRNA *)&rna_BlendDataMetaBalls_remove_metaball,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this metaball before deleting it (WARNING: will also delete objects instancing that metaball data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataMetaBalls_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this metaball data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMetaBalls_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this metaball data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataMetaBalls_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMetaBalls_tag_func, (FunctionRNA *)&rna_BlendDataMetaBalls_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_remove_metaball, (PropertyRNA *)&rna_BlendDataMetaBalls_remove_do_ui_user}},
	"remove", 16, "Remove a metaball from the current blendfile",
	BlendDataMetaBalls_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataMetaBalls_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataMetaBalls_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataMetaBalls_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_tag_value, (PropertyRNA *)&rna_BlendDataMetaBalls_tag_value}},
	"tag", 0, "tag",
	BlendDataMetaBalls_tag_call,
	nullptr
};

StructRNA RNA_BlendDataMetaBalls = {
	{(ContainerRNA *)&RNA_BlendDataFonts, (ContainerRNA *)&RNA_BlendDataCurves,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties, (PropertyRNA *)&rna_BlendDataMetaBalls_rna_type}},
	"BlendDataMetaBalls", nullptr, nullptr, 516, nullptr, "Main Metaballs",
	"Collection of metaballs",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataMetaBalls_new_func, (FunctionRNA *)&rna_BlendDataMetaBalls_tag_func}
};

/* Main Fonts */
CollectionPropertyRNA rna_BlendDataFonts_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataFonts_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataFonts_rna_properties_begin, BlendDataFonts_rna_properties_next, BlendDataFonts_rna_properties_end, BlendDataFonts_rna_properties_get, nullptr, nullptr, BlendDataFonts_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataFonts_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataFonts_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataFonts_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataFonts_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataFonts_load_check_existing, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"path of the font to load",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "File Path"
};

BoolPropertyRNA rna_BlendDataFonts_load_check_existing = {
	{(PropertyRNA *)&rna_BlendDataFonts_load_vfont, (PropertyRNA *)&rna_BlendDataFonts_load_filepath,
	-1, "check_existing", 3, 0, 0, 0, 0, "",
	"Using existing data-block if this file is already loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataFonts_load_vfont = {
	{nullptr, (PropertyRNA *)&rna_BlendDataFonts_load_check_existing,
	-1, "vfont", 8388736, 0, 2, 0, 0, "",
	"New font data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_VectorFont
};

FunctionRNA rna_BlendDataFonts_load_func = {
	{(FunctionRNA *)&rna_BlendDataFonts_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataFonts_load_filepath, (PropertyRNA *)&rna_BlendDataFonts_load_vfont}},
	"load", 16, "Load a new font into the main database",
	BlendDataFonts_load_call,
	(PropertyRNA *)&rna_BlendDataFonts_load_vfont
};

PointerPropertyRNA rna_BlendDataFonts_remove_vfont = {
	{(PropertyRNA *)&rna_BlendDataFonts_remove_do_unlink, nullptr,
	-1, "vfont", 262272, 0, 5, 0, 0, "",
	"Font to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_VectorFont
};

BoolPropertyRNA rna_BlendDataFonts_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataFonts_remove_do_id_user, (PropertyRNA *)&rna_BlendDataFonts_remove_vfont,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this font before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataFonts_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataFonts_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataFonts_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this font",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataFonts_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataFonts_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this font",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataFonts_remove_func = {
	{(FunctionRNA *)&rna_BlendDataFonts_tag_func, (FunctionRNA *)&rna_BlendDataFonts_load_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataFonts_remove_vfont, (PropertyRNA *)&rna_BlendDataFonts_remove_do_ui_user}},
	"remove", 16, "Remove a font from the current blendfile",
	BlendDataFonts_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataFonts_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataFonts_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataFonts_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataFonts_tag_value, (PropertyRNA *)&rna_BlendDataFonts_tag_value}},
	"tag", 0, "tag",
	BlendDataFonts_tag_call,
	nullptr
};

StructRNA RNA_BlendDataFonts = {
	{(ContainerRNA *)&RNA_BlendDataTextures, (ContainerRNA *)&RNA_BlendDataMetaBalls,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataFonts_rna_properties, (PropertyRNA *)&rna_BlendDataFonts_rna_type}},
	"BlendDataFonts", nullptr, nullptr, 516, nullptr, "Main Fonts",
	"Collection of fonts",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataFonts_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataFonts_load_func, (FunctionRNA *)&rna_BlendDataFonts_tag_func}
};

/* Main Textures */
CollectionPropertyRNA rna_BlendDataTextures_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataTextures_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataTextures_rna_properties_begin, BlendDataTextures_rna_properties_next, BlendDataTextures_rna_properties_end, BlendDataTextures_rna_properties_get, nullptr, nullptr, BlendDataTextures_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataTextures_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTextures_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataTextures_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataTextures_new_name = {
	{(PropertyRNA *)&rna_BlendDataTextures_new_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Texture"
};

EnumPropertyRNA rna_BlendDataTextures_new_type = {
	{(PropertyRNA *)&rna_BlendDataTextures_new_texture, (PropertyRNA *)&rna_BlendDataTextures_new_name,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"The type of texture to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_texture_type_items, 12, 0
};

PointerPropertyRNA rna_BlendDataTextures_new_texture = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTextures_new_type,
	-1, "texture", 8388736, 0, 2, 0, 0, "",
	"New texture data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Texture
};

FunctionRNA rna_BlendDataTextures_new_func = {
	{(FunctionRNA *)&rna_BlendDataTextures_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTextures_new_name, (PropertyRNA *)&rna_BlendDataTextures_new_texture}},
	"new", 0, "Add a new texture to the main database",
	BlendDataTextures_new_call,
	(PropertyRNA *)&rna_BlendDataTextures_new_texture
};

PointerPropertyRNA rna_BlendDataTextures_remove_texture = {
	{(PropertyRNA *)&rna_BlendDataTextures_remove_do_unlink, nullptr,
	-1, "texture", 262272, 0, 5, 0, 0, "",
	"Texture to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Texture
};

BoolPropertyRNA rna_BlendDataTextures_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataTextures_remove_do_id_user, (PropertyRNA *)&rna_BlendDataTextures_remove_texture,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this texture before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataTextures_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataTextures_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataTextures_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this texture",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataTextures_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTextures_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this texture",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataTextures_remove_func = {
	{(FunctionRNA *)&rna_BlendDataTextures_tag_func, (FunctionRNA *)&rna_BlendDataTextures_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTextures_remove_texture, (PropertyRNA *)&rna_BlendDataTextures_remove_do_ui_user}},
	"remove", 16, "Remove a texture from the current blendfile",
	BlendDataTextures_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataTextures_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataTextures_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataTextures_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTextures_tag_value, (PropertyRNA *)&rna_BlendDataTextures_tag_value}},
	"tag", 0, "tag",
	BlendDataTextures_tag_call,
	nullptr
};

StructRNA RNA_BlendDataTextures = {
	{(ContainerRNA *)&RNA_BlendDataBrushes, (ContainerRNA *)&RNA_BlendDataFonts,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTextures_rna_properties, (PropertyRNA *)&rna_BlendDataTextures_rna_type}},
	"BlendDataTextures", nullptr, nullptr, 516, nullptr, "Main Textures",
	"Collection of textures",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataTextures_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataTextures_new_func, (FunctionRNA *)&rna_BlendDataTextures_tag_func}
};

/* Main Brushes */
CollectionPropertyRNA rna_BlendDataBrushes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataBrushes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataBrushes_rna_properties_begin, BlendDataBrushes_rna_properties_next, BlendDataBrushes_rna_properties_end, BlendDataBrushes_rna_properties_get, nullptr, nullptr, BlendDataBrushes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataBrushes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataBrushes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataBrushes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataBrushes_new_name = {
	{(PropertyRNA *)&rna_BlendDataBrushes_new_mode, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Brush"
};

EnumPropertyRNA rna_BlendDataBrushes_new_mode = {
	{(PropertyRNA *)&rna_BlendDataBrushes_new_brush, (PropertyRNA *)&rna_BlendDataBrushes_new_name,
	-1, "mode", 3, 0, 0, 0, 0, "",
	"Paint Mode for the new brush",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_mode_items, 15, 16
};

PointerPropertyRNA rna_BlendDataBrushes_new_brush = {
	{nullptr, (PropertyRNA *)&rna_BlendDataBrushes_new_mode,
	-1, "brush", 8388736, 0, 2, 0, 0, "",
	"New brush data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Brush
};

FunctionRNA rna_BlendDataBrushes_new_func = {
	{(FunctionRNA *)&rna_BlendDataBrushes_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataBrushes_new_name, (PropertyRNA *)&rna_BlendDataBrushes_new_brush}},
	"new", 0, "Add a new brush to the main database",
	BlendDataBrushes_new_call,
	(PropertyRNA *)&rna_BlendDataBrushes_new_brush
};

PointerPropertyRNA rna_BlendDataBrushes_remove_brush = {
	{(PropertyRNA *)&rna_BlendDataBrushes_remove_do_unlink, nullptr,
	-1, "brush", 262272, 0, 5, 0, 0, "",
	"Brush to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Brush
};

BoolPropertyRNA rna_BlendDataBrushes_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataBrushes_remove_do_id_user, (PropertyRNA *)&rna_BlendDataBrushes_remove_brush,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this brush before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataBrushes_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataBrushes_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataBrushes_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this brush",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataBrushes_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataBrushes_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this brush",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataBrushes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataBrushes_tag_func, (FunctionRNA *)&rna_BlendDataBrushes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataBrushes_remove_brush, (PropertyRNA *)&rna_BlendDataBrushes_remove_do_ui_user}},
	"remove", 16, "Remove a brush from the current blendfile",
	BlendDataBrushes_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataBrushes_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataBrushes_tag_func = {
	{(FunctionRNA *)&rna_BlendDataBrushes_create_gpencil_data_func, (FunctionRNA *)&rna_BlendDataBrushes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataBrushes_tag_value, (PropertyRNA *)&rna_BlendDataBrushes_tag_value}},
	"tag", 0, "tag",
	BlendDataBrushes_tag_call,
	nullptr
};

PointerPropertyRNA rna_BlendDataBrushes_create_gpencil_data_brush = {
	{nullptr, nullptr,
	-1, "brush", 8650880, 0, 5, 0, 0, "",
	"Brush",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Brush
};

FunctionRNA rna_BlendDataBrushes_create_gpencil_data_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataBrushes_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataBrushes_create_gpencil_data_brush, (PropertyRNA *)&rna_BlendDataBrushes_create_gpencil_data_brush}},
	"create_gpencil_data", 0, "Add grease pencil brush settings",
	BlendDataBrushes_create_gpencil_data_call,
	nullptr
};

StructRNA RNA_BlendDataBrushes = {
	{(ContainerRNA *)&RNA_BlendDataWorlds, (ContainerRNA *)&RNA_BlendDataTextures,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataBrushes_rna_properties, (PropertyRNA *)&rna_BlendDataBrushes_rna_type}},
	"BlendDataBrushes", nullptr, nullptr, 516, nullptr, "Main Brushes",
	"Collection of brushes",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataBrushes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataBrushes_new_func, (FunctionRNA *)&rna_BlendDataBrushes_create_gpencil_data_func}
};

/* Main Worlds */
CollectionPropertyRNA rna_BlendDataWorlds_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataWorlds_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataWorlds_rna_properties_begin, BlendDataWorlds_rna_properties_next, BlendDataWorlds_rna_properties_end, BlendDataWorlds_rna_properties_get, nullptr, nullptr, BlendDataWorlds_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataWorlds_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataWorlds_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataWorlds_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataWorlds_new_name = {
	{(PropertyRNA *)&rna_BlendDataWorlds_new_world, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "World"
};

PointerPropertyRNA rna_BlendDataWorlds_new_world = {
	{nullptr, (PropertyRNA *)&rna_BlendDataWorlds_new_name,
	-1, "world", 8388736, 0, 2, 0, 0, "",
	"New world data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_World
};

FunctionRNA rna_BlendDataWorlds_new_func = {
	{(FunctionRNA *)&rna_BlendDataWorlds_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWorlds_new_name, (PropertyRNA *)&rna_BlendDataWorlds_new_world}},
	"new", 0, "Add a new world to the main database",
	BlendDataWorlds_new_call,
	(PropertyRNA *)&rna_BlendDataWorlds_new_world
};

PointerPropertyRNA rna_BlendDataWorlds_remove_world = {
	{(PropertyRNA *)&rna_BlendDataWorlds_remove_do_unlink, nullptr,
	-1, "world", 262272, 0, 5, 0, 0, "",
	"World to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_World
};

BoolPropertyRNA rna_BlendDataWorlds_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataWorlds_remove_do_id_user, (PropertyRNA *)&rna_BlendDataWorlds_remove_world,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this world before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataWorlds_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataWorlds_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataWorlds_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this world",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataWorlds_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataWorlds_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this world",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataWorlds_remove_func = {
	{(FunctionRNA *)&rna_BlendDataWorlds_tag_func, (FunctionRNA *)&rna_BlendDataWorlds_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWorlds_remove_world, (PropertyRNA *)&rna_BlendDataWorlds_remove_do_ui_user}},
	"remove", 16, "Remove a world from the current blendfile",
	BlendDataWorlds_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataWorlds_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataWorlds_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataWorlds_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWorlds_tag_value, (PropertyRNA *)&rna_BlendDataWorlds_tag_value}},
	"tag", 0, "tag",
	BlendDataWorlds_tag_call,
	nullptr
};

StructRNA RNA_BlendDataWorlds = {
	{(ContainerRNA *)&RNA_BlendDataCollections, (ContainerRNA *)&RNA_BlendDataBrushes,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWorlds_rna_properties, (PropertyRNA *)&rna_BlendDataWorlds_rna_type}},
	"BlendDataWorlds", nullptr, nullptr, 516, nullptr, "Main Worlds",
	"Collection of worlds",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataWorlds_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataWorlds_new_func, (FunctionRNA *)&rna_BlendDataWorlds_tag_func}
};

/* Main Collections */
CollectionPropertyRNA rna_BlendDataCollections_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataCollections_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCollections_rna_properties_begin, BlendDataCollections_rna_properties_next, BlendDataCollections_rna_properties_end, BlendDataCollections_rna_properties_get, nullptr, nullptr, BlendDataCollections_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataCollections_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCollections_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCollections_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataCollections_new_name = {
	{(PropertyRNA *)&rna_BlendDataCollections_new_collection, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Collection"
};

PointerPropertyRNA rna_BlendDataCollections_new_collection = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCollections_new_name,
	-1, "collection", 8388736, 0, 2, 0, 0, "",
	"New collection data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Collection
};

FunctionRNA rna_BlendDataCollections_new_func = {
	{(FunctionRNA *)&rna_BlendDataCollections_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCollections_new_name, (PropertyRNA *)&rna_BlendDataCollections_new_collection}},
	"new", 0, "Add a new collection to the main database",
	BlendDataCollections_new_call,
	(PropertyRNA *)&rna_BlendDataCollections_new_collection
};

PointerPropertyRNA rna_BlendDataCollections_remove_collection = {
	{(PropertyRNA *)&rna_BlendDataCollections_remove_do_unlink, nullptr,
	-1, "collection", 262272, 0, 5, 0, 0, "",
	"Collection to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Collection
};

BoolPropertyRNA rna_BlendDataCollections_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataCollections_remove_do_id_user, (PropertyRNA *)&rna_BlendDataCollections_remove_collection,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this collection before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataCollections_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataCollections_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataCollections_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this collection",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataCollections_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCollections_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this collection",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataCollections_remove_func = {
	{(FunctionRNA *)&rna_BlendDataCollections_tag_func, (FunctionRNA *)&rna_BlendDataCollections_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCollections_remove_collection, (PropertyRNA *)&rna_BlendDataCollections_remove_do_ui_user}},
	"remove", 16, "Remove a collection from the current blendfile",
	BlendDataCollections_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataCollections_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataCollections_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataCollections_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCollections_tag_value, (PropertyRNA *)&rna_BlendDataCollections_tag_value}},
	"tag", 0, "tag",
	BlendDataCollections_tag_call,
	nullptr
};

StructRNA RNA_BlendDataCollections = {
	{(ContainerRNA *)&RNA_BlendDataTexts, (ContainerRNA *)&RNA_BlendDataWorlds,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCollections_rna_properties, (PropertyRNA *)&rna_BlendDataCollections_rna_type}},
	"BlendDataCollections", nullptr, nullptr, 516, nullptr, "Main Collections",
	"Collection of collections",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataCollections_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataCollections_new_func, (FunctionRNA *)&rna_BlendDataCollections_tag_func}
};

/* Main Texts */
CollectionPropertyRNA rna_BlendDataTexts_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataTexts_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataTexts_rna_properties_begin, BlendDataTexts_rna_properties_next, BlendDataTexts_rna_properties_end, BlendDataTexts_rna_properties_get, nullptr, nullptr, BlendDataTexts_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataTexts_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTexts_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataTexts_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataTexts_new_name = {
	{(PropertyRNA *)&rna_BlendDataTexts_new_text, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Text"
};

PointerPropertyRNA rna_BlendDataTexts_new_text = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTexts_new_name,
	-1, "text", 8388736, 0, 2, 0, 0, "",
	"New text data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_new_func = {
	{(FunctionRNA *)&rna_BlendDataTexts_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTexts_new_name, (PropertyRNA *)&rna_BlendDataTexts_new_text}},
	"new", 0, "Add a new text to the main database",
	BlendDataTexts_new_call,
	(PropertyRNA *)&rna_BlendDataTexts_new_text
};

PointerPropertyRNA rna_BlendDataTexts_remove_text = {
	{(PropertyRNA *)&rna_BlendDataTexts_remove_do_unlink, nullptr,
	-1, "text", 262272, 0, 5, 0, 0, "",
	"Text to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Text
};

BoolPropertyRNA rna_BlendDataTexts_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataTexts_remove_do_id_user, (PropertyRNA *)&rna_BlendDataTexts_remove_text,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this text before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataTexts_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataTexts_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataTexts_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this text",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataTexts_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTexts_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this text",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataTexts_remove_func = {
	{(FunctionRNA *)&rna_BlendDataTexts_load_func, (FunctionRNA *)&rna_BlendDataTexts_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTexts_remove_text, (PropertyRNA *)&rna_BlendDataTexts_remove_do_ui_user}},
	"remove", 16, "Remove a text from the current blendfile",
	BlendDataTexts_remove_call,
	nullptr
};

StringPropertyRNA rna_BlendDataTexts_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataTexts_load_internal, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"path for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, "Path"
};

BoolPropertyRNA rna_BlendDataTexts_load_internal = {
	{(PropertyRNA *)&rna_BlendDataTexts_load_text, (PropertyRNA *)&rna_BlendDataTexts_load_filepath,
	-1, "internal", 3, 0, 0, 0, 0, "Make internal",
	"Make text file internal after loading",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataTexts_load_text = {
	{nullptr, (PropertyRNA *)&rna_BlendDataTexts_load_internal,
	-1, "text", 8388736, 0, 2, 0, 0, "",
	"New text data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_load_func = {
	{(FunctionRNA *)&rna_BlendDataTexts_tag_func, (FunctionRNA *)&rna_BlendDataTexts_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTexts_load_filepath, (PropertyRNA *)&rna_BlendDataTexts_load_text}},
	"load", 16, "Add a new text to the main database from a file",
	BlendDataTexts_load_call,
	(PropertyRNA *)&rna_BlendDataTexts_load_text
};

BoolPropertyRNA rna_BlendDataTexts_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataTexts_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataTexts_load_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTexts_tag_value, (PropertyRNA *)&rna_BlendDataTexts_tag_value}},
	"tag", 0, "tag",
	BlendDataTexts_tag_call,
	nullptr
};

StructRNA RNA_BlendDataTexts = {
	{(ContainerRNA *)&RNA_BlendDataSpeakers, (ContainerRNA *)&RNA_BlendDataCollections,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataTexts_rna_properties, (PropertyRNA *)&rna_BlendDataTexts_rna_type}},
	"BlendDataTexts", nullptr, nullptr, 516, nullptr, "Main Texts",
	"Collection of texts",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataTexts_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataTexts_new_func, (FunctionRNA *)&rna_BlendDataTexts_tag_func}
};

/* Main Speakers */
CollectionPropertyRNA rna_BlendDataSpeakers_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataSpeakers_rna_properties_begin, BlendDataSpeakers_rna_properties_next, BlendDataSpeakers_rna_properties_end, BlendDataSpeakers_rna_properties_get, nullptr, nullptr, BlendDataSpeakers_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataSpeakers_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataSpeakers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataSpeakers_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataSpeakers_new_name = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_new_speaker, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Speaker"
};

PointerPropertyRNA rna_BlendDataSpeakers_new_speaker = {
	{nullptr, (PropertyRNA *)&rna_BlendDataSpeakers_new_name,
	-1, "speaker", 8388736, 0, 2, 0, 0, "",
	"New speaker data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Speaker
};

FunctionRNA rna_BlendDataSpeakers_new_func = {
	{(FunctionRNA *)&rna_BlendDataSpeakers_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSpeakers_new_name, (PropertyRNA *)&rna_BlendDataSpeakers_new_speaker}},
	"new", 0, "Add a new speaker to the main database",
	BlendDataSpeakers_new_call,
	(PropertyRNA *)&rna_BlendDataSpeakers_new_speaker
};

PointerPropertyRNA rna_BlendDataSpeakers_remove_speaker = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_remove_do_unlink, nullptr,
	-1, "speaker", 262272, 0, 5, 0, 0, "",
	"Speaker to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Speaker
};

BoolPropertyRNA rna_BlendDataSpeakers_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_remove_do_id_user, (PropertyRNA *)&rna_BlendDataSpeakers_remove_speaker,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this speaker before deleting it (WARNING: will also delete objects instancing that speaker data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataSpeakers_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataSpeakers_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this speaker data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataSpeakers_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataSpeakers_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this speaker data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataSpeakers_remove_func = {
	{(FunctionRNA *)&rna_BlendDataSpeakers_tag_func, (FunctionRNA *)&rna_BlendDataSpeakers_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSpeakers_remove_speaker, (PropertyRNA *)&rna_BlendDataSpeakers_remove_do_ui_user}},
	"remove", 16, "Remove a speaker from the current blendfile",
	BlendDataSpeakers_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataSpeakers_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataSpeakers_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataSpeakers_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSpeakers_tag_value, (PropertyRNA *)&rna_BlendDataSpeakers_tag_value}},
	"tag", 0, "tag",
	BlendDataSpeakers_tag_call,
	nullptr
};

StructRNA RNA_BlendDataSpeakers = {
	{(ContainerRNA *)&RNA_BlendDataSounds, (ContainerRNA *)&RNA_BlendDataTexts,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSpeakers_rna_properties, (PropertyRNA *)&rna_BlendDataSpeakers_rna_type}},
	"BlendDataSpeakers", nullptr, nullptr, 516, nullptr, "Main Speakers",
	"Collection of speakers",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataSpeakers_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataSpeakers_new_func, (FunctionRNA *)&rna_BlendDataSpeakers_tag_func}
};

/* Main Sounds */
CollectionPropertyRNA rna_BlendDataSounds_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataSounds_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataSounds_rna_properties_begin, BlendDataSounds_rna_properties_next, BlendDataSounds_rna_properties_end, BlendDataSounds_rna_properties_get, nullptr, nullptr, BlendDataSounds_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataSounds_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataSounds_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataSounds_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataSounds_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataSounds_load_check_existing, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"path for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, "Path"
};

BoolPropertyRNA rna_BlendDataSounds_load_check_existing = {
	{(PropertyRNA *)&rna_BlendDataSounds_load_sound, (PropertyRNA *)&rna_BlendDataSounds_load_filepath,
	-1, "check_existing", 3, 0, 0, 0, 0, "",
	"Using existing data-block if this file is already loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataSounds_load_sound = {
	{nullptr, (PropertyRNA *)&rna_BlendDataSounds_load_check_existing,
	-1, "sound", 8388736, 0, 2, 0, 0, "",
	"New text data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Sound
};

FunctionRNA rna_BlendDataSounds_load_func = {
	{(FunctionRNA *)&rna_BlendDataSounds_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSounds_load_filepath, (PropertyRNA *)&rna_BlendDataSounds_load_sound}},
	"load", 0, "Add a new sound to the main database from a file",
	BlendDataSounds_load_call,
	(PropertyRNA *)&rna_BlendDataSounds_load_sound
};

PointerPropertyRNA rna_BlendDataSounds_remove_sound = {
	{(PropertyRNA *)&rna_BlendDataSounds_remove_do_unlink, nullptr,
	-1, "sound", 262272, 0, 5, 0, 0, "",
	"Sound to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Sound
};

BoolPropertyRNA rna_BlendDataSounds_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataSounds_remove_do_id_user, (PropertyRNA *)&rna_BlendDataSounds_remove_sound,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this sound before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataSounds_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataSounds_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataSounds_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this sound",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataSounds_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataSounds_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this sound",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataSounds_remove_func = {
	{(FunctionRNA *)&rna_BlendDataSounds_tag_func, (FunctionRNA *)&rna_BlendDataSounds_load_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSounds_remove_sound, (PropertyRNA *)&rna_BlendDataSounds_remove_do_ui_user}},
	"remove", 16, "Remove a sound from the current blendfile",
	BlendDataSounds_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataSounds_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataSounds_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataSounds_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSounds_tag_value, (PropertyRNA *)&rna_BlendDataSounds_tag_value}},
	"tag", 0, "tag",
	BlendDataSounds_tag_call,
	nullptr
};

StructRNA RNA_BlendDataSounds = {
	{(ContainerRNA *)&RNA_BlendDataArmatures, (ContainerRNA *)&RNA_BlendDataSpeakers,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataSounds_rna_properties, (PropertyRNA *)&rna_BlendDataSounds_rna_type}},
	"BlendDataSounds", nullptr, nullptr, 516, nullptr, "Main Sounds",
	"Collection of sounds",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataSounds_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataSounds_load_func, (FunctionRNA *)&rna_BlendDataSounds_tag_func}
};

/* Main Armatures */
CollectionPropertyRNA rna_BlendDataArmatures_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataArmatures_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataArmatures_rna_properties_begin, BlendDataArmatures_rna_properties_next, BlendDataArmatures_rna_properties_end, BlendDataArmatures_rna_properties_get, nullptr, nullptr, BlendDataArmatures_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataArmatures_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataArmatures_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataArmatures_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataArmatures_new_name = {
	{(PropertyRNA *)&rna_BlendDataArmatures_new_armature, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Armature"
};

PointerPropertyRNA rna_BlendDataArmatures_new_armature = {
	{nullptr, (PropertyRNA *)&rna_BlendDataArmatures_new_name,
	-1, "armature", 8388736, 0, 2, 0, 0, "",
	"New armature data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Armature
};

FunctionRNA rna_BlendDataArmatures_new_func = {
	{(FunctionRNA *)&rna_BlendDataArmatures_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataArmatures_new_name, (PropertyRNA *)&rna_BlendDataArmatures_new_armature}},
	"new", 0, "Add a new armature to the main database",
	BlendDataArmatures_new_call,
	(PropertyRNA *)&rna_BlendDataArmatures_new_armature
};

PointerPropertyRNA rna_BlendDataArmatures_remove_armature = {
	{(PropertyRNA *)&rna_BlendDataArmatures_remove_do_unlink, nullptr,
	-1, "armature", 262272, 0, 5, 0, 0, "",
	"Armature to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Armature
};

BoolPropertyRNA rna_BlendDataArmatures_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataArmatures_remove_do_id_user, (PropertyRNA *)&rna_BlendDataArmatures_remove_armature,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this armature before deleting it (WARNING: will also delete objects instancing that armature data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataArmatures_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataArmatures_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataArmatures_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this armature data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataArmatures_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataArmatures_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this armature data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataArmatures_remove_func = {
	{(FunctionRNA *)&rna_BlendDataArmatures_tag_func, (FunctionRNA *)&rna_BlendDataArmatures_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataArmatures_remove_armature, (PropertyRNA *)&rna_BlendDataArmatures_remove_do_ui_user}},
	"remove", 16, "Remove an armature from the current blendfile",
	BlendDataArmatures_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataArmatures_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataArmatures_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataArmatures_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataArmatures_tag_value, (PropertyRNA *)&rna_BlendDataArmatures_tag_value}},
	"tag", 0, "tag",
	BlendDataArmatures_tag_call,
	nullptr
};

StructRNA RNA_BlendDataArmatures = {
	{(ContainerRNA *)&RNA_BlendDataActions, (ContainerRNA *)&RNA_BlendDataSounds,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataArmatures_rna_properties, (PropertyRNA *)&rna_BlendDataArmatures_rna_type}},
	"BlendDataArmatures", nullptr, nullptr, 516, nullptr, "Main Armatures",
	"Collection of armatures",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataArmatures_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataArmatures_new_func, (FunctionRNA *)&rna_BlendDataArmatures_tag_func}
};

/* Main Actions */
CollectionPropertyRNA rna_BlendDataActions_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataActions_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataActions_rna_properties_begin, BlendDataActions_rna_properties_next, BlendDataActions_rna_properties_end, BlendDataActions_rna_properties_get, nullptr, nullptr, BlendDataActions_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataActions_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataActions_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataActions_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataActions_new_name = {
	{(PropertyRNA *)&rna_BlendDataActions_new_action, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Action"
};

PointerPropertyRNA rna_BlendDataActions_new_action = {
	{nullptr, (PropertyRNA *)&rna_BlendDataActions_new_name,
	-1, "action", 8388736, 0, 2, 0, 0, "",
	"New action data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Action
};

FunctionRNA rna_BlendDataActions_new_func = {
	{(FunctionRNA *)&rna_BlendDataActions_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataActions_new_name, (PropertyRNA *)&rna_BlendDataActions_new_action}},
	"new", 0, "Add a new action to the main database",
	BlendDataActions_new_call,
	(PropertyRNA *)&rna_BlendDataActions_new_action
};

PointerPropertyRNA rna_BlendDataActions_remove_action = {
	{(PropertyRNA *)&rna_BlendDataActions_remove_do_unlink, nullptr,
	-1, "action", 262272, 0, 5, 0, 0, "",
	"Action to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Action
};

BoolPropertyRNA rna_BlendDataActions_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataActions_remove_do_id_user, (PropertyRNA *)&rna_BlendDataActions_remove_action,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this action before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataActions_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataActions_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataActions_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this action",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataActions_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataActions_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this action",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataActions_remove_func = {
	{(FunctionRNA *)&rna_BlendDataActions_tag_func, (FunctionRNA *)&rna_BlendDataActions_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataActions_remove_action, (PropertyRNA *)&rna_BlendDataActions_remove_do_ui_user}},
	"remove", 16, "Remove an action from the current blendfile",
	BlendDataActions_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataActions_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataActions_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataActions_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataActions_tag_value, (PropertyRNA *)&rna_BlendDataActions_tag_value}},
	"tag", 0, "tag",
	BlendDataActions_tag_call,
	nullptr
};

StructRNA RNA_BlendDataActions = {
	{(ContainerRNA *)&RNA_BlendDataParticles, (ContainerRNA *)&RNA_BlendDataArmatures,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataActions_rna_properties, (PropertyRNA *)&rna_BlendDataActions_rna_type}},
	"BlendDataActions", nullptr, nullptr, 516, nullptr, "Main Actions",
	"Collection of actions",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataActions_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataActions_new_func, (FunctionRNA *)&rna_BlendDataActions_tag_func}
};

/* Main Particle Settings */
CollectionPropertyRNA rna_BlendDataParticles_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataParticles_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataParticles_rna_properties_begin, BlendDataParticles_rna_properties_next, BlendDataParticles_rna_properties_end, BlendDataParticles_rna_properties_get, nullptr, nullptr, BlendDataParticles_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataParticles_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataParticles_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataParticles_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataParticles_new_name = {
	{(PropertyRNA *)&rna_BlendDataParticles_new_particle, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "ParticleSettings"
};

PointerPropertyRNA rna_BlendDataParticles_new_particle = {
	{nullptr, (PropertyRNA *)&rna_BlendDataParticles_new_name,
	-1, "particle", 8388736, 0, 2, 0, 0, "",
	"New particle settings data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ParticleSettings
};

FunctionRNA rna_BlendDataParticles_new_func = {
	{(FunctionRNA *)&rna_BlendDataParticles_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataParticles_new_name, (PropertyRNA *)&rna_BlendDataParticles_new_particle}},
	"new", 0, "Add a new particle settings instance to the main database",
	BlendDataParticles_new_call,
	(PropertyRNA *)&rna_BlendDataParticles_new_particle
};

PointerPropertyRNA rna_BlendDataParticles_remove_particle = {
	{(PropertyRNA *)&rna_BlendDataParticles_remove_do_unlink, nullptr,
	-1, "particle", 262272, 0, 5, 0, 0, "",
	"Particle Settings to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_ParticleSettings
};

BoolPropertyRNA rna_BlendDataParticles_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataParticles_remove_do_id_user, (PropertyRNA *)&rna_BlendDataParticles_remove_particle,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of those particle settings before deleting them",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataParticles_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataParticles_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataParticles_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this particle settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataParticles_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataParticles_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this particle settings",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataParticles_remove_func = {
	{(FunctionRNA *)&rna_BlendDataParticles_tag_func, (FunctionRNA *)&rna_BlendDataParticles_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataParticles_remove_particle, (PropertyRNA *)&rna_BlendDataParticles_remove_do_ui_user}},
	"remove", 16, "Remove a particle settings instance from the current blendfile",
	BlendDataParticles_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataParticles_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataParticles_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataParticles_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataParticles_tag_value, (PropertyRNA *)&rna_BlendDataParticles_tag_value}},
	"tag", 0, "tag",
	BlendDataParticles_tag_call,
	nullptr
};

StructRNA RNA_BlendDataParticles = {
	{(ContainerRNA *)&RNA_BlendDataPalettes, (ContainerRNA *)&RNA_BlendDataActions,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataParticles_rna_properties, (PropertyRNA *)&rna_BlendDataParticles_rna_type}},
	"BlendDataParticles", nullptr, nullptr, 516, nullptr, "Main Particle Settings",
	"Collection of particle settings",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataParticles_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataParticles_new_func, (FunctionRNA *)&rna_BlendDataParticles_tag_func}
};

/* Main Palettes */
CollectionPropertyRNA rna_BlendDataPalettes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataPalettes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataPalettes_rna_properties_begin, BlendDataPalettes_rna_properties_next, BlendDataPalettes_rna_properties_end, BlendDataPalettes_rna_properties_get, nullptr, nullptr, BlendDataPalettes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataPalettes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPalettes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataPalettes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataPalettes_new_name = {
	{(PropertyRNA *)&rna_BlendDataPalettes_new_palette, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Palette"
};

PointerPropertyRNA rna_BlendDataPalettes_new_palette = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPalettes_new_name,
	-1, "palette", 8388736, 0, 2, 0, 0, "",
	"New palette data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Palette
};

FunctionRNA rna_BlendDataPalettes_new_func = {
	{(FunctionRNA *)&rna_BlendDataPalettes_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPalettes_new_name, (PropertyRNA *)&rna_BlendDataPalettes_new_palette}},
	"new", 0, "Add a new palette to the main database",
	BlendDataPalettes_new_call,
	(PropertyRNA *)&rna_BlendDataPalettes_new_palette
};

PointerPropertyRNA rna_BlendDataPalettes_remove_palette = {
	{(PropertyRNA *)&rna_BlendDataPalettes_remove_do_unlink, nullptr,
	-1, "palette", 262272, 0, 5, 0, 0, "",
	"Palette to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Palette
};

BoolPropertyRNA rna_BlendDataPalettes_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataPalettes_remove_do_id_user, (PropertyRNA *)&rna_BlendDataPalettes_remove_palette,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this palette before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataPalettes_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataPalettes_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataPalettes_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this palette",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataPalettes_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPalettes_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this palette",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataPalettes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataPalettes_tag_func, (FunctionRNA *)&rna_BlendDataPalettes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPalettes_remove_palette, (PropertyRNA *)&rna_BlendDataPalettes_remove_do_ui_user}},
	"remove", 16, "Remove a palette from the current blendfile",
	BlendDataPalettes_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataPalettes_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataPalettes_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataPalettes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPalettes_tag_value, (PropertyRNA *)&rna_BlendDataPalettes_tag_value}},
	"tag", 0, "tag",
	BlendDataPalettes_tag_call,
	nullptr
};

StructRNA RNA_BlendDataPalettes = {
	{(ContainerRNA *)&RNA_BlendDataGreasePencils, (ContainerRNA *)&RNA_BlendDataParticles,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPalettes_rna_properties, (PropertyRNA *)&rna_BlendDataPalettes_rna_type}},
	"BlendDataPalettes", nullptr, nullptr, 516, nullptr, "Main Palettes",
	"Collection of palettes",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataPalettes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataPalettes_new_func, (FunctionRNA *)&rna_BlendDataPalettes_tag_func}
};

/* Main Grease Pencils */
CollectionPropertyRNA rna_BlendDataGreasePencils_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataGreasePencils_rna_properties_begin, BlendDataGreasePencils_rna_properties_next, BlendDataGreasePencils_rna_properties_end, BlendDataGreasePencils_rna_properties_get, nullptr, nullptr, BlendDataGreasePencils_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataGreasePencils_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataGreasePencils_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataGreasePencils_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataGreasePencils_tag_func = {
	{(FunctionRNA *)&rna_BlendDataGreasePencils_new_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_tag_value, (PropertyRNA *)&rna_BlendDataGreasePencils_tag_value}},
	"tag", 0, "tag",
	BlendDataGreasePencils_tag_call,
	nullptr
};

StringPropertyRNA rna_BlendDataGreasePencils_new_name = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_new_grease_pencil, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "GreasePencil"
};

PointerPropertyRNA rna_BlendDataGreasePencils_new_grease_pencil = {
	{nullptr, (PropertyRNA *)&rna_BlendDataGreasePencils_new_name,
	-1, "grease_pencil", 8388736, 0, 2, 0, 0, "",
	"New grease pencil data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GreasePencil
};

FunctionRNA rna_BlendDataGreasePencils_new_func = {
	{(FunctionRNA *)&rna_BlendDataGreasePencils_remove_func, (FunctionRNA *)&rna_BlendDataGreasePencils_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_new_name, (PropertyRNA *)&rna_BlendDataGreasePencils_new_grease_pencil}},
	"new", 0, "Add a new grease pencil datablock to the main database",
	BlendDataGreasePencils_new_call,
	(PropertyRNA *)&rna_BlendDataGreasePencils_new_grease_pencil
};

PointerPropertyRNA rna_BlendDataGreasePencils_remove_grease_pencil = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_remove_do_unlink, nullptr,
	-1, "grease_pencil", 262272, 0, 5, 0, 0, "",
	"Grease Pencil to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_GreasePencil
};

BoolPropertyRNA rna_BlendDataGreasePencils_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_remove_do_id_user, (PropertyRNA *)&rna_BlendDataGreasePencils_remove_grease_pencil,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this grease pencil before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataGreasePencils_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataGreasePencils_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this grease pencil",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataGreasePencils_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataGreasePencils_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this grease pencil",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataGreasePencils_remove_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataGreasePencils_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_remove_grease_pencil, (PropertyRNA *)&rna_BlendDataGreasePencils_remove_do_ui_user}},
	"remove", 16, "Remove a grease pencil instance from the current blendfile",
	BlendDataGreasePencils_remove_call,
	nullptr
};

StructRNA RNA_BlendDataGreasePencils = {
	{(ContainerRNA *)&RNA_BlendDataGreasePencilsV3, (ContainerRNA *)&RNA_BlendDataPalettes,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties, (PropertyRNA *)&rna_BlendDataGreasePencils_rna_type}},
	"BlendDataGreasePencils", nullptr, nullptr, 516, nullptr, "Main Grease Pencils",
	"Collection of grease pencils",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataGreasePencils_tag_func, (FunctionRNA *)&rna_BlendDataGreasePencils_remove_func}
};

/* Main Grease Pencils */
CollectionPropertyRNA rna_BlendDataGreasePencilsV3_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataGreasePencilsV3_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataGreasePencilsV3_rna_properties_begin, BlendDataGreasePencilsV3_rna_properties_next, BlendDataGreasePencilsV3_rna_properties_end, BlendDataGreasePencilsV3_rna_properties_get, nullptr, nullptr, BlendDataGreasePencilsV3_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataGreasePencilsV3_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataGreasePencilsV3_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataGreasePencilsV3_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StructRNA RNA_BlendDataGreasePencilsV3 = {
	{(ContainerRNA *)&RNA_BlendDataMovieClips, (ContainerRNA *)&RNA_BlendDataGreasePencils,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataGreasePencilsV3_rna_properties, (PropertyRNA *)&rna_BlendDataGreasePencilsV3_rna_type}},
	"BlendDataGreasePencilsV3", nullptr, nullptr, 516, nullptr, "Main Grease Pencils",
	"Collection of grease pencils",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataGreasePencilsV3_rna_properties,
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

/* Main Movie Clips */
CollectionPropertyRNA rna_BlendDataMovieClips_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMovieClips_rna_properties_begin, BlendDataMovieClips_rna_properties_next, BlendDataMovieClips_rna_properties_end, BlendDataMovieClips_rna_properties_get, nullptr, nullptr, BlendDataMovieClips_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMovieClips_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMovieClips_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMovieClips_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMovieClips_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataMovieClips_tag_func = {
	{(FunctionRNA *)&rna_BlendDataMovieClips_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMovieClips_tag_value, (PropertyRNA *)&rna_BlendDataMovieClips_tag_value}},
	"tag", 0, "tag",
	BlendDataMovieClips_tag_call,
	nullptr
};

PointerPropertyRNA rna_BlendDataMovieClips_remove_clip = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_remove_do_unlink, nullptr,
	-1, "clip", 262272, 0, 5, 0, 0, "",
	"Movie clip to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieClip
};

BoolPropertyRNA rna_BlendDataMovieClips_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_remove_do_id_user, (PropertyRNA *)&rna_BlendDataMovieClips_remove_clip,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this movie clip before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMovieClips_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataMovieClips_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this movie clip",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMovieClips_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMovieClips_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this movie clip",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataMovieClips_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMovieClips_load_func, (FunctionRNA *)&rna_BlendDataMovieClips_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMovieClips_remove_clip, (PropertyRNA *)&rna_BlendDataMovieClips_remove_do_ui_user}},
	"remove", 16, "Remove a movie clip from the current blendfile.",
	BlendDataMovieClips_remove_call,
	nullptr
};

StringPropertyRNA rna_BlendDataMovieClips_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_load_check_existing, nullptr,
	-1, "filepath", 262145, 0, 1, 0, 0, "",
	"path for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_FILEPATH | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 1024, "Path"
};

BoolPropertyRNA rna_BlendDataMovieClips_load_check_existing = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_load_clip, (PropertyRNA *)&rna_BlendDataMovieClips_load_filepath,
	-1, "check_existing", 3, 0, 0, 0, 0, "",
	"Using existing data-block if this file is already loaded",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

PointerPropertyRNA rna_BlendDataMovieClips_load_clip = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMovieClips_load_check_existing,
	-1, "clip", 8388736, 0, 2, 0, 0, "",
	"New movie clip data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_MovieClip
};

FunctionRNA rna_BlendDataMovieClips_load_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataMovieClips_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMovieClips_load_filepath, (PropertyRNA *)&rna_BlendDataMovieClips_load_clip}},
	"load", 16, "Add a new movie clip to the main database from a file (while ``check_existing`` is disabled for consistency with other load functions, behavior with multiple movie-clips using the same file may incorrectly generate proxies)",
	BlendDataMovieClips_load_call,
	(PropertyRNA *)&rna_BlendDataMovieClips_load_clip
};

StructRNA RNA_BlendDataMovieClips = {
	{(ContainerRNA *)&RNA_BlendDataMasks, (ContainerRNA *)&RNA_BlendDataGreasePencilsV3,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMovieClips_rna_properties, (PropertyRNA *)&rna_BlendDataMovieClips_rna_type}},
	"BlendDataMovieClips", nullptr, nullptr, 516, nullptr, "Main Movie Clips",
	"Collection of movie clips",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataMovieClips_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataMovieClips_tag_func, (FunctionRNA *)&rna_BlendDataMovieClips_load_func}
};

/* Main Masks */
CollectionPropertyRNA rna_BlendDataMasks_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMasks_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMasks_rna_properties_begin, BlendDataMasks_rna_properties_next, BlendDataMasks_rna_properties_end, BlendDataMasks_rna_properties_get, nullptr, nullptr, BlendDataMasks_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMasks_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMasks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataMasks_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMasks_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataMasks_tag_func = {
	{(FunctionRNA *)&rna_BlendDataMasks_new_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMasks_tag_value, (PropertyRNA *)&rna_BlendDataMasks_tag_value}},
	"tag", 0, "tag",
	BlendDataMasks_tag_call,
	nullptr
};

StringPropertyRNA rna_BlendDataMasks_new_name = {
	{(PropertyRNA *)&rna_BlendDataMasks_new_mask, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "Mask",
	"Name of new mask data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 64, ""
};

PointerPropertyRNA rna_BlendDataMasks_new_mask = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMasks_new_name,
	-1, "mask", 8388736, 0, 2, 0, 0, "",
	"New mask data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mask
};

FunctionRNA rna_BlendDataMasks_new_func = {
	{(FunctionRNA *)&rna_BlendDataMasks_remove_func, (FunctionRNA *)&rna_BlendDataMasks_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMasks_new_name, (PropertyRNA *)&rna_BlendDataMasks_new_mask}},
	"new", 0, "Add a new mask with a given name to the main database",
	BlendDataMasks_new_call,
	(PropertyRNA *)&rna_BlendDataMasks_new_mask
};

PointerPropertyRNA rna_BlendDataMasks_remove_mask = {
	{(PropertyRNA *)&rna_BlendDataMasks_remove_do_unlink, nullptr,
	-1, "mask", 262272, 0, 5, 0, 0, "",
	"Mask to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Mask
};

BoolPropertyRNA rna_BlendDataMasks_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataMasks_remove_do_id_user, (PropertyRNA *)&rna_BlendDataMasks_remove_mask,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this mask before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMasks_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataMasks_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataMasks_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this mask",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataMasks_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataMasks_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this mask",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataMasks_remove_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataMasks_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMasks_remove_mask, (PropertyRNA *)&rna_BlendDataMasks_remove_do_ui_user}},
	"remove", 16, "Remove a mask from the current blendfile",
	BlendDataMasks_remove_call,
	nullptr
};

StructRNA RNA_BlendDataMasks = {
	{(ContainerRNA *)&RNA_BlendDataLineStyles, (ContainerRNA *)&RNA_BlendDataMovieClips,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataMasks_rna_properties, (PropertyRNA *)&rna_BlendDataMasks_rna_type}},
	"BlendDataMasks", nullptr, nullptr, 516, nullptr, "Main Masks",
	"Collection of masks",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataMasks_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataMasks_tag_func, (FunctionRNA *)&rna_BlendDataMasks_remove_func}
};

/* Main Line Styles */
CollectionPropertyRNA rna_BlendDataLineStyles_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLineStyles_rna_properties_begin, BlendDataLineStyles_rna_properties_next, BlendDataLineStyles_rna_properties_end, BlendDataLineStyles_rna_properties_get, nullptr, nullptr, BlendDataLineStyles_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLineStyles_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLineStyles_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataLineStyles_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataLineStyles_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataLineStyles_tag_func = {
	{(FunctionRNA *)&rna_BlendDataLineStyles_new_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLineStyles_tag_value, (PropertyRNA *)&rna_BlendDataLineStyles_tag_value}},
	"tag", 0, "tag",
	BlendDataLineStyles_tag_call,
	nullptr
};

StringPropertyRNA rna_BlendDataLineStyles_new_name = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_new_linestyle, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "FreestyleLineStyle"
};

PointerPropertyRNA rna_BlendDataLineStyles_new_linestyle = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLineStyles_new_name,
	-1, "linestyle", 8388736, 0, 2, 0, 0, "",
	"New line style data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FreestyleLineStyle
};

FunctionRNA rna_BlendDataLineStyles_new_func = {
	{(FunctionRNA *)&rna_BlendDataLineStyles_remove_func, (FunctionRNA *)&rna_BlendDataLineStyles_tag_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLineStyles_new_name, (PropertyRNA *)&rna_BlendDataLineStyles_new_linestyle}},
	"new", 0, "Add a new line style instance to the main database",
	BlendDataLineStyles_new_call,
	(PropertyRNA *)&rna_BlendDataLineStyles_new_linestyle
};

PointerPropertyRNA rna_BlendDataLineStyles_remove_linestyle = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_remove_do_unlink, nullptr,
	-1, "linestyle", 262272, 0, 5, 0, 0, "",
	"Line style to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_FreestyleLineStyle
};

BoolPropertyRNA rna_BlendDataLineStyles_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_remove_do_id_user, (PropertyRNA *)&rna_BlendDataLineStyles_remove_linestyle,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this line style before deleting it",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLineStyles_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataLineStyles_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this line style",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataLineStyles_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataLineStyles_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this line style",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataLineStyles_remove_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataLineStyles_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLineStyles_remove_linestyle, (PropertyRNA *)&rna_BlendDataLineStyles_remove_do_ui_user}},
	"remove", 16, "Remove a line style instance from the current blendfile",
	BlendDataLineStyles_remove_call,
	nullptr
};

StructRNA RNA_BlendDataLineStyles = {
	{(ContainerRNA *)&RNA_BlendDataCacheFiles, (ContainerRNA *)&RNA_BlendDataMasks,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataLineStyles_rna_properties, (PropertyRNA *)&rna_BlendDataLineStyles_rna_type}},
	"BlendDataLineStyles", nullptr, nullptr, 516, nullptr, "Main Line Styles",
	"Collection of line styles",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataLineStyles_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataLineStyles_tag_func, (FunctionRNA *)&rna_BlendDataLineStyles_remove_func}
};

/* Main Cache Files */
CollectionPropertyRNA rna_BlendDataCacheFiles_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataCacheFiles_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCacheFiles_rna_properties_begin, BlendDataCacheFiles_rna_properties_next, BlendDataCacheFiles_rna_properties_end, BlendDataCacheFiles_rna_properties_get, nullptr, nullptr, BlendDataCacheFiles_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataCacheFiles_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataCacheFiles_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataCacheFiles_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataCacheFiles_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataCacheFiles_tag_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCacheFiles_tag_value, (PropertyRNA *)&rna_BlendDataCacheFiles_tag_value}},
	"tag", 0, "tag",
	BlendDataCacheFiles_tag_call,
	nullptr
};

StructRNA RNA_BlendDataCacheFiles = {
	{(ContainerRNA *)&RNA_BlendDataPaintCurves, (ContainerRNA *)&RNA_BlendDataLineStyles,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataCacheFiles_rna_properties, (PropertyRNA *)&rna_BlendDataCacheFiles_rna_type}},
	"BlendDataCacheFiles", nullptr, nullptr, 516, nullptr, "Main Cache Files",
	"Collection of cache files",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataCacheFiles_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataCacheFiles_tag_func, (FunctionRNA *)&rna_BlendDataCacheFiles_tag_func}
};

/* Main Paint Curves */
CollectionPropertyRNA rna_BlendDataPaintCurves_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataPaintCurves_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataPaintCurves_rna_properties_begin, BlendDataPaintCurves_rna_properties_next, BlendDataPaintCurves_rna_properties_end, BlendDataPaintCurves_rna_properties_get, nullptr, nullptr, BlendDataPaintCurves_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataPaintCurves_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPaintCurves_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataPaintCurves_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataPaintCurves_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataPaintCurves_tag_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPaintCurves_tag_value, (PropertyRNA *)&rna_BlendDataPaintCurves_tag_value}},
	"tag", 0, "tag",
	BlendDataPaintCurves_tag_call,
	nullptr
};

StructRNA RNA_BlendDataPaintCurves = {
	{(ContainerRNA *)&RNA_BlendDataWorkSpaces, (ContainerRNA *)&RNA_BlendDataCacheFiles,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPaintCurves_rna_properties, (PropertyRNA *)&rna_BlendDataPaintCurves_rna_type}},
	"BlendDataPaintCurves", nullptr, nullptr, 516, nullptr, "Main Paint Curves",
	"Collection of paint curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataPaintCurves_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataPaintCurves_tag_func, (FunctionRNA *)&rna_BlendDataPaintCurves_tag_func}
};

/* Main Workspaces */
CollectionPropertyRNA rna_BlendDataWorkSpaces_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataWorkSpaces_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataWorkSpaces_rna_properties_begin, BlendDataWorkSpaces_rna_properties_next, BlendDataWorkSpaces_rna_properties_end, BlendDataWorkSpaces_rna_properties_get, nullptr, nullptr, BlendDataWorkSpaces_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataWorkSpaces_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataWorkSpaces_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataWorkSpaces_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataWorkSpaces_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataWorkSpaces_tag_func = {
	{nullptr, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWorkSpaces_tag_value, (PropertyRNA *)&rna_BlendDataWorkSpaces_tag_value}},
	"tag", 0, "tag",
	BlendDataWorkSpaces_tag_call,
	nullptr
};

StructRNA RNA_BlendDataWorkSpaces = {
	{(ContainerRNA *)&RNA_BlendDataProbes, (ContainerRNA *)&RNA_BlendDataPaintCurves,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataWorkSpaces_rna_properties, (PropertyRNA *)&rna_BlendDataWorkSpaces_rna_type}},
	"BlendDataWorkSpaces", nullptr, nullptr, 516, nullptr, "Main Workspaces",
	"Collection of workspaces",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataWorkSpaces_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataWorkSpaces_tag_func, (FunctionRNA *)&rna_BlendDataWorkSpaces_tag_func}
};

/* Main Light Probes */
CollectionPropertyRNA rna_BlendDataProbes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataProbes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataProbes_rna_properties_begin, BlendDataProbes_rna_properties_next, BlendDataProbes_rna_properties_end, BlendDataProbes_rna_properties_get, nullptr, nullptr, BlendDataProbes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataProbes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataProbes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataProbes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataProbes_new_name = {
	{(PropertyRNA *)&rna_BlendDataProbes_new_type, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Probe"
};

EnumPropertyRNA rna_BlendDataProbes_new_type = {
	{(PropertyRNA *)&rna_BlendDataProbes_new_lightprobe, (PropertyRNA *)&rna_BlendDataProbes_new_name,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"The type of light probe to add",
	0, "*",
	PROP_ENUM, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_lightprobes_type_items, 3, 0
};

PointerPropertyRNA rna_BlendDataProbes_new_lightprobe = {
	{nullptr, (PropertyRNA *)&rna_BlendDataProbes_new_type,
	-1, "lightprobe", 8388736, 0, 2, 0, 0, "",
	"New light probe data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_LightProbe
};

FunctionRNA rna_BlendDataProbes_new_func = {
	{(FunctionRNA *)&rna_BlendDataProbes_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataProbes_new_name, (PropertyRNA *)&rna_BlendDataProbes_new_lightprobe}},
	"new", 0, "Add a new light probe to the main database",
	BlendDataProbes_new_call,
	(PropertyRNA *)&rna_BlendDataProbes_new_lightprobe
};

PointerPropertyRNA rna_BlendDataProbes_remove_lightprobe = {
	{(PropertyRNA *)&rna_BlendDataProbes_remove_do_unlink, nullptr,
	-1, "lightprobe", 262272, 0, 5, 0, 0, "",
	"Light probe to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_LightProbe
};

BoolPropertyRNA rna_BlendDataProbes_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataProbes_remove_do_id_user, (PropertyRNA *)&rna_BlendDataProbes_remove_lightprobe,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this light probe before deleting it (WARNING: will also delete objects instancing that light probe data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataProbes_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataProbes_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataProbes_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this light probe",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataProbes_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataProbes_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this light probe",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataProbes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataProbes_tag_func, (FunctionRNA *)&rna_BlendDataProbes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataProbes_remove_lightprobe, (PropertyRNA *)&rna_BlendDataProbes_remove_do_ui_user}},
	"remove", 16, "Remove a light probe from the current blendfile",
	BlendDataProbes_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataProbes_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataProbes_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataProbes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataProbes_tag_value, (PropertyRNA *)&rna_BlendDataProbes_tag_value}},
	"tag", 0, "tag",
	BlendDataProbes_tag_call,
	nullptr
};

StructRNA RNA_BlendDataProbes = {
	{(ContainerRNA *)&RNA_BlendDataHairCurves, (ContainerRNA *)&RNA_BlendDataWorkSpaces,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataProbes_rna_properties, (PropertyRNA *)&rna_BlendDataProbes_rna_type}},
	"BlendDataProbes", nullptr, nullptr, 516, nullptr, "Main Light Probes",
	"Collection of light probes",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataProbes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataProbes_new_func, (FunctionRNA *)&rna_BlendDataProbes_tag_func}
};

/* Main Hair Curves */
CollectionPropertyRNA rna_BlendDataHairCurves_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataHairCurves_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataHairCurves_rna_properties_begin, BlendDataHairCurves_rna_properties_next, BlendDataHairCurves_rna_properties_end, BlendDataHairCurves_rna_properties_get, nullptr, nullptr, BlendDataHairCurves_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataHairCurves_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataHairCurves_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataHairCurves_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataHairCurves_new_name = {
	{(PropertyRNA *)&rna_BlendDataHairCurves_new_curves, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Curves"
};

PointerPropertyRNA rna_BlendDataHairCurves_new_curves = {
	{nullptr, (PropertyRNA *)&rna_BlendDataHairCurves_new_name,
	-1, "curves", 8388736, 0, 2, 0, 0, "",
	"New curves data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Curves
};

FunctionRNA rna_BlendDataHairCurves_new_func = {
	{(FunctionRNA *)&rna_BlendDataHairCurves_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataHairCurves_new_name, (PropertyRNA *)&rna_BlendDataHairCurves_new_curves}},
	"new", 0, "Add a new hair to the main database",
	BlendDataHairCurves_new_call,
	(PropertyRNA *)&rna_BlendDataHairCurves_new_curves
};

PointerPropertyRNA rna_BlendDataHairCurves_remove_curves = {
	{(PropertyRNA *)&rna_BlendDataHairCurves_remove_do_unlink, nullptr,
	-1, "curves", 262272, 0, 5, 0, 0, "",
	"Curves data-block to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Curves
};

BoolPropertyRNA rna_BlendDataHairCurves_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataHairCurves_remove_do_id_user, (PropertyRNA *)&rna_BlendDataHairCurves_remove_curves,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this curves before deleting it (WARNING: will also delete objects instancing that curves data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataHairCurves_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataHairCurves_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataHairCurves_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this curves data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataHairCurves_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataHairCurves_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this curves data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataHairCurves_remove_func = {
	{(FunctionRNA *)&rna_BlendDataHairCurves_tag_func, (FunctionRNA *)&rna_BlendDataHairCurves_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataHairCurves_remove_curves, (PropertyRNA *)&rna_BlendDataHairCurves_remove_do_ui_user}},
	"remove", 16, "Remove a curves data-block from the current blendfile",
	BlendDataHairCurves_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataHairCurves_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataHairCurves_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataHairCurves_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataHairCurves_tag_value, (PropertyRNA *)&rna_BlendDataHairCurves_tag_value}},
	"tag", 0, "tag",
	BlendDataHairCurves_tag_call,
	nullptr
};

StructRNA RNA_BlendDataHairCurves = {
	{(ContainerRNA *)&RNA_BlendDataPointClouds, (ContainerRNA *)&RNA_BlendDataProbes,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataHairCurves_rna_properties, (PropertyRNA *)&rna_BlendDataHairCurves_rna_type}},
	"BlendDataHairCurves", nullptr, nullptr, 516, nullptr, "Main Hair Curves",
	"Collection of hair curves",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataHairCurves_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataHairCurves_new_func, (FunctionRNA *)&rna_BlendDataHairCurves_tag_func}
};

/* Main Point Clouds */
CollectionPropertyRNA rna_BlendDataPointClouds_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataPointClouds_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataPointClouds_rna_properties_begin, BlendDataPointClouds_rna_properties_next, BlendDataPointClouds_rna_properties_end, BlendDataPointClouds_rna_properties_get, nullptr, nullptr, BlendDataPointClouds_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataPointClouds_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPointClouds_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataPointClouds_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataPointClouds_new_name = {
	{(PropertyRNA *)&rna_BlendDataPointClouds_new_pointcloud, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "PointCloud"
};

PointerPropertyRNA rna_BlendDataPointClouds_new_pointcloud = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPointClouds_new_name,
	-1, "pointcloud", 8388736, 0, 2, 0, 0, "",
	"New point cloud data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_PointCloud
};

FunctionRNA rna_BlendDataPointClouds_new_func = {
	{(FunctionRNA *)&rna_BlendDataPointClouds_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPointClouds_new_name, (PropertyRNA *)&rna_BlendDataPointClouds_new_pointcloud}},
	"new", 0, "Add a new point cloud to the main database",
	BlendDataPointClouds_new_call,
	(PropertyRNA *)&rna_BlendDataPointClouds_new_pointcloud
};

PointerPropertyRNA rna_BlendDataPointClouds_remove_pointcloud = {
	{(PropertyRNA *)&rna_BlendDataPointClouds_remove_do_unlink, nullptr,
	-1, "pointcloud", 262272, 0, 5, 0, 0, "",
	"Point cloud to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_PointCloud
};

BoolPropertyRNA rna_BlendDataPointClouds_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataPointClouds_remove_do_id_user, (PropertyRNA *)&rna_BlendDataPointClouds_remove_pointcloud,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this point cloud before deleting it (WARNING: will also delete objects instancing that point cloud data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataPointClouds_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataPointClouds_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataPointClouds_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this point cloud data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataPointClouds_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataPointClouds_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this point cloud data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataPointClouds_remove_func = {
	{(FunctionRNA *)&rna_BlendDataPointClouds_tag_func, (FunctionRNA *)&rna_BlendDataPointClouds_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPointClouds_remove_pointcloud, (PropertyRNA *)&rna_BlendDataPointClouds_remove_do_ui_user}},
	"remove", 16, "Remove a point cloud from the current blendfile",
	BlendDataPointClouds_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataPointClouds_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataPointClouds_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataPointClouds_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPointClouds_tag_value, (PropertyRNA *)&rna_BlendDataPointClouds_tag_value}},
	"tag", 0, "tag",
	BlendDataPointClouds_tag_call,
	nullptr
};

StructRNA RNA_BlendDataPointClouds = {
	{(ContainerRNA *)&RNA_BlendDataVolumes, (ContainerRNA *)&RNA_BlendDataHairCurves,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataPointClouds_rna_properties, (PropertyRNA *)&rna_BlendDataPointClouds_rna_type}},
	"BlendDataPointClouds", nullptr, nullptr, 516, nullptr, "Main Point Clouds",
	"Collection of point clouds",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataPointClouds_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataPointClouds_new_func, (FunctionRNA *)&rna_BlendDataPointClouds_tag_func}
};

/* Main Volumes */
CollectionPropertyRNA rna_BlendDataVolumes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataVolumes_rna_type, nullptr,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataVolumes_rna_properties_begin, BlendDataVolumes_rna_properties_next, BlendDataVolumes_rna_properties_end, BlendDataVolumes_rna_properties_get, nullptr, nullptr, BlendDataVolumes_rna_properties_lookup_string, nullptr, &RNA_Property
};

PointerPropertyRNA rna_BlendDataVolumes_rna_type = {
	{nullptr, (PropertyRNA *)&rna_BlendDataVolumes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	BlendDataVolumes_rna_type_get, nullptr, nullptr, nullptr,&RNA_Struct
};

StringPropertyRNA rna_BlendDataVolumes_new_name = {
	{(PropertyRNA *)&rna_BlendDataVolumes_new_volume, nullptr,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the data-block",
	0, "*",
	PROP_STRING, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, (eStringPropertySearchFlag)0, 0, "Volume"
};

PointerPropertyRNA rna_BlendDataVolumes_new_volume = {
	{nullptr, (PropertyRNA *)&rna_BlendDataVolumes_new_name,
	-1, "volume", 8388736, 0, 2, 0, 0, "",
	"New volume data-block",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Volume
};

FunctionRNA rna_BlendDataVolumes_new_func = {
	{(FunctionRNA *)&rna_BlendDataVolumes_remove_func, nullptr,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataVolumes_new_name, (PropertyRNA *)&rna_BlendDataVolumes_new_volume}},
	"new", 0, "Add a new volume to the main database",
	BlendDataVolumes_new_call,
	(PropertyRNA *)&rna_BlendDataVolumes_new_volume
};

PointerPropertyRNA rna_BlendDataVolumes_remove_volume = {
	{(PropertyRNA *)&rna_BlendDataVolumes_remove_do_unlink, nullptr,
	-1, "volume", 262272, 0, 5, 0, 0, "",
	"Volume to remove",
	0, "*",
	PROP_POINTER, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr,&RNA_Volume
};

BoolPropertyRNA rna_BlendDataVolumes_remove_do_unlink = {
	{(PropertyRNA *)&rna_BlendDataVolumes_remove_do_id_user, (PropertyRNA *)&rna_BlendDataVolumes_remove_volume,
	-1, "do_unlink", 3, 0, 0, 0, 0, "",
	"Unlink all usages of this volume before deleting it (WARNING: will also delete objects instancing that volume data)",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataVolumes_remove_do_id_user = {
	{(PropertyRNA *)&rna_BlendDataVolumes_remove_do_ui_user, (PropertyRNA *)&rna_BlendDataVolumes_remove_do_unlink,
	-1, "do_id_user", 3, 0, 0, 0, 0, "",
	"Decrement user counter of all datablocks used by this volume data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

BoolPropertyRNA rna_BlendDataVolumes_remove_do_ui_user = {
	{nullptr, (PropertyRNA *)&rna_BlendDataVolumes_remove_do_id_user,
	-1, "do_ui_user", 3, 0, 0, 0, 0, "",
	"Make sure interface does not reference this volume data",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
};

FunctionRNA rna_BlendDataVolumes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataVolumes_tag_func, (FunctionRNA *)&rna_BlendDataVolumes_new_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataVolumes_remove_volume, (PropertyRNA *)&rna_BlendDataVolumes_remove_do_ui_user}},
	"remove", 16, "Remove a volume from the current blendfile",
	BlendDataVolumes_remove_call,
	nullptr
};

BoolPropertyRNA rna_BlendDataVolumes_tag_value = {
	{nullptr, nullptr,
	-1, "value", 3, 0, 1, 0, 0, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, (PropertySubType)((int)PROP_NONE | (int)PROP_UNIT_NONE), nullptr, 0, {0, 0, 0}, 0,
	nullptr, 0, nullptr, nullptr, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, PROP_RAW_UNSET, nullptr},
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
};

FunctionRNA rna_BlendDataVolumes_tag_func = {
	{nullptr, (FunctionRNA *)&rna_BlendDataVolumes_remove_func,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataVolumes_tag_value, (PropertyRNA *)&rna_BlendDataVolumes_tag_value}},
	"tag", 0, "tag",
	BlendDataVolumes_tag_call,
	nullptr
};

StructRNA RNA_BlendDataVolumes = {
	{(ContainerRNA *)&RNA_FluidDomainSettings, (ContainerRNA *)&RNA_BlendDataPointClouds,
	nullptr,
	{(PropertyRNA *)&rna_BlendDataVolumes_rna_properties, (PropertyRNA *)&rna_BlendDataVolumes_rna_type}},
	"BlendDataVolumes", nullptr, nullptr, 516, nullptr, "Main Volumes",
	"Collection of volumes",
	"*", 17,
	nullptr, (PropertyRNA *)&rna_BlendDataVolumes_rna_properties,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	{(FunctionRNA *)&rna_BlendDataVolumes_new_func, (FunctionRNA *)&rna_BlendDataVolumes_tag_func}
};

