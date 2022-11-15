#include <stdio.h>
#include <stdlib.h>
void phrase(){
}
int main(){
	float random = 0.0f;
	int i = 65;
	int k,flag = 1;
	while (i>0){
		random += 1.65;
		printf("\n\t\t\t\t\t\t\t\t\t%f I AM BUSY\n",random);
		printf("\n\t\t\t\t\t\t\t\t%c--H-a-c-k-i-n-g-[%d]",i,i);
		random -= 1.33;
		
		i++;
		if (i>=93 && (flag & 1) == 0){
			i = 97;
			flag++;
		} 
		if (i > 125){
			i = 65;
			flag++;
		}
	}
	return 0;
}
