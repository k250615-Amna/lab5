/* Write a program that checks whether a given number is divisible by both 2 and 3
using logical operators.*/
#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d" , &num);
	if((num % 2 == 0) && (num % 3 == 0)){
		printf("Number is divisible by both two and three");
	}
	else{
		printf("Number is not divisible by either two or three");
	}
	return 0;
}
