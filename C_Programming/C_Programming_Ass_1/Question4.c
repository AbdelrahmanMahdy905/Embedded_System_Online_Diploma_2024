
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a; int b;
	printf("Enter a character:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&a);
	b= (int)a;
	printf("ASCII value is %i \r\n", b);

	}
