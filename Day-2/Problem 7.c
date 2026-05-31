#include<stdio.h>
int main () {
    int n,r,prod_of_digits=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while (n>0) {
        r=n%10;
        prod_of_digits=prod_of_digits*r;
        n=n/10;
    } printf("The product of the digits of the number is: %d",prod_of_digits);
    return 0;
}