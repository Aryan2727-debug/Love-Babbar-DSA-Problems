#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;                        //a = first term
    cout<<"Enter the 1st term"<<endl;
    cin>>a;
    int c;                          //c = common difference
    cout<<"Enter the common difference"<<endl;
    cin>>c;
    int b;                        //b = number to check
    cout<<"Enter the element you want to check"<<endl;
    cin>>b;
    int AP[20];
    cout<<"The Arithmetic Progression is"<<endl;
    for(int i=1;i<=20;i++){
        AP[i]=a+(i-1)*c;
        cout<<AP[i]<<" ";
    }
    cout<<endl;
    if(binary_search(AP,AP+20,b)){
        cout<<b<<" is present in the A.P."<<endl;
    }else{
        cout<<b<<" is not present in the A.P."<<endl;
    }
    return 0;
}