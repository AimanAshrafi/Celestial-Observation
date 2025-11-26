#include<stdio.h>
#include "moon.h"

 char* northern_stars[] = {
    "Orion",
    "Ursa Major",
    "Cassiopeia",
    "Perseus",
    "Gemini",
    "Leo",
    "Ursa Minor",
    "Pegasus",
    "Draco",
    "Pleiades (Star Cluster)",
    "Polaris (North Star)"
};
 char* southern_stars[] = {
    "Crux (Southern Cross)",
    "Carina",
    "Centaurus",
    "Scorpius",
    "Canopus",
    "Sirius",
    "Vela",
    "Alpha Centauri",
    "Jewel Box Cluster"
};
void location() {
    int choice;
    int i;

    printf("Which hemisphere are you in?\n");
    printf("1. Northern Hemisphere\n");
    printf("2. Southern Hemisphere\n");
    printf("Enter choice (1 or 2): ");

    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nYou are under the Northern Sky.\n");
        printf("Some major visible stars/constellations here include:\n");

        for(i = 0; i < 10; i++)
            printf("- %s\n", northern_stars[i]);
    }
    else if(choice == 2) {
        printf("\nYou are under the Southern Sky.\n");
        printf("Some major visible stars/constellations here include:\n");
        
        for( i = 0; i < 9; i++)
            printf("- %s\n", southern_stars[i]);
    }
    else {
        printf("\nInvalid input — try again later.\n");
    }
}




