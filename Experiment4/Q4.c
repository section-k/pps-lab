#include <stdio.h>
int main(){
	int age1, age2;
	printf("Enter the age1: ");
	scanf("%d",&age1);
	printf("Enter the age2: ");
	scanf("%d",&age2);
	(age1 > age2)?printf("Elder's age is %d\n",age1):printf("Elder's age is %d\n",age2);
	//printf("Elder's age %d\n",(age1 > age2)?age1:age2);
	return 0;
}
