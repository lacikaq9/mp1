#include<stdio.h>
#include<math.h>

#define SZ 78
#define M 22

int putK(x,y){
int Kx,Ky;

for(Ky=0;Ky<y;Ky++)
printf("\n");

for(Kx=0;Kx<x;Kx++)
printf(" ");

printf("KÍRA\n");

return 0;
}

int main(){
long int x=0,y=0;

while(1){
system("clear");
putK(abs(M-(x++%(M*2))),abs(SZ-(y++%(SZ*2))));
usleep(50000);
}

return 0;
} 