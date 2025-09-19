#include<stdio.h>
#include<unistd.h>
int main()
{ 
   int fd[2];
   pipe(fd);
   ssize_t bytes_write;
   char buffer[]=" writing to the pipe";
   bytes_write=write(fd[1],buffer,sizeof(buffer));
   char display[1024];
   read(fd[0],display,bytes_write);
   printf("read from the pipe:%s\n",display);
 return 0;
}
