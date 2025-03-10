#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+c>b && b+c>a && a+b>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}