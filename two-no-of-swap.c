#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter any two number"); 
    scanf("%d,%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a is %d and b is %d",a,b);
    return 0;   
}