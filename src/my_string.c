/*
** my_string.c for my_ftl in /home/theo/usr/etna2020/src
**
** Made by Theo Massard
** Login   <massar_t@etna-alternance.net>
**
** Started on  Fri Nov  10 21:58:22 2017 Theo Massard
** Last update Fri Nov  10 21:58:22 2017 Theo Massard
*/

#include        <stdlib.h>
#include        <unistd.h>

void            my_putchar(const char c)
{
  write(1, &c, 1);
}

int     my_strlen(const char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void            my_putstr(const char *str)
{
  write(1, str, my_strlen(str));
}

int     my_strcmp(const char *s1, const char *s2)
{
  int   i;

  if (s1 == NULL || s2 == NULL)
    return (-2);
  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
    return (1);
      else if (s1[i] < s2[i])
    return (-1);
      i++;
    }
  if (s2[i] != '\0')
    return (-1);
  return (0);
}

char            *my_strdup(const char *str)
{
  int            i;
  char            *copy;
  
  i = 0;
  copy = NULL;
  if ((copy = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      copy[i] = str[i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}
