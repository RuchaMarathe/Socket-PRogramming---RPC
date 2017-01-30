#include <rpc/rpc.h>
#include <string.h>
#include "firsttry.h"

char **firsttry_1_svc(char **msgs,struct svc_req * req) 
{
	static char msg[256];
	static char *p;
	char str1[50];
	char str2[50]={0};
	char buffer[25000];
	char *buff;
	char ch;
	long file_length;
	
	p = *msgs;
	FILE *f;
	
	strcat(str2,p);
	

	f = fopen(str2,"r");
	if(f==NULL)
	{
		printf("\nfile has not been found");
		exit(1);
	}
	else
	{
		fseek(f,0L,SEEK_END);
		file_length = ftell(f); //find the file length
		rewind(f);
		p =calloc(1,file_length+1); //allocate space
		//buff = malloc(	(file_length+1) * (sizeof(char)));
		if(!p)fclose(f),fputs("mem alloc fail",stderr),exit(1);
		if(1!=fread(p ,file_length,sizeof(char), f))
		fclose(f),free(p),fputs("read fails",stderr),exit(1);
		
		
	}
	//printf("i have reached here");
 	//strcpy(p,buff);
	//printf("i have reached here2");
	//return(buffer);
	//free(buff);
	return(&p);
}

