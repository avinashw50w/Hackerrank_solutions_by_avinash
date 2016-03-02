#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,k;
    scanf("%d",&n);
    int t=n;
    for(i=n;i>0;i--){
        for(k=t-1;k>0;k--)
            printf(" ");
        for(j=0;j<=(n-i);j++)
            printf("#");
        printf("\n");
        t--;
    }
    return 0;
}

