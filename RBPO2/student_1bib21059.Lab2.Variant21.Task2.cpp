#include <cmath>

module student_1bib21059.Lab2.Variant21.Task2;

double a(int i) {
	return pow(-1, i) / ((i + 1) * (i + 2) * (i + 3));
}

double RBPO::Lab2::Variant21::Task2::f1(double x, double y) {
	return (std::sqrt(x) - std::sqrt(y)) / x;
}

double RBPO::Lab2::Variant21::Task2::f2(double x) {
	double result;
	if (x <= 3) result = pow(x, 2) + 3 * x + 9;
	else result = sin(x) / (pow(x, 2) - 9);
	return result;
}

double RBPO::Lab2::Variant21::Task2::f3(int n) {
	double sum = 0.0;
	int i = 0;
	while (i++ <= n) sum += a(i);
	return sum;
}

double RBPO::Lab2::Variant21::Task2::f4(double e) {
	double sum = 0.0;
	double prevSum = 0.0;
	double nextSum = 0.0;
	int k = 0, i = 0;
	while (true) {
		prevSum = nextSum;
		nextSum = a(i);
		sum += a(i);
		k = i;
		if (std::abs(nextSum - prevSum) <= e) break;
		++i;
	}
	return sum;
}