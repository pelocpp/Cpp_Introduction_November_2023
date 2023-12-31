# �bung zu Zeichenketten

## Zielsetzung

Folgende C++&ndash;-Sprachmittel sollen zum Einsatz kommen:

  * Umgang mit der Klasse `std::string`
  * Methoden `substr` und `append`
  * *getter*-Methode `length`
  * Index-Operator `operator []`
  * Weitere Bibliotheksfuktionen `std::isdgit` und `std::stoi`


## Beschreibung

Schreiben Sie eine Funktion `verifyDateFormat`, der ein `std::string`-Objekt �bergeben wird.
Diese Zeichenkette enth�lt ein Datum in der Form *dd.mm.jjjj*.
Die Funktion �berpr�ft den korrekten Aufbau der Zeichenkette.

Schreiben Sie eine weitere Funktion `dateToWord`, die ebenfalls ein `std::string`-Objekt als Argument hat:

```cpp
std::string dateToWord(std::string date);
```

Diese Funktion wandelt dieses Datum so um, das der Monat als Wort ausgeschrieben ist.
F�hrende Nullen der Tagesangabe werden dabei gel�scht.

Wenn der Funktion zum Beispiel *01.11.2023* �bergeben wird,
dann �ndert sie diese Zeichenkette in *1. November 2023* um.
F�r den Fall, dass eine Zeichenkette mit einem falschen Format �bergeben wird,
wird eine leere Zeichenkette zur�ckgegeben.


*Beispiel*:

```cpp
01: void testDateToWord()
02: {
03:     // test 'dateToWord'
04:     std::string s = dateToWord("01.11.2023");
05:     std::cout << s << std::endl;
06: }
```

*Ausgabe*:


```
1. November 2023
```
