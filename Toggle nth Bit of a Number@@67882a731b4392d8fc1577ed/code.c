#include <stdio.h>
int main(){
    int num,bitposition,temp;
    scanf("%d %d",&num,&bitposition);
    temp = num ^ (1<<bitposition);
    printf("%d",temp);
    return 0;
}