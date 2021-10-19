#include<stdio.h>
#include<dirent.h>

int main(){
    FILE*  tmpFile;
    DIR* directory;
    struct dirent* file;
    if(tmpFile = fopen("tempFile.txt" , "w+")){
        fputs("File testing " , tmpFile);
        printf("file created \n");

        fclose(tmpFile);
    }
    if(directory = opendir(".")){
        printf("directory is opened\n");
        while(file  = readdir(directory)){
            printf("filename: %s\n" ,file->d_name );
        }

//      puts( directory.dd_name);
        closedir(directory);
    }
    else printf("directory error\n");

}
