#include <stdio.h>
#include <string.h>
void reverse(char *str, int begin, int end){
    char c;

    if(begin >= end) return;

    c = *(str + begin);
    *(str + begin) = *(str + end);
    *(str + end) = c;

    reverse(str, ++begin, --end);
}

int main(){
    int i;
    int cases=0;
    char string[1000];

    scanf("%d",&cases);
    for(i=1; i<=cases; i++){
        scanf("%s",&string);
        reverse(string, 0, strlen(string)-1);
        printf("Case #%d: %s\n",i,string);
    }

    return 0;
}