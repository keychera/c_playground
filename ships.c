#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

void check_str(char msg[]) {
    printf("Size of message (which is actually a pointer to the array of char): %i \n", sizeof(msg));
    printf("Pointer Decay alert!");
}

int main()
{
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    check_str("Hello!");
    return 0;
}