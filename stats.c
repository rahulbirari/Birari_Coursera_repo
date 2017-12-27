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
 * @file 	stats.c 
 * @brief 	File calculates statistical charecteristics on data
 *
 * 		Assignment 1 Contains  all the function definitiions 
 * 		related to the statistical characteristics calculat-
 * 		ions on the given array of 40 elements in this case.
 *
 * @author 	Rahul Birari
 * @date 	27 Decemeber 2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here*/
	print_array(test,SIZE);
	print_statistics(find_median(test,SIZE),
			 find_mean(test,SIZE),
			 find_minimum(test,SIZE),
			 find_maximum(test,SIZE));
}


/* Add other Implementation File Code Here */

void print_statistics(float  median,float mean,
                      unsigned char minimum,unsigned char maximum){
	printf("Median\t:%g\n",(double)median);
	printf("Mean\t:%g\n",(double)mean);
	printf("Minimum\t:%d\n",minimum);
	printf("Maximum\t:%d\n",maximum);
}

void print_array(unsigned char* array,unsigned int size){
printf("Printing elements of the array of size %d\n",size);
for(int i=0;i<size;i++)
	printf("Index :%d\t Value :%d\n",i,array[i]);
printf("\nPrinting completed\n\n");
}

float find_median(unsigned char* array,unsigned int size){
	unsigned char mid = size/2; 
	array  = sort_array(array,size);
	return (float)(array[mid-1] + array[mid])/2; 
}

float find_mean(unsigned char* array,unsigned int size){
	unsigned int sum=0;
	for(int i=0;i<size;i++)
		sum += array[i];
	return (float)sum/size;  
}

unsigned char find_maximum(unsigned char* array,unsigned int size){
	unsigned char max=0;
	for(int i=0;i<size;i++)
		if(array[i]>max)
			max = array[i];
	return max;
}

unsigned char find_minimum(unsigned char* array,unsigned int size){
	unsigned char min=255;
        for(int i=0;i<size;i++)
                if(array[i]<min)
                        min = array[i];
        return min;
}

unsigned char* sort_array(unsigned char* array,unsigned int size){
	unsigned char temp=0;
	for(int j=0;j<size-1;j++)
	for(int i=0;i<size-1;i++)
		if(array[i]<array[i+1]){
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	printf("\nPrinting Sorted Array:\n");
	print_array(array,size);
	return array;
}
