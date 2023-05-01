//program to find prefix, suffix and substring from given string

#include<stdio.h>
#include<string.h>

int main(){
    int ch,i,j,k,x,y;
    char string[50];
    printf("Enter\n1. Prefix\n2. Suffix\n3. Substring\n");

    while (1)
    {
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter string\n");
            scanf("%s",&string);
            prefix(string);
            break;

        case 2:
            printf("Enter string\n");
            scanf("%s",&string);
            suffix(string);
            break;

        case 3:
            printf("Enter string\n");
            scanf("%s",&string);
            printf("Enter starting position\n");
            scanf("%d",&x);
            printf("Enter ending position\n");
            scanf("%d",&y);
            substring(string,x,y);
            break;
        
        default:
            break;
        }
    } 
return 0;  
}

void prefix(char string[]){
    int i,j,k;
    char prefix[20];
    printf("The prefix of given string is\n");
    for ( i = strlen(string); i >=0; i--)
    {
        for ( j = 0; j < i;  j++)
        {
            prefix[j]=string[j];
        }
    prefix[j]='\0';
    printf("%s\n",prefix);   
    }

    
}

void suffix(char string[]){
    int i,j,k;
    char suffix[20];
    printf("The suffix of given string is\n");
    for ( i = 0; i <= strlen(string); i++)
    {
        k=i;
        for ( j= 0; j < strlen(string); j++)
        {
            suffix[j]=string[k];
            k++;
        }
        
        suffix[j]='\0';
        printf("%s\n",suffix);
    }  
}

void substring(char string[],int x, int y){
    int i,j,k=0;
    char substring[20];
    printf("The desired substring of given string is\n");
    for ( i = x-1; i < y; i++)
    {
        substring[k]=string[i];
        k++;
    }
    substring[k]='\0';
    printf("%s\n",substring);
}
