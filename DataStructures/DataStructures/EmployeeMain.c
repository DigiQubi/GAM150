#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

void ShowEmployeeInfo(Employee* employee)
{
	printf("Num: %d\n", employee->num);
	printf("Name: %s\n", employee->name);
}

void SetEmployee(Employee* employee, int num, char* name)
{
	employee->num = num;
	strcpy(employee->name, name);
}

Employee* WhoTurn(List* plist, char* name, int num)
{
	int i;
	Employee* employee;
	LFirst(plist, &employee);


	if(strcmp(employee->name, name) != 0)
	{
		for (i = 0; i < LCount(plist) - 1; i++)
		{
			LNext(plist, &employee);
			if (strcmp(employee->name, name))
				break;
		}
		if (i >= LCount(plist) - 1)
			return NULL;
	}

	for (i = 0; i < num; i++)
		LNext(plist, &employee);

	return employee;
}

int main(void)
{
	List list;
	Employee* employee;
	int i;
	ListInit(&list);

	employee = (Employee*)malloc(sizeof(Employee));
	SetEmployee(employee, 33424, "Kim young min");
	LInsert(&list, employee);
	employee = (Employee*)malloc(sizeof(Employee));
	SetEmployee(employee, 4532, "Jang sung guk");
	LInsert(&list, employee);
	employee = (Employee*)malloc(sizeof(Employee));
	SetEmployee(employee, 2321, "Lee mung bak");
	LInsert(&list, employee);

	employee = (Employee*)malloc(sizeof(Employee));
	SetEmployee(employee, 123131, "Chae one hyung");
	LInsert(&list, employee);

	employee = WhoTurn(&list, "Lee mung bak", 4);
	ShowEmployeeInfo(employee);

	//employee = WhoTurn(&list, "Chae one hyung", 9);
	//ShowEmployeeInfo(employee);

	if (LFirst(&list, &employee))
	{
		free(employee);

		for (i = 0; i < LCount(&list) - 1; i++)
		{
			if (LNext(&list, &employee))
				free(employee);
		}
	}
	return 0;
}