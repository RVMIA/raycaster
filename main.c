#include <stdio.h>
#include <unistd.h>
#include <math.h>

int termWidth = 100;
int termHeight = 40;

struct Point
{
  float x, y, z;
};

void drawPoint(int x, int y, char c)
{
  printf("\x1b[%d;%dH", y, x);
  printf("%c", c);
}

int normalizeX(float x)
{
  return (( x + 1.0 ) * ( termWidth * 0.5 ) + 30);
}

int normalizeY(float y)
{
  return ((( 1.0 - y ) * ( termHeight * 0.5 )) + 2);
}
float a = (1*(M_PI/6));
float b = (2*(M_PI/6));
float c = (3*(M_PI/6));
float d = (4*(M_PI/6));
float e = (5*(M_PI/6));
float f = (6*(M_PI/6));
float g = (7*(M_PI/6));
float h = (8*(M_PI/6));
float i = (9*(M_PI/6));
float j = (10*(M_PI/6));
float k = (11*(M_PI/6));
float l = (0);

int main()
{
 
  printf("\x1B[?25l");
  while(1)
    {
      printf("\x1b[2J");
      drawPoint(normalizeX(cos(a)), normalizeY(sin(a)), '#');
      drawPoint(normalizeX(cos(b)), normalizeY(sin(b)), '#');
      drawPoint(normalizeX(cos(c)), normalizeY(sin(c)), '#');
      drawPoint(normalizeX(cos(d)), normalizeY(sin(d)), '#');
      drawPoint(normalizeX(cos(e)), normalizeY(sin(e)), '#');
      drawPoint(normalizeX(cos(f)), normalizeY(sin(f)), '#');
      drawPoint(normalizeX(cos(g)), normalizeY(sin(g)), '#');
      drawPoint(normalizeX(cos(h)), normalizeY(sin(h)), '#');
      drawPoint(normalizeX(cos(i)), normalizeY(sin(i)), '#');
      drawPoint(normalizeX(cos(j)), normalizeY(sin(j)), '#');
      drawPoint(normalizeX(cos(k)), normalizeY(sin(k)), '#');
      drawPoint(normalizeX(cos(l)), normalizeY(sin(l)), '#');
      usleep(70000);
      
    }
  printf("\x1B[?25h");
  return 0;
}
