
#include <stdio.h>
#include <string.h>

int main() {
   char sentence[100];
   int flag = 0;
   printf("Enter a sentence: ");
   gets(sentence);
   if(sentence[0] == '/')
   {
       if(sentence[1] == '/')
       {
       	printf("This is a single line comment.");
        flag = 1;
	   }
        
        else if(sentence[1] == '*')
        {
            if(sentence[strlen(sentence) - 2] == '*' && sentence[strlen(sentence) -1] == '/')
            {
            	printf("This is a multi-line comment.");
            	flag = 1;	
			}
        }
   }
   
   if(!flag)
   printf("This is not a comment.");

    return 0;
}
