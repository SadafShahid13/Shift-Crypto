#include<stdio.h>
#include<string.h>
void main()
{
    int k,i;
    char temp,c[200];
    printf("Shift Cryptography - Encryption\n");
    printf("Enter the Key : ");
    scanf("%d",&k);
    printf("Type in the message to decrypt : \n");
    fflush(stdin);
    gets(c);
    for (i=0;i<(strlen(c));i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
        {
            temp=c[i]-'A';
            if(temp>=k)
                temp=(temp-k)%26;
            else temp=temp+26-k;
            printf("%c",temp+'A');
        }
        else if(c[i]>='a'&&c[i]<='z')
        {
            temp=c[i]-'a';
            if(temp>=k)
                temp=(temp-k)%26;
            else temp=temp+26-k;
            printf("%c",temp+'a');
        }
        else printf("%c",c[i]);
    }
}
