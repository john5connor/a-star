#include <stdbool.h>
#include <time.h>

#define MAP_ROWS 10
#define MAP_COLS 10

typedef struct AStarTile{
    unsigned short row;
    unsigned short col;
    
    unsigned short obstacle_val; // If 0 it is an obstacle, 1-9 is acceptable;

    unsigned short c_cost;
    float g_cost;
    float h_cost;
    float f_cost;

    unsigned short open_set_idx;
    bool in_closed_set;

    bool is_starting_tile;
    bool is_ending_tile;

    AStarTile *parent;
} AStarTile; 

typedef struct AStarTileMap {
    AStarTile tile_map[MAP_ROWS][MAP_COLS];

    AStarTile *starting_tile;
    AStarTile *ending_tile;

    double (*distance)(AStarTile *tile1, AStarTile *tile2);

    bool evaluated;
} AStarTileMap;

void map_init(double (*distance)(AStarTile *tile1, AStarTile *tile2), AStarTileMap *map) {
    // Initialize the map, set starting tile, ending tile, determine which tiles are obstacles, the cost of each 
    // tile, etc.

}

