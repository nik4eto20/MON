#include<iostream>
using namespace std;
int main()
{
	float R1, R2, RS;
	cout << "\nPlease enter value of R1:";
	cin >> R1;
	cout << "\nPlease enter value of R2:";
	cin >> R2;
	if (R1 + R2 == 0)
		cout << "\nError: Result cannot be calculated!";
	else
	{
		RS = R1 + R2;
		cout << "\nValue of RS is:";
		cout << RS;
	}
	return 0;
}
