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
 * @file 	stats.h
 * @brief 	function prototypes for statistics calculations
 *
 * 		Includes function prototypes for statistics calculations
 * 		with input and output values and little description.
 *
 * @author 	Rahul Birari
 * @date 	27 December 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char,float,
		      unsigned char,unsigned char);
/**
 * @brief 	Prints statistical data provided to it
		in a well structured format. 
 *
 * <Add Extended Description Here>
 *
 * @char 	median-	median of the data 
 * @float	mean
 * @char 	minimum
 * @char	maximum
 *
 * 
*/

void print_array(unsigned char*,unsigned int);
/**
 * @brief prints array of size 'size' provided to it
 *
 * @unsigned char*	points to the first element of array
 * @unsinged int	provides the size of the array
 *
 * @return 		void
 */


unsigned char  find_median(unsigned char*,unsigned int);
/**
 * finds median of the given data
 *
 * @unsigned char* 	pointer to the array
 * @size	 	number of elements in the array
 *
 * @reuturns 		unsigned char median of the array
 */



float find_mean(unsigned char*,unsigned int);
/**
 * calculates mean of the array
 *
 * @unsigned char*	pointer to the first element of the array
 * @unsigned int	size of the array
 * 
 * @return 		mean of the elements
 * 			mean is a usigned float type variable 
 */



unsigned char find_maximum(unsigned char*,unsigned int);
/**
 * finds highest elements out of given array of elements
 *
 * @unsigned char*      pointer to the first element of the array
 * @unsigned int        size of the element array
 *
 * @return              returns maximum element of type unsigned char		
 */


unsigned char find_minimum(unsigned char*,unsigned int);
/**
 * finds smallest elements out of given array of elements
 *
 * @unsigned char*      pointer to the first element of the array
 * @unsigned int        size of the element array
 *
 * @return              returns mimimum element of type unsigned char           
 */



unsigned char* sort_array(unsigned char*,unsigned int);
/**
 * sorts array in descending order 0th element largest last element smallest
 *
 * @unsigned char*      pointer to the first element of the array
 * @unsigned int        size of the element array
 *
 * return		returns array pointer to the first element    
 */
#endif /* __STATS_H__ */
