#ifndef _FBCONSOLE_H_INCLUDED
#define _FBCONSOLE_H_INCLUDED

#include <stdint.h>
#include <stdbool.h>

extern bool fbconsole_active;

void fbconsole_init(int width, int height, uint8_t* fb);
void fbconsole_init_backbuffer(uint8_t* backbuffer);

void fbconsole_clear(int r, int g, int b);
int  fbconsole_write(char* string, ...);
void fbconsole_blt(const uint8_t* image, uint16_t width, uint16_t height, int16_t x, int16_t y);

#endif
