/*
  insert sort 
  sort arr, using of size n using compare function
*/
#include <stdlib.h>
#include <string.h>
#include "genericSort.h"


void insertSort(void *arr, int numberElements, int sizeElement, int (*compare)(const void *a, const void *b)) {
  char *array = (char *)arr;
  void *key;
  int i, j;
  key = malloc(sizeElement);
  for(j = 1; j < numberElements; j++) {
    i = j - 1;
    memcpy(key, &(array[j*sizeElement]), sizeElement);
    while( (i >= 0) && (compare(&array[i*sizeElement], key) > 0) ) {
      memcpy(&array[(i+1)*sizeElement], &array[i*sizeElement], sizeElement);     
      i--;
    }
    memcpy(&array[(i+1)*sizeElement], key, sizeElement);     
  }
  free(key);
}
  
  
