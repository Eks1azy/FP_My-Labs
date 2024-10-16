#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> A;
	int k;
	cout << "Enter the number of the array: ";
	cin >> k;
	for (int i = 0; i < k; i++) {
		int tmp;
		cin >> tmp;
		A.push_back(tmp);
	}  
	int p;
	cout << "Enter P:";
	cin >> p;
	int result;
	for (int i = 0; i < k; i++) {
		if (A[i] == p) {
			result = i;
			cout << "First is : " << result;
			break;
		}
	}
	cout << "Nothing";
}
