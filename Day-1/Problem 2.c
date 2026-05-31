#include<stdio.h>
int main ()
 { int n,i,table=1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("The table of numbers upto n would be:");
    for(i=1;i<=10;i++) {
        table=n*i;
        printf(" \n %d",table);
    } 
    return 0;
 }
 