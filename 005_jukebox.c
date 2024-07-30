#include <stdio.h>
#include <string.h>

void find_track_and_do_something(
    char tracks[][80],
    char *search_for,
    int (*do_something)( const char* )
) {
    int i;
    for (i = 0; i < 5; i++)
    {
        if(strstr(tracks[i], search_for)) {
            do_something(tracks[i]);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima",
    };
    char track_to_search[80];
    puts("Enter the track name: ");
    fgets(track_to_search, 80, stdin);
    find_track_and_do_something(
        tracks, track_to_search, puts
    );
    return 0;
}
