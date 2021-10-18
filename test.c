#include <stdio.h>
#include "pokemon.h"
int main() {
  struct pokemon *single = insert_front(NULL, "Weedle", "Bug/Poison");
  struct pokemon *doble = insert_front(single, "Eevee", "Normal");
  printf("%p should be the same as %p\n", single, doble->next);
}
