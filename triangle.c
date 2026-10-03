
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input two angles
    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    // Check if the angles form a valid triangle
    if (angle1 <= 0 || angle2 <= 0 ||
        angle1 + angle2 >= 180) {
        printf("Invalid triangle.\n");
        return 0;
    }

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    // Check for a right angled triangle
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("It is a right angled triangle.\n");
    } else {
        printf("It is not a right angled triangle.\n");
    }

    return 0;
}
