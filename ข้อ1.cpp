#include<iostream>
#include<string>
using namespace std;

int main()
{
    double GPA;
    string name;
    cout << "What is your name?:";
    cin >> name;
    cout << "What is your GPA?:";
    cin >> GPA;
    if(GPA>=3.50){
        cout << name << " Inw Jrim Jrim ! ! !";
    }else{
        cout << "Try harder, " << name << "! ! !";
    }
    return 0;
}