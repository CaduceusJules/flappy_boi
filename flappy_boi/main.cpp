#include <SDL3/SDL.h>

int main()
{
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO))
    {
        SDL_Log("ERROR: SDL initialisation failed.");
        return -1;
    }

    SDL_Window* window;

    window = SDL_CreateWindow("Flappy Boi", 800, 600, 0);

    SDL_Delay(5000);

    SDL_Quit();

    return 0;
}