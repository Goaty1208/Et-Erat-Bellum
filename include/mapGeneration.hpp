#include "raylib.h"
#include "mapArithmetics.hpp"

#ifndef MAP_GENERATOR_HPP
#define MAP_GENERATOR_HPP

//What in the C++ is this shit -----------------------
int** generateMap(int mapSize);

//I like memory leaks. Note: this function must use the same map size as the size of the map it wants to delete, as otherwise things might very well explode.

void delete2DIntArray(int** map, int mapSize);

//----------------------------------------------------


#endif // MAP_GENERATOR_HPP