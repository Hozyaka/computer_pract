#include <stdio.h>
#include <windows.h>

// Функция проверяет, подходит ли число под условие
int is_suitable(int num) 
{
    int sum = 0;
    int temp = num;

    while (temp > 0) 
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum % 7 == 0 && num % 7 == 0) {
        return 1; // Подходит
    }
    return 0; // Не подходит
}

int main() 
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("Числа, у которых сумма цифр кратна 7 и само число делится на 7:\n");

    for (int num = 100; num <= 999; num++) 
    {
        if (is_suitable(num)) 
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
