#include<fstream.h>
#include<ctype.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

class hospital
{
	char n[20];//name of patient
	char s[7]; //gender of patient
	char a[50];//address
	char d[50];//diagnosis of patient
	char c[50];//consulting doctor
	char r[50];//previous report
	char p[10];//phone number
	char a1[3];//age
	public:
	void input();
	void display();
	char *name()
	{
		return n;
	}
}h;

void record();
void menu();
void overview();
void departments();
void data();
void opd();
void doctors();
void emergency();
void fa();
void f2();
void f3();
void f4();
void f5();
void f6();
void box();
void ward();
void card();
void cash();
void discharge();
void bill();
void frontpage();
void topic();
void hospi();
void loading();

void main()//to display the available facilities in hospital
{
	clrscr();
       /*	frontpage();
	delay(5000);
	topic();
	delay(5000);
	hospi();
	delay(5000);
	loading();
	delay(5000);*/
	menu();
	getch();
}

fstream f,f1;
char b;

void frontpage()
{
clrscr();
textcolor(BLUE);
{
for(int i=1;i<80;i++)
{
gotoxy(i,1);
delay(10);
cprintf("±");
}
for(int j=1;j<25;j++)
{
gotoxy(80,j);
delay(10);
cprintf("±");
}
for(int k=79;k>=1;k--)
{
gotoxy(k,24);
delay(10);
cprintf("±");
}
for(int l=24;l>=1;l--)
{
gotoxy(1,l);
delay(10);
cprintf("±");
}
}
textcolor(RED);
{
gotoxy(26,3);
cprintf("BEN HUR PUBLIC SCHOOL,PILIBHIT");
gotoxy(3,21);
cprintf("DESIGNED AND DEVELOPED BY:-");
gotoxy(50,21);
cprintf("SUBMITTED TO:-");

}
textcolor(8);
{
gotoxy(3,22);
cprintf("SHRUTI AGARWAL");
gotoxy(3,23);
cprintf("12th PURPLE");
gotoxy(50,22);
cprintf("MR  SHAKTIRISH KUMAR AGRAWAL");
gotoxy(50,23);
cprintf("PGT,COMPUTER SCIENCE");
}
gotoxy(15,5);
cprintf("        ⁄ƒƒƒƒƒø                          ");gotoxy(15,6);
cprintf("        ≥     ≥                          ");gotoxy(15,7);
cprintf("      ⁄ƒŸƒƒƒƒƒ¿ƒø                        ");gotoxy(15,8);
cprintf("      ≥  ¯   ¯  ≥    /------------------ø");gotoxy(15,9);
cprintf("      ≥         ≥--->                   |");gotoxy(15,10);
cprintf("      ≥         ≥     |                 |");gotoxy(15,11);
cprintf("      ¿ƒƒøƒƒƒ⁄ƒƒŸ     |                 |");gotoxy(15,12);
cprintf("     ⁄ƒƒƒŸ   ¿ƒƒƒø    |                 |");gotoxy(15,13);
cprintf("     ≥           ≥    |                 |");gotoxy(15,14);
cprintf("     ≥           ≥    ¿-----------------Ÿ");gotoxy(15,15);
cprintf("     ≥           ≥                       ");gotoxy(15,16);
cprintf(" ____≥___________≥____");
textcolor(YELLOW+BLINK);
gotoxy(26,9);
cprintf("");
gotoxy(24,14);
cprintf("DOCTOR");
textcolor(RED);
gotoxy(24,10);
cprintf("-----");
gotoxy(26,6);
cprintf("+");
textcolor(5+BLINK);
gotoxy(39,9);
cprintf("⁄ƒƒ   ≥     ≥");gotoxy(39,10);
cprintf("≥   ƒƒ¿ƒƒ ƒƒ¿ƒƒ");gotoxy(39,11);
cprintf("¿ƒƒ   ≥     ≥  ");
gotoxy(43,13);
cprintf("PROJECT");
textcolor(WHITE);
gotoxy(28,19);delay(100);
cprintf("    LOADING");delay(500);
textcolor(GREEN);

		delay(1000);
		cprintf("..");
		delay(1000);
		cprintf(".");
		delay(1000);
		cprintf("..........");
gotoxy(56,2);
cprintf("     ⁄ƒƒƒø ");gotoxy(56,3);
cprintf("  ⁄ƒƒŸ   ¿ƒƒø");gotoxy(56,4);
cprintf("  ¿ƒƒø   ⁄ƒƒŸ");gotoxy(56,5);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(63,11);
cprintf("     ⁄ƒƒƒø ");gotoxy(63,12);
cprintf("  ⁄ƒƒŸ   ¿ƒƒø");gotoxy(63,13);
cprintf("  ¿ƒƒø   ⁄ƒƒŸ");gotoxy(63,14);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(63,4);
cprintf("    ⁄ƒø  ");gotoxy(63,5);
cprintf("  ⁄ƒŸ ¿ƒø");gotoxy(63,6);
cprintf("  ¿ƒø ⁄ƒŸ");gotoxy(63,7);
cprintf("    ¿ƒŸ ");
gotoxy(72,2);
cprintf("  ⁄ƒø ");gotoxy(72,3);
cprintf("⁄ƒŸ ¿ƒø");gotoxy(72,4);
cprintf("¿ƒø ⁄ƒŸ");gotoxy(72,5);
cprintf("  ¿ƒŸ ");
gotoxy(60,7);
cprintf("    ⁄ƒƒø  ");gotoxy(60,8);
cprintf(" ⁄ƒƒŸ  ¿ƒƒø");gotoxy(60,9);
cprintf(" ¿ƒƒø  ⁄ƒƒŸ");gotoxy(60,10);
cprintf("    ¿ƒƒŸ ") ;
gotoxy(73,7);
cprintf("  ⁄ƒø");gotoxy(73,8);
cprintf("⁄ƒŸ ¿ƒø");gotoxy(73,9);
cprintf("¿ƒø ⁄ƒŸ");gotoxy(73,10);
cprintf("  ¿ƒŸ ");
gotoxy(2,2);
cprintf("     ⁄ƒƒƒƒƒø");
gotoxy(2,3);
cprintf("   ⁄ƒŸ  +  ¿ƒøƒ-ƒ--ƒƒ>");
gotoxy(2,4);
cprintf("   ¿ƒø-----⁄ƒŸ");
gotoxy(2,5);
cprintf("    ≥ o o ≥");
gotoxy(2,6);
cprintf("     ≥    ≥");
gotoxy(2,7);
cprintf("     ¿-----Ÿ");
gotoxy(2,8);
cprintf("  ⁄ƒƒƒŸ   ¿ƒƒƒø");
gotoxy(2,9);
cprintf("  ≥ ŒŒŒŒŒŒŒŒŒ ≥");gotoxy(2,10);
cprintf("  ≥ ŒŒŒŒŒŒŒŒŒ ≥");gotoxy(2,11);
cprintf("  ¿ƒø_______⁄ƒŸ");
gotoxy(2,12);
cprintf("     ≥     ≥ ");
gotoxy(2,13);
cprintf("    ƒŸ     ¿ƒ");
}
void topic()
{
clrscr();
textcolor(1);
{
for(int i=1;i<80;i++)
{
gotoxy(i,1);
delay(10);
cprintf("±");
}
for(int j=1;j<25;j++)
{
gotoxy(80,j);
delay(10);
cprintf("±");
}
for(int k=79;k>=1;k--)
{
gotoxy(k,24);
delay(10);
cprintf("±");
}
for(int l=24;l>=1;l--)
{
gotoxy(1,l);
delay(10);
cprintf("±");
}
}
textcolor(11);
{                                 gotoxy(3,3);delay(100);
cprintf("    €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€  ");cout<<endl;
gotoxy(3,4);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€   ");cout<<endl;
gotoxy(3,5);delay(100);
cprintf("    €€€€€€€€€           €€€          €€         €€   €€€         €€€€€€   ");cout<<endl;
gotoxy(3,6);delay(100);
cprintf("    €€€€€€€€€€€€€  €€€€€€€€  €€€€€   €€  €€€€€  €€   €€€  €€€€€€€€€€€€€   ");cout<<endl;
gotoxy(3,7);delay(100);
cprintf("    €€€€€€€€€€€€€  €€€€€€€€  €€€€€   €€         €€   €€€  €€€€€€€€€€€€€  ");cout<<endl;
gotoxy(3,8);delay(100);
cprintf("    €€€€€€€€€€€€€  €€€€€€€€          €€  €€€€€€€€€   €€€         €€€€€€   ");cout<<endl;
gotoxy(3,9);delay(100);
cprintf("    ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ");cout<<endl;
gotoxy(3,10);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
}
textcolor(20);
{                                 gotoxy(7,13);delay(100);
cprintf("    €     €  €€€€€€€  €€€€€€ €€€€€€ €€€€€€  €€€€€€ €€€€€€€ €         ");cout<<endl;
gotoxy(7,14);delay(100);
cprintf("    €     €  €     €  €      €    €   €       €    €     € €         ");cout<<endl;
gotoxy(7,15);delay(100);
cprintf("    €€€€€€€  €     €  €€€€€€ €€€€€€   €       €    €€€€€€€ €         ");cout<<endl;
gotoxy(7,16);delay(100);
cprintf("    €     €  €     €       € €        €       €    €     € €         ");cout<<endl;
gotoxy(7,17);delay(10);
cprintf("    €     €  €€€€€€€  €€€€€€ €      €€€€€€    €    €     € €€€€      ");cout<<endl;
gotoxy(2,19);delay(10);
cprintf("  €€€€€€€ €€€€€€ €€      € €€€€€€ €€€€€€€ €€€€€€ €€€€€€€ €€€€€ €€     € €€€€€ ");cout<<endl;
gotoxy(2,20);delay(10);
cprintf("  €€   €€ €    € €€€     € €    € €       €€     €€   €€ €€    €€€    €   €   ");cout<<endl;
gotoxy(2,21);delay(10);
cprintf("  € € € € €€€€€€ € €€    € €€€€€€ €   €€€ €€€€€€ € € € € €€€€€ € €€   €   €   ");cout<<endl;
gotoxy(2,22);delay(10);
cprintf("  €  €  € €    € €  €€€  € €    € €     € €€     €  €  € €€    €   €€ €   €   ");cout<<endl;
gotoxy(2,23);delay(10);
cprintf("  €     € €    € €     €€€ €    € €€€€€€€ €€€€€€ €     € €€€€€ €    €€€   €   ");cout<<endl;
}
textcolor(YELLOW);
{
gotoxy(2,2);
cprintf("≥");
gotoxy(2,3);
cprintf("≥");
gotoxy(2,4);
cprintf("≥");
gotoxy(2,5);
cprintf("≥");
gotoxy(2,6);
cprintf("≥");
gotoxy(2,7);
cprintf("≥");
gotoxy(2,8);
cprintf("≥");
gotoxy(2,9);
cprintf("≥");
gotoxy(2,10);
cprintf("≥");
gotoxy(2,11);
cprintf("≥");
gotoxy(3,2);
cprintf("≥");
gotoxy(3,3);
cprintf("≥");
gotoxy(3,4);
cprintf("≥");
gotoxy(3,5);
cprintf("≥");
gotoxy(3,6);
cprintf("≥");
gotoxy(3,7);
cprintf("≥");
gotoxy(3,8);
cprintf("≥");
gotoxy(3,9);
cprintf("≥");
gotoxy(3,10);
cprintf("≥");

gotoxy(4,2);
cprintf("≥");
gotoxy(4,3);
cprintf("≥");
gotoxy(4,4);
cprintf("≥");
gotoxy(4,5);
cprintf("≥");
gotoxy(4,6);
cprintf("≥");
gotoxy(4,7);
cprintf("≥");
gotoxy(4,8);
cprintf("≥");
gotoxy(4,9);
cprintf("≥");

gotoxy(5,2);
cprintf("≥");
gotoxy(5,3);
cprintf("≥");
gotoxy(5,4);
cprintf("≥");
gotoxy(5,5);
cprintf("≥");
gotoxy(5,6);
cprintf("≥");
gotoxy(5,7);
cprintf("≥");
gotoxy(5,8);
cprintf("≥");
gotoxy(6,2);
cprintf("≥");
gotoxy(6,3);
cprintf("≥");
gotoxy(6,4);
cprintf("≥");
gotoxy(6,5);
cprintf("≥");
gotoxy(6,6);
cprintf("≥");
gotoxy(6,7);
cprintf("≥");
gotoxy(7,2);
for(int i=7;i<74;i++)
{
 cprintf("≥");
}
gotoxy(79,2);
cprintf("≥");
gotoxy(79,3);
cprintf("≥");
gotoxy(79,4);
cprintf("≥");
gotoxy(79,5);
cprintf("≥");
gotoxy(79,6);
cprintf("≥");
gotoxy(79,7);
cprintf("≥");
gotoxy(79,8);
cprintf("≥");
gotoxy(79,9);
cprintf("≥");
gotoxy(79,10);
cprintf("≥");
gotoxy(79,11);
cprintf("≥");
gotoxy(78,2);
cprintf("≥");
gotoxy(78,3);
cprintf("≥");
gotoxy(78,4);
cprintf("≥");
gotoxy(78,5);
cprintf("≥");
gotoxy(78,6);
cprintf("≥");
gotoxy(78,7);
cprintf("≥");
gotoxy(78,8);
cprintf("≥");
gotoxy(78,9);
cprintf("≥");
gotoxy(78,10);
cprintf("≥");
gotoxy(77,2);
cprintf("≥");
gotoxy(77,3);
cprintf("≥");
gotoxy(77,4);
cprintf("≥");
gotoxy(77,5);
cprintf("≥");
gotoxy(77,6);
cprintf("≥");
gotoxy(77,7);
cprintf("≥");
gotoxy(77,8);
cprintf("≥");
gotoxy(77,9);
cprintf("≥");
gotoxy(76,2);
cprintf("≥");
gotoxy(76,3);
cprintf("≥");
gotoxy(76,4);
cprintf("≥");
gotoxy(76,5);
cprintf("≥");
gotoxy(76,6);
cprintf("≥");
gotoxy(76,7);
cprintf("≥");
gotoxy(76,8);
cprintf("≥");
gotoxy(75,2);
cprintf("≥");
gotoxy(75,3);
cprintf("≥");
gotoxy(75,4);
cprintf("≥");
gotoxy(75,5);
cprintf("≥");
gotoxy(75,6);
cprintf("≥");
gotoxy(75,7);
cprintf("≥");
gotoxy(74,2);
cprintf("≥");
gotoxy(74,3);
cprintf("≥");
gotoxy(74,4);
cprintf("≥");
gotoxy(74,5);
cprintf("≥");
gotoxy(74,6);
cprintf("≥");
}textcolor(WHITE+BLINK);
gotoxy(4,10);
cprintf("¯");
gotoxy(5,9);
cprintf("¯");
gotoxy(6,8);
cprintf("¯");
gotoxy(2,12);
cprintf("¯");
gotoxy(74,7);
cprintf("¯");
gotoxy(75,8);
cprintf("¯");
gotoxy(76,9);
cprintf("¯");
gotoxy(77,10);
cprintf("¯");
gotoxy(78,11);
cprintf("¯");
gotoxy(79,12);
cprintf("¯");
gotoxy(3,11);
cprintf("¯");
}

void hospi()
{
clrscr();
textcolor(BLUE);
{
for(int i=1;i<80;i++)
{
gotoxy(i,1);
delay(10);
cprintf("±");
}
for(int k=79;k>=1;k--)
{
gotoxy(k,24);
delay(10);
cprintf("±");

}
textcolor(YELLOW);
{
gotoxy(1,3);
for (int i=1;i<=20;i++)
{
	if(i==1)
	{
		for(int j=1;j<=80;j++)
		{
			if((j>34)&&(j<52))
			 cprintf("ƒ");
			 else if(j==34)
			cprintf ("⁄");
			 else if(j==52)
			 cprintf("ø");
			 else
			 cout<<" ";
		 }
	}
	else if(i==2)
		{
		for(int j=1;j<=80;j++)
		{
			if((j==34)||(j==52))
			 cprintf("≥");

			 else
			 cout<<" ";
		 }
	}
		else if(i==3)
		{
		for(int j=1;j<=80;j++)
		{
			if((j>28)&&(j<=33)||(j>=35)&&(j<=51)||(j>52)&&(j<58))
			 cprintf("ƒ");
			 else if(j==34)
			 cprintf("Ÿ");
			 else if(j==52)
			 cprintf("¿");
			 else if(j==28)
			 cprintf("⁄");
			 else if(j==58)
			 cprintf("ø");
			 else
			 cout<<" ";
		 }
	}
	else if(i==4)
		{
		for(int j=1;j<=80;j++)
		{
			if((j==28)||(j==58))
			 cprintf("≥");
			 else
			 cout<<" ";
		 }
	}
	else if(i==5)
		{
		for(int j=1;j<=80;j++)
		{
		if((j==28)||(j==58))
			 cprintf("≥");
			 else if((j==30)||(j==50)||(j==42))
			 cprintf("⁄");
			 else
			  if((j==38)||(j==46)||(j==56))
			 cprintf("ø");
			 else if((j>=31)&&(j<=37)||(j>=43)&&(j<=45)||(j>=51)&&(j<=55))
			 cprintf("ƒ");
			 else
			 cout<<" ";
		 }
	}
	  else if(i==6)
	      {
		for(int j=1;j<=80;j++)
		{
		 if((j>25)&&(j<28)||(j>58)&&(j<61)||(j==12)||(j==16)||(j==20)||(j==73)||(j==69)||(j==65))
		    cprintf("ƒ");
		   else
		   if((j>30)&&(j<38)||(j>50)&&(j<56))
		     cprintf("-");
		 else
		 if((j==25)||(j==11)||(j==15)||(j==19)||(j==72)||(j==68)||(j==64))
		   cprintf("⁄");
		    else
		 if((j==61)||(j==13)||(j==17)||(j==21)||(j==74)||(j==66)||(j==61)||(j==70))
		   cprintf("ø");
		   else
		 if(j==28)
		   cprintf("Ÿ");
		    else
		 if(j==58)
		   cprintf("¿");
		    else
		 if((j==42)||(j==46)||(j==30)||(j==38)||(j==50)||(j==56))
		   cprintf("≥");
		    else
		    cout<<" ";
		 }
		 }
      else if(i==7)
	      {
		for(int j=1;j<=80;j++)
		{
		 if((j==25)||(j==30)||(j==38)||(j==50)||(j==56)||(j==61)||(j==28)||(j==58)||(j==11)||(j==13)||(j==15)||(j==17)||(j==19)||(j==21)||(j==74)||(j==72)||(j==70)||(j==68)||(j==66)||(j==64)||(j==61))
		     cprintf("≥");

		   else
		   if((j>30)&&(j<38)||(j>50)&&(j<56))
		     cprintf("-");
		 else
		 if((j>40)&&(j<42)||(j>46)&&(j<48))
		   cprintf("ƒ");
		    else
		 if(j==40)
		 cprintf("⁄");
		  else
		 if(j==42)
		 cprintf("Ÿ");
		  else
		 if(j==46)
		 cprintf("¿");

		  else
		 if(j==48)
		 cprintf("ø");
		    else
		    cprintf(" ");
		 }
		 }
	 else if(i==8)
	      {
		for(int j=1;j<=80;j++)
		{
		 if((j>=12)&&(j<=24)||(j>=26)&&(j<=27)||(j>=59)&&(j<=60)||(j>=62)&&(j<=73))
		     cprintf("Õ");
		   else
		   if((j>30)&&(j<38)||(j>50)&&(j<56))
		     cprintf("-");
		 else
		 if((j==40)||(j==48)||(j==30)||(j==38)||(j==50)||(j==56))
		   cprintf("≥");
		    else
		 if(j==11)
		 cprintf("…");
		  else
		 if(j==74)
		 cprintf("ª");
		  else
		 if(j==25)
		 cprintf("Ÿ");
		  else
		 if(j==28)
		 cprintf("ø");
		  else
		 if(j==58)
		cprintf("⁄");
		  else
		 if(j==61)
		 cprintf("¿");
		    else
		    cout<<" ";
		 }
		 }
       else if(i==9)
	      {
		for(int j=1;j<=80;j++)
		{
		 if((j>=12)&&(j<=22)||(j>=24)&&(j<=27)||(j>=31)&&(j<=37)||(j>=51)&&(j<=55)||(j>=59)&&(j<=62)||(j>=64)&&(j<=73))
		     cprintf("ƒ");
		 else
		 if((j==28)||(j==58))
		   cprintf("≥");
		    else
		 if((j==11)||(j==74))
		  cprintf("∫");
		  else
		 if(j==24)
		 cprintf("ø");
		  else
		 if((j==30)||(j==40)||(j==50))
		 cprintf("¿");
		  else
		 if((j==38)||(j==48)||(j==56))
		 cprintf("Ÿ");
		  else
		 if((j==41)||(j==47))
		 cprintf("ƒ");
		  else
		 if((j==23)||(j==42))
		 cprintf("ø");
		 else
		 if((j==46)||(j==63))
		 cprintf("⁄");

		    else
		    cout<<" ";
		 }
		 }

		 else if(i==10)
	      {
		for(int j=1;j<=80;j++)
		{
		if((j>=15)&&(j<22)||(j>=66)&&(j<71))
		     cprintf("ƒ");
		 else
		 if((j==28)||(j==23)||(j==42)||(j==46)||(j==58)||(j==63))
		   cprintf("≥");
		    else
		 if((j==11)||(j==74))
		  cprintf("∫");
		  else
		 if((j==14)||(j==65))

		 cprintf("⁄");
		   else
		 if((j==22)||(j==71))

		 cprintf("ø");

		    else
		    cout<<" ";
		 }
		 }
	else if(i==11)
	      {
		for(int j=1;j<=80;j++)
		{
		if((j>=25)&&(j<=40)||(j>=43)&&(j<=45)||(j>=48)&&(j<=60))
		     cprintf("ƒ");
		 else
		 if((j==14)||(j==22)||(j==23)||(j==63)||(j==65)||(j==71))
		   cprintf("≥");
		    else
		    if((j>=15)&&(j<=21)||(j>=66) &&(j<=70))
			  cprintf("-");

		    else
		 if((j==11)||(j==74))
		  cprintf("∫");
		  else
		 if((j==14)||(j==65)||(j==24))

		 cprintf("⁄");
		   else
		 if((j==22)||(j==71)||(j==61))

		 cprintf("ø");
			     else
			     if(j==42)
			     cprintf("¿");
			     else
			     if(j==46)
			     cprintf("Ÿ");
		    else
		    cout<<" ";
		 }
		 }
	      else if(i==12)
	     {
		for(int j=1;j<=80;j++)
		{
		    if((j==11)||(j==74))
			  cprintf("∫");
		   else if((j==14)||(j==22)||(j==23)||(j==24)||(j==63)||(j==65)||(j==71)||(j==24)
		   ||(j==36)||(j==38)||(j==61)||(j==57))
			  cprintf("≥");
		 else
		 if((j>=15)&&(j<=21)||(j>=66) &&(j<=70))
			  cprintf("-");
		 else
		 if((j==28)||(j==29)||(j==32)||(j==33)||(j==40)||(j==43)||(j==44)||(j==52)||(j==46)||(j==47)||(j==50)||(j==53)||(j==55))
			  cprintf("ƒ");
		    else
		 if((j==27)||(j==31)||(j==39)||(j==42)||(j==45)||(j==54))
			  cprintf("⁄");
		   else
		    if((j==34)||(j==41)||(j==48)||(j==55)||(j==51)||(j==56))
			  cprintf("ø");
		   else
		    if(j==49)
			  cprintf("o");
		    else
			cout<<" ";
		 }
		 }
		else if(i==13)
		{
		 for(int j=1;j<=80;j++)
		{
		 if((j==14)||(j==22)||(j==23)||(j==24)||(j==27)||(j==31)||(j==34)||(j==36)||(j==38)||(j==39)||(j==41)||(j==42)||(j==45)||(j==48)||(j==49)||(j==51)||(j==54)||(j==56)||(j==57)||(j==61)||(j==63)||(j==65)||(j==71))
		   cprintf("≥");
		    else if((j==11)||(j==74))
		  cprintf("∫");
		   else  if((j>=15)&&(j<=21)||(j>=66) &&(j<=70))
		   cprintf("-");
		     else
		    cout<<" ";
		 }
		 }


		else if(i==14)
		{
		 for(int j=1;j<=80;j++)
		{
		 if((j==23)||(j==24)||(j==39)||(j==41)||(j==49)||(j==51)||(j==57)||(j==61)||(j==63))
		   cprintf("≥");
		    else if((j==11)||(j==74))
		  cprintf("∫");
		   else  if((j>=15)&&(j<=21)||(j>=66) &&(j<=70)||(j==55)||(j==46)||(j==47)||(j==43)||(j==37)||(j==32)||(j==33)||(j==28))
		   cprintf("-");
		   else if((j==14)||(j==65)||(j==27)||(j==36)||(j==31)||(j==42)||(j==45)||(j==54))
		   cprintf ("¿");
		   else if((j==22)||(j==71)||(j==34)||(j==38)||(j==48)||(j==56))
		   cprintf("Ÿ");
		   else if((j==29)||(j==44))
		   cprintf("ø");
		     else
		    cout<<" ";
		 }
		 }
			else if(i==15)
		{
		 for(int j=1;j<=80;j++)
		{
		 if((j==23)||(j==24)||(j==29)||(j==31)||(j==36)||(j==45)||(j==54)||(j==38)||(j==56)||(j==39)||(j==41)||(j==44)||(j==49)||(j==51)||(j==57)||(j==61)||(j==63))
		   cprintf("≥");
		    else if((j==11)||(j==74))
		  cprintf("∫");
		   else
		    cout<<" ";
		 }
		 }

	       else if(i==16)
		{
		 for(int j=1;j<=80;j++)
		{
		 if((j==23)||(j==24)||(j==31)||(j==36)||(j==38)||(j==45)||(j==49)||(j==51)||(j==54)||(j==56)||(j==61)||(j==63))
		   cprintf("≥");
		   else if((j==11)||(j==74))
		  cprintf("∫");
		   else  if((j>=17)&&(j<=20)||(j>=67) &&(j<=70)||(j==27)||(j==28)||(j==42)||(j==58)||(j==59)||(j==40)||(j==43))
		   cprintf("ƒ");
		   else if((j==57)||(j==39))
		   cprintf ("¿");
		   else if((j==29)||(j==41)||(j==44))
		   cprintf("Ÿ");
		   else if((j==21)||(j==71))
		   cprintf("ø");
		   else if((j==16)||(j==66))
		   cprintf("⁄");
		     else
		    cout<<" ";
		 }
		 }else if(i==17)
		{
		 for(int j=1;j<=80;j++)
		{
		 if((j==16)||(j==21)||(j==23)||(j==63)||(j==66)||(j==71))
		   cprintf("≥");
		    else if((j==11)||(j==74))
		  cprintf("∫");
		   else  if((j>=25)&&(j<=60))
		   cprintf("ƒ");
		   else if(j==24)
		    cprintf ("¿");
		    else if(j==61)
		    cprintf("Ÿ");
		      else
		    cout<<" ";
		 }
		 }
		 else if(i==18)
		{
		 for(int j=1;j<=80;j++)
		{
		  if((j==16)||(j==21)||(j==23)||(j==29)||(j==30)||(j==31)||(j==55)||(j==56)||(j==57)||(j==63)||(j==66)||(j==71))
		   cprintf("≥");
		    else if((j==11)||(j==74))
		  cprintf("∫");
		      else
		    cout<<" ";
		 }
		 }else if(i==19)
		{
		 for(int j=1;j<=80;j++)
		{
		 if((j==16)||(j==21)||(j==23)||(j==29)||(j==30)||(j==31)||(j==55)||(j==56)||(j==57)||(j==63)||(j==66)||(j==71))
		   cprintf("≥");
		    else if((j==11)||(j==74))
		  cprintf("∫");
		      else
		    cout<<" ";
		 }
		 }
		else if(i==20)
		{
		 for(int j=1;j<=80;j++)
		     {
		     if(j==11)
			cprintf("»");
		     else if(j==74)
			cprintf("º");
		     else if((j>=12)&&(j<74))
		    cprintf("Õ");
		     else
		    cout<<" ";
		 }
		 }
}
}
}
}
void loading()
{
clrscr();
textcolor(1);
{
for(int i=1;i<80;i++)
{
gotoxy(i,1);
delay(10);
cprintf("±");
}
for(int j=1;j<25;j++)
{
gotoxy(80,j);
delay(10);
cprintf("±");
}
for(int k=79;k>=1;k--)
{
gotoxy(k,24);
delay(10);
cprintf("±");
}
for(int l=24;l>=1;l--)
{
gotoxy(1,l);
delay(10);
cprintf("±");
}
}
textcolor(20+BLINK);
{
gotoxy(10,3);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,4);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,5);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€            €€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,6);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€            €€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,7);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€            €€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,8);delay(100);
cprintf("    €€€€€€€€€€€€€€                            €€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,9);delay(100);
cprintf("    €€€€€€€€€€€€€€                            €€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,10);delay(100);
cprintf("    €€€€€€€€€€€€€€                            €€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,11);delay(100);
cprintf("    €€€€€€€€€€€€€€                            €€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,12);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€            €€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,13);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€            €€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,14);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€            €€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,15);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
gotoxy(10,16);delay(100);
cprintf("    €€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€");cout<<endl;
}
textcolor(WHITE);
{
gotoxy(16,19);delay(100);
cprintf("      LOADING");delay(500);
}
textcolor(GREEN);
{
		delay(1000);
		cprintf("..");
		delay(1000);
		cprintf(".");
		delay(1000);
		cprintf("..........");
		delay(1000);
		cprintf(".......");
		delay(1000);
		cprintf("....");
		delay(3000);
		cprintf("......");
}
}

void box()
{
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥                                                 ≥";
gotoxy(16,12);
cout<<"≥                                                 ≥";
gotoxy(16,13);
cout<<"≥                                                 ≥";
gotoxy(16,14);
cout<<"≥                                                 ≥";
gotoxy(16,15);
cout<<"≥                                                 ≥";
gotoxy(16,16);
cout<<"≥                                                 ≥";
gotoxy(16,17);
cout<<"≥                                                 ≥";
gotoxy(16,18);
cout<<"≥                                                 ≥";
gotoxy(16,19);
cout<<"≥                                                 ≥";
gotoxy(16,20);
cout<<"≥                                                 ≥";
gotoxy(16,21);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
}

void border()
{
for(int i=0;i<103;i++)
{
	gotoxy(1,i);
	delay(10);
	cout<<"∞";
}
for(i=0;i<80;i++)
{
	gotoxy(i,1);
	delay(10);
	cout<<"∞";
	if(i==79)
	{
		for(int j=2;j<=25;j++)
		{
			gotoxy(79,j);
			delay(10);
			cout<<"∞";
		}
	}
}
}

void menu()
{
clrscr();
textcolor(WHITE);
for(int i=0;i<103;i++)
{
	gotoxy(1,i);
	delay(10);
	cout<<"€";
}
for(i=0;i<80;i++)
{
	gotoxy(i,1);
	delay(10);
	cout<<"€";
	if(i==79)
	{
		for(int j=2;j<=25;j++)
		{
			gotoxy(79,j);
			delay(10);
			cout<<"€";
		}
	}
}
gotoxy(3,3);
cout<<"±±±±±± ±±±±±±   ±±    ±± ±±±±± ±±±±±± ±±±±±± ±±±±±±± ±±±±±±  ±±±±±±  ±±    ";
gotoxy(3,4);
cout<<"±±     ±±   ±   ±±    ±± ±   ± ±±     ±±   ±    ±      ±±   ±±    ±± ±±    ";
gotoxy(3,5);
cout<<"±±±±±± ±±±±±±   ±±±±±±±± ±   ± ±±±±±± ±±±±±±    ±      ±±   ±±±±±±±± ±±    ";
gotoxy(3,6);
cout<<"    ±± ±±       ±±    ±± ±   ±     ±± ±±        ±      ±±   ±±    ±± ±±    ";
gotoxy(3,7);
cout<<"±±±±±± ±±       ±±    ±± ±±±±± ±±±±±± ±±     ±±±±±±±   ±±   ±±    ±± ±±±±±±";
delay(1000);
gotoxy(3,9);
cout<<"     ±±±±±±     "; //±177
gotoxy(3,10);
cout<<"     ±±±±±±     ";
gotoxy(3,11);
cout<<"±±±±±±±±±±±±±±±±";
gotoxy(3,12);
cout<<"±± 1.OVERVIEW ±±";
gotoxy(3,13);
cout<<"±±±±±±±±±±±±±±±±";
gotoxy(3,14);
cout<<"     ±±±±±±     ";
gotoxy(3,15);
cout<<"     ±±±±±±     ";
delay(100);
gotoxy(19,9);
cout<<"        ±±±±±±        ";
gotoxy(19,10);
cout<<"        ±±±±±±        ";
gotoxy(19,11);
cout<<"±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(19,12);
cout<<"±2. AVAILABLE DOCTORS±";
gotoxy(19,13);
cout<<"±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(19,14);
cout<<"        ±±±±±±        ";
gotoxy(19,15);
cout<<"        ±±±±±±        ";
delay(100);
gotoxy(41,9);
cout<<"      ±±±±±±      ";
gotoxy(41,10);
cout<<"      ±±±±±±      ";
gotoxy(41,11);
cout<<"±±±±±±±±±±±±±±±±±±";
gotoxy(41,12);
cout<<"± 3. DEPARTMENTS ±";
gotoxy(41,13);
cout<<"±±±±±±±±±±±±±±±±±±";
gotoxy(41,14);
cout<<"      ±±±±±±      ";
gotoxy(41,15);
cout<<"      ±±±±±±     ";
delay(100);
gotoxy(58,9);
cout<<"       ±±±±±±       ";
gotoxy(58,10);
cout<<"       ±±±±±±       ";
gotoxy(58,11);
cout<<"±±±±±±±±±±±±±±±±±±±±";
gotoxy(58,12);
cout<<"±±±±±± 4. OPD ±±±±±±";
gotoxy(58,13);
cout<<"±±±±±±±±±±±±±±±±±±±±";
gotoxy(58,14);
cout<<"       ±±±±±±       ";
gotoxy(58,15);
cout<<"       ±±±±±±       ";
delay(100);
gotoxy(3,17);
cout<<"     ±±±±±±     "; //±177
gotoxy(3,18);
cout<<"     ±±±±±±     ";
gotoxy(3,19);
cout<<"±±±±±±±±±±±±±±±±";
gotoxy(3,20);
cout<<"±± 5.EMERGENCY±±";
gotoxy(3,21);
cout<<"±±±±±±±±±±±±±±±±";
gotoxy(3,22);
cout<<"     ±±±±±±     ";
gotoxy(3,23);
cout<<"     ±±±±±±     ";
delay(100);
gotoxy(19,17);
cout<<"        ±±±±±±        ";
gotoxy(19,18);
cout<<"        ±±±±±±        ";
gotoxy(19,19);
cout<<"±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(19,20);
cout<<"±6. DISCHARGE PATIENT±";
gotoxy(19,21);
cout<<"±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(19,22);
cout<<"        ±±±±±±        ";
gotoxy(19,23);
cout<<"        ±±±±±±        ";
delay(100);
gotoxy(41,17);
cout<<"      ±±±±±±      ";
gotoxy(41,18);
cout<<"      ±±±±±±      ";
gotoxy(41,19);
cout<<"±±±±±±±±±±±±±±±±±±";
gotoxy(41,20);
cout<<"±±±± 7.RECORD ±±±±";
gotoxy(41,21);
cout<<"±±±±±±±±±±±±±±±±±±";
gotoxy(41,22);
cout<<"      ±±±±±±      ";
gotoxy(41,23);
cout<<"      ±±±±±±     ";
delay(100);
gotoxy(58,17);
cout<<"       ±±±±±±       ";
gotoxy(58,18);
cout<<"       ±±±±±±       ";
gotoxy(58,19);
cout<<"±±±±±±±±±±±±±±±±±±±±";
gotoxy(58,20);
cout<<"±±±±±± 8.EXIT ±±±±±±";
gotoxy(58,21);
cout<<"±±±±±±±±±±±±±±±±±±±±";
gotoxy(58,22);
cout<<"       ±±±±±±       ";
gotoxy(58,23);
cout<<"       ±±±±±±       ";
x:
gotoxy(30,24);
cout<<"enter your choice :___";
gotoxy(50,24);
cin>>b;
if(b=='1')
{
clrscr();
overview();
}
else if(b=='2')
{
clrscr();
doctors();
}
else if(b=='3')
{
clrscr();
departments();
}
else if(b=='4')
{
clrscr();
opd();
}
else if(b=='5')
{
clrscr();
emergency();
}
else if(b=='7')
{
clrscr();
record();
}
else if(b=='6')
{
clrscr();
discharge();
}
else if(b=='8')
{}
else
goto x;

}

void overview()
{
char c;
border();
gotoxy(33,4);
delay(100);
gotoxy(3,3);delay(100);
cout<<"€€€€€€€ €           € €€€€€ €€€€€ €           € €€ €€€€€ €               €";cout<<endl;
gotoxy(3,4);delay(100);
cout<<"€     €  €         €  €     €   €  €         €  €€ €      €     €€€     €";cout<<endl;
gotoxy(3,5);delay(100);
cout<<"€     €   €       €   €€€€€ €€€€€   €       €   €€ €€€€€   €   €   €   €";cout<<endl;
gotoxy(3,6);delay(100);
cout<<"€     €    €     €    €     €€€      €     €    €€ €        € €     € €";cout<<endl;
gotoxy(3,7);delay(100);
cout<<"€€€€€€€     €€€€€     €€€€€ €€  €     €€€€€     €€ €€€€€    €€€     €€€";cout<<endl;

	delay(100);
	gotoxy(3,9);
	cout<<"Suraksha prabandhan hospital is a dedicated pediatric hospital with world";
	gotoxy(3,10);
	cout<<"class experts who offer a full spectrum of primary and specialised medical";
	gotoxy(3,11);
	cout<<"care. As a leadind macademic medical centre that is primary teaching";
	gotoxy(3,12);
	cout<<"hospital of suraksha school of medicine, Suraksha parabandhan hospital";
	gotoxy(3,13);
	cout<<"offers cutting edge therapies to children long before they're available"; //nationwide. Our advanced approaches to pediatric therapies, our innovative reseach,and aour community outreach and advocacy ensure a continumm of excellence that patients from all over the world can depend on."<<endl;
	gotoxy(3,14);
	cout<<" nationwide. Our advanced approaches to pediatric therapies, our innovative";
	gotoxy(3,15);
	cout<<"reseach,and aour community outreach and advocacy ensure a continumm.";// excellence that patients from all over the world can depend on."<<endl;
	q:
	gotoxy(32,21);
	cout<<" press 'e' for exit ";
	cin>>c;
	if((c=='e')||(c=='E'))
	{
	clrscr();
	menu();
	}
	else
	goto q;
}
void departments()
{
char c;
border();
gotoxy(2,2);delay(100);
cout<<" €€€   €€€€€  €€€€€ €€€€€ €€€€€ €€€€€ €€€€€€€ €€€€€ €€      € €€€€€ €€€€€€€ ";cout<<endl;
gotoxy(2,3);delay(100);
cout<<" €  €  €      €   € €   € €   €   €   €€   €€ €     €€€     €   €   €€	  ";cout<<endl;
gotoxy(2,4);delay(100);
cout<<" €   € €€€€€  €€€€€ €€€€€ €€€€€   €   € € € € €€€€€ € €€    €   €   €€€€€€€ ";cout<<endl;
gotoxy(2,5);delay(100);
cout<<" €  €  €      €     €   € €€ €    €   €  €  € €     €  €€€  €   €        €€ ";cout<<endl;
gotoxy(2,6);delay(100);
cout<<" €€€   €€€€€  €     €   € €€ €€   €   €     € €€€€€ €     €€€   €   €€€€€€€ ";cout<<endl;
gotoxy(17,7);
cprintf("     ⁄ƒƒƒø ");
gotoxy(17,8);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(17,9);
cprintf("≥1- CARDIOLOGY≥");
gotoxy(17,10);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(17,11);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(17,13);
cprintf("     ⁄ƒƒƒø ");
gotoxy(17,14);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(17,15);
cprintf("≥2- IMMUNOLOGY≥");
gotoxy(17,16);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(17,17);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(18,19);
cprintf("    ⁄ƒƒƒø ");
gotoxy(18,20);
cprintf("⁄ƒƒƒŸ   ¿ƒƒƒø");
gotoxy(18,21);
cprintf("≥3-NEUROLOGY≥");
gotoxy(18,22);
cprintf("¿ƒƒƒø   ⁄ƒƒƒŸ");
gotoxy(18,23);
cprintf("    ¿ƒƒƒŸ ");
gotoxy(44,7);
cprintf("     ⁄ƒƒƒø ");
gotoxy(44,8);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(44,9);
cprintf("≥4- GYNECOLOGY≥");
gotoxy(44,10);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(44,11);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(42,13);
cprintf("       ⁄ƒƒƒø ");
gotoxy(42,14);
cprintf("⁄ƒƒƒƒƒƒŸ   ¿ƒƒƒƒƒƒø");
gotoxy(42,15);
cprintf("≥5-ENDOCRINOIOLOGY≥");
gotoxy(42,16);
cprintf("¿ƒƒƒƒƒƒø   ⁄ƒƒƒƒƒƒŸ");
gotoxy(42,17);
cprintf("       ¿ƒƒƒŸ ");
gotoxy(44,19);
cprintf("     ⁄ƒƒƒø ");
gotoxy(44,20);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(44,21);
cprintf("≥6- HEPATOLOGY≥");
gotoxy(44,22);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(44,23);
cprintf("     ¿ƒƒƒŸ ");
	r:
	gotoxy(32,24);
	cout<<" press 'e' for exit ";
	cin>>c;
	if((c=='e')||(c=='E'))
	{
	clrscr();
	menu();
	}
	else
	goto r;
}

void doctors()
{
char c;
border();
gotoxy(4,2);
cout<<"±±±±± ±   ± ±±±±± ±±±±± ±     ±±±±± ±±±±± ±    ±±±± ";
gotoxy(4,3);
cout<<"±   ± ±   ± ±   ±   ±   ±     ±   ± ±   ± ±    ±    ";
gotoxy(4,4);
cout<<"±±±±± ±   ± ±±±±±   ±   ±     ±±±±± ±±±±± ±    ±±±± ";
gotoxy(4,5);
cout<<"±   ± ±   ± ±   ±   ±   ±     ±   ± ±   ± ±    ±    ";
gotoxy(4,6);
cout<<"±   ±  ±±±  ±   ± ±±±±± ±±±±± ±   ± ±±±±± ±±±± ±±±± ";
gotoxy(33,8);
cout<<" ±±± ±±± ±±± ±±± ±±± ±±± ±± ";
gotoxy(33,9);
cout<<" ± ± ±±± ±    ±  ±±± ±±± ¿ø ";
gotoxy(33,10);
cout<<" ±±± ±±± ±±±  ±  ±±± ± ± ±± ";
gotoxy(56,2);
cprintf("     ⁄ƒƒƒø ");
gotoxy(56,3);
cprintf("  ⁄ƒƒŸ   ¿ƒƒø");
gotoxy(56,4);
cprintf("  ¿ƒƒø   ⁄ƒƒŸ");
gotoxy(56,5);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(63,11);
cprintf("     ⁄ƒƒƒø ");
gotoxy(63,12);
cprintf("  ⁄ƒƒŸ   ¿ƒƒø");
gotoxy(63,13);
cprintf("  ¿ƒƒø   ⁄ƒƒŸ");
gotoxy(63,14);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(63,4);
cprintf("    €€  ");
gotoxy(63,5);
cprintf("  €€€€€€");
gotoxy(63,6);
cprintf("    €€");
gotoxy(68,2);
cprintf("   ⁄ƒƒƒø ");
gotoxy(68,3);
cprintf("⁄ƒƒŸ   ¿ƒƒø");
gotoxy(68,4);
cprintf("¿ƒƒø   ⁄ƒƒŸ");
gotoxy(68,5);
cprintf("   ¿ƒƒƒŸ ");
gotoxy(3,8);
cprintf("     ⁄ƒƒƒø ");
gotoxy(3,9);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(3,10);
cprintf("≥1- CARDIOLOGY≥");
gotoxy(3,11);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(3,12);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(23,10);
cprintf("     ⁄ƒƒƒø ");
gotoxy(23,11);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(23,12);
cprintf("≥2- IMMUNOLOGY≥");
gotoxy(23,13);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(23,14);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(3,12);
cprintf("    ⁄ƒƒƒø ");
gotoxy(3,13);
cprintf("⁄ƒƒƒŸ   ¿ƒƒƒø");
gotoxy(3,14);
cprintf("≥3-NEUROLOGY≥");
gotoxy(3,15);
cprintf("¿ƒƒƒø   ⁄ƒƒƒŸ");
gotoxy(3,16);
cprintf("    ¿ƒƒƒŸ ");
gotoxy(23,14);
cprintf("     ⁄ƒƒƒø ");
gotoxy(23,15);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(23,16);
cprintf("≥4- GYNECOLOGY≥");
gotoxy(23,17);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(23,18);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(23,18);
cprintf("       ⁄ƒƒƒø ");
gotoxy(23,19);
cprintf("⁄ƒƒƒƒƒƒŸ   ¿ƒƒƒƒƒƒø");
gotoxy(23,20);
cprintf("≥6-ENDOCRINOIOLOGY≥");
gotoxy(23,21);
cprintf("¿ƒƒƒƒƒƒø   ⁄ƒƒƒƒƒƒŸ");
gotoxy(23,22);
cprintf("       ¿ƒƒƒŸ ");
gotoxy(3,17);
cprintf("     ⁄ƒƒƒø ");
gotoxy(3,18);
cprintf("⁄ƒƒƒƒŸ   ¿ƒƒƒƒø");
gotoxy(3,19);
cprintf("≥5- HEPATOLOGY≥");
gotoxy(3,20);
cprintf("¿ƒƒƒƒø   ⁄ƒƒƒƒŸ");
gotoxy(3,21);
cprintf("     ¿ƒƒƒŸ ");
gotoxy(60,7);
cprintf("    ⁄ƒƒø  ");gotoxy(60,8);
cprintf(" ⁄ƒƒŸ  ¿ƒƒø");gotoxy(60,9);
cprintf(" ¿ƒƒø  ⁄ƒƒŸ");gotoxy(60,10);
cprintf("    ¿ƒƒŸ ") ;
gotoxy(71,6);
cprintf("  €€€€");
gotoxy(71,7);
cprintf("€€€€€€€€");
gotoxy(71,8);
cprintf("€€€€€€€€");
gotoxy(71,9);
cprintf("  €€€€ ");
gotoxy(71,11);
cprintf("  €€€ ");
gotoxy(71,12);
cprintf("€€€€€€€");
gotoxy(71,13);
cprintf("  €€€ ");
gotoxy(71,16);
cprintf("  €€€ ");
gotoxy(71,17);
cprintf("€€€€€€€");
gotoxy(71,18);
cprintf("  €€€ ");
gotoxy(71,19);
cprintf("   ¯");
gotoxy(71,20);
cprintf("   ¯");
gotoxy(71,21);
cprintf("   ¯");
gotoxy(71,22);
cprintf("   ¯");
gotoxy(71,23);
cprintf("   ¯");
gotoxy(71,24);
cprintf("   ¯");
gotoxy(49,11);
cprintf("     ⁄ƒƒƒƒƒø");
gotoxy(49,12);
cprintf("   ⁄ƒŸ  +  ¿ƒø");
gotoxy(49,13);
cprintf("   ¿ƒø-----⁄ƒŸ");
gotoxy(49,14);
cprintf("    ≥ o o ≥");
gotoxy(49,15);
cprintf("     ≥    ≥");
gotoxy(49,16);
cprintf("     ¿-----Ÿ");
gotoxy(49,17);
cprintf("  ⁄ƒƒƒŸ   ¿ƒƒƒø");
gotoxy(49,18);
cprintf("  ≥CHOOSE D.P ≥");
gotoxy(49,19);
cprintf("  ≥   TO SEE  ≥");
gotoxy(49,20);
cprintf("  ≥  DOCTORS  ≥");
gotoxy(49,21);
cprintf("  ¿ƒø_______⁄ƒŸ");
gotoxy(49,22);
cprintf("     ≥     ≥ ");
gotoxy(49,23);
cprintf("    ƒŸ     ¿ƒ");
	char ch;
	s:
	gotoxy(5,23);
	cout<<"choose the department:____ ";
	gotoxy(30,23);
	cin>>ch;
	switch(ch)
	{
	case'1':
	{
	clrscr();
	fa();
	char faa;
	gotoxy(30,25);
	cout<<" press 'e' for exit ";
	f111:
	gotoxy(50,25);
	cin>>faa;
	if((faa=='e')||(faa=='E'))
	{
		clrscr();
		doctors();
	}
	else
	goto f111;
	break;
	}
	case'2':
	{
	clrscr();
	f6();
	char f22;
	gotoxy(30,25);
	cout<<" press 'e' for exit ";
	f222:
	gotoxy(50,25);
	cin>>f22;
	if((f22=='e')||(f22=='E'))
	{
		clrscr();
		doctors();
	}
	else
	goto f222;
	break;
	}
	case'3':
	{
	clrscr();
	f5();
	char f33;
	gotoxy(30,25);
	cout<<" press 'e' for exit ";
	f333:
	gotoxy(50,25);
	cin>>f33;
	if((f33=='e')||(f33=='E'))
	{
		clrscr();
		doctors();
	}
	else
	goto f333;
	break;
	}
	case'4':
	{
	clrscr();
	f3();
	char f44;
	gotoxy(30,25);
	cout<<" press 'e' for exit ";
	f444:
	gotoxy(50,25);
	cin>>f44;
	if((f44=='e')||(f44=='E'))
	{
		clrscr();
		doctors();
	}
	else
	goto f444;
	break;
	}
	case'5':
	{
	clrscr();
	f4();
	char f55;
	gotoxy(30,25);
	cout<<" press 'e' for exit ";
	f555:
	gotoxy(50,25);
	cin>>f55;
	if((f55=='e')||(f55=='E'))
	{
		clrscr();
		doctors();
	}
	else
	goto f555;
	break;
	}
	case'6':
	{
	clrscr();
	f2();
	char f66;
	gotoxy(30,25);
	cout<<" press 'e' for exit ";
	f666:
	gotoxy(50,25);
	cin>>f66;
	if((f66=='e')||(f66=='E'))
	{
		clrscr();
		doctors();
	}
	else
	goto f666;
	break;
	}
	default:
	gotoxy(30,23);
	cout<<" press 'e' for exit ";
	gotoxy(56,23);
	cin>>c;
	if((c=='e')||(c=='E'))
	{
	clrscr();
	menu();
	}
	else
	{
	clrscr();
	gotoxy(35,12);
	cout<<"wrong choice";
	delay(1000);
	goto s;
	}
}
}

void fa()
{
gotoxy(3,2);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(3,3);
cout<<"±       ±        ±      ±     ±±±  ±      ±  ±±±±      ±      ± ±±±± ±±";
gotoxy(3,4);
cout<<"±  ±±±±±±  ±±±±  ±  ±±  ±  ±±± ±±  ±  ±±  ±  ±±±±  ±±  ±  ±±±±±± ±± ±±±";
gotoxy(3,5);
cout<<"±  ±±±±±±        ±      ±  ±±±± ±  ±  ±±  ±  ±±±±  ±±  ±  ±   ±±±  ±±±±";
gotoxy(3,6);
cout<<"±  ±±±±±±  ±±±±  ±   ±±±±  ±±± ±±  ±  ±±  ±  ±±±±  ±±  ±  ±±± ±±±  ±±±±";
gotoxy(3,7);
cout<<"±       ±  ±±±±  ±  ±  ±±     ±±±  ±      ±     ±      ±      ±±±  ±±±±";
gotoxy(3,8);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥      DESIGNATION       ≥       NAMES OF DOCTOR      ≥";
gotoxy(16,12);
cout<<"≥                        ≥                            ≥";
gotoxy(16,13);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,14);
cout<<"≥       PROFESSOR        ≥       DR.PRADEEP SINGH     ≥";
gotoxy(16,15);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,16);
cout<<"≥  ADDITIONAL PROFESSOR  ≥       DR.RONNEY MASSEY     ≥";
gotoxy(16,17);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,18);
cout<<"≥  ASSOCIATE PROFESSOR	≥       DR.S.RAJESWARI       ≥";
gotoxy(16,19);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,20);
cout<<"≥  ASSISTANT PROFESSOR	≥       DR.SHALINI SINGHAL   ≥";
gotoxy(16,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,22);
cout<<"≥  ASSISTANT PROFESSOR   ≥       DR.UDAY SINGH        ≥";
gotoxy(16,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
getch();
}
void f2()
{
gotoxy(1,2);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(1,3);
cout<<"±     ±    ±±±±  ±    ±±±      ±      ±  ±    ±±±±  ±     ±  ±±±±     ±      ± ±±±± ±±";
gotoxy(1,4);
cout<<"±  ±±±±  ±  ±±±  ±  ±± ±±  ±±±±±  ±±  ±  ±  ±  ±±±  ±  ±  ±  ±±±±  ±  ±  ±±±±±± ±± ±±±";
gotoxy(1,5);
cout<<"±     ±  ±±  ±±  ±  ±±± ±  ±±±±±      ±  ±  ±±  ±±  ±  ±  ±  ±±±±  ±  ±  ±   ±±±  ±±±±";
gotoxy(1,6);
cout<<"±±±±  ±±±  ±  ±  ±± ±±  ±±±±±  ± ±±±  ±  ±±±  ±  ±  ±  ±  ±±±±  ±  ±  ±±± ±±±  ±±±±";
gotoxy(1,7);
cout<<"±     ±  ±±±±    ±    ±±±      ±  ±±  ±  ±  ±±±±    ±     ±     ±     ±      ±±±  ±±±±";
gotoxy(1,8);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥      DESIGNATION       ≥       NAMES OF DOCTOR      ≥";
gotoxy(16,12);
cout<<"≥                        ≥                            ≥";
gotoxy(16,13);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,14);
cout<<"≥       PROFESSOR        ≥       DR.ISANTA DAYAL      ≥";
gotoxy(16,15);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,16);
cout<<"≥  ADDITIONAL PROFESSOR  ≥       DR.RANJEET SINGH     ≥";
gotoxy(16,17);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,18);
cout<<"≥  ASSOCIATE PROFESSOR	≥       DR.RAHISH KHAN       ≥";
gotoxy(16,19);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,20);
cout<<"≥  ASSISTANT PROFESSOR	≥       DR.PREETI PUSHPAN    ≥";
gotoxy(16,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,22);
cout<<"≥  ASSISTANT PROFESSOR	≥       DR. ANJAN TRIKHA     ≥";
gotoxy(16,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
}
void f3()
{
gotoxy(1,2);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(1,3);
cout<<"±     ±  ±±±  ±    ±±±±  ±      ±     ±     ±      ± ±±±±      ±      ±  ±±±  ±±";
gotoxy(1,4);
cout<<"± ±±±±±±  ±  ±±  ±  ±±±  ±  ±±  ±  ±±±±  ±±±±  ±±  ± ±±±±  ±±  ±  ±±±±±±  ±  ±±±";
gotoxy(1,5);
cout<<"± ±   ±±±   ±±±  ±±  ±±  ±      ±     ±  ±±±±  ±±  ± ±±±±  ±±  ±  ±   ±±±   ±±±±";
gotoxy(1,6);
cout<<"± ±±  ±±±   ±±±  ±±±  ±  ±  ±±  ±  ±±±±  ±±±±  ±±  ± ±±±±  ±±  ±  ±±  ±±±± ±±±±±";
gotoxy(1,7);
cout<<"±     ±±±   ±±±  ±±±±    ±  ±±  ±     ±     ±      ±    ±      ±      ±±±± ±±±±±";
gotoxy(1,8);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥      DESIGNATION       ≥       NAMES OF DOCTOR      ≥";
gotoxy(16,12);
cout<<"≥                        ≥                            ≥";
gotoxy(16,13);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,14);
cout<<"≥      PROFESSOR         ≥       DR.SHASHI BHUSHAN    ≥";
gotoxy(16,15);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,16);
cout<<"≥  ADDITIONAL PROFESSOR  ≥       DR.PARVEZ ANSARI     ≥";
gotoxy(16,17);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,18);
cout<<"≥   ASSOCIATE PROFESSOR  ≥       DR.NIZAMUDDIN        ≥";
gotoxy(16,19);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,20);
cout<<"≥   ASSISTANT PROFESSOR	≥       DR.SHRUTI SINGHAL    ≥";
gotoxy(16,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,22);
cout<<"≥   ASSISTANT PROFESSOR	≥       DR.SUBHASH           ≥";
gotoxy(16,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
}
void f4()
{
gotoxy(3,2);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(3,3);
cout<<"±  ±±  ±     ±      ±      ±      ±      ±  ±±±±      ±     ±±  ±±±  ±±";
gotoxy(3,4);
cout<<"±  ±±  ±  ±±±±  ±±  ±  ±±  ±±±  ±±±  ±±  ±  ±±±±  ±±  ±  ±±±±±±  ±  ±±±";
gotoxy(3,5);
cout<<"±      ±     ±      ±      ±±±  ±±±  ±±  ±  ±±±±  ±±  ±  ±±  ±±±   ±±±±";
gotoxy(3,6);
cout<<"±  ±±  ±  ±±±±  ±±±±±  ±±  ±±±  ±±±  ±±  ±  ±±±±  ±±  ±  ±±± ±±±± ±±±±±";
gotoxy(3,7);
cout<<"±  ±±  ±     ±  ±±±±±  ±±  ±±±  ±±±      ±     ±      ±      ±±±± ±±±±±";
gotoxy(3,8);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥      DESIGNATION       ≥       NAMES OF DOCTOR      ≥";
gotoxy(16,12);
cout<<"≥                        ≥                            ≥";
gotoxy(16,13);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,14);
cout<<"≥      PROFESSOR         ≥       DR.JASWANT	     ≥";
gotoxy(16,15);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,16);
cout<<"≥  ADDITIONAL PROFESSOR  ≥       DR.SAMIR KUMAR       ≥";
gotoxy(16,17);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,18);
cout<<"≥  ASSOCIATE PROFESSOR	≥       DR.REENA DHINGRA     ≥";
gotoxy(16,19);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,20);
cout<<"≥  ASSISTANT PROFESSOR	≥       DR.AJEET BHOI        ≥";
gotoxy(16,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,22);
cout<<"≥  ASSISTANT PROFESSOR	≥       DR.PUNEET KHANNA     ≥";
gotoxy(16,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";}
void f5()
{
gotoxy(3,2);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(3,3);
cout<<"±   ±±±±±  ±      ±  ±±  ±      ±      ±  ±±±±      ±     ±±  ±±±  ±±";
gotoxy(3,4);
cout<<"±  ±  ±±±  ±  ±±±±±  ±±  ±  ±±  ±  ±±  ±  ±±±±  ±±  ±  ±±±±±±  ±  ±±±";
gotoxy(3,5);
cout<<"±  ±±  ±±  ±      ±  ±±  ±      ±  ±±  ±  ±±±±  ±±  ±  ±±  ±±±   ±±±±";
gotoxy(3,6);
cout<<"±  ±±±  ±  ±  ±±±±±  ±±  ±   ±±±±  ±±  ±  ±±±±  ±±  ±  ±±± ±±±± ±±±±±";
gotoxy(3,7);
cout<<"±  ±±±±    ±      ±      ±  ±   ±      ±     ±      ±      ±±±± ±±±±±";
gotoxy(3,8);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥      DESIGNATION       ≥       NAMES OF DOCTOR      ≥";
gotoxy(16,12);
cout<<"≥                        ≥                            ≥";
gotoxy(16,13);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,14);
cout<<"≥      PROFESSOR         ≥      DR.SAMIR KARMARKAR    ≥";
gotoxy(16,15);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,16);
cout<<"≥  ADDITIONAL PROFESSOR  ≥      DR.RAHUL THAKUR       ≥";
gotoxy(16,17);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,18);
cout<<"≥  ASSOCIATE PROFESSOR	≥      DR.GIRIDHARI          ≥";
gotoxy(16,19);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,20);
cout<<"≥  ASSISTANT PROFESSOR   ≥      DR.SNEHA SINGHAL      ≥";
gotoxy(16,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,22);
cout<<"≥  ASSISTANT PROFESSOR	≥      DR.YASHPAL            ≥";
gotoxy(16,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
}
void f6()
{
gotoxy(1,2);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(1,3);
cout<<"±    ±   ±±±±   ±   ±±±±   ±  ±±  ±   ±±±±±  ±      ±  ±±±±      ±     ±  ±±±  ±";
gotoxy(1,4);
cout<<"±±  ±±  ± ±± ±  ±  ± ±± ±  ±  ±±  ±  ±  ±±±  ±  ±±  ±  ±±±±  ±±  ±  ±±±±±  ±  ±±";
gotoxy(1,5);
cout<<"±±  ±±  ±±  ±±  ±  ±±  ±±  ±  ±±  ±  ±±  ±±  ±  ±±  ±  ±±±±  ±±  ±  ±   ±±   ±±±";
gotoxy(1,6);
cout<<"±±  ±±  ±±±±±±  ±  ±±±±±±  ±  ±±  ±  ±±±  ±  ±  ±±  ±  ±±±±  ±±  ±  ±±± ±±± ±±±±";
gotoxy(1,7);
cout<<"±    ±  ±±±±±±  ±  ±±±±±±  ±      ±  ±±±±    ±      ±     ±      ±      ±±± ±±±±";
gotoxy(1,8);
cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
gotoxy(16,10);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(16,11);
cout<<"≥      DESIGNATION       ≥       NAMES OF DOCTOR      ≥";
gotoxy(16,12);
cout<<"≥                        ≥                            ≥";
gotoxy(16,13);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,14);
cout<<"≥      PROFESSOR         ≥    DR.RIMA SEHGAL          ≥";
gotoxy(16,15);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,16);
cout<<"≥ ADDITIONAL PROFESSOR   ≥    DR.TONY GEORGE JACOB    ≥";
gotoxy(16,17);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,18);
cout<<"≥ ASSOCIATE PROFESSOR    ≥    DR.KALPANA LUTHRA       ≥";
gotoxy(16,19);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,20);
cout<<"≥ ASSISTANT PROFESSOR    ≥    DR.M.R. RAJESHWARI      ≥";
gotoxy(16,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(16,22);
cout<<"≥ ASSISTANT PROFESSOR	≥    DR.SUDEEP SEN           ≥";
gotoxy(16,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
}

void emergency()
{
for(int i=0;i<103;i++)
{
	gotoxy(1,i);
	delay(10);
	cout<<"€";
}
for(i=0;i<80;i++)
{
	gotoxy(i,1);
	delay(10);
	cout<<"€";
	if(i==79)
	{
		for(int j=2;j<=25;j++)
		{
			gotoxy(79,j);
			delay(10);
			cout<<"€";
		}
	}
}
for(i=2;i<25;i++)
{
	gotoxy(2,i);
	delay(10);
	cout<<"∞";
}
for(i=2;i<79;i++)
{
	gotoxy(i,24);
	delay(10);
	cout<<"∞";
}
for(i=2;i<79;i++)
{
	gotoxy(i,2);
	delay(10);
	cout<<"∞";
	if(i==78)
	{
		for(int j=3;j<=24;j++)
		{
			gotoxy(78,j);
			delay(10);
			cout<<"∞";
		}
	}
}
gotoxy(6,3);
cout<<"± ±   ± ±±± ±±± ±±±± ±   ± ±±± ±±± ± ±±± ±   ±   ±±± ±±±± ±±±± ±   ±";
gotoxy(6,4);
cout<<"± ±±  ± ±   ± ± ±  ± ±± ±± ± ±  ±  ± ± ± ±±  ±   ±   ±  ± ±  ± ±± ±±";
gotoxy(6,5);
cout<<"± ± ± ± ±±± ± ± ±±±± ± ± ± ±±±  ±  ± ± ± ± ± ±   ±±± ±  ± ±±±± ± ± ±";
gotoxy(6,6);
cout<<"± ±  ±± ±   ± ± ± ±  ±   ± ± ±  ±  ± ± ± ±  ±±   ±   ±  ± ± ±  ±   ±";
gotoxy(6,7);
cout<<"± ±   ± ±   ±±± ±  ± ±   ± ± ±  ±  ± ±±± ±   ±   ±   ±±±± ±  ± ±   ±";
box();
gotoxy(18,12);
cout<<"name of the patient :__________________________";
gotoxy(18,13);
cout<<"age                 :__________________________";
gotoxy(18,14);
cout<<"sex                 :__________________________";
gotoxy(18,15);
cout<<"address             :__________________________";
gotoxy(18,16);
cout<<"phone number        :__________________________";
gotoxy(18,17);
cout<<"diagnosis           :__________________________";
gotoxy(18,18);
cout<<"consulting doctor   :__________________________";
gotoxy(18,19);
cout<<"previous report     :__________________________";
data();
p:
gotoxy(30,22);
cout<<"press 'c' for continue";
gotoxy(52,22);
char c=getch();
if((c=='c')||(c=='C'))
{
	clrscr();
	ward();
}
else
{
gotoxy(52,22);
cout<<" (wrong choice)";
delay(1000);
gotoxy(52,22);
cout<<"               ";
goto p;
}
}

void hospital::input()
{
o1:
gotoxy(40,12);
gets(n);
for(int i=0;i<strlen(n);i++)
{
	if(!((n[i]>='a'&&n[i]<='z')||(n[i]>='A'&&n[i]<='Z')||(n[i]==' ')))
	{
		gotoxy(40,12);
		cout<<"_________________________";
		goto o1;
	}
}
if(n[0]=='\0')
{
gotoxy(40,12);
		cout<<"_________________________";
		goto o1;
}
o2:
gotoxy(40,13);
gets(a1);
for(i=0;i<strlen(a1);i++)
{
	if(!isdigit(a1[i]))
	{
		gotoxy(40,13);
		cout<<"_________________________";
		goto o2;
	}
}
if(a1[0]=='\0')
{
gotoxy(40,13);
		cout<<"_________________________";
		goto o2;
}
o3:
gotoxy(40,14);
gets(s);
if((strcmpi(s,"male")!=0)&&(strcmpi(s,"female")!=0)&&(strcmpi(s,"other")!=0))
{
	gotoxy(40,14);
	cout<<"_________________________";
	goto o3;
}
o4:
gotoxy(40,15);
gets(a);
int f=0;
for(i=0;i<strlen(a);i++)
{
	if((a[i]==' ')||(a[i]==','))
		f++;
	if((f<2)&&(i==strlen(a)-1))
	{
		gotoxy(40,15);
		cout<<"_________________________";
		goto o4;
	}
}
if(a[0]=='\0')
{
gotoxy(40,15);
		cout<<"_________________________";
		goto o4;
}
o5:
gotoxy(40,16);
gets(p);
if(strlen(p)==10)
{
for(i=0;i<strlen(p);i++)
{
	if(!isdigit(p[i]))
	{
		gotoxy(40,16);
		cout<<"_________________________";
		goto o5;
	}
}
}
if((p[0]=='\0')||(strlen(p)!=10))
{
gotoxy(40,16);
		cout<<"_________________________";
		goto o5;
}
o6:
gotoxy(40,17);
gets(d);
for(i=0;i<strlen(d);i++)
{
	if(!((d[i]>='a'&&d[i]<='z')||(d[i]>='A'&&d[i]<='Z')||(d[i]==' ')))
	{
			gotoxy(40,17);
		cout<<"_________________________";
		goto o6;
	}
}
if(d[0]=='\0')
{
gotoxy(40,17);
		cout<<"_________________________";
		goto o6;
}
o7:
gotoxy(40,18);
gets(c);
for(i=0;i<strlen(c);i++)
{
	if(!((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')||(c[i]==' ')))
	{
		gotoxy(40,18);
		cout<<"_________________________";
		goto o7;
	}
}
if(c[0]=='\0')
{
gotoxy(40,18);
		cout<<"_________________________";
		goto o7;
}
o8:
gotoxy(40,19);
gets(r);
for(i=0;i<strlen(r);i++)
{
	if(!((r[i]>='a'&&r[i]<='z')||(r[i]>='A'&&r[i]<='Z')||(r[i]==' ')))
	{
		gotoxy(40,19);
		cout<<"_________________________";
		goto o8;
	}
}
if(r[0]=='\0')
{
gotoxy(40,19);
		cout<<"_________________________";
		goto o8;
}
}
void data()
{
f.open("hosp.dat",ios::binary|ios::app);
	h.input();
	f.write((char*)&h,sizeof(h));
f.close();
}
void data1()
{
f.open("hosp.dat",ios::binary|ios::in);
f.seekg(0);
clrscr();
while(f.read((char*)&h,sizeof(h)))
{
	h.display();
}
f.close();
}
void data2()
{
f1.open("hos2.dat",ios::binary|ios::app);
	h.input();
	f1.write((char*)&h,sizeof(h));
f1.close();
}
void data3()
{
f1.open("hos2.dat",ios::binary|ios::in);
f1.seekg(0);
clrscr();
while(f1.read((char*)&h,sizeof(h)))
{
	h.display();
}
f1.close();
}

void record()
{
border();
gotoxy(3,6);
cout<<"±±±±±±±±±±  ±±±±±±±±± ±±±±±±±± ±±±±±±±±±± ±±±±±±±±±±  ±±±±±±±±±   ±±±±±±±±±";
gotoxy(3,7);
cout<<"±±      ±±  ±±        ±±       ±±      ±± ±±      ±±  ±±      ±±± ±±±      ";
gotoxy(3,8);
cout<<"±±±±±±±±±±  ±±±±±±±±± ±±       ±±      ±± ±±±±±±±±±±  ±±      ±±± ±±±±±±±±±";
gotoxy(3,9);
cout<<"±±   ±±±    ±±        ±±       ±±      ±± ±±   ±±±    ±±      ±±±       ±±±";
gotoxy(3,10);
cout<<"±±      ±±± ±±±±±±±±± ±±±±±±±± ±±±±±±±±±± ±±      ±±± ±±±±±±±±±   ±±±±±±±±±";
	gotoxy(10,13);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,14);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,15);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,16);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,17);
	cout<<"±±±±±±±±±±   OPD   ±±±±±±±±±±";
	gotoxy(10,18);
	cout<<"±PRESS 'O'TO SEE OPD RECORDS±";
	gotoxy(10,19);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,20);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,21);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,22);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,13);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,14);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,15);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,16);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,17);
	cout<<"±±±±±±±±±±EMERGENCY±±±±±±±±±±";
	gotoxy(42,18);
	cout<<"±±PRESS 'E'TO SEE EMERGENCY±±";
	gotoxy(42,19);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,20);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,21);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,22);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(35,24);
	cout<<"press 'm' for menu";
	z:
	char ct=getch();
	if(ct=='o'||ct=='O')
	{
		data3();
		gotoxy(55,1);
		cout<<"press m for menu";
		z11:
		char ct1=getch();
		if(ct1=='m'||ct1=='M')
			menu();
		else
			goto z11;
	}
	else if(ct=='e'||ct=='E')
		data1();
	else if(ct=='m'||ct=='M')
		menu();
	else
	{
	gotoxy(39,23);
	cout<<" (wrong choice)";
	delay(1000);
	gotoxy(39,23);
	cout<<"               ";
	goto z;
	}
}

void hospital::display()
{
cout<<"name of the patient:"<<n<<"\n"<<"age                :"<<a1<<"\n"<<"sex                :"<<s<<"\n"<<"address            :"<<a<<"\n"<<"phone number       :"<<p<<"\n"<<"diagnosis          :"<<d<<"\n"<<"consulting doctor  :"<<c<<"\n"<<"previous report    :"<<r<<"\n\n";
}
void opd()
{
char c,a2;
clrscr();
border();
gotoxy(6,3);
cout<<"± ±   ± ±±± ±±± ±±±± ±   ± ±±± ±±± ± ±±± ±   ±   ±±± ±±±± ±±±± ±   ±";
gotoxy(6,4);
cout<<"± ±±  ± ±   ± ± ±  ± ±± ±± ± ±  ±  ± ± ± ±±  ±   ±   ±  ± ±  ± ±± ±±";
gotoxy(6,5);
cout<<"± ± ± ± ±±± ± ± ±±±± ± ± ± ±±±  ±  ± ± ± ± ± ±   ±±± ±  ± ±±±± ± ± ±";
gotoxy(6,6);
cout<<"± ±  ±± ±   ± ± ± ±  ±   ± ± ±  ±  ± ± ± ±  ±±   ±   ±  ± ± ±  ±   ±";
gotoxy(6,7);
cout<<"± ±   ± ±   ±±± ±  ± ±   ± ± ±  ±  ± ±±± ±   ±   ±   ±±±± ±  ± ±   ±";
box();
gotoxy(18,12);
cout<<"name of the patient :__________________________";
gotoxy(18,13);
cout<<"age                 :__________________________";
gotoxy(18,14);
cout<<"sex                 :__________________________";
gotoxy(18,15);
cout<<"address             :__________________________";
gotoxy(18,16);
cout<<"phone number        :__________________________";
gotoxy(18,17);
cout<<"diagnosis           :__________________________";
gotoxy(18,18);
cout<<"consulting doctor   :__________________________";
gotoxy(18,19);
cout<<"previous report     :__________________________";
data2();
delay(1000);
clrscr();
gotoxy(25,11);
cout<<"your details have been processed!!";
delay(100);
gotoxy(35,21);
cout<<"press m for menu";
char ch2;
o9:
gotoxy(53,21);
cin>> ch2;
if(ch2=='m')
menu();
else
{
gotoxy(34,23);
cout<<"WRONG CHOICE ENTER AGAIN";
goto o9;
}
}
void ward()
{
border();
gotoxy(7,3);delay(100);
cout<<"      €               € €€€€€€€  €€€€€€€ €€€€    €€€€€€€ ";cout<<endl;
gotoxy(7,4);delay(100);
cout<<"       €     €€€     €  €€   €€  €€   €€ €   €   €€      ";cout<<endl;
gotoxy(7,5);delay(100);
cout<<"        €   €   €   €   €€€€€€€  €€€€€€€ €    €€ €€€€€€€ ";cout<<endl;
gotoxy(7,6);delay(100);
cout<<"         € €     € €    €€   €€  €€ €€   €   €        €€ ";cout<<endl;
gotoxy(7,7);delay(100);
cout<<"         €€€     €€€    €€   €€  €€  €€€ €€€€    €€€€€€€ ";cout<<endl;
	gotoxy(10,10);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,11);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,12);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,13);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,14);
	cout<<"±±±±±±±±GENERAL WARD±±±±±±±±±";
	gotoxy(10,15);
	cout<<"±±±±±PRESS 'G' TO  ADMIT±±±±±";
	gotoxy(10,16);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,17);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,18);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(10,19);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,10);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,11);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,12);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,13);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,14);
	cout<<"±±±±±±±±PRIVATE WARD±±±±±±±±±";
	gotoxy(42,15);
	cout<<"±±±±  PRESS 'P'TO ADMIT  ±±±±";
	gotoxy(42,16);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,17);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,18);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	gotoxy(42,19);
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	z1:
	char ct=getch();
	if(ct=='g'||ct=='G'||ct=='P'||ct=='p')
		{
		clrscr();
		border();
		gotoxy(36,12);
		cout<<"ADMITTED";
		gotoxy(33,23);
		cout<<"press 'm' for menu";
		m1:
		char m=getch();
		if((m=='m')||(m=='M'))
		{
		menu();
		}
		else
		goto m1;
		}
		else
		goto z1;
}

void cash()
{
clrscr();
border();
	gotoxy(34,12);
	cout<<"1- DEBIT CARD";//GASTROINTESTIAL TRACT AND DIEASES
	gotoxy(34,14);
	cout<<"2- CREDIT CARD";//STUDIES IMMUNE SYSTEM
	z3:
	char c=getch();
	gotoxy(33,22);
	cout<<"Enter your choice :";
	if((c=='1')||(c=='2'))
	{
	clrscr();
	card();
	}
	else
	goto z3;

}
void card()
{
clrscr();
border();
gotoxy(36,6);
cout<<"CARD DETAILS";
gotoxy(36,7);
cout<<"ƒƒƒƒƒƒƒƒƒƒƒƒ";
box();
gotoxy(18,14);
cout<<"ENTER YOUR CARD NUMBER      :__________________";
gotoxy(18,15);
cout<<"ENTER CARD HOLDER NAME      :__________________";
gotoxy(18,16);
cout<<"ENTER CVV NUMBER            :__________________";
gotoxy(18,17);
cout<<"ENTER EXPIRY DATE (DD/MM/YY):__________________";
char c1[19],c2[15],c3[3],c4[8];
c11:
gotoxy(47,14);
gets(c1);
if(strlen(c1)==19)
{
for( int i=0;i<strlen(c1);i++)
{       if((i==4)||(i==9)||(i==14))
	continue;
	if(!((c1[i]>='0')&&(c1[i]<='9')&&((c1[4]==' ')&&(c1[9]==' ')&&(c1[14]==' '))))
	{
			gotoxy(47,14);
		cout<<"__________________";
		goto c11;
	}
}
}
else
{
		gotoxy(47,14);
		cout<<"__________________";
		goto c11;
}
if(c1[0]=='\0')
{
gotoxy(47,14);
		cout<<"__________________";
		goto c11;
}
c22:
gotoxy(47,15);
gets(c2);
for( int i=0;i<strlen(c2);i++)
{
	if(!((c2[i]>='a'&&c2[i]<='z')||(c2[i]>='A'&&c2[i]<='Z')))
	{
		gotoxy(47,15);
		cout<<"__________________";
		goto c22;
	}
}
if(c2[0]=='\0')
{
		gotoxy(47,15);
		cout<<"__________________";
		goto c22;
}
c33:
gotoxy(47,16);
gets(c3);
if(strlen(c3)==3)
{
for(i=0;i<strlen(c3);i++)
{
	if(!(isdigit(c3[i])))
	{
		gotoxy(47,16);
		cout<<"__________________";
		goto c33;
	}
}
}
else
{
	gotoxy(47,16);
	cout<<"__________________";
	goto c33;
}
if(c3[0]=='\0')
{
		gotoxy(47,16);
		cout<<"__________________";
		goto c33;
}
c44:
gotoxy(47,17);
gets(c4);
if(strlen(c4)==8)
{
for(i=0;i<strlen(c4);i++)
{
	if((i==2)||(i==5))
	{
		c4[i]='/';
		cout<<c4[i];
	}
	else if(!(isdigit(c4[i])))
	{
			gotoxy(47,17);
		cout<<"__________________";
		goto c44;
	}
	}
}

else
{
	gotoxy(47,17);
	cout<<"__________________";
	goto c44;
}
if(c4[0]=='\0')
{
		gotoxy(47,17);
		cout<<"__________________";
		goto c44;
}
gotoxy(34,23);
cout<<"PRESS 'C' TO CONTINUE";
char c5=getch();
if((c5=='c')||(c5=='C'))
{
clrscr();
border();
gotoxy(32,12);
cout<<"TRANSACTION COMPLETED";
delay(100);
gotoxy(28,14);
cout<<"WE HOPE FOR YOUR GOOD HEALTH!";
}
}
void discharge()
{
clrscr();
cout<<"enter patient name : ";
char pn[20];
gets(pn);
f.open("hosp.dat",ios::binary|ios::in);
f.seekg(0);
while(f.read((char*)&h,sizeof(h)))
{
	if(strcmpi(pn,h.name())==0)
	h.display();
}
f.close();
delay(1000);
bill();
}

void bill()
{
clrscr();
border();
gotoxy(36,2);
cout<<"SP HOSPITAL";
gotoxy(36,3);
cout<<"ƒƒƒƒƒƒƒƒƒƒƒ";
gotoxy(13,4);
cout<<"⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
gotoxy(13,5);
cout<<"≥   Admission charges            ≥                    ≥";
gotoxy(13,6);
cout<<"≥   Bed charges                  ≥                    ≥";
gotoxy(13,7);
cout<<"≥   Nursing charges              ≥                    ≥";
gotoxy(13,8);
cout<<"≥   Pathology charges            ≥                    ≥";
gotoxy(13,9);
cout<<"≥   Operation charges            ≥                    ≥";
gotoxy(13,10);
cout<<"≥   Blood transfusion charges    ≥                    ≥";
gotoxy(13,11);
cout<<"≥   Traction charges             ≥                    ≥";
gotoxy(13,12);
cout<<"≥   Plaster cast charges         ≥                    ≥";
gotoxy(13,13);
cout<<"≥   Physician charges            ≥                    ≥";
gotoxy(13,14);
cout<<"≥   Dressing charges             ≥                    ≥";
gotoxy(13,15);
cout<<"≥   Miscellaneous charges        ≥                    ≥";
gotoxy(13,16);
cout<<"≥   O.T.charges                  ≥                    ≥";
gotoxy(13,17);
cout<<"≥   Oxygen charges               ≥                    ≥";
gotoxy(13,18);
cout<<"≥   Monitoring charges           ≥                    ≥";
gotoxy(13,19);
cout<<"≥   Nebulization charges         ≥                    ≥";
gotoxy(13,20);
cout<<"≥   Others charges               ≥                    ≥";
gotoxy(13,21);
cout<<"√ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥";
gotoxy(13,22);
cout<<"≥              TOTAL             ≥                    ≥";
gotoxy(13,23);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
int b1,b2,b3,b4,b5,b6,b7,t;
randomize();
gotoxy(49,5);
b1=600+random(100);
cout<<b1;
gotoxy(49,6);
b2=1200+random(200);
cout<<b2;
gotoxy(49,7);
b3=500+random(200);
cout<<b3;
gotoxy(49,8);
b4=1500+random(300);
cout<<b4;
gotoxy(49,9);
b5=8000+random(500);
cout<<b5;
gotoxy(49,10);
b6=2000+random(2000);
cout<<b6;
gotoxy(49,11);
b7=900+random(200);
cout<<b7;
t=b1+b2+b3+b4+b5+b6+b7;
gotoxy(49,22);
cout<<t;
		z2:
		delay(1000);
		gotoxy(32,24);
		cout<<"PRESS 'C' FOR PAYMENT";
		char ct1=getch();
		if(ct1=='C'||ct1=='c')
			cash();
		else
		goto z2;
}


