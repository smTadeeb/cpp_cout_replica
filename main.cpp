#include<iostream>

namespace TadeebsStandardDevice
{

void atla()
{
printf("\n");
}

class Ekranda
{
public:

Ekranda & operator<<(void (*ptr)())
{
ptr();
return *this;
}


Ekranda & operator<<(const char *val)    //void operator<<(const char *val)
{
printf("%s",val);
return *this;
}

Ekranda & operator<<(const int val)
{
printf("%d",val);
return *this;
}

Ekranda & operator<<(const char val)
{
printf("%c",val);
return *this;
}

Ekranda & operator<<(const int *val)
{
printf("%u",val);
return *this;
}

};
Ekranda goster;
}

using namespace TadeebsStandardDevice;
int main()
{
int x;
char y;
x=10;
y='A';

char b[7] = "Tadeeb";

int *ptr_int;
char *ptr_char;
ptr_int=&x;
ptr_char=&y;


goster<<"Tadeeb is a Developer"<<atla;         
goster<<x<<atla;  
goster<<y<<atla;
goster<<b<<atla<<ptr_int<<atla;

return 0;
}
