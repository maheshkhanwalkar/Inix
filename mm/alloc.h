#pragma once
#include <stdint.h>

void vm_init(void);

void* vm_alloc(uintptr_t amt);
void vm_free(void* ptr);
