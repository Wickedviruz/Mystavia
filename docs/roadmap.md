Byggsystem och CI/CD:

Sätt upp ett byggsystem (t.ex. CMake) som inkluderar alla dina mappar (client, server, shared).
Testa att bygga en enkel "Hello World" för både klienten och servern så att du vet att allt funkar.
Överväg att konfigurera ett CI/CD-flöde (t.ex. med GitHub Actions) för att automatisera byggen och tester.
Grundläggande prototyper:

Klient: Skapa en minimal game loop i main_client.cpp som hanterar inmatning och rendering (även om det bara är en tom fönsteröppning för tillfället).
Server: Skriv en enkel serverloop i main_server.cpp som lyssnar på inkommande anslutningar och skriver ut meddelanden.
Shared: Definiera grundläggande datastrukturer och nätverksprotokoll (även om det bara är enkla "ping-pong"-meddelanden).
Roadmap och milstolpar:

Gå tillbaka till din dokumentation (docs) och skriv en detaljerad roadmap. Lista upp milstolpar som t.ex. “minimal prototyp”, “grundläggande nätverk”, “första rendering av statisk värld”, etc.
Dela upp arbetet i mindre, hanterbara uppgifter som du kan checka av allteftersom.
Verktyg och bibliotek:

Välj de bibliotek du vill använda för grafik (OpenGL med SDL/SFML?) och nätverk (t.ex. Boost.Asio eller liknande).
Lägg till dessa bibliotek i ditt byggsystem och skriv några enkla exempelprogram för att bli bekant med dem.
Versionskontroll och dokumentation:

Se till att du gör frekventa commits med tydliga meddelanden.
Utöka dokumentationen med beslut du tar (t.ex. varför du valt ett visst bibliotek, hur arkitekturen ser ut, etc.).
Experimentera och iterera:

Börja experimentera med att koppla ihop klient och server genom att skicka enkla meddelanden.
När den kommunikationen är på plats, kan du börja integrera funktioner för spel-logik och rendering.


# Mystavia Roadmap

## Milstolpe 1: Minimal Prototyp
- [x] Sätta upp CMake-baserat byggsystem
- [x] Minimal "Hello World" för klient och server
- [x] Enkel gemensam kod (ping-pong-meddelanden)
- [X] Uppdatera Powershell till version 7

## Milstolpe 2: Grundläggande Nätverk
- [ ] Implementera socket-kommunikation (t.ex. med Boost.Asio)
- [ ] Klient-server synkronisering (ping/pong-test i realtid)

## Milstolpe 3: Första Rendering av Statisk Värld
- [ ] Integrera SDL/SFML och OpenGL
- [ ] Ladda och rendera en statisk 3D-miljö

## Milstolpe 4: Utökad Spel-logik och Multiplayer-funktioner
- [ ] Spelloop med input, kollisionsdetektion
- [ ] Implementera grundläggande multiplayer-logik

...
