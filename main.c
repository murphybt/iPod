#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "sort_shuffle.h"

#define MAX_LENGTH 80           // Length of arrays for function input
#define MAX_LENGTH_PLAYLIST 163      // length of concatenated array (artist name with song name)



int numOfArtists=0;               // total number of artists taken in as input

int main(void)
{
  //The array containing artists names
  char artists[4][80];

    //The array containing the sorted artists
  char sortedArtists[4][80];
  //Songs for Artist 1
  char songsArtist1[3][80];
  char songsArtist2[3][80];



  //Songs for Artist 3
  char songsArtist3[3][80];
  //Songs for Artist 4
  char songsArtist4[3][80];
  //The total number of artists (Note it can be less than 4)

  //The total number of songs for each artist (Note that less than 3 songs can be provided for each artist)


  int totalSongsArtist1=0, totalSongsArtist2=0, totalSongsArtist3=0, totalSongsArtist4=0;




  totalSongsArtist1 = artistInput(artists, songsArtist1);

   sortSongs(songsArtist1, totalSongsArtist1);

   totalSongsArtist2 = artistInput(artists, songsArtist2);

   sortSongs(songsArtist2, totalSongsArtist2);

   totalSongsArtist3 = artistInput(artists, songsArtist3);

   sortSongs(songsArtist3, totalSongsArtist3);

   totalSongsArtist4 = artistInput(artists, songsArtist4);

   sortSongs(songsArtist4, totalSongsArtist4);

   int i;

  for(i=0; i<4; i++)
  {
      strcpy(sortedArtists[i], artists[i]);
  }

  sortArtists(sortedArtists, numOfArtists);

   for(i=0; i<4; i++)
  {
      printf("   -  %s\n", sortedArtists[i]);
  }


  int stringCompare;

  stringCompare = strcmp (sortedArtists[0], artists[0]);

  if(stringCompare == 0)
  {
      printf("\n%s\n", sortedArtists[0]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist1[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[0], artists[1]);

  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[0]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist2[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[0], artists[2]);


  if (stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[0]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist3[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[0], artists[3]);


  if (stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[0]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist4[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[1], artists[0]);


  if (stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[1]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist1[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[1], artists[1]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[1]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist2[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[1], artists[2]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[1]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist3[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[1], artists[3]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[1]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist4[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[2], artists[0]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[2]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist1[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[2], artists[1]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[2]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist2[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[2], artists[2]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[2]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist3[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[2], artists[3]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[2]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist4[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[3], artists[0]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[3]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist1[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[3], artists[1]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[3]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist2[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[3], artists[2]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[3]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist3[i]);
      }
  }

  stringCompare = strcmp (sortedArtists[3], artists[3]);


  if(stringCompare ==0)
  {
      printf("\n%s\n", sortedArtists[3]);

      for(i=0; i<3; i++)
      {
          printf("   -  %s\n", songsArtist4[i]);
      }
  }


  char allSongs[24][163];               // array to hold two copies of every song
  int j=0, totalNumberOfSongs;

  totalNumberOfSongs = totalSongsArtist1 + totalSongsArtist2 + totalSongsArtist3 + totalSongsArtist4;

  for(i=0; i<totalSongsArtist1; i++)                 // copy each song from every artist into an array.
  {                                                  // Do this twice
      strcpy(allSongs[j], songsArtist1[i]);
      j++;
      strcpy(allSongs[j], songsArtist1[i]);
      j++;
  }

  for(i=0; i<totalSongsArtist2; i++)
  {
      strcpy (allSongs[j], songsArtist2[i]);
      j++;
      strcpy (allSongs[j], songsArtist2[i]);
      j++;
  }

  for(i=0; i<totalSongsArtist3; i++)
  {
      strcpy (allSongs[j], songsArtist3[i]);
      j++;
      strcpy (allSongs[j], songsArtist3[i]);
      j++;
  }


  for(i=0; i<totalSongsArtist4; i++)
  {
      strcpy (allSongs[j], songsArtist4[i]);
      j++;
      strcpy (allSongs[j], songsArtist4[i]);
      j++;
  }

  char playlist[24][163];             // create array for playlist


 j=0;

 for (i=0; i<totalSongsArtist1; i++)         //concatenate
 {
    strcpy (playlist[j], artists[0]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist1[i]);
    j++;

    strcpy (playlist[j], artists[0]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist1[i]);
    j++;
 }

 for (i=0; i<totalSongsArtist2; i++)         //concatenate
 {
    strcpy (playlist[j], artists[1]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist2[i]);
    j++;

    strcpy (playlist[j], artists[1]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist2[i]);
    j++;
 }

 for (i=0; i<totalSongsArtist3; i++)         //concatenate
 {
    strcpy (playlist[j], artists[2]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist3[i]);
    j++;

    strcpy (playlist[j], artists[2]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist3[i]);
    j++;
 }

 for (i=0; i<totalSongsArtist4; i++)         //concatenate
 {
    strcpy (playlist[j], artists[3]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist4[i]);
    j++;

    strcpy (playlist[j], artists[3]);
    strcat (playlist[j], " - ");
    strcat (playlist[j], songsArtist4[i]);
    j++;
 }



for(i=0; i<totalNumberOfSongs*2; i++)
{
    printf("\n%s", playlist[i]);
}


shuffleSongs(playlist, totalNumberOfSongs);

  for(i=0; i<totalNumberOfSongs*2; i++)
  {
      printf("%s\n", playlist[i]);
  }






}
