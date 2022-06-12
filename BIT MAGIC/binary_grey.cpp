//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        int ans,grey;
        ans = n>>1;
        grey = n^ans;
        return grey;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}
  // } Driver Code Ends