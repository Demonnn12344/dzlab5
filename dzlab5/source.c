#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	setlocale(LC_ALL, "RUS");
	double x = 16.55e-3;
	double y = -2.75;
	double z = 0.15;
	double axy = fabs(x - y);
	double firstslag = sqrt(10.0 * (pow(x, 1 / 3.) + pow(x, y + 2.0)));
	double secondslag = pow(asin(z), 2) - axy;
	double beta = firstslag * secondslag;
	printf("x = %.4g\n", x);
	printf("y = %.4g\n", y);
	printf("z = %.4g\n", z);
	printf("beta = %.6f\n", beta);
}