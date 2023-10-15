#include <cmath>

module student_1bib21059.Lab2.Variant21.Task3;

double RBPO::Lab2::Variant21::Task3::a(int i) {
	return pow(-1, i) * (1 - pow((i + 1), 2) / pow((i + 2), 2));
}