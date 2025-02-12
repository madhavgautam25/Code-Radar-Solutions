#include <stdio.h>
int main(){
    int num,bitPosition,temp;
    scanf("%d %d",&num,&bitPosition);
    temp = num &  ~(1<<bitPosition);
    printf("%d",temp);
    return 0;
}