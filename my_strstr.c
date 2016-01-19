/*
** my_strstr.c for srtstr in /home/jihane/lib/chawki_j/libmy_01
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Sat Oct 24 15:36:57 2015 CHAWKI Jihane
** Last update Sat Oct 24 19:24:06 2015 CHAWKI Jihane
*/
char	*my_strstr(char *str, char *to_find)
{
  int	index;
  int	compt;

  index = 0;
  compt = 0;
  while (str[index])
    {
      if (str[index] == to_find[compt])
	{
	  ++compt;
	}
      else
	{
	  compt = 0;
	}
      if (!to_find[compt])
	{
	  index = index - (compt - 1);
	  return (str + index);
	}
      ++index;
    }
  return ("null");
}
