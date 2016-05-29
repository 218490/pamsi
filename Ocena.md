# Lab2 - tablica dynamiczna

Brak sprawozdania.
Sposób pomiaru czasu nie jest właściwy.
``static_cast <double>(clock()) /CLOCKS_PER_SEC;``
Proszę korzystać z ``gettimeofday()`` http://linux.die.net/man/2/gettimeofday

Ocena: 3

# Lab3 - projektowanie obiektowe

IRunnable powinno być interfejsem!
Sprawozdanie niekompletne, sama tabela z wynikami pomiarów - brak jakiejkolwiek
analizy, wniosków, czy chociaż wykresu.

Ocena: 3

# Lab4 - ADT, lista / kolejka / stos

Sprawozdanie zawiera jedną linijkę tekstu i tabelę - brak jakiejkolwiek
analizy, wniosków, czy chociaż wykresu. Nie jest to zgodne z wyznaczonymi
zasadami.

IRunnable nadal nie jest interfejsem.

Ocena: 3

# Lab5 - sortowanie

# Lab6 - tablica asocjacyjna

Sprawozdanie nieco lepsze od poprzednich, zawiera podstawowe wnioski z przeprowadzonych
eksperymentów. Brak omówienia rebalansowania tablicy w przypadku jej powiększania,
zastosowano tablicę o stałej ilości bucketów.

Brak formatowania kodu (ciała funkcji zapisywane w jednej linii) utrudnia sprawdzanie.

Ocena: 4

# Lab7 - drzewa

Eksperyment przerwany na n=80 000 000, dane przedstawione na wykresie nie są jednoznaczne
i warto było przeprowadzić kolejne pomiary. W dodatku z tego co rozumiem z kodu
w pliku ``DrzewoTest.cpp`` to pomiary nie są powtarzane, a ich czasy uśredniane,
co jest istotnym błędem.

IRunnable przybrał w końcu prawidłowy kształt.

Ocena: 4

# Lab 8 - grafy (DFS, BFS)

Sprawozdanie poprawnie adresuje błędy w implementacji.

Ocena: 4,5

# Lab 9 - grafy (b&b)

Brak porównania wersji klasycznej b&b z wersją z pamięcią rozwiniętych śieżek.
Wykresy wydają się potwierdzać tezę, jakoby pomiary nie były powtarzane.

Ocena: 4
