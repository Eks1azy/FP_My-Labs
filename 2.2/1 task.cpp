enum Names {Artem,David,Tom,Yura,Tamara,Mary};
struct Student
{
	Names name;
	float avgMark;
	bool music;
};

int main()
{
	Student myStudents[7];
	myStudents[0] = {Artem, 4.3, true};
	myStudents[1] = {David, 3.2, false};
	myStudents[2] = {Tom, 2.6, true};
	myStudents[3] = {Yura, 3.7, true};
	myStudents[4] = {Tamara, 1.8, false};
	myStudents[5] = {Mary, 4.9, false};
	
	myStudents[6].name = Artem;
	myStudents[6].avgMark = 4.5;
	myStudents[6].music = true;

	int count = 0;

	for (int i = 0; i < 7; i++)
	{
		if (myStudents[i].avgMark >= 4 && myStudents[i].music == true)
		{
			count++;
		}
	}
	float percent = (float)count * 100 / 7;
}	
