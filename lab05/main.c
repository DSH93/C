#include <stdio.h>

void findDivided(int *, int size, int n);
void removeChar(char *, char);
void addressPrinter();
int main() {
    int size = 7;
    int s[] = {1, 10, 5, 4, 21, 25, 24};
    int n = 5;
    findDivided( s,  size,  n);
    char alice[] = "abadaKadbra";
    char ch = 'a';
    printf("before: %s\n", alice);
    removeChar(alice, ch);
    printf("after: %s\n", alice);

    addressPrinter();
    return 0;
}
void addressPrinter(){
    int a = 1 , b = 2;
    int* p = &b;
    printf("a = %d and its address is: %p\n",a,&a);
    printf("b = %d and its address is: %p\n",b,p);
    printf("p(hexa) = %p and p(decimal) = %d\n",a,&a);
    printf("the address of p is %p\n",p);



}


void removeChar(char *s, char ch) {
    char *oldAlice = s, *newAlice = s;
    for (;*oldAlice; oldAlice++) {
        if (*oldAlice != ch) {
            *(newAlice++) = *oldAlice;
        }
    }
    *newAlice = '\0';
}


void findDivided(int* array, int size, int n){
    for (int i = 0; i < size; ++i) {
        if(*array % n == 0) printf("%d ",*array);
        *array++;
    }
}