/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of statistics functions.
 *
 * This file contains the main function and implementations
 * for calculating and displaying statistics from an array of data.
 *
 * @author Preksha
 * @date 3/11/26
 */
 



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void) {


  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);

  return 0;

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *data, unsigned int length) {

    printf("Maximum: %u\n", find_maximum(data, length));
    printf("Minimum: %u\n", find_minimum(data, length));
    printf("Mean: %u\n", find_mean(data, length));
    printf("Median: %u\n", find_median(data, length));

   
}
void print_array(unsigned char *data, unsigned int length) {
    unsigned int i;

    for (i = 0; i < length; i++) {
        printf("[%u] = %u\n", i, data[i]);
    }
}
unsigned char find_median(unsigned char *data, unsigned int length) {

    unsigned char copy[40];
    unsigned int i;

    for (i = 0; i < length; i++) {
        copy[i] = data[i];
    }

    sort_array(copy, length);

    return (unsigned char)(((unsigned int)copy[length / 2 - 1] + copy[length / 2] + 1) / 2);
}

unsigned char find_mean(unsigned char *data, unsigned int length) {
    unsigned int sum = 0;
    unsigned int i;

    for (i = 0; i < length; i++) {
        sum = sum + data[i];
    }

    return (unsigned char)((sum + length / 2) / length);
}


unsigned char find_maximum(unsigned char *data, unsigned int length) {
        unsigned char max = data[0];
        unsigned int i;
    for (i = 1; i < length; i++) {
        if (data[i] > max) {
        max = data[i];
    }
  }

    return max;
    }

unsigned char find_minimum(unsigned char *data, unsigned int length) {
    unsigned char min = data[0];
    unsigned int i;

    for (i = 1; i < length; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }

    return min;
}

void sort_array(unsigned char *data, unsigned int length) {

    unsigned int i, j;
    unsigned char temp;

    for (i = 0; i + 1 < length; i++) {
        for (j = 0; j + 1 < length - i; j++) {

            if (data[j] < data[j + 1]) {

                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;

            }
        }
    }
}
