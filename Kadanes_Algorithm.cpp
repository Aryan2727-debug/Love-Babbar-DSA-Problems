#include <iostream>

using namespace std;
int maxSumSubArray(int arr[],int n){
    int maxSum=0;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum=currSum+arr[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum sum of the Sub-Array is = "<<maxSumSubArray(arr,size);
    return 0;
}