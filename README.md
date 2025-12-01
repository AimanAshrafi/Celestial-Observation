SAPID-590026933
# Celestial Observation🌙


This project calculates the moon’s phase for the current date and predicts constellation visibility based on the user location, lunar brightness and user-entered AQI. 


# Factor	Influence

Hemisphere	Controls which constellations are visible
Moon Phase	Brighter moon → fewer visible stars
Air Quality Index (AQI)	More pollution → faint stars disappear


# ⭐ Features

Detects current date automatically

Calculates moon phase from personal reference date

Displays constellations visible in chosen hemisphere

Adjusts visibility based on brightness + AQI

Gives atmospheric output instead of dry numbers the program responds in a way that feels like stargazing


# How to Run:

1.Open terminal inside project root

2.Compile:
gcc -I include src/main.c src/moon.c src/utils.c src/visibility.c -o main.exe



Input:

1 or 2 for hemisphere

AQI value

Program returns visible constellations & moon-sky description


# 🌌 Example Output
Today is: 01-12-2025

✦ MOON PHASE INFLUENCE
Waning Crescent — the sky deepens, the night exhales.

✦ Visible Constellations Tonight ✦
★ Crux
★ Canopus
★ Sirius

Night settles.
Stars that endure — reveal themselves.


# 🔭 Future Add-Ons
Possible Upgrade	                          Status
calculate aqi automatically               	future
Local star altitude based on lat-long	      later
UI / graphical star map output	            experimental


