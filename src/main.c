#include <stdio.h>

#include "sdl_engine.h"

SDLEngine engine;

int main(int argc, char* argv[]) {
  int init_succeeded = initialize_engine(&engine, "BASICFlow");

  if (init_succeeded) {
    run(&engine);
  }

  terminate_engine(&engine);

  return 0;
}