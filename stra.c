/*Array Implementation of standard string library functions*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "str.h"

size_t Str_getLength(const char str[]){
   /*length of the string*/
   size_t len=0;
   assert(str!= NULL);
   while (str[len]!= '\0'){
      len++;
   }
   return len;
}

char*  Str_copy (char str1[], const char str2[]){
   int i = 0;
   assert(str1!= NULL);
   assert(str2!= NULL);
   while (str2[i]!='\0'){
      str1[i] = str2[i];
      i++;
   }
   str1[i++]='\0';
   return str1;
}

char* Str_concat(char str1[], const char str2[]){
   int i = 0;
   int j = 0;
   assert(str1!= NULL);
   assert(str2!= NULL);
   if (str2[0]){
      if (str1){
         while (str1[i]){
            i++;
         }
      }
      while ((str1[i++] = str2[j++]));
   }
   return str1;
}

int Str_compare(const char str1[], const char str2[]){
   int i = 0;
   assert(str1!= NULL);
   assert(str2!= NULL);
   while (str1[i] == str2[i] && str1[i] && str2[i]){
      i++;
   }
   if(!str1[i] && !str2[i]) return 0;
   else if (!str1[i]) return -1;
   else if (!str2[i]) return 1;
   else if (str1[i] < str2[i]) return -1;
   else return 1;
}

char *Str_search(const char haystack[], const char needle[]){
   int i = 0;
   assert(haystack!= NULL);
   assert(needle!= NULL);
   if (!needle[i]) return (char *) &haystack[i];
   while (haystack[i]){
      int j = 0;
      int k = i;
      while(haystack[k++] == needle[j] && needle[j]){
         j++;
      }
      if (!needle[j]) return (char*) &haystack[i];
      i++;
   }
   return NULL;
}

