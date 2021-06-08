while (!endofinput){
    1. get the next command from user
    2. execute the command
}

int main ()
{
	char* buf = "file content";
	int fd = open (“foobar.txt”, O_CREAT|O_WRONLY);
	write (fd, buf, strlen (buf)); 
    close (fd);
	fd = open("foobar.txt", O_RDONLY, 0);
	read(fd, &c, 1);
	printf(“c=%c\n”, c);
	close (fd);
	return 0;
}
