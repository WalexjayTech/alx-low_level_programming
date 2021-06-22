#include <stdio.h>
#define Z 1000000000
/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int a, a1, a2, b, b1, b2, r, r1, r2, i;

a = 1;
b = 2;
r = a + b;

printf("%lu, %lu,", a, b);

for (i = 0; i < 86; i++)
{
printf("%lu", r);
a = b;
b = r;
r = a + b;
}

b1 = b / Z;
b2 = b % Z;
r1 = r / Z;
r2 = r % Z;

for (i = 0; i < 9; i++)
{
printf("%lu%lu,", r1, r2);
a1 = b1;
a2 = b2;
b1 = r1;
b2 = r2;

r1 = a1 + b1 + (a2 + b2) / Z;
r2 = (a2 + b2) % Z;
}

printf("%lu%lu\n", r1, r2);

return (0);

}
#include <stdio.h>

/**

 *numLength - returns the length of string

 *@num: operand number

 *Return: number of digits

 */

int numLength(int num)

{

int length = 0;

if (!num)

{

return (1);

}

while (num)

{

num = num / 10;

length += 1;

}

return (length);

}

/**

 * main - prints the first 98 digits of the fibonacci series

 * Return: 0

 */

int main(void)

{

unsigned long fib1 = 1, fib2 = 2, next, mx = 100000000,

fib1o = 0, fib2o = 0, nexto = 0;

short int i = 1, initial0s;

while (i <= 98)

{

if (fib1o > 0)

printf("%lu", fib1o);

initial0s = numLength(mx) - 1 - numLength(fib1);

while (fib1o > 0 && initial0s > 0)

{

printf("%i", 0);

initial0s--;

}

printf("%lu", fib1);

next = (fib1 + fib2) % mx;

nexto = fib1o + fib2o + (fib1 + fib2) / mx;

fib1 = fib2;

fib1o = fib2o;

fib2 = next;

fib2o = nexto;

if (i != 98)

printf(", ");

else

printf("\n");

i++;

}

return (0);

}
