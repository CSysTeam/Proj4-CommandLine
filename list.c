#include "list.h"

void handle_file(char* arg)
{
    DIR* dir;
    struct dirent* dent;

    dir = opendir(arg);
    if (dir != NULL)
    {
        while ((dent=readdir(dir)) != NULL)
        {
            if (strcmp (dent->d_name, "..") && strcmp (dent->d_name, ".") != 0)
            {
                printf("%s\n", dent->d_name);
            }
        }
    }
}
