#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t child_pid;

    child_pid = fork();

    if(child_pid < 0){
	fprintf(stderr,"Forf failed\n");
	return 1;
    }else if(child_pid == 0){
	printf("Child process executing\n");
	exit(0);
    }else{
	sleep(2);
	printf("Parent process executing\n");
	printf("Zombie process created\n");
    }
    return 0;
}
