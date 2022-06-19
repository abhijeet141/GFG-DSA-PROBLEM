#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    int max_subarray_sum(int arr[], int num){
        int res = arr[0],  max_ending = arr[0];
        for(int i=1;i<num;i++){
            max_ending = max(max_ending+arr[i], arr[i]);
            res = max(res, max_ending);
        }
        return res;
    }

    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        if(num==1){
            return arr[0];
        }
        int subarray_sum = max_subarray_sum(arr, num);
        if(subarray_sum<0){
            return subarray_sum;
        }
        int sum = 0;
        for(int i=0;i<num;i++){
            sum += arr[i];
            arr[i] = -arr[i];
        }
        int max_circular = sum + max_subarray_sum(arr, num);
        return max(max_circular, subarray_sum);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends