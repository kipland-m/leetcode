#include <stdio.h>

int main(){
	
	// Print a histogram of the lengths of the words in the input

	// we will count a word as any combination of characters between
	// whitespace

	// example input - 'this is a test'
	
	/*
	 * this ****
	 * is   **
	 * a    *
	 * test ****
	 */

	int character, previous_char, word_length;

	// this loop will run and store the typed character in c
	// and execute the loop with c on each charcter pressed
	while ((character = getchar()) != EOF){

		if (character = ' ' || character == '\t' || character == '\n'){
			if (prev_char != ' ' && prev_char != '\t' && prev_char != '\n'){
				putchar('\n');
			}	
		}

		

	}
}
