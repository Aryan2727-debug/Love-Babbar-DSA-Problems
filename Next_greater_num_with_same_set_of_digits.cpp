#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}

//function used to find the next greater number using the same digits
void findNext(char number[],int n){
    
    int i;
    int j;
    /* 1) start from the rightmost side of the Array and find the element
          which is smaller than the element next to it */
    for(i=n-1;i>0;i--){
        if(number[i]>number[i-1]){
            break;
        }
    }
    
    /* if no such element is found, then the digits are in descending in order,
       so its not possible to find next number */
    if(i==0){
        cout<<"Finding next greater number is not possible"<<endl;
        return;
    }
    
    /* 2) now find the smallest digit on the right side of that element which 
          is greater than that element */
    
    int x=number[i-1];      //x = element we found in step 1
    int smallest=i;        //smallest = the smallest digit we are trying to find
    for(j=i+1;j<n;j++){
        if(number[j]>x && number[j]<number[smallest]){
            smallest=j;
        }
    }
    
    // 3) swap the above found smallest digit with the number[i-1]
    swap(&number[smallest] , &number[i-1]);
    
    // 4) sort the digits after number[i-1] in ascending order
    sort(number+i,number+n);
    
    cout<<"The next greater number with the same set of digits is = "<<number<<endl;
    
    return;
}
int main()
{
    char digits[]="534976";
    int n=strlen(digits);
    findNext(digits,n);
    return 0;
}