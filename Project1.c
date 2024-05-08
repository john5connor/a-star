#include<stdio.h>
#include "AStarTileMap.h"

// Pass the AStarTile object to euclidean_distance

double euclidean_distance(AStarTile *tile1, AStarTile  *tile2) {
    return sqrt(pow(tile2->col - tile1->col, 2) + pow(tile2->row - tile1->row, 2));
}


double manhattan_distance(AStarTile *tile1, AStarTile  *tile2) {
    return abs(tile1->col + tile2->col) + abs(tile1->row + tile2->row);
}


int main() {

    return 0;
}