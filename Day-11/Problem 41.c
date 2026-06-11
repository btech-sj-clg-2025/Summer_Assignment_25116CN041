#include <stdio.h>
int sum(int a,int b)
{ return a+b; 
}

int main() {
    int n1,n2,totalsum;
    printf("Enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    totalsum=sum(n1,n2);
    printf("The sum of %d and %d is:%d \n",n1,n2,totalsum);
    
    return 0;
}