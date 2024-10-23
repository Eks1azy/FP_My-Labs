int func(int start, int step, int elements)
{
	if (elements == 1)
	{
		return start;
	}

	return start + func(start * step, step,elements -1);
}

int main()
{
	int start = -2;
	int step = -2;
	int elements = 6;

	double sum = func(start, step, elements);

}
