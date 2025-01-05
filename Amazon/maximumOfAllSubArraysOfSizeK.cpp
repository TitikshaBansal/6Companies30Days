// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        vector<int> ans;
        deque<int> dq; 
        for(int i = 0; i < k; i++) {
            while(!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        for(int i = k; i < arr.size(); i++) {
            while(!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            while(!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};
