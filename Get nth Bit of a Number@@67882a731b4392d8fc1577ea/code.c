#include<stdio.h>
int main(){
    int num,bitp,temp;
    scanf("%d %d",&num, &bitp);
    temp = (num>>bitp) & 1;
    printf("%d",temp);
    return 0;
}