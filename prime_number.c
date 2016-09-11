/* Program to compute the prime numbers between 2 and a upper limit */

/* List of prime numbers to check the code at:
   http://mathforum.org/dr.math/faq/faq.prime.num.html
   http://www.geocities.com/SiliconValley/Vista/2212/primos.html 
   http://es.wikipedia.org/wiki/N%C3%BAmero_primo */

/* This code can be written in a more efficient way if the internal loop 
(j) goes from 2 to (i/2)+1 saving half of the computations because it is 
not necessary to perform the divisions between the half of i and i */

#include <stdio.h>

main()
{
	int i, j, nmax, centinel, residual;

	nmax = 20;     /* nmax is the upper limit */
	for (i = 2; i <= nmax; i++)
	{
		centinel = 0;
		for (j = 2; j < i; j++)
		{
			residual = i%j;
			if (residual == 0)
				centinel = 1;

		}
		if (centinel == 0)
			printf("%d\n", i);
	}
	return 0;
}
