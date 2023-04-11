#include<stdio.h>
int main(){
	char ch[200];
	int len=0;
	FILE *fone, *ftwo;
	fone=fopen("Basic C structure.txt","w+");
	ftwo=fopen("Hello.txt", "a+");
	/*Writting a new file. */
	fprintf(fone, "#include<stdio.h>\nint main(){\n\tprintf('Hello world!');\nreturn 0;\n}");
	/* Printing second file. */
	while(fscanf(ftwo, "%[^\n]s", ch)!=EOF){
		printf("%s", ch);
	}
	len=ftell(ftwo);
	printf("\nNumbers of symbols in Hello.txt : %d", len);
	fclose(fone);
	fclose(ftwo);
	return 0;
}
