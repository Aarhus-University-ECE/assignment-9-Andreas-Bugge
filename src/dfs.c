/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "dfs.h"
#include <assert.h>

void DFT (bnode * root)
{
	// Implement DFS
	// Hint: You can use print_node, print_tree and/or print_stack.
  stack *s = malloc(sizeof(stack));
  // create empty sstack
  //s.node = root;
  //.next = NULL;
  
push(s, root);


  while(!isEmpty(s))
  {
bnode* popped = pop(s);
 
  printf("%d\n", popped->num);

 
 if ( popped->rchild!= NULL)
 {
  push(s, popped->rchild);
  /* code */
 }
 
if ( popped->lchild!= NULL)
 {
  push(s, popped->lchild);
  /* code */
 }
  }


}

bnode *make_node (int num, bnode * left, bnode * right)
{
  bnode* n = malloc(sizeof(bnode));
  n->num = num;
  n->lchild=left;
  n->rchild =right;



	return n;
}


/*
void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

*/
void push (stack * s, bnode * bn)
{
  node *n = malloc(sizeof(node));
  n->data=bn;
  n->next= s->top;
  s->top=n;

  
}

bool isEmpty (stack * s)
{
  return s->top == NULL;

}


// Utility function to pop topp  
// element from the stack 

bnode *pop (stack * s)
{
  assert(s);

  if (s->top == NULL)
  {
    return NULL;
  }

  node* tmp =s->top;


  bnode*bn = tmp->data;
  s->top= tmp->next;

  free(tmp);
  
  return bn;  
}

/*
void print_stack (stack * s)
{
  struct stack *temp = s;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}
*/