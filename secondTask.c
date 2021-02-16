#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc) {

	int number;
	int numbersArray[number][number];
	int converter;
	int value;
	int counter;
	int printSide;

	counter=1;
	value = 1;
	printf("Enter any Integer number:\t");
	scanf("%d", &number);
	printf("%d\n", number);
	printSide = number;

	while(1) {

		for(int i=0;i<printSide;i++) {
			numbersArray[counter][i] = value++;
		}
		if(value=number*number)
			break;
		--printSide;
		for(int i=0;i<printSide;i++) {
			numbersArray[i+counter][printSide] = value++;
		}
		if(value=number*number)
			break;
		for(int i=printSide;i>-1;i--) {
			numbersArray[i][printSide] = value++;
		}
		--printSide;
		printf("marker\n");
		if(value=number*number)
			break;
			
	}

	for (int i=0; i<number; i++) {
		for(int j=0; j<number; j++) {
			printf("%d ", numbersArray[i][j]);
		}
		printf("\n");
	}

	return 0;
}
