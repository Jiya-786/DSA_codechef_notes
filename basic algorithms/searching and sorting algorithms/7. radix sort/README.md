// here we used counting sort inside each iteration of radix sort
#include <iostream>
#include <vector>
using namespace std;

void countingSortByDigit(vector<int>& arr,int exp){
    int n=arr.size();
    int count[10]={0};
    
    //freq of digits
    for(int i=0;i<n;i++){
        int digit=(arr[i]/exp)%10;
        count[digit]++;
    }
    
    //prefix sums
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    
    //build output(from end for stability)
    vector<int> output(n);
    for(int i=n-1;i>=0;i--){
        int digit=(arr[i]/exp)%10;       //we find which place this number belongs
        output[count[digit]-1]=arr[i];
        count[digit]--;
    }
    
    //copy back
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
    
}

void radixSort(vector<int>& arr){
    int maxVal=arr[0];
    for(int x:arr){
        if(x>maxVal) maxVal=x;
        
    for(int exp=1;maxVal/exp>0;exp*=10){
        countingSortByDigit(arr,exp);
    }
    }
}
