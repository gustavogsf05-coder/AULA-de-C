#include <stdio.h>
#include <windows.h> // Para Windows
// #include <unistd.h> // Para Linux/macOS

int main() {
    int contador = 10;

    while (contador >= 0) {
        printf("%d\n", contador);
        Sleep(1000); // pausa de 1000 ms (1 segundo)
        contador--;  // diminui 1
    }

    printf("BUM\n");

    return 0;
}
