#include "../../leetcode/241.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
	Solution s;

	string c = "2-1-1";

	vector<int> res = s.diffWaysToCompute(c);
	for (int i = 0; i < res.size(); i++) {	
		std::cout << res[i] << " " ;
	}
	while (1);
}