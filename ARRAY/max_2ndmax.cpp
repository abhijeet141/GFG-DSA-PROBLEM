//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    int largest(int a[], int n){
        int max1 = INT_MIN;
        for(int i=0;i<n;i++){
            if(max1<a[i]){
                max1 = a[i];
            }
        }
        return max1;
    }
    
    int second_largest(int a[], int n){
        int res = -1,largest = 0;
        for(int i=0;i<n;i++){
            if(a[i]>a[largest]){
                res = largest;
                largest = i;
            }
            else if(a[i]!=a[largest]){
                if(res==-1 || a[i]>a[res]){
                    res = i;
                }
            }
        }
        if(res == -1){
            return -1;
        }
        else{
            return a[res];
        }
    }
    
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = largest(arr, sizeOfArray);
        int second_max = second_largest(arr, sizeOfArray);
        vector<int> ans = {max,second_max};
        return ans;
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends