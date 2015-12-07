/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int c[3] = { 0, 0, 0 };
	struct node *temp;
	temp = head;
	while (temp->next!=NULL)
	{
		c[temp->data]++;
		temp=temp->next;
	}
	c[temp->data]++;
	temp = head;
	while (c[0] > 0)
	{
		temp->data = 0;
		temp = temp->next;
		c[0]--;
	}
	while (c[1]>0)
	{
		temp->data = 1;
		temp = temp->next;
		c[1]--;
	}
	while (c[2]>0)
	{
		temp->data = 2;
		temp = temp->next;
		c[2]--;
	}
}