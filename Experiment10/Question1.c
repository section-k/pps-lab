/* Write a program to input 10 numbers into an array. Find how many even numbers, how many prime numbers exist in array*/
#include <stdio.h>
#include <math.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int count_even = 0, count_prime = 0, flag = 1;
	//Check Even
	for (int i = 0; i < 10; i++){
		if ((arr[i] & 1) == 0){
			count_even++;
		}
	}
	for (int i = 0; i < 10; i++){
		for (int j = 2; j <= sqrt(arr[i]); j++){
			if ( arr[i] % j == 0){
				flag = 0;
			}
		}
		if (flag == 1){
			count_prime++;
		}
	}
	printf("Total Even numbers = %d\nTotal prime numbers = %d\n",count_even, count_prime);			
}
/*       o/p
Total Even numbers = 5
Total odd numbers = 3
*/
