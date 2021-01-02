## spotify-fltk
FLTK front-end for spotify-qt. Very work-in-progress.

No Qt dependencies required (when spotify-qt v4.0 is released).

## Why
| Application      | RAM usage | Disk usage | Notes                                          |
| ---------------- | --------- | ---------- | ---------------------------------------------- |
| Spotify          | 130 MiB   | 420 MiB    | Spotify (380 MiB) + GTK 2 (36 MiB)             |
| spotify-qt-quick | 100 MiB   | 70 MiB     | spotify-qt-quick (1 MiB) + Qt Quick 5 (70 MiB) |
| spotify-qt       | 30 MiB    | 65 MiB     | spotify-qt (1 MiB) + Qt 5 (60 MiB)             |
| spotify-gtk*     | 10 MiB    | 85 MiB     | spotify-gtk (1 MiB) + gtkmm 3 (85 MiB)         |
| spotify-fltk*    | 2 MiB     | 1 MiB      | spotify-fltk + FLTK (1 MiB)                    |

*\* = Very rough estimate, as it's very early in development.*

All usages are very average.