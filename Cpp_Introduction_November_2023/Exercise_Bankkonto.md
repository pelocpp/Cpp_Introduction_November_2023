# Beispiel Bankkonto

## Zielsetzung

Zielsetzung ist eine Klasse `BankAccount`, die ein Bankkonto repräsentiert.

Ein Bankkonto hat eine Kontonummer und einen Kontostand.
Es soll möglich sein, Geldbeträge einzahlen und abheben zu können.
Auskünfte über das Bankkonto lassen sich bzgl. Kontonummer und Kontostand einholen.
Die Informationen des Kontos lassen sich in der Konsole ausgeben.

### Beschreibung

Folgende C++&ndash;-Sprachmittel sollen zum Einsatz kommen:

  * Klasse und Objekt
  * Konstruktoren
  * Zugriffsklassen
  * *getter*- und *setter*-Methoden

Betrachten Sie Details in der Arbeitsweise der Klasse `BankAccount` an folgendem Beispiel:

```cpp
BankAccount myAccount (12345);
myAccount.deposit(50);
myAccount.withdraw(25);
myAccount.print();
```

*Ausgabe*:


```cpp
Konto Nr. 12345: Guthaben 25 Euro.
```


*Hinweise*:

Bei der Kontoeröffnung ist die Kontonummer zu übergeben (dies werden wir verbessern).

*Hinweise*:

einzahlen: engl. &ldquo;*to deposit*&rdquo;<br />
abheben: engl. &ldquo;*to withdraw*&rdquo;<br />
Kontostand: engl. &ldquo;*balance*&rdquo;

### Erweiterung

Die Methode zum Abheben (`withdraw`) schlägt fehl, wenn auf dem Konto nicht genügend Geld vorhanden ist.
Wie könnte man dies in einer Verbesserung der `withdraw`-Methode zum Ausdruck bringen?

*Hinweise*:


```cpp
BankAccount myAccount (12345);
myAccount.deposit(25);
bool succeeded = myAccount.withdraw(50);
if (! succeeded) {
    std::cout << "Need more money :)" << std::endl;
}
```


### Erweiterung

Wir ergänzen nun die Klasse `BankAccount` um den Aspekt *Zinsen*.
Da der Zinsatz variieren kann, fügen wir der Klasse eine Methode
`setInterestRate` hinzu:

```cpp
void setInterestRate (double rate);  // stellt den aktuellen Zinsatz ein
```

Damit ist der Zinssatz im Konto vorhanden bzw. akualisiert.

Werden am Ende eines Monats oder eines Quartals die Zinsen auf dem Konto gutgeschrieben,
rufen wir die Methode

```cpp
void updateInterest (int days);
```

auf. Der Parameter `days` gibt die Anzahl der Tage an, für die die Zinsen gutgeschrieben werden.



### Weiterarbeit

  * Die Klasse `Account` vergibt die Kontonummern selbst
  * Zwei Konto-Objekte vergleichen
  * Ein Konto mit `std::cout` auf der Konsole ausgeben
  * Mehrere Konten in einem Array verwalten.
