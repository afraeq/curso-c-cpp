// array of structures

#include <stdio.h>
#include <stdlib.h>

struct movies_t {
  char title [20];
  int year;
};

void printmovie (struct movies_t movie);

int main ()
{
  int i,n;

  struct movies_t * films;
  
  printf("Enter the number of movies: ");
  scanf("%d", &n);

  films = (struct movies_t *) malloc (n*sizeof(struct movies_t));

  for (i=0; i<n; i++)
  {
    printf("\nEnter title: ");
    scanf("%s",films[i].title);
    printf("Enter year: ");
    scanf("%d",&films[i].year);
  }

  printf("\nYou have entered these movies:\n");

  for (i=0; i<n; i++)
    printmovie (films[i]);

  return 0;
}

void printmovie (struct movies_t movie)
{
  printf("%s", movie.title);
  printf(" (%d)\n",movie.year);
}
