#include <stdio.h>

#include "liba/liba.h"

void liba_goodbye() {
  fprintf(stdout, "%s\n", "byebye from liba");
}

void liba_hello() {
  fprintf(stdout, "%s\n", "hello from liba");
}

/* EOF */
