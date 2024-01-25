
#include <stdio.h>

int main() {
    int dial_position, a, b, c;
    
    while (1) {
        scanf("%d %d %d %d", &dial_position, &a, &b, &c);

        if (dial_position == 0 && a == 0 && b == 0 && c== 0)
            break;

            int total_degrees=0;
            total_degrees += (dial_position - a + 40) % 40;
            total_degrees += (b - a + 40) % 40;
            total_degrees += (b - c + 40) % 40;
         
         total_degrees = 1080 + (total_degrees * 9);
        
        printf("%d\n", total_degrees);
    }

    return 0;
}
