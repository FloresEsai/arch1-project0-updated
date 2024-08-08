#include <stdio.h>
#include <draw.h>

/**
 * Prints a square of size `size` whose left column is at `startCol`.
 *
 * @param startCol The starting column of the square.
 * @param size The size of the square.
 * @return void
 */
void print_square(int startCol, int size)
{
    int i, j;
    int endCol = startCol + size;
    for (int row = 0; row < size; row++) {
        int col;
        for (col = 0; col < startCol; col++) putchar(' ');
        for (; col < endCol; col++) putchar('*');
        putchar('\n');
    }
}

/**
 * Prints a triangle of height `size` whose left edge is at column `startCol`.
 *
 * @param startCol The starting column of the triangle.
 * @param size The height of the triangle.
 * @return void
 */
void print_triangle(int startCol, int size)
{
    for (int row = 0; row <= size; row++) {
        int minCol = startCol + size - row, maxCol = startCol + size + row;
        int col;
        for (col = 0; col < minCol; col++) putchar(' ');
        for (; col <= maxCol; col++) putchar('*');
        putchar('\n');
    }
}

/**
 * Prints an arrow with the specified number of rows and columns.
 *
 * @param startCol The starting column of the arrow.
 * @param size The number of rows in the arrow.
 * @return void
 */
void print_arrow(int startCol, int size)
{
    print_triangle(startCol, size);
    print_square(startCol * (size / 2) - 2, size);
}