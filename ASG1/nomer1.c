#include<stdio.h>

int main(){
    int x = 0;
    int result;

    scanf("%d",&x);
    result = x % 2;
    if(result == 0){
        printf("%d is an even number",x);
    }
    else if(result == 1){
        printf("%d is an odd number",x);
    }

    return 0;
}