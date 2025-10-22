// KnightTour.c

#include "sort.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

// Converts input characters to lowercase and compares them.
bool lettersInOrder(char char1, char char2) {
  char1 = tolower(char1);
  char2 = tolower(char2);

  if (char2 >= char1) {
    return true;
  }
  return false;
}

// Compares the input numbers.
bool numbersAscending(char num1, char num2) {
  if (num2 >= num1) {
    return true;
  }
  return false;
}

bool (*pairIsInOrder)(char a, char b);

void swap(size_t index1, size_t index2, char arr[]) {
  int placeholder1 = arr[index1];
  int placeholder2 = arr[index2];

  arr[index1] = placeholder2;
  arr[index2] = placeholder1;
}

void bubbleSort(const char arr[], size_t len,
                bool pairIsInOrder(char a, char b), char sortedArray[]) {
  for (size_t i = 0; i < len; i++) {
    sortedArray[i] = arr[i];
  }

  bool swapOccurred;

  while (swapOccurred) {
    swapOccurred = false;
    for (size_t i = 0; i + 1 < len; i++) {
      if (!pairIsInOrder(sortedArray[i], sortedArray[i + 1])) {
        swap(i, i + 1, sortedArray);
        swapOccurred = true;
      }
    }
  }
}