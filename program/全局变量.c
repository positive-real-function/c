

void swap(int x,int y) 

{
	int t;
	t=x;
	x=y;
	y=t;
}


int main()
{
	int x=3,y=5;
	swap(x,y);
	printf("%d %d",x,y);
}


