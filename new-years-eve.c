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
 * printWithAnimation - Function to print a message with colorful sentences.
 * @message: The array of message strings to display.
 * @colors: The corresponding colors for each message.
 * @count: Number of messages to display.
 */
void printWithAnimation(const char *messages[], const char *colors[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s%s\033[0m\n", colors[i], messages[i]);
        fflush(stdout);
        usleep(500000); /* Delay (500ms per sentence) */
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

    /* Main message to print with animation */
    const char *messages[] = {
        "🎉 Wishing you a Happy New Year 2025! 🎉",
        "To everyone at ALX, your dedication has been a guiding light.",
        "Special thanks to the Impact Hub Nairobi, Prochange Africa, and ALX Ventures.",
        "Your startup event series inspired a wave of innovation.",
        "A huge thank you to my amazing friends and vibrant communities.",
        "To every mentor and colleague, your support has made dreams come true.",
        "Here's to learning, growing, and achieving greatness together in 2025!"
    };
	const char *poem[] = {
		"🎉 Wishing you a Happy New Year 2025! 🎉\n\n"

		"To everyone at ALX, your dedication has been a guiding light, \n"
		"In every challenge, you've made our future bright. \n\n"

		"Like Betty Holberton, who first cracked the code, \n"
		"With ingenuity, she paved the road. \n"
		"She taught us to think, to break the mold, \n"
		"A visionary, in her wisdom, bold. \n\n"

		"Special thanks to the Impact Hub Nairobi, \n"
		"Prochange Africa, and ALX Ventures. \n"
		"Your startup events sparked innovation, \n"
		"And in each idea, we found revelation. \n\n"

		"To my friends and vibrant communities, \n"
		"Your strength has been a beacon in the storm. \n"
		"You remind me that learning transforms, \n"
		"And that together, we can rise and perform. \n\n"

		"To every mentor and colleague, so wise, \n"
		"Your guidance has lifted us to the skies. \n"
		"Together we will rise, together we will soar, \n"
		"In 2025, we'll open new doors. \n\n"

		"Here's to the future, bright and wide, \n"
		"A journey we’ll take, with hearts open wide! \n"
	};

    const char *colors[] = {
        "\033[1;32m", /* Green - Celebration */
        "\033[1;34m", /* Blue - Dedication */
        "\033[1;35m", /* Magenta - Innovation */
        "\033[1;36m", /* Cyan - Inspiration */
        "\033[1;33m", /* Yellow - Friendship */
        "\033[1;31m", /* Red - Passion and Support */
        "\033[1;32m"  /* Green - Optimism */
    };

    int messageCount = sizeof(messages) / sizeof(messages[0]);
    int poemCount = sizeof(poem) / sizeof(poem[0]);

    /* Print the message with colorful sentences */
    printWithAnimation(messages, colors, messageCount);
    printWithAnimation(poem, colors, poemCount);

    return (0);
}

