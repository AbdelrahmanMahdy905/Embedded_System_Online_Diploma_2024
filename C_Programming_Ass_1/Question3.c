/*
 ============================================================================
 Name        : mat.c
 Author      : mahdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 ============================================================================
 Name        : Question4.c
 Author      : mahdy
 Version     :
 Copyright   :
 Description : Multiply two floating numbers
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n; float m; float product;
	printf("Entre two integers:");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&n, &m);
	product= m * n;
	printf("you entered %f \r\n", product);

	}
