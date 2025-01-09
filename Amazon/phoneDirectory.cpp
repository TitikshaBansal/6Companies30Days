class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s) {
        vector<vector<string>> ans;

        sort(contact, contact + n);

        for (int i = 0; i < s.length(); i++) {
            vector<string> temp;
            int len = i + 1;
            string prefix = s.substr(0, len);

            for (int j = 0; j < n; j++) {
                string curr = contact[j];
                if (curr.substr(0, len) == prefix) {
                    if (temp.empty() || temp.back() != curr) temp.push_back(curr);
                }
            }
            if (temp.empty()) temp.push_back("0");
            ans.push_back(temp);
        }

        return ans;
    }
};
