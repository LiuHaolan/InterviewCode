#include "../../leetcode/WordLadder.h"
#include <iostream>

int main() {
	Solution s;

	string beginWord = "hit";
	string endWord = "cog";
	vector<string> wordList = { "hot", "dot", "dog", "lot", "log", "cog" };
	wordList.pop_back();

	std::cout << s.ladderLength(beginWord, endWord, wordList) << std::endl;
	while (1);
}