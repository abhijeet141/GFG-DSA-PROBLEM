//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
          int a[1000],i=0,aq=0,max = INT_MIN;
        int count = 0;
        while(n>0){
            if(n==0){
                return 0;
            }
            if(n%2!=0){
                count++;
                n = n>>1;
                if(n%2==0){
                    a[i] = count;
                    i = i+1;
                    aq = aq + 1;
                    count=0;
                }
            }
            else{
                n = n>>1;
            }
        }
        for(int i=0;i<aq;i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        return max;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends