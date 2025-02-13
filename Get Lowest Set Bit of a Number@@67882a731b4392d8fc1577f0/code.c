#include <stdio.h>
int main(){
    int num,bitPosition = 0;
    scanf("%d",&num);
    if ((num&1)==0){
        num>>1;
        bitPosition++;
    }
    printf("%d",bitPosition);
    return 0;
}