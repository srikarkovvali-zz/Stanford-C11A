
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"


main()
{
	string menuchoice;
	float radius,heightcylinder,boxside1,boxside2,boxheight,cubeside,volume,pi=3.14;
	string cube,cylinder,box;
	
	printf ("Please enter which 3-d shape you would like to find the volume of: \n");
	printf ("1.Cube\n");
	printf ("2.Box\n");
	printf ("3.Cylinder\n");
	
	printf ("Please enter your choice:");
	menuchoice=GetLine ();
	
	if (StringEqual(menuchoice,"cube"))
	{
		printf ("Please enter the side length: ");
		cubeside = GetReal();
		volume= cubeside*cubeside*cubeside;
		printf ("The volume is %f",volume);
	}
	
	else if (StringEqual(menuchoice,"box"))
	{
		printf ("Please enter side 1: ");
		boxside1=GetReal ();
		printf ("Please enter side 2: ");
		boxside2=GetReal();
		printf ("Please enter box height: ");
		boxheight=GetReal();
		volume=boxside1*boxside2*boxheight;
		printf ("The volume of the box is %f",volume);
	}
	
	else if (StringEqual(menuchoice,"cylinder"))
	{
		printf ("Please enter cylinder height: ");
		heightcylinder= GetReal ();
		printf ("Please enter cylinder radius: ");
		radius=GetReal ();
		volume=heightcylinder*radius*pi;
		printf ("The volume is %f",volume);
	}
	
	
	getchar();
}

	
	

