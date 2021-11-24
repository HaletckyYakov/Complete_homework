//Все домашние работы //SBD_121_ Functions day 2 (2021 10 16 lesson 1)
#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//Массивы
//#define DIRECT ORDER //Вывод массива в пряомо порядке
//#define REVERSE ORDER //Вывод массива в обратном порядке
//#define SUM //Сумма
//#define AVERAGE //Среденее арифметческое
//#define MIN_MAX //Миниальное - Максимальное значение
//#define SHIFT //Сдвиг
//#defint OPERATION OF FUNCTIONS
//Функции

const unsigned int m = 10;
const unsigned int n = 10;

void FillRand(int arr[], const unsigned int n);							//Заполняет массив случайными числами;
void FillRand(int arr[m][n], const unsigned int m, const unsigned int n);

void Print(int arr[], const unsigned int n);							//Выводит массив
void Print(int arr[m][n], const unsigned int m, const unsigned int n);

int Sum(int arr[], const unsigned int n);								//Возвращает сумму элементов массива;
char Sum(char arr[], const unsigned int n);
float Sum(float arr[], const unsigned int n);
double Sum(double arr[], const unsigned int n);

int Sum(int arr[m][n], const unsigned int m, const unsigned int n);								//Возвращает сумму элементов двухмерного массива;
char Sum(char arr[m][n], const unsigned int m, const unsigned int n);
float Sum(float arr[m][n], const unsigned int m, const unsigned int n);
double Sum(double arr[m][n], const unsigned int m, const unsigned int n);

void ReversePrint(int arr[], const unsigned int n);						//Выводит массив в обратном направлении;
void ReversePrint(char arr[], const unsigned int n);
void ReversePrint(float arr[], const unsigned int n);
void ReversePrint(double arr[], const unsigned int n);

void ReversePrint(int arr[m][n], const unsigned int m, const unsigned int n);					//Выводит двухмерный массив в обратном направлении;
void ReversePrint(char arr[m][n], const unsigned int m, const unsigned int n);
void ReversePrint(float arr[m][n], const unsigned int m, const unsigned int n);
void ReversePrint(double arr[m][n], const unsigned int m, const unsigned int n);

int Avg(int arr[], const unsigned int n);								//Возвращает среднее арифметическое элементов массива;
char Avg(char arr[], const unsigned int n);
float Avg(float arr[], const unsigned int n);
double Avg(double arr[], const unsigned int n);

int Avg(int arr[m][n], const unsigned int m, const unsigned int n);								//Возвращает среднее арифметическое элементов двухмерного массива;
char Avg(char arr[m][n], const unsigned int m, const unsigned int n);
float Avg(float arr[m][n], const unsigned int m, const unsigned int n);
double Avg(double arr[m][n], const unsigned int m, const unsigned int n);


int minValueIn(int arr[], const unsigned int n);						//Возвращает минимальное значение из массива;
char minValueIn(char arr[], const unsigned int n);
float minValueIn(float arr[], const unsigned int n);
double minValueIn(double arr[], const unsigned int n);	


int minValueIn(int arr[m][n], const unsigned int m, const unsigned int n);						//Возвращает минимальное значение из двухмерного массива массива;
char minValueIn(char arr[m][n], const unsigned int m, const unsigned int n);
float minValueIn(float arr[m][n], const unsigned int m, const unsigned int n);
double minValueIn(double arr[m][n], const unsigned int m, const unsigned int n);


int maxValueIn(int arr[], const unsigned int n);						//Возвращает максимальное значение из массива;
char maxValueIn(char arr[], const unsigned int n);
float maxValueIn(float arr[], const unsigned int n);
double maxValueIn(double arr[], const unsigned int n);


int maxValueIn(int arr[m][n], const unsigned int m, const unsigned int n);						//Возвращает минимальное значение из двухмерного массива массива;
char maxValueIn(char arr[m][n], const unsigned int m, const unsigned int n);
float maxValueIn(float arr[m][n], const unsigned int m, const unsigned int n);
double maxValueIn(double arr[m][n], const unsigned int m, const unsigned int n);

void Sort(int arr[], const unsigned int n);								//Сортирует массив в порядке возрастания;
void Sort(char arr[], const unsigned int n);
void Sort(float arr[], const unsigned int n);
void Sort(double arr[], const unsigned int n);
//m-количество строк
//n-количество столбцов
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sort(int arr[m][n], const unsigned int m, const unsigned int n);							//Сортирует двухмерный массив в порядке возрастания;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
void Sort(char arr[m][n], const unsigned int m, const unsigned int n);
void Sort(float arr[m][n], const unsigned int m, const unsigned int n);
void Sort(double arr[m][n], const unsigned int m, const unsigned int n);


void shiftLeft(int shiftL, int arr[], const unsigned int n);			//Выполняет циклический сдвиг массива влево, на заданное число элементов;
void shiftLeft(char shiftL, int arr[], const unsigned int n);
void shiftLeft(float shiftL, int arr[], const unsigned int n);
void shiftLeft(double shiftL, int arr[], const unsigned int n);

void shiftRight(int shiftR, int arr[], const unsigned int n);			//Выполняет циклический сдвиг массива вправо, на заданное число элементов;
void shiftRight(char shiftR, int arr[], const unsigned int n);
void shiftRight(float shiftR, int arr[], const unsigned int n);
void shiftRight(double shiftR, int arr[], const unsigned int n);


int main()
{
	setlocale(LC_ALL, "rus");
	
	//const int n = 10; //SIZE //n-1 или SIZE -1 - номер последнего элемента массива
	int arr[n];
	cout << "Одномерный массив: " << endl;
	cout << "Заполненный массив: " << endl;
	FillRand(arr, n);
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
	
	int arrM [m][n] = { {0 }};
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
	
	cout << endl;
	/*FillRand(charArr1,m,n);
	Print(charArr1, m, n);
	cout << endl;
	
	Sort(charArr1, m, n);
	Print(charArr1, m, n);
	cout << endl;*/

	return 0;
}
#pragma region Готовые



void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}	
}
void FillRand(int arr[m][n], const unsigned int m, const unsigned int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}
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
void Print(int arr[m][n], const unsigned int m, const unsigned int n)		//двумерный массив
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

void ReversePrint(int arr[], const unsigned int n)			//Выводит массив в обратном направлении;
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversePrint(char arr[], const unsigned int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversePrint(float arr[], const unsigned int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void ReversePrint(double arr[], const unsigned int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void ReversePrint(int arr[m][n], const unsigned int m, const unsigned int n)			//Выводит массив в обратном направлении;
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
void ReversePrint(char arr[m][n], const unsigned int m, const unsigned int n)
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
void ReversePrint(float arr[m][n], const unsigned int m, const unsigned int n)
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
void ReversePrint(double arr[m][n], const unsigned int m, const unsigned int n)
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
	return Sum(arr, m,n) / (m*n);
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
#pragma endregion
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
}
void Sort(char arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				char temp = arr[i];
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
void Sort(float arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				float temp = arr[i];
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
void Sort(double arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				double temp = arr[i];
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sort(int arr[m][n], const unsigned int m, const unsigned int n)
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
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sort(char arr[m][n], const unsigned int m, const unsigned int n)
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
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
void Sort(float arr[m][n], const unsigned int m, const unsigned int n)
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
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
	}
}
void Sort(double arr[m][n], const unsigned int m, const unsigned int n)
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
						int temp = arr[k][c];
						arr[k][c] = arr[i][j];
						arr[i][j] = temp;

					}
				}
			}
		}
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
}   //Выполняет циклический сдвиг массива влево, на заданное число элементов;
void shiftLeft(int shiftL, char arr[], const unsigned int n)
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
void shiftLeft(int shiftL, float arr[], const unsigned int n)
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
void shiftLeft(int shiftL, double arr[], const unsigned int n)
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
}   //Выполняет циклический сдвиг массива вправо, на заданное число элементов;
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
			cout << arr[n -(int)shiftR + i] << "\t";
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

