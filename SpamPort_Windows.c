//Code by 6icada
//Please do not copy code

//Adding liraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

//Main function
int main(int argc, char *argv[]){
	//Adding vars
	char cmd[150];
	int x = getuid();

	//Checking Adming Access
	if(x == 0){
		//Checking argc and argv
		if(argc == 1){
			//MSG
			printf("Type \"./SpamPort_Windows -h\" for help");
		}
		else if(argc == 2){
			if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help")){
				//MSG
				printf("Usage: \"./SpamPort_Windows <IP> <PORT>");
			}
			else{
				//Warning
				printf("ERROR!!!\n");
			}
		}
		else if(argc == 3){
			//MSG
			printf("\n\nThis program needs \"ncat\" Please install it!!!\n\n");

			//Link for ncat
			printf("Download Ncat - https://nmap.org/ncat\n");

			//Starting Action
			sprintf(cmd, "ncat %s %s -v -w 0", argv[1], argv[2]);

			for(int y = 10; y > 5; y++){
				system(cmd);
			}
		}
	{
	else{
		//Warning
		printf("\n\nI do not have admin access!!!\n\n");
	}
}
