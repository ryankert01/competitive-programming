class TrieNode{
public:
    unordered_map<char,TrieNode*>children;
    bool endOfWord = false;
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode;
    }
    
    void insert(string word) {
        TrieNode* cur = root;
        
        for(auto i : word)
        {
            if(cur->children.find(i) == cur->children.end())
                cur->children[i] = new TrieNode;      
            cur = cur->children[i];
        }
        cur->endOfWord = true;
    }
    
    bool search(string word) {
        TrieNode* cur = root;
        
        for(auto i : word)
        {
            if(cur->children.find(i) == cur->children.end())
                return false;     
            cur = cur->children[i];
        }
        
        return cur->endOfWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = root;
        
        for(auto i : prefix)
        {
            if(cur->children.find(i) == cur->children.end())
                return false;  
            cur = cur->children[i];
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
