#include <stdio.h>
#define size_1 3
#define size_2 3
int main()
{
    int array_1[size_1] = {0};
    int array_2[size_2] = {0};
    for (int i = 0; i < size_1; ++i) {
        scanf("%d", &array_1[i]);
    }
    for (int i = 0; i < size_2; ++i) {
        scanf("%d", &array_2[i]);
    }
    int sum_1 = 0;
    int sum_2 = 0;
    for (int i = 0; i < size_1; ++i) {
        sum_1 += array_1[i];
    }
    printf("Сумма 1го массива = %d \n", sum_1);
    for (int i = 0; i < size_1; ++i) {
        sum_2 += array_2[i];
    }
    printf("Сумма 2го массива = %d \n", sum_2);
    int arf_1 = 0;
    int arf_2 = 0;
    for (int i = 0; i < size_1; ++i) {
        arf_1 = sum_1 / size_1;
    }
    printf("Среднее арифметическое 1го массива = %d \n", arf_1);
    for (int i = 0; i < size_1; ++i) {
        arf_2 = sum_2 / size_2;
    }
    printf("Среднее арифметическое 2го массива = %d \n", arf_2);
}
