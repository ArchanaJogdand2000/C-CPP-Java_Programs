#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    struct node *Head = NULL;

    struct node obj;

    return 0;
}


/*
typedef C भाषेत वापरतात जेव्हा आपल्याला existing data type ला एक नवीन नाव (alias) द्यायचं असतं. 
हे विशेषतः complex types (जसं की struct, pointer, function pointer) साठी उपयोगी ठरतं.



*/