#include <stdio.h>
#include <string.h>
#include <ctype.h>

main(void)
{
	int i;
	int hasUpper, hasLower, hasDigit;
	char user[25], password[25];

	hasUpper = hasLower = hasDigit = 0;

	printf("What is your user name? ");
	scanf(" %s", user);

	printf("Please create a password: ");
	scanf(" %s", password);

	for (i = 0; i < strlen(password); i++)
	{
		if (isdigit(password[i]))
		{
			hasDigit = 1;
			continue;
		}
		if (isupper(password[i]))
		{
			hasUpper = 1;
			continue;
		}
		if (islower(password[i]))
		{
			hasLower = 1;
		}
	}

	if ((hasDigit) && (hasUpper) && (hasLower))
	{
		printf("\nExcellentwork, %s, \n", user);
		printf("Your password has upper, lowercase, letters, and a number.");
	} else
	{
		printf("\n\nYou should consider a new password, %s,\n", user);
		printf("One that has upper, lowercase and a number.");
	}
	return(0);
}
