#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc) {

	char	inputString[256];
	int	i;
	int	counter;

	counter = 1;
	i=0;

	printf("Please, enter string to compress:\t");
	gets(inputString);
	
	printf("Compressed string:\t");
	while(1) {
		if(i+1==strlen(inputString)) {
			putchar(inputString[i]);
			printf("%d", counter);
			break;
		}
		else if(inputString[i]==inputString[i+1]) {
			++counter;
		} else if(inputString[i]!=inputString[i+1]) {
			putchar(inputString[i]);
			printf("%d", counter);
			counter = 1;
		}
		++i;
	}
	putchar('\n');

	return 0;
}
