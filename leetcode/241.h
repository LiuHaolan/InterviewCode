#pragma once
#include <vector>
#include <string>
using namespace std;

class Solution {
public:

	int oper(int a, int b, char op) {

		switch (op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		default:
			return 0;
		}

	}

	int tr(char c) {
		return c - '0';
	}

	vector<int> search(string input, int cur) {

		if (cur == input.size())
			return vector<int>();

		if (input.size() - cur == 3)
			return vector<int>(1, oper(tr(input[cur]), tr(input[cur + 2]), input[cur + 1]));

		int num1 = tr(input[cur]);
		char op = input[cur + 1];
		int num2 = tr(input[cur + 2]);
		char op2 = input[cur + 3];

		vector<int> res;
		vector<int> res1 = search(input, cur + 2);
		vector<int> res2 = search(input, cur + 4);
		int num;
		num = oper(num1, num2, op);

		for (int i = 0; i<res2.size(); i++) {
			res.push_back(oper(num, res2[i], op2));
		}
		for (int i = 0; i<res1.size(); i++) {
			res.push_back(oper(num1, res1[i], op));
		}

		return res;

	}

	vector<int> diffWaysToCompute(string input) {

		return search(input, 0);


	}

};
