//Все домашние работы //SBD_121_ Functions day 2 (2021 10 16 lesson 1)
#pragma once
#include "Header.h";

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//using std::cin;
//using std::cout;
//using std::endl;
////Массивы
////#define DIRECT ORDER //Вывод массива в пряомо порядке
////#define REVERSE ORDER //Вывод массива в обратном порядке
////#define SUM //Сумма
////#define AVERAGE //Среденее арифметческое
////#define MIN_MAX //Миниальное - Максимальное значение
////#define SHIFT //Сдвиг
////#defint OPERATION OF FUNCTIONS
////Функции
//
//const unsigned int m = 10;
//const unsigned int n = 10;

int main()
{
	setlocale(LC_ALL, "rus");
	int minRand=50, maxRand=100;
	//const int n = 10; //SIZE //n-1 или SIZE -1 - номер последнего элемента массива
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Одномерный массив: " << endl;
	cout << "Заполненный массив: " << endl;
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	int sum = Sum(arr, n);
	cout << "Сумма элементов массива: " << sum << endl;	
	cout << "Массив в обратном порядке:" << endl;
	ReversePrint(arr, n);
	int avg = Avg(arr, n);
	cout << "Среднее арифметичское массва: " << avg << endl;
	
	cout << "Минимальное значение массива: " <<minValueIn(arr,n) << endl;
	
	cout << "Максимальное значение массива: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "Сортировка по возрастанию: " << endl;
	Print(arr, n);
	cout << endl;
	int s;
	cout << "Введите число сдвига: ";
	cin >> s;
	cout << "Массив сдвинутый на " << s <<" влево:" << endl;
	shiftLeft(s,arr, n);
	
	cout << endl;
	cout << "Массив сдвинутый на " << s << " вправо:" << endl;
	shiftRight(s, arr, n);
	
	cout << endl;
	
	
#ifdef DIRECT ORDER
	for (int i = 0; i < n; i++) //Вывод массива в рямом порядке
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // DIRECT ORDER
#ifdef REVERSE ORDER
	for (int i = n - 1; i >= 0; i--) //Вывод массива в обратном порядке
	{
		cout << arr[i] << "\t";
	}
#endif // REVERSE ORDER
#ifdef SUM //Сумма
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << sum;

#endif SUM
#ifdef AVERAGE //Среденее арифметческое
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Среднее арифметическое равно: " << sum / n;


#endif AVERAGE
#ifdef MIN_MAX //Минимальное и максимальное значение 
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
	cout << "Введите сдвиг вправо для массива: ";
	cin >> sdv;
	/*if (sdv > 0)
	{
		cout << "Вы выбрали сдвиг вправо" << endl;
	}
	else if (sdv < 0)
	{
		cout << "Вы выбрали сдвиг влево" << endl;
	}
	else
	{
		cout << "Сдвига не будет" << endl;
	} */

	for (int i = sdv; i < n + sdv; i++)
	{
		if (i >= n) // сдвиг в лево
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
	cout <<"Вывод прямого массива: " << endl;
	Print(arr, n);
	cout << endl;
	cout << "Вывод массива в обратном порядке: " << endl;
	ReversePrint(arr, n);
	cout << endl;
	cout << "Среднее арифметическое массива: " << endl;
	cout << Avg(arr, n) << endl;
	cout << "Сумма элементов массива: " << endl;
	cout << Sum(arr, n) << endl;
	cout << "Отсортированный массив в порядке возрастания: " << endl;
	Sort(arr, n);
	cout << endl;

	int shift;
	cout << "Введите число сдвига влево: " << " "; 
	cin >> shift;
	shiftLeft(shift, arr, n);
	cout << endl;

	cout << "Введите число сдвига вправо: " << " ";
	cin >> shift;
	shiftRight(shift, arr, n);
#endif OPERATION OF FUNCTIONS
	
	/*int arrM[m][n] = {{0}};
	cout << "Двухмерный массив: " << endl;
	cout << "Заполненный массив: " << endl;
	FillRand(arrM, m, n);
	Print(arrM, m, n);
	
	cout << "Сумма элементов массива: " << Sum(arrM, m, n) << endl;
	cout << "Массив в обратном порядке:" << endl;
	ReversePrint(arrM, m, n);
	
	cout << "Среднее арифметичское массва: " << Avg(arrM, m, n) << endl;
	cout << "Минимальное значение массива: " <<minValueIn(arrM, m, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arrM, m, n) << endl;
	
	Sort(arrM, m, n);
	cout << "Сортировка по возрастанию: " << endl;
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
