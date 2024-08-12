
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a; int r = 0;
	printf("Enter a character:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&a);

	if(a=='i'|a=='a'|a=='e'|a=='o'|a=='u')
	{
		printf(" %c is a vowel. \r\n", a);
	}
	else
	{
		printf(" %c is a const. \r\n", a);
	}


	}
