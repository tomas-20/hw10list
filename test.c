#include <stdio.h>
#include "pokemon.h"
int main() {
  struct pokemon *listo = NULL;
  insert_front(listo, "Weedle", "Bug/Poison");
  insert_front(listo, "Eevee", "Normal");
  insert_front(listo, "Goomy", "Dragon");
  print_list(listo);
}
