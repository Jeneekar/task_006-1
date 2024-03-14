#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, plane_count, yes, ok;
    yes = 0;
    scanf("%d%d%d", &a, &b, &plane_count);
    ok = a - b;
    if (abs(ok) >= 300 || (ok == 0 && (a >= 300 || b >= 300))) {
        if (a < b) {
            while (a < b) {
                a = a + 300;
                yes++;
            }
        } else if (b < a) {
            while (b < a) {
                b = b + 300;
                yes++;
            }
        } else {
            if (plane_count == 1) {
                yes++;
            }
        }
        if (plane_count <= yes) {
            printf("SAFELY");
        } else {
            printf("DANGEROUS");
            printf("\a");
        }
    } else {
        printf("DANGEROUS");
        printf("\a");
    }
    return 0;
}
