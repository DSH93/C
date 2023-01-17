#include <stdio.h>
void untilEOF(){
    int ch;
    int x;
    int y;
    while( (ch = getchar()) != -1){
    if(ch > x ) {
        x = ch;
        printf("%d",x);
    }
    if(ch < y ) {
        y = ch;
        printf("%d",y);
    }
    }
    printf("%d is the greatest number and %d is lowest number", x , y );
}

int main() {
    untilEOF();
    return 0;
}
