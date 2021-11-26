//��� �������� ������ //SBD_121_ Functions day 2 (2021 10 16 lesson 1)
#pragma once
#include "Header.h";

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//using std::cin;
//using std::cout;
//using std::endl;
////�������
////#define DIRECT ORDER //����� ������� � ������ �������
////#define REVERSE ORDER //����� ������� � �������� �������
////#define SUM //�����
////#define AVERAGE //�������� �������������
////#define MIN_MAX //���������� - ������������ ��������
////#define SHIFT //�����
////#defint OPERATION OF FUNCTIONS
////�������
//
//const unsigned int m = 10;
//const unsigned int n = 10;

int main()
{
	setlocale(LC_ALL, "rus");
	int minRand=50, maxRand=100;
	//const int n = 10; //SIZE //n-1 ��� SIZE -1 - ����� ���������� �������� �������
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "���������� ������: " << endl;
	cout << "����������� ������: " << endl;
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	int sum = Sum(arr, n);
	cout << "����� ��������� �������: " << sum << endl;	
	cout << "������ � �������� �������:" << endl;
	ReversePrint(arr, n);
	int avg = Avg(arr, n);
	cout << "������� ������������� ������: " << avg << endl;
	
	cout << "����������� �������� �������: " <<minValueIn(arr,n) << endl;
	
	cout << "������������ �������� �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "���������� �� �����������: " << endl;
	Print(arr, n);
	cout << endl;
	int s;
	cout << "������� ����� ������: ";
	cin >> s;
	cout << "������ ��������� �� " << s <<" �����:" << endl;
	shiftLeft(s,arr, n);
	
	cout << endl;
	cout << "������ ��������� �� " << s << " ������:" << endl;
	shiftRight(s, arr, n);
	
	cout << endl;
	
	
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
#ifdef OPERATION OF FUNCTIONS
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
#endif OPERATION OF FUNCTIONS
	
	/*int arrM[m][n] = {{0}};
	cout << "���������� ������: " << endl;
	cout << "����������� ������: " << endl;
	FillRand(arrM, m, n);
	Print(arrM, m, n);
	
	cout << "����� ��������� �������: " << Sum(arrM, m, n) << endl;
	cout << "������ � �������� �������:" << endl;
	ReversePrint(arrM, m, n);
	
	cout << "������� ������������� ������: " << Avg(arrM, m, n) << endl;
	cout << "����������� �������� �������: " <<minValueIn(arrM, m, n) << endl;
	cout << "������������ �������� �������: " << maxValueIn(arrM, m, n) << endl;
	
	Sort(arrM, m, n);
	cout << "���������� �� �����������: " << endl;
	Print(arrM, m, n);
	
	cout << endl;*/
	/*FillRand(charArr1,m,n);
	Print(charArr1, m, n);
	cout << endl;
	
	Sort(charArr1, m, n);
	Print(charArr1, m, n);
	cout << endl;*/

	return 0;
}
