#include<stdio.h>
#include<string.h>
void main()
{
    int k,i;
    char temp,c[200];
    printf("Shift Cryptography - Encryption\n");
    printf("Enter the Key : ");
    scanf("%d",&k);
    printf("Type in the message to encrypt : \n");
    fflush(stdin);
    gets(c);
    for (i=0;i<strlen(c);i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
        {
            temp=c[i]-'A';
            temp=(temp+k)%26;
            printf("%c",temp+'A');
        }
        else if(c[i]>='a'&&c[i]<='z')
        {
            temp=c[i]-'a';
            temp=(temp+k)%26;
            printf("%c",temp+'a');
        }
        else printf("%c",c[i]);
    }
}
