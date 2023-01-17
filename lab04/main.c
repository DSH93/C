#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


bool gematriacmp(const char *w1, const char *w2) {
    int countW1 = 0;
    int countW2 = 0;

    for (int i = 0; w1[i] != '\0'; i++) {
        countW1 = (tolower((int) w1[i]))  + countW1 -96;
    }
    printf("%d\n",countW1);

    for (int i = 0; w2[i] != '\0'; ++i) {
        countW2 = (tolower((int) w2[i])) + countW2 -96;
    }
    printf("%d\n",countW2);

//    char a = (countW1 == countW2)? "true" : "false";
//    printf("%s",a);
    if(countW2==countW1) {
        printf("true");
        return true;
    }else{
        printf("false");
        return false;
    }

}

void rcopy(char* destination, const char* source){
    for (int i = 0; source[i] != '\0' ; ++i) {
       // printf("%c",source[i]);
        destination[6-i] = source[i];
        //printf("%c",destination[0]);
    }
    printf("%s ",destination);
}


int main() {
    //gematriacmp("KOLA","lol");
    char destination[8];
    char* source = "abcde";
    rcopy(destination,source);
    return 0;
}
