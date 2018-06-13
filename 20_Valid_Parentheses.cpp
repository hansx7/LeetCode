#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
	bool isLeft(char c) {
		if (c == '(' || c == '[' || c == '{')
			return true;
		else
			return false;
	}
	bool isRight(char c) {
		if (c == ')' || c == ']' || c == '}')
			return true;
		else
			return false;
	}
	bool isMatch(char c1, char c2) {
		if (c1 == '(' && c2 == ')') return true;
		if (c1 == '[' && c2 == ']') return true;
		if (c1 == '{' && c2 == '}') return true;
		return false;
	}
    bool isValid(string s) {
		if (s == "") return true;
        stack<char> st;
        while (st.size()>0)
			st.pop();
		int l = s.length();
		if (l%2 == 1) return false;
		for (int i=0; i<l; i++) {
			if (isLeft(s[i]))
				st.push(s[i]);
			else {
				if (!isRight(s[i])) continue;
				if (st.size() <= 0) return false;   //这里不加判断可能会越界
				if (isMatch(st.top(), s[i]))
					st.pop();
				else
					return false;
			}				
		}
		if (st.size() > 0)
			return false;
        return true;
    }
};

int main() {
	string t;
	while (getline(cin, t, '\n')) {  //注意空字符串也是true的
		Solution s;
		cout<<s.isValid(t)<<endl;
	}	
	return 0;
}
