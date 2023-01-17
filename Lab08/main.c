#include <stdio.h>
#include "Vector.h"

int main() {
    Vector v = VectorCreate(10);
    int sum = 0;
    VectorSet(v, 0, 0);
    for(unsigned int i=1; i<5; i++) {
        VectorSet(v, i, VectorGet(v, 2)+1);
    }

    for(unsigned int i=0; i<5; i++) {
        printf("%u: %u\n", i, VectorGet(v, i));
    }

    VectorDestroy(v);

    return 0;
}
