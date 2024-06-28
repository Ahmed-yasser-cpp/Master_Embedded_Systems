int main()
{

	char x[100],y[100];

	printf("USERNAME : ");
	fflush(stdout);
	gets(x);

	printf("Enter a string : ");
	fflush(stdout);
	gets(y);

	if(!stricmp(x,y)) printf("Identical");
	else printf("Different");

	return 0;
}
