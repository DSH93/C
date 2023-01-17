//
// Created by Dor Shukrun on 29/06/2022.
//

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

struct Vector {
    int* items;
    unsigned int size;
};

Vector VectorCreate(unsigned int size){
    Vector vector =(Vector)malloc(sizeof(struct Vector));
    if(vector==NULL){
        fprintf(stderr,"failed malloc");
        exit(-1);
    }
    vector->items = (int*)malloc(size*sizeof(int));
    if(vector->items == NULL){
        fprintf(stderr,"failed malloc");
        exit(-1);
    }

    for (int i = 0; i < size; ++i) {
        vector[i].items = 0;
    }
    return vector;
}
void VectorDestroy(Vector vector){
    free(vector->items);
    free(vector);
}

int VectorGet(Vector vector , unsigned int index){
//    if(index >= vector->size) {
//        fprintf(stderr, "%s/%d: out of range error, asked for index %u, vector size is %u. Aborting\n\n", __FILE__, __LINE__, index, vector->size);
//        exit(-1);
//    }
    return (int) vector[index].items;

}
void VectorSet(Vector vector,unsigned int index,int num){
    vector[index].items = num;
}