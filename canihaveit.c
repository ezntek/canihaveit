#include "movie.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* video = fopen("/tmp/movie.wmv", "wb");
    if (video == NULL) {
        perror("fopen: ");
        exit(EXIT_FAILURE);
    }
    fwrite(MOVIE_BYTES, sizeof(MOVIE_BYTES), 1, video);
    fclose(video);

    system("ffplay -autoexit /tmp/movie.wmv");
    system("shutdown now");

    return EXIT_SUCCESS;
}
