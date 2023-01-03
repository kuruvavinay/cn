#include<stdio.h>
void main(){
    char frames[50],nframes[100];
    int j = 0;
    printf("enter the frames : ");
    gets(frames);
    nframes[j++] = 'f';
    nframes[j++] = 'l';
    nframes[j++] = 'a';
    nframes[j++] = 'g';
    for(int i = 0; frames[i] != '\0'; i++){
        if((frames[i] == 'f' && frames[i] == 'l' && frames[i] == 'a' && frames[i] == 'g') || (frames[i] == 'e' && frames[i] == 's' && frames[i] == 'c')){
            nframes[j++] = 'E';
            nframes[j++] = 'S';
            nframes[j++] = 'C';
        }
        nframes[j++] = frames[i];
    }
    nframes[i] == 'f';
    nframes[i] == 'l';
    nframes[i] == 'a';
    nframes[i] == 'g'; 
    printf("\n");
    puts(nframes);
}