#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter the first: ");
	scanf("%d",&x);
	printf("Enter the second: ");
	scanf("%d",&y);
	printf("Enter the third: ");
	scanf("%d",&z);
	(y > x && y > z)?printf("Largest number =  %d\n",y):(z > x && z>y)?printf("Largest number is %d\n",z):printf("The largest number: %d",x);;
	//printf("Elder's age %d\n",(age1 > age2)?age1:age2);
	return 0;
}
