
#include <stdio.h>
#include <string.h>
#include <peekpoke.h>

void neo6502_system_reset(void);

int main(void)
{
    char STR[40];
    unsigned k;

    for (;;)
    {
        printf("Please type a string to hexify (timer=%02x):\n", PEEK(0xff80));
        fgets(STR, sizeof(STR), stdin);
        for (k = 0; STR[k] != '\0'; ++k)
        {
            printf("  STR[%u] = 0x%02x\n", k, STR[k]);
        }
        if (strcmp(STR, "reset\n") == 0)
        {
            break;
        }
    }
    printf("*** BYE! ***\n");
    neo6502_system_reset();
    return 0;
}
