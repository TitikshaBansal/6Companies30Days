class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string result = "";
        stack<int> st;
        int num = 1; 
        
        for (char ch : S) {
            st.push(num++);
            if (ch == 'I') {
                while (!st.empty()) {
                    result += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while (!st.empty()) {
            result += to_string(st.top());
            st.pop();
        }
        
        return result;
    }
};
