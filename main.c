#include <stdio.h>
int main() {
    int gg1, gg2, m1, m2, a1, a2, differenza;
    printf("Calcolo della differenza tra 2 date(gg/mm/aa:\n giorno data 1:");
    scanf("%d %d %d", &gg1, &m1, &a1);
    printf("Seconda data: ");
    scanf("%d %d %d ", &gg2, &m2, &a2);
    differenza= gg2-gg1+(m2-m1)*30+(a2-a1)*360;
    gg1= differenza%30;
    m1= (differenza/30)%12;
    a1= differenza/360;
    printf("La differenza delle 2 date e': %d giorni, %d mesi, %d anni\n", gg1, m1, a1);
}
