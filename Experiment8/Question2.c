#include <stdio.h>
#include <math.h>
int test_prime(int n){
	for (int i = 2; i <= sqrt(n);i++){
		if (n % i == 0){
			return 0;//prime nahi hai
		}	
	}
	return 1;//prime hai
}
int min2(int n1,int n2){
	if (n1>n2){
		return n1;
	} else{ 
		return n2;
	}
}
void hcf(int n1, int n2){
	int i = 2, hcf_ = 1;
	int min = min2(n1,n2);
	while ( i <= min){
		if (n1 %i == 0 && n2 % i == 0 && test_prime(i) == 1){
			hcf_ *= i;
			n1 = n1/i;
			n2 = n2/i;
		} else {
			i++;
		}	
	}
	printf("The maximum length of each piece = %d",hcf_);
}	
int main(){
	int n1,n2;
	printf("Enter Length of Rod 1 and Rod 2: ");
	scanf("%d%d",&n1,&n2);
	hcf(n1,n2);
	return 0;
}
