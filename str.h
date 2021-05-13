/* Header file for pointer and array implementation
   of Standard C String library functions*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#ifndef _str_h

#define _str_h

/*Returns the length of the inputted string
str[] */
size_t Str_getLength(const char str[]);

/*Copies second string str2[] onto first string
 str1[], returns newly created string str1[] */
char*  Str_copy (char str1[], const char str2[]);

/*Concatentates second string str2[] after first string
 str1[], returns newly created string str1[]*/
char* Str_concat(char str1[], const char str2[]);

/*Compares two strings, returns if first string str1[]
is lexicographically less, equal, or greater than second string 
str2[] with -1, 0, or 1, respectively */
int Str_compare(const char str1[], const char str2[]);

/*Searches for first instance of second string needle in first string
  haystack, then returns pointer to first occurence if found,
else returns NULL*/
char *Str_search(const char haystack[], const char needle[]);
   

#endif
