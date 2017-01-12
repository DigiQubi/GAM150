#pragma once

typedef int Data;

typedef  struct _stack
{

} Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);
void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);