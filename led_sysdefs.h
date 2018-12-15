#ifndef __INC_LED_SYSDEFS_H
#define __INC_LED_SYSDEFS_H

#include "FastLED.h"

#include "fastled_config.h"

// Include sam/due headers
#include "platforms/arm/sam/led_sysdefs_arm_sam.h"

#ifndef FASTLED_NAMESPACE_BEGIN
#define FASTLED_NAMESPACE_BEGIN
#define FASTLED_NAMESPACE_END
#define FASTLED_USING_NAMESPACE
#endif

#define CLKS_PER_US (F_CPU/1000000)

#endif
