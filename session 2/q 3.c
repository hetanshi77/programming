#include <stdio.h>

int main()
{
    char playlistName[] = "My Favorites";
    int totalSongs = 25;
    float averageDuration = 3.5;

    printf("My favorite Spotify playlist is %s, it has %d songs, and the average song duration is %.1f minutes.",
           playlistName, totalSongs, averageDuration);

    return 0;
}
