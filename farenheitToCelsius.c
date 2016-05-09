#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char desci = 0;

  double cels = 0;
  double farh = 0;


  printf("Do you want to convert F to C or C to F?\n"
    "Type F for F to C, and C for C to F!\n");
  scanf("%c", &desci);


  if(toupper(desci) == 'C')
  {
	printf("Input the celsius you want to convert to farenheit!\n");
	scanf("%lf", &cels);
	farh = cels * 1.8 + 32;
	printf("%lf celsius is %lf farenheit.\n", cels, farh);
  }
  if(toupper(desci) == 'F')
  {
	printf("Input the farenheit you want to convert to celsius!\n");
	scanf("%lf", &farh);
	cels = ((farh - 32) * 5) / 9;
	printf("%lf farenheit is %lf celsius.\n", farh, cels);
  }
  if(toupper(desci) != 'C' && toupper(desci) != 'F' )
	printf("Fuck you and cooperate!!!\n");
  return 0;
}
