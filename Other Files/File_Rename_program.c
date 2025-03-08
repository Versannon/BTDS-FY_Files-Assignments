#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

void renameFilesInDirectory(const char *directoryPath) {
    struct dirent *entry;
    DIR *dp = opendir(directoryPath);

    if (dp == NULL) {
        perror("Error opening directory");
        return;
    }

    while ((entry = readdir(dp))) {
        struct stat entryInfo;
        char fullPath[256];
        snprintf(fullPath, sizeof(fullPath), "%s/%s", directoryPath, entry->d_name);
        if (stat(fullPath, &entryInfo) == 0 && S_ISREG(entryInfo.st_mode)) { // Check if it's a regular file
            char *oldName = entry->d_name;
            const char *prefix = "OTDOWNLOADER.COM] ";
            size_t prefixLen = strlen(prefix);
            if (strncmp(oldName, prefix, prefixLen) == 0) { // Check if the file name starts with the prefix
                char newName[256];
                snprintf(newName, sizeof(newName), "%s/%s", directoryPath, oldName + prefixLen); // Remove prefix
                char oldPath[256];
                snprintf(oldPath, sizeof(oldPath), "%s/%s", directoryPath, oldName);

                if (rename(oldPath, newName) == 0) {
                    printf("Renamed %s to %s successfully.\n", oldPath, newName);
                } else {
                    perror("Error renaming file");
                }
            }
        }
    }

    closedir(dp);
}

int main() {
    const char *directoryPath = "D:\\Music X\\Phonk"; // Specify your directory path here
    renameFilesInDirectory(directoryPath);
    return 0;
}