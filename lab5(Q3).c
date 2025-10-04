/*Write a program using nested switch to select a device: (1=Phone, 2=Laptop). Inside
each, choose brand (Phone: 1=Samsung, 2=Apple; Laptop: 1=Dell, 2=HP).*/

#include <stdio.h>
int main(){
	char device;
	char brand;
	printf("Select any between a laptop(L) or a phone(P)");
	scanf("%c" , &device);
	
	switch(device){
		case 'P':
			printf("Choose a brand samsung(S) or Apple(A)");
			scanf(" %c" , &brand);
			switch(brand){
				case 'S':
					printf("You selected an samsung phone");
					break;
				case 'A':
					printf("You selected an apple phone");
					break;	
			}
			break;
		case 'L':
			printf("Select any brand from Dell(D) or HP(H)");
			scanf(" %c" , &brand);
			switch(brand){
				case 'D':
					printf("You selected an Dell laptop");
					break;
				case 'H':
					printf("You selected an HP Laptop");
					break;
			}
			break;
	}
	return 0;
}

