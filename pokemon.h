struct pokemon {
  char *name;
  char *type;
  struct pokemon *next;
};
void whos_that_pokemon(struct pokemon *);
struct pokemon *catch_pokemon(char *, char *);
void print_list(struct pokemon *);
struct pokemon *insert_front(struct pokemon *, char *, char *);
struct pokemon *free_list(struct pokemon *);
