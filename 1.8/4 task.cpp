#include<iostream>
using namespace std;

int main()
{
    int nA;
    int nB;

    cout << " your first number is: ";
    cin >> nA;

    cout << " your second number is: ";
    cin >> nB;

    int sum = 0;  
    int carry = 0;//змінна для зберігання переносу
    int size = sizeof(int) * 8; 

    for (int i = 0; i < size; i++)
    {
        int bitnA = (nA >> i) & 1; 
        int bitNB = (nB >> i) & 1; 
  
        int BitSum = bitnA + bitNB + carry;//обчислюємо суму бітів з урахуванням переносу

        sum |= (BitSum & 1) << i;//записуємо результат суми в потрібний біт "OR"

        // Оновлюємо перенос
        carry = (BitSum >> 1) & 1;
    }
    cout << nA << '+' << nB << '=' << sum << endl;

    return 0;
}
