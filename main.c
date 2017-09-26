#include <stdio.h>

int doubleChar(char *, char *);

int main() {
    char Text[] = "Leck2222mich   dfsdf";
    char Verschluesselt[100] = {0};

    int AnzVerdoppelt = 0;
    AnzVerdoppelt = doubleChar(Text, Verschluesselt);
    printf("urspruenglicher Text:\n");
    printf("%s\n\n", Text);
    printf("verdoppelte Botschaft:\n");
    printf("%s\n\n", Verschluesselt);
    printf("dabei wurden %i Zeichen verdoppelt\n", AnzVerdoppelt);
}


int doubleChar(char *src, char *dest) {
    int pin = 0, pout = 0, doubled = 0;
    char ltr;

    while(*(src + pin) != '\0')
    {

        ltr = *(src + pin);

        *(dest + pout) = ltr;

        if ((ltr >= 'a' && ltr <= 'z') || (ltr >= 'A' && ltr <= 'Z'))
        {
            *(dest + pout + 1) = ltr;
            pout++;
            doubled++;
        }
    pin++;
    pout++;
    }

    return doubled;
}
