#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"



main()
{
	double gamesplayed=120,torwin=90,boswin=66,miamiwin=60,lawin=24;
	double torper= (torwin/gamesplayed)*100,bosper=((boswin/gamesplayed)*100),miamiper=((miamiwin/gamesplayed)*100),laper=((lawin/gamesplayed)*100);
	printf ("                     The National Basketball Association\n");
	printf ("\n");
		printf ("\n");
	printf ("Team Name              Games Played           Games Won         Percent Won\n");
	printf ("\n");
	printf ("Toronto Raptors        %g                     %g                %g%%",gamesplayed,torwin,torper);
		printf ("\n");
	printf ("Boston Celtics         %g                     %g                %g%%",gamesplayed,boswin,bosper);
		printf ("\n");
	printf ("Miami Heat             %g                     %g                %g%%",gamesplayed,miamiwin,miamiper);
		printf ("\n");
	printf ("Los Angeles Lakers     %g                     %g                %g%%",gamesplayed,lawin,laper);


getchar();
}

	

	
	

