class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int>mp;
        int s = messages.size();
        int m = INT_MIN,cs;
        string ms;
        for(int i = 0; i < s; i++)
        {
            cs = 1;
            for(char& j : messages[i])
                if(j == ' ')cs++;
            mp[senders[i]] += cs;
        }
        for(auto i : mp)
        {
            if(i.second > m)
            {
                m = i.second;
                ms = i.first;
            }
            else if(i.second == m && ms.compare(i.first) < 0)
            {
                m = i.second;
                ms = i.first;
            }
        }
        return ms;
    }// lexicographically largest name.!!!!!!!!!!!!!!!

};
