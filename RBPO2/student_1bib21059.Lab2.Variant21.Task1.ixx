export module student_1bib21059.Lab2.Variant21.Task1;

#include <cmath>

namespace RBPO::Lab2::Variant21::Task1 {
	export double f1(double x, double y) {
		return (std::sqrt(x) - std::sqrt(y)) / x;
	}
	export double f2(double x) {
		return (x <= 3) ? (pow(x, 2) + 3 * x + 9) : (sin(x) / (pow(x, 2) - 9));
	}
	export double a(int i) {
		return pow(-1, i) / ((i + 1) * (i + 2) * (i + 3));
	}
	export double f3(int n) {
		double sum = 0.0;
		for (int i = 0; i <= n; ++i) sum += a(i);
		return sum;
	}
	export double f4(double e) {
		double sum = 0.0;
		double prevSum = 0.0;
		double nextSum = 0.0;
		int k = 0;
		for (int i = 0;; i++) {
			prevSum = nextSum;
			nextSum = a(i);
			sum += a(i);
			k = i;
			if (std::abs(nextSum - prevSum) <= e) break;
		}
		return sum;
	}
}