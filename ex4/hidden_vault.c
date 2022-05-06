#include <stdio.h>
#include <string.h>


void secret(){
    char messag2[] = "McVBbIFl7XzgEBYdKjIIashd9a8ha9sdaushd8asba3qmoief";
    int chars[] = {67,84,70,95,65,67,65,68,123,80,97,116,105,101,110,99,101,95,121,111,117,95,109,117,115,116,95,104,97,118,101,95,109,121,95,121,111,117,110,103,95,112,97,100,97,119,97,110,125};
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
    r= strncmp(buf, "MarsIsInternationalWaters", 25);
    if(r==0){
        secret();
    } else {
        printf("Wrong message, try again!\n");
    }
    

}

int main(){
    run();
    return 0;
}
