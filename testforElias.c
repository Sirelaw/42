char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    index;
    int                b_end_src;

    index = 0;
    b_end_src = 0;
    while (index < n)
    {
        if (b_end_src == 0)
          dest[index] = src[index];
        if (src[index] == '\0')
            b_end_src = 1;
        if (b_end_src == 1)
            dest[index] = '\0';
        index++;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main () {
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 14);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}