#include<iostream>
#include<cmath>
using namespace std;

double sumsqrt(double x){
    double sum=0;
    int i=1;
    while(i<=x){
        sum+=1/sqrt(i);
        i++;
    }
    return sum;
}

int main ()
{
    int N;
    cout << "Enter N:";
    cin >> N;
    cout << "sum = "<<sumsqrt(N);
    return 0;
}