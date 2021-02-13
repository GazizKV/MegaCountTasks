#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc) {

	char	inputString[256];
	int	i;
	int	counter;

	counter = 1;
	i=0;

	printf("Please, enter the string to compress\n");
	gets(inputString);
	
	printf("Compressed string: ");
	while(1) {
		if(i+1==strlen(inputString)) {
			putchar(inputString[i]);
			if(counter!=1)
				printf("%d", counter);
			break;
		}
		else if(inputString[i]==inputString[i+1]) {
			++counter;
		} else if(inputString[i]!=inputString[i+1]) {
			putchar(inputString[i]);
			if(counter!=1)
				printf("%d", counter);
			counter = 1;
		}
		++i;
	}
	putchar('\n');

	return 0;
}
