#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(){
    pid_t p;
    p = fork();
    if(p==0){
	printf("I am child having PID %d\n",getpid());
	printf("My parent PID is %d\n",getppid());
    }else{
	printf("I am parent having PID %d\n",getppid());
	printf("My child PID is %d\n",p);
    }
}
