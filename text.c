// Making some changes and Third commit


#include <stdio.h> 

int main() 
{ 
   FILE *fp = fopen("myfile.txt", "r"); 
   int ch = getc(fp);

   //Check enf of file and if not end execute while block
   //File EOF reached end while loop 
   while (ch != EOF) 
   { 
    /* Print the file content with ch */
    putchar(ch); 
        /* Read one character from file */
    ch = getc(fp); 
   } 
    
   if (feof(fp)) 
    printf("\n End of file reached."); 
   else
    printf("\n Something went wrong."); 
   fclose(fp); 
    
   getchar(); 

   return 0; 
}