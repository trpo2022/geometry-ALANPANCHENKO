#include <stdio.h>
int main()
{
    FILE* TXT;
    char n[20];
    char* an;
    TXT = fopen("geometry.txt", "r");
    if (TXT == 0) {
        printf("Oshibka\n");
        return 0;
    } else
        printf("Schitany stroki:\n");
    do {
        an = fgets(n, sizeof(n), TXT);
        if (an == NULL) {
            if (getc(TXT) != 0) {
                printf("Chtenie fajla 'geometry' zakoncheno\n");
                break;
            } else {
                printf("\nOshibka fajla 'geometry'\n");
                break;
            }
        }
        printf("%s", n);
    } while (1);
    printf("Rezul'tat:");
    if (fclose(TXT) == 1)
        printf("Oshibka\n");
    else
        printf("Vypolneno\n");
    return 0;
}