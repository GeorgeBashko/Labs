#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()
{
	double mn1sum = 0;
	const int size = 20;
	int size1;
	double *array = new double[size];
	cout << "Choose array filling style (c/r): ";
	char ch;
	cin >> ch;
	while (ch != 'c' && ch != 'r')
	{
		cout << "Invalid symbol,try again: ";
		cin >> ch;
	}
	if (ch == 'c')
	{
		cout << "Enter size of array (from 1 to 20): ";
		cin >> size1;
		while (size1 > size || size1 <= 0)
		{
			cout << "Invalid number,try again: ";
			cin >> size1;
		}
		cout << "Enter array elements(1 2 3 ): ";
		for (int i = 1; i <= size1; i++)
		{
			cin >> array[i];
		}
		cout << "Your array(given the size):"
			 << "[";
		for (int i = 1; i <= size1; i++)
		{
			cout << array[i] << " ";
		}
		cout << "]" << endl;
	}
	if (ch == 'r')
	{
		cout << "Enter size of array (from 1 to 20): ";
		cin >> size1;
		while (size1 > size || size1 <= 0)
		{
			cout << "Invalid size of array,tey again: ";
			cin >> size1;
		}
		double min, max;
		cout << "Enter max array element: ";
		cin >> max;
		cout << "Enter min array element: ";
		cin >> min;
		if (min > max)
		{
			swap(min, max);
		}
		cout << "Your array: ";
		cout << "[ ";
		for (int i = 1; i <= size1; i++)
		{
			do
			{
				double m = (double)rand() / RAND_MAX;
				array[i] = 2 * max * sin(min + 2 * m * (max - min));
			} while (array[i] > max || array[i] < min);
			cout << array[i] << " ";
		}
		cout << "]" << endl;
	}
	double sum1;
	for (int d = 1; d <= size1; d++)
	{
		if (d % 2 != 0)
		{
			sum1 += array[d];
		}
	}
	cout << "Sum of array elements with odd numbers: " << sum1 << endl;
	int nb, nq;
	for (int q = 1; q <= size1; q++)
	{
		if (array[q] < 0)
		{
			nq = q;
			break;
		}
	}
	for (int b = size1; b > 0; b--)
	{
		if (array[b] < 0)
		{
			nb = b;
			break;
		}
	}
		for (int w = nq + 1; w < nb; w++)
		{
			mn1sum += array[w];
		}
		cout << "Sum of elements between first and last negative number: " << mn1sum << endl;
	for (int u = 1; u <= size1; u++)
	{
		if (abs(array[u]) < 1)
		{
			array[u] = 0;
		}
	}
	int h = 0;
	for (int o = 1; o <= size1; o++)
	{
		if (array[o] == 0)
		{
			for (int y = o; y <= size1; y++)
			{
				array[y] = array[y + 1];
			}
			array[size1] = 0;
			size1--;
			o--;
			h++;
		}
	}
	cout << "Transform massive: "
		 << "[";
	for (int r = 1; r <= size1 + h; r++)
	{
		cout << array[r] << " ";
	}
	cout << "]";
	delete[] array;
	return 0;
}
