#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	unsigned int even_bit = n & 0xAAAAAAAA;
    	unsigned int odd_bit = n & 0x55555555;

    	even_bit = even_bit>>1;
    	odd_bit = odd_bit<<1;
    	return(even_bit | odd_bit);
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n

		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends