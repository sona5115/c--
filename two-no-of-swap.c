#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter any number"); 
    scanf("%d",&a);
    printf("enter second number"); 
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a is %d and b is %d",a,b);
    return 0;   
}