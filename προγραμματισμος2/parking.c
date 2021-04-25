#include <stdio.h>
#include <string.h>
int main (void)
{
	int *dkts,*dkts2,i,k,e,t,c,b,cp=0,bp=0,PRKNG[200]={0},PRKNG2[40]={0};
	char AK[11],a,CAR[200][11],BIKE[40][11];
    while(1)
    {
	printf("Dwste ton Ari8mo Kukloforias sas:");
	for(i=0;i<9;i++)
	{
		a=getchar();
		if (a=='\n')
		break;
     	AK[i]=a;
		if ((AK[0]=='e')&&(AK[1]=='n')&&(AK[2]=='d'))
		{
		 break;
		}
	}
   	if ((AK[0]=='e')&&(AK[1]=='n')&&(AK[2]=='d'))
    break;

    printf("Grapste 1 an exete Autokinhto h 2 an exete Mhxanh:");
	scanf("%d",&e);
    
	if(e==1)
	{
	   	if(psaksimoCar(CAR,AK,e)==-1)	
        {
    	for (c=0;c<200;c++)
    	{
		PRKNG[c]=1;
		for(b=0;b<11;b++)
		CAR[c][b]=AK[b];
		break;
    	}
    	}
    	if(psaksimoCar(CAR,AK,e)!=-1)
    	{
		 PRKNG[*dkts]=0;
		 cp=cp+1;
    	
		}
	}
	
	else if (e==2)
	{
		if(psaksimoBike(BIKE,AK,e)==-1)
		{
		for (i=0;i<40;i++)
    	{
		PRKNG2[i]=1;
		for(k=0;k<11;k++)
		BIKE[i][k]=AK[k];
		break;
		}
    	}
    	if(psaksimoBike(BIKE,AK,e)!=-1)
    	{
    		PRKNG2[*dkts2]=0;
    		bp=bp+1;
		}
    }
	else 
	{
	printf("Dwste enan aptous swstous ari8mous\n");
	}
    
   	getchar();
   }
    cp=cp*10;
    bp=bp*4;
    t=cp+bp;
    printf("Ta sunolika Esoda tou Parking einai:%d\n",t);
    printf("Oi Eleu8eres 8eseis pou exei to parking einai:");
    printf("\nGia Autokinhta oi:");
	for (i=0;i<200;i++)
    {
	if (PRKNG[i]==0)
	printf("[%d]",i); 
	}
    printf("\nGia Mhxanes oi:");
    for (i=0;i<40;i++)
    {
	if (PRKNG[i]==0)
	printf("[%d]",i); 
	}
	return 0;
   
}



int psaksimoCar(char CAR[200][11],char AK[11],int e)
	{
	    int k,l,dkts;
	    for (k=0;k<200;k++)
	    for (l=0;l<11;l++)
		{
	    if (strcmp(CAR[k][l],AK[l])==1)
	    continue;
		else if (strcmp(CAR[k][l],AK[l])==0)
		{
		dkts=&k;
	    return dkts;
	}
	    else if (strcmp(CAR[199][l],AK[l])==0)
	    return -1;
		}
	}
	
int psaksimoBike(char BIKE[40][11],char AK[11],int e)
	{
		int k,l,dkts2;
		for (k=0;k<40;k++)
	    for (l=0;l<11;l++)
		{
	    if (strcmp(BIKE[k][l],AK[l])==1)
	    continue;
		else if (strcmp(BIKE[k][l],AK[l])==0)
		{
		dkts2=&k;
	    return dkts2;
	    }
	    else if (strcmp(BIKE[39][l],AK[l])==1)
	    return -1;
		}
		
	}
/*kapou exw kanei kapoio la8os giati den mou trexei oute h while basika paizei na exw kanei polla la8h
alla auto me thn while me exei teleiwsei*/

