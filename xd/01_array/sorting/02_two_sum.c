#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 0; // Initialize variables for found pair
    printf("Enter target: ");
    int target;
    scanf("%d", &target);
    
    int array[] = {3, 2, 6, 5, 9, 7, 4, 1, 8};
    int sum;
    int arr_size = sizeof(array) / sizeof(array[0]);
    
    // Loop through the array to find the two numbers
    for (int i = 0; i < arr_size; i++) {
        for (int j = 1; j < arr_size; j++) { // Corrected inner loop
            sum = array[i] + array[j]; // Use array[j] directly
            if (target == sum) {
                a = array[i];
                b = array[j]; // Correctly assign the second number
                printf("Found: [%d, %d]\n", a, b);
                return 0; // Exit after finding the pair
            }
        }
    }
    
    printf("No pair found.\n");
    return 0;
}