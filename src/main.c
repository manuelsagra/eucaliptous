//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------

#include <cpctelera.h>
#include "letras.h"
#include "logo.h"
#include "textos.h"

#define LINE_HEIGHT 10
#define FADE_LENGTH 200
#define LOGO_WIDTH 32
#define LOGO_HEIGHT 8

#define BLACK 0x54
#define WHITE 0x4b
#define GREY 0x40
#define DARK_BLUE 0x44
#define LIGHT_BLUE 0x55
#define SKY_BLUE 0x57
#define RED 0x5c

const u8 palette[16] = 	{BLACK,	WHITE,	GREY,	LIGHT_BLUE};
const u8 palfade0[16] =	{BLACK,	GREY,	DARK_BLUE,	LIGHT_BLUE};
const u8 palfade1[16] =	{BLACK,	GREY,	BLACK,	DARK_BLUE};
const u8 palfaded[16] =	{BLACK,	BLACK,	BLACK,	BLACK};

u8 status;
 
void ec_fadeIn() {
	u16 i;

	cpct_setPalette(palfade1, 4);

	for (i = 0; i < FADE_LENGTH; i++) {
		cpct_waitVSYNC();
	}

	cpct_setPalette(palfade0, 4);

	for (i = 0; i < FADE_LENGTH; i++) {
		cpct_waitVSYNC();
	}
	
	cpct_setPalette(palette, 4);
}

void ec_fadeOut() {
	u16 i;

	cpct_setPalette(palfade0, 4);

	for (i = 0; i < FADE_LENGTH; i++) {
		cpct_waitVSYNC();
	}

	cpct_setPalette(palfade1, 4);

	for (i = 0; i < FADE_LENGTH; i++) {
		cpct_waitVSYNC();
	}
	
	cpct_setPalette(palfaded, 4);
}

void ec_drawString(u8 *str, u8 x, u8 y) {
	u8 i = 0, c, wl;
	u8 *strp, *wp;
	u8 *pvmem;

	for (strp = str; *strp != '\0'; strp++) {
		c = *strp;

		pvmem = cpct_getScreenPtr(CPCT_VMEM_START, x + i, y);
		if (c >= 32) {
			cpct_drawSpriteMasked(letras_tileset[c - 32], pvmem, 2, 8);
		}
		i += 2;

		// Next line?
		if (c == '\n') {
			i = 0;
			y += LINE_HEIGHT;
		} else if (c == ' ') {
			// Calculate next word length
			wl = 0;
			wp = strp + 1;
			while (*wp != ' ' && *wp != '\0' && *wp != '\n') {
				wl++;
				wp++;
			}

			// Does it fit?
			if (i + (wl << 1) > 80) {
				i = 0;
				y += LINE_HEIGHT;
			}
		}
	}
}

void ec_clearScreen() {
	cpct_clearScreen_f64(0);
}

void ec_drawUpperBox() {
	u8 *pvmem;

	cpct_drawSolidBox(CPCT_VMEM_START, 0xFF, 64, 11);
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 64, 0);
	cpct_drawSolidBox(pvmem, 0xFF, 16, 11);

	// Corners
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 0, 0);
	*pvmem = 0x77;
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 0, 10);
	*pvmem = 0x77;

	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 79, 0);
	*pvmem = 0xEE;
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 79, 10);
	*pvmem = 0xEE;
}

void ec_drawBottomBox() {
	u8 *pvmem;

	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 0, 189);
	cpct_drawSolidBox(pvmem, 0x0F, 64, 11);
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 64, 189);
	cpct_drawSolidBox(pvmem, 0x0F, 16, 11);

	// Corners
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 0, 189);
	*pvmem = 0x07;
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 0, 199);
	*pvmem = 0x07;

	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 79, 189);
	*pvmem = 0x0E;
	pvmem = cpctm_screenPtr(CPCT_VMEM_START, 79, 199);
	*pvmem = 0x0E;
}

void ec_showScreen(u8 screen);

void ec_drawLogo() {
	u8 i, j, s = 0;
	u8 *pvmem;

	for (j = 0; j < LOGO_HEIGHT; j++) {
		for (i = 0; i < LOGO_WIDTH; i++) {
			pvmem = cpct_getScreenPtr(CPCT_VMEM_START, 8 + (i << 1), 32 + (j << 3));
			cpct_drawSprite(logo_tileset[s++], pvmem, 2, 8);
		}
	}
}

void ec_showTitle() {
	ec_clearScreen();

	ec_drawLogo();
	ec_drawString("Pulsa cualquier tecla", 19, 128);
	ec_drawString("Manuel Sagra de Diego - 2017", 12, 180);
	ec_drawString("http://elblogdemanu.com/", 16, 190);

	ec_fadeIn();

	do {
		cpct_scanKeyboard();
	} while (!cpct_isAnyKeyPressed());

	ec_fadeOut();

	status = 0;
	ec_showScreen(1);
}

void ec_showScreen(u8 screen) {
	u8 option = 255, next;

	ec_clearScreen();
	ec_drawUpperBox();
	ec_drawBottomBox();

	ec_drawString(headers[screen - 1], 1, 2);
	ec_drawString(statuses[status++], 1, 191);
	if (status > STATUSES - 1) {
		status = 0;
	}

	ec_drawString(texts[screen - 1], 0, 24);

	ec_fadeIn();

	while (1) {
		do {
			cpct_scanKeyboard();
		} while (!cpct_isAnyKeyPressed());

		if (cpct_isKeyPressed(Key_1)) {
			option = 0;
		} else if (cpct_isKeyPressed(Key_2)) {
			option = 1;
		} else if (cpct_isKeyPressed(Key_3)) {
			option = 2;
		} else if (cpct_isKeyPressed(Key_4)) {
			option = 3;
		} else if (cpct_isKeyPressed(Key_Esc)) {
			ec_fadeOut();
			ec_showTitle();
		}

		if (option < 255) {
			next = options[screen - 1][option];

			if (next < 255) {
				ec_fadeOut();

				if (next) {
					ec_showScreen(next);
				} else {
					ec_showTitle();
				}
			}			
		}
	}
}

void main(void) {
	// Disable firmware
	cpct_disableFirmware();

	// Clear screen and set video mode 1
	cpct_setVideoMode(1);

	// Set palette and border
	cpct_setPalette(palfaded, 4);
	cpct_setBorder(0x54);

	ec_initTexts();

	ec_showTitle();
}