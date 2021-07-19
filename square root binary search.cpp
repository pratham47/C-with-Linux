#include <iostream>
using namespace std;

double square_root(double number, int precision)
{
	int  first = 0, last = number, mid;
	double ans;

	while(first <= last)
	{
		mid = (first + last) / 2;
		if (mid * mid == number)
		{
			ans = mid;
			break;
		}
		if (mid * mid < number)
		{
			first = mid + 1;
			ans = mid;
		}
		else
		{
			last = mid - 1;
		}
	}

	double decimal_val = 0.1;
	for (int i = 0; i < precision; i++)
	{
		while (ans * ans <= number)
		{
			ans += decimal_val;
		}
		ans = ans - decimal_val;
		decimal_val = decimal_val / 10;
	}

	return ans;
}

int main()
{
     double number;
	int precision;
	cin >> number >> precision;
	cout << square_root(number, precision) << endl;
}
