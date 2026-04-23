#ifndef LISTS1_H
#define LISTS1_h

typedef struct lists_s *lists_t;
lists_t list_create(void);
void list_push_front(list_t list,int value);
int list_pop_front(lists_t list);
void list_destroy(lists_t list);

#endif
