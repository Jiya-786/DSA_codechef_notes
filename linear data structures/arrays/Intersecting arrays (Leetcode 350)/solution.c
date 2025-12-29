// //                          BRUTE FORCE

#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (((a)>(b))? (a):(b))

// int cmp(const void* a,const void* b){
//     int x=*(int*)a;
//     int y=*(int*)b;
//     if(x>y) return 1;
//     else if(x<y) return -1;
//     else return 0;
// }                          this qs dosent seem to require cmp for
//                            qsort implementation

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* answer=(int*)malloc(MAX(nums2Size,nums1Size)*sizeof(int));
    int counter=0;
    int used[nums2Size];
    for(int i=0;i<nums2Size;i++){
        used[i]=0;
    }
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j] && !used[j]){
                answer[counter]=nums1[i];
                counter++;
                used[j]=1;
                break;
            } 
        }
    }
    qsort(answer,counter,sizeof(int),cmp);
    *returnSize = counter;
    return answer;
    
}

//            FREQ ARRAY METHOD- opti

#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (((a)>(b))? (a):(b))
#define MIN(a,b) (((a)<(b))? (a):(b))

// int cmp(const void* a,const void* b){
//     int x=*(int*)a;
//     int y=*(int*)b;
//     if(x>y) return 1;
//     else if(x<y) return -1;
//     else return 0;
// }                       this qs dosent seem to require cmp for
//                         qsort implementation


int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int freq1[101]={0};
    int freq2[101]={0};
    for(int i=0;i<nums1Size;i++){
        freq1[nums1[i]]++;
    }
    for(int j=0;j<nums2Size;j++){
        freq2[nums2[j]]++;
    }
    int answer[100]={0};
    int counter=0;
    for(int val=0;val<=100;val++){
        int times=MIN(freq1[val],freq2[val]);
        for(int j=0;j<times;j++){
                answer[counter]=val;
                counter++;
            }
        }
        
    // qsort(answer,counter,sizeof(int),cmp);     
    /* no need to sort becuase val is in order 0 to 100 so answer array will also be in order */
    
    for(int i=0;i<counter;i++){
        printf("%d ",answer[i]);
    }
   
}
    
    




