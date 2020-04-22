#include <stdio.h>
#include <stdlib.h>

char stringGlobal[3];

struct TreeNode {
	int data;
	struct TreeNode *leftChildNode;
	struct TreeNode *rightChildNode;
};

typedef struct TreeNode node;
node *rootNode = NULL;

void insertNode(int i, node **n) {
	if (*n == NULL) {
		*n = (node*)malloc(sizeof(node));
		(*n)->leftChildNode = NULL;
		(*n)->rightChildNode = NULL;
		(*n)->data = i;
	}
	else
	if ((*n)->data == i)
		printf("\nThis value already exists in the tree!");
	else
	if (i > (*n)->data)
		insertNode(i, &((*n)->rightChildNode));
	else
		insertNode(i, &((*n)->leftChildNode));
}
void searchNode(int i, node *n) {
	if (n == NULL)
		printf("\nValue does not exist in tree!");
	else
	if (n->data == i)
		printf("\nValue found!");
	else
	if (i > n->data)
		searchNode(i, n->rightChildNode);
	else
		searchNode(i, n->leftChildNode);
}

void deleteNode(int i, node *n) {
	if (n == NULL)
		printf("\nValue does not exist in tree!");
	else
	if (n->data == i) {
		if (n->leftChildNode == NULL)
			n = n->rightChildNode;
		else
		if (n->rightChildNode == NULL)
			n = n->leftChildNode;
		else {
			node *temp = n->rightChildNode;
			while (temp->leftChildNode != NULL)
				temp = temp->leftChildNode;
			n = temp;
		}
	}
	else
	if (i > n->data)
		deleteNode(i, n->rightChildNode);
	else
		deleteNode(i, n->leftChildNode);
}

void displayPreOrder(node *n) {
	if (n != NULL) {
		printf("%d ", n->data);
		static int i = 0;
		stringGlobal[i] = n->data;
		i++;
		displayPreOrder(n->leftChildNode);
		displayPreOrder(n->rightChildNode);
	}
}

void displayPostOrder(node *n) {
	if (n != NULL) {
		displayPostOrder(n->leftChildNode);
		displayPostOrder(n->rightChildNode);
		printf("%d ", n->data);
	}
}

void displayInOrder(node *n) {
	if (n != NULL) {
		displayInOrder(n->leftChildNode);
		printf("%d ", n->data);
		displayInOrder(n->rightChildNode);
	}
}

int main(void) {
	int ch, num, num1;
	int i;
	char string1[10];
	do {
		printf("\nSelect a choice from the menu below.");
		printf("\n1. Insert a node.");
		printf("\n2. Search for a node.");
		printf("\n3. Delete a node.");
		printf("\n4. Display the Binary Search Tree.");
		printf("\nChoice: ");
		scanf("%d", &ch);
		switch (ch) {
		case 1: printf("\nEnter an element: ");
			scanf("%d", &num);
			//printf("YESYES");
			insertNode(num, &rootNode);
			break;

		case 2: printf("\nEnter the element to be searched for: ");
			scanf("%d", &num);
			searchNode(num, rootNode);
			break;

		case 3: printf("\nEnter the element to be deleted: ");
			scanf("%d", &num);
			deleteNode(num, rootNode);
			break;

		case 4: printf("\nSelect an order for the elements to be display in.");
			printf("\n1. Pre-order.");
			printf("\n2. Post-order.");
			printf("\n3. In-order.");
			printf("\n4. Display the contents of files according to Pre-order.");
			printf("\nChoice: ");
			scanf("%d", &num1);
			switch (num1) {
			case 1: printf("\nPre-order Display: ");
				displayPreOrder(rootNode);
				break;

			case 2: printf("\nPost-order Display: ");
				displayPostOrder(rootNode);
				break;

			case 3: printf("\nIn-order Display: ");
				displayInOrder(rootNode);
				break;

			case 4: printf("\nContents of files according to Pre-order:");

				
				for (i = 0; i < 3; i++) {

						char filename[256];
						FILE *out;
						sprintf(filename, "%d.txt", array1[i]);
						out = fopen(filename, "w+");
						printf("%s", filename);
						getchar();
						if (fgets(string1, 60, filename) != NULL)
						{

							/* writing content to stdout */
							puts(string1);
						}
						fclose(out);
				}

			default: exit(0);
			}
			break;

		default: exit(0);
		}
		//printf("%d", rootNode->data);
		printf("\nIf you want to return to the menu, press 1.");
		printf("\nChoice: ");
		scanf("%d", &num);
	} while (num == 1);

	return 0;
}