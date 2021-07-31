
#include <stdio.h>
#include <string.h>
#include "sort_shuffle.h"

#define MAX_LENGTH 80           // Length of arrays for function input
#define MAX_LENGTH_PLAYLIST 163      // length of concatenated array (artist name with song name)

int numOfArtists=0;               // total number of artists taken in as input

void sortArtists (char array[][MAX_LENGTH], int numOfArtists)
  {
      int i=0, k=0, j=0, minIndex=0, minIndexChanged=0;

      char swap[MAX_LENGTH];


      printf("\nThe number of songs is %d\n", numOfArtists);


      for(i=0; i<numOfArtists-1; i++)

      {
        minIndex=i;

        for(j=i+1; j<numOfArtists; j++)
        {
          //printf("i: %d, j: %d, minIndex: %d", i, j, minIndex);

          if(strcmp(array[j], array[minIndex]) < 0)
            minIndex = j;
          minIndexChanged = 1;
        }

        if(minIndexChanged ==1)
        {
            memset(swap, '$', MAX_LENGTH-2);
            swap[MAX_LENGTH-1] = '\0';

            strcpy(swap, array[i]);
            //printf("%s\n", swap);
            strcpy(array[i], array[minIndex]);
            strcpy(array[minIndex], swap);
            //printf("%s\n", songs[minIndex]);
            //printf("%s\n", songs[i]);
            minIndexChanged=0;

        }
      }
  }

  int artistInput (char arrayArtists[][MAX_LENGTH], char arraySongs[][MAX_LENGTH])
  {
      int i=0, length=0, totalSongs = 0;

      printf("Insert an artist/group name: ");
      fgets(arrayArtists[numOfArtists], 80, stdin);

      if(arrayArtists[numOfArtists][i] == '\n')
            return 0;

       i = strlen(arrayArtists[numOfArtists])-1;                      /* remove newline, if present */

      if( arrayArtists[numOfArtists][ i ] == '\n')
        arrayArtists[numOfArtists][i] = '\0';

     for(i=1; i<=3; i++)
      {
        printf("Insert song %d for %s: ",i, arrayArtists[numOfArtists]);
        fgets(arraySongs[i-1], 80, stdin);

        if(arraySongs[i-1][0]=='\n')
              break;                          //If the return command is pressed it exits

        length = strlen(arraySongs[i-1]);
        arraySongs[i-1][length-1] = '\0';           //Remove the carriage return from the song

        totalSongs++;



      }

      numOfArtists++;
      printf("The number of artists is now %d\n", numOfArtists);

      return totalSongs;
  }

  void sortSongs (char songs[][MAX_LENGTH], int numOfSongs)
  {
      int i=0, k=0, j=0, minIndex=0, minIndexChanged=0;

      char swap [MAX_LENGTH];


      printf("\nThe number of songs is %d\n", numOfSongs);


      for(i=0; i<numOfSongs-1; i++)
      {
        minIndex=i;

        for(j=i+1; j<numOfSongs; j++)
        {
          //printf("i: %d, j: %d, minIndex: %d", i, j, minIndex);

          if(strcmp(songs[j], songs[minIndex]) < 0)
            minIndex = j;
          minIndexChanged = 1;
        }

        if(minIndexChanged ==1)
        {
            memset(swap, '$', MAX_LENGTH-2);
            swap[MAX_LENGTH-1] = '\0';

            strcpy(swap, songs[i]);
            //printf("%s\n", swap);
            strcpy(songs[i], songs[minIndex]);
            strcpy(songs[minIndex], swap);
            //printf("%s\n", songs[minIndex]);
            //printf("%s\n", songs[i]);
            minIndexChanged=0;

        }
      }

    /*  for(int i = 0; i < 3; i++){
        printf("Song %d : %s\n", i, songs[i]);
      } */

  }

  void shuffleSongs (char arraySongs[][MAX_LENGTH_PLAYLIST], int totalSongs)
  {
      int i, j, k;

      char swap [MAX_LENGTH_PLAYLIST];

      srand(time(NULL));              // should only be called once

      int stringCompare1 = 0;
      int stringCompare2 = 0;
      int stringCompare3 = 0;
      int stringCompare4 = 0;
      int stringCompare5 = 0;

      int flag = 0;


     do
     {



        for(k=0; k<totalSongs-5;)
        {
             stringCompare1 = strcmp (arraySongs[k], arraySongs[k+1]);
             stringCompare2 = strcmp (arraySongs[k], arraySongs[k+2]);
             stringCompare3 = strcmp (arraySongs[k], arraySongs[k+3]);
             stringCompare4 = strcmp (arraySongs[k], arraySongs[k+4]);
             stringCompare5 = strcmp (arraySongs[k], arraySongs[k+5]);


             if(stringCompare1==0 || stringCompare2==0 || stringCompare3==0 || stringCompare4==0 || stringCompare5==0)
             {
                for(i=1; i<totalSongs; i++)
                {
                    j = rand()%(i+1);          // generates a random number between [0, i]
                    printf("The random number between [0,%d] is %d\n", i, j );
                    if (j!=i)
                    {

                       memset(swap, '$', MAX_LENGTH_PLAYLIST-2);
                        swap[MAX_LENGTH_PLAYLIST-1] = '\0';

                      strcpy (swap, arraySongs[j]);                // if i != j then swaps the elements at position i and j in the array
                      strcpy (arraySongs[j], arraySongs[i]);
                      strcpy (arraySongs[i], swap);

                      k = 0;
                      flag = 0;
                    }
                }
             }

            else if (stringCompare1!=0 && stringCompare2!=0 && stringCompare3!=0 && stringCompare4!=0 && stringCompare5!=0)
            {
                k++;
                flag = 0;
            }

            else if (k==totalSongs-6)
            {
                k++;
                flag = 1;
            }

            else{}
        }
    } while(flag == 0);

  }
