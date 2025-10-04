/*Write a program that takes age and gender. If age = 18 and gender = male, print
“Adult Male”, else if female, “Adult Female”, otherwise “Minor”.*/

#include <stdio.h>
#include <string.h>
int main(){
	int age;
	char gender[10];
	printf("What is your age: ");
	scanf("%d" , &age);
	printf("Enter your gender: ");
	scanf("%s" , &gender);
	if(age>=18 && strcmp(gender , "male")==0){
		printf("Adult male");	
	}
	else if(age>=18 && strcmp(gender , "female")==0){
		printf("Adult female");
	}
	else{
		printf("Minor");
	}
	return 0;
	}
