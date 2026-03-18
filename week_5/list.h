#ifndef list_h

#define list_h

typedef struct node node_t;
typedef struct list list_t;

list_t *list_create (void); // create operatiom 
void list_destroy(list_t *list);
size_t list_size(const list_t* list);

void push_front(int element, list_t *list);
struct node* pop_front();

int peek();

#endif

