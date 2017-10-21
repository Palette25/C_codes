#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;
Node* init_root(int value){
   Node* p=(Node* )malloc(sizeof(Node*));
   p->value=value;
   p->left=NULL;
   p->right=NULL;
   return p;
}
Node* create_node(int value){
	Node* p=(Node*)malloc(sizeof(Node*));
	p->value=value;
	p->left=NULL;
	p->right=NULL;
	return p;
}
void insert_node(Node *p, int value){
	Node* p1=create_node(value);
	while(1) {
	if(p->value>value) {
		if(p->left==NULL) {
		p->left=p1;
		break;}
	    else p=p->left;
	}
	else {
		if(p->right==NULL) {
		p->right=p1;
		break;}
		else p=p->right;
		}
	}
}
void traverse_tree_inorder(Node *p){
	if(p!=NULL) {
		if(p->left!=NULL) traverse_tree_inorder(p->left);
		printf("%d ",p->value);
		if(p->right!=NULL) traverse_tree_inorder(p->right);
	}
}
void recycle_nodes(Node *p){
	if(p!=NULL){
        if(p->left!=NULL) recycle_nodes(p->left);
        if(p->right!=NULL) recycle_nodes(p->right);
        free(p);
	}
	else return 0;
}
 
int main() {
    int node_num, i = 0, temp;
    Node *root = NULL;
    scanf("%d", &node_num);
    while (i < node_num) {
        scanf("%d", &temp);
        if (i == 0) root = init_root(temp);
        else insert_node(root, temp);
        i++;
    }
    traverse_tree_inorder(root);
    printf("\n");
    recycle_nodes(root);
    return 0;
}
