#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <Windows.h>


typedef struct _node {
	int data;
	struct _node* next;
}node;

node* head;
node* tail;

void init_list(void) {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->next = tail;
	tail->next = tail;
}

node* ordered_insert(int k) {
	node* s;
	node* p;
	node* r = NULL;
	p = head;
	s = p->next;

	while (s->data < k && s != tail) {
		p = p->next;
		s = s->next;
	}

	r = (node*)malloc(sizeof(node));
	r->data = k;
	p->next = r;
	r->next = s;

	return r;
}
node* print_list(node* t) {
	printf("\n");
	while (t != tail) {
		printf("%-8d", t->data);
		t = t->next;
	}
}
int delete_node(int k) {
	node* p;
	node* s;
	p = head;
	s = p->next;

	while (s->data != k && s != tail) {
		p = p->next;
		s = p->next;
	}

	if (s != tail) {
		p->next = s->next;
		free(s);
		return 1;
	}
	else
		return 0;
}

int _tmain(int argc, _TCHAR* argv[]) {
	node* t=NULL;

	init_list();
	ordered_insert(10);
	ordered_insert(5);
	ordered_insert(8);
	ordered_insert(3);
	ordered_insert(1);
	ordered_insert(7);

	printf("\nInitial Liked list is ");
	print_list(head->next);

	delete_node(8);
	print_list(head->next);

	return 0;
}
