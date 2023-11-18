#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>

int pekoRandom(int min, int max);
void swap(int *data1, int *data2);
void arrayPrint(int *array, int len);
void arrayMake(int *array, int count);
void sort(int *array, int count);

#endif // ARRAY_H
