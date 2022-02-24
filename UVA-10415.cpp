#include<iostream>
#include<string>
#include<cstring>
#include<unordered_map>
#include<vector>
using namespace std;

struct Saxophone{
    char note;
    bool fingers[10];
}    const v[14] = {{'a', {0,1,1,0,0,0,0,0,0,0}},
                    {'b', {0,1,0,0,0,0,0,0,0,0}},
                    {'c', {0,1,1,1,0,0,1,1,1,1}},
                    {'d', {0,1,1,1,0,0,1,1,1,0}},
                    {'e', {0,1,1,1,0,0,1,1,0,0}},
                    {'f', {0,1,1,1,0,0,1,0,0,0}},
                    {'g', {0,1,1,1,0,0,0,0,0,0}},
                    {'A', {1,1,1,0,0,0,0,0,0,0}},
                    {'B', {1,1,0,0,0,0,0,0,0,0}},
                    {'C', {0,0,1,0,0,0,0,0,0,0}},
                    {'D', {1,1,1,1,0,0,1,1,1,0}},
                    {'E', {1,1,1,1,0,0,1,1,0,0}},
                    {'F', {1,1,1,1,0,0,1,0,0,0}},
                    {'G', {1,1,1,1,0,0,0,0,0,0}}
                    };

int main(){
    int t;
    cin >> t;
    cin.ignore();
    
    while(t--){
        string song;
        getline(cin, song);
        int note, lastNote;
        int fin[10] = {};
        for(int a = 0; a < song.size();a++){
            note = int(song[a] > 88 ? song[a] - 'a' : song[a] - 'A' +7);
            if(a == 0) for(int i = 0; i < 10; i++) fin[i] = v[note].fingers[i];
            else{
                for(int i = 0; i < 10; i++) fin[i] += v[note].fingers[i] > v[lastNote].fingers[i] ? 1:0;
            }
            lastNote = note;
        }
        for(int i = 0; i < 10; i++){
            cout << fin[i];
            if(i != 9)cout << " ";
        } 
        cout << endl;
    }
}