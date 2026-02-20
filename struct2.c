#include <stdio.h>
struct point {
   float x;
   float y;
};
int main(){
  struct point p1;
  printf("donner les courdonnes x : ");
  scanf("%f",&p1.x);
  printf("donner les courdonnes y : ");
  scanf("%f",&p1.y);
  printf("le point de courdonned : ( %.2f , %.2f )\n",p1.x,p1.y);
  float dx,dy;
  printf("donner la deplacement en x : ");
  scanf("%f",&dx);
  printf("donner la deplacement en y : ");
  scanf("%f",&dy);
  p1.x += dx;
  p1.y += dy;
  printf(" cordonnes apres le deplacement (%.2f,%.2f)\n ",p1.x,p1.y);
struct point p2;
  printf("donner les courdonnes x2 : ");
  scanf("%f",&p2.x);
  printf("donner les courdonnes y2 : ");
  scanf("%f",&p2.y);
  printf("le point de courdonned point 2: ( %.2f , %.2f )\n",p2.x,p2.y);
  struct point middle;
  middle.x = (p1.x + p2.x)/2;
  middle.y = (p1.y + p2.y)/2;
  printf(" le millieux de courdonnes (%.2f,%.2f)\n");
}
