#include <stdio.h>
#include "BinaryTree.h"

void ShowIntData(int data);

int main(void)
{
	BTreeNode* bt[6];

	for (int i = 0; i < 6; i++)
		bt[i] = MakeBTreeNode();

	for (int i = 0; i < 6; i++)
		SetData(bt[i], i + 1);

	for (int i = 0; i < 2; i++)
	{
		MakeLeftSubTree(bt[i], bt[2*i +1]);
		MakeRightSubTree(bt[i], bt[2*i + 2]);
	}
	MakeRightSubTree(bt[2], bt[5]);

	PreorderTraverse(bt[0], ShowIntData);
	puts("");
	InorderTraverse(bt[0], ShowIntData);
	puts("");
	PostorderTraverse(bt[0], ShowIntData);
	puts("");
	DeleteTree(bt[0]);
	return 0;
}

void ShowIntData(int data)
{
	printf("%d ", data);
}