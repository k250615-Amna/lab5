#include <stdio.h>
int main(){
	float marks;
	printf("Enter your marks: ");
	scanf("%f" , &marks);
	if(marks>=50 && marks<85){
		printf("You have just passed");
	}
	else if(marks>=85){
		printf("You passed with distinction!");
	}
	else{
		printf("You did not pass");
	}
	return 0;
}
