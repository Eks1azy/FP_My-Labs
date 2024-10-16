int main()
{
	int arr1[11];

	for (int i = 0; i < 11; i++)
	{
		if (i % 2)//пер. індекса на парність
		{
			arr1[i] = i + 5;
		}
		else//не парність
		{
			arr1[i] = 2 * i + 3;
		}
	}

	int size;
	size = 11;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; i++)
		{
			if(arr1[j]>arr1[j+1])
			{
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
}
