module;
#include <math.h>
export module student_1bib21059.Lab2.Variant21.Task5;
namespace RBPO::Lab2::Variant21::Task5
{
	export double f1(double x, double y);
	export double f2(double x);
	export double a(int i);
	export double f3(int n);
	export double f4(double epsilon);
}
module :private;

double RBPO::Lab2::Variant21::Task5::f1(double x, double y)
{
	return (pow(x, 0.5) - pow(y, 0.5) / x);
}
double RBPO::Lab2::Variant21::Task5::f2(double x)
{
	return (x <= 3) ? (x * x + 3 * x + 9) : (sin(x) / (x * x - 9));
}
double RBPO::Lab2::Variant21::Task5::a(int i)
{
	return pow(-1, i) * (1 - pow((i + 1), 2) / pow((i + 2), 2));
}
double RBPO::Lab2::Variant21::Task5::f3(int n)
{
	double sum = 0.0;
	for (int i = 0; i <= n; ++i) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant21::Task5::f4(double eps)
{
	double sum = 0.0, term = 0.0, curr = a(0);
	for (int i = 1; (fabs(curr - term) > eps); ++i) {
		sum += curr;
		term = curr;
		curr = a(i);
	}
	return sum;
}