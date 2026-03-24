#include <stdio.h>
#include <string.h>
int main()
{
FILE *fp;
fp=fopen("write.txt","w");
if(fp==NULL)
printf("Error");
else 
{
    char ch;
    printf("File opened in write mode \n");
    char str[100];
    int k;
    printf("Enter the sentence: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]= '\0';

    printf("Enter your favourite number: ");
    scanf("%d",&k);

    
    fputs(str,fp);
    fprintf(fp,"%d",k);
    
    fclose(fp);
}
}