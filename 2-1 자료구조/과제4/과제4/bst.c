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
	printf("\n 찾는 이름을 가진 노드가 없습니다!");
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
	else printf("\n 이미 같은 이름을 가진 노드가 있습니다! \n");

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

	//삭제할 노드가 없는 경우
	if (p == NULL) {
		printf("\n 찾는 이름을 가진 노드가 이진 트리에 없습니다!");
		return;
	}

	//삭제할 노드가 단말 노드인 경우
	if ((p->left == NULL) && (p->right == NULL)) {
		if (parent != NULL) { //parent == NULL이라면  p = root에서 p->key == key가 되어 while문을 들어가지 않은 경우뿐
			if (parent->left == p) parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	}

	//삭제할 노드가 자식 노드를 한개 가지고 있는 경우(삭제할 노드의 자리를 자식이 물려받음)
	else if ((p->left == NULL) || (p->right == NULL)) {
		if (p->left != NULL) child = p->left;
		else child = p->right;

		if (parent != NULL) {//parent == NULL이라면  p = root에서 p->key == key가 되어 while문을 들어가지 않은 경우뿐
			if (parent->left == p) parent->left = child;
			else parent->right = child;
		}
		else root = child;
	}

	//삭제할 노드가 자식 노드를 두개 가지고 있는 경우(왼쪽 서브 트리 중 키값이 가장 큰 노드 vs 오른쪽 서브 트리 중 키값이 가장 작은 노드 둘 중에 하나를 후계자로 선택한다.)
	else {
		succ_parent = p;
		succ = p->left;
		while (succ->right != NULL) { //여기선 왼쪽 서브 트리 중 키값이 가장 큰 노드를 후계자로 선택할 셈이네!
			succ_parent = succ;
			succ = succ->right;
		}
		if (succ_parent->left == succ) succ_parent->left = succ->left; //후계자가 시작하자마자 정해졌으면(while문을 통과한 적이 없으면)
		else succ_parent->right = succ->left;
		p->key = succ->key;
		p = succ;
	}
	free(p);
}