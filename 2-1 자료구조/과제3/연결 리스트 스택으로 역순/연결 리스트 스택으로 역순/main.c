#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//연결 리스트 헤더
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void insertFirstNode(linkedList_h* L, char* x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
void insertLastNode(linkedList_h* L, char* x);
void reverse(linkedList_h* L);
//연결 리스트 헤더

//스택 헤더
#define STACK_SIZE 100

typedef char* element;
element stack[STACK_SIZE];

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
//element peek(void);
void printStack(void);
//스택 헤더



//연결 리스트 함수 정의
int top = -1;
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}

void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

void printList(linkedList_h* L) {
	listNode* p;
	printf("L= (");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

void insertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}

void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->head == NULL) {
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) {
		newNode->link = L->head;
		L->head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) {
		L->head = newNode;
		return;
	}

	temp = L->head;
	while (temp->link != NULL) temp = temp->link;
	temp->link = newNode;
}
void deleteNode(linkedList_h* L, listNode* p) {
	listNode* pre;
	if (L->head == NULL) return;
	if (L->head->link == NULL) {
		free(L->head);
		L->head = NULL;
		return;
	}
	else if (p == NULL) return;
	else {
		pre = L->head;
		while (pre->link != p) {
			pre = pre->link;
		}
		pre->link = p->link;
		free(p);
	}
}

listNode* searchNode(linkedList_h* L, char* x) {
	listNode* temp;
	temp = L->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp - temp->link;
	}
	return temp;
}

void reverse(linkedList_h* L) {
	listNode* p;
	p = L->head;
	element item;

	while (p != NULL) {
		push(p->data);
		p = p->link;
		printStack();
	}


	printStack();
	insertLastNode(L, pop()); 
	printStack();
	insertLastNode(L, pop()); 
	printStack();
	insertLastNode(L, pop());
	printStack();
}
//연결 리스트 함수 정의


//스택 함수 정의
int isStackEmpty(void) {
	if (top == -1) return 1;
	else return 0;
}

int isStackFull(void) {
	if (top == STACK_SIZE-1) return 1;
	else return 0;
}

void push(element item) {
	if (isStackFull()) {
		printf("스택꽉참 \n");
		return;
	}
	else stack[++top] = item;
}

element pop(void) {
	if (isStackEmpty()) {
		printf("스택빔 \n");
		return;
	}
	else return stack[top--];
}

void printStack(void) {
	int i;
	printf("\n STACK [ ");
	for (i = 0; i <= top; i++)
		printf("%s ", stack[i]);
	printf("] ");
}
//스택 함수 정의



int main(void) {
	linkedList_h* L;
	L = createLinkedList_h();

	printf("(3) 리스트 마지막에 [월], [수], [일] 노드 삽입하기! \n");
	insertLastNode(L, "월"); insertLastNode(L, "수"); insertLastNode(L, "일");
	printList(L);


	printf("(5) 스택을 이용해 리스트 순서를 역순으로 바꾸기! \n");
	reverse(L);
	printf("\n");
	printList(L);

	freeLinkedList_h(L);
	getchar();

	return 0;

}

