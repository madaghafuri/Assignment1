#include <stdio.h>

int convert(int number);
int main(){
    int cases;
    int number;

    scanf("%d",&cases);
    for(int i=0; i<cases; i++){
        scanf("%d",&number);
        printf("Case #%d: %d\n",i+1,convert(number));
    }
    
    return 0;
}

int convert(int number){
    int binary = 0;
    int remainder, i = 1, step = 1;
    while(number != 0){
        remainder = number % 2;
        number /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}