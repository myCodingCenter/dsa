#include <stdio.h>

void print(int size, int *ptr);

int main() {
    int array[50] = {5, 33, 32, 1, 3, 2};
    int size = 6; // Update size to the number of initialized elements
    int n;

    printf("Enter position (0 to 5): "); // Restricting position to valid indices
    scanf("%d", &n);
    if (n < 0 || n >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter data: ");
    int data;
    scanf("%d", &data);
    array[n] = data;

    print(size, array);
    return 0;
}

void print(int size, int *ptr) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}