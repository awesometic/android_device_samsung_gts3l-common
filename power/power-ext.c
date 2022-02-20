/*
 * Copyright (c) 2014 The CyanogenMod Project
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

#include <errno.h>
#include <string.h>
#include <fcntl.h>

#define LOG_TAG "PowerHAL_TR_Ext"
#include <utils/Log.h>

#include "utils.h"

#define TOUCHKEY_POWER "/sys/class/input/input6/enabled"
#define SPEN_POWER "/sys/class/input/input3/enabled"
#define TSP_POWER "/sys/class/input/input2/enabled"
#define LCD_POWER "/sys/class/power_supply/battery/lcd"

void power_set_interactive_ext(int on) {
    ALOGD("%s: %s input devices", __func__, on ? "enabling" : "disabling");
    sysfs_write(TSP_POWER, on ? "1" : "0");
    sysfs_write(TOUCHKEY_POWER, on ? "1" : "0");
    sysfs_write(SPEN_POWER, on ? "1" : "0");
    sysfs_write(LCD_POWER, on ? "1" : "0");
}