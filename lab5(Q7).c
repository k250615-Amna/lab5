#include <stdio.h>
int main(){
	int num1,num2,num3,smallest;
	printf("Enter a number 1: ");
	scanf("%d" ,&num1);
	printf("Enter a number 2: ");
	scanf("%d" ,&num2);
	printf("Enter a number 3: ");
	scanf("%d" ,&num3);
	smallest = (num1<num2) 
	?((num1<num3) ? num1:num3):((num2<num3)? num2:num3);
	printf("The smallest number is %d\n", smallest );
	return 0;
}
