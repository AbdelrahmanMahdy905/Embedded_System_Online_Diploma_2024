
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a; int r = 0;
	printf("Enter a number:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	r= a%2;
	if(r==0)
	{
		printf(" %d is even number \r\n", a);
	}
	else
	{
		printf(" %d is odd number \r\n", a);
	}


	}
