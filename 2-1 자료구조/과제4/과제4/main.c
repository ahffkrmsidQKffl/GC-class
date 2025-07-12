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
			printf("����� �̸��� �Է��ϼ���: ");
			scanf(" %s", key.name);
			getchar();
			printf("����� ��ȣ�� �Է��ϼ���: ");
			scanf(" %s", key.number);
			getchar();
			insertBSTNode(root, key);
			break;
		case 2: 
			printf("������ ����� �̸��� �Է��ϼ���: ");
			scanf(" %s", key.name);
			getchar();
			deleteBSTNode(root, key);
			break;
		case 3: 
			printf("ã�� ����� �̸��� �Է��ϼ���: ");
			scanf(" %s", key.name);
			getchar();
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %s�� ã�ҽ��ϴ�! ��ȣ�� %s�Դϴ� \n", foundedNode->key.name, foundedNode->key.number);
			else printf("\n Ž�� ���� \n");
			break;
		case 4: printf("\t[���� Ʈ�� ���] ");
			displayInorder(root); printf("\n");
			break;
		case 5: return 0;
		default: printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ��� \n");
			break;
		}
	}
}

void menu(void) {
	printf("\n*----------------------------*");
	printf("\n\t1 : �Է�");
	printf("\n\t2 : ����");
	printf("\n\t3 : �˻�");
	printf("\n\t4 : ���");
	printf("\n\t5 : ����");
	printf("\n*----------------------------*");
	printf("\n�޴��Է� >> ");
}