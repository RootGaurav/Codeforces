#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,x=0;
    bool flag=true;
	cin>>t;
	while(t--)
	{
        x=0;
	    cin>>n;
        flag=true;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(flag)
            {
                x+=k;
                flag=!flag;
            }
            else{
                x-=k;
                flag=!flag;
            }

        }
        cout<<x<<endl;
	    
	}
	
}
