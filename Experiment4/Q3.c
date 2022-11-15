#include <stdio.h>
int main(){
	int x = 2,y = 1,z = 8;
	int r1_ = (x>y>z);
	int r = (x<y<=z);
	int r2 = (x=y>z);
	int r3 = (x==y==z);
	int r4 = (x=y>z);
	int r5 = (x==y) && (y==0);
	int r6 = x=x>>2;
	int r7 = !(x=0);
	printf("x>y>z : %d",r1_);
	printf("\nx<y<=z : %d ",r);
	printf("\nx=y>z : %d ",r2);
	printf("\nx==y==z: %d",r3);
	printf("\nx=y>z: %d",r4);
	printf("\nx==y && y==0: %d",r5);
	printf("\nx=x>>2: %d",r6);
	printf("\n!(x=0) : %d",r7);
	return 0;
}
/*x==y && y==0
 *x=x>>2
 *=!(x=0)*/
