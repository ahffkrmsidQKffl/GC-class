#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "bst.h"

treeNode* searchBST(treeNode* root, element x) {
	treeNode* p;
	p = root;
	while (p != NULL) {
		if (strcmp(x.name, p->key.name) < 0) p = p->left;
		else if (strcmp(x.name, p->key.name) == 0) return p;
		else p = p->right;
	}
	printf("\n ã�� �̸��� ���� ��尡 �����ϴ�!");
	return p;
}

treeNode* insertBSTNode(treeNode* p, element x) {
	treeNode* newNode;
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (strcmp(x.name, p->key.name) < 0) p->left = insertBSTNode(p->left, x);
	else if (strcmp(x.name, p->key.name) > 0) p->right = insertBSTNode(p->right, x);
	else printf("\n �̹� ���� �̸��� ���� ��尡 �ֽ��ϴ�! \n");

	return p;
}

void deleteBSTNode(treeNode* root, element key) {
	treeNode* parent, * p, * succ, * succ_parent;
	treeNode* child;

	parent = NULL;
	p = root;
	while ((p != NULL) && (strcmp(key.name, p->key.name) != 0)) {
		parent = p;
		if (strcmp(key.name, p->key.name) < 0) p = p->left;
		else p = p->right;
	}

	//������ ��尡 ���� ���
	if (p == NULL) {
		printf("\n ã�� �̸��� ���� ��尡 ���� Ʈ���� �����ϴ�!");
		return;
	}

	//������ ��尡 �ܸ� ����� ���
	if ((p->left == NULL) && (p->right == NULL)) {
		if (parent != NULL) { //parent == NULL�̶��  p = root���� p->key == key�� �Ǿ� while���� ���� ���� ����
			if (parent->left == p) parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	}

	//������ ��尡 �ڽ� ��带 �Ѱ� ������ �ִ� ���(������ ����� �ڸ��� �ڽ��� ��������)
	else if ((p->left == NULL) || (p->right == NULL)) {
		if (p->left != NULL) child = p->left;
		else child = p->right;

		if (parent != NULL) {//parent == NULL�̶��  p = root���� p->key == key�� �Ǿ� while���� ���� ���� ����
			if (parent->left == p) parent->left = child;
			else parent->right = child;
		}
		else root = child;
	}

	//������ ��尡 �ڽ� ��带 �ΰ� ������ �ִ� ���(���� ���� Ʈ�� �� Ű���� ���� ū ��� vs ������ ���� Ʈ�� �� Ű���� ���� ���� ��� �� �߿� �ϳ��� �İ��ڷ� �����Ѵ�.)
	else {
		succ_parent = p;
		succ = p->left;
		while (succ->right != NULL) { //���⼱ ���� ���� Ʈ�� �� Ű���� ���� ū ��带 �İ��ڷ� ������ ���̳�!
			succ_parent = succ;
			succ = succ->right;
		}
		if (succ_parent->left == succ) succ_parent->left = succ->left; //�İ��ڰ� �������ڸ��� ����������(while���� ����� ���� ������)
		else succ_parent->right = succ->left;
		p->key = succ->key;
		p = succ;
	}
	free(p);
}