//��� �������� ������ //SBD_121_ Functions (2021 10 02 lesson 3)
#include<iostream>
#include<Windows.h>
using namespace std;
//�������
//#define DIRECT ORDER //����� ������� � ������ �������
//#define REVERSE ORDER //����� ������� � �������� �������
//#define SUM //�����
//#define AVERAGE //�������� �������������
//#define MIN_MAX //���������� - ������������ ��������
//#define SHIFT //�����
//�������
void FillRand(int arr[], const unsigned int n);									//��������� ������ ���������� �������;
void Print(int arr[], const unsigned int n);									//������� ������
int Sum(int arr[], const unsigned int n);										//���������� ����� ��������� �������;
void ReversePrint(int arr[], const unsigned int n);								//������� ������ � �������� �����������;
int Avg(int arr[], const unsigned int n);										//���������� ������� �������������� ��������� �������;
int minValueIn(int arr[], const unsigned int n);								//���������� ����������� �������� �� �������;
int maxValueIn(int arr[], const unsigned int n);								//���������� ������������ �������� �� �������;
void Sort(int arr[], const unsigned int n);										//��������� ������ � ������� �����������;
void shiftLeft(int shiftL, int arr[], const unsigned int n);					//��������� ����������� ����� ������� �����, �� �������� ����� ���������;
void shiftRight(int shiftR, int arr[], const unsigned int n);					//��������� ����������� ����� ������� ������, �� �������� ����� ���������;


int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10; //SIZE //n-1 ��� SIZE -1 - ����� ���������� �������� �������
	int arr[n] = { 0,1,3,5,8,13,21,34,55,89 };
#ifdef DIRECT ORDER
	for (int i = 0; i < n; i++) //����� ������� � ����� �������
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // DIRECT ORDER
#ifdef REVERSE ORDER
	for (int i = n - 1; i >= 0; i--) //����� ������� � �������� �������
	{
		cout << arr[i] << "\t";
	}
#endif // REVERSE ORDER
#ifdef SUM //�����
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << sum;

#endif SUM
#ifdef AVERAGE //�������� �������������
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "������� �������������� �����: " << sum / n;


#endif AVERAGE
#ifdef MIN_MAX //����������� � ������������ �������� 
	int max = INT32_MIN, min = INT32_MAX;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

#endif // MIN_MAX 
#ifdef SHIFT
	int sdv;
	cout << "������� ����� ������ ��� �������: ";
	cin >> sdv;
	/*if (sdv > 0)
	{
		cout << "�� ������� ����� ������" << endl;
	}
	else if (sdv < 0)
	{
		cout << "�� ������� ����� �����" << endl;
	}
	else
	{
		cout << "������ �� �����" << endl;
	} */

	for (int i = sdv; i < n + sdv; i++)
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
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i < sdv)
		{
			cout << arr[n - sdv + i] << "\t";
		}
		else
		{
			cout << arr[i - sdv] << "\t";
		}
	}

#endif // SHIFT
 
	cout <<"����� ������� �������: " << endl;
	Print(arr, n);
	cout << endl;
	cout << "����� ������� � �������� �������: " << endl;
	ReversePrint(arr, n);
	cout << endl;
	cout << "������� �������������� �������: " << endl;
	cout << Avg(arr, n) << endl;
	cout << "����� ��������� �������: " << endl;
	cout << Sum(arr, n) << endl;
	cout << "��������������� ������ � ������� �����������: " << endl;
	Sort(arr, n);
	cout << endl;

	int shift;
	cout << "������� ����� ������ �����: " << " "; 
	cin >> shift;
	shiftLeft(shift, arr, n);
	cout << endl;

	cout << "������� ����� ������ ������: " << " ";
	cin >> shift;
	shiftRight(shift, arr, n);
	
		cout << endl;
		return 0;
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversePrint(int arr[], const unsigned int n)			//������� ������ � �������� �����������;
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const unsigned int n)			//���������� ����� ��������� �������;
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Avg(int arr[], const unsigned int n)				//���������� ������� �������������� ��������� �������;
{
		return Sum(arr, n) / n;
}
int minValueIn(int arr[], const unsigned int n)		//���������� ����������� �������� �� �������;
{
	int  min = INT32_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const unsigned int n)		//���������� ������������ �������� �� �������;
{
	int max = INT32_MIN;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		
	}
	return max;
}
void Sort(int arr[], const unsigned int n)				//��������� ������ � ������� �����������;
{
	for (int i = 0; i < n; i++)
	{
		for (int j=(i+1); j < n; j++)
		{			
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
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
}