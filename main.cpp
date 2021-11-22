//Все домашние работы //SBD_121_ Functions (2021 10 02 lesson 3)
#include<iostream>
#include<Windows.h>
using namespace std;
//Массивы
//#define DIRECT ORDER //Вывод массива в пряомо порядке
//#define REVERSE ORDER //Вывод массива в обратном порядке
//#define SUM //Сумма
//#define AVERAGE //Среденее арифметческое
//#define MIN_MAX //Миниальное - Максимальное значение
//#define SHIFT //Сдвиг
//Функции
void FillRand(int arr[], const unsigned int n);									//Заполняет массив случайными числами;
void Print(int arr[], const unsigned int n);									//Выводит массив
int Sum(int arr[], const unsigned int n);										//Возвращает сумму элементов массива;
void ReversePrint(int arr[], const unsigned int n);								//Выводит массив в обратном направлении;
int Avg(int arr[], const unsigned int n);										//Возвращает среднее арифметическое элементов массива;
int minValueIn(int arr[], const unsigned int n);								//Возвращает минимальное значение из массива;
int maxValueIn(int arr[], const unsigned int n);								//Возвращает максимальное значение из массива;
void Sort(int arr[], const unsigned int n);										//Сортирует массив в порядке возрастания;
void shiftLeft(int shiftL, int arr[], const unsigned int n);					//Выполняет циклический сдвиг массива влево, на заданное число элементов;
void shiftRight(int shiftR, int arr[], const unsigned int n);					//Выполняет циклический сдвиг массива вправо, на заданное число элементов;


int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10; //SIZE //n-1 или SIZE -1 - номер последнего элемента массива
	int arr[n] = { 0,1,3,5,8,13,21,34,55,89 };
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
void ReversePrint(int arr[], const unsigned int n)			//Выводит массив в обратном направлении;
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const unsigned int n)			//Возвращает сумму элементов массива;
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Avg(int arr[], const unsigned int n)				//Возвращает среднее арифметическое элементов массива;
{
		return Sum(arr, n) / n;
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
int maxValueIn(int arr[], const unsigned int n)		//Возвращает максимальное значение из массива;
{
	int max = INT32_MIN;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		
	}
	return max;
}
void Sort(int arr[], const unsigned int n)				//Сортирует массив в порядке возрастания;
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
void shiftLeft(int shiftL, int arr[], const unsigned int n)			//Выполняет циклический сдвиг массива влево, на заданное число элементов;
{
	
	for (int i = shiftL; i < n + shiftL; i++)
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
}
void shiftRight(int shiftR, int arr[], const unsigned int n)		//Выполняет циклический сдвиг массива вправо, на заданное число элементов;
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