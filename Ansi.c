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

void terminal_set_rgb_text(unsigned char r, unsigned char g, unsigned char b){
    printf("\x1B[38;2;%d;%d;%dm", r, g, b);
    fflush(stdout);
}

void terminal_set_rgb_background(unsigned char r, unsigned char g, unsigned char b){
    printf("\x1B[48;2;%d;%d;%dm", r, g, b);
    fflush(stdout);
}

void terminal_reset_color(){
    fputs("\x1B[0m", stdout);
}

void terminal_set_size(int h, int w){
    printf("\x1B[8;%d;%dt", h, w);
}

void terminal_set_font(int size){
    printf("\x1B[%dm", size);
}

void terminal_save_cursor_pos(){
    fputs("\x1B[s", stdout);
    fflush(stdout);
}
void terminal_restore_cursor_pos(){
    fputs("\x1B[u", stdout);
    fflush(stdout);
}

void terminal_cursor_up(int n){
    printf("\x1B[%dA", n);
    fflush(stdout);
}
void terminal_cursor_down(int n){
    printf("\x1B[%dB", n);
    fflush(stdout);
}
void terminal_cursor_left(int n){
    printf("\x1B[%dD", n);
    fflush(stdout);
}
void terminal_cursor_right(int n){
    printf("\x1B[%dC", n);
    fflush(stdout);
}
void terminal_set_cursor_pos(int row, int col){
    printf("\x1B[%d;%dH", row, col);
    fflush(stdout);
}

void terminal_hide_cursor(){
    fputs("\x1B[?25l", stdout);
}
void terminal_show_cursor(){
    fputs("\x1B[?25h", stdout);
}