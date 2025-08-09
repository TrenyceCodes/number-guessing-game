#include <stdarg.h>
#include <stdio.h>
#include <string.h>

typedef enum {
  EASY = 1,
  MEDIUM,
  HARD,
  NOTSET,
} GameLevel;

typedef struct Game {
  int chances;
  GameLevel gameLevel;
} game;

//sets up game level and chances depending on users chosen game level
void setGameSettings(int chosen_level, game* gameSettings) {
  switch (chosen_level) {
      case 1:
        gameSettings->chances = 10;
        gameSettings->gameLevel = EASY;
        printf("Great! You have selected the Easy difficulty level.\n");
        return;
      case 2:
        gameSettings->chances = 5;
        gameSettings->gameLevel = MEDIUM;
        printf("Great! You have selected the Medium difficulty level.\n");
        return;
      case 3:
        gameSettings->chances = 3;
        gameSettings->gameLevel = HARD;
        printf("Great! You have selected the Hard difficulty level.\n");
        return;
      default:
        printf("Level chosen not found! Try again, choosing between easy, medium or hard.\n"); 
  }
}


int main() {
  game game; 
  game.chances = 5;
  game.gameLevel = NOTSET;

  printf("Welcome to the Number Guessing Game!\n");
  printf("I'm thinking of a number between 1 and 100.\n");
  printf("You have %d chances to guess the correct number.\n", game.chances);
  printf("\n");

  //get user input for which level they want to set the game on 
  int chosen_level;
  printf("Please select the difficulty level:\n");
  printf("1. Easy (10 chances)\n");
  printf("2. Medium (5 chances)\n");
  printf("3. Hard (3 chances)\n");
  printf("\n");

  printf("Enter your choice: ");
  scanf("%d", &chosen_level);
  printf("%d\n", chosen_level);
  printf("\n");
  
  setGameSettings(chosen_level, &game);
  printf("Let's start the game!\n");

  return 0;
}
