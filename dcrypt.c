#include<stdio.h>
#include<stdlib.h>
#include<string.h>

     int main(){
         char intputFile[50];
         char outputFile[50];
         char ch;
         int numAscii;


         FILE *arquivo, *arquivo2;
         printf("\n Digite o nome do arquivo que ser� descripitado: ");
         scanf("%s", intputFile);

         printf("\n Digite o nome da descriptografia: ");
         scanf("%s", outputFile);



         arquivo=fopen(intputFile,"r");
         if(arquivo==NULL){
            printf("\n Esse texto n�o existe...\n");
            exit(0);
         }
         else{
            arquivo2=fopen(outputFile, "w");
            ch=fgetc(arquivo);
            while(ch!=EOF){
                numAscii=(int)ch;
                numAscii=numAscii-5;
                fprintf(arquivo2,"%c",numAscii);
                ch=fgetc(arquivo);
            }
            fclose(arquivo2);
         }
         fclose(arquivo);
         printf("\n Arquivo descriptado com o nome %s.", outputFile);
         return 0;
}
