#include <stdio.h>
int main(){
    char name(100),hob(100);
    int age;
    scanf("%s %d\n",&name,&age);
    scanf("%s",&hob);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hob);
}