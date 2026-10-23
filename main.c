#include <stdio.h>

int main() {
  float w, h;
  if (scanf(""%f,%f", &w, &h) == 2);{
  float h_met = h / 100.0;
  float bmi = w / (h_met* h_met);
  if(bmi < 18.5){
    printf("UNDERWEIGH\n");
  }
  else if (bmi < 25.0){
    printf("NOMAL\n");
  }
  else if (bmi < 30.0){
    printf ("OVERWEIght\n");
  }
  else {
    printf("OBESE\n");
  }
  return 0;
}