
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{ 
 int fd[2];
 char read_buff[1024];
 ssize_t bytes_write;
 char write_buff[]="communicating from parent to child\n";
 pipe(fd);
 if(!fork())
  {
     bytes_write=write(fd[1],write_buff,sizeof(write_buff));
  }
 else
 {
    read(fd[0],read_buff,bytes_write);
    printf("the message recieved from parent is : %s",read_buff);
 }
 return 0;
}














































































































