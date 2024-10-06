#include <stdio.h>

void print(int *ptr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }
}

int main(){
    int array[] = {5,9,7,3,6};
    int size = sizeof(array)/sizeof(array[0]);
    print(array,size);
    return 0;
}
