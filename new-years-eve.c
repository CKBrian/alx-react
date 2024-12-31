#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * clearScreen - Function to clear the screen.
 */
void clearScreen(void)
{
		system("clear");
}

/**
 * printWithAnimation - Function to print a message with a delay and colorful
 * effect.
 * @message: The message to display with animation.
 */
void printWithAnimation(const char *message)
{
		const char *colors[] = {
				"\033[1;31m", /* Red */
				"\033[1;32m", /* Green */
				"\033[1;33m", /* Yellow */
				"\033[1;34m", /* Blue */
				"\033[1;35m", /* Magenta */
				"\033[1;36m"  /* Cyan */
		};
		int colorCount = sizeof(colors) / sizeof(colors[0]);
		int i = 0;

		while (*message)
		{
			printf("%s%c\033[0m", colors[i % colorCount], *message);
			fflush(stdout); /* Ensure character appears immediately */
			usleep(100000); /* Delay (100ms per character) */
			i++;
			message++;
		}
		printf("\n");
}

/**
 * main - Entry point for the program.
 * Return: Always 0 (Success).
 */
int main(void)
{
		clearScreen();

		for (int i = 5; i > 0; i--)
		{
			clearScreen();
			printf("\033[1;33mCountdown: %d\033[0m\n", i);
			sleep(1);
		}

		clearScreen();
		printWithAnimation("🎉 Wishing you a Happy New Year 2025! 🎉\n");
		sleep(2);

		printWithAnimation(
			"May your year be filled with"
			"\n joy"
			"\n success"
			"\n adventure!\n"
			"Cheers!"
		);
		return (0);
}

