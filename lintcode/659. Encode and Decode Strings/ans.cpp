class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        // write your code here
        string result = "";
        for (string s : strs) {
            result += s;
            result.push_back(':');
            result.push_back(';');
        }
        return result;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
        vector<string> result;
        int lastNull = -1;
        string cur;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == ':' && str[i+1] == ';') {
                ++i;
                if(cur.size() != 0)
                    result.push_back(cur);
                cur.clear();
            }
            else
                cur.push_back(str[i]);
        }
        return result;
    }
};
