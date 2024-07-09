#include <stdio.h>
#include <math.h>

int minSteps(int x, int y) {
     int dist = y - x;
if (dist <= 1) return dist;

int n = (int)((sqrt(1 + 8 * dist) - 1) / 2);
if (n * (n + 1) / 2 < dist) n++;

return n;
}

int main() {

printf("%d\n", minSteps(45, 48));
printf("%d\n", minSteps(45, 49));
printf("%d\n", minSteps(45, 50));
printf("%d\n", minSteps(45, 51));
 return 0;
}