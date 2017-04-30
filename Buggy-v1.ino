#define IRL A0
#define IRR A1

int l1 = 5;
int l2 = 6;
int r1 = 7;
int r2 = 8;


void setup() {
pinMode(IRL,INPUT);
pinMode(IRR,INPUT);
pinMode(l1,OUTPUT);
pinMode(r1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(r2,OUTPUT);
}

void rl()
{
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
}
void rr()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
}
void lf()
{
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
}
void rf()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
}
void ff()
{
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
}
void bb()
{
  digitalWrite(l2,HIGH);
  digitalWrite(l1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r1,LOW);
}
void wooo()
{
  rl();
  delay(1000);
  ff();
  delay(1500);
  while(1)
  {
    rr(); delay(1000);
    rl(); delay(1000);
  }
}

int li = 0;
int ri = 0;
int lap = 0;
void readIR()
{
  li = analogRead(IRL);
  ri = analogRead(IRR);
}

int retconst = 0;
void retrace()
{
  readIR();
  if (retconst>200 && li>500 && ri>500)
  {
    bb();
    delay(300);
    retconst=0;
  }
  else if(retconst<200 && li>500 && ri>500)
  {
    retconst++;
  }
}

void reproute()
{
    if(li<500 && ri<500)
  {
    retconst=0;
    if(lap>3)
    {
      rf();
      delay(300);
      ff();
      delay(110);
      lap++;
    }
    else if(lap<=3)
    {
      lf();
      delay(200);
      ff();
      delay(100);
      lap++;
    }  
  }

  else if(li<500 && ri>500)
  {retconst=0;
    lf();
  }

  else if(li>500 && ri<500)
  {retconst=0;
    rf();
  }

  else if(li>500 && ri>500)
  {
    ff();
    retrace();
  }
}

int park1 =0;
void parkroute()
{
      if(li<500 && ri<500)
  {
    retconst=0;
    if(park1<1)
    {
      ff();
      delay(300);
      park1++;
    }
    else if(park1>=1)
    {
      wooo();
    }  
  }

  else if(li<500 && ri>500)
  {retconst=0;
    lf();
  }

  else if(li>500 && ri<500)
  {retconst=0;
    rf();
  }

  else if(li>500 && ri>500)
  {
    ff();
    //retrace();
  }
}

void loop() {
  readIR();

  if(lap<=3)
  {
    reproute();
  }
  else parkroute();
}
