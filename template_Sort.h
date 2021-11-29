#pragma once
#include "Header.h";
template<typename T>
void Sort(T arr[], const unsigned int n)				//Сортирует массив в порядке возрастания;
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
}

template<typename T>
void Sort(T arr[m][n], const unsigned int m, const unsigned int n)
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
						T temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
