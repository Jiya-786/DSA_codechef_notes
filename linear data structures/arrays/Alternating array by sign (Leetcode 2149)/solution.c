// THIS SOLN IS TIME O(n) AND SPACE O(n)

#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int* positive=(int*)malloc((n/2)*sizeof(int));
    int* negative=(int*)malloc((n/2)*sizeof(int));
    int count1=0;
    int count2=0;
   for(int i=0;i<n;i++){
       if(arr[i]>0){
           positive[count1]=arr[i];
           count1++;
       }
       else{
           negative[count2]=arr[i];
           count2++;
       }
   }
   
/* int pointer=0;
   for(int i=0;i<n;i+=2){
      arr[i]=positive[pointer];
      arr[i+1]=negative[pointer];
      pointer++;
    }      
    
    cleaner way would be the following for loop-   */
   
   for(int i=0;i<n/2;i++){
       printf("%d %d ",positive[i],negative[i]);
   }
   printf("\n");
   
   free(positive);
   free(negative);
}


/* WE CAN ALSO WRITE ANOTHER SOLN WITH TIME O(n^2) AND SPACE O(1)
   Core O(1) idea- 
     When a number is in the wrong position:
     Look ahead to find a number with the correct sign
     Bring it here
     While doing so, do not change order → so we shift, not swap */
     
/* eg:
   arr = [-1, -2, 3, 4]
   Step 1 — Start at index 0 (even → needs positive)
            i = 0
            arr[i] = -1 (wrong, need positive)
   Look ahead for next positive → found 3 at index j = 2
   Save it:
        temp = 3
   Shift elements between i and j-1 to the right:

        k = 2 → arr[2] = arr[1] → arr = [-1, -2, -2, 4]
        k = 1 → arr[1] = arr[0] → arr = [-1, -1, -2, 4]

    Insert temp at i:
            arr[0] = 3
            Array now: [3, -1, -2, 4]
            
    ✅ Step 1 done

    Step 2 — Index 1 (odd → needs negative)
             i = 1
             arr[1] = -1 (correct)
    No action needed. Move on.

    Step 3 — Index 2 (even → needs positive)
             i = 2
             arr[2] = -2 (wrong)

    Look ahead → next positive = 4 at index j = 3
                 Save temp:
                 temp = 4

    Shift elements between i and j-1:
            k = 3 → arr[3] = arr[2] → arr = [3, -1, -2, -2]

    Insert temp at i:
            arr[2] = 4
            Array now: [3, -1, 4, -2]

        ✅ Step 3 done

    Step 4 — Index 3 (odd → needs negative)
             i = 3
             arr[3] = -2 (correct)

    No action needed.

    Final Result: [3, -1, 4, -2]     */


#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        /* Even index  → need positive
           Odd index   → need negative
        */
        if ((i % 2 == 0 && arr[i] < 0) ||
            (i % 2 == 1 && arr[i] > 0)) {
                int j = i + 1;
            // find next element with correct sign
            while (j < n) {
                if ((i % 2 == 0 && arr[j] > 0) ||
                    (i % 2 == 1 && arr[j] < 0)) {
                         break;
                }
                j++;
            }

            // store the correct element
            int temp = arr[j];

            // shift elements right to preserve order
            for (int k = j; k > i; k--) {
                arr[k] = arr[k - 1];
            }

            // place element at correct position
            arr[i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

