#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>
/************************************
 * One call back function for each
 * ranking mechanism
 *************************/



int abs_compare(int a, int b){
        if (abs(a) < abs(b)){
                return 1;
        }
        else {
                return -1;
        }
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
        BubbleSort(A, 6, abs_compare);
        for (i = 0; i  < 6; i++){
                printf("%d ", A[i]);
        }
        printf("\n");
}
