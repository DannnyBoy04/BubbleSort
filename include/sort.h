#pragma once
/**
 * @file sort.h
 * @author Dánjal Leitisstein Olsen (s255821@dtu.dk)
 * @brief The header file for my bubble sort algorithm.
 * @version 1.0
 * @date 2025-10-22
 *
 * @copyright Copyright (c) 2025
 */

#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief A case-insensitive function which compares two characters and checks
 * if they are in order.
 *
 * @param char1
 * @param char2
 * @return true when char2 is greater than or equal to char1 alphabetically.
 * @return false when char2 is less than char1 alphabetically.
 */
bool lettersInOrder(char char1, char char2);

/**
 * @brief A function which compares two numbers and checks if they are in order.
 *
 * @param num1
 * @param num2
 * @return true when num2 is greater than or equal to num1 numerically.
 * @return false when num2 is less than num1.
 */
bool numbersAscending(char num1, char num2);

/**
 * @brief Swaps the elements at index1 and index2 in the passed array by using
 * placeholder variables.
 *
 * @param index1
 * @param index2
 * @param arr
 */
void swap(size_t index1, size_t index2, char arr[]);

/**
 * @brief Copies the elements of arr to sortedArray and sorts them with the
 * passed pair comparison function and the swap function.
 *
 * @param arr The array of characters or numbers to be sorted.
 * @param len The length of the array.
 * @param pairIsInOrder The pair comparison function. Must be either
 * lettersInOrder or numbersAscending.
 * @param sortedArray The first array gets copied here and sorted.
 */
void bubbleSort(const char arr[], size_t len,
                bool (*pairIsInOrder)(char a, char b), char sortedArray[]);

#endif