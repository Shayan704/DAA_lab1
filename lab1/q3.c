#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, count, max_count, most_repeating_element;
    int *array = NULL;

    printf("Enter how many numbers you want to read : ");
    scanf("%d", &n);

    array = (int *)malloc(sizeof(int) * n);
    printf("Enter array elements : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    count = 0;
    max_count = 0;
    most_repeating_element = -1;
    for (i = 0; i < n; i++) {
        int temp = array[i];
        count = 0;
        for (int j = 0; j < n; j++) {
        if (array[j] == temp) {
            count++;
        }
        }
        if (count > max_count) {
        max_count = count;
        most_repeating_element = temp;
        }
    }

    printf("No. of duplicates :  %d\n", max_count);

    printf("Most Repeating : %d\n", most_repeating_element);
    free(array);
    
    return 0;
}