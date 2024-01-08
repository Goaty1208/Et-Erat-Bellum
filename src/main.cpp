#include "raylib.h"
#include "raymath.h"

#include <thread>
#include <iostream>

#include "engine/mapGeneration.hpp"
#include "engine/mapArithmetics.hpp"
#include "engine/mapObject.hpp"
#include "engine/mouseInput.hpp"
#include "engine/human.hpp"
#include "engine/update.hpp"

int main(){
    
    InitWindow(windowWidth, windowHeight, "Isometric Global Simulator- 0.0.0.16");

    ProgramState program;
    GameState game(mapSizeMedium, program);

    runGame(program, game);

    return 0;
}

