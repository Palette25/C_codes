#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct Stack {
  int size;
  Node *top;
} Stack;

Node *createNode(int data, Node *next) {
  Node *ret = (Node *)malloc(sizeof(Node));
  if (!ret) exit(1);
  ret->data = data;
  ret->next = next;
  return ret;
}

void freeStackElem(Stack *stack) {
  while (size(stack) != 0) {
    pop(stack);
  }
}
void pop(Stack * stack){
	  Node *p=stack->top;
	  stack->size--;
      (stack->top)=(stack->top)->next;
      free(p);
}
int top(Stack * stack){
	return ((stack->top)->data);
}
void push(Stack * stack, int i){
	stack->top=createNode(i, stack->top);
	stack->size++;
}
int size(Stack * stack){
	return (stack->size);
}
int empty(Stack * stack){
    if((stack->size)>0) return 0;
    if((stack->size)==0) return 1;
}

int main() {
  Stack s1 = {0, NULL}, s2 = {0, NULL};
  int rand = 0, i;
  scanf("%d", &rand);
  for (i = 0; i < rand; ++i) {
    push(i % 2 ? &s1 : &s2, i);
  }
  for (i = 0; i < rand; ++i) {
    push(i % 2 ? &s2 : &s1, i);    
  }
  printf("The top of Stack 1 is: %d\n", top(&s1));
  printf("The top of Stack 2 is: %d\n", top(&s2));
  puts("Now pop from Stack 1: ");
  while (!empty(&s1)) {
    printf("%d ", top(&s1));
    pop(&s1);
    if (size(&s1) % 5) pop(&s2);
  }
  printf("\nNow Stack 1 is empty ? %s\n", empty(&s1) ? "yes" : "no");
  printf("Size of Stack 2: %d\n", size(&s2));
  freeStackElem(&s2);
  printf("Empty Stack2: %s\n", empty(&s2) ? "success" : "no");
  freeStackElem(&s1);
}


