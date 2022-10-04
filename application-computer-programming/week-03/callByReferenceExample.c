#include <stdio.h>

// Bubble sort
void sorting(int* arr, int len) {
    for (int k=0; k < len-1; k++)
        for (int z=0; z < len-k-1; z++)
            if (arr[z] > arr[z+1]) {
                int temp = arr[z];
                arr[z] = arr[z+1];
                arr[z+1] = temp;
            }
}

int main() {
    int numArr[] = { 5, 4, 3, 2, 1 };
    int arrSize = sizeof(numArr) / sizeof(numArr[0]);
    
    printf("Before:\t");
    for (int k=0; k < arrSize; k++) printf("%d ", numArr[k]);
    
    sorting(numArr, arrSize); // call-by-reference
    
    printf("\nAfter:\t");
    for (int k=0; k < arrSize; k++) printf("%d ", numArr[k]);
    return 0;
}