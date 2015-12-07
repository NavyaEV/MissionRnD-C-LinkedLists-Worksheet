/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp, *pre;
	int c = 0;
	if ((K <= 1) || (head == NULL))
		return NULL;
	temp = head;
	while (temp != NULL)
	{
		c++;
		pre = temp;
		temp = temp->next;
		if (c == K - 1)
		{
			if (temp->next == NULL)
			{
				pre->next = NULL;
				return head;
			}
			pre->next = temp->next;
			temp = temp->next;
			c = 0;
		}
	}
	return head;
}