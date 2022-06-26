#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void printAllSubsequences(string input,string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    
    printAllSubsequences(input.substr(1),output+input[0]);
    
    printAllSubsequences(input.substr(1),output);
}
int main()
{
    string input="abc";
    string output="";
    printAllSubsequences(input,output);
    return 0;
}