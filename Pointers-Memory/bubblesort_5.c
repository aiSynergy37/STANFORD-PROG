#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>
/************************************
 * One call back function for each
 * ranking mechanism
 *************************/



int compare(const void* a, const void* b){
        int A = *((int *)a);
        int B = *((int *)b);
        return A-B;
        // return B- A;
        // return abs(A) - abs(B);
}


void BubbleSort(int *A, int n, int (*compare)(int, int)){
        int i, j, temp;
        for (i = 0; i < n; i++){
                for (j = 0; j < n-1; j++){
                        if (compare(A[j], A[j+1]) == 1){
                                // Compare A[j] and A[j+1] and swap if needed
                                temp = A[j];
                                A[j] = A[j+1];
                                A[j+1] =  temp;
                        }
                }
        }
}

int main(){
        int i, A[] = {-31, 22, -1, 50, -6, 4};
        // BubbleSort(A, 6, abs_compare);

        qsort(A, 6, sizeof(int), compare);
        for (i = 0; i  < 6; i++){
                printf("%d ", A[i]);
        }
        printf("\n");
}
