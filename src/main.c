// main.c

#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

char letterArray[5] = "bdcea";
char numberArray[5] = {5, 3, 2, 1, 4};

int main() {
  size_t len = _Countof(letterArray);
  char sortedLetterArray[len];

  bubbleSort(letterArray, len, lettersInOrder, sortedLetterArray);

  printf("%s\n", "Original letter array:");
  printf("%s\n", letterArray);
  printf("%s\n", "Sorted letter array:");
  printf("%s\n", sortedLetterArray);

  len = _Countof(numberArray);
  char sortedNumberArray[len];

  bubbleSort(numberArray, len, numbersAscending, sortedNumberArray);

  printf("%s\n", "Original number array:");
  for (size_t i = 0; i < len; i++) {
    printf("%d", numberArray[i]);
  }
  printf("\n%s\n", "Sorted number array:");
  for (size_t i = 0; i < len; i++) {
    printf("%d", sortedNumberArray[i]);
  }
}