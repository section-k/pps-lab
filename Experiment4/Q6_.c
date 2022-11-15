#include <stdio.h>
int main(){
	float number ;
	printf("Enter the number: ");
	scanf("%f",&number);
	printf("Integer part = %d\nFloating number = %f\n",(int)number,(number-(int)number));
	return 0;
}
