#include "main.h"


int main(){
    int ch;
    
    initscr();
    raw();
    //keypad(stdscr, TRUE);
    noecho();
    ch = getch();

    while(ch != 27) {
        printw("%c", ch);
        ch = getch();
    }
    
    refresh();
    getch();
    endwin();
    
    return 0;
}













