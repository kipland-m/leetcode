#include <stdio.h>

int main(){

	// declare character integeter, whitespace integer, other character int
	int c, i, nwhite, nother;
	// array of 10 integers
	int ndigit[10];

	// initialize integer 'nwhite' & 'nother' to 0
	nwhite = nother = 0;

	// initialize all array values in 'ndigit' to 0
	for (i = 0; i < 10; i++){
		ndigit[i] = 0;	
	}

	// now we will start reading input and storing the ascii value
	// of the input character in c, do something with c with the iteration
	// of the while loop
	while ((c = getchar()) != EOF)

		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		// if statement checks if character is whitespace
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf("%d", ndigit[i]);
	
	printf(", white space = %d, other = %d\n",
		nwhite, nother);
		
		
}
