#include "array.h"
#include <stdio.h>
#define SIZE_1 10
#define SIZE_2 10

int main()
{
    int arrayFirst[SIZE_1] = {0};
    int arraySecond[SIZE_2] = {0};

    fill_array(arrayFirst, SIZE_1);
    print_array(arrayFirst, SIZE_1);
    printf("\n");

    fill_array(arraySecond, SIZE_2);
    print_array(arraySecond, SIZE_2);

    printf("max - %d \n", search_max(arrayFirst, SIZE_1));
    printf("min - %d \n", search_min(arrayFirst, SIZE_1));

    reverse_array(arrayFirst, SIZE_1);
    print_array(arrayFirst, SIZE_1);

    printf("Index = %d \n", search_index(arrayFirst, SIZE_1, 5));

    int equa = equal(arrayFirst, SIZE_1, arraySecond, SIZE_2);
    printf("equal = %d\n", equa);

    buble_sorting(arrayFirst, SIZE_1);
    print_array(arrayFirst, SIZE_1);

    preintf("Y = %d \n", binarysearch(arrayFirst, SIZE_1, 37));
}