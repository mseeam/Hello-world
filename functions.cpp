/*********************
Name: Mohammad Seeam
Assignment 2: Hello World
Purpose: implemented string_length function
**********************/
#include "functions.h"
int string_length(const char* str){
int i=0;
while (str[i] != '\0'){
   i++;
}
   return i;
}

