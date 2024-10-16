enum Names { Artem, Vasya, Yura, Mikola, Georg, Andrew };

struct Student
{
	Names name;
	int course;
	bool stipendia;
};

int main()
{
	Student myStudents[7];
	myStudents[0] = { Artem, 2, true };
	myStudents[1] = { Vasya, 3, false };
	myStudents[2] = { Georg, 2, false };
	myStudents[3] = { Yura, 1, true };
	myStudents[4] = { Andrew, 1, false };
	myStudents[5] = { Mikola, 2, false };

	myStudents[6].name = Artem;
	myStudents[6].course = 2;
	myStudents[6].stipendia = false;

	int count = 0;

	for (int i = 0; i < 7; i++)
	{
		if (myStudents[i].course == 2 && myStudents[i].stipendia == false)
		{
			count++;
		}
	}
	float percent = (float)count * 100 / 7;

	return 0;
}
