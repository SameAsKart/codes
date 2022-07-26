#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	double a, b;

	
	scanf_s("%lf%lf", &a, &b);
	double c = a / b;

	printf("%.12lf", c);
	exit(0);
}
