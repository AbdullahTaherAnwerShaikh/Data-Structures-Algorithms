#include <iostream>
using namespace std;

void reverseArray(int array[], int size) {
	int j = size-1;

	for (int i = 0;i < j;i++) {
		int* pStart = &array[i];
		int* pEnd = &array[j];
			int temp = *pStart;
			*pStart = *pEnd;
			*pEnd = temp;

			j--;
	}
};

int main(void) {
	int array[5] = { 1,2,3,4,5 };
	
	cout << "Before reversal: ";
	for (int i = 0;i < 5;i++) {
		cout << array[i];
	}
	reverseArray(array, 5);
	cout << "After reversal: ";
	for (int i = 0;i < 5;i++) {
		cout << array[i];
	}
}