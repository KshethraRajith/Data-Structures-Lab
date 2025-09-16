#include <stdio.h>

int main() {
    int n, i, num, arr[10], c = 0, pos = -1;
    int t = 0; // Time counter
    int s = 0; // Space counter

    t++; // for variable initialization

    printf("Enter the limit: ");
    t++;
    scanf("%d", &n);
    t++;

    printf("Enter the numbers: ");
    t++;
    for(i = 0; i < n; i++) {
        t++;
        scanf("%d", &arr[i]);
        t++;
    }

    printf("Enter the number to be searched: ");
    t++;
    scanf("%d", &num);
    t++;

    for(i = 0; i < n; i++) {
        t++;
        if(arr[i] == num) {
            t++;
            c = 1;
            pos = i + 1; // Position starts from 1
            t++;
            break;
        }
    }

    if(c == 0) {
        t++;
        printf("Number %d is not found in the list.\n", num);
    } else {
        t++;
        printf("Number %d found at position %d\n", num, pos);
    }

    s = sizeof(arr) + sizeof(n) + sizeof(i) + sizeof(num) + sizeof(c) + sizeof(pos) + sizeof(t) + sizeof(s);
    t++; // final increment

    printf("Time Complexity (approx): %d\n", t);
    printf("Space Complexity (bytes): %d\n", s);

    return 0;
}
