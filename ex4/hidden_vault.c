#include <stdio.h>
#include <string.h>


void secret(){
    // char message[] = "CTF_ACAD{supersecretmessage}";
    char messag2[] = "McVBbIFl7XzgEBYdKjIIashd9a8h";
    int chars[] = {67,84,70,95,65,67,65,68,123,115,117,112,101,114,115,101,99,114,101,116,109,101,115,115,97,103,101,125};
    int len = strlen(messag2);
    for (int i=0; i<len-2; i++){
        messag2[i] = (char)chars[i];
    }
    printf("%s\n", messag2);
}

void run(){
    char buf[128];
    int r,len = 0;
    
    printf("Hello,\nTo gain the secret, you have to give me the secret message: ");
    fflush(stdout);
    fgets(buf, 127, stdin);
    len = strlen(buf);
    buf[len]=0;
    r= strncmp(buf, "mysecret", 8);
    if(result==0){
        secret();
    } else {
        printf("Wrong message, try again!\n");
    }
    

}

int main(){
    run();
    return 0;
}
