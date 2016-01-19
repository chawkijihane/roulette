/*
** my_strncat.c for strcat in /home/jihane/lib/chawki_j/libmy_01
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Sat Oct 24 15:36:00 2015 CHAWKI Jihane
** Last update Sat Oct 24 17:28:59 2015 CHAWKI Jihane
*/
int	my_strlen(char *str);

char	*my_strncat(char *str1, char *str2, int n)
{
  int	length_str1;
  int	index_str2;

  index_str2 = 0;
  length_str1 = my_strlen(str1);
  while (str2[index_str2] != '\0' && index_str2 < n)
    {
      str1[length_str1++] = str2[index_str2++];
    }
  str1[length_str1 + index_str2] = '\0';
  return (str1);
}
