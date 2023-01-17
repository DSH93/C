#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * myRead(const char * file);
int main(int argc, const char* argv[]) {
    if(argc != 2) {
        printf("Num of Argument Fairlie");
        exit(-1);
    }
    myRead(argv[1]);
    return 0;
}
char * myRead(const char * file){
    FILE * fileIn = fopen(file,"r");
    char * buf = NULL;
    size_t bufSize = 0;
    char * content = NULL;


    if ( fileIn == NULL ){
        fprintf(stderr,"Faild read %s",file);
        exit(-1);
    }

    while (getline(&buf,&bufSize,fileIn) != EOF) {
        int n = (content == NULL)? 0 : strlen(content);
        content = (char*)realloc(content, (n+ strlen(buf)+1)*sizeof(char));
        if(content == NULL) {
            fprintf(stderr, "Failed to allocate %lu bytes\n", (n+strlen(buf)+1)*sizeof(char));
            exit(-1);
        }
        strcpy(content+n,buf);
    }
    free(buf);
    fclose(fileIn);
    printf("%s",content);
    return content;

}