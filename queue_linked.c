#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int val;
	struct Node* next;
}Node;

Node *front = NULL;
Node *rear = NULL;

void enQueue(int val){
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->val = val;
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void PRINT(){
	Node *temp = front;
        while(temp != NULL){
		printf("%d ",temp->val);
		temp =  temp->next;
	}
	printf("\n");
}

void deQueue(){
	if(front == NULL)
		return;
	if(rear == front)
		rear = front = NULL;
	Node *temp = front;
	front = front->next;
	ree(temp);
}

int main(){
	Node *head = NULL;
	enQueue(4);
	enQueue(5);
	enQueue(10);
	enQueue(33);
	enQueue(21);
	enQueue(234);
	enQueue(122);
	enQueue(9);
	PRINT(head);
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	PRINT(head);
}
