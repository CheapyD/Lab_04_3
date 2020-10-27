#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	double x, xp, xk, dx, F, a, b, c;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(10) << "F" << "|" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{

		if (c < 0 && b != 0)
			F = (a * (x * x)) + ((b * b) * x);
		else
			if (c > 0 && b == 0)
				F = (x + a) / (x + c);
			else
				F = x / c;
		cout << " |" << setw(10) << setprecision(4) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	system("pause");
	return 0;
}

