#include<stdio.h>

int main(){

int sl, cmp, temp;

int A[]={100,97,100,98};

for (sl=0;sl < 3; sl++){
    for (cmp = (sl + 1);cmp < 4; cmp++){
        if (A[sl] > A[cmp]) {
            temp=A[sl]; 
            A[sl] = A[cmp];             
            A[cmp] = temp;
        }
    }
}






for(int i=0;i<4;i++){
    printf("%d ", A[i]);
}
printf("\n");

return 0;
}