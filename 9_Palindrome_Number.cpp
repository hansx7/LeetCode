#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long ans=0;
        int y=x;
        //bool flag=0;
        if (x<0) 
		{
			return false;
		}
        while (x%10==0)
        {
        	x/=10;
        	if (x==0)
			{
				ans=0;
				break;
			}
        }
        while (x>0)
        {
        	ans=ans*10+x%10;
        	x/=10;
        }
        //if (flag) ans=-ans;
        if (ans-y==0) return true; else return false;
    }
};
int main()
{
	long a;
	while (cin>>a)
	{
		Solution s;
		cout<<s.isPalindrome(a)<<endl;
	}
	return 0;
}
