#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b = 1 << a;
    if (a & b){
        printf("Set")
    }
    else{
        printf("Not Set");
    }
}