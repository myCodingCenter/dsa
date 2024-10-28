/* Passing pointers to structures as arguments

// If the size of the structure is very large then passing the copy of the whole structure is not efficient.
// BETTER CHOICE : Pass the address of the structure.

*/

#include <stdio.h>
struct point
{
    int x;
    int y;
};

void print(struct point *ptr){
    printf("%d %d\n",ptr->x,ptr->y);
}
void main(){
    struct point p1 = {2,3};
    struct point p2 = {3,2};
    print(&p1);
    print(&p2);
}