#include<stdio.h>
#include<stdlib.h>

int main(){
	typedef struct linkedlist *node;
	
	node createNode() {
		node temp;
		temp = (node)malloc(sizeof(struct linkedlist));
		temp-->next = null;
		return temp;
	}
	return 0;
}
