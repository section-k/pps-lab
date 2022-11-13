/*
	Write a program to input two integer values into A and B find A+B , A-B, A*B, A/B, A%B , A > B, A < B
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the value of A: ");
	scanf("%d", &a);
	printf("Enter the value of B: ");
	scanf("%d", &b);
	printf("a+b : %d\n", (a+b));
	printf("a-b : %d\n", (a-b));
	printf("a*b : %d\n", (a*b));
	printf("a/b : %f\n", (float)(a/b));
	printf("a%%b : %d\n", (a%b));
	printf("a>b : %d\n", (a>b));
	printf("a<b : %d", (a<b));
	return 0;
}

/* O/p
Enter the value of A: 7
Enter the value of B: 4
a+b : 11
a-b : 3
a*b : 28
a/b : 1.000000
a%b : 3
a>b : 1
a<b : 0
*/
