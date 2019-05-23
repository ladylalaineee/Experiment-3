#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char arr[100];
	int size;
	
	cout << "Enter size: ";
	cin >> size;
	cout << "Enter elements: ";
	for (int i=0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Displaying reverse: ";
	for (int i=size; i >= 0; i--)
	{
		cout << arr[i];
	}
	_getch();
	return 0;
}
