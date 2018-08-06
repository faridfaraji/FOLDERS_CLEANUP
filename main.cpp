

#include <cerrno>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include "dirent.h"
#include "quadtree.h"


int DrawTree(){


    auto * tree = new Quadtree("/Users/");


    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir ("/Users/Farid/Downloads")) != NULL) {
        /* print all the files and directories within directory */
        while ((ent = readdir (dir)) != NULL) {
            printf ("%s\n", ent->d_name);
        }
        closedir (dir);
    } else {
        /* could not open directory */
        perror ("");
        return EXIT_FAILURE;
    }


}




int main(){

DrawTree();

    return 0;


}
