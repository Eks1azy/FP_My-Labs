**soon**

#include<iostream>
using namespace std;

int main()
{
	bool result = true;

	int nA;
	int nB;

	cout << "Your first number: ";
	cin >> nA;
	cout << "Your second number: ";
	cin >> nB;

	int size = sizeof(int) * 8;
	for (int i = 0; i < size; i++) {
		int nBA = nA & (1 << i);
		int nBB = nB & (1 << i);
		int Sum;
		Sum = nBB + nBA;
		cout << Sum << endl;
	}
	
}
