#include <stdio.h>

#include <ctype.h>



/**
 *
 *  * main - program that prints the alphabet in lowercase, followed by a new line
 *
 *   * You can only use the putchar
 *
 *    * Return: 0
 *
 *     */



int main(void)

{

	int l = 'a';

	while (l <= 'z')

	{

		putchar(l);

		l += 1;

	}

	putchar('\n');

	return (0);

}

[09/09, 22:01] +234 706 105 7606: Task 3

#include <stdio.h>



/**
 *
 *  * main - program that prints the alphabet in lowercase, and then in uppercase,
 *
 *   * You can only use the putchar
 *
 *    * Return: 0
 *
 *     */



int main(void)

{

	int lw = 'a';

	int up = 'A';

	while (lw <= 'z')

	{

		putchar(lw);

		lw += 1;

	}

	while (up <= 'Z')

	{

		putchar(up);

		up += 1;

	}

	putchar('\n');

	return (0);

}

[09/09, 22:05] +234 706 105 7606: Task 5

#include <stdio.h>



/**
 *
 *  * main - program that prints all single digit numbers of base 10 starting from
 *
 *   * All your code should be in the main function
 *
 *    * Return: 0
 *
 *     */



int main(void)

{

	int n;

	while (n < 10)

	{

		printf("%d", n);

		n += 1;

	}

	printf("\n");

	return (0);

}
