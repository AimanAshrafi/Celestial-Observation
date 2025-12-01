start
→ Step 1: Fetch today’s date.
       - Extract day, month and year using C time functions.

→ Step 2: Calculate moon age.
       - Use my birthday (24/09/2006) as reference.
       - Count total days passed since that date.
       - Reduce using %29.5 to fit within one lunar cycle.
       - Result = moonAge (0–29)

→ Step 3: Ask user for hemisphere.
       - Northern or Southern — both give very different skies.

→ Step 4: Select star list + brightness map.
       - Northern Sky → Orion, Perseus, Gemini, Draco, Polaris…
       - Southern Sky → Crux, Centaurus, Sirius, Canopus, etc.
       - Each star also has brightness ranking (1–4).

→ Step 5: Adjust visibility using moonAge.
       - Closer to New Moon → darker skies → more stars visible.
       - Closer to Full Moon → faint stars hide.

→ Step 6: Take AQI input.
       - Low AQI = clearer atmosphere.
       - Bad AQI cuts visibility of faint stars even further.

→ Step 7: Display final output.
       - Poetic line about current moon phase.
       - List stars visible tonight.
       
end.