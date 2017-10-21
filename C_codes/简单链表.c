#include <stdio.h>
#include <stdbool.h>
#define NULL 0
typedef struct node {
	int value;
	struct node* next;
} node ;
int size=0, flag=0;
struct node* head;
int i;
bool insert(int position, int value){
	if(position==0&&flag==0) {head = (struct node* )malloc(sizeof(node));head->value=value;head->next=NULL;size++;flag++;}
     else {
     if(position==0) {
	     struct node* new1=(struct node* )malloc(sizeof(node));
	     new1->next=head;
	     new1->value=value;
	     head=new1;
	     size++;
		 return 1;}
     else {
          if(position>=size+1||position<0) {
          	return 0;}
          else {
          	struct node* p1=head->next, * p2=head;
          	for(i=0;i<position-1;i++){
          		if(position!=size) p1=p1->next;
				p2=p2->next;
          	}
          	 struct node* new1=(struct node* )malloc(sizeof(node));
          	 new1->value=value;
          	 p2->next=new1;
          	 if(position==size) new1->next=NULL;
          	 else new1->next=p1;
                size++;
                return 1;
          }
     }
}
}
int get(int position){
    int i;
    struct node* ptr=head;
    for(i=0;i<position;i++)
        ptr=ptr->next;
    return (ptr->value);
}
void clear(void){
	struct node* ptr=head, * pre;
	for(i=0;i<size;i++){
        pre=ptr->next;
		free(ptr);
		ptr=pre;
	}
}

void print() {
	int i;
	for (i = 0; i < size; ++i) {
		printf("%d ", get(i));
	}
	printf("\n");
}
int main() {
	head = NULL;
	size = 0;
	int n, i, position, value;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &position, &value);
		if (insert(position, value)) {
			print();
		} else {
			printf("position is not valid\n");
		}
	}
	clear();
	return 0;
}
