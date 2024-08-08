#include <stdio.h>
#include <draw.h>


/**
 * Prints a triangle with the specified number of rows and columns.
 *
 * @param rows The number of rows in the triangle.
 * @param cols The number of columns in each row.
 * @return void
 */
void print_triangle(int rows, int cols);

/**
 * Prints a square with the specified number of rows and columns.
 *
 * @param size The number of rows and columns in the square.
 * @return void
 */
void print_square(int size);

/**
 * Prints a character in a 11x16 font.
 *
 * @param c The character to print.
 * @return void
 */
void print_char_11x16(char c);

/**
 * Prints a character in a 5x7 font.
 *
 * @param c The character to print.
 * @return void
 */
void char_5x7_print(char c);

/**
 * Prints an arrow with the specified number of rows and columns.
 *
 * @param rows The number of rows in the arrow.
 * @param cols The number of columns in each row.
 * @return void
 */
void print_arrow(int rows, int cols);

/**
 * The main function of the program.
 *
 * @return int The exit code of the program.
 */
int main(void)
{
    puts("Welcome!");

    while (1) { // Infinite while loop

        fputs("Select which shape you want to print (Triangle = t, Square = s, Chars = c, Arrow = a, Chars in 5x7 = f) or 'q' to quit\n> ", stdout);
        fflush(stdout);		/* stdout only flushes automatically on \n */
        int c;
        while ((c = getchar()) == '\n'); /* ignore newlines */
        if (c == EOF)		     /* terminate on end-of-file */
            goto done;

        // Given the user answer, select which method to call
        switch (c) {
        case 't':
            puts("You selected triangle:");
            print_triangle(5, 7);
            break;
        case 's':
            puts("You selected square:");
            print_square(5);
            break;
        case 'c':
            puts("You selected chars:");
            for (char c = 'A'; c < 'D'; c++)
                print_char_11x16(c);
            break;
        case 'f':
            puts("You selected chars in 5x7 font:");
            for (char c = 'A'; c < 'D'; c++)
                char_5x7_print(c);
            break;
        case 'a':
            puts("You selected arrow");
            print_arrow(5, 5);
            break;
        case 'q':
            puts("Bye!");
            goto done; 		/* terminate */
        case '\n':
            break;
        default:
            printf("Unrecognized option '%c', please try again!\n", c);
        }
    }

done: // To exit from program
    return 0;
}
