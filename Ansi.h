#ifndef ANSI_H
#define ANSI_H
#include <stdio.h>
#define ANSI_ESCAPE "\e["
#define ANSI_BELL "\07"
#define ANSI_ENDCODE "m"
#define ANSI_ERASE_VISIBLE_SCREEN ANSI_ESCAPE "2J"
#define ANSI_ERASE_CACHED_SCREEN ANSI_ESCAPE "3J"
#define ANSI_ERASE_WHOLE_SCREEN ANSI_ERASE_VISIBLE_SCREEN ANSI_ERASE_CACHED_SCREEN
#define ANSI_BLACK_COLOR	"30"
#define ANSI_RED_COLOR	"31"
#define ANSI_GREEN_COLOR	"32"
#define ANSI_YELLOW_COLOR	"33"
#define ANSI_BLUE_COLOR	"34"
#define ANSI_MAGENTA_COLOR	"35"
#define ANSI_CYAN_COLOR	"36"
#define ANSI_WHYTE_COLOR	"37"
#define ANSI_DEFAULT_COLOR	"39"

#define ANSI_BG_BLACK_COLOR	"40"
#define ANSI_BG_RED_COLOR	"41"
#define ANSI_BG_GREEN_COLOR	"42"
#define ANSI_BG_YELLOW_COLOR	"43"
#define ANSI_BG_BLUE_COLOR	"44"
#define ANSI_BG_MAGENTA_COLOR	"45"
#define ANSI_BG_CYAN_COLOR	"46"
#define ANSI_BG_WHYTE_COLOR	"47"
#define ANSI_BG_DEFAULT_COLOR	"49"

#define ANSI_RESET_COLOR	"\e[0m"

#define TEXT_BLACK(text) ANSI_ESCAPE ANSI_BLACK_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_RED(text) ANSI_ESCAPE ANSI_RED_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_GREEN(text) ANSI_ESCAPE ANSI_GREEN_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_YELLOW(text) ANSI_ESCAPE ANSI_YELLOW_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_BLUE(text) ANSI_ESCAPE ANSI_BLUE_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_MAGENTA(text) ANSI_ESCAPE ANSI_MAGENTA_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_CYAN(text) ANSI_ESCAPE ANSI_CYAN_COLOR "m" text ANSI_RESET_COLOR
#define TEXT_WHYTE(text) ANSI_ESCAPE ANSI_WHYTE_COLOR "m" text ANSI_RESET_COLOR

#define BG_BLACK(text) ANSI_ESCAPE ANSI_BG_BLACK_COLOR "m" text ANSI_RESET_COLOR
#define BG_RED(text) ANSI_ESCAPE ANSI_BG_RED_COLOR "m" text ANSI_RESET_COLOR
#define BG_GREEN(text) ANSI_ESCAPE ANSI_BG_GREEN_COLOR "m" text ANSI_RESET_COLOR
#define BG_YELLOW(text) ANSI_ESCAPE ANSI_BG_YELLOW_COLOR "m" text ANSI_RESET_COLOR
#define BG_BLUE(text) ANSI_ESCAPE ANSI_BG_BLUE_COLOR "m" text ANSI_RESET_COLOR
#define BG_MAGENTA(text) ANSI_ESCAPE ANSI_BG_MAGENTA_COLOR "m" text ANSI_RESET_COLOR
#define BG_CYAN(text) ANSI_ESCAPE ANSI_BG_CYAN_COLOR "m" text ANSI_RESET_COLOR
#define BG_WHYTE(text) ANSI_ESCAPE ANSI_BG_WHYTE_COLOR "m" text ANSI_RESET_COLOR

#define set_terminal_cursor(row, column) printf("\e[%d;%dH", row, column)

void clear_terminal();
void terminal_set_size(int h, int w);
void terminal_set_text_color(char* color);
void terminal_set_background_color(char* color);
void terminal_set_rgb_text(unsigned char r, unsigned char g, unsigned char b);
void terminal_set_rgb_background(unsigned char r, unsigned char g, unsigned char b);
void terminal_reset_color();
void terminal_set_font(int size);

void terminal_save_cursor_pos();
void terminal_restore_cursor_pos();
void terminal_cursor_up(int n);
void terminal_cursor_down(int n);
void terminal_cursor_left(int n);
void terminal_cursor_right(int n);
void terminal_set_cursor_pos(int row, int col);

void terminal_hide_cursor();
void terminal_show_cursor();

#endif