#include<iostream>
using namespace std;

int main()
{
    double sum=0;
    double x;
    cout << "Enter x:";
    cin >> x;
    while(x!=0){
        if(x>0){
            sum+=x;
        }
        cout << "Enter x:";
        cin >> x;
    }
    cout << "sum = "<<sum;
    return 0;
}