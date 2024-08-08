#include <stdint.h>
#include <stdio.h>

/**
 * Prints a character in a 11x16 font.
 *
 * @param c The character to print, as an unsigned char.
 * @return void
 */
void print_char_11x16(uint8_t c)
{
    c -= 0x20;
    for (uint8_t row = 0; row < 11; row++) {
        uint16_t rowBits = font_11x16[c][row];
        for (uint8_t col = 0; col < 16; col++) {
            uint16_t colMask = 1 << (15 - col); /* mask to select bit associated with bit */
            putchar((rowBits & colMask) ? '*' : ' ');
        }
        putchar('\n');
    }
}

/**
 * Prints a character in a 5x7 font.
 *
 * @param c The character to print, as an unsigned char.
 * @return void
 */
void char_5x7_print(uint8_t c)
{
    c -= 0x20;
    for (uint8_t row = 0; row < 5; row++) {
        uint8_t rowBits = font_5x7[c][row];
        for (uint8_t col = 0; col < 7; col++) {
            uint8_t colMask = 1 << (6 - col);
            putchar((rowBits & colMask) ? '*' : ' ');
        }
        putchar('\n');
    }
}