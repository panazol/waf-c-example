#include <stdio.h>

#include "liba/liba.h"
#include "libb/libb.h"
#include "toto.h"

void libb_how_are_you() {
  fprintf(stdout, "%s\n", "here are you from libb");
}


void libb_happy() {
  fprintf(stdout, "%s\n", "happy from libb");
}

void libb_happy() {
  fprintf(stdout, "%s\n", "happy from libb");
}

void libb_happy() {
  fprintf(stdout, "%s\n", "happy from libb");
}

void libb_hello() {
  fprintf(stdout, "%s\n", "goodbye from libb");
}

void libb_hello() {
  fprintf(stdout, "%s\n", "about to say hello from liba...");
  liba_hello();
  fprintf(stdout, "%s\n", "about to say hello from liba... [done]");

  fprintf(stdout, "%s\n", "hello from libb");
}

/* EOF */
