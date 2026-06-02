#include<stdio.h>
int main() {
    int range,i,j,prime;
    printf("Enter range:");
    scanf("%d",&range);
    printf("Prime numbers upto %10 are: ",range);
    for(i=2;i<range;i++) {
        prime=1;
        for(j=2;j<i;j++) { 
        if(i%j==0) {
        prime=0;
        break; } }
        if (prime==1)
        printf("\n %d ",i);
 } printf("\n");

 return 0;
}