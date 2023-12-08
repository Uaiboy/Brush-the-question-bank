#include <stdio.h>

int main()
{
  int jrinks,beers;
  for (beers=0;beers<50;beers++){
  	for(jrinks=0;jrinks<50;jrinks++)
  	if(jrinks*1.9+beers*2.3 == 82.3)
	  if (beers<jrinks)printf("%d %d",jrinks,beers);
  } 
  return 0;
}
