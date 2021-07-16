#include <iostream>
using namespace std;
int main()
{
	int x = 5;
	int* y = &x;
	int** ptr = &y;
	int z = 5;
	int* i = &z;
	if (*i == *y)
	{
		cout << "Same values  are stored \n";
	}
	else
		cout << "Different values  are stored  \n";

	if (i == y)
	{
		cout << "Same addresses are stored \n";
	}
	else
		cout << "Different addresses are stored  \n";

	cout << "Variable " << x << endl;
	cout << "Adress  " << y << endl;
	//cout << "Adress  " << &x << endl;
	cout << "Adress of pointer " << &y << endl;
	cout << "Adress of y  " << ptr << endl;
	cout << "Value of y " << **ptr << endl;

	int t = 0;
	long long int* ptrrr = new long long int;
	/*while (t==0)
	{
	cout << *ptrrr << endl;
	}*/
	int* newpointer = new int;
	*newpointer = 10000;
	cout << "Value pointed by new pointer " << *newpointer << endl;
	cout << "Address stored by new pointer " << newpointer << endl;
	cout << "Address of new pointer " << &newpointer << endl;
	delete newpointer;
	return 0;
}