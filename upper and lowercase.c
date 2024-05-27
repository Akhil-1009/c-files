#include<stdio.h>
#include<conio.h>
void main()
{char ch;
 printf ("enter any character");
 scanf ("%c",&ch);
 if (ch>='A' && ch<='Z')
      {printf ("%c is upper case alphabet",ch);
   }
   else if (ch>='a' && ch<='z')
        {printf ("%c is a lower case alphabet",ch);
   }
   else
      {printf ("%c is not an alphabet",ch);
	  }
  getch();
    }
