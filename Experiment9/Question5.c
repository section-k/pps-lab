			/*												***Question 5***
Write a program to input 10 elements into an array. Then find the largest and smallest element
*/
#include <stdio.h>
int main(){
	int largest = -100, smallest = 100;
	int arr[] = {0,1,2,3,4,5,6,7,8};
	for (int i = 0; i < 9; i ++){
		if ( arr [i] > largest){
			largest = arr[i];
		} if (arr [i] < smallest){
			smallest = arr [i];
		}
	}
	printf("The largest element = %d\nThe smallest element = %d\n",largest,smallest);
}
/* o/p
The largest element = 8
The smallest element = 0
*/
