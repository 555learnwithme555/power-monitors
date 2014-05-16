// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LEDS_H
#define LEDS_H

#include "avr_util.h"
#include "io_pins.h"
#include "action_led.h"

// Defines the three leds.
namespace leds {
  // ERRORS LED - blinks when detecting errors.
  extern ActionLed errors;
  
  // DEBUG - not really a led since a led is not connected. Used for 
  // debugging.
  extern io_pins::OutputPin debug;
  
  // Called from the main loop()
  inline void loop() {
    errors.loop();  
  }
}  // namepsace leds

#endif

