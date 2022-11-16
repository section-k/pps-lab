/*		***Question 4***
Write a program to input 3 integers into x,y,z Apply the following operations on them and analyse the result obtained
i) r1= x>y>z
ii)r2= x<y<z
iii)r3 = x==y==z
iv)r4 = x=y>z
v)r5 = (x == y)&& (y==0)
vi)r6 = x = x>>2
vii) r7 = !(x=0)
*/
#include <stdio.h>
int main(){
	int x, y, z, r1,r2, r3, r4,r5, r6, r7;
	printf("Enter three unknown numbers: ");
	scanf("%d%d%d",&x,&y,&z);
	r1 = x > y > z;
	r2 = x < y <= z;
	r3 = x== y == z;
	r4 = (x = y >z);
	r5 = (x == y) && (y == 0);
	r6 = x = (x >> 2);
	r7 = !(x=0);
	printf("%d%d%d%d%d%d%d",r1,r2,r3,r4,r5,r6,r7);
	return 0;
}
/* o/p
Enter three unnknown nos 12 23 45
*/
