#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

void menu(void);

int main(void) {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice;
	element key;
	element root_key1 = { "a", "1234-5678" };
	element root_key2 = { "b", "1234-5679" };
	element root_key3 = { "c", "1234-5670" };
	element root_key4 = { "d", "1234-5671" };
	element root_key5 = { "e", "1234-5672" };
	element root_key6 = { "f", "1234-5673" };
	element root_key7 = { "g", "1234-5674" };
	element root_key8 = { "h", "1234-5675" };
	element root_key9 = { "i", "1234-5676" };

	root = insertBSTNode(root, root_key1);
	insertBSTNode(root, root_key9);
	insertBSTNode(root, root_key4);
	insertBSTNode(root, root_key5);
	insertBSTNode(root, root_key6);
	insertBSTNode(root, root_key2);
	insertBSTNode(root, root_key3);
	insertBSTNode(root, root_key8);
	insertBSTNode(root, root_key7);
	

	while (1) {
		menu();
		scanf(" %c", &choice);

		switch (choice - '0'){
		case 1: 
			printf("노드의 이름을 입력하세요: ");
			scanf(" %s", key.name);
			getchar();
			printf("노드의 번호를 입력하세요: ");
			scanf(" %s", key.number);
			getchar();
			insertBSTNode(root, key);
			break;
		case 2: 
			printf("삭제할 노드의 이름을 입력하세요: ");
			scanf(" %s", key.name);
			getchar();
			deleteBSTNode(root, key);
			break;
		case 3: 
			printf("찾을 노드의 이름을 입력하세요: ");
			scanf(" %s", key.name);
			getchar();
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %s를 찾았습니다! 번호는 %s입니다 \n", foundedNode->key.name, foundedNode->key.number);
			else printf("\n 탐색 실패 \n");
			break;
		case 4: printf("\t[이진 트리 출력] ");
			displayInorder(root); printf("\n");
			break;
		case 5: return 0;
		default: printf("없는 메뉴입니다. 메뉴를 다시 선택하세욤 \n");
			break;
		}
	}
}

void menu(void) {
	printf("\n*----------------------------*");
	printf("\n\t1 : 입력");
	printf("\n\t2 : 삭제");
	printf("\n\t3 : 검색");
	printf("\n\t4 : 출력");
	printf("\n\t5 : 종료");
	printf("\n*----------------------------*");
	printf("\n메뉴입력 >> ");
}