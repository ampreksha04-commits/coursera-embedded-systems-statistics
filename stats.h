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
 * @file stats.h
 * @brief Declarations of the statistics functions
 *
 * Declares functions that sort an array and find its
 * minimum, maximum, mean and median.
 *
 * @author Preksha
 * @date 3/11/26
 *
 */

 
 
#ifndef __STATS_H__
#define __STATS_H__




/**
 * @brief Prints the statistical information of an array.
 *
 * This function prints the minimum, maximum, mean and median of the array to the screen.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return Nothing
 */
void print_statistics(unsigned char *data, unsigned int length);


/**
 * @brief Prints all elements of an array.
 *
 * This function displays every element of the given array on the screen.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return Nothing
 */
void print_array(unsigned char *data, unsigned int length);

/**
 * @brief Finds the median value of an array.
 *
 * This function finds the middle value of the given array.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return The median value of the array
 */
unsigned char find_median(unsigned char *data, unsigned int length);


/**
 * @brief Finds the mean of an array.
 *
 * This function adds the array values and divides their sum by the number of items.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return The mean value of the array
 */
unsigned char find_mean(unsigned char *data, unsigned int length);


/**
 * @brief Finds the maximum value in an array.
 *
 * This function searches the array to find the largest value.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char *data, unsigned int length);


/**
 * @brief Finds the minimum value in an array.
 *
 * This function searches the array to find the smallest value.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char *data, unsigned int length);


/**
 * @brief Sorts the elements of an array in descending order.
 *
 * This function rearranges the array from largest to smallest, placing the largest element first and the smallest element last.
 *
 * @param data Pointer to the array of numbers
 * @param length Number of items in the array
 *
 * @return Nothing
 */
void sort_array(unsigned char *data, unsigned int length);









#endif /* __STATS_H__ */
