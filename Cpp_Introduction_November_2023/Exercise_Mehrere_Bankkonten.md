# Bankkonten  und Vererbung

## Zielsetzung

Folgende C++&ndash;-Sprachmittel sollen zum Einsatz kommen:

  * �berschreiben von Methoden
  * Schl�sselw�rter `virtual`, `override` und `final`
  * Schnittstellekonzept (Interface)
  * Abstrakte Basisklasse

## Beschreibung


Erstellen Sie eine Klasse `Account`, die das Guthaben eines Kontos verwaltet.
Die Kontonummer wird von der Klasse  `Account` mit Hilfe einer Klassenvariable bestimmt.

Die Klasse soll Methoden `deposit` zum Einzahlen und `withdrawal` zum Abheben besitzen.

Ausk�nfte �ber das Bankkonto k�nnen mit Hilfe der Eigenschaften `getNumber` (Kontonummer)
und `getBalance` (Kontostand) eingeholt werden.

---

Da das Bankinstitut mehrere Arten von Konten seinen Kunden anbietet,
ist der Klassenentwurf in mehreren Ebenen zu gestalten:

  * Schnittstelle `IAccount` &ndash; Beschreibung der Methoden der Klasse `Account`.<br />
    Oder anders formuliert: Was sollten alle Realisierungen einer Konto-Klasse f�r Methoden haben?
  * Klasse `Account` &ndash; Teilweise Realisierung der Methoden der Klasse `Account` &ndash; Beschreibung siehe weiter unten.
  * Klassen `CurrentAccount` (Girokonto), `StudentsAccount` und `DepositAccount` (Sparbuch).

---

## Girokonten, Sch�lerkonten und Sparb�cher

Schreiben Sie drei weitere Klassen `CurrentAccount` (Girokonto), `StudentsAccount` (Konto ohne �berziehungsrahmen) und `DepositAccount` (Sparbuch), die Sie geeignet mit der Klasse `Account` in Beziehung setzen.
Die drei Klassen sollen folgende Eigenschaften aufweisen:

  * Klasse `CurrentAccount`</br>Ein Girokonto darf um ein Dispolimit �berzogen werden,
    das bei der Kontoer�ffnung festzulegen ist. Das Dispolimit ist als Eigenschaft der Klasse `CurrentAccount` zu realisieren
    und kann zu einem sp�teren Zeitpunkt auch angepasst werden.
    Der Einfachheit halber legen wir zu Grunde, dass f�r das �berziehen des Girokontos keine Zinsen zu entrichten sind.

  * Klasse `StudentsAccount`</br>Ein Konto f�r Sch�ler und Studenten verh�lt sich im Prinzip
    wie ein Girokonto. Der einzige Unterschied besteht darin, dass es keinen �berziehungsrahmen besitzt.

  * Klasse `DepositAccount`</br>Auf einem Sparkonto fallen f�r das eingezahlte Geld Zinsen an.
    Der Zinssatz des Sparkontos ist als Eigenschaft der Klasse `DepositAccount` darzustellen.
    Nach der Kontoer�ffnung kann der Zinssatz nicht mehr ge�ndert werden.
    F�r die Gutschrift der Zinsen auf dem Sparkonto bedarf es einer zus�tzlichen Methode `computeInterest`.
    Diese Methode besitzt als Parameter die Anzahl der Tage, f�r die die Zinsen gutzuschreiben sind.
    Die Zinsen sind nach der Formel

    <img src="Bankkonto_Zinssatz.png" width="250">

    zu berechnen.

---

Die Programmausgabe studieren Sie an folgenden Codefragmenten:

*Beispiel*:

```cpp
CurrentAccount ca(1000);
ca.deposit(100);
ca.withdraw(40);
std::cout << ca << std::endl;

StudentsAccount sa;
sa.deposit(50);
sa.withdraw(25);
std::cout << sa << std::endl;

DepositAccount da(4.0);
da.deposit(200);
da.withdraw(120);
da.computeInterest(31);
std::cout << da << std::endl;
```

*Ausgabe*:

```cpp
Testing accounts:
CurrentAccount [Nr. 10000]:
   Balance=60;
   Limit=1000.

StudentsAccount [Nr. 10001]:
   Balance=25;

DepositAccount [Nr. 10002]:
   Balance=80.2718;
   InterestRate=4.
```

