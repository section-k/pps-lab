/*		***Question statement***
1) Write a program to accept fahrenheit and calculate it's equivalent celcius
	celcius = (faherenheit -32)*5)/9)
*/
#include <stdio.h>
int main(){
	float c,f;
	printf("Enter the temperature in faherenheit: ");
	scanf("%f",&f);
	c = ((( f -32)* 5)/9);
	printf("The value of celcius is %f\n",c);
	return 0;
}
/*
O/P :

Enter the temperature in faherenheit: 98
The value of celcius is 36.666668
*/
