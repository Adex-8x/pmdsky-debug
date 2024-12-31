#ifndef HEADERS_DATA_OVERLAY29_H_
#define HEADERS_DATA_OVERLAY29_H_

#include "overlay29/move_effects.h"

extern uint32_t DUNGEON_STRUCT_SIZE;
extern int32_t MAX_HP_CAP;
extern uint32_t OFFSET_OF_DUNGEON_FLOOR_PROPERTIES;
extern int32_t SPAWN_RAND_MAX;
extern uint32_t DUNGEON_PRNG_LCG_MULTIPLIER;
extern uint32_t DUNGEON_PRNG_LCG_INCREMENT_SECONDARY;
extern int32_t ATTACK_SPRITE_BUFFER_SIZE;
extern enum monster_id KECLEON_FEMALE_ID;
extern enum monster_id KECLEON_MALE_ID;
extern int32_t MSG_ID_SLOW_START;
extern int32_t EXPERIENCE_POINT_GAIN_CAP;
extern enum move_id JUDGMENT_MOVE_ID;
extern enum move_id REGULAR_ATTACK_MOVE_ID;
extern enum monster_id DEOXYS_ATTACK_ID;
extern enum monster_id DEOXYS_SPEED_ID;
extern enum monster_id GIRATINA_ALTERED_ID;
extern enum move_id PUNISHMENT_MOVE_ID;
extern int32_t OFFENSE_STAT_MAX;
extern enum move_id PROJECTILE_MOVE_ID;
extern fx32_16 BELLY_LOST_PER_TURN;
extern int MONSTER_HEAL_HP_MAX;
extern struct move_target_and_range MOVE_TARGET_AND_RANGE_SPECIAL_USER_HEALING;
extern int32_t PLAIN_SEED_STRING_ID;
extern int32_t MAX_ELIXIR_PP_RESTORATION;
extern int32_t SLIP_SEED_FAIL_STRING_ID;
extern enum move_id ROCK_WRECKER_MOVE_ID;
extern enum monster_id CASTFORM_NORMAL_FORM_MALE_ID;
extern enum monster_id CASTFORM_NORMAL_FORM_FEMALE_ID;
extern enum monster_id CHERRIM_SUNSHINE_FORM_MALE_ID;
extern enum monster_id CHERRIM_OVERCAST_FORM_FEMALE_ID;
extern enum monster_id CHERRIM_SUNSHINE_FORM_FEMALE_ID;
extern struct floor_generation_status* FLOOR_GENERATION_STATUS_PTR;
extern uint32_t OFFSET_OF_DUNGEON_N_NORMAL_ITEM_SPAWNS;
extern uint32_t DUNGEON_GRID_COLUMN_BYTES;
extern int32_t DEFAULT_MAX_POSITION;
extern uint32_t OFFSET_OF_DUNGEON_GUARANTEED_ITEM_ID;
extern struct fixed_room_tile_spawn_entry FIXED_ROOM_TILE_SPAWN_TABLE[11];
extern struct item_id_16 TREASURE_BOX_1_ITEM_IDS[12];
extern struct fixed_room_id_8 FIXED_ROOM_REVISIT_OVERRIDES[256];
extern struct fixed_room_monster_spawn_entry FIXED_ROOM_MONSTER_SPAWN_TABLE[120];
extern struct fixed_room_item_spawn_entry FIXED_ROOM_ITEM_SPAWN_TABLE[63];
extern struct fixed_room_entity_spawn_entry FIXED_ROOM_ENTITY_SPAWN_TABLE[269];
extern struct status_icon_flags STATUS_ICON_ARRAY_MUZZLED[2];
extern struct status_icon_flags STATUS_ICON_ARRAY_MAGNET_RISE[2];
extern struct status_icon_flags STATUS_ICON_ARRAY_MIRACLE_EYE[3];
extern struct status_icon_flags STATUS_ICON_ARRAY_LEECH_SEED[3];
extern struct status_icon_flags STATUS_ICON_ARRAY_LONG_TOSS[3];
extern struct status_icon_flags STATUS_ICON_ARRAY_BLINDED[5];
extern struct status_icon_flags STATUS_ICON_ARRAY_BURN[5];
extern struct status_icon_flags STATUS_ICON_ARRAY_SURE_SHOT[5];
extern struct status_icon_flags STATUS_ICON_ARRAY_INVISIBLE[5];
extern struct status_icon_flags STATUS_ICON_ARRAY_SLEEP[8];
extern struct status_icon_flags STATUS_ICON_ARRAY_CURSE[7];
extern struct status_icon_flags STATUS_ICON_ARRAY_FREEZE[8];
extern struct status_icon_flags STATUS_ICON_ARRAY_CRINGE[8];
extern struct status_icon_flags STATUS_ICON_ARRAY_BIDE[14];
extern struct status_icon_flags STATUS_ICON_ARRAY_REFLECT[18];
extern int16_t DIRECTIONS_XY[8][2];
extern struct position DISPLACEMENTS_WITHIN_2_LARGEST_FIRST[26];
extern struct position DISPLACEMENTS_WITHIN_2_SMALLEST_FIRST[26];
extern struct position DISPLACEMENTS_WITHIN_3[50];
extern struct action_16 ITEM_CATEGORY_ACTIONS[16];
extern int16_t FRACTIONAL_TURN_SEQUENCE[125];
extern uint16_t BELLY_DRAIN_IN_WALLS_INT;
extern uint16_t BELLY_DRAIN_IN_WALLS_THOUSANDTHS;
extern struct fx64_16 DAMAGE_MULTIPLIER_0_5;
extern struct fx64_16 DAMAGE_MULTIPLIER_1_5;
extern struct fx64_16 DAMAGE_MULTIPLIER_2;
extern struct fx64_16 CLOUDY_DAMAGE_MULTIPLIER;
extern struct fx64_16 SOLID_ROCK_MULTIPLIER;
extern struct fx64_16 DAMAGE_FORMULA_MAX_BASE;
extern struct fx64_16 WONDER_GUARD_MULTIPLIER;
extern struct fx64_16 DAMAGE_FORMULA_MIN_BASE;
extern struct damage_negating_exclusive_eff_entry TYPE_DAMAGE_NEGATING_EXCLUSIVE_ITEM_EFFECTS[28];
extern struct status_two_turn_id_8 TWO_TURN_STATUSES[11];
extern struct two_turn_move_and_status TWO_TURN_MOVES_AND_STATUSES[22];
extern int32_t SPATK_STAT_IDX;
extern int32_t ATK_STAT_IDX;
extern fx32_8 ROLLOUT_DAMAGE_MULT_TABLE[10];
extern struct rgba MAP_COLOR_TABLE[9];
extern bool CORNER_CARDINAL_NEIGHBOR_IS_OPEN[4][8];
extern int16_t GUMMI_LIKE_STRING_IDS[4];
extern int16_t GUMMI_IQ_STRING_IDS[5];
extern int16_t DAMAGE_STRING_IDS[27];
extern struct dungeon* DUNGEON_PTR;
extern struct dungeon* DUNGEON_PTR_MASTER;
extern struct top_screen_status* TOP_SCREEN_STATUS_PTR;
extern struct entity* LEADER_PTR;
extern struct prng_state DUNGEON_PRNG_STATE;
extern uint32_t DUNGEON_PRNG_STATE_SECONDARY_VALUES[5];
extern uint16_t LOADED_ATTACK_SPRITE_FILE_INDEX;
extern enum pack_file_id LOADED_ATTACK_SPRITE_PACK_ID;
extern struct exclusive_item_effect_id_8 EXCL_ITEM_EFFECTS_WEATHER_ATK_SPEED_BOOST[8];
extern struct exclusive_item_effect_id_8 EXCL_ITEM_EFFECTS_WEATHER_MOVE_SPEED_BOOST[8];
extern struct exclusive_item_effect_id_8 EXCL_ITEM_EFFECTS_WEATHER_NO_STATUS[8];
extern uint32_t AI_THROWN_ITEM_ACTION_CHOICE_COUNT;
extern struct exclusive_item_effect_id_8 EXCL_ITEM_EFFECTS_EVASION_BOOST[8];
extern struct tile DEFAULT_TILE;
extern bool HIDDEN_STAIRS_SPAWN_BLOCKED;
extern void* FIXED_ROOM_DATA_PTR;
extern struct dungeon_fades* DUNGEON_FADES_PTR;

#endif
