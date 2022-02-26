#include <iostream>
#include <string>
using namespace std;

struct v {
    int ascii;
    int count;
};

void swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void sort(v* v1) {
    //bubble sort
    for (int i = 0; i < 96; i++)
    {
        for (int j = 0; j < 95; j++)
        {
            //maybe should use linked list technique, but I don't know how to use that
            if (v1[j].count > v1[j + 1].count)
            {
                swap(v1[j].count, v1[j + 1].count);
                swap(v1[j].ascii, v1[j + 1].ascii);
            }
            else if (v1[j].count == v1[j + 1].count && v1[j].ascii < v1[j + 1].ascii)
            {
                swap(v1[j].count, v1[j + 1].count);
                swap(v1[j].ascii, v1[j + 1].ascii);
            }
        }
    }
}

void print(v* v1) {
    for (int i = 0; i < 96; i++)
    {
        if (v1[i].count != 0)
        {
            cout << v1[i].ascii << " " << v1[i].count;
            cout << endl;
        }
    }
}

int main()
{
    int check = 0;
    string str;
    while (getline(cin, str))
    {
        if(check)
            cout << endl;
        check = 1;
        v* v1 = new v[96]();
        //range in 32~127
        for (int i = 0; i < 96; i++)
        {
            v1[i].ascii = i + 32;
        }
        //assign count
        for (int i = 0; i < str.length(); i++)
        {
            v1[str[i] - 32].count++;
        }
        sort(v1);
        print(v1);
        delete[] v1;
    }

}