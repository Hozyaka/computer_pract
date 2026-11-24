#include <stdio.h>
#include "arrio.h"
#include "arr_processing.h"
#include <windows.h>

#define N 50

int main() 
{
	SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);
	
    int arr[N];
    int new_arr[N];
    int new_size;
    
    input_array(arr, N);
    printf("Исходный ");
    output_array(arr, N);
    
    new_size = filter_array(arr, N, new_arr);
    
    printf("Новый массив (размер %d): ", new_size);
    output_array(new_arr, new_size);
    return 0;
}
