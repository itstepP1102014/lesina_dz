#ifndef USA_H_INCLUDED
#define USA_H_INCLUDED
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct _USA
{
    char state[20];
    char capital[20];
    int population;
    int area;
}USA;


void Output();
int SaveData();
int LoadData();
void DeleteData();
void AddData();


#endif // USA_H_INCLUDED