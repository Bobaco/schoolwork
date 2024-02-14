#include <stdio.h>
#include <string.h>


void bubble_Sort(int arr[], int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
 
        if (swapped == 0)
            break;
    }
}


void selection_Sort(int arr[], int n) {
    int i, j, min_idx;
 
    for (i = 0; i < n - 1; i++) {
 
    
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        
        if (min_idx != i){
            int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
}


void insertion_Sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void reverse_Array(int arr[], int n) {
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void sort_Array_Based_On_OS(int arr[], int n) {
    #if defined(_WIN32) || defined(_WIN64)
        bubble_Sort(arr, n);
    #elif defined(__linux__)
        selection_Sort(arr, n);
    #elif defined(__APPLE__)
        insertion_Sort(arr, n);
    #else
        reverse_Array(arr, n);
    #endif
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort_Array_Based_On_OS(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}