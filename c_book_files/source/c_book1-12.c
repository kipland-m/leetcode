#include <stdio.h>

int main(){

	int c;
	int prev_c = EOF;

	while ((c = getchar()) != EOF){
		// if the character is a space, a tab or a new line
		if (c == ' ' || c == '\t' || c == '\n') {
			// if previous character was character and the current char is a character, then
			// we go down a line. this is determining the end of a word
			if (prev_c != ' ' && prev_c != '\t' && prev_c != '\n'){
				putchar('\n');			
			}
		
		}
		// else just put a character
		else {
			putchar(c);
		}
		prev_c = c;
	}
}
