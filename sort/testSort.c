#include <stdio.h>
#include <stdlib.h>
#include "genericSort.h"


int compareInt(const void *a, const void *b) {
  int *aValue = (int *)a;
  int *bValue = (int *)b;
  if(*aValue > *bValue)
    return 1;
  else
    return 0;
}

/*
int compareString(char *string1, char *string2) {
  while(string1 != NULL)
}*/

int main() {
  int array[] = {5, 4, 7, 9, 10, 25, 32, 6};
  int arraySize = 8;
  int i = 0;
  printf("Before sort:");
  while(i < arraySize) {
    printf(" %d", array[i]);
    i++;
  }
  printf("\n");
  insertSort(array, arraySize, sizeof(int), compareInt);
  printf("After sort:");
  i = 0;
  while(i < arraySize) {
    printf(" %d", array[i]);
    i++;
  }
  printf("\n");
  return 0;
}
