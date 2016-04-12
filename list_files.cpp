#include <dirent.h>
#include <stdio.h>

int main() {

DIR *dir;
struct dirent *ent;

if ((dir = opendir ("./data")) != NULL) {
  /* print all the files and directories within directory */
  while ((ent = readdir (dir)) != NULL) {
    printf ("%s\n", ent->d_name);
  }
  closedir (dir);
  return 0;
} else {
  /* could not open directory */
  perror ("");
  return 1;
}
}
