#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "LEDUtils.h"

namespace kaleidoscope {
class LEDChaseEffect : public LEDMode {
 public:
  LEDChaseEffect(void) {}

 protected:
  void update(void) final;

 private:
  uint8_t pos = 5;
  int8_t chase_sign = 1; //negative values when it's going backwar
  uint8_t chase_pixels = 5;
  uint8_t current_chase_counter = 0;
  static const uint8_t chase_threshold = 20;
};
}

extern kaleidoscope::LEDChaseEffect LEDChaseEffect;
