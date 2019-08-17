#ifndef _STRING_H_INCLUDED
#define _STRING_H_INCLUDED

#include "stdarg.h"
#include "stdint.h"

void  memset32(uint32_t* dest, uint32_t c, size_t size);
void  memset(uint8_t* dest, uint8_t c, size_t size);
void* memcpy(void* dest, void* source, size_t size);
size_t strlen(const char* str);

int kvsnprintf(char* buffer, int buffer_size, const char* format, va_list args);

#endif