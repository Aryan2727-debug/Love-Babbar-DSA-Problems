#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string arr[]={"aaa","bbb","aaa","ccc","aaa","bbb"};
    int count_aaa=0;
    int count_bbb=0;
    int count_ccc=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]=="aaa"){
            count_aaa++;
        }
        if(arr[i]=="bbb"){
            count_bbb++;
        }
        if(arr[i]=="ccc"){
            count_ccc++;
        }
    }
    if(count_aaa>=count_bbb && count_aaa>=count_ccc){
        cout<<"aaa occurs the maximum times i.e. = "<<count_aaa<<endl;
    }else if(count_bbb>=count_aaa && count_bbb>=count_ccc){
        cout<<"bbb occurs the maximum times i.e. = "<<count_bbb<<endl;
    }else{
        cout<<"ccc occurs the maximum times i.e. = "<<count_ccc<<endl;
    }
    return 0;
}