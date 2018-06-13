#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";
        if (strs.size() == 0)  //很重要，有可能vector长度为0或者1，那样下面的循环会越界
			return lcp;
        else
			if (strs.size() == 1)
				return strs[0];
        for (int j=0; j<strs[0].length(); j++) {
			for (int i=1; i<strs.size(); i++) {
				if (j >= strs[i].length())
					return lcp;
				if (strs[0][j] != strs[i][j])
					return lcp;
			}
			lcp += strs[0][j];
		}
        return lcp;
    }
};

int main() {
	int n;
	cin>>n;
	vector<string> group;
	for (int i=0; i<n; i++) {
		string s;
		cin>>s;
		group.push_back(s);
	}
	Solution sl;
	cout<<sl.longestCommonPrefix(group)<<endl;
	return 0;
}
