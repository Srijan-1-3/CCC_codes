#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b) {
    int arg1 = *(const int *) a;
    int arg2 = *(const int *) b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
int assign_mice_to_holes(int n, int *mice, int *holes) {
    // Sort the arrays in ascending order
    int i, max_time = 0;
    qsort(mice, n, sizeof(int), compare);
    qsort(holes, n, sizeof(int), compare);
    // Calculate the maximum time taken
    for (i = 0; i < n; i++) {
        int time_taken = abs(mice[i] - holes[i]);
        if (time_taken > max_time) {
            max_time = time_taken;
        }
    }
    return max_time;
}

// Comparison function for qsort


int main() {
    int n;
    scanf("%d",&n);
    int mice[n];
    int hole[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&mice[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&hole[i]);
    }
    int max_time = assign_mice_to_holes(n, mice, hole);
    printf("%d\n", max_time);
    return 0;
}
