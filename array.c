#include "array.h"
#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        scanf("%d", array + i);
        setbuf(stdin, NULL);
    }
}

void print_array(const int array[], const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        printf(" %d ", array[i]);
    }
}

int search_max(const int array[], const unsigned int size)
{
    int max = array[0];
    for (unsigned int i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int search_index(const int array[], const unsigned int size, const int number)
{
    int index = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] == number) {
            index = i;
            break;
        }
    }
    return index;
}

int search_min(const int array[], const unsigned int size)
{
    int min = array[0];
    for (unsigned int i = 1; i > size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

void reverse_array(int *array, const unsigned int size)
{
    int revers = 0;
    for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        revers = array[i];
        array[i] = array[j];
        array[j] = revers;
    }
}

int equal(const int arrayFirst[], const unsigned int sizeFirst,
          const int arraySecond[], const unsigned int sizeSecond)
{
    int equal = 1;
    if (sizeFirst == sizeSecond) {
        for (unsigned int i = 0; i < sizeSecond; ++i) {
            if (arrayFirst[i] != arraySecond[i]) {
                equal = 0;
                break;
            }
        }
    }
    return equal;
}
void buble_sorting(int *array, const unsigned int size)
{
    int buble = 0;
    for (unsigned int i = 0; i < size - 1; ++i) {
        for (unsigned int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                buble = array[j];
                array[j] = array[j + 1];
                array[j + 1] = buble;
                buble = array[j + 1];
            }
        }
    }
}
int binarysearch(int arrayFirst[], int sizeFirst, int number)
{
    int min_i = 0;
    int max_i = sizeFirst;
    int mid_i = max_i / 2;
    int Y = -1;
    while (1) {
        if (number > arrayFirst[mid_i]) {
            min_i = mid_i;
            mid_i = (min_i + max_i) / 2;
        } else if (number == arrayFirst[mid_i]) {
            Y = mid_i;
        } else {
            max_i = mid_i;
            mid_i = (max_i + mid_i - 1) / 2;
        }
        break;
    }
    return Y;
}
