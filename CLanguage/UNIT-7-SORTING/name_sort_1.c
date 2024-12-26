#include<stdio.h>
#include<string.h>

int main(){

    char temp[10];
    char name[3][10];
    
    for (int i=0; i<3; i++){
        scanf("%s",&name[i]);
        }
    
    for (int i=0; i<2; i++){
        for (int j=(i+1);j<3;j++){
            if (strcmp(name[i], name[j])>0){
                
                strcpy(temp, name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
                
                }}}
    
    printf("\n");
           
    for (int i=0; i<3; i++){
        printf("%s\n", name[i]);
        }
    return 0;
}