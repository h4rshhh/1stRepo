void merge(int arr[],int l,int r){
    int a[r-l+1];
    int mid = (l+r)/2;

    int i = l,j = mid+1,k = 0;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            a[k] = arr[i];
            k++;
            i++;
        }
        if(arr[i]>=arr[j]){
            a[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        a[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        a[k] = arr[j];
        j++;
        k++;
    }

    for(int m = 0;m<k;m++){
        arr[l+m] = a[m];
    }

}

void mergeSort(int arr[], int l, int r) {
    if(l>=r){
        return;
    }

    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    merge(arr,l,r);   

}

int pairSum(int *arr, int n, int num){
    mergeSort(arr,0,n-1);
    int start = 0,end = n-1;
    int count = 0;

    while(start<end){
        if(arr[start]+arr[end]==num){
            if(arr[start]!=arr[end]){
                int i = start, j =end;
                while(arr[start]==arr[i]){
                    i++;
                }
                while(arr[end]==arr[j]){
                    j--;
                }
                count += (i-start)*(end-j);
                start = i;
                end = j;
            }
            else{
                int duplicates = end-start+1;
                count += (duplicates*(duplicates-1))/2;
                break;
            }

        }
        else if(arr[start]+arr[end]<num){
            start++;
        }
        else{
            end--;
        }

    } 
    return count;
	
}
