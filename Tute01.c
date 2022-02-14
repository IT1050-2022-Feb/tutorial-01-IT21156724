/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float average;

  printf("Enter first mark : ");
  scanf("%d", &mark1);

  printf("Enter second mark : ");
  scanf("%d", &mark2);

  average = (float)(mark1+mark2)/2;

  printf("\nAverage of the two mark : %.2f\n", average);

  return 0;
}

