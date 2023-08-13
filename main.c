#include <stdio.h>
#include <stdlib.h>

int main()
{float x,a,b,c,y;
char cat;

   printf("enter the category of iteams a ou b ou c ou ?: ");
   scanf("%c",&cat);
   printf("enter the price of the iteam?: " );
   scanf("%f",&x);
   switch(cat){
   case'a': printf("the price is:%f",x+(x*0.07)); break;
   case'b': printf("the price is:%f",x+(x*0.20)); break;
   case'c': printf("the price is:%f",x+(x*0.25)); break;
   }
    return 0;
}
