// C program to print Name is start pattern

#include <stdio.h>
#include <string.h>

void printStars(int s) // this function will give a line of
					// stars required
{
	int i;
	for (i = 0; i < s; i++) {
		printf("*");
	}
}

void printSpaces(int s) // this function will give a line of
						// spaces required
{
	int i;

	for (i = 0; i < s; i++) {
		printf(" ");
	}
}

void nl()
{
	printf("\t");
} // gives New Tab space between Letters

void newLine() { printf("\n"); } // gives new Tab space

int main()
{
	int i;
	char n[50];
	printf("WHAT DO YOU WANT TO SAY TO YOUR GF?");
	fflush(stdout);
warning:
	//printf("(must be in upper case) : ");
	nl();
	fgets(n, sizeof(n), stdin);
	// Removing the newline character at the end, if present
	size_t length = strlen(n);
	if (length > 0 && n[length - 1] == '\n') {
		n[length - 1] = '\0';
	}

	for (i = 0; i < strlen(n); i++) {

		if ('a' <= n[i] && n[i] <= 'z') {
			goto warning;
		}
	}
	newLine();
	//-----------1st Line of Letter-----------
	for (i = 0; i < strlen(n); i++) {
		switch (n[i]) {
		case 'A':
		case 'C':
		case 'O':
		case 'Q':
		case 'G':
			nl();
			printSpaces(1);
			printStars(4);
			printSpaces(1);
			break;
		case 'B':
		case 'D':
		case 'P':
		case 'R':
			nl();
			printStars(5);
			printSpaces(1);
			break;
		case 'E':
		case 'F':
		case 'T':
		case 'Z':
		case 'I':
		case 'J':
			nl();
			printStars(6);
			break;
		case 'Y':
		case 'U':
		case 'H':
		case 'K':
		case 'X':
		case 'V':
		case 'N':
		case 'M':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'W':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'L':
			nl();
			printStars(1);
			break;
		case 'S':
			nl();
			printSpaces(1);
			printStars(5);
			break;
		case ' ':
			nl();
		}
	}
	newLine();
	//-----------2nd Line of Letter-----------
	for (i = 0; i < strlen(n); i++) {
		switch (n[i]) {
		case 'A':
		case 'U':
		case 'H':
		case 'D':
		case 'B':
		case 'O':
		case 'V':
		case 'R':
		case 'P':
		case 'Q':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;

		case 'I':
		case 'J':
		case 'T':
			nl();
			printSpaces(3);
			printStars(1);
			break;
		case 'L':
		case 'E':
		case 'C':
		case 'F':
		case 'G':

			nl();
			printStars(1);
			break;
		case 'K':
			nl();
			printStars(1);
			printSpaces(3);
			printStars(1);
			break;
		case 'S':
			nl();
			printStars(1);
			printSpaces(5);
			break;
		case 'X':
		case 'Y':
			nl();
			printSpaces(1);
			printStars(1);
			printSpaces(2);
			printStars(1);
			printSpaces(1);
			break;
		case 'Z':
			nl();
			printSpaces(4);
			printStars(1);
			printSpaces(1);
			break;
		case 'M':
			nl();
			printStars(2);
			printSpaces(2);
			printStars(2);
			break;
		case 'W':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'N':
			nl();
			printStars(2);
			printSpaces(3);
			printStars(1);
			break;
		case ' ':
			nl();
		}
	}
	newLine();
	//-----------3rd Line of Letter-----------
	for (i = 0; i < strlen(n); i++) {
		switch (n[i]) {
		case 'A':
		case 'H':
			nl();
			printStars(6);
			break;
		case 'B':
		case 'R':
		case 'P':
			nl();
			printStars(4);
			break;
		case 'C':
			nl();
			printStars(1);
			break;
		case 'D':
		case 'O':
		case 'U':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'E':
		case 'F':
			nl();
			printStars(4);
			break;
		case 'G':
			nl();
			printStars(1);
			printSpaces(3);
			printStars(2);
			break;
		case 'J':
		case 'I':
		case 'T':
		case 'Z':
			nl();
			printSpaces(3);
			printStars(1);
			printSpaces(2);
			break;
		case 'X':
		case 'Y':
			nl();
			printSpaces(2);
			printStars(2);
			printSpaces(2);
			break;

		case 'S':
			nl();
			printSpaces(1);
			printStars(4);
			printSpaces(1);
			break;

		case 'K':
			nl();
			printStars(3);
			break;
		case 'V':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'Q':
		case 'N':
			nl();
			printStars(1);
			printSpaces(2);
			printStars(1);
			printSpaces(1);
			printStars(1);
			break;
		case 'M':
		case 'W':
			nl();
			printStars(1);
			printSpaces(1);
			printStars(2);
			printSpaces(1);
			printStars(1);
			break;
		case 'L':
			nl();
			printStars(1);
			printSpaces(5);
			break;
		case ' ':
			nl();
		}
	}
	newLine();
	//-----------4th Line of Letter----------------------
	for (i = 0; i < strlen(n); i++) {
		switch (n[i]) {

		case 'A':
		case 'B':
		case 'D':
		case 'U':
		case 'G':
		case 'O':
		case 'H':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;

		case 'E':
		case 'C':
		case 'F':
		case 'P':
		case 'L':
			nl();
			printStars(1);
			break;

		case 'I':
		case 'T':
		case 'Y':
			nl();
			printSpaces(3);
			printStars(1);
			break;
		case 'J':
			nl();
			printStars(1);
			printSpaces(2);
			printStars(1);
			break;
		case 'K':
		case 'R':
			nl();
			printStars(1);
			printSpaces(3);
			printStars(1);
			break;
		case 'S':
			nl();
			printSpaces(5);
			printStars(1);
			break;
		case 'V':
			nl();
			printSpaces(1);
			printStars(1);
			printSpaces(2);
			printStars(1);
			printSpaces(1);
			break;
		case 'X':
			nl();
			printSpaces(1);
			printStars(1);
			printSpaces(2);
			printStars(1);
			printSpaces(1);
			break;
		case 'Z':
			nl();
			printSpaces(1);
			printStars(1);
			printSpaces(4);
			break;
		case 'Q':
			nl();
			printStars(1);
			printSpaces(3);
			printStars(1);
			printSpaces(1);
			break;
		case 'M':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'W':
			nl();
			printStars(2);
			printSpaces(2);
			printStars(2);
			break;
		case 'N':
			nl();
			printStars(1);
			printSpaces(3);
			printStars(2);
			break;
		case ' ':
			nl();
		}
	}
	newLine();
	//-----------5th Line of Letter-----------
	for (i = 0; i < strlen(n); i++) {
		switch (n[i]) {
		case 'A':
		case 'H':
		case 'K':
		case 'R':
		case 'X':
		case 'W':
		case 'N':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case 'B':
		case 'D':

			nl();
			printStars(5);
			break;
		case 'E':
		case 'L':
		case 'I':
		case 'Z':
			nl();
			printStars(6);
			break;
		case 'F':
		case 'P':
			nl();
			printStars(1);
			break;
		case 'C':
		case 'S':
		case 'G':
		case 'O':
		case 'U':
			nl();
			printSpaces(1);
			printStars(4);
			printSpaces(1);
			break;
		case 'J':
			nl();
			printSpaces(1);
			printStars(2);
			break;
		case 'T':

		case 'Y':
			nl();
			printSpaces(3);
			printStars(1);
			printSpaces(2);
			break;
		case 'V':
			nl();
			printSpaces(2);
			printStars(2);
			printSpaces(2);
			break;
		case 'Q':
			nl();
			printSpaces(1);
			printStars(3);
			printSpaces(1);
			printStars(1);
			break;
		case 'M':
			nl();
			printStars(1);
			printSpaces(4);
			printStars(1);
			break;
		case ' ':
			nl();
		}
	}
	newLine();
	newLine();

	printf("YOUR LOVE SEENS TO BE REAL!");
	return 0;
}
