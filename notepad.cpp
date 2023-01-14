 #include<graphics.h>
 #include<time.h>

 int main()
 {
	
 	int gd = DETECT;
 	int gm;
// 	initgraph(&gd,&gm,"Null");
	
 	time_t rawTime;
// 	//time_t is useful in returning the time() function
 	struct tm * currentTime;
// 	//this pointer is for currentime and tm contains 9 member of type int
 	char a[100];
// 	//character array of 100 size
 	rawTime = time(NULL);
// 	//rawtime holds no of seconds since unix epoch
 	currentTime = localtime(&rawTime);
// 	//this variable holds all the time we need as it is a pointer
 	strftime(a,100,"%I:%M:%S",currentTime);
// 	// it copies the time %i%m%s into a so it holds the time now
// 	// i for hours
// 	m for minutes
// 	// s for seconds	
// 	// 100 is the size of array max elem
	
 	setcolor(11);
// 	//
 	settextstyle(3,HORIZ_DIR,10);
 	outtextxy(200,100,a);
	
	
 	getch();
 	closegraph();
 }
