# 1. What is the type of variable v?
int i = 42;
const auto v = &i;

const int*

my answer 3.

# 2. Which of below initializations are correct in C++14?

struct P { int a, b };

1.    int values[] = { 1, 2, 3, 4, 5 };
2.    P v = { 1, 4 };
3.    P v{1, 4};
4.    P v(1, 4);
5.    std::vector<int> v = { 1, 2, 3, 4 };
6.    std::vector<int> v(1, 2, 3, 4);
7.    int v[] = { 1, 3, 5, 6.6 };

1. assignment with initializer_list -- OK
2. assignment with initializer_list -- OK
3. constructor with initializer_list -- NOK - not defined
4. constructor with two arguments -- OK - not defined, but i think that it is automatically generated (it's aggregat) and it will be assigned
5. assignment with initializer_list - OK
6. NOK - this constructor does not exist
7. I think that it is not ok. Different types of values on initializer list.

# 3. Which of below elements can be marked as deleted (= delete;)?

1.    Domyślny konstruktor
2.    Konstruktor kopiujący
3.    Konstruktor przenoszący
4.    Kopiujący operator przypisania
5.    Przenoszący operator przypisania
6.    Destruktor
7.    Wolna funkcja
8.    Metoda klasy
9.    Pole klasy

I thnik that it can be marked as deleted:
   I am sure: 1, 2, 3, 4, 5, 6

I don't think that it can be marked as deleted:
   7, 8, 9.
