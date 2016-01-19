
/*
** roulette.c for roul in /home/jihane/chawki_j/roulette
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Sat Oct 24 10:45:41 2015 CHAWKI Jihane
** Last update Sat Oct 24 12:20:53 2015 CHAWKI Jihane
*/
#include <unistd.h>

char	*readline();
int    main()
{
  int   gains;
  int	contpartie;
  int   gagnant;
  int   mise;
  int	nbr_mise;

  gains = 200;

  readline("vous avez commencer par une somme de", gains);
  while (contpartie)
    {
      nbr_mise = 0;
    }
  while (nbr_mise > 1 || nbr_mise <= 36)
    {
    nbr_mise = readline("tapez le nombre sur lequel vous voulez miser entre 1 et 36");
mise = 0;
while (mise <= 0 || mise > gains)
  {
    mise = readline("tapez le montant de votre mise");
    if (mise <= 0)
      {
	readline("la mise saisie est negative");
      }
    if (mise > gains)
      {
        readline("vous n'avez que ", gains);
      }
    
    readline("la roulette tourne ..... et s'arrete sur le numero", gagnant);
    if (gagnant == nbr_mise)
      {
	readline("felicitation vous obtenez",  mise * 3);
	gains = mise * 3;
	gains++;
      }
    if ( gains <= 0)
      {
      readline("vous avez perdu votre argent");
      contpartie = 0;
      }
    return (0);
      }
