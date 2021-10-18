#include <stdio.h>
#include "pokemon.h"
int main() {
  struct pokemon *listo = NULL;
  listo = insert_front(listo, "Weedle", "Bug/Poison");
  listo = insert_front(listo, "Eevee", "Normal");
  listo = insert_front(listo, "Goomy", "Dragon");
  print_list(listo);
}
