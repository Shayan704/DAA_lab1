// Write a program to find out the second smallest and second largest element stored 
// in an array of n integers. 

#include<stdio.h>
#include<limits.h>
#include<time.h>
int second_largest(int arr[], int n){
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int second_smallest(int arr[], int n){
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < second_smallest){
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int main(){

    clock_t t1, t2;
    t1 = clock();

    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int secondLargest = second_largest(arr, n);
    int secondSmallest = second_smallest(arr, n);
    
    printf("Second Largest : %d", secondLargest);
    printf("\nSecond Smallest : %d", secondSmallest);

    t2 = clock();
    double t = (double)(t2-t1) / CLOCKS_PER_SEC;
    return 0;
}