#include <iostream>
#include <conio.h>
#include "HashMap.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	HashMap table1;

	table1.put(1, 25);
	cout << table1.get(1)<<endl;

	table1.put(2, 3);
	cout << table1.get(2)<<endl;
	
	table1.put(2, 55);
    cout<<table1.get(2)<<endl;
	
	cout << table1.get(9);
	
	_getch();
	return 0;
}