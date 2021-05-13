/*String functions implementation using pointers*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "str.h"

size_t Str_getLength(const char *str){
   size_t len =0;
   assert(str!= NULL);
   while (*str++){
      len++;
   }
   return len;
}

char* Str_copy(char *str1, const char *str2){
   char* point = str1;
   assert(str1!= NULL);
   assert(str2!= NULL);
   if (*str2){
      while ((*point++ = *str2++));
   }

   else{
      *point = '\0';
   }
   return str1;
}

char* Str_concat(char *str1, const char *str2){
   char* point = str1;
   assert(str1!= NULL);
   assert(str2!= NULL);
   if (*str2){
      while (*point){
         point++;
      }
      while ((*point++= *str2++));
   }
   return str1;
}

int Str_compare(const char *str1, const char *str2){
   assert(str1!= NULL);
   assert(str2!= NULL);
   while(*str1 == *str2 && *str1 && *str2){
      str1++;
      str2++;
   }
   if (!*str1 && !*str2) return 0;
   else if (!*str1) return -1;
   else if (!*str2) return 1;
   else if (*str1 < *str2) return -1;
   else return 1;
}

char* Str_search(const char *haystack, const char *needle){
   assert(haystack!= NULL);
   assert(needle!= NULL);
   if (!*needle) return (char*) haystack;
   while (*haystack){
      const char* point = haystack;
      const char* qoint = needle;
      while (*point++ == *qoint && *qoint){
         qoint++;
      }
      if (!*qoint) return (char*) haystack;
      haystack++;
   }
   return NULL;
}
