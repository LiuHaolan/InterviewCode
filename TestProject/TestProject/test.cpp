#include "../../leetcode/46.h"
#include <iostream>
using namespace std;
#include <vector>

int main() {
	Solution s;

	vector<int> nums;
	nums.push_back(6);
	nums.push_back(2); 
	nums.push_back(1);
	nums.push_back(8);

	vector<vector<int>> res = s.permute(nums);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			std::cout << res[i][j] << " " ;
			std::cout << std::endl;
		}
	}
	while (1);
}