#include <stdio.h>
int main(){
    int N=0;
    printf("\nNhap vao mot con so: ");
    scanf("%d",&N);
    printf("\n\nSo dao nguoc: ");
    while(N)

        printf("%d",N%10);
        N/=10;    
    
}
