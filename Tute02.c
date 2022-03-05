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

#include<stdio.h>

int main(void)

{
	float dis,amount =0;
	
	printf("Enter distance :");//Enter input 
	scanf("%f",&dis);
	
	if(distance <=30)
	{
		amount =dis * 50;//calculator firs km
	}
	else 
	{
		amount =(30*50) + ((dis-30)*40);//calculator first 30 km
	}
	
	printf("\n");
	printf("Amount:%.2f\n",amount);//Display amount
	
	return 0;
  }
