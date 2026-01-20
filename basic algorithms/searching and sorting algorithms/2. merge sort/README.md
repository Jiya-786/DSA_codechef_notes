# Complete implementation:
```c
void merge(int* a,int left,int mid,int right){
    int i,j,k;
    i=left;j=mid+1;k=left;
	int c[right+1];
	while(i<=mid && j<=right){
	    if(a[i]>a[j]){
	        c[k]=a[j];
	        k++;j++;
	    }
	    else{
	        c[k]=a[i];
	        k++;i++;
	    }
	}
	while(i<=mid){
	    c[k]=a[i];
	    k++;i++;
	}
	while(j<=right){
	    c[k]=a[j];
	    k++;j++;
	}
	for(int i=left;i<=right;i++){        //not i=0 write i=left
	    a[i]=c[i];
	}
    
}

void mergeSort(int *arr, int left, int right) {
    // Write your code here
    /*while*/ if(left<right){
        int middle=(left+right)/2;
        mergeSort(arr,left,middle);
        mergeSort(arr,middle+1,right);
        merge(arr,left,middle,right);
    }
}
```




<img width="1454" height="1939" alt="image" src="https://github.com/user-attachments/assets/d069cf14-dfa9-43b3-ad10-25527d1f9c5f" />
<img width="1505" height="2007" alt="image" src="https://github.com/user-attachments/assets/944459c8-1049-4762-a352-cf1da27442a4" />
<img width="1502" height="2003" alt="image" src="https://github.com/user-attachments/assets/19555c23-6ef2-4ddd-aadd-2a305ea5dadd" />





