int max(int array[], int n)
{
	int c;
	int a, b;

	for (a = 0; a <= n - 1; a++)
	{
		for (b = 0; b <= n - 1; b++)
		{
			if (array[a] - array[b] >= 0)
				continue;
			else
				break;
		}
		if (b == n)
			break;
		else
			continue;
	}
	c = array[a];

	return c;

}
