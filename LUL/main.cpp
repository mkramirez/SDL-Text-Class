#include <iostream>
#include "SDL2/SDL.h"
#include "Engine.hpp"
#include "StartObject.hpp"

SDL_Renderer * renderer = nullptr;

int main(int argc, char * argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cout << "SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    SDL_Window * window = SDL_CreateWindow(
                                           "CSE 202",
                                           SDL_WINDOWPOS_UNDEFINED,
                                           SDL_WINDOWPOS_UNDEFINED,
                                           640,
                                           480,
                                           0);
    if (window == nullptr) {
        std::cout << "SDL Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    
    int flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    renderer = SDL_CreateRenderer(window, -1, flags);
    if (renderer == nullptr) {
        std::cout << "SDL Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    
    StartObject startObject;
    Engine::addObject(&startObject);
    return Engine::run();
}

