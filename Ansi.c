#include "Ansi.h"

#include <stdio.h>

void clear_terminal(){
    fputs(ANSI_ERASE_WHOLE_SCREEN, stdout);
}


void terminal_set_text_color(char* color){
    printf(ANSI_ESCAPE "%s" "m", color);
}

void terminal_set_background_color (char* color){
    printf(ANSI_ESCAPE "%s" "m", color);
}

void terminal_set_rgb_text(int r, int g, int b){
    printf("\e[38;2;%d;%d;%dm", r, g, b);
}

void terminal_set_rgb_background(int r, int g, int b){
    printf("\e[48;2;%d;%d;%dm", r, g, b);
}

void terminal_reset_color(){
    fputs("\e[0m", stdout);
}

void terminal_set_size(int h, int w){
    printf("\e[8;%d;%dt", h, w);
}

void terminal_set_font(int size){
    printf("\e[%dm", size);
}

void terminal_cursor_up(int n){
    printf("\e[%dA", n);
}
void terminal_cursor_down(int n){
    printf("\e[%dB", n);
}
void terminal_cursor_left(int n){
    printf("\e[%dD", n);
}
void terminal_cursor_right(int n){
    printf("\e[%dC", n);
}