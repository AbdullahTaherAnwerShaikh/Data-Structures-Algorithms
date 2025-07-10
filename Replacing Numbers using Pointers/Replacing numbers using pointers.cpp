#include <iostream>
using namespace std;

int main(void) {
	int a = 6, b = 12 ;
	cout << "Unchanged: " << a <<" " << b << endl;

	int* pa = &a;
	int* pb = &b;

	int temp = *pa;
	*pa = *pb;
	*pb = temp;

	cout << "Changed: " << *pa << " " << *pb;
}