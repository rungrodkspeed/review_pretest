#include<iostream>
#include<string>
using namespace std;

string compass(string s)
{
    int a=s.size();
    int i=0;
    while(i<a){
        cout << s[i];
        i+=3;
    }
    
}

int main()
{
    string a;
    cin >> a;
    compass(a);
    return 0;
}