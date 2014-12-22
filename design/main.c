#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{	
	int i = 0,j=0,a=0;
	pid_t child1,child2,child;
	child1 = fork();
	if(child1==-1)
	{
		printf("child1 fork error\n"); 
		exit(1);
	}
	else if(child1==0)
		{
 			printf("大儿子：我是阿大，大家跟我说\n");		
		if(execlp("/home/tom/lcyprj/hello","hello",NULL)<0)
			{
				printf("child1 execlp error\n");
			}for(;i<100000;i++)
				{
				for(;j<100000;j++);
				}
 		}
		else
		{
			child2=fork();
			if(child2==-1)
			{		

				printf("child2 fork error\n");
				exit(1);
			}
			else if(child2==0)
			{
			sleep(2);
			sleep(2);
			printf("二儿子：咦？我爸呢？\n");
			for(;i<100000;i++)
				{
				for(;j<100000;j++)
					{
					a+1;	
					}	
				}	
			printf("二儿子：呜呜呜，好困啊！还是睡一会\n");
			sleep(1);
			printf("二儿子：呼~~呼~~\n");
			sleep(2);
			printf("二儿子：睡饱了，好舒服\n");
			exit(0);
			}
	printf("爸  爸：我的儿，你们在哪啊？！！\n");
	sleep(1);
	child=waitpid(child1,NULL,0);
	if(child==child1)
	{
		printf("爸  爸：大，你在这干啥:%d\n",child);
		sleep(1);
		printf("大儿子：我在这听演唱会呢！\n ");
		sleep(1);
		printf("爸  爸：那你弟弟呢？\n");
		sleep(1);
	}
	else
	{
		printf("Error occured!\n");
	}
	do
	{
		child=waitpid(child2,NULL,WNOHANG);
		if(child==0)
		{
      			printf("爸  爸：老二！！！\n");
			sleep(1);
		}
	}while(child==0);
	if(child==child2)
	{
		printf("爸  爸：老二，原来你在这睡觉！！！:%d\n",child);
		for(;i<100000;i++)
		{
			for(;j<100000;j++)
			{
			a+1;
			}
		}
		printf("爸  爸：起来，回家睡吧。\n");
	}else
	{
		printf("Error occured!\n");
	}		
 }
 exit(0);	
}


