#pragma once

#include "Header.h";

template<typename T>
T Sum(T arr[], const unsigned int n)			//Возвращает сумму элементов массива;
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
T Sum(T arr[m][n], const unsigned int m, const unsigned int n)			//Возвращает сумму элементов массива;
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>
T Avg(T arr[], const unsigned int n)				//Возвращает среднее арифметическое элементов массива;
{
	return Sum(arr, n) / n;
}

template<typename T>
T Avg(T arr[m][n], const unsigned int m, const unsigned int n)
{
	return Sum(arr, m, n) / (m * n);
}

template<typename T>
T minValueIn(T arr[], const unsigned int n)		//Возвращает минимальное значение из массива;
{
	T  min = (T)INT32_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

template<typename T>
T minValueIn(T arr[m][n], const unsigned int m, const unsigned int n)
{
	T  min = (T)INT32_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (min > arr[i][j])
				min = arr[i][j];
		}

	}
	return min;
}

template<typename T>
T maxValueIn(T arr[], const unsigned int n)		//Возвращает максимальное значение из массива;
{
	T max = (T)INT32_MIN;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];

	}
	return max;
}

template<typename T>
T maxValueIn(T arr[m][n], const unsigned int m, const unsigned int n)
{
	T  max = (T)INT32_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max < arr[i][j])
				max = arr[i][j];
		}

	}
	return max;
}
