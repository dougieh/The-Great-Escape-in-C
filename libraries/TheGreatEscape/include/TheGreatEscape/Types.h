#ifndef TYPES_H
#define TYPES_H

#include <setjmp.h>
#include <stddef.h>
#include <stdint.h>

#include "TheGreatEscape/Items.h"
#include "TheGreatEscape/Map.h"
#include "TheGreatEscape/Rooms.h"
#include "TheGreatEscape/Sprites.h"
#include "TheGreatEscape/Tiles.h"
#include "TheGreatEscape/Utils.h"

#include "TheGreatEscape/TheGreatEscape.h"

/* ----------------------------------------------------------------------- */

#define INLINE __inline

/* ----------------------------------------------------------------------- */

/* LIMITS
 */

enum
{
  /** Byte limit of message queue. */
  message_queue_LENGTH = 19, /* == 9 * 2 + 1 */

  /** Limit of simultaneous visible characters. */
  vischars_LENGTH = 8,

  /** Available beds. */
  beds_LENGTH = 6
};

/* ----------------------------------------------------------------------- */

/* ENUMERATIONS
 */

/**
 * Identifiers of game characters.
 */
enum character
{
  character_0_COMMANDANT,
  character_1_GUARD_1,
  character_2_GUARD_2,
  character_3_GUARD_3,
  character_4_GUARD_4,
  character_5_GUARD_5,
  character_6_GUARD_6,
  character_7_GUARD_7,
  character_8_GUARD_8,
  character_9_GUARD_9,
  character_10_GUARD_10,
  character_11_GUARD_11,
  character_12_GUARD_12,
  character_13_GUARD_13,
  character_14_GUARD_14,
  character_15_GUARD_15,
  character_16_GUARD_DOG_1,
  character_17_GUARD_DOG_2,
  character_18_GUARD_DOG_3,
  character_19_GUARD_DOG_4,
  character_20_PRISONER_1,
  character_21_PRISONER_2,
  character_22_PRISONER_3,
  character_23_PRISONER_4,
  character_24_PRISONER_5,
  character_25_PRISONER_6,
  character_26_STOVE_1,
  character_27_STOVE_2,
  character_28_CRATE,
  character__LIMIT,
  character_NONE = 255
};

typedef uint8_t character_t;

/**
 * Identifiers of character structs.
 */
enum
{
  character_structs__LIMIT = 26
};

/**
 * Named elements of movable_items[].
 */
enum movable_item_index
{
  movable_item_STOVE1,
  movable_item_CRATE,
  movable_item_STOVE2,
  movable_item__LIMIT
};

/**
 * Identifiers of input devices.
 */
typedef enum inputdevice
{
  inputdevice_KEYBOARD,
  inputdevice_KEMPSTON,
  inputdevice_SINCLAIR,
  inputdevice_PROTEK,
  inputdevice__LIMIT
}
inputdevice_t;

/**
 * Identifiers of zoombox tiles.
 */
enum zoombox_tile
{
  zoombox_tile_TL,
  zoombox_tile_HZ,
  zoombox_tile_TR,
  zoombox_tile_VT,
  zoombox_tile_BR,
  zoombox_tile_BL,
  zoombox_tile__LIMIT
};

/**
 * Holds a zoombox tile.
 */
typedef uint8_t zoombox_tile_t;

/**
 * Identifiers of character facing direction.
 *
 * Used by vischar->direction.
 *
 * Parts of the code (e.g. move_map) may use up/down instead of top/bottom.
 */
enum direction
{
  direction_TOP_LEFT,
  direction_TOP_RIGHT,
  direction_BOTTOM_RIGHT,
  direction_BOTTOM_LEFT
};

/**
 * Holds a direction.
 */
typedef uint8_t direction_t;

/* ----------------------------------------------------------------------- */

/* FLAGS
 */

/**
 * Identifiers of input directions and actions.
 */
enum input_flags
{
  input_NONE                           = 0,
  input_UP                             = 1,
  input_DOWN                           = 2,
  input_LEFT                           = 3,
  input_RIGHT                          = 6,
  input_FIRE                           = 9,

  input_UP_FIRE                        = input_UP    + input_FIRE,
  input_DOWN_FIRE                      = input_DOWN  + input_FIRE,
  input_LEFT_FIRE                      = input_LEFT  + input_FIRE,
  input_RIGHT_FIRE                     = input_RIGHT + input_FIRE,

  /* input_KICK is a flag set to force an update. */
  input_KICK                           = 1 << 7,
};

/**
 * Identifiers of visible character structure flags.
 */
enum vischar_flags
{
  vischar_CHARACTER_EMPTY_SLOT         = 0xFF,
  vischar_CHARACTER_MASK               = 0x1F, /* Character index mask. */

  vischar_FLAGS_EMPTY_SLOT             = 0xFF,
  vischar_FLAGS_MASK                   = 0x3F,
  vischar_FLAGS_PICKING_LOCK           = 1 << 0, /* Hero only */
  vischar_FLAGS_CUTTING_WIRE           = 1 << 1, /* Hero only */

  /* Four pursuit modes. */
  vischar_FLAGS_PURSUE                 = 1 << 0, /* NPCs only */ // this flag is set when a visible friendly was nearby when a bribe was used. it's also set by hostiles_pursue
  vischar_FLAGS_HASSLE                 = 2 << 0, /* NPCs only */ // this flag is set in guards_follow_suspicious_character when the hero is under player control. it causes hostiles to follow the hero and get in his way but not arrest him.
  vischar_FLAGS_DOG_FOOD               = 3 << 0, /* NPCs only */ // set when food is in the vicinity of a dog
  vischar_FLAGS_SAW_BRIBE              = 4 << 0, /* NPCs only */ // this flag is set when a visible hostile was nearby when a bribe was used. perhaps it distracts the guards?

  vischar_FLAGS_TARGET_IS_DOOR         = 1 << 6, // affects scaling. reset by set_hero_route. set by set_route
  vischar_FLAGS_NO_COLLIDE             = 1 << 7, // don't do collision() for this vischar

  // vischar_FLAGS_TARGET_IS_DOOR:
  // set by set_route (get_target A == 128 case), spawn_character (get_target A == 128 case), handle_route (get_target A == 128 case)
  // cleared by set_hero_route, set_character_route (store_to_vischar case), target_reached (character entering door chunk)
  // tested by character_behaviour (selects a multiply by 4), target_reached (character entering door chunk)

  vischar_BYTE7_COUNTER_MASK           = 0x0F,
  vischar_BYTE7_Y_DOMINANT             = 1 << 5, // when set makes vischar_move_y() run in preference to vischar_move_x()
  vischar_BYTE7_DONT_MOVE_MAP          = 1 << 6, // when set this stops the map from being moved. hero only. set when touch() sees a character touching.
  vischar_BYTE7_LOCATABLE              = 1 << 7, // set by touch(). stops locate_vischar_or_itemstruct considering a vischar

  vischar_ANIMINDEX_BIT7               = 1 << 7, // up/down flag

  // byte 14
  vischar_DIRECTION_MASK               = 0x03,
  vischar_DIRECTION_CRAWL              = 1 << 2
};

/**
 * Identifiers of character struct flags and masks.
 */
enum itemstruct_flags
{
  itemstruct_ITEM_MASK                 = 0x0F,
  itemstruct_ITEM_FLAG_UNKNOWN         = 1 << 4, // only used (in a mask) by pick_up_item, but never set AFAICT
  itemstruct_ITEM_FLAG_POISONED        = 1 << 5, // used with item_FOOD only
  itemstruct_ITEM_FLAG_HELD            = 1 << 7, /**< Set when the item is picked up for the first time (for scoring). */

  itemstruct_ROOM_NONE                 = 0x3F,
  itemstruct_ROOM_MASK                 = 0x3F,
  itemstruct_ROOM_FLAG_NEARBY_6        = 1 << 6, /**< Set when the item is nearby. Cleared by mark_nearby_items and locate_vischar_or_itemstruct. */
  itemstruct_ROOM_FLAG_NEARBY_7        = 1 << 7  /**< Set when the item is nearby. Cleared by mark_nearby_items. Enables find_nearby_item for the item. follow_suspicious_character uses it on item_FOOD to trigger guard dog stuff. */
};

/**
 * Identifiers of door index flags and masks.
 */
enum doorindex_flags
{
  door_REVERSE                         = 1 << 7, /* Used to reverse door transitions. */
  door_LOCKED                          = 1 << 7, /* Used to lock doors. Seems to be only relevant for locked_doors[]. */
  door_NONE                            = 0xFF
};

/**
 * Identifiers of character struct flags and masks.
 */
enum characterstruct_flags
{
  /* Byte 0 */
  characterstruct_CHARACTER_MASK       = 0x1F,   /**< Character index mask. */
  characterstruct_FLAG_DISABLED        = 1 << 6, /**< Disables the character. */ // set when on-screen (in vischar)?
};

/**
 * Identifiers of door flags and masks.
 */
enum door_flags
{
  door_FLAGS_MASK_DIRECTION           = 0x03, // up/down or direction field?
};

/**
 * Identifiers of searchlight flags.
 */
enum searchlight_flags
{
  searchlight_STATE_CAUGHT             = 0x1F, /**< Number of turns before the spotlight gives up looking when the hero hides behind something. */
  searchlight_STATE_SEARCHING          = 0xFF, /**< Likely: Hunting for the hero. */
};

/**
 * Identifiers of items used during escape.
 */
enum escapeitem_flags
{
  escapeitem_COMPASS                   = 1 << 0,
  escapeitem_PAPERS                    = 1 << 1,
  escapeitem_PURSE                     = 1 << 2,
  escapeitem_UNIFORM                   = 1 << 3
};

/* ----------------------------------------------------------------------- */

/* CONSTANTS
 */

/* These are offsets from the start of the screen bank. */
#define score_address                 ((uint16_t) 0x1094)
#define screen_text_start_address     ((uint16_t) 0x10E0)

/* These are offsets from the start of the attributes bank. */
#define morale_flag_attributes_offset ((uint16_t) 0x0042)

/**
 * Identifiers of morale.
 */
enum morale
{
  morale_MIN                           = 0,
  morale_MAX                           = 112,
};

/**
 * Identifiers of map locations.
 *
 * These are /ranges/ of locations.
 */
enum
{
  map_MAIN_GATE_X                      = 0x696D, /* coords: 0x69..0x6D */
  map_MAIN_GATE_Y                      = 0x494B,
  map_ROLL_CALL_X                      = 0x727C,
  map_ROLL_CALL_Y                      = 0x6A72,
};

/**
 * Identifiers of sounds.
 *
 * High byte is iterations, low byte is delay.
 */
typedef enum sound
{
  sound_CHARACTER_ENTERS_1             = 0x2030,
  sound_CHARACTER_ENTERS_2             = 0x2040,
  sound_BELL_RINGER                    = 0x2530,
  sound_PICK_UP_ITEM                   = 0x3030,
  sound_DROP_ITEM                      = 0x3040,
}
sound_t;

/**
 * Identifiers of bell ringing states.
 */
enum bellring
{
  bell_RING_PERPETUAL                  = 0,
  bell_RING_40_TIMES                   = 40,
  bell_STOP                            = 0xFF,
};

/**
 * Holds a bell ringing counter.
 */
typedef uint8_t bellring_t;

/* ----------------------------------------------------------------------- */

/* TYPES
 *
 * Note: Descriptions are written as if prefixed with "This type ...".
 */

/**
 * Holds a game time value.
 */
typedef uint8_t gametime_t;

/**
 * Holds a game event time value.
 */
typedef uint8_t eventtime_t;

/**
 * Holds a route value.
 */
typedef struct route
{
#define route_HALT 0x00
#define route_WANDER 0xFF
#define route_REVERSED (1 << 7)
  uint8_t index; /** Route index as specified to get_route() or 0xFF for "wander". Set bit 7 to reverse the route. */
  uint8_t step;  /** Step within the route. */
}
route_t;

/**
 * Holds an X,Y position (16-bit).
 */
typedef struct bigxy
{
  uint16_t x, y;
}
bigxy_t;

/**
 * Holds an X,Y position.
 */
typedef struct xy
{
  uint8_t x, y;
}
xy_t;

/**
 * Holds an X,Y position and height.
 */
typedef struct pos
{
  uint16_t x, y, height;
}
pos_t;

/**
 * Holds a smaller scale version of pos_t.
 */
typedef struct tinypos
{
  uint8_t x, y, height;
}
tinypos_t;

/**
 * Holds a movable item.
 * This is a sub-struct of vischar (from 'pos' onwards).
 */
typedef struct movableitem
{
  pos_t              pos;           /**< map position */
  const spritedef_t *sprite;        /**< sprite def */
  spriteindex_t      sprite_index;  /**< index into def */
}
movableitem_t;

/**
 * Defines a visible (on-screen) character.
 */
typedef struct vischar
{
  /** $8000 character index */
  uint8_t         character;

  /** $8001 flags */
  uint8_t         flags;

  /** $8002 route */
  route_t         route;

  /** $8004 target position */
  // gets set to state->hero_map_position when vischar_FLAGS_PURSUE
  // gets set to state->item_structs[item_FOOD].pos when vischar_FLAGS_DOG_FOOD
  // used in vischar_move_x/y
  // The .height member of this is never used.
  tinypos_t       target;

  /** $8007 top nibble = flags, bottom nibble = counter used by character_behaviour only */
  uint8_t         counter_and_flags;

  /** $8008 pointer to animations (assigned once only) */
  const uint8_t **animbase;

  /** $800A value in animations */
  const uint8_t  *anim;

  /** $800C */
  uint8_t         animindex; // animation index + up/down flag

  /** $800D movement */
  // compared to flags?
  // bottom two bits are a direction field
  // likely a prev/next version of the 'direction' field
  uint8_t         input;

  /** $800E direction and walk/crawl flag */
  // a direction_t?
  uint8_t         direction;

  /** $800F movable item (position, current character sprite set, sprite_index) */
  movableitem_t   mi;

  /** $8018,$801A 16-bit map-relative x,y coord of vischar's top left */
  // in_permitted_area tests this against absolute values to determine the
  // position. this tells me that this is an isometric projected map coord
  // with 3 bits of fixed point, not a screen coord as previously suspected.
  // setup_vischar_plotting divides it by 8
  // Same coordinate space as map_position but multiplied by 8.
  bigxy_t         iso_pos; // scaled 13.3 format

  /** $801C current room index */
  room_t          room;

  /** $801D unused */
  uint8_t         unused; // FUTURE: Remove

  /** $801E, $801F copy of sprite width, height from spritedef_t */
  uint8_t         width_bytes, height;
}
vischar_t;

/**
 * Holds a key definition.
 */
typedef struct keydef
{
  uint8_t port, mask;
}
keydef_t;

/**
 * Holds all key definitions.
 */
typedef struct keydefs
{
  keydef_t defs[5]; /* left, right, up, down, fire */
}
keydefs_t;

/**
 * Holds input directions and actions.
 */
typedef unsigned int input_t;

/**
 * Holds bitmask of items checked during an escape attempt.
 */
typedef unsigned int escapeitem_t;

/**
 * Defines a boundary such as a wall or fence.
 */
typedef struct wall
{
  uint8_t minx, maxx;
  uint8_t miny, maxy;
  uint8_t minheight, maxheight;
}
wall_t;

/**
 * Defines a screen location and string, for drawing strings.
 */
typedef struct screenlocstring
{
  uint16_t  screenloc; /* screen offset (pointer in original code) */
  uint8_t   length;
  char     *string;    /* string pointer (embedded array in original code) */
}
screenlocstring_t;

/**
 * Defines a character.
 */
typedef struct characterstruct
{
  character_t character_and_flags;
  room_t      room;
  tinypos_t   pos;
  route_t     route;
}
characterstruct_t;

/**
 * Handles a timed event.
 */
typedef void (timedevent_handler_t)(tgestate_t *state);

/**
 * Defines a timed event.
 */
typedef struct timedevent
{
  eventtime_t           time;
  timedevent_handler_t *handler;
}
timedevent_t;

/**
 * Defines an item.
 *
 * This has a similar layout to characterstruct.
 */
typedef struct itemstruct
{
  item_t    item_and_flags; /* bits 0..3 = item, bits 4..7 = flags */
  room_t    room_and_flags; /* bits 0..5 = room, bits 6..7 = flags */
  tinypos_t pos;
  xy_t      iso_pos;
}
itemstruct_t;

/**
 * Maps a route to an event.
 */
typedef struct route2event
{
  uint8_t route; // same type as route.index
  uint8_t handler;
}
route2event_t;

/**
 * Defines a character event handler.
 */
typedef void (charevnt_handler_t)(tgestate_t *state,
                                  route_t    *route);

/**
 * Defines a door's room, direction and position.
 */
typedef struct door
{
  uint8_t   room_and_flags; // top 6 bits are a room_t, bottom 2 are a direction_t
  tinypos_t pos;
}
door_t;

/**
 * Holds a door index.
 * The top bit may be door_LOCKED, the rest is a door index.
 */
typedef uint8_t doorindex_t;

/**
 * Handles item actions.
 */
typedef void (*item_action_t)(tgestate_t *state);

/**
 * Stores a route-to-permitted list mapping.
 */
typedef struct route_to_permitted
{
  uint8_t        routeindex;
  const uint8_t *permitted;
}
route_to_permitted_t;

/**
 * Holds a boundary.
 */
typedef struct bounds
{
  uint8_t x0, x1, y0, y1;
}
bounds_t;

/**
 * Signature of a player input routine.
 */
typedef input_t (*inputroutine_t)(tgestate_t *state);

/**
 * Holds default item locations.
 */
typedef struct default_item_location
{
  uint8_t room_and_flags;
  xy_t    pos;
}
default_item_location_t;

/**
 * Holds mask data.
 */
typedef struct mask
{
  uint8_t   index;  /**< Index into mask_pointers. */
  bounds_t  bounds; /**< Isometric projected bounds of the mask. Used for culling. */
  tinypos_t pos;    /**< If a character is behind this point then the mask is enabled. ("Behind" here means when character coord x is greater and y is greater-or-equal). */
}
mask_t;

/**
 * Holds character meta data.
 */
typedef struct character_class_data
{
  const uint8_t    **animbase;
  const spritedef_t *sprite;
}
character_class_data_t;

/**
 * Holds searchlight movement data.
 */
typedef struct searchlight_movement
{
  xy_t           xy;
  uint8_t        counter;   /**< Counts down. */
  direction_t    direction;
  uint8_t        index;     /**< Index + direction in top bit. */
  const uint8_t *ptr;       /**< Points into searchlight movement data. */
}
searchlight_movement_t;

/**
 * An animation frame.
 */
typedef struct anim
{
  int8_t  dx, dy, dh;  /**< signed deltas */
  uint8_t spriteindex; /**< top bit is a flip flag */
}
anim_t;

/* ----------------------------------------------------------------------- */

#endif /* TYPES_H */

