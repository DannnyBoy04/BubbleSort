/**
 * @file main.c
 * @author Dánjal Leitisstein Olsen (s255821@dtu.dk)
 * @brief
 * @version 1.0
 * @date 2025-10-22
 *
 * @copyright Copyright (c) 2025
 */

#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

// The two arrays to be sorted.
char letterArray[10] = {'z', 'S', 's', 'a', 'g', 'F', 'm', 'u', 'U', 'Z'};
char numberArray[10] = {4, -1, 2, 9, 3, 6, 8, 7, 1, -3};

int main() {
  size_t len = _Countof(letterArray);
  char sortedLetterArray[len];

  // Sort letterArray with the lettersInOrder pair comparison function.
  bubbleSort(letterArray, len, lettersInOrder, sortedLetterArray);

  printf("%s\n", "Original letter array:");
  // Print every element of letterArray.
  for (size_t i = 0; i < len; i++) {
    printf("%c, ", letterArray[i]);
  }
  // Print every element of sortedLetterArray.
  printf("\n%s\n", "Sorted letter array:");
  for (size_t i = 0; i < len; i++) {
    printf("%c, ", sortedLetterArray[i]);
  }

  len = _Countof(numberArray);
  char sortedNumberArray[len];

  // Sort numberArray with the numbersAscending pair comparison function.
  bubbleSort(numberArray, len, numbersAscending, sortedNumberArray);

  printf("\n%s\n", "Original number array:");
  // Print every element of numberArray.
  for (size_t i = 0; i < len; i++) {
    printf("%d, ", numberArray[i]);
  }
  printf("\n%s\n", "Sorted number array:");
  // Print every element of sortedNumberArray.
  for (size_t i = 0; i < len; i++) {
    printf("%d, ", sortedNumberArray[i]);
  }
}