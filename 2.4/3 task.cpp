**SOON**


#include <string>
#include <iostream>
using namespace std;

//first sub
void procArray(int arr[5][6], int M, int N)
{
	int maxVal = arr[0][0];//
	int maxRow = 0;//
	int maxCol = 0;//

	//find max element
	for (int i = 0; i < M; ++i)//find max M
	{
		for (int j = 0; j < N; ++j)//find max N
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
				maxRow = i;
				maxCol = j;
			}
		}
	}

	int temp = arr[0][0];
	arr[0][0] = arr[maxRow][maxCol];
	arr[maxRow][maxCol] = temp;
}

//sec sub
void procString(char str[])
{
	char evenPos[100];//array for even
	char oddPos[100];//array for odd 
	int evenIdx = 0;
	int oddIdx = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			evenPos[evenIdx++] = str[i];//add to even arrey
		}
		else
		{
			oddPos[oddIdx++] = str[i];//add to odd array
		}
		i++;
	}
	evenPos[evenIdx] = '\0';//endl 
	oddPos[oddIdx] = '\0';   

	//association odd and even	

	int j = 0;

	while (evenPos[j] != '\0')
	{
		str[i++] = evenPos[j++];
	}

	j = 0;

	while (oddPos[j] != '0')
	{
		str[i++] = oddPos[j++];
	}

	str[i] = '\0';//endl
}

int main()
{
	int array[5][6] = 
	{
	{5,3,8,6,7,2},
	{4,12,1,10,11,17},
	{1,13,15,16,9,21},
	{18,19,21,14,15,16},
	{23,5,6,4,14,22}
	};

	char str[100] = "absdef";

	procArray(array, 5, 6);

	cout << "Після обробки масиву:" << endl;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cout << array[i][j];
		}
		cout << endl;
	}

	procString(str);
	cout << "Після обробки рядка: " << str << endl;
}
