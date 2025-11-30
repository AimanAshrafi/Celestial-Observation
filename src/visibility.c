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
 char *northStars[] = {
    "Orion", "Ursa Major", "Cassiopeia", "Andromeda",
    "Taurus", "Ursa Minor", "Pegasus", "Carina",
    "Draco", "Pleiades"
};

// Brightness ranking (1 = brightest, 4 = faint)
int northBrightness[] = {
    1, // Orion
    2, // Ursa Major
    2, // Cassiopeia
    3, // Andromeda
    2, // Taurus (Aldebaran bright, cluster moderately bright)
    3, // Ursa Minor (Polaris bright but surrounding faint)
    3, // Pegasus
    2, // Carina (bright when visible)
    3, // Draco
    2  // Pleiades (cluster visible in dark sky)
};
char *southStars[] = {
    "Crux", "Centaurus", "Sagittarius", "Scorpius",
    "Canopus", "Sirius", "Carina", "Vela", "Hydra"
};

int southBrightness[] = {
    2, // Crux (Southern Cross, small but bright)
    2, // Centaurus (Alpha + Beta bright)
    2, // Sagittarius (dense region, Milky Way core)
    2, // Scorpius (Antares bright)
    1, // Canopus (2nd brightest star in sky)
    1, // Sirius (brightest star in sky)
    2, // Carina (partially bright)
    2, // Vela
    3  // Hydra (larger but moderately faint)
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




