#include <stdio.h>
#include "arr_processing.h"

void swap_max_and_last_negative(int *arr, int n) 
{
    int max_idx = 0;
    int last_neg_idx = -1;

    for (int i = 0; i < n; i++) 
	{
        if (arr[i] > arr[max_idx]) 
		{
            max_idx = i;
        }
        if (arr[i] < 0) 
		{
            last_neg_idx = i;
        }
    }

    if (last_neg_idx != -1 && max_idx != last_neg_idx) 
	{
        int temp = arr[max_idx];
        arr[max_idx] = arr[last_neg_idx];
        arr[last_neg_idx] = temp;
    }
}

int contains_digit_7(int num) 
{
    if (num < 0) num = -num;
    while (num > 0) 
	{
        if (num % 10 == 7) return 1;
        num /= 10;
    }
    return 0;
}

int filter_array(const int *src, int n_src, int *dst) 
{
    int count = 0;
    for (int i = 0; i < n_src; i++) 
	{
        if (src[i] % 7 == 0 || contains_digit_7(src[i])) 
		{
            dst[count++] = src[i];
        }
    }
    return count;
}
