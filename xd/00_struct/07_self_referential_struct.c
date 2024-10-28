/*
# Self Refrential Structure
> Self referential structures are those structures in which one or more pointers points to the structure of the same type.
pointer = ->
non-pointer = .
*/

#include <stdio.h>
struct point{
    int x;
    struct point *ptr; // --> self referential structure
};
int main(){
    struct point p1,p2;
    p1.x = 3;
    p1.ptr = NULL;

    p2.x = 4;
    p1.ptr = &p2;
    
    printf("%d %d\n",p1.x,p1.ptr->x);
    
    return 0;
}