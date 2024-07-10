#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int minSteps(int x, int y) {
    if (x == y) return 0;

    int dist = y - x;

    if (dist == 1) return 1;
    if (dist == 2) return 2;

    int steps = 0;
    int current_distance = 0;
    int step_length = 0;

    while (current_distance < dist) {
        step_length++;
        current_distance += step_length;
        steps++;
        if (current_distance >= dist) break;
        
        if (current_distance + step_length >= dist) {
            steps++;
            break;
        }
        
        current_distance += step_length;
        steps++;
    }

    return steps;
}

int main() {
    printf("%d\n", minSteps(45, 48)); // Should output: 3 
    printf("%d\n", minSteps(45, 49)); // Should output: 3
    printf("%d\n", minSteps(45, 50)); // Should output: 4
    printf("%d\n", minSteps(45, 51)); // Should output: 4
    return 0;
}
