#include <stdio.h>

int main() {
    int num,prev;
    int remainder;
    int rev=0;
    printf("Enter a number to run the check on: ");
    scanf("%d" ,&num);
    prev = num;
    while(num!=0){
    	remainder=num%10;
    	rev=rev*10+remainder;
    	num=num/10;
	}
	if(prev==rev){
		printf("It is a palindrome");
	}
	else{
		printf("It is not a palinndrome");
	}
    

    return 0;
}

