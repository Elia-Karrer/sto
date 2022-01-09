/**
  Easy strings & datatypes
  All rights reserved
  Elia Karrer, 2021
*/


#include <stdio.h>
#include <stdlib.h>

typedef int* INT;
typedef float* FLOAT;
typedef char* STR;

int* INT_new(unsigned int length)
{
    ///Check length
    if(length == 0)
        return NULL;

    ///Reserve Memory
    int* a = (int*) malloc(length * sizeof(int));
    if(a == NULL)
        printf("Error while reserving memory!");

    return a;
}

float* FLOAT_new(unsigned int length)
{
    ///Check length
    if(length == 0)
        return NULL;

    ///Reserve Memory
    float* a = (float*) malloc(length * sizeof(float));
    if(a == NULL)
        printf("Error while reserving memory!");

    return a;
}

char* STR_new(char* init)
{
    unsigned int i, l;

    ///Get length of input
    for(l = 0; *(init+l) != 0; l++);

    ///Reserve Memory
    char* output = (char*) malloc((l+1) * sizeof(char));
    if(output == NULL)
    {
        printf("Error while reserving memory!");
        return NULL;
    }

    ///Write
    for(i = 0; i < l; i++)
        *(output+i) = *(init+i);
    *(output+l) = 0;

    return output;
}

void print(char *str)
{
    printf("%s\n", str);
}



int main()
{
    STR s;
    INT i;
    
    ///STR
    s = STR_new("Hello World!"); ///s wird zum string "Hello World"
    print(x);

    s = STR_new("HELLO"); ///s wird zum string "HELLO"
    print(x);
    
    
    ///INT
    i = INT_new(10); /// i wird zu einem 10 langem array
    i[0] = 88; 
    printf("%d", i[0]);
    
    i = INT_new(50); /// i wird zu einem 50 langem array
    i[49] = 69;
    printf("%d", i[49]);
}
