#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string str1;
    string str2;
    char ch[26];
    char ch1[26];
    char ch2[26];
    while(true){
        getline(cin, str1);
        getline(cin, str2);
        memset(ch, 0, sizeof(ch));
        memset(ch1, 0, sizeof(ch1));
        memset(ch2, 0, sizeof(ch2));
        for(int i = 0; i < str1.size(); i++){
            ch1[str1[i]-'a']++;
        }
        for(int i = 0; i < str2.size(); i++){
            ch2[str2[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(ch1[i] > ch2[i]){
                ch[i] = ch2[i];
            }
            else{
                ch[i] = ch1[i];
            }
            if(ch[i])cout << char(ch[i]+'a');
        }
        cout << endl;
        str1.clear();
        str2.clear();
    }
}