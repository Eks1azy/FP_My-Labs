#include <iostream>
using namespace std;

int main() {
    bool result = true;

    int nA = 84;//0101 0100
    int nB = 83;//0101 0011

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
