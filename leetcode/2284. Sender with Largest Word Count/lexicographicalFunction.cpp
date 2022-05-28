class Solution {
public:
    int compareTo(string a, string b)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] < 93 && b[i] > 93)return -1;
            else if (a[i] > 93 && b[i] < 93)return 1;
            else if (a[i] < b[i]) return -1;
            else if (a[i] > b[i]) return 1;
        }
        return 0;
    }
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
            else if(i.second == m && compareTo(ms,i.first) < 0)
            {
                m = i.second;
                ms = i.first;
            }
        }
        return ms;
    }// lexicographically largest name.!!!!!!!!!!!!!!!
    
    

};
