// Write a function to ROTATE_RIGHT(p1, p2 ) right an array for first p2 elements by 1 
// position using EXCHANGE(p, q) function that swaps/exchanges the numbers p & q. 
// Parameter p1 be the starting address of the array and p2 be the number of elements to be 
// rotated.  

#include<stdio.h>

void reverse(int * arr, int start, int end){
    int left = start;
    int right = end;

    while(left <= right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void rotate(int arr[], int start, int end, int m){
    reverse(arr,start,end);
    reverse(arr,start,end-m);
    reverse(arr,end-m+1,end);

    printf("After rotation : ");
    for(int i = 0; i <= end; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int source;
    printf("Enter the start point of the array for rotation : ");
    scanf("%d",&source);

    int m;
    printf("Enter the number of times you want to rotate : ");
    scanf("%d",&m);

    rotate(arr,source,n-1,m);
    return 0;
}