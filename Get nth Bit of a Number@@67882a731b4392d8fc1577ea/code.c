#include<stdio.h>
int main(){
    int num,bit,a,temp;
    scanf("%d %d",&num, &bit);
    a = num>>1;
    temp = a[bit];
    printf("%d",temp);
    return 0;
}