class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n+1, 0);
        for(int num : arr) temp[num]++;
        int A = 0, B = 0;
        for(int i=0; i<=n; i++){
            if(temp[i] > 1) A = i;
            if(temp[i] == 0) B = i;
        }
        return {A, B};
    }
};
