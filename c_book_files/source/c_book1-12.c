#include <stdio.h>

int main(){

	int c;
	int prev_c = EOF;

	while ((c = getchar()) != EOF){
		// if the character is a space, a tab or a new line
		// count 
		if (c == ' ' || c == '\t' || c == '\n') {
			if (prev_c != ' ' && prev_c != '\t' && prev_c != '\n'){
				putchar('\n');			
			}
		
		}
		else {
			putchar(c);
		}
		prev_c = c;
	}
}
