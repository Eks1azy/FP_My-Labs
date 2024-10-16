int main()
{
	int arr1[10];
	int arr2[10];
	int arr3[10];

	//заповнюємо перший масив
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 55 - 2 * i;
	}
	//заповнюємо другий масив
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = 40 + 3 * i;
	}

	int k = 0; // кількість рівних значень двох масивів

	for (int i = 0; i < 10; i++)//1 масив
	{
		for (int j = 0; j < 10; j++)//2 масив
		{
			if (arr1[i] == arr2[j])
			{
				arr3[k] = arr1[i];//присвоєння значення 3 масиву
				k++;
				break;// вихід з внутрішнього циклу
			}
		}
	}
	// знаходження середнього арифметичного
	int sum = 0;

	for (int i = 0; i < k; i++) 
	{
		sum += arr3[i];
	}

	double average = (double)sum / k;

	return 0;
}
