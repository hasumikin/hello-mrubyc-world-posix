#include "mrubyc_src/mrubyc.h"

#include <stdio.h>
#include <stdlib.h>

#include "src/loops/master.c"

#define MEMORY_SIZE (1024*40)
static uint8_t my_memory_pool[MEMORY_SIZE];

int main(void) {
  mrbc_init(my_memory_pool, MEMORY_SIZE);

  mrbc_create_task( master, 0 );
  mrbc_run();

  return 0;
}

