/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

//Tutorial 1 Exercise 4
#include <stdio.h>

int minimum(int number1,int number2);
int maximum(int number1,int number2);
int multiply(int number1,int number2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum (int number1,int number2){
  int minimum;//declaire variable.

  //calculation
  if(number1<number2)
    minimum = number1;
  else 
    minimum = number2;

  return minimum;
}//end function minimum.\

int maximum (int number1, int number2){
  int maximum;//declaire variable.

  //calculation
  if (number1>number2)
    maximum = number1;
  else 
    maximum = number2;
  
  return maximum;
}//end function maximum.

int multiply (int number1,int number2){
  int answer; //declaire variable.

  //calculation.
  answer = number1 * number2;

  return answer;
}//end function multiply.