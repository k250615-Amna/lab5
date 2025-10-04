/*Write a program using nested switch to select a device: (1=Phone, 2=Laptop). Inside
each, choose brand (Phone: 1=Samsung, 2=Apple; Laptop: 1=Dell, 2=HP).*/

#include <stdio.h>
int main(){
	char device;
	char brand;
	printf("Select between a laptop(L) or a phone(P)");
	scanf("%c" , &device);
	
	switch(device){
		case 'P':
			printf("Choose brand samsung(S) or Apple(A)");
			scanf(" %c" , &brand);
			switch(brand){
				case 'S':
					printf("You choose a samsung phone");
					break;
				case 'A':
					printf("You choose a apple phone");
					break;	
			}
			break;
		case 'L':
			printf("Choose brand from Dell(D) or HP(H)");
			scanf(" %c" , &brand);
			switch(brand){
				case 'D':
					printf("You choose a Dell laptop");
					break;
				case 'H':
					printf("You choose a HP Laptop");
					break;
			}
			break;
	}
	return 0;
}
