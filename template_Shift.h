#pragma once
#include "Header.h";
template<typename T>
void shiftLeft(int shiftL, T arr[], const unsigned int n)			//¬ыполн€ет циклический сдвиг массива влево, на заданное число элементов;
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
}   //¬ыполн€ет циклический сдвиг массива влево, на заданное число элементов;


template<typename T>
void shiftRight(int shiftR, T arr[], const unsigned int n)		//¬ыполн€ет циклический сдвиг массива вправо, на заданное число элементов;
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
}   //¬ыполн€ет циклический сдвиг массива вправо, на заданное число элементов;
