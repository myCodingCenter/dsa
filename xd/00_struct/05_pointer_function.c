// Returning a structure variable from the function`    .

#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x,y;
};
struct point* fun(int a, int b){
    struct point *ptr;
    ptr = (struct point*)malloc(sizeof(struct point));
    ptr->x = a+1;
    ptr->y = b*2;
    printf("Called!\n");
    return ptr;
}
struct point print(struct point *temp){
    printf("x = %d, y = %d \n",temp->x,temp->y);
}
void main(){
    struct point *p1,*p2;
    p1 = fun(2,3);
    print(p1);
    free(p1);
    free(p2);
}
