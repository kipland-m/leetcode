#include <stdio.h>

#define NONBLANK '-'

int main(){

	int c, lastc;

	while ((c = getchar()) != EOF) {
		printf("%d",c);
		/*
		if (c == '\t') {
			if (lastc != '\t')
				printf("%d",c);
				putchar(c);

		} else {
			putchar(c);
		}
		lastc = c;
		*/

	}
}
