#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void	var(int n, ...)
{
	va_list	arg;
	int i;	
	
	va_start(arg,n);
	i  = 0;
	while(i < n)
	{
		printf("%s",va_arg(arg,char *));
		i++;
	}
	va_end(arg);
}

int main()
{
	var(4,"saad","eddine", "eljarida","damn");
	//var(format,)
	//printf("%d",);
}

