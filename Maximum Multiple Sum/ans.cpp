#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int maxi=0,currmaxi=0,currsum=0;
	    for(int i=2;i<=n;i++)
	    {
            currsum=0;
	        for(int j=i;j<=n;j++)
	        {
	            if(j%i==0) currsum+=j;
	            if(currsum>=currmaxi)
	            {
	                currmaxi=currsum;
	                maxi=i;
	            }
	        }
	    }
	    cout<<maxi<<endl;
	}

	return 0;
}