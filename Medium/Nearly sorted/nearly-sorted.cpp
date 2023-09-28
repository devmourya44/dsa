//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int k){
        
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> result;
        
        for(int i=0;i<=k;i++){
            pq.push(arr[i]);
        }
        for(int i=k+1;i<n;i++){
            result.push_back(pq.top());
            pq.pop();
            pq.push(arr[i]);
        }
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends