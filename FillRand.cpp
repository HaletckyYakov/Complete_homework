#include "Header.h";


void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand) + minRand;
	}
}
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(int arr[m][n], const unsigned int m, const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}

}
void FillRand(double arr[m][n], const unsigned int m, const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}