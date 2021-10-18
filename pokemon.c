#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *POKETYPES[] = {"Normal", "Fire", "Water", "Grass", "Electric", "Ice", "Fighting", "Poison", "Ground", "Flying", "Psychic", "Bug", "Rock", "Ghost", "Dark", "Dragon", "Steel", "Fairy"};
struct pokemon {
  char *name;
  char *type;
  struct pokemon next;
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
char *random_type() {
  srand(time(NULL));
  return POKETYPES[rand() % 18];
}
