/*											***Question 6***
Write a program to accept 10 integer in to an array. Then search for a given value in the array to know its existence
*/
#include <stdio.h>
int main(){
	int arr[10] = {4,6,8,3,23,556,4,78,322,11}, element, flag = 0;
	printf("Enter the element: ");
	scanf("%d",&element);
	for (int i = 0;i < 10;i ++){
		if (arr[i] == element){
			printf("Element found");
			flag = 1;
			break;
		}
	}
	if (flag == 0){
		printf(" element not found");
	}
	return 0;
}
/*  O/P
Enter the element: 3
Element found
*/
	
