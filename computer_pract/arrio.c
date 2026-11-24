#include <stdio.h>
#include "arrio.h"

void input_array(int *arr, int n) 
{
    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void output_array(const int *arr, int n) 
{
    printf("Массив: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
} 
