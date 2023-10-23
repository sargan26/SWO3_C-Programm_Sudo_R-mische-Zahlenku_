# **SWO3-Übungen - WS2023/24 - Übungszettel 3**

## **Beispiel 1: Sudoku**

Implementieren Sie eine Funktion

```C
void sudoku (int grid []);   // grid consists of 81 elements
```

die ein im C-Array `grid` gegebenes Sudoku nach dem Backtracking-Schema löst.
Entnehmen Sie der Seite <https://en.wikipedia.org/wiki/Sudoku> alles Wesentliche
über den Aufbau von Sudokus. Testen Sie Ihre Funktion ausführlich und geben Sie
auch die (empirisch ermittelten) Laufzeiten für Sudokus mit verschiedenen
Schwierigkeitsgraden an.

## **Beispiel 2: Römische Zahlen**

Implementieren Sie ein C-Modul `roman` mit der folgenden Schnittstelle:

```C
int  roman_to_decimal (char const r []);    // returns -1 in case of an error in r
void decimal_to_roman (int d, char r []);   // assume that 0 < d < 3000
```

*Anmerkungen:* Die Symbole des römischen Zehnersystems und ihre dezimalen Werte
sind wie folgt definiert:

I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

Römische Zahlen werden wie folgt notiert:

1. Von links beginnend mit dem Symbol der größten Zahl (z.B. CXI = 111),

1. die Symbole I, X und C werden maximal dreimal hintereinander geschrieben
   (z.B. CXXIII = 123),

1. die Symbole V, L und D werden jeweils nur einmal geschrieben und

1. steht ein Symbol einer kleineren Zahl vor dem einer größeren, so wird dessen
   Wert (also der kleine-re) von jenem des folgenden (dem größeren) subtrahiert
   (z.B. XC = 90 und MCMLXV = 1965).
