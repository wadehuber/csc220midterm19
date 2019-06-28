/* CSC220 Midterm Exam */
/* Summer 2019 */
/* Make the changes indicated in the comments that include "MIDTERM" */
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
/* MIDTERM - Define a symbolic constant for the str length */
 
typedef struct {
   int x;
   char str[50];
} exam_t;
 
/* MIDTERM - complete the function to replace all spaces in string str with underscores */
/* "Hello World" -> "Hello_World" */
void no_spaces(char * str, int len) {
}
 
int main (void) {
  char str[50];
  int num;
  exam_t * exam;
   
  /* MIDTERM - Allocate memory for the exam pointer */
 
  printf ("Enter a number: " );
  fgets(str, 49, stdin);
  num=atoi(str);
  printf ("Enter a string: " );
  fgets(str, 49, stdin);
  no_spaces(str, 49);
 
  /* MIDTERM - Fill exam using num & str */
 
  printf ("---------------------------\n");
  printf ("num: %d\n", exam->x);
  printf ("str: %s\n", exam->str);
  printf ("---------------------------\n");
  return 0;
}
