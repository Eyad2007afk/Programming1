#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

// this is an online compiler :)
int main()
{
	printf("Helllo world!\n");

	printf("sizeof(int) = %zu bytes\n INT_MIN = %d\n INT_MAX = %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("sizeof(double) = %zu bytes\n DBL_DIG = %d\n DBL_MAX - %e\n", sizeof(double), DBL_DIG, DBL_MAX);
	printf("maximum int value= %d\n", INT_MAX);

	if ((char)-1 <0) {
		printf("plain char appears to be signed on this compiler\n");
	} else {
		printf("plain char appears to be unsigned on this compiler\n");
	}

	bool b1 = true, b0 = false;
	printf("bool true = %d, false = %d (printed as int)\n", b1,b0);
	return 0;

}

