#include <ncurses.h>
#include <unistd.h>
#include <math.h>

#define DELAY 50000

void draw_heart(int x, int y, int size) {
    for (float i = 0; i < 2 * M_PI; i += 0.01) {
        float px = size * 16 * pow(sin(i), 3);
        float py = -size * (13 * cos(i) - 5 * cos(2 * i) - 2 * cos(3 * i) - cos(4 * i));
        mvprintw(y + py / 10, x + px / 10, "*");
    }
}

int main() {
    initscr();
    noecho();
    curs_set(FALSE);
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);

    int x = COLS / 2;
    int y = LINES / 2;
    int size = 10;

    while (1) {
        clear();
        attron(COLOR_PAIR(1));
        draw_heart(x, y, size);
        attroff(COLOR_PAIR(1));
        refresh();
        size += 1;
        if (size > 30) {
            size = 10;
        }
        usleep(DELAY);
    }

    endwin();
    return 0;
}