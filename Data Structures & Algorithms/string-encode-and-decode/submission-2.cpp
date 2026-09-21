class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string& s : strs) {
            res += to_string(s.size()) + ':' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            // Find the colon to get the length prefix
            while (s[j] != ':') j++;

            int len = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, len);
            result.push_back(word);

            i = j + 1 + len;  // Move to start of next encoded string
        }
        return result;
    }
};
