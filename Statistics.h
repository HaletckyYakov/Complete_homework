#pragma once

int Sum(int arr[], const unsigned int n);								//Возвращает сумму элементов массива;
char Sum(char arr[], const unsigned int n);
float Sum(float arr[], const unsigned int n);
double Sum(double arr[], const unsigned int n);

int Sum(int arr[m][n], const unsigned int m, const unsigned int n);								//Возвращает сумму элементов двухмерного массива;
char Sum(char arr[m][n], const unsigned int m, const unsigned int n);
float Sum(float arr[m][n], const unsigned int m, const unsigned int n);
double Sum(double arr[m][n], const unsigned int m, const unsigned int n);

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