#include<stdio.h>

void changeValue(int x){
	x = 20;
	printf("\nChanged value of x is %d\n", x);
}

void main(){
	int a = 10;
	printf("\nBefore calling changeValue function, value of a: %d\n", a);
	changeValue(a);
	printf("\nAfter calling changeValue function, value of a: %d\n", a);
}
