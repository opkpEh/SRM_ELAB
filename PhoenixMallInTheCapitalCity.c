#include <stdio.h>

int main() {
    int n, m, a;
    
    // Read input values
    scanf("%d %d %d", &n, &m, &a);
    
    // Calculate the number of stones required along the x-axis (length)
    int number_of_stones_x = (m + n - 1) / n;
    
    // Calculate the number of stones required along the y-axis (width)
    int number_of_stones_y = (a + n - 1) / n;
    
    // Calculate the total number of stones needed
    int total_number_of_stones = number_of_stones_x * number_of_stones_y;
    
    // Print the result
    printf("%d\n", total_number_of_stones);
    
    return 0;
}

