#include <iostream>
using namespace std;
import student_1bib21059.Lab2.Variant21.Task1;
import student_1bib21059.Lab2.Variant21.Task2;
import student_1bib21059.Lab2.Variant21.Task3;
import student_1bib21059.Lab2.Variant21.Task4;   
import student_1bib21059.Lab2.Variant21.Task5;

void task1();
void task2();
void task3();
void task4();
void task5();
void input(double&, double&, double&, int&, double&);
void output(double, double, double, double);

int main()
{
    setlocale(LC_ALL, "ru");
    int flag = 1;
    while (flag) {
        int number_of_task;
        cout << "������� ����� �������:\n--> ";
        cin >> number_of_task;
        switch (number_of_task) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
        default:
            cout << "���� ������� �������� �������� �������!\n";
        }
        cout << "��� ���? --> ";
        cin >> flag;
    }
}

void task1() {
    double x_first, y_first, x_second, eps;
    int n;
    input(x_first, y_first, x_second, n, eps);
    if (x_first <= 0)
        cout << "������������ �������� x  ��� f1()!" << endl;
    else {
        double result_first = RBPO::Lab2::Variant21::Task1::f1(x_first, y_first);
        cout << "f1(x) = " << result_first << endl;
    }
    output(RBPO::Lab2::Variant21::Task1::f1(x_first, y_first),
        RBPO::Lab2::Variant21::Task1::f2(x_second),
        RBPO::Lab2::Variant21::Task1::f3(n),
        RBPO::Lab2::Variant21::Task1::f4(eps));
}

void task2() {
    double x_first, y_first, x_second, eps;
    int n;
    input(x_first, y_first, x_second, n, eps);
    if (x_first <= 0)
        cout << "������������ �������� x ��� f1()!" << endl;
    else {
        double result_first = RBPO::Lab2::Variant21::Task1::f1(x_first, y_first);
        cout << "f1(x) = " << result_first << endl;
    }
    output(RBPO::Lab2::Variant21::Task2::f1(x_first, y_first),
        RBPO::Lab2::Variant21::Task2::f2(x_second),
        RBPO::Lab2::Variant21::Task2::f3(n),
        RBPO::Lab2::Variant21::Task2::f4(eps));
}

void task3() {
    double x_first, y_first, x_second, eps;
    int n;
    input(x_first, y_first, x_second, n, eps);
    if (x_first <= 0)
        cout << "������������ �������� x  ��� f1()!" << endl;
    else {
        double result_first = RBPO::Lab2::Variant21::Task1::f1(x_first, y_first);
        cout << "f1(x, y) = " << result_first << endl;
    }
    output(RBPO::Lab2::Variant21::Task3::f1(x_first, y_first),
        RBPO::Lab2::Variant21::Task3::f2(x_second),
        RBPO::Lab2::Variant21::Task3::f3(n),
        RBPO::Lab2::Variant21::Task3::f4(eps));
}

void task4() {
    double x_first, y_first, x_second, eps;
    int n;
    input(x_first, y_first, x_second, n, eps);
    if (x_first <= 0)
        cout << "������������ �������� x � y ��� f1()!" << endl;
    else {
        double result_first = RBPO::Lab2::Variant21::Task1::f1(x_first, y_first);
        cout << "f1(x) = " << result_first << endl;
        output(RBPO::Lab2::Variant21::Task4::f1(x_first, y_first),
            RBPO::Lab2::Variant21::Task4::f2(x_second),
            RBPO::Lab2::Variant21::Task4::f3(n),
            RBPO::Lab2::Variant21::Task4::f4(eps));
    }
}

void task5() {
    double x_first, y_first, x_second, eps;
    int n;
    input(x_first, y_first, x_second, n, eps);
    if (x_first <= 0)
        cout << "������������ �������� x  ��� f1()!" << endl;
    else {
        double result_first = RBPO::Lab2::Variant21::Task5::f1(x_first, y_first);
        cout << "f1(x) = " << result_first << endl;
    }
    output(RBPO::Lab2::Variant21::Task1::f1(x_first, y_first),
        RBPO::Lab2::Variant21::Task5::f2(x_second),
        RBPO::Lab2::Variant21::Task5::f3(n),
        RBPO::Lab2::Variant21::Task5::f4(eps));
}

void input(double& x_first, double& y_first, double& x_second, int& n, double& eps) {
    cout << "������� x  ��� f1(): ";
    cin >> x_first;
    cout << "������� y  ��� f1(): ";
    cin >> y_first;
    cout << "������� x ��� f2(): ";
    cin >> x_second;
    cout << "������� n ��� f3(): ";
    cin >> n;
    cout << "������� �������� eps ��� f4(): ";
    cin >> eps;
}

void output(double res1, double res2, double res3, double res4) {
    cout << (res1 == -1) ? "������������ �������� ��� x!" : "f1(x) = ";
    cout << "f2(x) = " << res2 << endl;
    cout << "f3(n) = " << res3 << endl;
    cout << "f4() = " << res4 << endl;
}