#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch==('a'<'z')){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}