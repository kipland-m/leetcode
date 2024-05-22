#include <stdio.h>

#define IN	1 /* Inside a word */
#define OUT	0 /* Outside a word */

int main(){
	int c, nl, nw, nc, state;

	state = OUT;

	/* initalise all these variables to 0 */
	nl = nw = nc = 0;

	while (( c = getchar()) != EOF) 
	{
		/* if a new character is input, increment nc */
		++nc;
		/* if a new line is input, increment nl */
		if (c == '\n')
			++nl;
		/* first we have seen of ||, which is just OR */
		/* if there is a space, a new line, or a tab,
		 * update 'state' to OUT (0) */
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		/* This code doesn't really make much sense.. if OUT
		 * then set to IN..
		 * BUT, you have to remember that the while loop's code
		 * only executes when a character is pressed. So if 
		 * the state is OUT and a character is pressed then..
		 * a new word is started :o */
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);	
}
