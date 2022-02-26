#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct alpha {
    char bch = 0;
    char sch = 0;
    int times = 0;
};

vector <alpha> arr(28);

void initArray() {
    arr[1].bch = 'A';
    arr[1].sch = 'a';
    arr[2].bch = 'B';
    arr[2].sch = 'b';
    arr[3].bch = 'C';
    arr[3].sch = 'c';
    arr[4].bch = 'D';
    arr[4].sch = 'd';
    arr[5].bch = 'E';
    arr[5].sch = 'e';
    arr[6].bch = 'F';
    arr[6].sch = 'f';
    arr[7].bch = 'G';
    arr[7].sch = 'g';
    arr[8].bch = 'H';
    arr[8].sch = 'h';
    arr[9].bch = 'I';
    arr[9].sch = 'i';
    arr[10].bch = 'J';
    arr[10].sch = 'j';
    arr[11].bch = 'K';
    arr[11].sch = 'k';
    arr[12].bch = 'L';
    arr[12].sch = 'l';
    arr[13].bch = 'M';
    arr[13].sch = 'm';
    arr[14].bch = 'N';
    arr[14].sch = 'n';
    arr[15].bch = 'O';
    arr[15].sch = 'o';
    arr[16].bch = 'P';
    arr[16].sch = 'p';
    arr[17].bch = 'Q';
    arr[17].sch = 'q';
    arr[18].bch = 'R';
    arr[18].sch = 'r';
    arr[19].bch = 'S';
    arr[19].sch = 's';
    arr[20].bch = 'T';
    arr[20].sch = 't';
    arr[21].bch = 'U';
    arr[21].sch = 'u';
    arr[22].bch = 'V';
    arr[22].sch = 'v';
    arr[23].bch = 'W';
    arr[23].sch = 'w';
    arr[24].bch = 'X';
    arr[24].sch = 'x';
    arr[25].bch = 'Y';
    arr[25].sch = 'y';
    arr[26].bch = 'Z';
    arr[26].sch = 'z';

}

//times++ if and only if char a is an alphabet.
void InArray(char a) {
    for (int i = 0; i < arr.size(); i++) {
        if (a == arr[i].bch || a == arr[i].sch) {
            arr[i].times++;
        }
    }
}

bool rule(alpha a, alpha b) {
    if (a.times != b.times) {
        return a.times > b.times;
    }
    else {
        return a.bch < b.bch;
    }
}

int main() {
    initArray();
    int am, alength;
    cin >> am;
    cin.ignore();
    string a;    
    while (am--) {
        getline(cin, a, '\n');
        alength = a.size();
        for (int i = 0; i < alength; i++) {
            InArray(a[i]);
        }
        a.clear();
    }
    sort(arr.begin(), arr.end(), rule);

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].times > 0) {
            cout << arr[i].bch << " " << arr[i].times << endl;
        }
    }
}