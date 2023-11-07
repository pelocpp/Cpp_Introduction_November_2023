# Beispiel Bankkonto

## Zielsetzung

Zielsetzung ist eine Klasse `Account`, die ein Bankkonto repr�sentiert.

Ein Bankkonto hat eine Kontonummer und einen Kontostand.
Es soll m�glich sein, Geldbetr�ge einzahlen und abheben zu k�nnen.
Ausk�nfte �ber das Bankkonto lassen sich bzgl. Kontonummer und Kontostand einholen.
Die Informationen des Kontos lassen sich in einer Konsole ausgeben.

## Beschreibung

Folgende C++&ndash;-Sprachmittel sollen zum Einsatz kommen:

  * Klasse und Objekt
  * Konstruktoren
  * Zugriffsklassen
  * *getter*- und *setter*-Methoden

Betrachten Sie Details in der Arbeitsweise an folgendem Beispiel:

```cpp
Account myACcount (12345);
myACcount.deposit(50);
myACcount.withdraw(25);
myACcount.print();
```

*Ausgabe*:


```cpp
Konto Nr. 12345: Guthaben 25 Euro.
```


*Hinweise*:

Bei der Kontoer�ffnung ist die Kontonummer zu �bergeben (dies werden wir verbessern).

## Weiterarbeit

  * Die Klasse `Account` vergibt die Kontonummern selbst
  * Ein Konto mit `std::cout` auf der Konsole ausgeben
  * Zwei Konto-Objekte vergleichen
  * Mehrere Konten in einem Array verwalten.

*Hinweise*:

einzahlen: engl. &ldquo;to deposit&rdquo;
abheben: engl. &ldquo;to withdraw&rdquo;
Kontostand: engl. &ldquo;balance&rdquo;

