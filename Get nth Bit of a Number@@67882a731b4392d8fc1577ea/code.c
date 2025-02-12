#include<stdio.h>
int main(){
    int num,bit,a,temp;
    scanf("%d %d",&num, &bit);
    for (int i=31;i>=0;i--){
        a = (i>>i)&1;
    }
    temp = a[bit];
    printf("%d",temp);
    return 0;
}