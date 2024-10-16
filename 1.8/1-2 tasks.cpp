#include<iostream>
using namespace std;

int main()
{
	    //форми вибору
	int nA = 52;
	if (nA % 2 == 0)
	{
		nA *= 3;
	}//умовна 
	else
	{
		nA++;
	}// альтернативна

	int nB, nC;
	nB = 5;
	nC = 11;

	switch (nB) 
	{
	case 1: nC *= 1;
		break;
	case 2: nC *= 2;
		break;
	case 3: nC *= 3;
		break;
	case 4: nC *= 4;
		break;
	default: nC *= 0;
		break;

	}// охоронна 

	        //форми повторення
	
	// do

	int sum = 0;
	int i = 2;
	do 
	{
		sum += i;
		i++;
	} while (i <= 230);

	//while

	int N = 1;
	while(N < 2)
	{
		N++;
	}

	//for 
	int qwerty;
	qwerty = 1;
	for (int A = 0; A <= 14; A++) 
	{
		qwerty += A;
	}
}
