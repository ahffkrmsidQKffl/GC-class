#include <stdio.h>
#include "node.h"

void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("\n\t�̸�:%s\n\t��ȭ��ȣ:%s\n", root->key.name, root->key.number);
		displayInorder(root->right);
	}
}