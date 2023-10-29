# **SWO3-Übungen - WS2023/24 - Übungszettel 3 - Ausarbeitung**

## **Beispiel 1**

### **Lösungsidee**

Backtracking ist ein Algorithmus, der systematisch verschiedene Möglichkeiten ausprobiert und sich bei Bedarf rückwärts bewegt, um eine bessere Lösung zu finden. Hier beim Sudoku-Rätsel, wird versucht eine Zahl in eine leere Zelle einzusetzen und dann überprüft ob eine Regel verletzt wird und wenn notwendig geht er zurück und probiert eine andere Kombination durch. 

Grundsätzlich würde ich das eindimensionale Array in ein zweidimensionales Array umwandeln, um besser das Sudoku Grid darzustellen.
Dafür könnte man eine Hilfsfunktion programmieren "isSafe" die überprüft ob eine Regel verletzt ist. Die Funktion, die das Sudoku löst, wird zwei For-Schleifen verwenden und rekursiv arbeiten.

### **Testfälle**

Leichtes Sudoku

![](doc/sudoku1.png)

Schweres Sudoku

![](doc/sudoku2.png)

Leeres Sudoku

![](doc/sudoku3.png)

## **Beispiel 2**

### **Lösungsidee**

### **Testfälle**
