#include "rogue.h"
#include "creature.h"
#include "action.h"
#include "map.h"
#include <stdio.h>
#include <stdlib.h>

typedef enum collision_type {
    CREATURE_WALL,
    CREATURE_CREATURE
} collision_type;

typedef struct collision {
    collision_type *coll_type;
    creature_t *c;
    tile_t *t;
} collision;

/* Check if there's a collision */
collision_t get_collision(creature_t *c, tile_t *t) {
    collision *coll = (collision *) malloc(sizeof(collision));
    
    return NULL;
}

/* Resolve a collision */
int resolve_collision(collision_t coll) {
    
}
