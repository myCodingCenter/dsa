/* PASSING ARRAY OF STRUCTURES AS ARGUMENT
   Compiler will allocate contiguous block of memory for the data members of the structure. 
*/
#include <stdio.h>

struct array{
    int key;
    char value;
};
void print(struct array arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d %c\n",arr[i].key,arr[i].value);
    }
}
int main(){
    struct array arr[] = {{1,'a'},{2,'b'},};
    int arr_size = sizeof(arr)/sizeof(arr[1]);
    print(arr,arr_size);
    return 0;
}