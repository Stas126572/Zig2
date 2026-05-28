#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "iso_hash.h"

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Use: %s <file.c>\n", argv[0]);
        return 0;
    }

    FILE *f = fopen(argv[1], "r");
    if (!f) {
        perror("Fopen: ");
        return 2;
    }

    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char *p = line;
        while (*p == ' ' || *p == '\t') p++;
        
        if (*p == '#') {
            p++;
            while (*p == ' ' || *p == '\t') p++;
            
            if (strncmp(p, "include", 7) == 0) {
                p += 7;
                while (*p == ' ' || *p == '\t') p++;
                
                if (*p == '<') {
                    p++;
                    char header_name[64];
                    int i = 0;
                    while (*p != '>' && *p != '\0' && i < 63) {
                        header_name[i++] = *p++;
                    }
                    header_name[i] = '\0';
                    
                    if (in_word_set(header_name, strlen(header_name)) == NULL) {
                        fprintf(stderr, "One unportable include found: <%s>\n", header_name);
                        fclose(f);
                        return 1; 
                    }
                }
            }
    	}
    }

    fclose(f);
    printf("Absolute portable\n", argv[1]);
    return EXIT_SUCCESS;
}

