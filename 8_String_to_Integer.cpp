#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
	int max_int = 2147483647;
	int min_int = -max_int-1;
	if (s=="") return 0;
	while (s[0] != '+' && s[0] != '-' && !isdigit(s[0]))
	{
		if (s[0]!=' ')
			while (s[0]!=' ')
			{
				s.erase(0, 1);
				if (s.length() == 0) return 0;
			}				
		else s.erase(0, 1);
		if (s.length() == 0) return 0;
	}		
	bool flag = 0;
	if (s[0]=='-')
	{
		s.erase(0,1);
		flag = 1;
	}
	else if (s[0] == '+') s.erase(0,1);
	long long ans = 0;
	while (s.length() > 0)
	{
		if (!isdigit(s[0])) break;
		int t = s[0] - '0';
		ans = ans * 10 + t;
		s.erase(0, 1);
		if (ans > max_int || ans < min_int) break;
	}
	if (flag == 1) ans = -ans;
	if (ans>max_int) ans = max_int;
	if (ans<min_int) ans = min_int;
	return ans;
}
int main()
{
	string s;
	cin>>s;
	cout<<myAtoi(s)<<endl;
	return 0;
}
