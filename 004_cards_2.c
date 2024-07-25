#include <stdio.h>
int main()
{
    char *cards_wrong = "JQK"; // this create two things!!
    // using pointer above for below up will segfault!
    char cards[] = "JQK"; // this create two things as well?
    char cards2[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    printf("address of JQK: %i\n", cards_wrong);
    printf("address of pointer var of JQK: %i\n", &cards_wrong);
    printf("address of cards: %i\n", cards);
    printf("address of pointer of cards: %i\n", &cards);
    printf("address of cards2: %i\n", cards2);
    return 0;
}