#include <stdio.h>

int BSerachReacur(int ar[], int first, int last, int target)
{
	int mid;
	if (ar[first] > target || ar[last] < target)
	{
		//printf("%d %d %d\n", ar[first], ar[last], ar[target]);
		return -1;

	}
	//mid = (first + last) / 2; //binarysearch
	mid = ((double)(target - ar[first]) / (ar[last] - ar[first])*(last - first) + first);

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return BSerachReacur(ar, first, mid - 1, target);
	else


		return BSerachReacur(ar, mid + 1, last, target);
}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSerachReacur(arr, 0, sizeof(arr) / sizeof(int) - 1, 2);
	if (idx == -1)
		printf("fail\n");
	else
		printf("idx: %d\n", idx);

	idx = BSerachReacur(arr, 0, sizeof(arr) / sizeof(int) - 1, 10);
	if (idx == -1)
		printf("fail\n");
	else
		printf("idx: %d\n", idx);

	
	return 0;
}