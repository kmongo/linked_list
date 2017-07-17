#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int val;
	struct Node *next;
}Node;

Node* Push(Node *p, int val){
	Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->val = val;
	temp->next = p;
	p = temp;
	return p;
}

Node* Pop(Node *p){
	if(p == NULL)
		return;
	Node *temp = p;
	p = p->next;
	free(temp);
	return p;
}

void PRINT(Node *p){
	Node *temp = p;
	while(temp != NULL){
		printf("%d ",temp->val);
		temp = 	temp->next;
	}
	printf("\n");
}

int main(){
	Node *head = NULL;
	head = Push(head,3);
	head = Push(head,6);
	head = Push(head,2);
	head = Push(head,1);
	head = Push(head,9);
	PRINT(head);
	head = Pop(head);
	head = Pop(head);
	head = Pop(head);
	PRINT(head);
}
