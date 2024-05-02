#include <stdio.h>

/*
 * I am teaching myself C at the same time I am teaching myself Vim/Neovim.
 * This section will be a cheat sheet for Neovim commands
 *
 * H,J,K,L are the navigation keys.
 * Esc to enter into normal mode.
 * I to enter insert mode (start editing text to the left of selection)
 * A to enter append mode (start editing text to the right of selection)
 * U is to undo.
 * Ctrl+R is to undo an undo.
 * Shift+4 to go to end of line
 * 0 to go to beginning of line.
 * :w to write the file.
 * :q to quit neovim.
 * :wq to write then quit the file.
*/

int main(){
	
	printf("Hello, world!\n");
	

	// '\\' inserts a backslash
	// '\t' creates a horizontal tab
	// '\"' creates a double quote character

	/* multi line comment */

	// single line comment

	/*
	 * int | 2 or 4 bytes | Stores whole numbers, without decimals
	 * float | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
	 * double | 8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
	 * char | 1 bytes | Stores a single character/letter/number, or ASCII values
         */

	// %d format specifier
	int anInt = 5;
	// %f format specifier
	float aFloat = 5.5;
	// %c format specifier
	/*
	 * You can of course assign a char variable with a letter i.e. 'A' but 
	 * you can ALSO assign the value as an ascii value. 
	 *
	 * So, we could assign a lowercase 'a' to our char variable using 65, it's ascii value.
	 */
	char aLetter = 'A';
	
	int x = 5, y = 10, z = 15;
	
	// To create a string, it is an array of chars. You must denote a [] at the end of your char's variable name.
	char aString[] = "Hello";	

	// You can also assign a scientific number to a float, or double variable.
	float f1 = 35e3;
	double d1 = 12E4;

	// You can set decimal precision using a format specifier with float or double variables.
	float precisionTestFloat = 3.5;
	double precisionTestDouble = 19.99;

	// With these 2 lines below, I am using the .2 in the format specifier to only display the first 2 decimal places of the variable.
	printf("%.2f\n", precisionTestFloat);
	printf("%.2f\n", precisionTestDouble);
	
	// 

	return 0;
}
	
	
