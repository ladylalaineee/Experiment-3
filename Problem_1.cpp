#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int arr[10], e, s, min, max, average, sum=0.0;
	cout << "Enter Array Size: ";
	cin >> s;
	cout << "Enter Array Elements: ";
	for (e = 0; e < s; e++)
	{
		cin >> arr [e];
	}
	
	max = arr[0];
	for (e = 0; e < s; e++)
	{
		if (max < arr[e])
			max = arr[e];
	}
	
	min = arr[0];
	for (e = 0; e < s; e++)
	{
		if (min > arr[e])
			min = arr[e];
	}
	
	for (e = 0; e < s; e++)
	{
		sum += arr[e];
	}
	
	for (e = 0; e < s; e++)
	{
		average = sum/s;
	}
	
	cout << "\n" << "The smallest integer is: " << min << "\n"<< endl; 
	cout << "The largest integer is: " << max << "\n"<< endl;
	cout << "Total of all integers: " << sum << "\n"<< endl;
	cout << "Average of all integers: " << average << endl;
	
	_getch();
	return 0;
}

