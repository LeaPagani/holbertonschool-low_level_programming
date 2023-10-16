#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    /* Check if n is positive */
	if (n > 0) {
        printf("%d is positive\n");
    }
    /* Check if n is negative */
	else if (n < 0) {
        printf("%d is negative\n");
    }
    /* Check if n is zero */
	else {
        printf("%d is zero\n");
    }

	return (0);
}

