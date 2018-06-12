#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	Solution(string s) {
		this->s = s;
	}
    int romanToInt(string s) {
        map<char, int> r2i;
        r2i['I'] = 1;
        r2i['V'] = 5;
        r2i['X'] = 10;
        r2i['L'] = 50;
        r2i['C'] = 100;
        r2i['D'] = 500;
        r2i['M'] = 1000;
        int ans = 0;
        int l = s.length();
        for (int i=0; i<l-1; i++)
        {
			if (r2i[s[i+1]] == 5*r2i[s[i]] || r2i[s[i+1]] == 10*r2i[s[i]])
				ans -= r2i[s[i]];
			else
				ans += r2i[s[i]];
		}
		ans += r2i[s[l-1]];
        return ans;
    }
private:
	string s;
};

int main()
{
	string t;
	while (cin>>t) {
		Solution s(t);
		cout<<s.romanToInt(t)<<endl;
	}	
	return 0;
}
