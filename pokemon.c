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
  struct pokemon *output = malloc(sizeof(struct pokemon));
  output->name = name;
  output->type = type;
  return output;
}
void print_list(struct pokemon *p) {
  if (p != NULL) {
    whos_that_pokemon(p);
    print_list(p->next);
  }
}
struct pokemon *insert_front(struct pokemon *p, char *name, char *type) {
  struct pokemon *output = catch_pokemon(name, type);
  output->next = p;
  return output;
}
