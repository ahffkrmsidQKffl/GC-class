#pragma once
#define MAX_NAME 20
#define MAX_NUMBER 40

typedef struct element {
	char name[MAX_NAME];
	char number[MAX_NUMBER];
}element;

typedef struct treeNode {
	element key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

void displayInorder(treeNode* root);