#include <stdio.h>
#include <stdlib.h>
struct pokemon {
  char *name;
  char *type;
  struct pokemon *next;
};
void whos_that_pokemon(struct pokemon *p) {
  printf("iiiiits %s, a %s-type pokemon!\n", p->name, p->type);
}
struct pokemon *catch_pokemon(char *name, char *type) {
  struct pokemon *output = malloc(16);
  output->name = name;
  output->type = type;
  return output;
}
void print_list(struct pokemon *p) {
  if (p != NULL) {
    whos_that_pokemon(p);
    who_are_those_pokemon(p->next);
  }
}
