#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void drawit(int a[]){
	int xmid,ymid;
	xmid=(getmaxx()/2);
	ymid=(getmaxy()/2);
	line(a[0]+xmid,ymid-a[1],a[2]+xmid,ymid-a[3]);
	line(a[2]+xmid,ymid-a[3],a[4]+xmid,ymid-a[5]);
	line(a[0]+xmid,ymid-a[1],a[4]+xmid,ymid-a[5]);
}

void transscale(int a[],int tx,int ty) {
	int i;

	for(i=0;i<8;i=i+2) {
		a[i]=a[i]+tx;
		a[i+1]=a[i+1]+ty;
	}
}

void translation(int a[]) {
	int tx,ty,i;
	printf("\nEnter the translating factors tx and ty:\n");
	scanf("%d %d",&tx,&ty);

	for(i=0;i<8;i=i+2) {
		a[i]=a[i]+tx;
		a[i+1]=a[i+1]+ty;
	}
}

void shearing(int a[]) {
	int t,i,ch;
	printf("\nEnter the shearing factor t:\n");
	scanf("%d",&t);

	printf("Shear?\n1.X 2.Y");
	scanf("%d" ,&ch);
	switch(ch){
		case 1:
		for(i=0;i<8;i=i+2) {
			a[i+1]=a[i+1]+(t*a[i]);
		}

		break;
		case 2:
		for(i=0;i<8;i=i+2) {
			a[i]=a[i]+(t*a[i+1]);
		}

		break;
		default:
		printf("Invalid Option\n");
	}

}

void scaling(int a[]) {
	float sx,sy;
	int i,ch,xp,yp;

	printf("\nEnter the scaling factors sx and sy:\n");
	scanf("%f %f",&sx,&sy);
	printf("Fixed Point?\n1.Yes 2.No");
	scanf("%d" ,&ch);
	switch(ch){
		case 1:
		printf("Enter the fixed points\n");
		scanf("%d %d" ,&xp, &yp);
		transscale(a,-xp,-yp);
		for(i=0;i<8;i=i+2) {
			a[i]=sx*a[i];
			a[i+1]=sy*a[i+1];
		}
		transscale(a,xp,yp);

		break;
		case 2:
		for(i=0;i<8;i=i+2) {
			a[i]=sx*a[i];
			a[i+1]=sy*a[i+1];
		}
		break;
		default:
		printf("Invalid Option\n");
	}

}

void rotation(int a[]){
	int i,x,y,ch,xp,yp;
	float d,r;
	printf("Enter Degree\n");
	scanf("%f" ,&d);
	r=d*((3.14159)/180);

	printf("Fixed Point?\n1.Yes 2.No");
	scanf("%d" ,&ch);
	switch(ch){
		case 1:
		printf("Enter the fixed points\n");
		scanf("%d %d" ,&xp, &yp);
		transscale(a,-xp,-yp);

		for(i=0;i<=6;i=i+2) {
			x=a[i];
			y=a[i+1];
			a[i]=(x*cos(r))-(y*sin(r));
			a[i+1]=(x*sin(r))+(y*cos(r));
		}
		transscale(a,xp,yp);

		break;
		case 2:
		for(i=0;i<=6;i=i+2) {
			x=a[i];
			y=a[i+1];
			a[i]=(x*cos(r))-(y*sin(r));
			a[i+1]=(x*sin(r))+(y*cos(r));
		}
		break;
		default:
		printf("Invalid Option\n");
	}


}


void main() {
	int i,a[100],xmid,ymid,ch;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	xmid=(getmaxx()/2);
	ymid=(getmaxy()/2);

	line(0,ymid,getmaxx(),ymid);
	line(xmid,0,xmid,getmaxy());

	printf("Enter the elements of the triangle:\n");
	for(i=0;i<6;i++){
		if(i%2==0)
			printf("Enter X:");
		else
			printf("Enter Y:");
		scanf("%d",&a[i]);
	}
	drawit(a);

	printf("\nEnter the transformation you want to perform:\n1.Translation\n2.Scaling\n3.Rotation\n0.Exit\n\n");
	scanf("%d",&ch);

	switch(ch) {
		case 1:
		translation(a);
		setcolor(10);
		drawit(a);
		break;
		case 2:
		scaling(a);
		setcolor(20);
		drawit(a);
		break;
		case 3:
		rotation(a);
		setcolor(30);
		drawit(a);
		break;
		case 4:
		shearing(a);
		setcolor(10);
		drawit(a);
		break;
		default: exit();
	}

	getch();
	closegraph();
}