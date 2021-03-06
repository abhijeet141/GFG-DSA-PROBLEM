//Initial Template for C++
#include<iostream> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       int count = 1, res = 1;
       for(int i=0;i<n;i++){
           count = 1;
           for(int j = i + 1;j<n;j++){
               if((arr[j]%2==0 && arr[j - 1]%2!=0) || (arr[j]%2!=0 && arr[j - 1]%2==0)){
                   count++;
               }
               else{
                   break;
               }
           }
           res = max(res,count);
       }
       return res;
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends