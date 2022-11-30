/*													***Question 7***
Write a program to input 10 integer and sort them in ascending order (use selection sort method)
*/
#include <stdio.h>
int main(){
	int arr[] = {3,4,2,1,5};
	/* printf("%d",sizeof(arr)); */
	for (int i = 0; i < 5 - 1; i++){
		for (int j = i + 1; j < 5; j++){
			if (arr [i] > arr [j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < 5;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
