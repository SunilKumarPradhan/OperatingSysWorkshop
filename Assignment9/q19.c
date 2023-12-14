#include <stdio.h>
#include <string.h>

typedef struct {
  int hour, min, sec;
} time_t;

time_t new_time(time_t time_of_day, int els) {
  int h = time_of_day.hour;
  int m = time_of_day.min;
  int s = time_of_day.sec;

  time_of_day.sec = (s + els) % 60;
  time_of_day.min = (((s + els) / 60) + m) % 60;
  time_of_day.hour = (((((s + els) / 60) + m) / 60) + h) % 24;

  return time_of_day;
}

int main() {
  time_t curr = {21, 58, 32};
  curr = new_time(curr, 97);
  printf("The current time is %02d-%02d-%02d", curr.hour, curr.min, curr.sec);
  return 0;
}