#include<stdio.h>
int main(){
    char ch,chl,chu;
    scanf("%c",&ch);
    chl = islower(ch);
    chu = isupper(ch);
    if(ch==chl){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}