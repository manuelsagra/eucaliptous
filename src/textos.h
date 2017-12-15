#ifndef _TEXTOS_H_
#define _TEXTOS_H_

#include <types.h>

#define STATUSES 2
#define TEXT_ITEMS 12

extern const u8 *statuses[STATUSES];
extern const u8 *headers[TEXT_ITEMS];
extern const u8 *texts[TEXT_ITEMS];
extern const u8 options[TEXT_ITEMS][4];

void ec_initTexts();

#endif