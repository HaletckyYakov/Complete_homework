#include "Header.h";

void shiftLeft(int shiftL, int arr[], const unsigned int n)			//��������� ����������� ����� ������� �����, �� �������� ����� ���������;
{

	for (int i = shiftL; i < n + shiftL; i++)
	{
		if (i >= n) // ����� � ����
		{
			cout << arr[i - n] << "\t";
		}
		else
		{
			cout << arr[i] << "\t";
		}

	}
}   //��������� ����������� ����� ������� �����, �� �������� ����� ���������;
void shiftLeft(int shiftL, char arr[], const unsigned int n)
{
	for (int i = shiftL; i < n + shiftL; i++)
	{
		if (i >= n) // ����� � ����
		{
			cout << arr[i - n] << "\t";
		}
		else
		{
			cout << arr[i] << "\t";
		}

	}
}
void shiftLeft(int shiftL, float arr[], const unsigned int n)
{
	for (int i = shiftL; i < n + shiftL; i++)
	{
		if (i >= n) // ����� � ����
		{
			cout << arr[i - n] << "\t";
		}
		else
		{
			cout << arr[i] << "\t";
		}

	}
}
void shiftLeft(int shiftL, double arr[], const unsigned int n)
{
	for (int i = shiftL; i < n + shiftL; i++)
	{
		if (i >= n) // ����� � ����
		{
			cout << arr[i - n] << "\t";
		}
		else
		{
			cout << arr[i] << "\t";
		}

	}
}


void shiftRight(int shiftR, int arr[], const unsigned int n)		//��������� ����������� ����� ������� ������, �� �������� ����� ���������;
{
	for (int i = 0; i < n; i++)
	{
		if (i < shiftR)
		{
			cout << arr[n - shiftR + i] << "\t";
		}
		else
		{
			cout << arr[i - shiftR] << "\t";
		}
	}
}   //��������� ����������� ����� ������� ������, �� �������� ����� ���������;
void shiftRight(int shiftR, char arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < shiftR)
		{
			cout << arr[n - shiftR + i] << "\t";
		}
		else
		{
			cout << arr[i - shiftR] << "\t";
		}
	}
}
void shiftRight(int shiftR, float arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < shiftR)
		{
			cout << arr[n - (int)shiftR + i] << "\t";
		}
		else
		{
			cout << arr[i - (int)shiftR] << "\t";
		}
	}
}
void shiftRight(int shiftR, double arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < shiftR)
		{
			cout << arr[n - (int)shiftR + i] << "\t";
		}
		else
		{
			cout << arr[i - (int)shiftR] << "\t";
		}
	}
}