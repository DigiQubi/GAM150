#include <stdio.h>
#include "ExpressionTree.h"

int main(void)
{
	char exp[] = "12+7*";
	BTreeNode* eTree = MakeExpTree(exp);

	printf("Prefix: ");
	ShowPrefixTypeExp(eTree); puts("");
	printf("Infix: ");
	ShowInfixTypeExp(eTree); puts("");
	printf("Postfix: ");
	ShowPostfixTypeExp(eTree); puts("");

	printf("Result: %d\n", EvaluateExpTree(eTree));
	return 0;
}