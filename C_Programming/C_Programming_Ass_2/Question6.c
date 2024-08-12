/*
 ============================================================================
 Name        : question.c
 Author      : mahdy
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a= 0; int sum= 0;
	printf("Enter an integer: \r\n");
	fflush(stdout); fflush(stdin);
	scanf("%i", &a);
	for(int i= 1; i<=a; i++){
		sum=sum+i;
	}
	printf("sum = %i \r\n)",sum);

}
