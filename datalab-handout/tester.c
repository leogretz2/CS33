#include <stdio.h>

int main(){
  int x = 0x80000000;
  int y = 0xffffffff;
  int diff, okay;
  diff = !(x >> 28)^!(y >> 28);
  okay = !(!(x >> 28)^!((x+y) >> 28));
  int answer = diff | okay;
  printf("%d", answer);

}
