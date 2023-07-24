#include <stdio.h>

int main(void)
{
    typedef struct node
    {
        int value;
        struct node *left;
        struct node *right
    } node;
};