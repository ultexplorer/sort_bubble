#include <stdio.h>

void bubble_sort(int A[], int N);
void print_array(int A[], int N);

int main(){
    int A[]={9,8,7,6,5,4,3,2,1,0};
    int N=10;
    print_array(A, N);
    bubble_sort(A, N);
    print_array(A, N);

    return 0;
}

void bubble_sort(int A[], int N){
    for(int i=1; i<N; ++i){
        for(int j=1; j<N; ++j){
            if(A[j-1]>A[j]){
                int tmp = A[j-1];
                A[j-1]=A[j];
                A[j]=tmp;
            }
        }
    }
}

void print_array(int A[], int N){
    for(int i=0; i<N; ++i)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}