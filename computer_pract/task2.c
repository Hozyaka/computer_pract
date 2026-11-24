#include <stdio.h>
#include "arrio.h"
#include "arr_processing.h"
#include <windows.h>

#define N 40

int main() 
{
	SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);
	
    int arr[N];
    input_array(arr, N);
    printf("Исходный ");
    output_array(arr, N);
    
    swap_max_and_last_negative(arr, N);
    
    printf("Результирующий ");
    output_array(arr, N);
    return 0;
}
