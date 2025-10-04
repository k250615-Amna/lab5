/* 4. A nested switch program where user enters continent (Asia, Europe) and then a
country inside it (Asia ? Pakistan, India; Europe ? France, Germany). */

#include <stdio.h>
int main(){
	char cont , country;
	printf("Enter continent (A) for Asia and (E) for Europe: ");
	scanf("%c" , &cont);
	switch(cont){
		case 'A':
			printf("Enter a country from Pakistan(P) and India(I): ");
			scanf(" %c" , &country);
			switch(country){
				case 'P':
					printf("location is Pakistan in Asia");
					break;
				case 'I':
					printf("location is India in Asia");
					break;
			}
			break;
		case 'E':
			printf("Enter a country from France (F) and Germany (G): ");
			scanf(" %c" , &country);
			switch(country){
				case 'F':
					printf("location is France in Europe");
					break;
				case 'G':
					printf("location is Germany in Europe");
					break;
			}
			break;
	}
	return 0;
}
