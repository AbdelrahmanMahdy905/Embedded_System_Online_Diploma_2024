
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a; int r = 0;
	printf("Enter a character:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&a);

	if(a>='A' && a<='z')
	{
		printf(" %c is an alpha. \r\n", a);
	}
	else
	{
		printf(" %c is not an alphabet. \r\n", a);
	}


	}
