#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 5

void printInstructions() {
    printf("Bienvenido al juego 'Adivina el número'!\n");
    printf("He elegido un número entre 1 y 100. Tienes %d intentos para adivinarlo.\n", MAX_TRIES);
}

int getRandomNumber() {
    return (rand() % 100) + 1; // Número aleatorio entre 1 y 100
}

void playGame() {
    int numberToGuess = getRandomNumber();
    int guess;
    int attempts = 0;
    int guessedCorrectly = 0;

    while (attempts < MAX_TRIES && !guessedCorrectly) {
        printf("Intento %d: Ingresa tu adivinanza: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess < numberToGuess) {
            printf("Demasiado bajo! Intenta de nuevo.\n");
        } else if (guess > numberToGuess) {
            printf("Demasiado alto! Intenta de nuevo.\n");
        } else {
            guessedCorrectly = 1;
            printf("¡Felicidades! Adivinaste el número: %d\n", numberToGuess);
        }
    }

    if (!guessedCorrectly) {
        printf("Lo siento, has agotado tus intentos. El número era: %d\n", numberToGuess);
    }
}

int main() {
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    printInstructions();
    playGame();
    return 0;
}