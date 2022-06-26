#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int divideWithoutOperator(int dividend,int divisor){
    
    int sign=((dividend<0) ^ (divisor<0)) ? -1:1;
    
    dividend=abs(dividend);
    divisor=abs(divisor);
    
    int quotient=0;
    
    while(dividend>=divisor){
        dividend = dividend-divisor;
        ++quotient;
    }
    
    return quotient*sign;
}
int main()
{
    int a;
    int b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a;
    cin>>b;
    int result=divideWithoutOperator(a,b);
    cout<<a<<" / "<<b<<" = "<<result;
    return 0;
}