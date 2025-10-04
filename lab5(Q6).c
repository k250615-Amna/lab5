/* Demonstrate the effect of pre-increment and post-increment operators with an
example.*/
#include <stdio.h>
int main(){
/*post increment*/
	int num1,num2,num3,num4;
	printf("Enter a number: ");
	scanf("%d" ,&num1);
	num2 = num1++;
	printf("num1=%d and num3=%d\n" ,num1,num2);
/*pre increment*/
	printf("Enter another number");
	scanf("%d", &num3);
	num4 = ++num3;
	printf("num3=%d and num4=%d" ,num3,num4);
	return 0;
}
