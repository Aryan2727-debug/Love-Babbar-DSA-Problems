#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

//function to find the minimum of 3 numbers
int min(int x,int y,int z){
    return min(min(x,y),z);
}

int editDistance(string str1,string str2,int m,int n){
    
    //m = length of str1
    //n = length of str2
    
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }
    
    /* if last 2 characters of strings are same, nothing much 
       to do. Ignore last characters and get count for remaining 
       strings */
       
       if(str1[m-1]==str2[n-1]){
           return editDistance(str1,str2,m-1,n-1);
       }
    
    // in other cases, return every possibility for both strings //
    
    return 1 + min(editDistance(str1,str2,m-1,n) , editDistance(str1,str2,m,n-1) , editDistance(str1,str2,m-1,n-1));
}
int main()
{
    string str1="sunday";
    string str2="saturday";
    cout<<editDistance(str1,str2,str1.length(),str2.length());
    return 0;
}