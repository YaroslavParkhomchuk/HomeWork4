#include <iostream>
using namespace std;

void Reverse_Array(int array[], int size);
void Reverse_Array(int array[], int size)
{
	int temp;
	size--;
	for (int i = 0; size >= i; size--, i++)
	{
		temp = array[i];
		array[i] = array[size];
		array[size] = temp;
	}
}

int main()
{
	int i;
	int a[15]; 
	int size;

	cout << "Enter size of array: ";
	cin >> size;
	cout << "\nEnter any " << size << " elements: \n";

	for (i = 0; i < size; i++)
	{
		cin >> a[i];
	}

	cout << "\nArray: ";

	for (i = 0; i < size; i++)
	{
		cout << " " << a[i] << " ";
	}

	Reverse_Array(a, size);
	cout << "\nReversed array: ";
	for (i = 0; i < size; i++)
	{
		cout << " " << a[i] << " ";
	}
	cout << "";

	return 0;
}



