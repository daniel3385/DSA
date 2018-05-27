#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericSort.h"


struct Student {
  int grade;
  char name[32];
};

int compareStudentsbyGrade(const void *a, const void *b) {
  struct Student *aValue = (struct Student *)a;
  struct Student *bValue = (struct Student *)b;
  if(aValue->grade < bValue->grade)
    return 1;
  else
    return 0;
}

int compareStudentsbyName(const void *a, const void *b) {
  struct Student *aValue = (struct Student *)a;
  struct Student *bValue = (struct Student *)b;
  int result = strcmp(aValue->name, bValue->name);
  if(result <= 0)
    return 0;
  else
    return 1;
}

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


  struct Student arrayStudents[4];
  arrayStudents[0].grade = 7;
  strcpy(arrayStudents[0].name, "Bob");
  arrayStudents[1].grade = 5;
  strcpy(arrayStudents[1].name, "Alice");
  arrayStudents[2].grade = 8;
  strcpy(arrayStudents[2].name, "David");
  arrayStudents[3].grade = 10;
  strcpy(arrayStudents[3].name, "Charlie");
  arrayStudents[4].grade = 6;
  strcpy(arrayStudents[4].name, "Davi");

  int arrayStudentSize = 5;
  int k = 0;
  printf("Before sort by grade:\n");
  while(k < arrayStudentSize) {
    printf("name: %s grade: %d\n", arrayStudents[k].name, arrayStudents[k].grade);
    k++;
  }
  printf("\n");
  insertSort(arrayStudents, arrayStudentSize, sizeof(struct Student), compareStudentsbyGrade);
  printf("After sort by grade:\n");
  k = 0;
  while(k < arrayStudentSize) {
    printf("name: %s grade: %d\n", arrayStudents[k].name, arrayStudents[k].grade);
    k++;
  }
  printf("\n");

  int j = 0;
  printf("Before sort by name:\n");
  while(j < arrayStudentSize) {
    printf("name: %s grade: %d\n", arrayStudents[j].name, arrayStudents[j].grade);
    j++;
  }
  printf("\n");
  // FIXME: there is a *** stack smashing detected *** overhere
  insertSort(arrayStudents, arrayStudentSize, sizeof(struct Student), compareStudentsbyName);
  printf("After sort by name:\n");
  j = 0;
  while(j < arrayStudentSize) {
    printf("name: %s grade: %d\n", arrayStudents[j].name, arrayStudents[j].grade);
    j++;
  }
  printf("\n");
  return 0;
}
