#include <stdio.h>
#include <ctype.h>

char myToupper(char a) {
    if (isupper(a) != 0) {
        return a;
    }
    return a - 32;
}

int main() {
    while (1) {
        int a = 0;
        if (scanf("%c", &a) != -1) {
            //printf("the asci value of %c is %d: ", a,a);
            printf("%c\n", myToupper(a));
            a = 0;
        }else{
            break;
        }
    }
    return 0;
}
