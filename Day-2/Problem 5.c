#include<stdio.h>
int main () {
    int n,r,sumofdigits=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n>0) {
        r=n%10;
        sumofdigits=sumofdigits+r;
        n=n/10;
    } printf("The sum of digits is: %d",sumofdigits);
    return 0;
}