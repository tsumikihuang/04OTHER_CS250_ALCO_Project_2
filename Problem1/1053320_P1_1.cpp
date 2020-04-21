#include <iostream>
using namespace std;
void main()
{
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		if (a >= b)
			a = a % b;
		else
			b = b % a;
	}

	if (a >= b)
		cout << a << endl;
	else
		cout << b << endl;

	system("pause");
	return;
}