#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void clean_temp_folders() {
    char* folders_to_clean[] = {
        "/tmp/*",
        "/var/tmp/*",
        "/home/user/Downloads/*"  // Sostituisci con il percorso della tua cartella Downloads
    };

    for (int i = 0; i < sizeof(folders_to_clean) / sizeof(folders_to_clean[0]); i++) {
        char command[100];
        sprintf(command, "rm -rf %s", folders_to_clean[i]);
        system(command);
    }
}

void clear_recycle_bin() {
    system("rm -rf ~/.local/share/Trash/*");
}

int main() {
    clean_temp_folders();
    clear_recycle_bin();
    // Aggiungi altre operazioni di pulizia se necessario

    return 0;
}
