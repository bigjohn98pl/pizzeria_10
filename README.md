# Projekt Pizzeria "BIT PIZZA"
---
Janusz Zychal, Ewelina Nytko

##Wymagania projektowe:
>Produkty oraz informacje o promocjach powinny być przechowywane w pliku tekstowym.

>Aplikacja powinna umożliwiać:

>- zamówienie produktów w zestawach,
- zamówienie pojedynczych produktów,
- zamówienie produktów w promocjach:
 - pizza 50 / 50,
 - przy zakupie dwóch pizz napój gratis,
 - przy zakupie powyżej 100 zł zapłacisz 20% taniej.
- generowanie paragonu po realizacji zamówienia.

---
BIT PIZZA to aplikacja konsolowa, przeznaczona do zamawiania pizz, napoi oraz zestawów. Program pozwala na wybranie produktu z listy. Aplikacja zawiera pliki tekstowe, które w łatwy sposób umożliwiają edycję menu. Program posiada menu, w którym są zawarte poszczególne funkcje takie jak: 

- lista pizz
- lista napoi
- zestawy
- opis dostępnych promocji
- koszyk z aktualnym zamówieniem

#Narzędzia z jakich korzystaliśmy
 - Qt Creator 6.0.1, Bazujący na Qt 6.2.2 (MSVC 2019, 64 bitowy)
 - Git
---
#Instrukcja obsługi
W programie użytkownik porusza się za pomocą wprowadzenia odpowiadającej mu liczby.
W głównym menu znajduje się 6 opcji: 

`1. Lista Pizz`

`2. Lista napoi`

`3. Lista zestawow`

`4. Promocje`

`5. Koszyk`

`6. Wyjdz`
--- 
`Opcja 1`

Pod tym numerem znajduje się lista dostępnych do zamówienia pizz wraz z ich składnikami i ceną.
Pod udostępnioną listą zawarte jest podmenu, w którym dostępne są dwie kolejne opcje:
 
`1. Zamow`

`0. Powrot do menu`

 Po wybraniu opcji nr 1 użytkownik dopiera odpowiadającą mu pizzę oraz jej ilość. 

---
`Opcja 2` 
 
Analogicznie jak w opcji 1 głównego menu, wyświetlana jest lista napoi, w której użytkownik może zamówić napoje i ich ilość. 

---
`Opcja 3`

 Funkcja wyświetla gotowe zestawy, które można zamówić i wybrać ich ilość.
 
--- 
`Opcja 4`  

Wyświetlane są dostępne promocje (promocje można zmieniać w pliku tekstowym podobnie jak listy produktów).

---
`Opcja 5`

Ukazuje się koszyk, w którym zawarte są wszystkie produkty i promocje wybrane przez  użytkownika.
Tutaj znajduje się podmenu, które zawiera opcje:

`1. Kupuje`

`2. Wyczysc koszyk`

`0. Powrot do menu`

Po wybraniu 1 numeru wyświetlany jest paragon i suma do zapłaty.

--- 
`Opcja 6` 

Wyjście z programu

---
##PROMOCJE

Kiedy użytkownik spełnia warunki promocyjne, zostaje poinformowany o promocji. Jeśli chce z niej skorzystać, musi wyrazić na nią zgodę. 
Promocje się nie łączą.

---


Podział zadań w projekcie:

Janusz Zychal (przedstawiciel)
=============
- stworzenie głównych klas
- stworzenie plików nagłówkowych
- stworzenie logo
- utworzenie głównego menu
- tworzenie listy zestawów
- tworzenie promocji dot. powyżej 100zł 
- poprawa w wyświetlaniu łącznej sumy w paragonie i koszyku
- promocja 50/50
- wyświetlanie cen promocyjnych
- logika promocji
- czyszczenie zamówienia

Ewelina Nytko
=============
- tworzenie listy pizz
- tworzenie listy napoi
- odpowiedni odczyt z plików tekstowych
- wyświetlanie koszyka
- poprawa błędów i literówek
- praca nad wyświetlaniem i interakcją w menu
- paragon
- promocja 2 pizze + napój 
- data i godzina w paragonie 

