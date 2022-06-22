#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int fact=1;
int factorial(int x){
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"Enter the number you want to find the Factorial of"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"The factorial of "<<n<<" is = "<<ans<<endl;
    return 0;
}