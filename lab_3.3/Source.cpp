#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y{};
	double R;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	if (x <= -2)
		y = x + 4;
	else
		if (x > 4 && x <= 8 - R)
			y = ((-4 - x * R - 2 * R + x) / 6.);
		else
			if (x > 4 && x <= 8 - R)
				y = -R;
			else
				if (x > 8 - R && x <= 8 + R)
					y = sqrt(R * R - (8 + R));
				else
					if (x > 8 + R)
						y = -R;
	cout << endl;
    cout << "y = " << y << endl;
	cin.get();
	return 0;
}