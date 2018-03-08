#include<iostream>
using namespace std;
int main ()
{
	int G, S, B, E, U;
	cout << "\nEnter reward for G:";
	cin >> G;
	cout << "\nEnter reward for S:";
	cin >> S;
	cout << "\nEnter reward for B:";
	cin >> B;
	E = 20;
	if (G >= E)
	{
		U = G / E;
		cout << "\nU who are going to go to E for G:";
		cout << U;
	}
	else
	cout << "\nU who are going to go to E for G:0";
	if (S >= E)
	{
		U = S / E;
		cout << "\nU who are going to go to E for S:";
		cout << U;
	}
	else
	cout << "\nU who are going to go to E for S:0";
	if (B >= E)
	{
		U = B / E;
		cout << "\nU who are going to go to E for B:";
		cout << U;
	}
	else
	cout << "\nU who are going to go to E for B:0";
	return 0;
}

