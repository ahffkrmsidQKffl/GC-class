#include <stdio.h>
#include "node.h"

void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("\n\t이름:%s\n\t전화번호:%s\n", root->key.name, root->key.number);
		displayInorder(root->right);
	}
}