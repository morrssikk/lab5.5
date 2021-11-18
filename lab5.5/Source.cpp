// варіант 40 Шарафан
#include <iostream>
#include <cmath>
using namespace std;
double a(double a1, double d, int n); 
int main()
{
	double a1, d, n, c;

	cout << "a1 = "; cin >> a1;
	cout << "d = "; cin >> d;
	cout << "n = "; cin >> n;
	
	double Sn = ((a1+ a(a1, d, n))*n)/2;
	cout << "a = " << a(a1, d, n) << endl;
	cout << "Sn = " << Sn << endl;
	return 0;
}
double a(double a1, double d, int n) 
{
	if (n == 1)
		return a1;
	else
		return a(a1, d, n - 1) + d;
}