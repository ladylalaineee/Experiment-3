#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int dayA[7], dayB[7], dayC[7];
	int a, b, c;
	
	cout <<"Enter all temperature for week of Province A, Province B, and then Province C." << "\n" << endl;
	
	for(int a=0; a<7; ++a)
	{
		 cout << "Province A, Day " << a + 1 << " : ";
         cin >> dayA[a];
	}
	
		for(int b=0; b<7; ++b)
	{
		 cout << "Province B, Day " << b + 1 << " : ";
         cin >> dayB[b];
	}
	
		for(int c=0; c<7; ++c)
	{
		 cout << "Province C, Day " << c + 1 << " : ";
         cin >> dayC[c];
	}
	
	cout << "\n \n" << "Displaying Values..." << "\n" << endl;
		
	for(int a=0; a<7; ++a)
	{
		 cout << "Province A, Day " << a + 1 << " = " << dayA[a] << endl;
	}
	
		for(int b=0; b<7; ++b)
	{
		 cout << "Province B, Day " << b + 1 << " = " << dayB[b] << endl;
	}
	
		for(int c=0; c<7; ++c)
	{
		 cout << "Province C, Day " << c + 1 << " = " << dayC[c] << endl;
	}
				
	_getch();
	return 0;
}
