//               BRUTE FORCE
// TIME O(n^2) AND SPACE O(1)

#include <stdio.h>

void findLeaders(int arr[], int n) {
    if(n==0) return;
    
    for(int i=0;i<n-1;i++){
        int leader=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                 leader=0;
                 break;
            }
        }
        if (leader==1){
            printf("%d ",arr[i]);
        }
    }
    printf("%d\n",arr[n-1]);
}

/* FOR OPTIMAL SOLN WE WILL CHECK FROM RIGHT TO LEFT SND KEEP TRACK OF THE MAX ELT FOR EACH ELT IF THE MAX ON THE RIGHT IS GREATER THAN THE NUMBER ITSELF THEN IT CANNOT BE THE LEADER
   
    TIME O(n) AND SPACE O(n)     */

// 4 6 8 3 9 7
// 0 1 2 3 4 5

/* BUT THIS CODE STILL SHOWS TLE BECAUSE OF I/O BOTTLENECK   */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void findLeaders(int arr[], int n) {
        int max_elt=INT_MIN;
        int* leader=(int*)malloc(sizeof(int)*n);
        int counter=0;
        for(int i=n-1;i>=0;i++){
            if(arr[i]>max_elt){
                max_elt=arr[i];
                leader[counter]=arr[i];
                counter++;
            }
        }
        // for(int i=0;i<counter/2;i++){
        //     int temp=leader[i];
        //     leader[i]=leader[counter-i-1];
        //     leader[counter-i-1]=temp;
        // }            instead of exchanging, just print the array
        //              itself in reverse order
        for(int i=counter-1;i>=0;i--){
            printf("%d ",leader[i]);
        }
        printf("\n");
        
        free(leader);
}

