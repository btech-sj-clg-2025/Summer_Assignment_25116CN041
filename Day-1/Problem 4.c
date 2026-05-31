#include<stdio.h>
int main ()
 { int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<10) 
    printf("The number contains a single digit");
    else if (n>=10 && n<100)
    printf("The number contains 2 digits");
    else if (n>=100 && n<1000)
    printf("The number contains 3 digits");
    else
    printf("invalid");
    return 0;
 }