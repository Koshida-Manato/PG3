#include "MyMath.h"
#include <stdio.h>

int main() {

	MyMath<int, int> num1(4, 8);
	MyMath<float, float> num2(10.8f, 2.1f);
	MyMath<double, double> num3(1.8f, 7.1f);
	MyMath<int, float> num4(3, 4.8f);
	MyMath<int, double> num5(6, 9.9f);
	MyMath<float, double> num6(5.4f, 7.5f);

	printf("%d\n", num1.Min());
	printf("%f\n", num2.Min());
	printf("%f\n", num3.Min());
	printf("%d\n", num4.Min());
	printf("%d\n", num5.Min());
	printf("%f\n", num6.Min());
}