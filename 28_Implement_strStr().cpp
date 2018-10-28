#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int i = 0, j, pos = 0;
        while (i < haystack.length())
        {
			pos = i;
			bool flag = true;
			for (j = 0; j < needle.length(); j++)
			{
				if (j >= haystack.length()) 
				{
					flag = false;
					break;
				}
				if (haystack[i + j] != needle[j])
				{
					flag = false;
					break;
				}
			}
			if (flag == false) i++; else return pos;
		}
        return -1;
    }
};

int main()
{
	string a, b;
	while (cin >> a >> b) {
		Solution s;
		cout << s.strStr(a, b) << endl;
	}	
	return 0;
}
