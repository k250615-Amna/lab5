#include <stdio.h>
int main(){
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	//left shift by one //
	num = num ^ (1<<1);
	printf("Number after toggling is %d" , num);
}
