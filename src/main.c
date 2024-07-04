#include <stdio.h>

// Include SDL3
#include "SDL3/SDL.h"

int main(int argc, char* argv[]) {
  // Init SDL library
  SDL_InitSubSystem(SDL_INIT_VIDEO);

  // Create an application window with the following settings:
  SDL_Window* window = SDL_CreateWindow("BASICFlow",       // window title
                                        640,               // width, in pixels
                                        480,               // height, in pixels
                                        SDL_WINDOW_OPENGL  // flags
  );

  // Check if the window was successfully created
  if (window == NULL) {
    // In the case that the window could not be made...
    printf("Could not create window: %s\n", SDL_GetError());
    return 1;
  }

  SDL_Delay(10000);

  // Clean up
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
