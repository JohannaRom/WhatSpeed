#include <stdio.h> 
#include<conio.h> 
#include<process.h> 
#include<string.h> 
void main(int argc, char *argv[]) 
{ 
FILE *f1; 
char ch; 
int c=0,1=0,w=0; 
if (argc==1) 
{ printf("invalid parameters"); 
} if (argc>3) 
{ 
printf ("Too many parameters");
} 
if (argc==3) 
{ 
f1=fopen(argv[2], "r"); //wc2.exe -1 npp.txt 
if (strcmp(argv[1], "-l")==0) 
{ 
while((ch=getc(f1))!=EOF) 
{ 
if (ch=='\n') 
l++; 
} 
// l=l-1; 
printf ("There are %d lines in the file",l); 
} 
else 
if (strcmp(argv[1],"-w")==0) 
{
while((ch=getc(f1))!=EOF) 
{ 
if (ch=='\n'||ch==' ') 
w++; 
} 
// w=w-1; 
printf ("There are %d words the file",w); 
} 
else 
if (strcmp(argv[1],"-c")==0) 
{ 
while((ch=getc(f1))!=EOF) 
{ 
if (ch!='\n'||ch!=' ') 
c++; 
} 
printf ("There are %d characters in the file",c); 
} 
else 
exit(0); 
} 
fclose(f1);
}

