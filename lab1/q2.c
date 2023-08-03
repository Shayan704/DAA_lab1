// Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array 
// is another array prefixSum[] of the same size, such that the value of prefixSum[i] is 
// arr[0] + arr[1] + arr[2] . . . arr[i].

#include<stdio.h>

void prefixSum(int arr[], int n){
    int sum = 0;
    int prefix[n];
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        prefix[i] = sum;
    }
    
    // displaying the prefix array
    for(int i = 0; i < n; i++){
        printf("%d ",prefix[i]);
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
    prefixSum(arr, n);
    return 0;
}