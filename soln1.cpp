//https://practice.geeksforgeeks.org/problems/badefd58bace4f2ca25267ccfe0c9dc844415e90/0
// link to question

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        int n=arr.size();
        vector<int>::iterator iter;
        iter=arr.begin();
        int i=0;
        while(i<n)
        {
            if(n==1)
                return arr;
            if((arr[i]>=0 && arr[i+1]>=0) || (arr[i]<0 && arr[i+1]<0) ){
                i++;
                if(i==n-1)
                    return arr;
                n=arr.size();
            }
            else if((arr[i]>=0 && arr[i+1]<0) || (arr[i]<0 && arr[i+1]>=0))
            {
                arr.erase(iter+i,iter+i+2);
                if(i>0)
                    i--;
                n=arr.size();
            }
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends