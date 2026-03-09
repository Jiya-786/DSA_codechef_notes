[main (1).cpp](https://github.com/user-attachments/files/25333847/main.1.cpp)
#include <iostream>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr){
    int n=arr.size();
    
    // //checking for negatives
    // bool negative=false;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         negative=true;
    //         break;
    //     }
    // }
    
    // //removing negatives if any 
    // if(negative){
    //     int min_neg=0;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]<min_neg){
    //             min_neg=arr[i];
    //         }
    //     }
        
    //     for(int i=0;i<n;i++){
    //         arr[i]=arr[i]-min_neg;
    //     }
    // }
    
    //create count array 
    int minVal=arr[0];int maxVal=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minVal){
            minVal=arr[i];
        }
        else if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    
    vector<int> count(maxVal-minVal+1,0);
    
    //store freq
    for(int i=0;i<n;i++){
        count[arr[i]-minVal]++;
    }
    
    //prefix sums (cumulative count)
    for(int i=1;i<count.size();i++){
        count[i]+=count[i-1];
    }
    
    //build output array
    //we build the output array from the end to preserve stability
    //the values in prefix sum give us the last index where that elt will go
    vector<int> output(n);
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]-minVal]-1]=arr[i];
        count[arr[i]-minVal]--;
    }
    
    //copy back to og array
    //we dont add back minval to the arr elts cuz we never subtracted
    //it we only used it by subtracting for index referencing not actually
    //changing values
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
    
}
