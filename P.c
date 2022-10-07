#include<stdio.h>
#include<stdlib.h>

//declaring a node
typedef struct node{
	int data;
	struct node *next;
}sn;

sn *head,*tail=NULL;

void insertion(sn*,int data, sn* next){
	sn *new= (sn*)malloc(sizeof(struct node));
	new->data=data;
	new->next=head;
//sn* next=new->next;
}

void display(sn* ptr){
	while(ptr!=NULL){
		printf("%d  ", ptr->data);
		ptr=ptr->next;
	}
}

int main(){
	sn* one,two,three,four;
	insertion(one,1,two);
	insertion(two,2,three);
	insertion(three,3,four);
	insertion(four,4,NULL);
	
	display(head);
	
	return 0;
}
