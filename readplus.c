#include <stdio.h>
int main()
{
FILE *fp;
fp=fopen("hello.txt","r+");
if(fp==NULL)
printf("Error");
else 
{
    char ch;
    printf("File opened in read plus mode \n");
    char str[10];
    int k;
    printf("Enter your name: ");
    scanf("%s",str);

    printf("Enter your favourite number: ");
    scanf("%d",&k);

    
    fputs(str,fp);
    fprintf(fp,"%d",k);
    rewind(fp);
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
}
}