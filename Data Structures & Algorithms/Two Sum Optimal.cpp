#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
	int nums[5] = { 2,7,11,15 };
	unordered_map<int, int> num_map;
	int n = sizeof(nums) / sizeof(nums[0]);
	int target = 9;

	for (int i = 0; i < n; i++) {
		int complement = target - nums[i];
		if (num_map.find(complement) != num_map.end()) {
			cout << num_map[complement] << " , " << i << "\n";
		}
		num_map[nums[i]] = i;
	}
}