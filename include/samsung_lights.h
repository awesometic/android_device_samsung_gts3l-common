/*
 * Copyright (C) 2016 The CyanogenMod Project
 *               2017-2022 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

/*
 * Board specific nodes
 *
 * If your kernel exposes these controls in another place, you can either
 * symlink to the locations given here, or override this header in your
 * device tree.
 */
#define PANEL_BRIGHTNESS_NODE "/sys/class/leds/lcd-backlight/brightness"
#define PANEL_MAX_BRIGHTNESS_NODE "/sys/class/leds/lcd-backlight/max_brightness"
#define BUTTON_BRIGHTNESS_NODE "/sys/class/sec/sec_touchkey/brightness"
// Those two paths don't exist in the Galaxy Tab S3 sysfs
#define LED_BLINK_NODE "/sys/devices/virtual/sec/led/led_blink"
#define LED_BLN_NODE "/sys/class/misc/backlightnotification/notification_led"

// Uncomment to enable variable button brightness
//#define VAR_BUTTON_BRIGHTNESS 1

/*
 * Brightness adjustment factors
 *
 * If one of your device's LEDs is more powerful than the others, use these
 * values to equalise them. This value is in the range 0.0-1.0.
 */
#define LED_ADJUSTMENT_R 1.0
#define LED_ADJUSTMENT_G 1.0
#define LED_ADJUSTMENT_B 1.0

/*
 * Light brightness factors
 *
 * It might make sense for all colours to be scaled down (for example, if your
 * LED is too bright). Use these values to adjust the brightness of each
 * light. This value is within the range 0-255.
 */
#define LED_BRIGHTNESS_BATTERY 255
#define LED_BRIGHTNESS_NOTIFICATION 255
#define LED_BRIGHTNESS_ATTENTION 255
