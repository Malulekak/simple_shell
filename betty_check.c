/**
 * add_numbers - Adds two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of the two numbers
 */
int add_numbers(int a, int b)
{
	return (a + b);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 10;

	int num2 = 20;

	int sum;

	sum = add_numbers(num1, num2);

	printf("The sum is: %d\n", sum);

	return (0);
}
