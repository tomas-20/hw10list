struct pokemon {
  char *name;
  char *type;
  struct pokemon *next;
};
void whos_that_pokemon(struct pokemon *);
struct pokemon *catch_pokemon(char *, char *);
char *random_type();
void print_list(struct pokemon *);
