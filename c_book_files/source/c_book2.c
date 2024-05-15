#include <stdio.h>


int main(){
	int c;
	int test = EOF;

	printf("%d",test);
	while ((c = getchar()) != EOF){
		putchar(c);
	}

}
