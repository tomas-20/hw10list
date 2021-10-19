#include <stdio.h>
#include <stdlib.h>
struct pokemon {
  char *name;
  char *type;
  struct pokemon *next;
};
void print_pokemon(struct pokemon *p) {
  if (p == NULL) {
    printf("nothing");
  }
  else {
    printf("%s, a %s-type pokemon", p->name, p->type);
  }
}
void print_pokemon_with_quotes(struct pokemon *p) {
  printf("\"");
  print_pokemon(p);
  printf("\"");
}
void whos_that_pokemon(struct pokemon *p) {
  printf("iiiiit's ");
  print_pokemon(p);
  printf("!\n");
}
void print_list_helper(struct pokemon *p) {
  if (p != NULL) {
    printf(" ");
    print_pokemon_with_quotes(p);
    print_list_helper(p->next);
  }
}
void print_list(struct pokemon *p) {
  printf("(");
  if (p != NULL) {
    print_pokemon_with_quotes(p);
    print_list_helper(p->next);
  }
  printf(")\n");
}
struct pokemon *catch_pokemon(char *name, char *type) {
  struct pokemon *output = malloc(sizeof(struct pokemon));
  output->name = name;
  output->type = type;
  return output;
}
struct pokemon *insert_front(struct pokemon *p, char *name, char *type) {
  struct pokemon *output = catch_pokemon(name, type);
  output->next = p;
  return output;
}
struct pokemon *free_list(struct pokemon *p) {
  if (p != NULL) {
    struct pokemon *output = free_list(p->next);
    free(p);
    return output;
  }
  return p;
}
