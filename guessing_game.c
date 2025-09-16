#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int num = (rand() % 100) + 1;
	int no_of_guesses = 0;
	int g;//guessed
	
	
	
	printf(" Welcome to Nehal's Guessing Game!\n");
    printf("Guess the number between 1 to 100\n");
    printf(" Type -1 if you want to cheat \n\n");
	
	
	
	do 
	{
	printf("guess the number:\n");
	scanf("%d",&g);
	if (g == -1)
		{
            printf(" Secret Code Activated! The number is: %d\n", num);
            continue;
        }
	if(g>num)
	{
		printf("lower number plz!!\n");
	}
	else if(g<num)
	{
		printf("higher number plz!!\n");
	}
	no_of_guesses++;
	}
	while(g != num);
	printf("\n Congratulations!! \n");
    if(no_of_guesses == 1) {
        printf(" You're a psychic! Got it in 1 try! \n");
    } else if(no_of_guesses <= 5) {
        printf(" Smart guesser! Only %d tries!\n", no_of_guesses);
    } else if(no_of_guesses <= 10) {
        printf(" Not bad, took you %d tries!\n", no_of_guesses);
    } else {
        printf(" Phew! Finally after %d tries!\n", no_of_guesses);
    }
	return 0;
}