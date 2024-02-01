// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Uncomment this if using Frood Rev6
// #define RP2040_FLASH_GD25Q64CS

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

#define SPLIT_HAND_PIN GP19

/**************************************************
** Include headers specific to keyboard revision **
**************************************************/
#if defined(KEYBOARD_42keebs_cantor_pro_frood_v1)
#    include "v1.h"
#elif defined(KEYBOARD_42keebs_cantor_pro_frood_v2)
#    include "v2.h"
#endif
