#!/usr/bin/env python3

import sys

FILE = "movie.h"
FILENAME = "video.mp4"
contents = ",".join(str(b) for b in open(FILENAME, "rb").read())
contents = f"static const char MOVIE_BYTES[] = {{{contents }}};"
with open(FILE, "w+") as f: f.write(contents)
