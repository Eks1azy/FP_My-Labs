double func(double x)
{
	double y;

	if (x < 1)
	{
		y = 0;
		for (int i = 1; i <= 6; ++i)
		{
			y += (x + i) / (x - i);
		}
	}
	else 
	{
		y = x * x + 5 * x + 4;
	}
	return y;
}

int main()
{
	double y[36];
	int k = 0;

	double x_min = -2.0;
	double x_max = 5.0;
	double h = 0.2;//крок

	for (double i = x_min; i <= x_max; i += h, k++)
	{
		y[k] = func(i);
	}

	return 0;
}
