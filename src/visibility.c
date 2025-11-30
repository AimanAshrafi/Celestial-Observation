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
void visibility_with_AQI(int hemisphere, int moonAge, int aqi) {

    int brightnessLimit;

    printf("\n🌙 Moon Phase Influence\n");

    if(moonAge<=1)         { brightnessLimit=4; printf("New moon - sky dark, deep stars visible.\n"); }
    else if(moonAge<=6)    { brightnessLimit=4; printf("Waxing Crescent - most stars visible.\n"); }
    else if(moonAge<=8)    { brightnessLimit=3; printf("First Quarter - some faint stars dim.\n"); }
    else if(moonAge<=13)   { brightnessLimit=3; printf("Waxing Gibbous - visibility still strong.\n"); }
    else if(moonAge<=16)   { brightnessLimit=2; printf("Full Moon - only brighter stars stand out.\n"); }
    else if(moonAge<=21)   { brightnessLimit=3; printf("Waning Gibbous - stars slowly return.\n"); }
    else if(moonAge<=23)   { brightnessLimit=4; printf("Last Quarter - good visibility returns.\n"); }
    else                   { brightnessLimit=4; printf("Waning Crescent - sky darkens beautifully.\n"); }

    
    if(aqi<=50)       brightnessLimit = brightnessLimit;   // no reduction
    else if(aqi<=100) brightnessLimit = brightnessLimit>3?3:brightnessLimit;
    else if(aqi<=200) brightnessLimit = 2;
    else              brightnessLimit = 1;

    printf("\n✨ Visible Constellations Tonight:\n");

    if(hemisphere==1) {
        for(int i=0;i<10;i++)
            if(northBrightness[i]<=brightnessLimit)
                printf("- %s\n", northStars[i]);
    }
    else if(hemisphere==2) {
        for(int i=0;i<9;i++)
            if(southBrightness[i]<=brightnessLimit)
                printf("- %s\n", southStars[i]);
    }

    printf("\n🌫 AQI: %d → Visibility Threshold ≤ %d\n",aqi,brightnessLimit);
}





