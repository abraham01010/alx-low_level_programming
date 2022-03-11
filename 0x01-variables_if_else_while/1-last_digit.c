#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int lastDigit;
    
    srand(time(0));
    n=rand()-RAND_MAX / 2;
    
    lastDigit = n % 10;
    if (lastDigit > 5)
         printf("Last digit of %d is %d and is ", n, lastDigit);
    else if (lastDigit > 5)
          printf("greather than 5\n");
    else 
        printf("less than 6 not 0\n");
	return (0);
}
