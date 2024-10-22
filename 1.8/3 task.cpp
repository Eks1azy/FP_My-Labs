#include <iostream>
using namespace std;

int main() {
    bool result = true;

    int nA;
    cout << " your first number is: ";
    cin >> nA;
    
    int nB;
    cout << " your second number is: ";
    cin >> nB;

    int size = sizeof(int) * 8;
    for (int i = size - 1; i >= 0; i--)
    {
        int nBA = nA & (1 << i);
        int nBB = nB & (1 << i);

        if (nBA > nBB)
        {
            result = false;
            break;
        }
        else if (nBA < nBB)
        {
            break;
        }
    }   

    if (result) {
        cout << nA << " is less than " << nB << endl;
    }
    else 
    {
        cout << nA << " is not less than " << nB << endl;
    }

    return 0;
}
