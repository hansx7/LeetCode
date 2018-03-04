#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
	int a[200];
	int max_length = 0;
	for (int i = 0; i < s.length(); i++){
		memset(a, 0, sizeof(a));
		int l = 0;
		for (int j = i; j < s.length(); j++){
			if (a[int(s[j])] == 0){
				a[int(s[j])] = 1;
				l++;
			}
			else break;
		}
		if (l > max_length) max_length = l;
	}
	return max_length;
} 
int main()
{
	string s;
	cin>>s;
	cout<<lengthOfLongestSubstring(s)<<endl;
	return 0;
}
