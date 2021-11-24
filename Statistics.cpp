#include "Header.h";

int Sum(int arr[], const unsigned int n)			//Возвращает сумму элементов массива;
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const unsigned int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const unsigned int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const unsigned int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[m][n], const unsigned int m, const unsigned int n)			//Возвращает сумму элементов массива;
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(char arr[m][n], const unsigned int m, const unsigned int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
float Sum(float arr[m][n], const unsigned int m, const unsigned int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[m][n], const unsigned int m, const unsigned int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int Avg(int arr[], const unsigned int n)				//Возвращает среднее арифметическое элементов массива;
{
	return Sum(arr, n) / n;
}
char Avg(char arr[], const unsigned int n)
{
	return Sum(arr, n) / n;
}
float Avg(float arr[], const unsigned int n)
{
	return Sum(arr, n) / n;
}
double Avg(double arr[], const unsigned int n)
{
	return Sum(arr, n) / n;
}

int Avg(int arr[m][n], const unsigned int m, const unsigned int n)
{
	return Sum(arr, m, n) / (m * n);
}
char Avg(char arr[m][n], const unsigned int m, const unsigned int n)
{
	return Sum(arr, m, n) / (m * n);
}
float Avg(float arr[m][n], const unsigned int m, const unsigned int n)
{
	return Sum(arr, m, n) / (m * n);
}
double Avg(double arr[m][n], const unsigned int m, const unsigned int n)
{
	return Sum(arr, m, n) / (m * n);
}

int minValueIn(int arr[], const unsigned int n)		//Возвращает минимальное значение из массива;
{
	int  min = INT32_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
char minValueIn(char arr[], const unsigned int n)
{
	char  min = CHAR_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const unsigned int n)
{
	float  min = LONG_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const unsigned int n)
{
	double  min = LONG_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int minValueIn(int arr[m][n], const unsigned int m, const unsigned int n)
{
	int  min = INT32_MAX;
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
char minValueIn(char arr[m][n], const unsigned int m, const unsigned int n)
{
	char  min = CHAR_MAX;
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
float minValueIn(float arr[m][n], const unsigned int m, const unsigned int n)
{
	float  min = LONG_MAX;
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
double minValueIn(double arr[m][n], const unsigned int m, const unsigned int n)
{
	double  min = LONG_MAX;
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

int maxValueIn(int arr[], const unsigned int n)		//Возвращает максимальное значение из массива;
{
	int max = INT32_MIN;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];

	}
	return max;
}
char maxValueIn(char arr[], const unsigned int n)
{
	char  max = CHAR_MAX;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const unsigned int n)
{
	float  max = LONG_MAX;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];

	}
	return max;
}
double maxValueIn(double arr[], const unsigned int n)
{
	double  max = LONG_MAX;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];

	}
	return max;
}

int maxValueIn(int arr[m][n], const unsigned int m, const unsigned int n)
{
	int  max = INT32_MAX;
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
char maxValueIn(char arr[m][n], const unsigned int m, const unsigned int n)
{
	char  max = CHAR_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max > arr[i][j])
				max = arr[i][j];
		}

	}
	return max;
}
float maxValueIn(float arr[m][n], const unsigned int m, const unsigned int n)
{
	float  max = LONG_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max > arr[i][j])
				max = arr[i][j];
		}

	}
	return max;
}
double maxValueIn(double arr[m][n], const unsigned int m, const unsigned int n)
{
	double  max = LONG_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max > arr[i][j])
				max = arr[i][j];
		}

	}
	return max;
}