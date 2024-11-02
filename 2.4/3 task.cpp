#include <iostream>
#include <string>

using namespace std;

void processMatrix(int array[6][5], int M, int N) 
{
    int maxElement = array[0][0];
    int maxRow = 0;
   
    //Знаходимо рядок з максимальним елементом
    for (int i = 0; i < M; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            if (array[i][j] > maxElement) 
            {
                maxElement = array[i][j];
                maxRow = i;
            }
        }
    }

    for (int j = 0; j < N; ++j) 
    {
        array[maxRow][j] = 1;//заповнює весь рядок з максимальним елементом одиницями
    }
}

string processString(const string& str) 
{
    string result;

    for (int i = 0; i < str.length(); i++)//перебирає всі символи рядка str
    {
        if (str[i] == 'A')
        {
            result += "**";//Замінюємо 'A' на "**"
        }
        else 
        {
            result += str[i];//Додаємо інші символи без змін
        }
    }
    return result;
}

int main() 
{
    const int M = 6;
    const int N = 5;
    int matrix[M][N] = {
        {1, 2, 3, 4, 5},
        {9, 8, 7, 6, 5},
        {5, 4, 3, 2, 1},
        {1, 3, 5, 7, 9},
        {6, 4, 2, 8, 10},
        {0, 2, 4, 6, 8}
    };

    processMatrix(matrix, M, N);

    cout << "Obroblyniy dvovumirnuy masuv:" << endl;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    string String = "ABBACCAD";

    string resultString = processString(String);

    cout << "Obroblenuy riadok: " << resultString << endl;

    return 0;
}
