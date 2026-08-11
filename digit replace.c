#include <stdio.h>
int main (){
    int num,t=0;
    printf("enter the number to reverse:");
    scanf("%d", &num);
    printf("the given number is %d\n", num);
    while (num!=0){
        t=t*10+num%10;
        num=num/10;
    }
    printf("the reverse num is :: %d",t);
    return 0;
}
