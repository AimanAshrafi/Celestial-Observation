<p align="center">
  <img src="assets/header co.jpg">
</p>

SAPID-590026933
# Celestial Observation🌙


A Sky That Responds to You

A simple C program that asks one question:
"If you looked up right now, what would the universe show you?"

This project calculates the moon phase, understands your hemisphere, considers air quality and lunar brightness and then tells you which stars are most likely visible to the naked eye. Not perfect, not omniscient but curious, and always learning.
 


# Factor	Influence


Hemisphere	Controls which constellations are visible

Moon Phase	Brighter moon → fewer visible stars

Air Quality Index (AQI)	More pollution → faint stars disappear

It doesn’t just print numbers. It paints the sky for you

# ⭐ Features

Detects current date automatically

Calculates moon phase from personal reference date

Displays constellations visible in chosen hemisphere

Adjusts visibility based on brightness + AQI

Gives atmospheric output instead of dry numbers the program responds in a way that feels like stargazing


# 🌓 Moon Phase Logic
Moon Age	Interpretation
0–1	New moon- dark sky, deep stars awake

2–6	Waxing crescent- most stars visible

7–8	First quarter- faint stars dim a little

9–13	Waxing gibbous- vsibility strong but softer

14–16	Full moon- only bright stars win

17–21	Waning gibbous- stars slowly come back

22–23	Last quarter- good clarity returns

24–29	Waning crescent- darkness blooms again

# ✨ Stars Considered
Northern Hemisphere

Orion · Perseus · Gemini · Ursa Major/Minor · Draco · Pleiades (Cluster)

Southern Hemisphere

Crux (Southern Cross) · Centaurus · Scorpius · Canopus · Sirius · Carina · Vela · Jewel Box Cluster

These aren't random — chosen for visibility, recognition, and the way they've followed humans for centuries.

# 📁 Project Structure
Celestial-Observation
├─ src/

│  ├─ main.c

│  ├─ moon.c / moon.h

│  ├─ visibility.c / visibility.h

│  └─ utils.c / utils.h

├─ docs/

│  ├─ ProjectReport.pdf   ← uploaded in repo

│  └─ algorithm.md        ← optional draft reasoning

├─ assets/                ← screenshots, visuals

└─ README.md              ← this file



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
Stars that endure reveal themselves.


# 🔭 Future Add-Ons
Possible Upgrade	                          Status
calculate aqi automatically               	future
Local star altitude based on lat-long	      later
UI / graphical star map output	            experimental

# 🌙 Why This Project Mattered to Me
I’ve always been the kind of person who looks up more than down, the night sky has fascinated me long before I ever wrote a line of code.
Stars felt like quiet constants, and somewhere along the way they became personal.
One of the hidden reasons I chose to move in Dehradun was somewhere this, clearer skies, quieter nights, a chance to actually see the constellations I read about.

This project is my way of connecting that curiosity with something practical.
It takes real data like date, moon phase, visibility, AQI — and turns it into a small guide to what the sky might look like tonight.
Not just for a grade or a submission, but because I wanted to build something that reflects what I care about when I step outside and look up.

It’s simple, but it means something to me.


