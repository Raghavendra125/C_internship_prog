
#include <stdio.h>
int printR[7][5];
int printA[7][5];
int printG[7][5];
int printH[7][5];
int printA1[7][5];
int printV[7][5];

void Gap(){
for(int i=0;i<7;i++){
    for(int j=0;j<1;j++)
    {
        printf(" ");
    }
}
}
void printConsole(){
for(int i=0;i<7;i++){
  //  gap();
    for(int j=0;j<5;j++){
        char ch=printR[i][j];
        printf("%c",ch);
    }
    Gap();
    for(int j=0;j<5;j++){
     char ch=printA[i][j];
     printf("%c",ch);
    }
       Gap();
    for(int j=0;j<5;j++){
     char ch=printG[i][j];
     printf("%c",ch);
    }


     Gap();
    for(int j=0;j<5;j++){
     char ch=printH[i][j];
     printf("%c",ch);
    }
     Gap();
    for(int j=0;j<5;j++){
     char ch=printA1[i][j];
     printf("%c",ch);
    }
     Gap();
    for(int j=0;j<5;j++){
     char ch=printV[i][j];
     printf("%c",ch);
    }
    printf("\n");
} // end top most for
} // end printConsole()*/

void R(){
    system("color 6C");
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
            if(j==0||i==0||j==4&&i<3||i==3||i==3&&j==1||i==4&7j==2
||i==5&&j==3||i==6&&j==4||i==4&&j==2)
{
        printR[i][j]=42;
  }
else{
         printR[i][j]=32;
        }
}}}

void A(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0&&i!=0||i==0&&j!=0&&j!=4||j==4&&i!=0||i==3)
       {
            printA[i][j]=42;
        }


        else{
                   printA[i][j]=32;
                 }
 }}}

void G(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
            if(j==0&&i!=0&&i!=6||i==0&&j!=0&&j!=4||i==6&&j!=0&&j!=4||j==4
&&i>4&&i!=6||i==4&&j!=1&&j!=0||i==1&&j==4)
{
     printG[i][j]=42;
  }
  else{
            printG[i][j]=32;
            }
           }}}

void H(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0||i==3||j==4)
 {
      printH[i][j]=42;
  }
  else{
            printH[i][j]=32;
           }
}}}

void A1(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0&&i!=0||i==0&&j!=0&&j!=4||j==4&&i!=0||i==3)
{
     printA1[i][j]=42;
           }




           else{
            printA1[i][j]=32;
        }
}}}

void V(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0&&i<5||j==4&&i<5||i==4&&j==0||i==5&&j==1||i==6&&
j==2||i==5&&j==3||i==4&&j==4)
{
     printV[i][j]=42;
            }
           else{
            printV[i][j]=32;
         }
          }}}

void main(){
R();
A();
G();
H();
A1();
V();
printConsole();
}
