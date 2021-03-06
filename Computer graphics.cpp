#include<iostream>
#include<graphics.h>
#include<math.h>


#include <dos.h>
using namespace std;

void plotpoints(int a0,int b0, int a, int b)
{
    putpixel(a0+a, b0+b,7);
    putpixel(a0+a, b0-b,7);
    putpixel(a0-a, b0+b,7);
    putpixel(a0-a, b0-b,7);
    putpixel(a0+b, b0+a,7);
    putpixel(a0+b, b0-a,7);
    putpixel(a0-b, b0+a,7);
    putpixel(a0-b, b0-a,7);
}
 void midpoint (int a0, int b0, int r)
 {
     int a=0, b=r;
     int f=1-r;

     plotpoints(a0,b0,a,b);

     while (a<b)
     {
         a++;
         if(f<0)
         {
             f= f+(2*a)+1;
         }
          else
          {
              b--;
              f= f+(2*(a-b))+1;
          }

          plotpoints(a0,b0,a,b);
     }
 }
int main()
{ 
  cout<<"\n\n Name : Md. Aminul Islam\n ID-No : CSE 1803015044(15A)";
  
   int a,b,a1,a2,b1,b2,da,db,p,num;
  float x,y,x1,y1,x2,y2,dx,dy, s,t,s1,t1,s2,t2,ds,dt,step;;
  int i,r, gd=DETECT,gm;
  initgraph(&gd, &gm, " ");
  cout<<"\n\n List of Figures\n 1.Alphabet\n 2.DDA\n 3.Bresenham\n 4.Mid Point Circle\n 5.National Flag\n 6.Smile & Sad Emoji\n 7.Moving Cycle\n 8.Line,Circle,Arc,Ellipse,Rectangle\n 9.Traffic Light Signal\n 10.Car\n 11.Love Shape\n ";
  initwindow(1200,800, "Figures");
  cout<<"Enter a Number:";
  cin>>num;
  switch(num)
  { 
    case 1:
    	 
    		line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
    	 
    	 
break;
case 2:
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
	 cout<<"Enter the value of s1 and t1:";
   cin>>s1>>t1;
   cout<<"Enter the value of s2 and t2:";
   cin>>s2>>t2;

   ds=abs(s2-s1);
   dt=abs(t2-t1);

   if(ds>=dt)
      step=ds;
   else
    step=dt;

   ds=ds/step;
   dt=dt/step;

   s=s1;
   t=t1;

   i=1;

   while(i<=step)
   {
       putpixel(s,t,15);
       s=s+ds;
       t=t+dt;
       i=i+1;
       delay(20);
   }
	break;
	case 3:
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
			
	cout<<"Enter a1 and b1:";
    cin>>a1>>b1;

    cout<<"Enter a2 and b2:";
    cin>>a2>>b2;

    da=abs(a2-a1);
    db=abs(b2-b1);

    a=a1;
    b=b1;

    p=2*db-da;

    while(a<=a2)
    {
        if(p>=0)
        {
            putpixel(a,b,7);
            b=b+1;
            p=p+2*db-2*da;
        }
        else
        {
            putpixel(a,b,7);
            p=p+2*db;
        }
        a=a+1;
        delay(30);
    }
	break;
	case 4:
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
			cout<<"Enter the value of center co-ordinate:";
  cin>>a>>b;
  
  cout<<"Enter  radius of the circle:";
  cin>>r;

  midpoint(a,b,r);
	break;
	case 5:
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
	setcolor(WHITE);
	rectangle(100,250,110,650);
	setfillstyle(1,WHITE);
	floodfill(101,260,WHITE);
	
	setcolor(GREEN);
	rectangle(110,250,330,450);
	setfillstyle(1,GREEN);
	floodfill(111,260,GREEN); 
	
	setcolor(RED);
    circle(220,350,50);
	setfillstyle(1,RED);
	floodfill(265,360,RED); 
	break;
	case 6:
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
circle(300,300,150);
circle(230,230,30);
circle(370,230,30);
circle(230,230,15);
circle(370,230,15);
line(300,280,260,320);
line(300,280,340,320);
line(260,320,340,320);
line(250,370,350,370);
ellipse(300,370,180,360,50,35);

circle(900,300,150);
circle(830,230,30);
circle(970,230,30);
circle(830,230,15);
circle(970,230,15);
line(900,280,860,320);
line(900,280,940,320);
line(860,320,940,320);
line(850,390,950,390);
ellipse(900,390,0,180,50,35);
	break;
	case 7:
		
			 

    for (i = 0; i < 600; i++) 
	{ 
	    	line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
       

        line(50 + i, 405, 100 + i, 405); 

        line(75 + i, 375, 125 + i, 375); 

        line(50 + i, 405, 75 + i, 375); 

        line(100 + i, 405, 100 + i, 345); 

        line(150 + i, 405, 100 + i, 345); 

        line(75 + i, 345, 75 + i, 370); 

        line(70 + i, 370, 80 + i, 370); 

        line(80 + i, 345, 100 + i, 345); 

  
 

        circle(150 + i, 405, 30); 

        circle(50 + i, 405, 30); 

  

        

        line(0, 436, getmaxx(), 436); 

  

        

        rectangle(getmaxx() - i, 436, 650 - i, 431); 

  

         

        delay(10); 

  

       

        cleardevice(); 

    } 

	break;
	case 8:
		
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
   
        line(200,290,390,290);  
           
        rectangle(225,215,315,265); 
		
		arc(120,200,180,0,30);   
          
        circle(120,270,30);  
          
        ellipse(120,350,0,360,30,20);
	break;
	case 9:
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
  rectangle(250, 250, 350, 550);
  
  circle(300, 300, 50);
  circle(300, 400, 50);
  circle(300, 500, 50);
  
   
  
  {
   
   setfillstyle(1, RED);
   floodfill(300, 310, WHITE);
   outtextxy(280, 310, "STOP");
   delay(1000);
   
   
   
   setfillstyle(1, BLACK);
   floodfill(300, 310, WHITE);
   setfillstyle(1, YELLOW);
   floodfill(300, 400, WHITE);
   outtextxy(280, 400, "HOLD");
   delay(1000);
   
   
   setfillstyle(1, BLACK);
   floodfill(300, 410, WHITE);
   setfillstyle(1, GREEN);
   floodfill(300, 500, WHITE);
   outtextxy(280, 500, "GO");
   delay(1000);
   
   setfillstyle(1, BLACK);
   floodfill(300, 300, WHITE);
   
   
  }
	break;
	case 10:
		 for (int i=0;i<1200;i++)
		 {
			line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);

 
 
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

 
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

 
circle(110+i,370,17);
circle(240+i,370,17);

 

delay(10);
cleardevice();

line(0,390,1200,390);   

 
 
}

    

         
	break;
	
	  case 11:
    	 
    		line(50,40,20,125);
			line(50,40,70,125);
			line(35,83,60,83);
			line(90,40,90,125);
			line(140,40,140,125);
			line(90,40,115,83);
			line(140,40,115,83);
			line(160,40,160,125);
			line(150,40,170,40);
			line(150,125,170,125);
			line(185,40,185,125);
			line(220,40,220,125);
			line(185,40,220,125);
			ellipse(260,40,180,360,25,90);
			line(300,40,300,125);
			line(300,125,320,125);
			
			line(370,40,370,125);
			line(355,40,385,40);
			line(355,125,385,125);
			ellipse(410,105,90,270,20,20);
			line(410,40,410,125);
			line(440,40,440,125);
			line(480,40,480,125);
			line(440,40,480,125);
			ellipse(515,85,0,360,30,43);
			circle(565,60,7);
			circle(565,103,7);
			line(590,40,630,40);
			line(590,40,590,70);
			ellipse(590,95,270,90,50,25);
			ellipse(680,85,0,360,30,42);
			line(760,40,760,125);
			line(760,40,720,85);
			line(720,85,760,85);
			line(810,40,810,125);
			line(810,40,770,85);
			line(770,85,810,85);
			
	 setbkcolor(BLUE);
     setcolor(12);
  
   circle(50,50,40);
   circle(112,52,42);
   
   line(22,82,82,140);
   line(82,140,138,80);
   
   floodfill(50,50,12);
   floodfill(112,52,12);
   floodfill(80,50,12);
   floodfill(80,102,12);
     
     delay(5000);
			
break;
	
}
    getch();
	closegraph();

}
 
 
