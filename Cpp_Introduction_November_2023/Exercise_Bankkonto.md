# Beispiel Bankkonto

## Zielsetzung

Zielsetzung ist eine Klasse `BankAccount`, die ein Bankkonto repr�sentiert.

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

Betrachten Sie Details in der Arbeitsweise der Klasse `BankAccount` an folgendem Beispiel:

```cpp
BankAccount myACcount (12345);
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

*Hinweise*:

einzahlen: engl. &ldquo;to deposit&rdquo;
abheben: engl. &ldquo;to withdraw&rdquo;
Kontostand: engl. &ldquo;balance&rdquo;

## Erweiterung

Die Methode zum Abheben (`withdraw`) schl�gt fehl, wenn auf dem Konto nicht gen�gend Geld vorhanden ist.
Wie k�nnte man dies in einer Verbesserung der `withdraw`-Schnittstelle zum Ausdruck bringen?

*Hinweise:


```cpp
BankAccount myACcount (12345);
myACcount.deposit(25);
bool succeeded = myACcount.withdraw(50);
if (! succeeded) {
    std::cout << "Need more money :)" << std::endl;
}
```


## Erweiterung

Wir erg�nzen nun die Klasse `BankAccount` um den Aspekt *Zinsen*.
Da der Zinsatz variieren kann, f�gen wir der Klasse eine Methode
`setInterestRate` hinzu:

```cpp
void setInterestRate (double rate);
```

Damit ist der Zinssatz im Konto vorhanden bzw. akualisiert.

Werden am Ende eines Monats oder eines Quartals die Zinsen auf dem Konto gutgeschrieben,
rufen wir die Methode

```cpp
void updateInterest (int days);
```

auf. Der Parameter gibt die Anzahl der Tage an, f�r die Zinsen gutgeschrieben werden.



## Weiterarbeit

  * Die Klasse `Account` vergibt die Kontonummern selbst
  * Ein Konto mit `std::cout` auf der Konsole ausgeben
  * Zwei Konto-Objekte vergleichen
  * Mehrere Konten in einem Array verwalten.

