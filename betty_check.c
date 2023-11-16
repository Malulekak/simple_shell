#include <stdio.h>

/**
 * add_numbers - adds two numbers together
 * @y: first number
 * @z: second number
 *
 * Return: sum of the two numbers added together
 */

int add_numbers(int y, int z)
{
	return (y + z);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 10;

	int num2 = 20;

	int sum;

	sum = add_numbers(num1, num2);

	printf("The sum of the two numbers is: %d\n", sum);

	return (0);
}
