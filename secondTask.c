#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc) {

	int number;
	int numbers[number][number];
	int converter;
	int value;
	int counter;
	int printSide;

	counter=1;
	value = 1;
	printf("Enter a Integer number:\t");
	scanf("%d", &number);
	printSide = number;

	while(counter<=number*number) {

		for(int i=0;i<printSide;i++) {
			numbersArray[counter][i] = value++;
		}
		for(int i=0;
			
	}

	for (int i=1; i<=number; i++) {
		for(int j=1; j<=number; j++) {
			printf("%d", numbers[j][i]);
		}
		printf("\n");
	}
					

	return 0;
}
