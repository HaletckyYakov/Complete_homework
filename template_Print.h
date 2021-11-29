#pragma once

template<typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[m][n], const unsigned int m, const unsigned int n)		//двумерный массив
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
void ReversePrint(T arr[], const unsigned int n)			//¬ыводит массив в обратном направлении;
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void ReversePrint(T arr[m][n], const unsigned int m, const unsigned int n)			//¬ыводит массив в обратном направлении;
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
