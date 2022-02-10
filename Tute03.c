/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

//Tutorial 1 Exercise 3

#include <stdio.h>
int main() {

//declare and initialize variables.
int number,sum=0;
int i;//counter.

//input number.
printf("Enter value for n: ");
scanf("%d",&number);

//calculate sum.
for (i=1;i<=number;i++){
  sum = sum +i;
}//end for loop.

//print sum.
printf("The sum from 1 to %d is %d.",number,sum);

return 0;//end function main.
}

