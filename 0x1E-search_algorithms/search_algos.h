#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* functions prototype*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
