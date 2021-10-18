#include <stdio.h>
#include "pokemon.h"
int main() {
  struct pokemon *single = insert_front(NULL, "Weedle", "Bug/Poison");
  struct pokemon *doble = insert_front(single, "Eevee", "Normal");
  struct pokemon *triple = insert_front(doble, "Goomy", "Dragon");
  printf("\n");
  printf("%p should be the same as %p\n", doble, triple->next);
  printf("%p should be the same as %p\n", single, doble->next);
}
