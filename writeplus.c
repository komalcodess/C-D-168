#include <stdio.h>
int main()
{
FILE *fp;
fp=fopen("write.txt","w+");
if(fp==NULL)
printf("Error");
else 
{
    char ch;
    printf("File opened in write mode \n");
    char str[100];
    int k;
    printf("Enter your name: ");
    scanf("%s",str);

    printf("Enter your favourite number: ");
    scanf("%d",&k);

    
    fputs(str,fp);
    fprintf(fp,"%d",k);
    
    fclose(fp);
}
}