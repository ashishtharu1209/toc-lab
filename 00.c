//program for the implementation of DFA for accepting the string ending with 00
//11000

#include<stdio.h>


void main()
{
    char str[100],f='A';
    int i;
    printf("Enter any string of {0,1}");
    scanf("%s",str);

    for ( i = 0; str[i]!='\0'; i++)
    {
        switch (f)
        {
        case 'A' : if(str[i]=='0') f='B';
        else if(str[i]=='1') f='A';
            break;

        case 'B' : if(str[i]=='0') f='C';
        else if(str[i]=='1') f='A';
            break;

        case 'C' : if(str[i]=='0') f='C';
        else if(str[i]=='1') f='A';
            break;        
        default:
            break;
        }
    }
if(f=='C'){
    printf("\nString is accepted as it reached final state %c at the end",f);
}
else{
    printf("\nString is not accepted as it reached %c which is not the final state",f);
}
   
    
}