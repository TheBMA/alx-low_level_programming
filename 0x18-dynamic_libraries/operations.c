/**
 * add - an operation on 2 integers
 * Prototype: int add(int a, int b)
 * @a: an int
 * @b: an int
 * Return: an int
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - an operation on 2 integers
 * Prototype: int sub(int a, int b)
 * @a: an int
 * @b: an int
 * Return: an int
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - an operation on 2 integers
 * Prototype: int mul(int a, int b)
 * @a: an int
 * @b: an int
 * Return: an int
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - an operation on 2 integers
 * Prototype: int div(int a, int b)
 * @a: an int
 * @b: an int
 * Return: an int
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
}

/**
 * mod - an operation on 2 integers
 * Prototype: int mod(int a, int b)
 * @a: an int
 * @b: an int
 * Return: an int
 */
int mod(int a, int b)
{
	return (a % b);
}
