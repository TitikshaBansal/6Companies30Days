class Solution {
  public:
    string encode(string s) {
        string encoded = ""; 
        int n = s.size();
        if (n == 0) return encoded; 
        char currentChar = s[0];
        int count = 1;
        
        for (int i = 1; i < n; i++) {
            if (s[i] == currentChar) count++;
            else {
                encoded += currentChar + to_string(count);
                currentChar = s[i];
                count = 1;
            }
        }
        encoded += currentChar + to_string(count);
    
        return encoded;
    }
};
