#include <stdio.h>
#include <math.h>
int main(){
	int number, i = 2, flag = 1;
	printf("Enter the number: ");
	scanf("%d",&number);
	do{
		if (number % i == 0){
			flag = 0;
		}
		i++;
	}while(i <= sqrt(number));
	if (flag){
			printf("prime");
	} else {
		printf("Not prime");
	}
	return 0;
}

