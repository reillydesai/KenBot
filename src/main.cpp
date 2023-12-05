#include <Arduino.h>
#include "Behaviors.h"

Behaviors Ken;

void setup() {
  Ken.Init();
}

void loop() {
  Ken.Run();
}