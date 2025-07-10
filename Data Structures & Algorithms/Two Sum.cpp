#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n,i,target,j,temp,x;

	cout << "Enter number of elements: ";
	cin >> n;
	vector<int> nums;

	cout << "Enter elements: ";
	for (i = 0;i < n;i++) {
		cin >> x;
		nums.push_back(x);
	}

	cout << "Enter target: ";
	cin >> target;

	for (i = 0;i < n;i++) {
		for (j = i+1;j < n;j++) {
			temp = nums[i] + nums[j];
			if (temp == target) {
				cout << i << "\t" << j << "\n";
			}
		}
	}
}