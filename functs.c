#include <stdio.h>

double averageVal(int *arr, int size)
{
	double sum = 0;
	int i = size - 1;
	while(i >= 0) 
	{
		sum += arr[i];
		i--;
	}
	return sum/size;
}

void arr_copy(int *a0, int *a1, int size)
{
	while (size > 0)
	{
		*a1 = *a0;
		a1++;
		a0++;
		size--;
	}
}

int mystrlen(char *s) {
	int len = 0;
	while (*s) {
		len++;
		s++;
	}
	return len;
}

int main() 
{
	char str[10] = "abc";
	int arr1[] = {1,2,3,6};
	int arr2[] = {8,9,10,11};
	printf("%f\n", averageVal(arr1, 4));
	arr_copy(arr1, arr2, 4);
	int i;
	for (i = 0; i < 4; i++) {
		printf("Element %i: [%i]\n", i, arr2[i]);
	}
	printf("%i", mystrlen(str));
	return 0;
}

