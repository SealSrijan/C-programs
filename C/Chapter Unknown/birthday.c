#include <stdio.h>
#include <unistd.h>  // For sleep function

// Function to clear the screen
void clearScreen() {
    printf("\033[H\033[J");
}

// Function to display the birthday cake
void displayCake() {
    printf("   i i i i i i i i i\n");
    printf("      |:H:a:p:p:y:|\n");
    printf("    __|___________|__\n");
    printf("   |^^^^^^^^^^^^^^^^^|\n");
    printf("   |:B:i:r:t:h:d:a:y:|\n");
    printf("   |                 |\n");
    printf("   ~~~~~~~~~~~~~~~~~~~\n");
}

int main() {
    // Clear the screen
    clearScreen();
    
    // Birthday message
    char *message[] = {
        "H",
        "Ha",
        "Hap",
        "Happ",
        "Happy",
        "Happy B",
        "Happy Bi",
        "Happy Bir",
        "Happy Birt",
        "Happy Birth",
        "Happy Birthd",
        "Happy Birthda",
        "Happy Birthday",
        "Happy Birthday,",
        "Happy Birthday, F",
        "Happy Birthday, Fr",
        "Happy Birthday, Fri",
        "Happy Birthday, Frie",
        "Happy Birthday, Frien",
        "Happy Birthday, Friend!",
    };
    
    // Display message with animation
    for (int i = 0; i < 20; ++i) {
        clearScreen();
        printf("%s\n", message[i]);
        sleep(1);  // Pause for a second
    }
    
    // Display the cake
    clearScreen();
    displayCake();
    printf("\nHappy Birthday, Friend!\n");
    
    return 0;
}
