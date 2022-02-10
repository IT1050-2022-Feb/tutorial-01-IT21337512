/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

//Tutorial 1 Exercise 1

#include <stdio.h>

int main() {
  //declaire and initialize variables.
  float mark1,mark2,average=0;
  //Input and read mark1 and mark2
  printf("Enter mark 1: ");
  scanf("%f",&mark1);
  printf("\nEnter mark 2: ");
  scanf("%f",&mark2);

  //define average.
  average = (mark1+mark2)/2;

  //display average
  printf("The average of the two marks is %.2f",average);
  
  return 0;//end function main.
}

