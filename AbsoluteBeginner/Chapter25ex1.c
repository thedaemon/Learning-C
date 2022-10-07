//Chapter25ex1.c
/* This program declares and initializes sand array of character
pointers and then asks for ratings associated */

#include <stdio.h>
#include <ctype.h>

int main(void){

	int i;
	int ctr = 0;
	char ans;
	char * movies[9] = {"Amour", "Argo",
						"Beasts of the Wild",
						"Django",
						"Les Miserables",
						"Life of Brian", "Lincoln",
						"Silver lining",
						"Zero Dark"};
	int movieratings[9];
	char * tempmovie = "This will be used to sort rated movies";
	int outer, inner, didSwap, temprating;

	printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
	printf("Time to rate this year's best picture nominees:");

	for (i=0; i < 9; i++){
		printf("\nDid you see %s? (Y/N) : ", movies[i]);
		scanf(" %c", &ans);if ((toupper(ans)) == 'Y')
			{
			printf("\nWhat was your rating on a scale ");
			printf("of 1-10: ");
				scanf(" %d", &movieratings[i]);
				ctr++;
			continue;
			}
		else
			{
			movieratings[i] = -1;
			}
		}

	for (outer = 0; outer < 8; outer++){
		didSwap = 0;
		for (inner = outer; inner < 9; inner++){
			if (movieratings[inner] > movieratings[outer]){
				tempmovie = movies[inner];
				temprating = movieratings[inner];
				movies[inner] = movies[outer];
				movieratings[inner] = movieratings[outer];
				movies[outer] = tempmovie;
				movieratings[outer] = temprating;
				didSwap = 1;
				}
			}
		if (didSwap == 0)
			{
			break;
			}
		}
	
	printf("\n\n** Your Movie Ratings for the 2012 Oscar ");
	printf("Contenders **\n");
	for (i=0; i < ctr; i++){
		printf("%s rated a %d!\n", movies[i], movieratings[i]);
		}
	return(0);
}
