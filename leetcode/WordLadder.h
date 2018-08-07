#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	inline bool ifLegal(string from,string to){
		int cnt = 0;
		for (string::iterator itt = from.begin(), it = to.begin(); itt != from.end(),it != to.end();++it, ++itt) {
			if (*it != *itt)
				cnt++;
		}
		if (cnt != 1)
			return false;
		return true;
	}

    int ladderLength_(string beginWord, string endWord, vector<string>& wordList) {
		if (beginWord == endWord) {
		
			return 1;
		}

		int maxd = 100000;
		for (vector<string>::iterator it = wordList.begin(); it != wordList.end(); ++it) {
			if (ifLegal(beginWord, *it)) {
				string newWord = *it;
				*it = "";
				int dist = 1 + ladderLength_(newWord, endWord,wordList);
				*it = newWord;

				if (dist < maxd) {
					maxd = dist;
				}
			}
		}
		return maxd;
		
    }

	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		
		
		int q = ladderLength_(beginWord, endWord, wordList);

		if (q == 100000)
			return 0;
		else
			return q;
	}

};