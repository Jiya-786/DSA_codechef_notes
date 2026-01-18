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