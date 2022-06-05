class TextEditor {
public:
    string s,t;
    TextEditor() {
        s = t = "";
    }
    
    void addText(string text) {
        s+=text;
    }
    
    int deleteText(int k) {
        if(k > s.size())k=s.size();
        for(int i = 0;i < k; i++)
            s.pop_back();
        return k;
    }
    
    string cursorLeft(int k) {
        if(k > s.size())k=s.size();
        for(int i = 0; i < k; i++)
        {
            t.push_back(s.back());
            s.pop_back();
        }
        int a = min(10,int(s.size()));
        return s.substr(int(s.size()-a), a);
    }
    
    string cursorRight(int k) {
        if(k > t.size())k=t.size();
        for(int i = 0; i < k; i++)
        {
            s.push_back(t.back());
            t.pop_back();
        }
        int a = min(10,int(s.size()));
        return s.substr(int(s.size()-a), a);
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */
