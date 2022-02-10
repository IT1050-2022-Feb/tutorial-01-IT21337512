/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

//Tutorial 1 Exercise 2

#include <stdio.h>

int main() {

  //declaire and initialize variables.
  float distance,amount=0;

  //Input data.
  printf("Enter the distance in kilometers: ");
  scanf("%f",&distance);

  //calculate amount to be paid.
  if (distance<=30)//if the vehicle traveled less than 30km.
    amount = distance * 50;
  else//if the vehicle traveled more than 30km.
  amount = 30 * 50 + (distance -30)*40; 

  //print amount to be paid.
  printf("Amount to be paid is %.2f .",amount );
  
  return 0;//end function main.
}
