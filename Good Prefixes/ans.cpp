#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
        vector<int> arr(n);
        int sum=0,c=0;
	    for(int i=0;i<n;i++)
	    {
            cin>>arr[i];
            
	    }
        for(int i=0;i<n;i++)
	    {
            sum+=arr[i];
            int max_element = max(max_element, arr[i]);
            if (sum - max_element == max_element) {
            c++;
            
	    }
        }

	    cout<<c<<endl;
	}

	return 0;
}