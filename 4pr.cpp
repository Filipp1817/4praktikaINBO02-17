#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>

using namespace std;

int num = 0;

double *creater(int size)
{
	double *array = new double[size];
	return array;
}


void filler(double *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}


void shower(double *arr, int size)
{
	cout << "Output array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}


void cleaner(double *arr)
{
	delete[] arr;
}


int main()
{
	char key = 'z';
	while (key != 'n')
	{
		cout << "Enter size of array = ";
		cin >> num;
		double *array;
		array = creater(num);
		filler(array, num);
		shower(array, num);
		cout << endl << "Do you want try one more time? y/n";
		cin >> key;
	}
	
	return 0;
}