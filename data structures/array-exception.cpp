#include<iostream>
#include<string.h>
using namespace std;

class ArrayException{
	char *s;
	public:
	ArrayException(char *x){
		s = new char[strlen(x) + 1];
		strcpy(s, x);
	}
	friend ostream & operator<<(ostream &abc, ArrayException obj){
		abc << obj.s;
		return abc;
	}
};

int main()
{
	ArrayException a("Invalid index ... Sandeep");
	cout << a;
	getchar();
	return 0;
}
