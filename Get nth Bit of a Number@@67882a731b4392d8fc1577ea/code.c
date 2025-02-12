#include<stdio.h>
int main(){
    int num,bitp,a,temp;
    scanf("%d %d",&num, &bitp);
    a = (num>>1) & 1;
    temp = a[bitp];
    printf("%d",temp);
    return 0;
}