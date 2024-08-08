#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

/**
 * Prints a triangle with the specified number of rows and columns.
 *
 * @param startCol The starting column of the triangle.
 * @param size The number of rows in the triangle.
 * @return void
 */
void print_triangle(int startCol, int size);

/**
 * Prints a square with the specified number of rows and columns.
 *
 * @param startCol The starting column of the square.
 * @param size The number of rows and columns in the square.
 * @return void
 */
void print_square(int startCol, int size);

/**
 * Prints a character in a 11x16 font.
 *
 * @param c The character to print.
 * @return void
 */
void print_char_11x16(char c);

/**
 * Prints an arrow with the specified number of rows and columns.
 *
 * @param startCol The starting column of the arrow.
 * @param size The number of rows in the arrow.
 * @return void
 */
void print_arrow(int startCol, int size);

/**
 * Prints a character in a 5x7 font.
 *
 * @param c The character to print.
 * @return void
 */
void char_5x7_print(char c);

extern const unsigned short font_11x16[95][11];
extern const unsigned char font_5x7[96][5];
extern const unsigned char font_8x12[95][12];

#endif