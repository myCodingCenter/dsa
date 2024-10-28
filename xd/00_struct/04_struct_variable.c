/* 
## RETURNING STRUCTURE VARIABLE FROM A FUNCTION
Returning structure variable from a function is similar to returning a variable from a function.
*/

#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct point print(struct point); 
void main(){
    struct point p1 = {3,4};
    printf("Before\n x = %d, y = %d\n",p1.x,p1.y);
    p1 = print(p1);
    printf("After\n x = %d, y = %d\n",p1.x,p1.y);
}
struct point print(struct point temp){
    temp.x += 1;
    temp.y += 2;
    return temp;
}