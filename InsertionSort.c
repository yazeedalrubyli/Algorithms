#include <stdio.h>


void insertionSort(int A[], int n){
    int j,i,key;
    for (j = 1; j < n; ++j) {
        key = A[j];
        i = j-1;
        while (j>0 && A[i] > key){
            A[i+1] = A[i];
            i = i-1;
        }
        A[i+1] = key;
    }
}

void printA(int A[], int n){
    int i;
    n = n-1;
    for (int i = 0; i < n; ++i) {
        printf("%d ~> ", A[i]);
    }
    printf("%d", A[n]);
}

int main()
{
    int A[] = { 5, 2, 4, 6, 1, 3 };
    int n = sizeof(A) / sizeof(A[0]);

    insertionSort(A, n);
    printA(A, n);

    return 0;
}