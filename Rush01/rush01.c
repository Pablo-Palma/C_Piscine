#include <stdlib.h>
#include <unistd.h>

int char_to_num(char c) 
{
    return c - '0';
}

// Escribe un carácter en la salida estándar.
void write_char(char c) 
{
    write(1, &c, 1);
}

// Escribe una cadena en la salida estándar.
void write_str(char *str)
{
    while (*str) 
	{
        write_char(*str++);
    }
}
// Escribe un número en la salida estándar.
void write_num(int num) 
{
    char c = '0' + num;
    write_char(c);
}

// Imprime la grilla.
void print_grid(int *grid, int size) 
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            write_num(grid[i * size + j]);
            if (j < size - 1) {
                write_char(' ');
            }
        }
        write_char('\n');
    }
}

// Verifica si un número puede ir en una posición dada de la grilla.
int can_place(int *grid, int size, int row, int col, int num) {
    // Verificar si el número ya está en la fila o columna.
    for (int i = 0; i < size; i++) {
        if (grid[row * size + i] == num || grid[i * size + col] == num) {
            return 0;
        }
    }
    return 1;
}
// Intenta resolver la cuadrícula.
int solve(int *grid, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Si esta posición ya tiene un número, pasamos a la siguiente.
            if (grid[i * size + j] != 0) {
                continue;
            }
            // Probamos a colocar cada número posible en esta posición.
            for (int num = 1; num <= size; num++) {
                if (can_place(grid, size, i, j, num)) {
                    // Si el número puede ser colocado aquí, lo colocamos y continuamos con la siguiente posición.
                    grid[i * size + j] = num;
                    if (solve(grid, size)) {
                        // Si logramos resolver el rompecabezas con este número aquí, hemos terminado.
                        return 1;
                    } else {
                        // Si no pudimos resolver el rompecabezas con este número aquí, lo quitamos y probamos con el siguiente número.
                        grid[i * size + j] = 0;
                    }
                }
            }
            // Si hemos probado todos los números y ninguno puede ser colocado aquí, retrocedemos.
            return 0;
        }
    }
    // Si hemos colocado un número en todas las posiciones, hemos resuelto el rompecabezas.
    return 1;
}

// Inicio del programa
int main(int argc, char **argv) {
    if (argc != 2) {
        // Debería haber exactamente un argumento.
        write_str("Error: Wrong number of arguments.\n");
        return 1;
    }

    // Inicializar el tamaño de la grilla y la grilla en sí.
    int size = 4;  // El tamaño se establece como 4 para el ejemplo
    int *grid = malloc(size * size * sizeof(int));
    for (int i = 0; i < size * size; i++) {
        grid[i] = 0;
    }
 // Crear una matriz para las pistas del juego
    int *hints = malloc(size * 4 * sizeof(int));
    int hint_index = 0;

    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] != ' ') {
            hints[hint_index] = char_to_num(argv[1][i]);
            hint_index++;
        }
    }
    
	// Intentar resolver el rompecabezas y imprimir la grilla si lo conseguimos.
    if (solve(grid, size)) {
        print_grid(grid, size);
    } else {
        write_str("No solution found.\n");
    }
    // Liberar la grilla.
    free(grid);
	free(hints);

    return 0;
}

