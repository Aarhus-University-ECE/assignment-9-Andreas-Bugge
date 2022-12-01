#include <stdbool.h>		/* bool, true, false */

typedef struct bnode
{
  int num;
  struct bnode *lchild;
  struct bnode *rchild;
} bnode;

typedef struct node
{
   bnode *data;
  struct node *next;
} node;


typedef struct stack
{
  node* top;
} stack;


bnode *make_node (int num, bnode * left, bnode * right);

//void free_node (node * p);

void print_node (node * p);

void print_tree (node * p, int depth);

void DFT (bnode * root);



void push (stack * topp, bnode * node);

bool isEmpty (stack * topp);

bnode *top (stack * topp);

bnode *pop (stack * topp);

void print_stack (stack * topp);
