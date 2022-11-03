#include "array.h"
#include <stdio.h>

#define SIZE_1 10
#define SIZE_2 10
#define FIND 5

int main()
{
    int a[SIZE_1] = {0};
    fill_array(a, SIZE_1);
    print_array(a, SIZE_1);

    int max = search_max(a, SIZE_1);
    int min = search_min(a, SIZE_1);

    reverse_array(a, SIZE_1);

    int index = search_index(a, SIZE_1, FIND);

    int b[SIZE_2] = {0};

    int eq = equal(a, SIZE_1, b, SIZE_2);

    printf("\nmax = %d min = %d index[%d] = %d eq = %d\n", max, min, FIND,
           index, eq);
}