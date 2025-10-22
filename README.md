# Overview

This is a basic C program for my programming course on DTU. It uses the basic bubblesort algorithm to sort the characters in one array and the numbers in another array. It then prints the original and sorted arrays to the console.

# Files

## sort.c

This file handles all of the program logic with the following functions:
- ``lettersInOrder``
- ``numbersAscending``
- ``pairIsInOrder``
- ``swap``
- ``bubbleSort``

## main.c

This file defines the arrays used to test the program logic defined in ``sort.c`` and calls the ``bubblesort`` function in order to sort them. It prints the original arrays and the sorted versions of the arrays.