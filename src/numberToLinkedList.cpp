/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *newnode, *pre;
	int t;
	newnode = NULL;
	if (N == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = 0;
		newnode->next = NULL;
		return newnode;
	}
	if (N < 0)
		N = N*-1;
	while (N>0)
	{
		t = N % 10;
		if (newnode == NULL)
		{
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = t;
			newnode->next = NULL;
			pre = newnode;
		}
		else
		{
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = t;
			newnode->next = pre;
			pre = newnode;
		}
		N = N / 10;
	}
	return newnode;
}