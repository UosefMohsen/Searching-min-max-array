#include <stdio.h>

int main() {
    while(1){
    int arr_1[5];
    int i, x;
    printf("Enter 5 numbers:\n");  // hit enter after each number
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr_1[i]);
    }

    printf("\nElements in arr_1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }

    // Find the maximum number and its index in arr_1
    int max = arr_1[0];
    int max_index = 0;
    for (i = 0; i < 5; i++) {
        if (arr_1[i] > max) {
            max = arr_1[i];
            max_index = i;
        }
    }
    printf("\nMaximum number is %d, Index: %d\n", max, max_index);

    // Find the minimum number and its index in arr_1
    int min = arr_1[0];
    int min_index = 0;
    for (i = 0; i < 5; i++) {
        if (arr_1[i] < min) {
            min = arr_1[i];
            min_index = i;
        }
    }
    printf("Minimum number is %d, Index: %d\n", min, min_index);

    printf("if you wanna exit type 0, if you wanna continue type 1\n");
    scanf(" %d", &x);
    if (x == 0)
        break;
    }
    return 0;
}
