#include "Header.h";

void Sort(int arr[], const unsigned int n)				//Сортирует массив в порядке возрастания;
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
}
void Sort(char arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void Sort(float arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void Sort(double arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sort(int arr[m][n], const unsigned int m, const unsigned int n)
{

	for (int k = 0; k < m; k++)
	{
		for (int c = 0; c < n; c++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (arr[k][c] < arr[i][j])
					{
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sort(char arr[m][n], const unsigned int m, const unsigned int n)
{
	for (int k = 0; k < m; k++)
	{
		for (int c = 0; c < n; c++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (arr[k][c] < arr[i][j])
					{
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
void Sort(float arr[m][n], const unsigned int m, const unsigned int n)
{

	for (int k = 0; k < m; k++)
	{
		for (int c = 0; c < n; c++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (arr[k][c] < arr[i][j])
					{
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
void Sort(double arr[m][n], const unsigned int m, const unsigned int n)
{

	for (int k = 0; k < m; k++)
	{
		for (int c = 0; c < n; c++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (arr[k][c] < arr[i][j])
					{
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}