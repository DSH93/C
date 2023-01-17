//
// Created by Dor Shukrun on 29/06/2022.
//
#ifndef LAB08_VECTOR_H
#define LAB08_VECTOR_H
typedef struct Vector* Vector;

Vector VectorCreate(unsigned int size);
void VectorDestroy(Vector vector);
int VectorGet(Vector vector , unsigned int index);
void VectorSet(Vector vector,unsigned int index,int num);

#endif //LAB08_VECTOR_H
