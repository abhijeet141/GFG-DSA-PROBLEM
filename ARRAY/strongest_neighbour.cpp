//Initial Template for C++

// CPP code to find maximum of 
// all subarray of size two
#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int, int[]);


 // } Driver Code Ends
//User function Template for C++

// Function to find maximum for every adjacent pairs in the array.
void maximumAdjacent(int n, int arr[]){
    for(int i=0;i<n-1;i++){
        int res = max(arr[i],arr[i+1]);
        cout<<res<<" ";
    }
     
}

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
	    
	    maximumAdjacent(sizeOfArray, arr);
	    cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends