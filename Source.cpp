// Lab 5.1.cpp 
// Савуляка Максима 
// Лабораторна робота № 5.1 
// "Функції, що містять арифметичний вираз” 
// Варіант 21 


#include <iostream> 
#include <cmath> 


using namespace std;
double g(const double a, const double b, const double c); 
int main()
{
    double x, y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    double d = ((g((x * x), 1, y)) - (g((y * y), x, 1))) / (1 + (g(sqrt(x), y, 1)));
    cout << "d = " << d << endl;
    return 0;
}


double g(const double a, const double b, const double c) 
{
    return ((a * a) + sin(b) + 1) / (1 + (c * c));
}