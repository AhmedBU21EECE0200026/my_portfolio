#include <stdio.h>

// Function to count the number of set bits in an integer
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count the number of set bits in the given number
    int setBits = countSetBits(num);

    // Print the result
    printf("Number of set bits in %d is %d\n", num, setBits);

    return 0;
}
