void t(int *a,int *b){
	a=b;
	*a=15;
}
int x=10,y=20;
int main(){
	t(&x,&y);
	printf("%d%d",x,y);
	return 0;
}
