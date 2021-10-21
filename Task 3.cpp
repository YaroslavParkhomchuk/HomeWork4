#include <iostream>
using namespace std;
int sum_function(int* num1, int* num2);
int sum_function(int* num1, int* num2)
{
	int sum;
	sum = *num1 + *num2;
	return sum;
}

int main()
{
	int a;
	int b;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Result: " << sum_function(&a, &b) << endl;
	
}