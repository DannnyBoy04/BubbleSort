#pragma once
/**
 * @file sort.h
 * @author Dánjal Leitisstein Olsen (s255821@dtu.dk)
 * @brief
 * @version 0.1
 * @date 2025-10-22
 *
 * @copyright Copyright (c) 2025
 */

#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stdlib.h>

bool lettersInOrder(char char1, char char2);

bool numbersAscending(char num1, char num2);

extern bool (*pairIsInOrder)(char a, char b);

void swap(size_t index1, size_t index2, char arr[]);

void bubbleSort(const char arr[], size_t len,
                bool (*pairIsInOrder)(char a, char b), char sortedArray[]);

#endif