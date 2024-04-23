#include <stdio.h>
enum{
    Ready = 0b0001,
    NotEnoughToner = 0b0010,
    Damaged = 0b0100,
    NoPaper = 0b1000,
};
union{
    struct{
        unsigned char Ready : 1;
        unsigned char NotEnoughToner : 1;
        unsigned char Damaged : 1;
        unsigned char NoPaper : 1;
    };
    unsigned char flags;
} condition;

int main() {
    scanf("%x", &condition.flags);
    if (condition.Ready)
        printf("Ready is on\n");
    else
        printf("Ready is off\n");

    if (condition.NotEnoughToner)
        printf("NotEnoughToner is on\n");
    else
        printf("NotEnoughToner is off\n");

    if (condition.Damaged)
        printf("Damaged is on\n");
    else
        printf("Damaged is off\n");
    if (condition.NoPaper)
        printf("NoPaper is on\n");
    else
        printf("NoPaper is off\n");
    return 0;
}
