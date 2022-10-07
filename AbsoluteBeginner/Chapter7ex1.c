/* File Chapter7ex1.c */

#include <stdio.h>
#include <string.h>
#include "Chapter7ex1.h"

int main(void)
{
	int age;
	char childname[14] = "Willow";

	printf ("\n%s have %d kids.\n", FAMILY, KIDS);
	
	age = 1;
	printf("\nThe only child is %s, and she is %d.\n", childname, age);

	return 0;
}
